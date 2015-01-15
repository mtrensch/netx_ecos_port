#ifndef CYGONCE_ARM_NETX_SERIAL_H
#define CYGONCE_ARM_NETX_SERIAL_H

// ====================================================================
//
//      netx_serial.h
//
//      Device I/O - Description of Hilscher netX serial hardware
//
// ====================================================================
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
// ====================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):           Michael Trensch
// Contributors:        
// Date:        	March 11, 2006
// Purpose:     	Internal interfaces for serial I/O drivers
// Description:
//
//####DESCRIPTIONEND####
//
// ====================================================================

// Description of serial ports on Hilscher netX
#define DEV_BAUD_230400         2304ULL
#define DEV_BAUD_115200         1152
#define DEV_BAUD_57600           576
#define DEV_BAUD_38400           384
#define DEV_BAUD_19200           192
#define DEV_BAUD_14400           144
#define DEV_BAUD_9600             96
#define DEV_BAUD_7200             72
#define DEV_BAUD_4800             48
#define DEV_BAUD_3600             36
#define DEV_BAUD_2400             24
#define DEV_BAUD_1800             18
#define DEV_BAUD_1200             12
#define DEV_BAUD_600              6
#define DEV_BAUD_300              3
#define DEV_BAUD_200              2

#define ARM_NETX_BAUD_230400  ((DEV_BAUD_230400*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_115200  ((DEV_BAUD_115200*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_57600   ((DEV_BAUD_57600*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_38400   ((DEV_BAUD_38400*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_19200   ((DEV_BAUD_19200*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_14400   ((DEV_BAUD_14400*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_9600    ((DEV_BAUD_9600*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_7200    ((DEV_BAUD_7200*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_4800    ((DEV_BAUD_4800*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_3600    ((DEV_BAUD_3600*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_2400    ((DEV_BAUD_2400*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_1800    ((DEV_BAUD_1800*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_1200    ((DEV_BAUD_1200*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_600     ((DEV_BAUD_600*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_300     ((DEV_BAUD_300*16*65536)/(ARM_NETX_HOST_CLOCK/100))
#define ARM_NETX_BAUD_200     ((DEV_BAUD_200*16*65536)/(ARM_NETX_HOST_CLOCK/100))

// Supported baud rates
static unsigned short select_baud[] = {
    0,               // Unused
    0,               // 50
    0,               // 75
    0,               // 110
    0,               // 134.5
    0,               // 150
    ARM_NETX_BAUD_200,    // 200
    ARM_NETX_BAUD_300,    // 300
    ARM_NETX_BAUD_600,    // 600
    ARM_NETX_BAUD_1200,   // 1200
    ARM_NETX_BAUD_1800,   // 1800
    ARM_NETX_BAUD_2400,   // 2400
    ARM_NETX_BAUD_3600,   // 3600
    ARM_NETX_BAUD_4800,   // 4800
    ARM_NETX_BAUD_7200,   // 7200
    ARM_NETX_BAUD_9600,   // 9600
    ARM_NETX_BAUD_14400,  // 14400
    ARM_NETX_BAUD_19200,  // 19200
    ARM_NETX_BAUD_38400,  // 38400
    ARM_NETX_BAUD_57600,  // 57600
    ARM_NETX_BAUD_115200, // 115200
    ARM_NETX_BAUD_230400, // 230400
};

// Line Control Register
#define LCR_WL5 0x00    // Word length
#define LCR_WL6 0x20
#define LCR_WL7 0x40
#define LCR_WL8 0x60

static unsigned char select_word_length[] = {
    LCR_WL5,    // 5 bits / word (char)
    LCR_WL6,
    LCR_WL7,
    LCR_WL8
};

#define LCR_SB1 0x00    // Number of stop bits
#define LCR_SB1_5 0x00  // 1.5 -> only valid with 5 bit words
#define LCR_SB2 0x08

static unsigned char select_stop_bits[] = {
    0,
    LCR_SB1,    // 1 stop bit
    LCR_SB1_5,  // 1.5 stop bit
    LCR_SB2     // 2 stop bits
};

#define LCR_PN  0x00    // Parity mode - none
#define LCR_PE  0x06    // Parity mode - even
#define LCR_PO  0x02    // Parity mode - odd
#define LCR_PM  0x00    // Forced "mark" parity
#define LCR_PS  0x00    // Forced "space" parity

static unsigned char select_parity[] = {
    LCR_PN,     // No parity
    LCR_PE,     // Even parity
    LCR_PO,     // Odd parity
    LCR_PM,     // Mark parity
    LCR_PS,     // Space parity
};

#endif // CYGONCE_ARM_NETX_SERIAL_H
