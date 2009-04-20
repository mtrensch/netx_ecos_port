//==========================================================================
//
//      netx_misc.c
//
//      HAL misc board support code for netX
//
//==========================================================================
//####ECOSGPLCOPYRIGHTBEGIN####
// -------------------------------------------
// This file is part of eCos, the Embedded Configurable Operating System.
// Copyright (C) 1998, 1999, 2000, 2001, 2002 Red Hat, Inc.
//
// eCos is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 or (at your option) any later version.
//
// eCos is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with eCos; if not, write to the Free Software Foundation, Inc.,
// 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
//
// As a special exception, if other files instantiate templates or use macros
// or inline functions from this file, or you compile this file and link it
// with other works to produce a work based on this file, this file does not
// by itself cause the resulting work to be covered by the GNU General Public
// License. However the source code for this file must still be made available
// in accordance with section (3) of the GNU General Public License.
//
// This exception does not invalidate any other reasons why a work based on
// this file might be covered by the GNU General Public License.
//
// Alternative licenses for eCos may be arranged by contacting Red Hat, Inc.
// at http://sources.redhat.com/ecos/ecos-license/
// -------------------------------------------
//####ECOSGPLCOPYRIGHTEND####
//==========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):    Michael Trensch
// Contributors: 
// Date:         2006-02-26
// Purpose:      HAL board support
// Description:  Implementations of HAL board interfaces
//
//####DESCRIPTIONEND####
//
//========================================================================*/

#include <pkgconf/hal.h>
#include <pkgconf/system.h>
#include CYGBLD_HAL_PLATFORM_H

#include <cyg/infra/cyg_type.h>         // base types
#include <cyg/infra/cyg_trac.h>         // tracing macros
#include <cyg/infra/cyg_ass.h>          // assertion macros

#include <cyg/hal/hal_io.h>             // IO macros
#include <cyg/hal/hal_arch.h>           // Register state info
#include <cyg/hal/hal_diag.h>
#include <cyg/hal/hal_intr.h>           // Interrupt names
#include <cyg/hal/hal_cache.h>
#include <cyg/hal/hal_netx.h>           // Platform specifics

#include <cyg/infra/diag.h>             // diag_printf

#include <string.h> // memset

#define HAL_INT_NUM_VECTORED 16     /**< number of vectored interrupts      */
#define HAL_INT_NUM_NONVECTORED 16  /**< number of nonvectored interrupts   */

static PVIC_REGISTERS  s_ptVic  = NULL;  //!< virtual address of vector interrupt controller
static PGPIO_REGISTERS s_ptGPIO = NULL;  //!< virtual address of GPIO registers

extern cyg_uint32 hal_virt_to_phys_address(cyg_uint32 virt);
extern cyg_uint32 hal_phys_to_virt_address(cyg_uint32 phys, cyg_bool fCached);

// ///////////////////////////////////////////////////
//!  \typedef int (* PFN_ISR_ADDRESS) (void);
//!  ISR function ptr prototype
// ///////////////////////////////////////////////////
typedef int(* PFN_ISR_ADDRESS) (void);

static int ISRAddrTimer0(void);
static int ISRAddrTimer1(void);
static int ISRAddrTimer2(void);
static int ISRAddrCom0(void);
static int ISRAddrCom1(void);
static int ISRAddrCom2(void);
static int ISRAddrCom3(void);
static int ISRAddrUart0(void);
static int ISRAddrUart1(void);
static int ISRAddrUart2(void);
static int ISRAddrHIF(void);
static int ISRAddrGpio(void);
static int ISRAddrMsync0(void);
static int ISRAddrMsync1(void);
static int ISRAddrMsync2(void);
static int ISRAddrMsync3(void);

static int ISRAddrSW(void);
static int ISRAddrSystimeNS(void);
static int ISRAddrSystimeS(void);
static int ISRAddrGpio31(void);
static int ISRAddrWatchdog(void);
static int ISRAddrUSB(void);
static int ISRAddrSPI(void);
static int ISRAddrI2C(void);
static int ISRAddrPhy(void);
static int ISRAddrTimer3(void);
static int ISRAddrTimer4(void);
static int ISRAddrVfp9(void);
static int ISRAddrDmac(void);
static int ISRAddrTriggerLatch(void);

int ISRAddrDefault(void);

// ///////////////////////////////////////////////////
//!  \typedef struct IRQMAPPING
//! IRQ Mapping table entry. ISR <--> IRQ number
// ///////////////////////////////////////////////////
typedef struct tagIRQMAPPING
{
    PFN_ISR_ADDRESS ISRAddrVect;  //!< returned IRQHandler value
    cyg_uint32      irqnum;       //!< physical IRQ number for handler
} IRQMAPPING;

