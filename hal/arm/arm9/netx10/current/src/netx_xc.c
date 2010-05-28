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

static volatile cyg_uint32* s_pulXpecIRQ = (volatile cyg_uint32*)NX10_NETX_XP_IRQ_AREA;

static const cyg_uint32 XcCode_rpu_reset0[27] = {
  0x00000064, // program size
  0x00000000, // trailing loads size
  0x101a0000, 0x01040001, 0xa15fdc81, 0x01080001, 0xa15fdc82, 0x0113fffd, 0xa15fdc83, 0x0117fffd, 
  0xa15fdc84, 0x01180001, 0xa15fdc85, 0x0113fff9, 0xa15fdc86, 0x011bfffd, 0xa15fdc87, 0x01140001, 
  0xa15fdc88, 0x0113fffd, 0xa15fdc89, 0x01180001, 0xa15fdc8a, 0x01080005, 0xa15fdc8b, 0x00e40000, 
  0x001fdc8b, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_tpu_reset0[27] = {
  0x00000064, // program size
  0x00000000, // trailing loads size
  0x101a0400, 0x011c0601, 0xa15fdc81, 0x01200001, 0xa15fdc82, 0x012bfffd, 0xa15fdc83, 0x012ffffd, 
  0xa15fdc84, 0x01300001, 0xa15fdc85, 0x012bfff9, 0xa15fdc86, 0x0133fffd, 0xa15fdc87, 0x012c0001, 
  0xa15fdc88, 0x012bfffd, 0xa15fdc89, 0x01300001, 0xa15fdc8a, 0x01200005, 0xa15fdc8b, 0x00e40000, 
  0x001fdc8b, 
  // trailing loads
  
};

static cyg_bool LoadXCCode(cyg_uint32 ulPhysicalStart, cyg_uint32* pulRamStart, cyg_uint32 ulRamSize, const cyg_uint32* pulXcPrg);

static struct
{
  NX10_XPEC_AREA_T* ptXpec;
  NX10_XMAC_AREA_T* ptXmac;
  cyg_bool          fOpen;
  cyg_handle_t      hOpen;
} s_atXCUnits[1] =
{
 {  (NX10_XPEC_AREA_T*)NX10_NETX_XC_AREA, 
    (NX10_XMAC_AREA_T*)NX10_NETX_XM0_BASE, 
    false,
    NULL
 },
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
    NX10_XPEC_AREA_T* ptXpecArea = s_atXCUnits[ulUnit].ptXpec;
    NX10_XMAC_AREA_T* ptXmacArea = s_atXCUnits[ulUnit].ptXmac;

    /* reset pc */
    ptXmacArea->ulXmac_rpu_pc = 0;
    ptXmacArea->ulXmac_tpu_pc = 0;
    ptXpecArea->ulXpec_pc     = 0x7ff;  

    /* start unit */
    ptXmacArea->ulXmac_tpu_hold_pc = 0;
    ptXmacArea->ulXmac_rpu_hold_pc = 0;
    ptXpecArea->ulXpu_hold_pc      = 0;

    fRet = true;
  }

  return fRet;
}

cyg_bool xc_stop(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    NX10_XPEC_AREA_T* ptXpecArea = s_atXCUnits[ulUnit].ptXpec;
    NX10_XMAC_AREA_T* ptXmacArea = s_atXCUnits[ulUnit].ptXmac;

    /* stop unit */
    ptXmacArea->ulXmac_tpu_hold_pc = MSK_NX10_xmac_tpu_hold_pc_tpu_hold;
    ptXmacArea->ulXmac_rpu_hold_pc = MSK_NX10_xmac_rpu_hold_pc_rpu_hold;
    ptXpecArea->ulXpu_hold_pc      = MSK_NX10_xpu_hold_pc_hold;

    /* reset pc */
    ptXmacArea->ulXmac_rpu_pc = 0;
    ptXmacArea->ulXmac_tpu_pc = 0;
    ptXpecArea->ulXpec_pc     = 0x7ff;  

    fRet = true;
  }

  return fRet;
}

