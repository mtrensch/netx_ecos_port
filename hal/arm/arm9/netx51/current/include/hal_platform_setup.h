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
// Date:         May 20, 2010
// Purpose:      ARM netX platform specific support routines
// Description: 
// Usage:       #include <cyg/hal/hal_platform_setup.h>
//
//####DESCRIPTIONEND####
//
//===========================================================================*/


#define CP15_ALIGNMENT_CHECKS 0x00000002
#define CP15_ITCM             0x00001000
#define CP15_DTCM             0x00000004
#define CP15_WRITEBUFFER_EN   0x00000008
#define CP15_SBO              0x00000F70

#define PLATFORM_SETUP1 _platform_setup1

// This macro represents the initial startup code for the platform        
        .macro  _platform_setup1

        // Enable clocks
        ldr    r0, =0x1018C17C
        ldr    r1, [r0]
        str    r1, [r0]
        ldr    r0, =0x1018C138
        ldr    r1, =0x000F3333  /* enable xc_misc, xpic, dma, dpm, xmac0, xpec0 */
        str    r1, [r0]

        // Prevent all interrupts
        ldr    r0,=0xFFFFF014
        mov    r1,#-1
        str    r1,[r0]

        /* Drain write buffers */
        mcr	p15, 0, r1, c7, c10, 4

        /* 0x1F7C */
        ldr  r0,=CP15_ALIGNMENT_CHECKS | CP15_ITCM | CP15_DTCM | CP15_WRITEBUFFER_EN | CP15_SBO
        mcr  p15, 0, r0, c1, c0, 0

        // Set up a stack [for calling C code]
        ldr     r1,=__startup_stack
        ldr     r2,=0x80000000
        orr     sp,r1,r2

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