// ///////////////////////////////////////////////////// 
//! vectored interrupts assignment. Lower index = higher priority
// ////////////////////////////////////////////////////
static IRQMAPPING s_atIntVect[HAL_INT_NUM_VECTORED] =
{
  {ISRAddrTimer0,     SRT_vic_irq_status_timer0},
  {ISRAddrTimer1,     SRT_vic_irq_status_timer1},
  {ISRAddrTimer2,     SRT_vic_irq_status_timer2},
  {ISRAddrCom0,       SRT_vic_irq_status_com0},
  {ISRAddrCom1,       SRT_vic_irq_status_com1},
  {ISRAddrCom2,       SRT_vic_irq_status_com2},
  {ISRAddrCom3,       SRT_vic_irq_status_com3},
  {ISRAddrUart0,      SRT_vic_irq_status_uart0},
  {ISRAddrUart1,      SRT_vic_irq_status_uart1},
  {ISRAddrUart2,      SRT_vic_irq_status_uart2},
  {ISRAddrHIF,        SRT_vic_irq_status_hif},
  {ISRAddrGpio,       SRT_vic_irq_status_gpio},
  {ISRAddrMsync0,     SRT_vic_irq_status_msync0},
  {ISRAddrMsync1,     SRT_vic_irq_status_msync1},
  {ISRAddrMsync2,     SRT_vic_irq_status_msync2},
  {ISRAddrMsync3,     SRT_vic_irq_status_msync3},
};

// ///////////////////////////////////////////////////// 
//! non vectored interrupts assignment. Lower index = higher priority
// ////////////////////////////////////////////////////
static IRQMAPPING s_atIntNonVect[HAL_INT_NUM_NONVECTORED] =
{
  {ISRAddrSW,           SRT_vic_irq_status_sw},
  {ISRAddrSystimeNS,    SRT_vic_irq_status_systime_ns},
  {ISRAddrSystimeS,     SRT_vic_irq_status_systime_s},
  {ISRAddrGpio31,       SRT_vic_irq_status_gpio31},
  {ISRAddrWatchdog,     SRT_vic_irq_status_watchdog},
  {ISRAddrUSB,          SRT_vic_irq_status_usb},
  {ISRAddrSPI,          SRT_vic_irq_status_spi},
  {ISRAddrI2C,          SRT_vic_irq_status_i2c},
  {ISRAddrPhy,          SRT_vic_irq_status_int_phy},
  {ISRAddrTimer3,       SRT_vic_irq_status_timer3},
  {ISRAddrTimer4,       SRT_vic_irq_status_timer4},
  {ISRAddrVfp9,         SRT_vic_irq_status_vfp9},
  {ISRAddrDmac,         SRT_vic_irq_status_dmac},
  {ISRAddrTriggerLatch, SRT_vic_irq_status_trigger_lt},
  {NULL,                0},
};

cyg_uint32 hal_virt_to_phys_address(cyg_uint32 virt)
{
  return virt;
}

cyg_uint32 hal_phys_to_virt_address(cyg_uint32 phys, cyg_bool fCached)
{
  return phys;
}

//
// Platform specific initialization
//
void plf_hardware_init(void)
{
  unsigned int  uiCnt;
  unsigned long ulFIFONum      = 0;
  unsigned long ulFIFOEnd      = 64; 
  FIFO_AREA_T*  ptPFifoAreaTmp = (FIFO_AREA_T*)(hal_phys_to_virt_address(Addr_pointer_fifo, false));
   
  /* set reset bit for all pointer fifos */  
  ptPFifoAreaTmp->ulPFifoReset = 0xFFFFFFFF;
  
  /* define pointer fifo borders */
  for(ulFIFONum =0; ulFIFONum < 32; ulFIFONum++) 
  {
    ptPFifoAreaTmp->aulPFifoBorderBase[ulFIFONum] = ulFIFOEnd - 1;
    ulFIFOEnd +=64;
  }
  
  /* clear reset bit for all pointer fifos */
  ptPFifoAreaTmp->ulPFifoReset = 0x00000000;
  
  s_ptVic   = (PVIC_REGISTERS)hal_phys_to_virt_address(Addr_vic, false);
  s_ptGPIO  = (PGPIO_REGISTERS)hal_phys_to_virt_address(Addr_gpio, false);

  // Initialize Interrupt controller  
  // Disable all Interrupts
  s_ptVic->ulIntEnableClear = ~0;
  
  // Write to current Vector to perform an EOI to clear pending interrupt
  // s_ptVic->ulVectorAddr = 0;
  
  // only IRQs, no FIQs
  s_ptVic->ulIntSelect = 0;
  
  // initialize vectored interrupts
  for(uiCnt = 0; uiCnt < HAL_INT_NUM_VECTORED; uiCnt++)
  {
    // Select the Interrupt Source as absolute value + enable
    // every mask is the same [cntl0-15] so we just choose cntl0...
    s_ptVic->aulVectorCtrl[uiCnt] = s_atIntVect[uiCnt].irqnum | MSK_vic_vect_cntl0_ENABLE;
   
    // write function pointer to designated vector address
    s_ptVic->aulIntVector[uiCnt] = (cyg_uint32)s_atIntVect[uiCnt].ISRAddrVect;    
       
  } // end initializing vectored interrupts
  
  // write correct funtion pointer in Adr_vic_def_vect_addr
  s_ptVic->ulDefaultVector = (cyg_uint32)ISRAddrDefault;  

}

