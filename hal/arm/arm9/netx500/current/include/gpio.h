/****************************************************************************************
   
    Copyright (c) Hilscher GmbH. All Rights Reserved.
  
*****************************************************************************************
  
    Filename:
     $Workfile: gpio.h $ $Revision: 3 $
    Last Modification:
       $Author: Michaelt $
       $Modtime: 14.10.05 10:37 $
    
    Targets:
      Win32/ANSI   : no
      Win32/Unicode: no
      WinCE        : yes
  
    Description:
    
      gpio.h : netX GPIO register layout

    Changes:
  
      Revision  Date        Author      Description
      -----------------------------------------------------------------------------------
      1         21.04.05    MT          created
  
****************************************************************************************/

// ////////////////////////////////////////////////////
//! \file gpio.h
//!  netX GPIO register layout
// ////////////////////////////////////////////////////

#ifndef __GPIO__H
#define __GPIO__H

// ///////////////////////////////////////////////////// 
//! Structure defininig GPIO register layout
// ///////////////////////////////////////////////////// 
typedef struct GPIO_REGISTERStag
{
  volatile unsigned long aulConfig[16];      //!< GPIO configuration registers
  volatile unsigned long aulCapture[16];     //!< capture configuration/values
  volatile unsigned long aulCounterCtrl[5];  //!< counter setup for first 5 GPIOs
  volatile unsigned long aulCounterMax[5];   //!< counter min/max values settings
  volatile unsigned long aulCounterCnt[5];   //!< actual counter value
  volatile unsigned long ulIRQMaskSet;      //!< IRQ mask register
  volatile unsigned long ulIRQMaskReset;    //!< IRQ clear register
  volatile unsigned long ulSystimeCmp;      //!< SYSTIME compare register
  volatile unsigned long ulLine;            //!< GPIO out register
  volatile unsigned long ulIn;              //!< GPIO in register
  volatile unsigned long ulIRQ;             //!< raw IRQ state
  
} GPIO_REGISTERS, *PGPIO_REGISTERS;

#endif //__GPIO__H