cyg_bool xc_reset(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    NX10_XPEC_AREA_T* ptXpec      = s_atXCUnits[ulUnit].ptXpec;
    NX10_XMAC_AREA_T* ptXmac      = s_atXCUnits[ulUnit].ptXmac;
    cyg_uint32*       pulXpecPram = (cyg_uint32*)Adr_NX10_xpec0_pram_start;
    cyg_uint32*       pulXpecDram = (cyg_uint32*)Adr_NX10_xpec0_dram_start;
    cyg_uint32   uIdx;

    /* Stop xPEC */
    ptXpec->ulXpu_hold_pc = 1;                                       
    /* Stop xMAC */
    ptXmac->ulXmac_tpu_hold_pc = MSK_NX10_xmac_tpu_hold_pc_tpu_hold;
    ptXmac->ulXmac_rpu_hold_pc = MSK_NX10_xmac_rpu_hold_pc_rpu_hold;
    /* Clear output enable of tx asap */
    ptXmac->ulXmac_config_obu  = 0x00000180;
    /* Clear output enable of io0..5 asap */
    ptXpec->ulStatcfg0 = 0;

    /* load ratemul reset code */
    LoadXCCode((cyg_uint32)s_atXCUnits[ulUnit].ptXmac, 
               (cyg_uint32*)s_atXCUnits[ulUnit].ptXmac, 
               sizeof(*s_atXCUnits[ulUnit].ptXmac), 
               XcCode_tpu_reset0);

    LoadXCCode((cyg_uint32)s_atXCUnits[ulUnit].ptXmac, 
               (cyg_uint32*)s_atXCUnits[ulUnit].ptXmac, 
               sizeof(*s_atXCUnits[ulUnit].ptXmac), 
               XcCode_rpu_reset0);
               
    ptXmac->ulXmac_rpu_pc      = 0; /* Reset PC to 0 */
    ptXmac->ulXmac_tpu_pc      = 0; /* Reset PC to 0 */
    ptXmac->ulXmac_tpu_hold_pc = 0; /* Clear Hold-Bit */
    ptXmac->ulXmac_rpu_hold_pc = 0; /* Clear Hold-Bit */

    /* !!!! ATTENTION: There must be enougth time between starting xMAC and stopping xMAC to execute reset programm */

    pulXpecPram[0] = 0xC0000FFF;                                   /* Use the command wait b000000000000,b111111111111 at Address 0*/

    ptXpec->ulXpec_pc = 0x7ff;                                     /* Reset the Program Counter to 0x7ff */

    ptXpec->ulXpec_statcfg = 0;                                    /* Reset Timer operation and DMA */
    pulXpecDram[0x7FE] = 0x7F;                                     /* Link and Stop DMA */
    pulXpecDram[0x7FF] = 0x00;                                     /* Link and Stop DMA */

    /* let the XC run for at least 10 cycles */
    for (uIdx = 0; uIdx < 10; uIdx++) ptXpec->ulXpu_hold_pc = 0;

    ptXpec->ulXpu_hold_pc = 1;                                     /* Hold the Program Counter */
    ptXpec->ulXpec_pc     = 0x7ff;                                 /* Reset the Program Counter to 0x7ff */

    /* reset all registers */
    ptXpec->aulXpec_r[0]   = 0;
    ptXpec->aulXpec_r[1]   = 0;
    ptXpec->aulXpec_r[2]   = 0;
    ptXpec->aulXpec_r[3]   = 0;
    ptXpec->aulXpec_r[4]   = 0;
    ptXpec->aulXpec_r[5]   = 0;
    ptXpec->aulXpec_r[6]   = 0;
    ptXpec->aulXpec_r[7]   = 0;
    ptXpec->aulUsr[0]      = 0;
    ptXpec->aulUsr[1]      = 0;
    ptXpec->ulRange45      = 0;
    ptXpec->ulRange67      = 0;
    ptXpec->ulUrx_count    = 0;
    ptXpec->ulUtx_count    = 0;
    ptXpec->ulXpec_statcfg = 0;
    
    
    /* Stop all Timers */
    ptXpec->ulTimer4       = 0;
    ptXpec->ulTimer5       = 0;
    ptXpec->aulTimer[0]    = 0; 
    ptXpec->aulTimer[1]    = 0;
    ptXpec->aulTimer[2]    = 0;
    ptXpec->aulTimer[3]    = 0;

    ptXpec->ulIrq          = 0xFFFF0000; /* Clear XPEC side IRQ request lines */

    /* Reset events */
    ptXpec->ulEc_maska     = 0x0000FFFF;
    ptXpec->ulEc_maskb     = 0x0000FFFF;
    ptXpec->aulEc_mask[0]  = 0x0000FFFF; 
    ptXpec->aulEc_mask[1]  = 0x0000FFFF;
    ptXpec->aulEc_mask[2]  = 0x0000FFFF;
    ptXpec->aulEc_mask[3]  = 0x0000FFFF;
    ptXpec->aulEc_mask[4]  = 0x0000FFFF;
    ptXpec->aulEc_mask[5]  = 0x0000FFFF;
    ptXpec->aulEc_mask[6]  = 0x0000FFFF;
    ptXpec->aulEc_mask[7]  = 0x0000FFFF;
    ptXpec->aulEc_mask[8]  = 0x0000FFFF;
    ptXpec->aulEc_mask[9]  = 0x0000FFFF;

    ptXpec->ulXpec_adc     = 0;

    /* Reset shared registers, reset URX/UTX fifos */
    ptXpec->aulXpec_sr[0] = 0;
    ptXpec->aulXpec_sr[1] = 0;
    ptXpec->aulXpec_sr[2] = 0;
    ptXpec->aulXpec_sr[3] = 0;
    ptXpec->aulXpec_sr[4] = 0;
    ptXpec->aulXpec_sr[5] = 0;
    ptXpec->ulStatcfg0 = (MSK_NX10_statcfg0_reset_rx_fifo | MSK_NX10_statcfg0_reset_tx_fifo); // !!! special set/mask
    ptXpec->ulStatcfg0 = 0x00000000;
    s_pulXpecIRQ[ulUnit] = 0x0000FFFF; // confirm all interrupts from xPEC

    /* hold xMAC */
    ptXmac->ulXmac_tpu_hold_pc = MSK_NX10_xmac_tpu_hold_pc_tpu_hold;
    ptXmac->ulXmac_rpu_hold_pc = MSK_NX10_xmac_rpu_hold_pc_rpu_hold;
        
    /* reset all xMAC registers to default values */
    ptXmac->ulXmac_rx_hw               = 0;
    ptXmac->ulXmac_rx_hw_count         = 0;
    ptXmac->ulXmac_tx                  = 0;
    ptXmac->ulXmac_tx_hw               = 0;
    ptXmac->ulXmac_tx_hw_count         = 0;
    ptXmac->ulXmac_tx_sent             = 0;
    ptXmac->aulXmac_wr[0]              = 0;
    ptXmac->aulXmac_wr[1]              = 0;
    ptXmac->aulXmac_wr[2]              = 0;
    ptXmac->aulXmac_wr[3]              = 0;
    ptXmac->aulXmac_wr[4]              = 0;
    ptXmac->aulXmac_wr[5]              = 0;
    ptXmac->aulXmac_wr[6]              = 0;
    ptXmac->aulXmac_wr[7]              = 0;
    ptXmac->aulXmac_wr[8]              = 0;
    ptXmac->aulXmac_wr[9]              = 0;
    ptXmac->ulXmac_config_mii          = 0;
    ptXmac->ulXmac_config_rx_nibble_fifo  = 0x00001000;
    ptXmac->ulXmac_config_tx_nibble_fifo  = 0;
    ptXmac->ulXmac_rpu_count1          = 0;
    ptXmac->ulXmac_rpu_count1          = 0;
    ptXmac->ulXmac_tpu_count1          = 0;
    ptXmac->ulXmac_tpu_count2          = 0;
    ptXmac->ulXmac_rx_count            = 0;
    ptXmac->ulXmac_tx_count            = 0;
    ptXmac->ulXmac_rpm_mask0           = 0;
    ptXmac->ulXmac_rpm_val0            = 0;
    ptXmac->ulXmac_rpm_mask1           = 0;
    ptXmac->ulXmac_rpm_val1            = 0;
    ptXmac->ulXmac_tpm_mask0           = 0;
    ptXmac->ulXmac_tpm_val0            = 0;
    ptXmac->ulXmac_tpm_mask1           = 0;
    ptXmac->ulXmac_tpm_val1            = 0;
    
    ptXmac->ulXmac_rx_crc_polynomial_l = 0;
    ptXmac->ulXmac_rx_crc_polynomial_h = 0;
    ptXmac->ulXmac_rx_crc_l            = 0;
    ptXmac->ulXmac_rx_crc_h            = 0;
    ptXmac->ulXmac_rx_crc_cfg          = 0;
    ptXmac->ulXmac_tx_crc_polynomial_l = 0;
    ptXmac->ulXmac_tx_crc_polynomial_h = 0;
    ptXmac->ulXmac_tx_crc_l            = 0;
    ptXmac->ulXmac_tx_crc_h            = 0;
    ptXmac->ulXmac_tx_crc_cfg          = 0;

    ptXmac->ulXmac_rx_tx_nof_bits      = 0x00000088;
    ptXmac->ulXmac_rx_crc32_l          = 0;
    ptXmac->ulXmac_rx_crc32_h          = 0;
    ptXmac->ulXmac_rx_crc32_cfg        = 0;
    ptXmac->ulXmac_tx_crc32_l          = 0;
    ptXmac->ulXmac_tx_crc32_h          = 0;
    ptXmac->ulXmac_tx_crc32_cfg        = 0;

    ptXmac->ulXmac_rpu_pc              = 0;
    ptXmac->ulXmac_tpu_pc              = 0;

    fRet = true;
  }

  return fRet;
}

static cyg_bool LoadXCCode(cyg_uint32 ulPhysicalStart, cyg_uint32* pulRamStart, cyg_uint32 ulRamSize, const cyg_uint32* pulXcPrg)
{
  volatile cyg_uint32 *pulDst, *pulDstCnt;
  const cyg_uint32    *pulSrcStart, *pulSrcCnt, *pulSrcEnd;
  cyg_uint32           uiElements;
  cyg_uint32*          pulRamEnd = pulRamStart + ulRamSize / sizeof(cyg_uint32);

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
                 0x8000, 
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