void plf_if_init(void) 
{
  //TODO: Initialize hardware interfaces (LCD, UART, etc)
}

// -------------------------------------------------------------------------
void hal_clock_initialize(cyg_uint32 period)
{
  // Stop timer, it might have been running already
  s_ptGPIO->aulCounterCtrl[0] = 0;

  // Reset the Timer value to zero, to be sure that it counts from zero
  s_ptGPIO->aulCounterCnt[0]  = 0;
  
  // Set the reload or compare register with the Timer Ticks
  // this is the max value where the counter restarts at 0
  s_ptGPIO->aulCounterMax[0] = period;

  // continous mode
  s_ptGPIO->aulCounterCtrl[0] &= ~MSK_gpio_counter0_ctrl_once;

  // Interrupt supported:
  // First of all acknowledge an optional present interrupt
  s_ptGPIO->ulCounterIRQ = MSK_gpio_irq_raw_gpio0;
  
  // Enable the Interrupt in the specific Timer register
  s_ptGPIO->aulCounterCtrl[0] |= MSK_gpio_counter0_ctrl_irq_en;

  // Enable the Interrupt globally
  s_ptGPIO->ulCounterIRQMaskSet = MSK_gpio_irq_raw_gpio0;

  // start timer
  s_ptGPIO->aulCounterCtrl[0] |= MSK_gpio_counter0_ctrl_run;  
  
  HAL_INTERRUPT_UNMASK(CYGNUM_HAL_INTERRUPT_TIMER0);	// Unmask timer 0 interrupt
}

// This routine is called during a clock interrupt.
void hal_clock_reset(cyg_uint32 vector, cyg_uint32 period)
{
  //we have a continous timer, so we need no reset here
  //TODO: Check if eCos needs a single shot timer with reload
  s_ptGPIO->ulCounterIRQ = MSK_gpio_irq_raw_gpio0;
}

// Read the current value of the clock, returning the number of hardware
// "ticks" that have occurred (i.e. how far away the current value is from
// the start)

// Note: The "contract" for this function is that the value is the number
// of hardware clocks that have happened since the last interrupt (i.e.
// when it was reset).

void hal_clock_read(cyg_uint32 *pvalue)
{
  /* Get the current Time */
  *pvalue = s_ptGPIO->aulCounterCnt[0];
}

//
// Delay for some number of micro-seconds
void hal_delay_us(cyg_uint32 usecs)
{
  //TOOD: Implement microsecond wait
}

// -------------------------------------------------------------------------

// This routine is called to respond to a hardware interrupt (IRQ).  It
// should interrogate the hardware and return the IRQ vector number.
int hal_IRQ_handler(void)
{
  PFN_ISR_ADDRESS pfnISRAddr;
  int             iRet;

  // read Adr_vic_vect_addr
  pfnISRAddr = (PFN_ISR_ADDRESS)s_ptVic->ulVectorAddr;

  iRet = pfnISRAddr();

  return iRet;
}

void hal_interrupt_mask(int vector)
{
  // disable interrupt
  s_ptVic->ulIntEnableClear = (1 << vector);  
}

void hal_interrupt_unmask(int vector)
{
  // enable interrupt
  s_ptVic->ulIntEnable = (1 << vector);  
}

void hal_interrupt_acknowledge(int vector)
{
  // Write to current Vector to perform an EOI
  s_ptVic->ulVectorAddr = 0;
}

