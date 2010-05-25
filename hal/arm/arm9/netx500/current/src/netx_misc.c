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
#define HAL_INT_NUM_NONVECTORED 14  /**< number of nonvectored interrupts   */

static PVIC_REGISTERS  s_ptVic  = NULL;  //!< virtual address of vector interrupt controller
static PGPIO_REGISTERS s_ptGPIO = NULL;  //!< virtual address of GPIO registers

extern cyg_uint32 hal_virt_to_phys_address(cyg_uint32 virt);
extern cyg_uint32 hal_phys_to_virt_address(cyg_uint32 phys, cyg_bool fCached);

// ///////////////////////////////////////////////////// 
//! vectored interrupts assignment. Lower index = higher priority
// ////////////////////////////////////////////////////
static cyg_uint32 s_aulIntVect[HAL_INT_NUM_VECTORED] =
{
  CYGNUM_HAL_INTERRUPT_MSYNC0,
  CYGNUM_HAL_INTERRUPT_MSYNC1,
  CYGNUM_HAL_INTERRUPT_MSYNC2,
  CYGNUM_HAL_INTERRUPT_MSYNC3,
  CYGNUM_HAL_INTERRUPT_COM0,
  CYGNUM_HAL_INTERRUPT_COM1,
  CYGNUM_HAL_INTERRUPT_COM2,
  CYGNUM_HAL_INTERRUPT_COM3,
  CYGNUM_HAL_INTERRUPT_TIMER0,
  CYGNUM_HAL_INTERRUPT_TIMER1,
  CYGNUM_HAL_INTERRUPT_TIMER2,
  CYGNUM_HAL_INTERRUPT_HIF,
  CYGNUM_HAL_INTERRUPT_SPI,
  CYGNUM_HAL_INTERRUPT_UART0,
  CYGNUM_HAL_INTERRUPT_USB,
  CYGNUM_HAL_INTERRUPT_TIMER3,
};

// ///////////////////////////////////////////////////// 
//! non vectored interrupts assignment. Lower index = higher priority
// ////////////////////////////////////////////////////
static cyg_uint32 s_aulIntNonVect[HAL_INT_NUM_NONVECTORED] =
{
  CYGNUM_HAL_INTERRUPT_TIMER4,
  CYGNUM_HAL_INTERRUPT_UART1,
  CYGNUM_HAL_INTERRUPT_UART2,
  CYGNUM_HAL_INTERRUPT_GPIO,
  CYGNUM_HAL_INTERRUPT_GPIO15,
  CYGNUM_HAL_INTERRUPT_SYSTIME_NS,
  CYGNUM_HAL_INTERRUPT_SYSTIME_S,
  CYGNUM_HAL_INTERRUPT_SW,
  CYGNUM_HAL_INTERRUPT_WATCHDOG,
  CYGNUM_HAL_INTERRUPT_I2C,
  CYGNUM_HAL_INTERRUPT_LCD,
  CYGNUM_HAL_INTERRUPT_INT_PHY,
  CYGNUM_HAL_INTERRUPT_ISO_AREA,
  CYGNUM_HAL_INTERRUPT_VFP9,
};

// -------------------------------------------------------------------------
// MMU initialization:
// 
// These structures are laid down in memory to define the translation
// table.
// 

typedef struct MMU_MAPPING_TABLEtag
{
  unsigned int uiPhysicalAddr;
  unsigned int uiVirtualAddr;
  unsigned int uiSize;        //size in MB
  unsigned int uiCache;
  unsigned int uiBuffer;
  unsigned int uiAccess;
} MMU_MAPPING_TABLE;

/*
 * ARM Translation Table Base Bit Masks */
#define ARM_TRANSLATION_TABLE_MASK               0xFFFFC000

/*
 * ARM Domain Access Control Bit Masks
 */
#define ARM_ACCESS_TYPE_NO_ACCESS(domain_num)    (0x0 << (domain_num)*2)
#define ARM_ACCESS_TYPE_CLIENT(domain_num)       (0x1 << (domain_num)*2)
#define ARM_ACCESS_TYPE_MANAGER(domain_num)      (0x3 << (domain_num)*2)

