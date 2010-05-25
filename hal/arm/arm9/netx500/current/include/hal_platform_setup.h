#ifndef CYGONCE_HAL_PLATFORM_SETUP_H
#define CYGONCE_HAL_PLATFORM_SETUP_H

/*=============================================================================
//
//      hal_platform_setup.h
//
//      Platform specific support for HAL (assembly code)
//
//=============================================================================
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
//=============================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):    Michael Trensch
// Contributors: 
// Date:         March 6, 2006
// Purpose:      ARM netX platform specific support routines
// Description: 
// Usage:       #include <cyg/hal/hal_platform_setup.h>
//
//####DESCRIPTIONEND####
//
//===========================================================================*/

#include <cyg/hal/hal_mmu.h>            // MMU definitions


#define PLATFORM_SETUP1 _platform_setup1
#define CYGHWR_HAL_ARM_HAS_MMU

// This macro represents the initial startup code for the platform        
        .macro  _platform_setup1
        
        // Prevent all interrupts
        ldr    r0,=0x001FF014
        mov    r1,#-1
        str    r1,[r0]
      
        // Disable and clear caches
        mrc  p15,0,r0,c1,c0,0
        bic  r0,r0,#0x1000              // disable ICache
        bic  r0,r0,#0x000f              // disable DCache, write buffer,
                                        // MMU and alignment faults
        mcr  p15,0,r0,c1,c0,0
        nop
        nop
        mov  r0,#0
        mcr  p15,0,r0,c7,c6,0           // clear data cache


        // Set up a stack [for calling C code]
        ldr     r1,=__startup_stack
        ldr     r2,=0x80000000
        orr     sp,r1,r2

        // Create MMU tables
        bl      hal_mmu_init

        // Enable MMU
        mcr     p15, 0, r0, c8, c7, 0   // flush I+D TLBs

       	ldr	    r1,=MMU_Control_Init|MMU_Control_M
        ldr     r0, =MMU_ON
      	mcr	    MMU_CP,0,r1,MMU_Control,c0
        mov     pc, r0                  //  & jump to new virtual address
        nop
MMU_ON:
        
//#ifdef CYG_HAL_STARTUP_ROMRAM
        mov     r0,#0
        ldr     r1,=__exception_handlers  // ram base & length
        ldr     r2,=reset_vector
20:     ldr     r3,[r1],#4
        str     r3,[r0],#4
        cmp     r1,r2
        bne     20b
//#endif

        .endm

/*---------------------------------------------------------------------------*/
/* end of hal_platform_setup.h                                               */
#endif /* CYGONCE_HAL_PLATFORM_SETUP_H */
