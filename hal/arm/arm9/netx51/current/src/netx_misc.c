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
// Date:         2010-05-20
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

#define HAL_INT_NUM_VECTORED    16  /**< number of vectored interrupts      */
#define HAL_INT_NUM_NONVECTORED 16  /**< number of nonvectored interrupts   */

static NX51_VIC_AREA_T*       s_ptVic      = (NX51_VIC_AREA_T*)NX51_NETX_VIC_AREA;
static NX51_ARM_TIMER_AREA_T* s_ptArmTimer = (NX51_ARM_TIMER_AREA_T*)Addr_NX51_arm_timer;

// ///////////////////////////////////////////////////// 
//! vectored interrupts assignment. Lower index = higher priority
// ////////////////////////////////////////////////////
static cyg_uint32 s_aulIntVect[HAL_INT_NUM_VECTORED] =
{
  CYGNUM_HAL_INTERRUPT_MSYNC0,
  CYGNUM_HAL_INTERRUPT_COM0,
  CYGNUM_HAL_INTERRUPT_TIMER0,
  CYGNUM_HAL_INTERRUPT_TIMER1,
  CYGNUM_HAL_INTERRUPT_HIF,
  CYGNUM_HAL_INTERRUPT_SPI,
  CYGNUM_HAL_INTERRUPT_GPIO_TIMER,
  CYGNUM_HAL_INTERRUPT_GPIO31,
  CYGNUM_HAL_INTERRUPT_GPIO,
  CYGNUM_HAL_INTERRUPT_USB,
  CYGNUM_HAL_INTERRUPT_UART0,
  CYGNUM_HAL_INTERRUPT_UART1,
  CYGNUM_HAL_INTERRUPT_DMAC,
  CYGNUM_HAL_INTERRUPT_TRIGGERLATCH,
  CYGNUM_HAL_INTERRUPT_CAN,
  CYGNUM_HAL_INTERRUPT_OSAC
};

// ///////////////////////////////////////////////////// 
//! non vectored interrupts assignment. Lower index = higher priority
// ////////////////////////////////////////////////////
static cyg_uint32 s_aulIntNonVect[HAL_INT_NUM_NONVECTORED] =
{
  CYGNUM_HAL_INTERRUPT_I2C,
  CYGNUM_HAL_INTERRUPT_WATCHDOG,
  CYGNUM_HAL_INTERRUPT_reserved31,
  CYGNUM_HAL_INTERRUPT_SYSTIME_NS,
  CYGNUM_HAL_INTERRUPT_SYSTIME_S,
  CYGNUM_HAL_INTERRUPT_SW,
  CYGNUM_HAL_INTERRUPT_UART2,
  CYGNUM_HAL_INTERRUPT_reserved14,
  CYGNUM_HAL_INTERRUPT_COM1,
  CYGNUM_HAL_INTERRUPT_COM2,
  CYGNUM_HAL_INTERRUPT_COM3,
  CYGNUM_HAL_INTERRUPT_MSYNC1,
  CYGNUM_HAL_INTERRUPT_MSYNC2,
  CYGNUM_HAL_INTERRUPT_MSYNC3,
  CYGNUM_HAL_INTERRUPT_INT_PHY,
  CYGNUM_HAL_INTERRUPT_SYSSTATE
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
  unsigned int               uiCnt;
  unsigned long              ulFIFONum      = 0;
  unsigned long              ulFIFOEnd      = 64; 
  NX51_POINTER_FIFO_AREA_T*  ptPFifoAreaTmp = (NX51_POINTER_FIFO_AREA_T*)Addr_NX51_pointer_fifo;

  /* set reset bit for all pointer fifos */
  ptPFifoAreaTmp->ulPfifo_reset = 0x0000FFFF;

  /* define pointer fifo borders */
  for(ulFIFONum =0; 
      ulFIFONum < sizeof(ptPFifoAreaTmp->aulPfifo_border) / sizeof(ptPFifoAreaTmp->aulPfifo_border[0]); 
      ulFIFONum++) 
  {
    ptPFifoAreaTmp->aulPfifo_border[ulFIFONum] = ulFIFOEnd - 1;
    ulFIFOEnd +=64;
  }

  /* clear reset bit for all pointer fifos */
  ptPFifoAreaTmp->ulPfifo_reset = 0x00000000;

  // Initialize Interrupt controller  
  // Disable all Interrupts
  s_ptVic->ulVic_int_enclear = ~0;

  // Write to current Vector to perform an EOI to clear pending interrupt
  // s_ptVic->ulVectorAddr = 0;

  // only IRQs, no FIQs
  s_ptVic->ulVic_int_select = 0;

  // initialize vectored interrupts
  for(uiCnt = 0; uiCnt < HAL_INT_NUM_VECTORED; uiCnt++)
  {
    // Select the Interrupt Source as absolute value + enable
    // every mask is the same [cntl0-15] so we just choose cntl0...
    s_ptVic->aulVic_vect_cntl[uiCnt] = s_aulIntVect[uiCnt] | MSK_NX51_vic_vect_cntl0_ENABLE;

    // write function pointer to designated vector address
    s_ptVic->aulVic_vect_addr[uiCnt] = s_aulIntVect[uiCnt];

  } // end initializing vectored interrupts

  // write correct funtion pointer in Adr_vic_def_vect_addr
  s_ptVic->ulVic_def_vect_addr = ~0;

}

