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

extern cyg_uint32 hal_phys_to_virt_address(cyg_uint32 phys, cyg_bool fCached);

static volatile cyg_uint32* s_pulXpecIRQ = (volatile cyg_uint32*)Addr_xpec_irq_registers;

static struct
{
  cyg_uint32   ulXpecPhys;
  PXPEC_AREA_T ptXpec;
  cyg_uint32   ulXmacPhys;
  PXMAC_AREA_T ptXmac;
  cyg_bool     fOpen;
  cyg_handle_t hOpen;

} s_atXCUnits[2] =
{
 {Addr_xpec0, NULL, Addr_xmac0, NULL, false},
 {Addr_xpec1, NULL, Addr_xmac1, NULL, false},
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
    if(NULL == s_atXCUnits[ulUnit].ptXpec)
    {
      s_atXCUnits[ulUnit].ptXpec = (PXPEC_AREA_T)hal_phys_to_virt_address(s_atXCUnits[ulUnit].ulXpecPhys, false);;
    }

    if(NULL == s_atXCUnits[ulUnit].ptXmac)
    {
      s_atXCUnits[ulUnit].ptXmac = (PXMAC_AREA_T)hal_phys_to_virt_address(s_atXCUnits[ulUnit].ulXmacPhys, false);
    }

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

cyg_bool xc_reset(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    PXPEC_AREA_T ptXpec = s_atXCUnits[ulUnit].ptXpec;
    PXMAC_AREA_T ptXmac = s_atXCUnits[ulUnit].ptXmac;
    cyg_uint32   uIdx;

    ptXpec->ulXpuHoldPc    = 1;                                       /* Hold the Program Counter */
    ptXpec->aulStatCfg[ulUnit] = 0x08500000;                         /* Reset IO.OE asap */
    ptXmac->ulTpuHoldPc = MSK_xmac_tpu_hold_pc_tpu_hold;              /* Just set Hold-Bit */
    ptXmac->ulRpuHoldPc = MSK_xmac_rpu_hold_pc_rpu_hold;              /* Just set Hold-Bit */
    ptXpec->aulStatCfg[ulUnit] = 0x08500000;                         /* Reset IO.OE asap */
    ptXmac->ulConfigObu = 0x00000180;                                 /* Reset TX.OE asap */

    for(uIdx = 0; uIdx < XPEC_DWORD_RAMSIZE; uIdx++)
      ptXpec->aulPRam[uIdx] = 0xC0FFF000;                             /* Use the command wait b111111111111,b000000000000 at all addresses */

    ptXpec->ulPc           = 0x7ff;                                   /* Reset the Program Counter to 0x7ff */

    ptXpec->ulStatCfg      = 0;                                       /* Reset Timer operation and DMA */
    ptXpec->aulRam[0x7FF]  = 0x7F;                                    /* Link and Stop DMA */

    /* let the XC run for at least 10 cycles */
    for(uIdx = 0; uIdx < 10; uIdx++)
      ptXpec->ulXpuHoldPc = 0;

    ptXpec->ulXpuHoldPc = 1;                                          /* Hold the Program Counter */
    ptXpec->ulPc        = 0x7ff;                                      /* Reset the Program Counter to 0x7ff */

    /* reset all registers */
    for(uIdx = 0; uIdx < 8; ++uIdx)
      ptXpec->aulR[uIdx]   = 0;

    ptXpec->ulRange01   = 0;
    ptXpec->ulRange23   = 0;
    ptXpec->ulRange45   = 0;
    ptXpec->ulRange67   = 0;

    ptXpec->ulUrxCount  = 0;
    ptXpec->ulUtxCount  = 0;
    ptXpec->ulStatCfg   = 0;
    ptXpec->ulTimer0    = 0;                                             /* Stop all Timers */
    ptXpec->ulTimer1    = 0;
    ptXpec->ulTimer2    = 0;
    ptXpec->ulTimer3    = 0;
    ptXpec->ulTimer4    = 0;
    ptXpec->ulTimer5    = 0;

    /* Reset the event controller if the XC was stopped on a wait 
       This will program an IRQ event to branch to address 0.
       The command at address 0 is an endless loop */
    ptXpec->ulEcMask0   = 0x1000E0E0;
    ptXpec->ulEcMask1   = 0x1000E0E0;
    ptXpec->ulEcMask2   = 0x1000E0E0;
    ptXpec->ulEcMask3   = 0x1000E0E0;
    ptXpec->ulEcMask4   = 0x1000E0E0;
    ptXpec->ulEcMask5   = 0x1000E0E0;
    ptXpec->ulEcMask6   = 0x1000E0E0;
    ptXpec->ulEcMask7   = 0x1000E0E0;
    ptXpec->ulEcMask8   = 0x1000E0E0;
    ptXpec->ulEcMask9   = 0x1000E0E0;
    ptXpec->ulEcMaskA   = 0x1000E0E0;
    ptXpec->ulEcMaskB   = 0x1000E0E0;

    ptXpec->aulPRam[0]  = 0xbe000000;

    ptXpec->ulXpuHoldPc = 0;

    /* Signal IRQ to XPEC */
    s_pulXpecIRQ[ulUnit] = 0x00010000;

    /* let the XC run for at least 10 cycles */
    for(uIdx = 0; uIdx < 10; uIdx++)
      ptXpec->ulXpuHoldPc = 0;

    ptXpec->ulXpuHoldPc = 1;                                          /* Hold the Program Counter */
    ptXpec->ulPc        = 0x7ff;                                      /* Reset the Program Counter to 0x7ff */

    ptXpec->ulIrq       = 0xFFFF0000;                                       /* Clear XPEC side IRQ request lines */

    ptXpec->ulEcMask0   = 0x0000FFFF; /* Reset events */
    ptXpec->ulEcMask1   = 0x0000FFFF;
    ptXpec->ulEcMask2   = 0x0000FFFF;
    ptXpec->ulEcMask3   = 0x0000FFFF;
    ptXpec->ulEcMask4   = 0x0000FFFF;
    ptXpec->ulEcMask5   = 0x0000FFFF;
    ptXpec->ulEcMask6   = 0x0000FFFF;
    ptXpec->ulEcMask7   = 0x0000FFFF;
    ptXpec->ulEcMask8   = 0x0000FFFF;
    ptXpec->ulEcMask9   = 0x0000FFFF;
    ptXpec->ulEcMaskA   = 0x0000FFFF;
    ptXpec->ulEcMaskB   = 0x0000FFFF;

    ptXpec->ulAdc = 0;

    /* Reset SR0-3 for XC0, SR4-7 for XC1 */
    for(uIdx = 4 * ulUnit; uIdx < 4 * ulUnit + 4; ++uIdx)
      ptXpec->aulSr[uIdx] = 0;

    /* Reset SR8-11 for XC0, SR12-15 for XC1 */
    for(uIdx = 8 + 4 * ulUnit; uIdx < 12 + 4 * ulUnit; ++uIdx)
      ptXpec->aulSr[uIdx] = 0;

    /* reset urx and utx */
    switch(ulUnit)                                                      /* Set Reset-Flag for FIFO */
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
      ptXmac->ulConfigShared1 |=MSK_xmac_config_shared0_reset_rx_fifo; 
      ptXmac->ulConfigShared1 &= ~MSK_xmac_config_shared0_reset_rx_fifo;
    break;
    }

    ptXpec->ulIrq  = 0xffff0000;   /* confirm all ARM IRQs */
    ptXpec->ulAdc  = 0;

    /* Clear ARM side IRQ request lines */
    s_pulXpecIRQ[ulUnit] = 0x0000FFFF;

    /* reset all xMAC registers to default values */
    ptXmac->ulRxHw              = 0;
    ptXmac->ulRxHwCount         = 0;
    ptXmac->ulTx                = 0;
    ptXmac->ulTxHw              = 0;
    ptXmac->ulTxHwCount         = 0;
    ptXmac->ulTxSend            = 0;
    ptXmac->aulWr[0]            = 0;
    ptXmac->aulWr[1]            = 0;
    ptXmac->aulWr[2]            = 0;
    ptXmac->aulWr[3]            = 0;
    ptXmac->aulWr[4]            = 0;
    ptXmac->aulWr[5]            = 0;
    ptXmac->aulWr[6]            = 0;
    ptXmac->aulWr[7]            = 0;
    ptXmac->aulWr[8]            = 0;
    ptXmac->aulWr[9]            = 0;
    ptXmac->ulConfigMii         = 0;
    ptXmac->ulConfigNibbleFifo  = 0x00000600;
    ptXmac->ulConfigSbu         = 0x00000080;
    ptXmac->ulStartSamplePos    = 0;
    ptXmac->ulStopSamplePos     = 0;
    ptXmac->ulStartTransPos     = 0;
    ptXmac->ulStopTransPos      = 0;
    ptXmac->ulRpuCount1         = 0;
    ptXmac->ulRpuCount2         = 0;
    ptXmac->ulTpuCount1         = 0;
    ptXmac->ulTpuCount2         = 0;
    ptXmac->ulRxCount           = 0;
    ptXmac->ulTxCount           = 0;
    ptXmac->ulRpmMask0          = 0;
    ptXmac->ulRpmVal0           = 0;
    ptXmac->ulRpmMask1          = 0;
    ptXmac->ulRpmVal1           = 0;
    ptXmac->ulTpmMask0          = 0;
    ptXmac->ulTpmVal0           = 0;
    ptXmac->ulTpmMask1          = 0;
    ptXmac->ulTpmVal1           = 0;
    ptXmac->ulRxCrcPolynomialL  = 0;
    ptXmac->ulRxCrcPolynomialH  = 0;
    ptXmac->ulRxCrcL            = 0;
    ptXmac->ulRxCrcH            = 0;
    ptXmac->ulRxCrcCfg          = 0;
    ptXmac->ulTxCrcPolynomialL  = 0;
    ptXmac->ulTxCrcPolynomialH  = 0;
    ptXmac->ulTxCrcL            = 0;
    ptXmac->ulTxCrcH            = 0;
    ptXmac->ulTxCrcCfg          = 0;

    /* reset rate multipliers */
    ptXmac->aulRpuProgram[0]    = 0x00e00000;                            /* endless loop */
    ptXmac->aulRpuProgram[1]    = 0x001fdc00;
    ptXmac->aulTpuProgram[0]    = 0x00e00000;                            /* endless loop */
    ptXmac->aulTpuProgram[1]    = 0x001fdc00;

    ptXmac->ulRpuPc             = 0;
    ptXmac->ulTpuPc             = 0;

    ptXmac->ulObuRateMulStart   = 0;
    ptXmac->ulObuRateMulAdd     = 1;                                      /* Reset the Rate Multiplier Add Value */
    ptXmac->ulSbuRateMulStart   = 0;
    ptXmac->ulSbuRateMulAdd     = 1;                                      /* Reset the Rate Multiplier Add Value */

    while (ptXmac->ulObuRateMul != 0xffff)                          /* wait until rate mul has stopped */
    {
      ptXmac->ulTpuHoldPc = 0;                                      /* every 5 cycles check if ratemul has reached end */
      ptXmac->ulTpuHoldPc = 0;
      ptXmac->ulTpuHoldPc = 0;
      ptXmac->ulTpuHoldPc = 0;
      ptXmac->ulTpuHoldPc = 0;
      ptXmac->ulTpuHoldPc = MSK_xmac_tpu_hold_pc_tpu_hold;           /* Just set Hold-Bit */
    }

    while (ptXmac->ulSbuRateMul != 0xffff)                            /* wait until rate mul has stopped */
    {
      ptXmac->ulRpuHoldPc = 0;                                      /* every 5 cycles check if ratemul has reached end */
      ptXmac->ulRpuHoldPc = 0;
      ptXmac->ulRpuHoldPc = 0;
      ptXmac->ulRpuHoldPc = 0;
      ptXmac->ulRpuHoldPc = 0;
      ptXmac->ulRpuHoldPc = MSK_xmac_rpu_hold_pc_rpu_hold;           /* Just set Hold-Bit */
    }
  }

  return fRet;
}

static cyg_bool LoadXCCode(cyg_uint32 ulPhysicalStart, cyg_uint32* pulRamStart, cyg_uint32 ulRamSize, const cyg_uint32* pulXcPrg)
{
  volatile cyg_uint32 *pulDst, *pulDstCnt;
  const cyg_uint32    *pulSrcStart, *pulSrcCnt, *pulSrcEnd;
  cyg_uint32           uiElements;
  cyg_uint32*          pulRamEnd = pulRamStart + ulRamSize / sizeof(cyg_uint32);

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

  if(!LoadXCCode(s_atXCUnits[ulUnit].ulXpecPhys, 
                 (cyg_uint32*)s_atXCUnits[ulUnit].ptXpec, 
                 sizeof(*s_atXCUnits[ulUnit].ptXpec), 
                 pulXPEC))
  {
  } else if(!LoadXCCode(s_atXCUnits[ulUnit].ulXmacPhys, 
                        (cyg_uint32*)s_atXCUnits[ulUnit].ptXmac, 
                        sizeof(*s_atXCUnits[ulUnit].ptXmac), 
                        pulXMACTPU))
  {
  } else if(!LoadXCCode(s_atXCUnits[ulUnit].ulXmacPhys, 
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
