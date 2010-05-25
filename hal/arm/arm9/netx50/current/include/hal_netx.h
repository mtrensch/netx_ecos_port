#ifndef CYGONCE_HAL_NETX_H
#define CYGONCE_HAL_NETX_H

/*=============================================================================
//
//      hal_netx.h
//
//      HAL Description of netX board
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
// Date:         March 4, 2006
// Purpose:      
// Description:
// Usage:        #include <cyg/hal/hal_netx.h>
//
//####DESCRIPTIONEND####
//
//===========================================================================*/
#include <cyg/hal/pfifo.h>
#include <cyg/hal/netx50_regdef.h>
#include <cyg/hal/gpio.h>
#include <cyg/hal/vic.h>
#include <cyg/hal/xc.h>

#define ARM_NETX_CPU_CLOCK      200000000
#define ARM_NETX_HOST_CLOCK     100000000

#define DEV_BAUD_115200         1152
#define DEV_BAUD_57600           576
#define DEV_BAUD_38400           384
#define DEV_BAUD_19200           192
#define DEV_BAUD_9600             96

#define ARM_NETX_BAUD_115200  ((DEV_BAUD_115200*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_57600   ((DEV_BAUD_57600*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_38400   ((DEV_BAUD_38400*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_19200   ((DEV_BAUD_19200*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_9600    ((DEV_BAUD_9600*16*65536)/(ARM_NETX_HOST_CLOCK/100))

cyg_bool xc_open(cyg_uint32 ulUnit);
cyg_bool xc_close(cyg_uint32 ulUnit);

cyg_bool xc_load(cyg_uint32 ulUnit, const cyg_uint32* pulXPEC, const cyg_uint32* pulXMACRPU, const cyg_uint32* pulXMACTPU);
cyg_bool xc_reset(cyg_uint32 ulUnit);
cyg_bool xc_start(cyg_uint32 ulUnit);
cyg_bool xc_stop(cyg_uint32 ulUnit);





#endif //CYGONCE_HAL_NETX_H

