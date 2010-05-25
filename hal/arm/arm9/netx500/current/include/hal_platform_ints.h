#ifndef CYGONCE_HAL_PLATFORM_INTS_H
#define CYGONCE_HAL_PLATFORM_INTS_H
//==========================================================================
//
//      hal_platform_ints.h
//
//      HAL Interrupt and clock support
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
// Author(s):    David A Rusling
// Contributors: Philippe Robin
// Date:         November 7, 2000
// Purpose:      Define Interrupt support
// Description:  The interrupt details for the INTEGRATOR are defined here.
// Usage:
//               #include <cyg/hal/hal_platform_ints.h>
//               ...
//              
//
//####DESCRIPTIONEND####
//
//==========================================================================

#include "regdef.h"

// ///////////////////////////////////////////////////// 
//! non vectored interrupts assignment. Lower index = higher priority
// ////////////////////////////////////////////////////
#define CYGNUM_HAL_INTERRUPT_TIMER0               SRT_vic_irq_status_timer0
#define CYGNUM_HAL_INTERRUPT_TIMER1               SRT_vic_irq_status_timer1
#define CYGNUM_HAL_INTERRUPT_TIMER2               SRT_vic_irq_status_timer2
#define CYGNUM_HAL_INTERRUPT_COM0                 SRT_vic_irq_status_com0
#define CYGNUM_HAL_INTERRUPT_COM1                 SRT_vic_irq_status_com1
#define CYGNUM_HAL_INTERRUPT_COM2                 SRT_vic_irq_status_com2
#define CYGNUM_HAL_INTERRUPT_COM3                 SRT_vic_irq_status_com3
#define CYGNUM_HAL_INTERRUPT_UART0                SRT_vic_irq_status_uart0
#define CYGNUM_HAL_INTERRUPT_UART1                SRT_vic_irq_status_uart1
#define CYGNUM_HAL_INTERRUPT_UART2                SRT_vic_irq_status_uart2
#define CYGNUM_HAL_INTERRUPT_HIF                  SRT_vic_irq_status_hif
#define CYGNUM_HAL_INTERRUPT_GPIO                 SRT_vic_irq_status_gpio
#define CYGNUM_HAL_INTERRUPT_MSYNC0               SRT_vic_irq_status_msync0
#define CYGNUM_HAL_INTERRUPT_MSYNC1               SRT_vic_irq_status_msync1
#define CYGNUM_HAL_INTERRUPT_MSYNC2               SRT_vic_irq_status_msync2
#define CYGNUM_HAL_INTERRUPT_MSYNC3               SRT_vic_irq_status_msync3

#define CYGNUM_HAL_INTERRUPT_SW                   SRT_vic_irq_status_sw
#define CYGNUM_HAL_INTERRUPT_SYSTIME_NS           SRT_vic_irq_status_systime_ns
#define CYGNUM_HAL_INTERRUPT_SYSTIME_S            SRT_vic_irq_status_systime_s
#define CYGNUM_HAL_INTERRUPT_GPIO15               SRT_vic_irq_status_gpio15
#define CYGNUM_HAL_INTERRUPT_WATCHDOG             SRT_vic_irq_status_watchdog
#define CYGNUM_HAL_INTERRUPT_USB                  SRT_vic_irq_status_usb
#define CYGNUM_HAL_INTERRUPT_SPI                  SRT_vic_irq_status_spi
#define CYGNUM_HAL_INTERRUPT_I2C                  SRT_vic_irq_status_i2c
#define CYGNUM_HAL_INTERRUPT_LCD                  SRT_vic_irq_status_lcd
#define CYGNUM_HAL_INTERRUPT_INT_PHY              SRT_vic_irq_status_int_phy
#define CYGNUM_HAL_INTERRUPT_ISO_AREA             SRT_vic_irq_status_iso_area
#define CYGNUM_HAL_INTERRUPT_TIMER3               SRT_vic_irq_status_timer3
#define CYGNUM_HAL_INTERRUPT_TIMER4               SRT_vic_irq_status_timer4
#define CYGNUM_HAL_INTERRUPT_VFP9                 SRT_vic_irq_status_vfp9


#define CYGNUM_HAL_ISR_MIN                        0
#define CYGNUM_HAL_ISR_MAX                        29
#define CYGNUM_HAL_ISR_COUNT                      30

// The vector used by the Real time clock
#define CYGNUM_HAL_INTERRUPT_RTC                  CYGNUM_HAL_INTERRUPT_TIMER0

//----------------------------------------------------------------------------
// Microsecond delay support.

extern void hal_delay_us(cyg_uint32 usecs);
#define HAL_DELAY_US(n)          hal_delay_us(n);

//----------------------------------------------------------------------------
// Reset.

#define HAL_PLATFORM_RESET()			\
{						\
  ;	\
}

#define HAL_PLATFORM_RESET_ENTRY 0x0

//----------------------------------------------------------------------------

#endif // CYGONCE_HAL_PLATFORM_INTS_H