struct ARM_MMU_FIRST_LEVEL_FAULT {
    int id : 2;
    int sbz : 30;
};
#define ARM_MMU_FIRST_LEVEL_FAULT_ID 0x0

struct ARM_MMU_FIRST_LEVEL_PAGE_TABLE {
    int id : 2;
    int imp : 2;
    int domain : 4;
    int sbz : 1;
    int base_address : 23;
};
#define ARM_MMU_FIRST_LEVEL_PAGE_TABLE_ID 0x1

struct ARM_MMU_FIRST_LEVEL_SECTION {
    int id : 2;
    int b : 1;
    int c : 1;
    int imp : 1;
    int domain : 4;
    int sbz0 : 1;
    int ap : 2;
    int sbz1 : 8;
    int base_address : 12;
};
#define ARM_MMU_FIRST_LEVEL_SECTION_ID 0x2

struct ARM_MMU_FIRST_LEVEL_RESERVED {
    int id : 2;
    int sbz : 30;
};
#define ARM_MMU_FIRST_LEVEL_RESERVED_ID 0x3

#define ARM_MMU_FIRST_LEVEL_DESCRIPTOR_ADDRESS(ttb_base, table_index) \
   (unsigned long *)((unsigned long)(ttb_base) + ((table_index) << 2))

#define ARM_FIRST_LEVEL_PAGE_TABLE_SIZE 0x4000

#define ARM_MMU_SECTION(ttb_base, actual_base, virtual_base,              \
                        cacheable, bufferable, perm)                      \
    CYG_MACRO_START                                                       \
        register union ARM_MMU_FIRST_LEVEL_DESCRIPTOR desc;               \
                                                                          \
        desc.word = 0;                                                    \
        desc.section.id = ARM_MMU_FIRST_LEVEL_SECTION_ID;                 \
        desc.section.imp = 1;                                             \
        desc.section.domain = 0;                                          \
        desc.section.c = (cacheable);                                     \
        desc.section.b = (bufferable);                                    \
        desc.section.ap = (perm);                                         \
        desc.section.base_address = (actual_base);                        \
        *ARM_MMU_FIRST_LEVEL_DESCRIPTOR_ADDRESS(ttb_base, (virtual_base)) \
                            = desc.word;                                  \
    CYG_MACRO_END

#define X_ARM_MMU_SECTION(abase,vbase,size,cache,buff,access)      \
    { int i; int j = abase; int k = vbase;                         \
      for (i = size; i > 0 ; i--,j++,k++)                          \
      {                                                            \
        ARM_MMU_SECTION(ttb_base, j, k, cache, buff, access);      \
      }                                                            \
    }

union ARM_MMU_FIRST_LEVEL_DESCRIPTOR {
    unsigned long word;
    struct ARM_MMU_FIRST_LEVEL_FAULT fault;
    struct ARM_MMU_FIRST_LEVEL_PAGE_TABLE page_table;
    struct ARM_MMU_FIRST_LEVEL_SECTION section;
    struct ARM_MMU_FIRST_LEVEL_RESERVED reserved;
};

#define ARM_UNCACHEABLE                         0
#define ARM_CACHEABLE                           1
#define ARM_UNBUFFERABLE                        0
#define ARM_BUFFERABLE                          1

#define ARM_ACCESS_PERM_NONE_NONE               0
#define ARM_ACCESS_PERM_RO_NONE                 0
#define ARM_ACCESS_PERM_RO_RO                   0
#define ARM_ACCESS_PERM_RW_NONE                 1
#define ARM_ACCESS_PERM_RW_RO                   2
#define ARM_ACCESS_PERM_RW_RW                   3

