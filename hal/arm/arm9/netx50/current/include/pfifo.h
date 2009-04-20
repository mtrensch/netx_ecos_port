/****************************************************************************************
   
    Copyright (c) Hilscher GmbH. All Rights Reserved.
  
*****************************************************************************************
  
    Filename:
     $Workfile: pfifo.h $ $Revision: 1 $
    Last Modification:
       $Author: Michaelt $
       $Modtime: 14.10.05 12:34 $
    
    Targets:
      Win32/ANSI   : no
      Win32/Unicode: no
      WinCE        : yes
  
    Description:
    
      PFIFO.h : netX Pointer FIFO register layout

    Changes:
  
      Revision  Date        Author      Description
      -----------------------------------------------------------------------------------
      1         21.04.05    MT          created
  
****************************************************************************************/

// ////////////////////////////////////////////////////
//! \file pfifo.h
//!  netX Pointer FIFO register layout
// ////////////////////////////////////////////////////

#ifndef __PFIFO__H
#define __PFIFO__H

// ///////////////////////////////////////////////////// 
//! structure describing netX FIFO area
// ///////////////////////////////////////////////////// 
typedef struct FIFO_AREA_Ttag 
{
  volatile unsigned long aulPFifo[32];              //!< array of FIFOs
  volatile unsigned long aulPFifoBorderBase[32];    //!< array of border limits
  volatile unsigned long ulPFifoReset;              //!< bitmask for resetting FIFO
  volatile unsigned long ulPFifoFull;               //!< bitmask for querying full state of FIFO
  volatile unsigned long ulPFifoEmpty;              //!< bitmask for querying empty state of FIFO
  volatile unsigned long ulPFifoOverflow;           //!< bitmask for querying overflow state of FIFO
  volatile unsigned long ulPFifoUnderrun;           //!< bitmask for querying underrun state of FIFO
  volatile unsigned long aulReserved[27];           //!< unused/reserved
  volatile unsigned long aulPFifoFillLevelBase[32]; //!< array of fill levels for each fifo
} FIFO_AREA_T, *PFIFO_AREA_T; 

#endif //__PFIFO__H