void plf_if_init(void) 
{
  //TODO: Initialize hardware interfaces (LCD, UART, etc)
}

// -------------------------------------------------------------------------
void hal_clock_initialize(cyg_uint32 period)
{
  // Stop timer, it might have been running already
  s_ptArmTimer->ulArm_timer_irq_msk_reset     = MSK_NX51_arm_timer_irq_msk_reset_timer0_irq;
  s_ptArmTimer->aulArm_timer_config_timer[0]  = 0;
  s_ptArmTimer->aulArm_timer_timer[0]         = 0;
  s_ptArmTimer->aulArm_timer_preload_timer[0] = 0;

  // Set the reload or compare register with the Timer Ticks
  // this is the max value where the counter restarts at 0
  s_ptArmTimer->aulArm_timer_preload_timer[0] = period - 1;

  // continous mode
  s_ptArmTimer->aulArm_timer_config_timer[0] = 1 << SRT_NX51_arm_timer_config_timer0_mode;

  // Interrupt supported:
  // First of all acknowledge an optional present interrupt
  s_ptArmTimer->ulArm_timer_irq_raw = MSK_NX51_arm_timer_irq_raw_timer0_irq;

  // Enable the Interrupt in the specific Timer register
  s_ptArmTimer->ulArm_timer_irq_msk_set = MSK_NX51_arm_timer_irq_msk_set_timer0_irq;

  // start timer
  s_ptArmTimer->aulArm_timer_timer[0] = period - 1;

  HAL_INTERRUPT_UNMASK(CYGNUM_HAL_INTERRUPT_TIMER0);  // Unmask timer 0 interrupt
}

// This routine is called during a clock interrupt.
void hal_clock_reset(cyg_uint32 vector, cyg_uint32 period)
{
  //we have a continous timer, so we need no reset here
  //TODO: Check if eCos needs a single shot timer with reload
  s_ptArmTimer->ulArm_timer_irq_raw = MSK_NX51_arm_timer_irq_raw_timer0_irq;
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
  *pvalue = s_ptArmTimer->aulArm_timer_preload_timer[0] - 
            s_ptArmTimer->aulArm_timer_timer[0];
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
  int             iRet;

  // read Adr_vic_vect_addr
  iRet = (int)s_ptVic->ulVic_vect_addr;

  if(~0 == iRet)
  {
    /* This is a non-vectored IRQ, check status bits */
    cyg_uint32 ucount;
    cyg_uint32 uIrqSrc;

    iRet = CYGNUM_HAL_INTERRUPT_NONE;

    //get source of non-vectored Interrupt
    uIrqSrc = s_ptVic->ulVic_irq_status;

    // get source of Interrupt (starts at first non-vectored interrupt)
    for (ucount = 0; ucount < HAL_INT_NUM_NONVECTORED; ucount++) 
    {
      if (uIrqSrc & (1 << s_aulIntNonVect[ucount]))
      {
        iRet = (int)s_aulIntNonVect[ucount];
        break;
      }
    }
  }

  return iRet;
}

void hal_interrupt_mask(int vector)
{
  // disable interrupt
  s_ptVic->ulVic_int_enclear = (1 << vector);
}

void hal_interrupt_unmask(int vector)
{
  // enable interrupt
  s_ptVic->ulVic_int_enable = (1 << vector);
}

void hal_interrupt_acknowledge(int vector)
{
  // Write to current Vector to perform an EOI
  s_ptVic->ulVic_vect_addr = 0;
}

void hal_interrupt_configure(int vector, int level, int up)
{
  //TODO: Implement configuring edges and levels for the given vectors (on GPIO, HIF) only
}

void hal_interrupt_set_level(int vector, int level)
{
  //TODO: Implement configuring edges and levels for the given vectors (on GPIO, HIF) only
}