static MMU_MAPPING_TABLE s_atMMUMapping[] =
{
  {Adr_intram0_base, Adr_intram0_base,  2,  ARM_UNCACHEABLE, ARM_UNBUFFERABLE, ARM_ACCESS_PERM_RW_RW},   //internal SRAM and Registers
  {Addr_sdram,       Addr_sdram,      128,  ARM_CACHEABLE,   ARM_BUFFERABLE,   ARM_ACCESS_PERM_RW_RW},   //SDRAM cached
  {Addr_sdram,       0xA0000000,      128,  ARM_UNCACHEABLE, ARM_UNBUFFERABLE, ARM_ACCESS_PERM_RW_RW},   //SDRAM uncached
  {Addr_extsram0,    Addr_extsram0,    64,  ARM_UNCACHEABLE, ARM_UNBUFFERABLE, ARM_ACCESS_PERM_RW_RW},   //flash bank 0 uncached
  {Addr_extsram1,    Addr_extsram1,    64,  ARM_UNCACHEABLE, ARM_UNBUFFERABLE, ARM_ACCESS_PERM_RW_RW},   //flash bank 1 uncached
  {Addr_extsram2,    Addr_extsram2,    64,  ARM_UNCACHEABLE, ARM_UNBUFFERABLE, ARM_ACCESS_PERM_RW_RW},   //flash bank 2 uncached
  {Addr_backup_ram,  Addr_backup_ram,   1,  ARM_UNCACHEABLE, ARM_UNBUFFERABLE, ARM_ACCESS_PERM_RW_RW},   //backup RAM uncached
};

static cyg_bool s_fMMUInitialized = false;

void hal_mmu_init(void)
{
    //TODO: Define where to put TTB
    unsigned long ttb_base = Addr_backup_ram;
    unsigned long ulTemp;

    /*
     * Set the TTB register
     */
    asm volatile ("mcr  p15,0,%0,c2,c0,0" : : "r"(ttb_base) /*:*/);

    /*
     * Set the Domain Access Control Register
     */
    ulTemp = ARM_ACCESS_TYPE_MANAGER(0)    | 
             ARM_ACCESS_TYPE_NO_ACCESS(1)  |
             ARM_ACCESS_TYPE_NO_ACCESS(2)  |
             ARM_ACCESS_TYPE_NO_ACCESS(3)  |
             ARM_ACCESS_TYPE_NO_ACCESS(4)  |
             ARM_ACCESS_TYPE_NO_ACCESS(5)  |
             ARM_ACCESS_TYPE_NO_ACCESS(6)  |
             ARM_ACCESS_TYPE_NO_ACCESS(7)  |
             ARM_ACCESS_TYPE_NO_ACCESS(8)  |
             ARM_ACCESS_TYPE_NO_ACCESS(9)  |
             ARM_ACCESS_TYPE_NO_ACCESS(10) |
             ARM_ACCESS_TYPE_NO_ACCESS(11) |
             ARM_ACCESS_TYPE_NO_ACCESS(12) |
             ARM_ACCESS_TYPE_NO_ACCESS(13) |
             ARM_ACCESS_TYPE_NO_ACCESS(14) |
             ARM_ACCESS_TYPE_NO_ACCESS(15);
    asm volatile ("mcr  p15,0,%0,c3,c0,0" : : "r"(ulTemp) /*:*/);

    /*
     * First clear all TT entries - ie Set them to Faulting
     */
    memset((void *)ttb_base, 0, ARM_FIRST_LEVEL_PAGE_TABLE_SIZE);

    /*               Actual  Virtual  Size   Attributes                                                    Function  */
    /*		     Base     Base     MB      cached?           buffered?        access permissions                 */
    /*             xxx00000  xxx00000                                                                                */
    for(ulTemp = 0; ulTemp < sizeof(s_atMMUMapping) / sizeof(s_atMMUMapping[0]); ulTemp++)
    {
      X_ARM_MMU_SECTION(s_atMMUMapping[ulTemp].uiPhysicalAddr >> 20,
                        s_atMMUMapping[ulTemp].uiVirtualAddr  >> 20,
                        s_atMMUMapping[ulTemp].uiSize,
                        s_atMMUMapping[ulTemp].uiCache,
                        s_atMMUMapping[ulTemp].uiBuffer,
                        s_atMMUMapping[ulTemp].uiAccess);
    }

  s_fMMUInitialized = true;
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
    s_ptVic->aulVectorCtrl[uiCnt] = s_aulIntVect[uiCnt] | MSK_vic_vect_cntl0_ENABLE;

    // write function pointer to designated vector address
    s_ptVic->aulIntVector[uiCnt] = s_aulIntVect[uiCnt];

  } // end initializing vectored interrupts

  // write correct funtion pointer in Adr_vic_def_vect_addr
  s_ptVic->ulDefaultVector = (cyg_uint32)~0;
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
  s_ptGPIO->ulIRQ = MSK_gpio_irq_cnt0;
  
  // Enable the Interrupt in the specific Timer register
  s_ptGPIO->aulCounterCtrl[0] |= MSK_gpio_counter0_ctrl_irq_en;

  // Enable the Interrupt globally
  s_ptGPIO->ulIRQMaskSet = MSK_gpio_irq_mask_set_cnt0;

  // start timer
  s_ptGPIO->aulCounterCtrl[0] |= MSK_gpio_counter0_ctrl_run;

  HAL_INTERRUPT_UNMASK(CYGNUM_HAL_INTERRUPT_TIMER0);	// Unmask timer 0 interrupt
}

