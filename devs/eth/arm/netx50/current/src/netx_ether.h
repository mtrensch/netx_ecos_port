//==========================================================================
//
//      netx_ether.h
//
//      
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
//               
// Date:         2006-03-11
// Purpose:      
// Description:  
//
//####DESCRIPTIONEND####
//
//========================================================================*/

#ifndef NETX_ETHER_H
#define NETX_ETHER_H

#include <eth_std_mac_xpec_regdef.h>

/* XC Fifo Offsets */
#define EMPTY_PTR_FIFO    0    /**< Index of the empty pointer FIFO */
#define IND_FIFO_PORT_HI  1    /**< Index of the FIFO where received Data packages are indicated by XC */                                
#define IND_FIFO_PORT_LO  2    /**< Index of the FIFO where received Data packages are indicated by XC */                                
#define REQ_FIFO_PORT_HI  3    /**< Index of the FIFO where Data packages have to be indicated by ARM which shall be sent */                                 
#define REQ_FIFO_PORT_LO  4    /**< Index of the FIFO where Data packages have to be indicated by ARM which shall be sent */                                 
#define CON_FIFO_PORT_HI  5    /**< Index of the FIFO where sent Data packages are confirmed */                             
#define CON_FIFO_PORT_LO  6    /**< Index of the FIFO where sent Data packages are confirmed */                             

#define XC_FRAME_LENGTH 1560

#define SUCCEEDED_XC(equ)  ((equ & 0x8) == 0)
#define FAILED_XC(equ)     (!SUCCEEDED_XC(equ))

#define XC_CON_ERROR_LATECOLL     0x8
#define XC_CON_ERROR_LINKDOWN     0x9
#define XC_CON_ERROR_COLL         0xA
#define XC_CON_ERROR_LENGTH       0xB
#define XC_CON_ERROR_POINTER      0xC
#define XC_CON_ERROR_FIFOUFLOW    0xD

#define XC_IND_ERROR_CHECKSUM     0x8
#define XC_IND_ERROR_ALIGNMENT    0x9
#define XC_IND_ERROR_TOOLONG      0xA
#define XC_IND_ERROR_RUNT         0xB
#define XC_IND_ERROR_COLLFRAGMENT 0xC
#define XC_IND_ERROR_STARTOFFRAME 0xD
#define XC_IND_ERROR_FIFOOVERFLOW 0xE

#define MSK_IRQ_CON_HI            0x00000001
#define MSK_IRQ_IND_HI            0x00000002
#define MSK_IRQ_CON_LO            0x00000004
#define MSK_IRQ_IND_LO            0x00000008
#define MSK_IRQ_LINKSTATE         0x00000010

#define MSK_FIFO_PTR_FRAMELEN     0x000007FF
#define MSK_FIFO_PTR_SEGMENT      0x03C00000
#define MSK_FIFO_PTR_FRAMENR      0x003F0000

// ////////////////////////////////////////////////////
//! Standard Pointer for ARM<-->xPEC exchange
// ////////////////////////////////////////////////////
typedef struct FIFO_POINTER_BITtag
{
  unsigned int uiFrameLen  : 11;    //!< lemgth of frame in bytes
  unsigned int uiTimeTrig  : 1;     //!< time triggered/direct send frame
  unsigned int uiMulReq    : 2;     //!< multirequest
  unsigned int uiOrigin    : 1;     //!< Origin
  unsigned int uiReserved  : 1;     //!< reserved/unused
  unsigned int uiFrameNr   : 6;     //!< Frame number in Segment. Offset in Segment is FrameNr * 1560
  unsigned int uiSegment   : 4;     //!< Internal RAM segment where data is located
  unsigned int uiReserved1 : 2;     //!< reserved/unused
  unsigned int uiError     : 4;     //!< On confirmation requests, tells the state of the send action  
} FIFO_POINTER_BIT, *PFIFO_POINTER_BIT;

// ////////////////////////////////////////////////////
//! Standard Pointer union for ARM<-->xPEC exchange
// ////////////////////////////////////////////////////
typedef union FIFO_POINTERtag
{
  unsigned int uiVal;   //!< DWORD value for insertion into FIFO
  FIFO_POINTER_BIT tBf; //!< Bitfield for manual editing
  
} FIFO_POINTER, *PFIFO_POINTER;

// ///////////////////////////////////////////////////// 
//! Structure of information block supplied by xPEC 
//! (located at xpec_ramstart + REL_Adr_FRAMES_TRANSMITTED_OK)
// ///////////////////////////////////////////////////// 
typedef struct XC_ETH_INFO_Ttag {
  volatile unsigned long ulFramesTransmittedOK;               //!< number of transmitted frames with no error
  volatile unsigned long ulSingleCollisionFrames;             //!< number of single collision frames
  volatile unsigned long ulMultipleCollisionFrames;           //!< number of multiple collision frames
  volatile unsigned long ulLateCollisions;                    //!< number of detected late collisions
  volatile unsigned long ulLinkDownDuringTransmissionErrors;  //!< number of link down condition during sends
  volatile unsigned long ulUTXUnderflow;                      //!< number of UTX Fifo underflow errors
  volatile unsigned long ulFramesReceivedOK;                  //!< number of total received frames
  volatile unsigned long ulFrameCheckSequenceErrors;          //!< number of frames that had a bad FCS
  volatile unsigned long ulAlignmentErrors;                   //!< number of alignment errors
  volatile unsigned long ulFrameTooLongErrors;                //!< number of too big frames on wire
  volatile unsigned long ulRuntFrameReceived;                 //!< number of runt frames
  volatile unsigned long ulCollisionFragmentsRcvd;            //!< number of collision fragments received
  volatile unsigned long ulFramesDiscarded;                   //!< number of discarded frames (e.g. No pointer in FIFO during receive)
  volatile unsigned long ulURXUnderflow;                      //!< number of URX Fifo underflow errors
} XC_ETH_INFO_T, *PXC_ETH_INFO_T;

// ///////////////////////////////////////////////////// 
//! Structure of frame delivered by xPEC in indication
// ///////////////////////////////////////////////////// 
typedef struct XC_ETHERNETFRAMEtag
{
  volatile unsigned char abFrameData[1518];
  volatile unsigned char abUnused[18];
  volatile unsigned long ulTimestamp_ns;
  volatile unsigned long ulTimestamp_s;
     
} __attribute__((packed)) XC_ETHERNETFRAME, *PXC_ETHERNETFRAME;

#define PHY_PORT0_ADDRESS 0x1C
#define PHY_PORT1_ADDRESS 0x1D

#define ETH_HALFDUPLEX            2
#define ETH_FULLDUPLEX            3

#define ETH_LINKDOWN              2
#define ETH_LINKUP                3

#define MAX_SEND_SLOTS            4
#define MAX_SLOTS                 21
#define MAX_ETH_FRAME_SIZE        1514
#define MIN_ETH_FRAME_SIZE        60

#endif