void hal_interrupt_configure(int vector, int level, int up)
{
  //TODO: Implement configuring edges and levels for the given vectors (on GPIO, HIF) only
}

void hal_interrupt_set_level(int vector, int level)
{
  //TODO: Implement configuring edges and levels for the given vectors (on GPIO, HIF) only
}

int ISRAddrSW(void)
{
  return CYGNUM_HAL_INTERRUPT_SW;
}

int ISRAddrTimer0(void)
{
  return CYGNUM_HAL_INTERRUPT_TIMER0;
}

int ISRAddrTimer1(void)
{
  return CYGNUM_HAL_INTERRUPT_TIMER1;
}

int ISRAddrTimer2(void)
{
  return CYGNUM_HAL_INTERRUPT_TIMER2;
}

int ISRAddrSystimeNS(void)
{
  return CYGNUM_HAL_INTERRUPT_SYSTIME_NS;
}

int ISRAddrSystimeS(void)
{
  return CYGNUM_HAL_INTERRUPT_SYSTIME_S;
}

int ISRAddrGpio31(void)
{
  return CYGNUM_HAL_INTERRUPT_GPIO31;
}

int ISRAddrWatchdog(void)
{
  return CYGNUM_HAL_INTERRUPT_WATCHDOG;
}

int ISRAddrUart0(void) 
{
  return CYGNUM_HAL_INTERRUPT_UART0;
}

int ISRAddrUart1(void)
{
  return CYGNUM_HAL_INTERRUPT_UART1;
}

int ISRAddrUart2(void)
{
  return CYGNUM_HAL_INTERRUPT_UART2;
}

int ISRAddrUSB(void)
{
  return CYGNUM_HAL_INTERRUPT_USB;
}

int ISRAddrSPI(void)
{
  return CYGNUM_HAL_INTERRUPT_SPI;
}

int ISRAddrI2C(void)
{
  return CYGNUM_HAL_INTERRUPT_I2C;
}

int ISRAddrHIF(void)
{
  return CYGNUM_HAL_INTERRUPT_HIF;
} 

int ISRAddrGpio(void)
{
  return CYGNUM_HAL_INTERRUPT_GPIO;
}

int ISRAddrCom0(void)
{
  return CYGNUM_HAL_INTERRUPT_COM0;
}

int ISRAddrCom1(void) 
{
  return CYGNUM_HAL_INTERRUPT_COM1;
}

int ISRAddrCom2(void)
{
  return CYGNUM_HAL_INTERRUPT_COM2;
}

int ISRAddrCom3(void)
{
  return CYGNUM_HAL_INTERRUPT_COM3;
}

int ISRAddrMsync0(void)
{
  return CYGNUM_HAL_INTERRUPT_MSYNC0;
}

int ISRAddrMsync1(void)
{
  return CYGNUM_HAL_INTERRUPT_MSYNC1;
}

int ISRAddrMsync2(void)
{
  return CYGNUM_HAL_INTERRUPT_MSYNC2;
}

int ISRAddrMsync3(void)
{
  return CYGNUM_HAL_INTERRUPT_MSYNC3;
}

int ISRAddrPhy(void)
{
  return CYGNUM_HAL_INTERRUPT_INT_PHY;
}

int ISRAddrTimer3(void)
{
  return CYGNUM_HAL_INTERRUPT_TIMER3;
}

int ISRAddrTimer4(void)
{
  return CYGNUM_HAL_INTERRUPT_TIMER4;
}

int ISRAddrVfp9(void)
{ 
  return CYGNUM_HAL_INTERRUPT_VFP9;
}

int ISRAddrDmac(void)
{
  return CYGNUM_HAL_INTERRUPT_DMAC;
}

int ISRAddrTriggerLatch(void)
{
  return CYGNUM_HAL_INTERRUPT_TRIGGERLATCH;
}

int ISRAddrDefault(void)
{
  cyg_uint32 ucount;
  cyg_uint32 uIrqSrc;
  PFN_ISR_ADDRESS pfnISRAddr;
  
  //get source of non-vectored Interrupt
  uIrqSrc = s_ptVic->ulIrqState;

  // get source of Interrupt (starts at first non-vectored interrupt)
  for (ucount = 0; ucount < HAL_INT_NUM_NONVECTORED; ucount++) 
  {
    if (uIrqSrc & (1 << s_atIntNonVect[ucount].irqnum))
    {
      int iRet;

      pfnISRAddr = s_atIntNonVect[ucount].ISRAddrVect;

      iRet = pfnISRAddr();     

      return iRet;
    }
  }

  return CYGNUM_HAL_INTERRUPT_NONE;
}
