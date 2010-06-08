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
static cyg_bool LoadXCCode(cyg_uint32 ulPhysicalStart, cyg_uint32* pulRamStart, cyg_uint32 ulRamSize, const cyg_uint32* pulXcPrg);

static volatile cyg_uint32* s_pulXpecIRQ = (volatile cyg_uint32*)Addr_xpec_irq_registers;

static struct
{
  cyg_uint32   ulXpecPhys;
  PXPEC_AREA_T ptXpec;
  cyg_uint32   ulXmacPhys;
  PXMAC_AREA_T ptXmac;
  cyg_bool     fOpen;
  cyg_handle_t hOpen;

} s_atXCUnits[4] =
{
 {Addr_xpec0, NULL, Addr_xmac0, NULL, false},
 {Addr_xpec1, NULL, Addr_xmac1, NULL, false},
 {Addr_xpec2, NULL, Addr_xmac2, NULL, false},
 {Addr_xpec3, NULL, Addr_xmac3, NULL, false},
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
    ptXpecArea->ulPc        = 0;

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
    ptXpecArea->ulPc        = 0;

    fRet = true;
  }

  return fRet;
}

static const cyg_uint32 XcCode_rpu_reset0[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x00160000, 0x00f80001, 0x915fdb81, 0x00f40041, 0x915fdb82, 0x00dc0000, 0x001fdb83, 0x00f8fffd, 
  0x914fe004, 0x00fbfffd, 0x915fdb85, 0x0107fffd, 0x915fdb86, 0x01080001, 0x915fdb87, 0x010bfffd, 
  0x915fdb88, 0x01040001, 0x915fdb89, 0x01080001, 0x915fdb8a, 0x00f40001, 0x915fdb8b, 0x00f9fffd, 
  0x915fdb8c, 0x00f8fffd, 0x915fdb8d, 0x00f87ffd, 0x915fdb8e, 0x00f83ffd, 0x915fdb8f, 0x00f81ffd, 
  0x915fdb90, 0x00f80ffd, 0x915fdb91, 0x00f807fd, 0x915fdb92, 0x00f803fd, 0x915fdb93, 0x00f801fd, 
  0x915fdb94, 0x00f800fd, 0x915fdb95, 0x00f8007d, 0x915fdb96, 0x00f8003d, 0x915fdb97, 0x00f8001d, 
  0x915fdb98, 0x00f8000d, 0x915fdb99, 0x00f80005, 0x915fdb9a, 0x00dc0000, 0x001fdb9a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_rpu_reset1[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x00161000, 0x00f80001, 0x915fdb81, 0x00f40041, 0x915fdb82, 0x00dc0000, 0x001fdb83, 0x00f8fffd, 
  0x914fe004, 0x00fbfffd, 0x915fdb85, 0x0107fffd, 0x915fdb86, 0x01080001, 0x915fdb87, 0x010bfffd, 
  0x915fdb88, 0x01040001, 0x915fdb89, 0x01080001, 0x915fdb8a, 0x00f40001, 0x915fdb8b, 0x00f9fffd, 
  0x915fdb8c, 0x00f8fffd, 0x915fdb8d, 0x00f87ffd, 0x915fdb8e, 0x00f83ffd, 0x915fdb8f, 0x00f81ffd, 
  0x915fdb90, 0x00f80ffd, 0x915fdb91, 0x00f807fd, 0x915fdb92, 0x00f803fd, 0x915fdb93, 0x00f801fd, 
  0x915fdb94, 0x00f800fd, 0x915fdb95, 0x00f8007d, 0x915fdb96, 0x00f8003d, 0x915fdb97, 0x00f8001d, 
  0x915fdb98, 0x00f8000d, 0x915fdb99, 0x00f80005, 0x915fdb9a, 0x00dc0000, 0x001fdb9a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_rpu_reset2[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x00162000, 0x00f80001, 0x915fdb81, 0x00f40041, 0x915fdb82, 0x00dc0000, 0x001fdb83, 0x00f8fffd, 
  0x914fe004, 0x00fbfffd, 0x915fdb85, 0x0107fffd, 0x915fdb86, 0x01080001, 0x915fdb87, 0x010bfffd, 
  0x915fdb88, 0x01040001, 0x915fdb89, 0x01080001, 0x915fdb8a, 0x00f40001, 0x915fdb8b, 0x00f9fffd, 
  0x915fdb8c, 0x00f8fffd, 0x915fdb8d, 0x00f87ffd, 0x915fdb8e, 0x00f83ffd, 0x915fdb8f, 0x00f81ffd, 
  0x915fdb90, 0x00f80ffd, 0x915fdb91, 0x00f807fd, 0x915fdb92, 0x00f803fd, 0x915fdb93, 0x00f801fd, 
  0x915fdb94, 0x00f800fd, 0x915fdb95, 0x00f8007d, 0x915fdb96, 0x00f8003d, 0x915fdb97, 0x00f8001d, 
  0x915fdb98, 0x00f8000d, 0x915fdb99, 0x00f80005, 0x915fdb9a, 0x00dc0000, 0x001fdb9a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_rpu_reset3[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x00163000, 0x00f80001, 0x915fdb81, 0x00f40041, 0x915fdb82, 0x00dc0000, 0x001fdb83, 0x00f8fffd, 
  0x914fe004, 0x00fbfffd, 0x915fdb85, 0x0107fffd, 0x915fdb86, 0x01080001, 0x915fdb87, 0x010bfffd, 
  0x915fdb88, 0x01040001, 0x915fdb89, 0x01080001, 0x915fdb8a, 0x00f40001, 0x915fdb8b, 0x00f9fffd, 
  0x915fdb8c, 0x00f8fffd, 0x915fdb8d, 0x00f87ffd, 0x915fdb8e, 0x00f83ffd, 0x915fdb8f, 0x00f81ffd, 
  0x915fdb90, 0x00f80ffd, 0x915fdb91, 0x00f807fd, 0x915fdb92, 0x00f803fd, 0x915fdb93, 0x00f801fd, 
  0x915fdb94, 0x00f800fd, 0x915fdb95, 0x00f8007d, 0x915fdb96, 0x00f8003d, 0x915fdb97, 0x00f8001d, 
  0x915fdb98, 0x00f8000d, 0x915fdb99, 0x00f80005, 0x915fdb9a, 0x00dc0000, 0x001fdb9a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_tpu_reset0[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x00160400, 0x01100001, 0x915fdb81, 0x010c0641, 0x915fdb82, 0x00dc0000, 0x001fdb83, 0x0110fffd, 
  0x914fe304, 0x0113fffd, 0x915fdb85, 0x011ffffd, 0x915fdb86, 0x01200001, 0x915fdb87, 0x0123fffd, 
  0x915fdb88, 0x011c0001, 0x915fdb89, 0x01200001, 0x915fdb8a, 0x010c0601, 0x915fdb8b, 0x0111fffd, 
  0x915fdb8c, 0x0110fffd, 0x915fdb8d, 0x01107ffd, 0x915fdb8e, 0x01103ffd, 0x915fdb8f, 0x01101ffd, 
  0x915fdb90, 0x01100ffd, 0x915fdb91, 0x011007fd, 0x915fdb92, 0x011003fd, 0x915fdb93, 0x011001fd, 
  0x915fdb94, 0x011000fd, 0x915fdb95, 0x0110007d, 0x915fdb96, 0x0110003d, 0x915fdb97, 0x0110001d, 
  0x915fdb98, 0x0110000d, 0x915fdb99, 0x01100005, 0x915fdb9a, 0x00dc0000, 0x001fdb9a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_tpu_reset1[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x00161400, 0x01100001, 0x915fdb81, 0x010c0641, 0x915fdb82, 0x00dc0000, 0x001fdb83, 0x0110fffd, 
  0x914fe304, 0x0113fffd, 0x915fdb85, 0x011ffffd, 0x915fdb86, 0x01200001, 0x915fdb87, 0x0123fffd, 
  0x915fdb88, 0x011c0001, 0x915fdb89, 0x01200001, 0x915fdb8a, 0x010c0601, 0x915fdb8b, 0x0111fffd, 
  0x915fdb8c, 0x0110fffd, 0x915fdb8d, 0x01107ffd, 0x915fdb8e, 0x01103ffd, 0x915fdb8f, 0x01101ffd, 
  0x915fdb90, 0x01100ffd, 0x915fdb91, 0x011007fd, 0x915fdb92, 0x011003fd, 0x915fdb93, 0x011001fd, 
  0x915fdb94, 0x011000fd, 0x915fdb95, 0x0110007d, 0x915fdb96, 0x0110003d, 0x915fdb97, 0x0110001d, 
  0x915fdb98, 0x0110000d, 0x915fdb99, 0x01100005, 0x915fdb9a, 0x00dc0000, 0x001fdb9a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_tpu_reset2[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x00162400, 0x01100001, 0x915fdb81, 0x010c0641, 0x915fdb82, 0x00dc0000, 0x001fdb83, 0x0110fffd, 
  0x914fe304, 0x0113fffd, 0x915fdb85, 0x011ffffd, 0x915fdb86, 0x01200001, 0x915fdb87, 0x0123fffd, 
  0x915fdb88, 0x011c0001, 0x915fdb89, 0x01200001, 0x915fdb8a, 0x010c0601, 0x915fdb8b, 0x0111fffd, 
  0x915fdb8c, 0x0110fffd, 0x915fdb8d, 0x01107ffd, 0x915fdb8e, 0x01103ffd, 0x915fdb8f, 0x01101ffd, 
  0x915fdb90, 0x01100ffd, 0x915fdb91, 0x011007fd, 0x915fdb92, 0x011003fd, 0x915fdb93, 0x011001fd, 
  0x915fdb94, 0x011000fd, 0x915fdb95, 0x0110007d, 0x915fdb96, 0x0110003d, 0x915fdb97, 0x0110001d, 
  0x915fdb98, 0x0110000d, 0x915fdb99, 0x01100005, 0x915fdb9a, 0x00dc0000, 0x001fdb9a, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_tpu_reset3[57] = {
  0x000000dc, // program size
  0x00000000, // trailing loads size
  0x00163400, 0x01100001, 0x915fdb81, 0x010c0641, 0x915fdb82, 0x00dc0000, 0x001fdb83, 0x0110fffd, 
  0x914fe304, 0x0113fffd, 0x915fdb85, 0x011ffffd, 0x915fdb86, 0x01200001, 0x915fdb87, 0x0123fffd, 
  0x915fdb88, 0x011c0001, 0x915fdb89, 0x01200001, 0x915fdb8a, 0x010c0601, 0x915fdb8b, 0x0111fffd, 
  0x915fdb8c, 0x0110fffd, 0x915fdb8d, 0x01107ffd, 0x915fdb8e, 0x01103ffd, 0x915fdb8f, 0x01101ffd, 
  0x915fdb90, 0x01100ffd, 0x915fdb91, 0x011007fd, 0x915fdb92, 0x011003fd, 0x915fdb93, 0x011001fd, 
  0x915fdb94, 0x011000fd, 0x915fdb95, 0x0110007d, 0x915fdb96, 0x0110003d, 0x915fdb97, 0x0110001d, 
  0x915fdb98, 0x0110000d, 0x915fdb99, 0x01100005, 0x915fdb9a, 0x00dc0000, 0x001fdb9a, 
  // trailing loads
  
};

static const cyg_uint32* s_paulxMacRpuCodes[4]=
{
  XcCode_rpu_reset0,
  XcCode_rpu_reset1,
  XcCode_rpu_reset2,
  XcCode_rpu_reset3
};

static const cyg_uint32* s_paulxMacTpuCodes[4]=
{
  XcCode_tpu_reset0,
  XcCode_tpu_reset1,
  XcCode_tpu_reset2,
  XcCode_tpu_reset3
};


cyg_bool xc_reset(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    PXPEC_AREA_T ptXpec = s_atXCUnits[ulUnit].ptXpec;
    PXMAC_AREA_T ptXmac = s_atXCUnits[ulUnit].ptXmac;
    cyg_uint32   ulIdx;

    /* stop xMAC/xPEC */
    ptXpec->ulXpuHoldPc        = 1;                              /* Hold xPEC */
    ptXpec->aulStatCfg[ulUnit] = 0x00000088;                     /* Reset IO.OE asap */
    ptXmac->ulTpuHoldPc        = MSK_xmac_tpu_hold_pc_tpu_hold;  /* Just set Hold-Bit */
    ptXmac->ulRpuHoldPc        = MSK_xmac_rpu_hold_pc_rpu_hold;  /* Just set Hold-Bit */
    ptXpec->aulStatCfg[ulUnit] = 0x00000088;                     /* Reset IO.OE asap */

    /* load ratemul reset code */
    LoadXCCode(s_atXCUnits[ulUnit].ulXmacPhys, 
               (cyg_uint32*)s_atXCUnits[ulUnit].ptXmac, 
               sizeof(*s_atXCUnits[ulUnit].ptXmac), 
               s_paulxMacRpuCodes[ulUnit]);    

    LoadXCCode(s_atXCUnits[ulUnit].ulXmacPhys, 
               (cyg_uint32*)s_atXCUnits[ulUnit].ptXmac, 
               sizeof(*s_atXCUnits[ulUnit].ptXmac), 
               s_paulxMacTpuCodes[ulUnit]);    

    ptXmac->ulRpuPc     = 0; /* Reset PC to 0 */
    ptXmac->ulTpuPc     = 0; /* Reset PC to 0 */
    ptXmac->ulTpuHoldPc = 0; /* Clear Hold-Bit */
    ptXmac->ulRpuHoldPc = 0; /* Clear Hold-Bit */

    /* !!!! ATTENTION: There must be enougth time between starting xMAC and stopping xMAC to execute reset programm */

    /* clear xPEC events and stop DMA */
    ptXpec->aulRam[0]     = 0xC0000FFF; /* Use the command wait b000000000000,b111111111111 at Address 0 */
    ptXpec->ulPc          = 0;          /* Reset the Program Counter to 0 on netX100/500 */
    ptXpec->ulStatCfg     = 0;     /* Reset Timer operation and DMA */
    ptXpec->ulXpuHoldPc   = 0;      /* Start the Program */
    ptXpec->aulRam[0x7FF] = 0x7F;   /* Link and Stop DMA */
    ptXpec->aulRam[0x7FE] = 0x00;   /* dummy access to let xpec run another cycle */
    ptXpec->ulXpuHoldPc   = 1;      /* Hold the Program Counter */
    ptXpec->ulPc          = 0;          /* Reset the Program Counter to 0 on netX100/500 */

    /* reset all xPEC registers to default values */
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
    ptXpec->ulEcMaskA   = 0x0000ffff;
    ptXpec->ulEcMaskB   = 0x0000ffff;
    for(ulIdx = 0; ulIdx < 10; ulIdx++)
      ptXpec->aulEcMask[ulIdx] = 0x0000ffff;
    ptXpec->ulTimer4    = 0;
    ptXpec->ulTimer5    = 0;
    ptXpec->ulIrq       = 0xffff0000;   /* confirm all ARM IRQs */
    ptXpec->ulAdc       = 0;

    /* reset SR of current port */
    ptXpec->aulSr[ulUnit*4]     = 0;
    ptXpec->aulSr[ulUnit*4+1]   = 0;
    ptXpec->aulSr[ulUnit*4+2]   = 0;
    ptXpec->aulSr[ulUnit*4+3]   = 0;
    ptXpec->aulStatCfg[ulUnit]  = 0x00000088;
    
    /* Hold xMAC */    
    ptXmac->ulTpuHoldPc = MSK_xmac_tpu_hold_pc_tpu_hold;
    ptXmac->ulRpuHoldPc = MSK_xmac_rpu_hold_pc_rpu_hold;

    /* reset urx and utx fifos */
    switch( ulUnit )
    {
      case 0: 
        ptXmac->ulConfigShared0 |= MSK_xmac_config_shared0_reset_tx_fifo;
        ptXmac->ulConfigShared0 &= ~MSK_xmac_config_shared0_reset_tx_fifo;
        ptXmac->ulConfigShared0 |= MSK_xmac_config_shared0_reset_rx_fifo; 
        ptXmac->ulConfigShared0 &= ~MSK_xmac_config_shared0_reset_rx_fifo;
        break;
      case 1: 
        ptXmac->ulConfigShared1 |= MSK_xmac_config_shared1_reset_tx_fifo;
        ptXmac->ulConfigShared1 &= ~MSK_xmac_config_shared1_reset_tx_fifo;
        ptXmac->ulConfigShared1 |= MSK_xmac_config_shared1_reset_rx_fifo; 
        ptXmac->ulConfigShared1 &= ~MSK_xmac_config_shared1_reset_rx_fifo;
        break;
      case 2:
        ptXmac->ulConfigShared2 |= MSK_xmac_config_shared2_reset_tx_fifo;
        ptXmac->ulConfigShared2 &= ~MSK_xmac_config_shared2_reset_tx_fifo;
        ptXmac->ulConfigShared2 |= MSK_xmac_config_shared2_reset_rx_fifo; 
        ptXmac->ulConfigShared2 &= ~MSK_xmac_config_shared2_reset_rx_fifo;
        break;
      case 3:
        ptXmac->ulConfigShared3 |= MSK_xmac_config_shared3_reset_tx_fifo;
        ptXmac->ulConfigShared3 &= ~MSK_xmac_config_shared3_reset_tx_fifo;
        ptXmac->ulConfigShared3 |= MSK_xmac_config_shared3_reset_rx_fifo; 
        ptXmac->ulConfigShared3 &= ~MSK_xmac_config_shared3_reset_rx_fifo;
        break;
    }

    /* reset IRQs from ARM side */ 
    s_pulXpecIRQ[ulUnit] = 0x0000FFFF;
              
    /* reset all xMAC registers to default values */
    ptXmac->ulRxHw                = 0;
    ptXmac->ulRxHwCount           = 0;
    ptXmac->ulTx                  = 0;
    ptXmac->ulTxHw                = 0;
    ptXmac->ulTxHwCount           = 0;
    ptXmac->ulTxSend              = 0;
    for(ulIdx = 0; ulIdx < 10; ulIdx++)
      ptXmac->aulWr[ulIdx]              = 0;
    ptXmac->ulConfigMii          = 0;
    ptXmac->ulConfigNibbleFifo   = 0x00000280;
    ptXmac->ulRpuCount1          = 0;
    ptXmac->ulRpuCount2          = 0;
    ptXmac->ulTpuCount1          = 0;
    ptXmac->ulTpuCount2          = 0;
    ptXmac->ulRxCount            = 0;
    ptXmac->ulTxCount            = 0;
    ptXmac->ulRpmMask0           = 0;
    ptXmac->ulRpmVal0            = 0;
    ptXmac->ulRpmMask1           = 0;
    ptXmac->ulTpmVal1            = 0;
    ptXmac->ulTpmMask0           = 0;
    ptXmac->ulTpmVal0            = 0;
    ptXmac->ulTpmMask1           = 0;
    ptXmac->ulTpmVal1            = 0;
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

    /* reset encoder and PWM on ports 2 and 3 */
    switch( ulUnit )                                 
    {
      case 2: /* fall through */
      case 3: 
        ptXmac->ulPwmConfig         = 0;
        ptXmac->ulPwmStatus         = 0;
        ptXmac->ulPwmTp             = 0;
        ptXmac->ulPwmTu             = 0;
        ptXmac->ulPwmTv             = 0;
        ptXmac->ulPwmTw             = 0;
        ptXmac->ulPwmTd             = 0;
        ptXmac->ulRpwmTp            = 0;
        ptXmac->ulRpwmTr            = 0;
        ptXmac->ulPosConfigEncoder  = 0;
        ptXmac->ulPosConfigCapture  = 0;
        ptXmac->ulPosCommand        = 0;
        ptXmac->ulPosStatus         = 0;
        break;
      default: break;
    }

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
