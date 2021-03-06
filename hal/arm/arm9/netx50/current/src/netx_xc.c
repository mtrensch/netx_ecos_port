//==========================================================================
//
//      netx_xc.c
//
//      HAL XC unit support code for netX
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
// Date:         2009-04-27
// Purpose:      XC unit support
// Description:  Implementations of XC unit interfaces
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
#include <cyg/kernel/kapi.h> 

#include <cyg/infra/diag.h>             // diag_printf

#include <string.h> // memset

static volatile cyg_uint32* s_pulXpecIRQ = (volatile cyg_uint32*)Addr_xpec_irq_registers;

static cyg_bool LoadXCCode(cyg_uint32 ulPhysicalStart, cyg_uint32* pulRamStart, cyg_uint32 ulRamSize, const cyg_uint32* pulXcPrg);

static struct
{
  PXPEC_AREA_T ptXpec;
  PXMAC_AREA_T ptXmac;
  cyg_bool     fOpen;
  cyg_handle_t hOpen;

} s_atXCUnits[2] =
{
 {(PXPEC_AREA_T)Addr_xpec0, (PXMAC_AREA_T)Addr_xmac0, false, 0},
 {(PXPEC_AREA_T)Addr_xpec1, (PXMAC_AREA_T)Addr_xmac1, false, 0},
};

static cyg_bool IsValidXCUnit(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(ulUnit >= sizeof(s_atXCUnits) / sizeof(s_atXCUnits[0]))
  {
    /* Invalid port number */
    CYG_ASSERT(ulUnit < sizeof(s_atXCUnits) / sizeof(s_atXCUnits[0]), "Invalid XC port number");

  } else if( (!s_atXCUnits[ulUnit].fOpen) || (s_atXCUnits[ulUnit].hOpen != cyg_thread_self()) )
  {
    /* XC unit was not opened, or somebody else opened it */
    CYG_ASSERT(false, "XC Unit is open by another thread!");
  } else
  {
    fRet = true;
  }

  return fRet;
}

cyg_bool xc_open(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(ulUnit >= sizeof(s_atXCUnits) / sizeof(s_atXCUnits[0]))
  {
    /* Invalid port number */
    CYG_ASSERT(ulUnit < sizeof(s_atXCUnits) / sizeof(s_atXCUnits[0]), "Invalid XC port number");

  } else if(s_atXCUnits[ulUnit].fOpen)
  {
    /* XC unit was not opened, or somebody else opened it */
    CYG_ASSERT(false, "XC Unit is open by another thread!");

  } else
  {
    s_atXCUnits[ulUnit].fOpen = true;
    s_atXCUnits[ulUnit].hOpen = cyg_thread_self();

    fRet = true;
  }

  return fRet;
}

cyg_bool xc_close(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    s_atXCUnits[ulUnit].fOpen = false;
    s_atXCUnits[ulUnit].hOpen = 0;
    fRet = true;
  }

  return fRet;
}

cyg_bool xc_start(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    PXPEC_AREA_T ptXpecArea = s_atXCUnits[ulUnit].ptXpec;
    PXMAC_AREA_T ptXmacArea = s_atXCUnits[ulUnit].ptXmac;

    /* reset pc */
    ptXmacArea->ulRpuPc     = 0;
    ptXmacArea->ulTpuPc     = 0;
    ptXpecArea->ulPc        = 0x7ff;

    /* start unit */
    ptXmacArea->ulTpuHoldPc = 0;
    ptXmacArea->ulRpuHoldPc = 0;
    ptXpecArea->ulXpuHoldPc = 0;

    fRet = true;
  }

  return fRet;
}

cyg_bool xc_stop(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    PXPEC_AREA_T ptXpecArea = s_atXCUnits[ulUnit].ptXpec;
    PXMAC_AREA_T ptXmacArea = s_atXCUnits[ulUnit].ptXmac;

    /* stop unit */
    ptXmacArea->ulTpuHoldPc = MSK_xmac_tpu_hold_pc_tpu_hold;
    ptXmacArea->ulRpuHoldPc = MSK_xmac_rpu_hold_pc_rpu_hold;
    ptXpecArea->ulXpuHoldPc = MSK_xpu_hold_pc_hold;

    /* reset pc */
    ptXmacArea->ulRpuPc     = 0;
    ptXmacArea->ulTpuPc     = 0;
    ptXpecArea->ulPc        = 0x7ff;  

    fRet = true;
  }

  return fRet;
}

