/****************************************************************************************
   
    Copyright (c) Hilscher GmbH. All Rights Reserved.
  
*****************************************************************************************
  
    Filename:
     $Workfile: vic.h $ $Revision: 1 $
    Last Modification:
       $Author: Michaelt $
       $Modtime: 14.10.05 11:06 $
    
    Targets:
      Win32/ANSI   : no
      Win32/Unicode: no
      WinCE        : yes
  
    Description:
    
      vic.h : netX VIC register layout

    Changes:
  
      Revision  Date        Author      Description
      -----------------------------------------------------------------------------------
      1         21.04.05    MT          created
  
****************************************************************************************/

// ////////////////////////////////////////////////////
//! \file vic.h
//!  netX VIC register layout
// ////////////////////////////////////////////////////

#ifndef __VIC__H
#define __VIC__H

// ///////////////////////////////////////////////////// 
//! Structure defininig VIC (vectored interrupt controller) 
//! register layout
// ///////////////////////////////////////////////////// 
typedef struct VIC_REGISTERStag
{
  volatile unsigned long ulIrqState;          //!< IRQ State register
  volatile unsigned long ulFiqState;          //!< FIQ State register
  volatile unsigned long ulRawIrqState;       //!< Raw interrupt state (not ANDed with Mask)
  volatile unsigned long ulIntSelect;         //!< Interrupt select
  volatile unsigned long ulIntEnable;         //!< Interrupt enable (Mask)
  volatile unsigned long ulIntEnableClear;    //!< Interrupt enable clear
  volatile unsigned long ulSWInt;             //!< Software interrupt
  volatile unsigned long ulSWIntClear;        //!< Software interrupt clear
  volatile unsigned long ulProtection;        //!< VIC Protection
  unsigned long          aulReserved[3];      //!< unused/reserved
  volatile unsigned long ulVectorAddr;        //!< Vector address of current interrupt
  volatile unsigned long ulDefaultVector;     //!< Address of default vector  
  unsigned long          aulReserved1[0x32];  //!< unusued/reserved
  volatile unsigned long aulIntVector[16];    //!< Address of default vector
  unsigned long          aulReserved2[0x30];  //!< unusued/reserved 
  volatile unsigned long aulVectorCtrl[16];   //!< Address of default vector
  
} VIC_REGISTERS, *PVIC_REGISTERS;

#endif //__GPIO__H