// This routine is called during a clock interrupt.
void hal_clock_reset(cyg_uint32 vector, cyg_uint32 period)
{
  //we have a continous timer, so we need no reset here
  //TODO: Check if eCos needs a single shot timer with reload
  s_ptGPIO->ulIRQ = MSK_gpio_irq_cnt0;
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
  int             iRet;

  // read Adr_vic_vect_addr
  iRet = (int)s_ptVic->ulVectorAddr;

  if(~0 == iRet)
  {
    cyg_uint32 ucount;
    cyg_uint32 uIrqSrc;

    iRet = CYGNUM_HAL_INTERRUPT_NONE;

    //get source of non-vectored Interrupt
    uIrqSrc = s_ptVic->ulIrqState;

    // get source of Interrupt (starts at first non-vectored interrupt)
    for (ucount = 0; ucount < HAL_INT_NUM_NONVECTORED; ucount++) 
    {
      if (uIrqSrc & (1 << s_aulIntNonVect[ucount]))
      {
        iRet = s_aulIntNonVect[ucount];
        break;
      }
    }
  }

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

cyg_uint32 hal_virt_to_phys_address(cyg_uint32 virt)
{
  int         iIdx;
  cyg_uint32  uiRet = 0;

  for(iIdx = 0; iIdx < sizeof(s_atMMUMapping) / sizeof(s_atMMUMapping[0]); iIdx++)
  {
    if( (s_atMMUMapping[iIdx].uiVirtualAddr < virt) &&
        ((s_atMMUMapping[iIdx].uiVirtualAddr + s_atMMUMapping[iIdx].uiSize * 0x100000) > virt) )
    {
      uiRet = virt - s_atMMUMapping[iIdx].uiVirtualAddr + s_atMMUMapping[iIdx].uiPhysicalAddr;
      break;
    }
  }
  return uiRet;
}

cyg_uint32 hal_phys_to_virt_address(cyg_uint32 phys, cyg_bool fCached)
{
  cyg_uint32  uiRet   = 0;

  if(!s_fMMUInitialized)
  {
    uiRet = phys;

  } else
  {
    int         iIdx;
    cyg_uint32  uiCache = fCached? ARM_CACHEABLE : ARM_UNCACHEABLE;

    for(iIdx = 0; iIdx < sizeof(s_atMMUMapping) / sizeof(s_atMMUMapping[0]); iIdx++)
    {
      if( (s_atMMUMapping[iIdx].uiPhysicalAddr < phys) &&
          ((s_atMMUMapping[iIdx].uiPhysicalAddr + s_atMMUMapping[iIdx].uiSize * 0x100000) > phys) &&
          (s_atMMUMapping[iIdx].uiCache == uiCache) )
      {
        uiRet = phys - s_atMMUMapping[iIdx].uiPhysicalAddr + s_atMMUMapping[iIdx].uiVirtualAddr;
        break;
      }
    }
  }

  return uiRet;
}