static const cyg_uint32 XcCode_rpu_reset0[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x1c060000, 0x00fc0001, 0x995fdc01, 0x00f80041, 0x995fdc02, 0x00e00000, 0x001fdc03, 0x00fcfffd, 
  0x994fe084, 0x00fffffd, 0x995fdc05, 0x010bfffd, 0x995fdc06, 0x010c0001, 0x995fdc07, 0x010ffffd, 
  0x995fdc08, 0x01080001, 0x995fdc09, 0x010c0001, 0x995fdc0a, 0x00f80001, 0x995fdc0b, 0x00fdfffd, 
  0x995fdc0c, 0x00fcfffd, 0x995fdc0d, 0x00fc7ffd, 0x995fdc0e, 0x00fc3ffd, 0x995fdc0f, 0x00fc1ffd, 
  0x995fdc10, 0x00fc0ffd, 0x995fdc11, 0x00fc07fd, 0x995fdc12, 0x00fc03fd, 0x995fdc13, 0x00fc01fd, 
  0x995fdc14, 0x00fc00fd, 0x995fdc15, 0x00fc007d, 0x995fdc16, 0x00fc003d, 0x995fdc17, 0x00fc001d, 
  0x995fdc18, 0x00fc000d, 0x995fdc19, 0x00fc0005, 0x995fdc1a, 0x00e00000, 0x001fdc1a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_rpu_reset1[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x1c061000, 0x00fc0001, 0x995fdc01, 0x00f80041, 0x995fdc02, 0x00e00000, 0x001fdc03, 0x00fcfffd, 
  0x994fe084, 0x00fffffd, 0x995fdc05, 0x010bfffd, 0x995fdc06, 0x010c0001, 0x995fdc07, 0x010ffffd, 
  0x995fdc08, 0x01080001, 0x995fdc09, 0x010c0001, 0x995fdc0a, 0x00f80001, 0x995fdc0b, 0x00fdfffd, 
  0x995fdc0c, 0x00fcfffd, 0x995fdc0d, 0x00fc7ffd, 0x995fdc0e, 0x00fc3ffd, 0x995fdc0f, 0x00fc1ffd, 
  0x995fdc10, 0x00fc0ffd, 0x995fdc11, 0x00fc07fd, 0x995fdc12, 0x00fc03fd, 0x995fdc13, 0x00fc01fd, 
  0x995fdc14, 0x00fc00fd, 0x995fdc15, 0x00fc007d, 0x995fdc16, 0x00fc003d, 0x995fdc17, 0x00fc001d, 
  0x995fdc18, 0x00fc000d, 0x995fdc19, 0x00fc0005, 0x995fdc1a, 0x00e00000, 0x001fdc1a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_tpu_reset0[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x1c060400, 0x01140001, 0x995fdc01, 0x01100641, 0x995fdc02, 0x00e00000, 0x001fdc03, 0x0114fffd, 
  0x994fe384, 0x0117fffd, 0x995fdc05, 0x0123fffd, 0x995fdc06, 0x01240001, 0x995fdc07, 0x0127fffd, 
  0x995fdc08, 0x01200001, 0x995fdc09, 0x01240001, 0x995fdc0a, 0x01100601, 0x995fdc0b, 0x0115fffd, 
  0x995fdc0c, 0x0114fffd, 0x995fdc0d, 0x01147ffd, 0x995fdc0e, 0x01143ffd, 0x995fdc0f, 0x01141ffd, 
  0x995fdc10, 0x01140ffd, 0x995fdc11, 0x011407fd, 0x995fdc12, 0x011403fd, 0x995fdc13, 0x011401fd, 
  0x995fdc14, 0x011400fd, 0x995fdc15, 0x0114007d, 0x995fdc16, 0x0114003d, 0x995fdc17, 0x0114001d, 
  0x995fdc18, 0x0114000d, 0x995fdc19, 0x01140005, 0x995fdc1a, 0x00e00000, 0x001fdc1a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_tpu_reset1[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x1c061400, 0x01140001, 0x995fdc01, 0x01100641, 0x995fdc02, 0x00e00000, 0x001fdc03, 0x0114fffd, 
  0x994fe384, 0x0117fffd, 0x995fdc05, 0x0123fffd, 0x995fdc06, 0x01240001, 0x995fdc07, 0x0127fffd, 
  0x995fdc08, 0x01200001, 0x995fdc09, 0x01240001, 0x995fdc0a, 0x01100601, 0x995fdc0b, 0x0115fffd, 
  0x995fdc0c, 0x0114fffd, 0x995fdc0d, 0x01147ffd, 0x995fdc0e, 0x01143ffd, 0x995fdc0f, 0x01141ffd, 
  0x995fdc10, 0x01140ffd, 0x995fdc11, 0x011407fd, 0x995fdc12, 0x011403fd, 0x995fdc13, 0x011401fd, 
  0x995fdc14, 0x011400fd, 0x995fdc15, 0x0114007d, 0x995fdc16, 0x0114003d, 0x995fdc17, 0x0114001d, 
  0x995fdc18, 0x0114000d, 0x995fdc19, 0x01140005, 0x995fdc1a, 0x00e00000, 0x001fdc1a, 
  // trailing loads
  
};

static const cyg_uint32* s_paulxMacRpuCodes[2]=
{
  XcCode_rpu_reset0,
  XcCode_rpu_reset1
};

static const cyg_uint32* s_paulxMacTpuCodes[2]=
{
  XcCode_tpu_reset0,
  XcCode_tpu_reset1
};

cyg_bool xc_reset(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    PXPEC_AREA_T ptXpec = s_atXCUnits[ulUnit].ptXpec;
    PXMAC_AREA_T ptXmac = s_atXCUnits[ulUnit].ptXmac;
    cyg_uint32   ulIdx;
    
    fRet = true;

    ptXpec->ulXpuHoldPc         = 1;                                   /* Hold the Program Counter */
    ptXpec->aulStatCfg[ulUnit]  = 0x08500000;                          /* Reset IO.OE asap */
    ptXmac->ulTpuHoldPc         = MSK_xmac_tpu_hold_pc_tpu_hold;  /* Just set Hold-Bit */
    ptXmac->ulRpuHoldPc         = MSK_xmac_rpu_hold_pc_rpu_hold;  /* Just set Hold-Bit */
    ptXpec->aulStatCfg[ulUnit]  = 0x08500000;                          /* Reset IO.OE asap */

    /* load ratemul reset code */
    LoadXCCode((cyg_uint32)ptXmac,
               (cyg_uint32*)ptXmac,
               sizeof(*ptXmac),
               s_paulxMacRpuCodes[ulUnit]);
               
    LoadXCCode((cyg_uint32)ptXmac,
               (cyg_uint32*)ptXmac,
               sizeof(*ptXmac),
               s_paulxMacTpuCodes[ulUnit]);

    ptXmac->ulRpuPc      = 0; /* Reset PC to 0 */
    ptXmac->ulTpuPc      = 0; /* Reset PC to 0 */
    ptXmac->ulTpuHoldPc  = 0; /* Clear Hold-Bit */
    ptXmac->ulTpuHoldPc  = 0; /* Clear Hold-Bit */

    /* !!!! ATTENTION: There must be enougth time between starting xMAC and stopping xMAC to execute reset programm */
    
    /* reset xPEC ALU */
    for( ulIdx = 0; ulIdx < XPEC_DWORD_RAMSIZE; ulIdx++ )
      ptXpec->aulPRam[ulIdx] = 0xC0FFF000; /* Use the command wait b111111111111,b000000000000 at all addresses */

    ptXpec->ulPc           = 0x7ff; /* Reset the Program Counter to 0x7ff */
    ptXpec->ulStatCfg      = 0; /* Reset Timer operation and DMA */
    ptXpec->aulRam[0x7FF]  = 0x7F; /* Link and Stop DMA */

    for(ulIdx = 0; ulIdx < 10; ulIdx++)
      ptXpec->ulXpuHoldPc = 0; /* let the XC run for at least 10 cycles */
 
    ptXpec->ulXpuHoldPc    = 1; /* Hold the Program Counter */
    ptXpec->ulPc           = 0x7ff; /* Reset the Program Counter to 0x7ff */
    
    /* reset all xPEC registers */
    for(ulIdx = 0; ulIdx < 8; ulIdx++)
      ptXpec->aulR[ulIdx] = 0;
    ptXpec->ulRange01   = 0;
    ptXpec->ulRange23   = 0;
    ptXpec->ulRange45   = 0;
    ptXpec->ulRange67   = 0;
    ptXpec->ulTimer0    = 0;
    ptXpec->ulTimer1    = 0;
    ptXpec->ulTimer2    = 0;
    ptXpec->ulTimer3    = 0;
    ptXpec->ulUrxCount  = 0;
    ptXpec->ulUtxCount  = 0;
    ptXpec->ulStatCfg   = 0;
    ptXpec->ulTimer4    = 0;
    ptXpec->ulTimer5    = 0;

    /* Reset the event controller if the XC was stopped on a wait.
      This will program an IRQ event to branch to address 0.
      The command at address 0 is an endless loop */
    for(ulIdx = 0; ulIdx < 10; ulIdx++)
      ptXpec->aulEcMask[ulIdx] = 0x1000E0E0;
    ptXpec->ulEcMaskA    = 0x1000E0E0;
    ptXpec->ulEcMaskB    = 0x1000E0E0;
    ptXpec->aulPRam[0]   = 0xbe000000;  
    ptXpec->ulXpuHoldPc  = 0;

    /* Signal IRQ to XPEC */
    s_pulXpecIRQ[ulUnit] = 0x00010000;

    /* let the XC run for at least 10 cycles */
    for( ulIdx = 0; ulIdx < 10; ulIdx++ )
      ptXpec->ulXpuHoldPc = 0;

    ptXpec->ulXpuHoldPc = 1; /* Hold the Program Counter */
    ptXpec->ulPc        = 0x7ff; /* Reset the Program Counter to 0x7ff */
    ptXpec->ulIrq       = 0xFFFF0000; /* Clear XPEC side IRQ request lines */
    
    /* reset events */
    for(ulIdx = 0; ulIdx < 10; ulIdx++)
      ptXpec->aulEcMask[ulIdx] = 0x0000FFFF;
    ptXpec->ulEcMaskA = 0x0000FFFF;
    ptXpec->ulEcMaskB = 0x0000FFFF;
    ptXpec->ulAdc     = 0; 
    
    /* Reset SR0-3 for XC0, SR4-7 for XC1 */
    for( ulIdx = 4 * ulUnit; ulIdx < 4 * ulUnit + 4; ++ulIdx )
      ptXpec->aulSr[ulIdx] = 0;
    /* Reset SR8-11 for XC0, SR12-15 for XC1 */
    for( ulIdx = 8 + 4 * ulUnit; ulIdx < 12 + 4 * ulUnit; ++ulIdx )
      ptXpec->aulSr[ulIdx] = 0;

    /* hold xMAC */
    ptXmac->ulTpuHoldPc = MSK_xmac_tpu_hold_pc_tpu_hold;
    ptXmac->ulRpuHoldPc = MSK_xmac_rpu_hold_pc_rpu_hold;

    /* reset IRQs from ARM side */ 
    s_pulXpecIRQ[ulUnit] = 0x0000FFFF;

    /* reset urx and utx fifos */
    switch( ulUnit )
    {
      case 0: 
        ptXmac->ulConfigShared0 |=MSK_xmac_config_shared0_reset_tx_fifo;
        ptXmac->ulConfigShared0 &= ~MSK_xmac_config_shared0_reset_tx_fifo;
        ptXmac->ulConfigShared0 |=MSK_xmac_config_shared0_reset_rx_fifo; 
        ptXmac->ulConfigShared0 &= ~MSK_xmac_config_shared0_reset_rx_fifo;
        break;
      case 1:
        ptXmac->ulConfigShared1 |=MSK_xmac_config_shared1_reset_tx_fifo;
        ptXmac->ulConfigShared1 &= ~MSK_xmac_config_shared1_reset_tx_fifo;
        ptXmac->ulConfigShared1 |=MSK_xmac_config_shared1_reset_rx_fifo; 
        ptXmac->ulConfigShared1 &= ~MSK_xmac_config_shared1_reset_rx_fifo;
        break;
    }

    /* reset all xMAC registers to default values */
    ptXmac->ulRxHw               = 0;
    ptXmac->ulRxHwCount          = 0;
    ptXmac->ulTx                 = 0;
    ptXmac->ulTxHw               = 0;
    ptXmac->ulTxHwCount          = 0;
    ptXmac->ulTxSend             = 0;
    for(ulIdx = 0; ulIdx < 10; ulIdx++)
      ptXmac->aulWr[ulIdx]       = 0;
    ptXmac->ulConfigMii          = 0;
    ptXmac->ulConfigNibbleFifo   = 0x00000600;
    ptXmac->ulRpuCount1          = 0;
    ptXmac->ulRpuCount2          = 0;
    ptXmac->ulTpuCount1          = 0;
    ptXmac->ulTpuCount2          = 0;
    ptXmac->ulRxCount            = 0;
    ptXmac->ulTxCount            = 0;
    ptXmac->ulRpmMask0           = 0;
    ptXmac->ulRpmVal0            = 0;
    ptXmac->ulRpmMask1           = 0;
    ptXmac->ulRpmVal1            = 0;
    ptXmac->ulTpmMask0           = 0;
    ptXmac->ulTpmVal0            = 0;
    ptXmac->ulTpmMask1           = 0;
    ptXmac->ulTpmVal1            = 0;
    ptXmac->ulRxTxNofBits        = 0x00000088;
    ptXmac->ulRxCrcPolynomialL   = 0;
    ptXmac->ulRxCrcPolynomialH   = 0;
    ptXmac->ulRxCrcL             = 0;
    ptXmac->ulRxCrcH             = 0;
    ptXmac->ulRxCrcCfg           = 0;
    ptXmac->ulTxCrcPolynomialL   = 0;
    ptXmac->ulTxCrcPolynomialH   = 0;
    ptXmac->ulTxCrcL             = 0;
    ptXmac->ulTxCrcH             = 0;
    ptXmac->ulTxCrcCfg           = 0;
    ptXmac->ulRpuPc              = 0;
    ptXmac->ulTpuPc              = 0;
  }

  return fRet;
}

static cyg_bool LoadXCCode(cyg_uint32 ulPhysicalStart, cyg_uint32* pulRamStart, cyg_uint32 ulRamSize, const cyg_uint32* pulXcPrg)
{
  volatile cyg_uint32 *pulDst, *pulDstCnt;
  const cyg_uint32    *pulSrcStart, *pulSrcCnt, *pulSrcEnd;
  cyg_uint32           uiElements;
  cyg_uint32*          pulRamEnd = pulRamStart + ulRamSize / sizeof(cyg_uint32);

  /* Allow loading a single unit, by passing NULL pointers to xc_load */
  if(NULL == pulXcPrg)
    return true;
  
  /* get the number of code elements */
  uiElements = pulXcPrg[0] / sizeof(unsigned long) - 1;

  /* get the pointer in the xc area */
  /* ram_virtual_start + code_physical_start - ram_physical_start */
  pulDst = pulRamStart + (pulXcPrg[2] - ulPhysicalStart) / sizeof(unsigned long);

  /* the code must fit into the ram area */
  if( (pulDst<pulRamStart) || ((pulDst+uiElements)>pulRamEnd) )
  {
    /* the code exceeds the xpec ram! */
    return false;
  }

  /* get source start and end pointer */
  pulSrcStart = pulXcPrg + 3;
  pulSrcEnd   = pulSrcStart + uiElements;

  /* copy the code to xc ram */
  pulSrcCnt = pulSrcStart;
  pulDstCnt = pulDst;
  while(pulSrcCnt<pulSrcEnd)
  {
    *(pulDstCnt++) = *(pulSrcCnt++);
  }

  /* compare the code */
  pulSrcCnt = pulSrcStart;
  pulDstCnt = pulDst;
  while(pulSrcCnt<pulSrcEnd)
  {
    if( *(pulDstCnt++)!=*(pulSrcCnt++) )
    {
      return false;
    }
  }

  /* get the number of trailing loads */
  uiElements = pulXcPrg[1] / sizeof(unsigned long);

  /* get source start and end pointer */
  pulSrcCnt = pulXcPrg + 2 + pulXcPrg[0] / sizeof(unsigned long);
  pulSrcEnd = pulSrcCnt + uiElements;

  /* write all trailing loads */
  while( pulSrcCnt<pulSrcEnd ) 
  {
    /* get the destination address */
    /* ram_virtual_start + data_physical_start - ram_physical_start */
    pulDst = pulRamStart + (*(pulSrcCnt++) - ulPhysicalStart) / sizeof(unsigned long);

    /* check the destination address */
    if( (pulDst<pulRamStart) || (pulDst>=pulRamEnd) ) 
    {
      return false;
    }

    /* write the data */
    *pulDst = *(pulSrcCnt++);
  }

  return true;
}

cyg_bool xc_load(cyg_uint32 ulUnit, const cyg_uint32* pulXPEC, const cyg_uint32* pulXMACRPU, const cyg_uint32* pulXMACTPU)
{
  cyg_bool fRet = false;

  if(!LoadXCCode((cyg_uint32)s_atXCUnits[ulUnit].ptXpec, 
                 (cyg_uint32*)s_atXCUnits[ulUnit].ptXpec, 
                 sizeof(*s_atXCUnits[ulUnit].ptXpec), 
                 pulXPEC))
  {
  } else if(!LoadXCCode((cyg_uint32)s_atXCUnits[ulUnit].ptXmac, 
                        (cyg_uint32*)s_atXCUnits[ulUnit].ptXmac, 
                        sizeof(*s_atXCUnits[ulUnit].ptXmac), 
                        pulXMACTPU))
  {
  } else if(!LoadXCCode((cyg_uint32)s_atXCUnits[ulUnit].ptXmac, 
                        (cyg_uint32*)s_atXCUnits[ulUnit].ptXmac, 
                        sizeof(*s_atXCUnits[ulUnit].ptXmac), 
                        pulXMACRPU))
  {
  } else
  {
    fRet = true;
  }

  return fRet;
}
