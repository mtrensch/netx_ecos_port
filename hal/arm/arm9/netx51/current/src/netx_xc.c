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
static cyg_uint32*                const s_pulXpecIrqs   = (cyg_uint32*)Addr_NX51_xpec_irq_registers;
static NX51_XC_START_STOP_AREA_T* const s_ptXcStartStop = (NX51_XC_START_STOP_AREA_T*) Addr_NX51_xc_start_stop;

#define MSK_RPEC_LOADED 0x00000001
#define MSK_TPEC_LOADED 0x00000002
#define MSK_RPU_LOADED  0x00000004
#define MSK_TPU_LOADED  0x00000008

static const cyg_uint32 XcCode_rpu_reset0[27] = {
  0x00000064, // program size
  0x00000000, // trailing loads size
  0x1018a000, 0x01300001, 0xe15bde81, 0x01380001, 0xe15bde82, 0x0143fffd, 0xe15bde83, 0x0147fffd, 
  0xe15bde84, 0x01480001, 0xe15bde85, 0x0143fff9, 0xe15bde86, 0x014bfffd, 0xe15bde87, 0x01440001, 
  0xe15bde88, 0x0143fffd, 0xe15bde89, 0x01480001, 0xe15bde8a, 0x01380005, 0xe15bde8b, 0x01080000, 
  0x001fde8b, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_rpu_reset1[27] = {
  0x00000064, // program size
  0x00000000, // trailing loads size
  0x1018a800, 0x01300001, 0xe15bde81, 0x01380001, 0xe15bde82, 0x0143fffd, 0xe15bde83, 0x0147fffd, 
  0xe15bde84, 0x01480001, 0xe15bde85, 0x0143fff9, 0xe15bde86, 0x014bfffd, 0xe15bde87, 0x01440001, 
  0xe15bde88, 0x0143fffd, 0xe15bde89, 0x01480001, 0xe15bde8a, 0x01380005, 0xe15bde8b, 0x01080000, 
  0x001fde8b, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_tpu_reset0[27] = {
  0x00000064, // program size
  0x00000000, // trailing loads size
  0x1018a400, 0x014c0601, 0xe15bde81, 0x01540001, 0xe15bde82, 0x015ffffd, 0xe15bde83, 0x0163fffd, 
  0xe15bde84, 0x01640001, 0xe15bde85, 0x015ffff9, 0xe15bde86, 0x0167fffd, 0xe15bde87, 0x01600001, 
  0xe15bde88, 0x015ffffd, 0xe15bde89, 0x01640001, 0xe15bde8a, 0x01540005, 0xe15bde8b, 0x01080000, 
  0x001fde8b, 
  // trailing loads
  
};

static const cyg_uint32 XcCode_tpu_reset1[27] = {
  0x00000064, // program size
  0x00000000, // trailing loads size
  0x1018ac00, 0x014c0601, 0xe15bde81, 0x01540001, 0xe15bde82, 0x015ffffd, 0xe15bde83, 0x0163fffd, 
  0xe15bde84, 0x01640001, 0xe15bde85, 0x015ffff9, 0xe15bde86, 0x0167fffd, 0xe15bde87, 0x01600001, 
  0xe15bde88, 0x015ffffd, 0xe15bde89, 0x01640001, 0xe15bde8a, 0x01540005, 0xe15bde8b, 0x01080000, 
  0x001fde8b, 
  // trailing loads
  
};

static cyg_bool LoadXCCode(cyg_uint32 ulPhysicalStart, cyg_uint32* pulRamStart, cyg_uint32 ulRamSize, const cyg_uint32* pulXcPrg);

static struct
{
  NX51_XPEC_AREA_T* ptRpec;
  cyg_uint32*       pulRpecPram;
  NX51_XPEC_AREA_T* ptTpec;
  cyg_uint32*       pulTpecPram;
  NX51_XMAC_AREA_T* ptXmac;
  cyg_uint32        ulLoadMask;
  cyg_bool          fOpen;
  cyg_handle_t      hOpen;
} s_atXCUnits[2] =
{
 {  (NX51_XPEC_AREA_T*)NX51_NETX_XRP0_BASE,
    (cyg_uint32*)Addr_NX51_rpec0_pram,
    (NX51_XPEC_AREA_T*)NX51_NETX_XTP0_BASE,
    (cyg_uint32*)Addr_NX51_tpec0_pram,
    (NX51_XMAC_AREA_T*)NX51_NETX_XM0_BASE,
    0,
    false,
    (cyg_handle_t)NULL
 },
 {  (NX51_XPEC_AREA_T*)NX51_NETX_XRP1_BASE, 
    (cyg_uint32*)Addr_NX51_rpec1_pram,
    (NX51_XPEC_AREA_T*)NX51_NETX_XTP1_BASE,
    (cyg_uint32*)Addr_NX51_tpec1_pram,
    (NX51_XMAC_AREA_T*)NX51_NETX_XM1_BASE, 
    0,
    false,
    (cyg_handle_t)NULL
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
    NX51_XPEC_AREA_T* ptRpecArea = s_atXCUnits[ulUnit].ptRpec;
    NX51_XPEC_AREA_T* ptTpecArea = s_atXCUnits[ulUnit].ptTpec;
    NX51_XMAC_AREA_T* ptXmacArea = s_atXCUnits[ulUnit].ptXmac;
    cyg_uint32        ulStartMask = 0;

    if(s_atXCUnits[ulUnit].ulLoadMask & MSK_RPU_LOADED)
      ulStartMask |= MSK_NX51_xc_start_stop_ctrl_start_rpu0;
    if(s_atXCUnits[ulUnit].ulLoadMask & MSK_TPU_LOADED)
      ulStartMask |= MSK_NX51_xc_start_stop_ctrl_start_tpu0;
    if(s_atXCUnits[ulUnit].ulLoadMask & MSK_RPEC_LOADED)
      ulStartMask |= MSK_NX51_xc_start_stop_ctrl_start_rpec0;
    if(s_atXCUnits[ulUnit].ulLoadMask & MSK_TPEC_LOADED)
      ulStartMask |= MSK_NX51_xc_start_stop_ctrl_start_tpec0;

    /* reset pc */
    ptXmacArea->ulXmac_rpu_pc = 0;
    ptXmacArea->ulXmac_tpu_pc = 0;
    ptRpecArea->ulXpec_pc     = 0x7ff;  
    ptTpecArea->ulXpec_pc     = 0x7ff;  

    /* start unit */
    s_ptXcStartStop->ulXc_start_stop_ctrl = ulStartMask << (4 * ulUnit);

    fRet = true;
  }

  return fRet;
}

cyg_bool xc_stop(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    NX51_XPEC_AREA_T* ptRpecArea = s_atXCUnits[ulUnit].ptRpec;
    NX51_XPEC_AREA_T* ptTpecArea = s_atXCUnits[ulUnit].ptTpec;
    NX51_XMAC_AREA_T* ptXmacArea = s_atXCUnits[ulUnit].ptXmac;

    /* stop units */
    s_ptXcStartStop->ulXc_start_stop_ctrl = (MSK_NX51_xc_start_stop_ctrl_stop_rpec0 |
                                             MSK_NX51_xc_start_stop_ctrl_stop_tpec0 |
                                             MSK_NX51_xc_start_stop_ctrl_stop_rpu0  |
                                             MSK_NX51_xc_start_stop_ctrl_stop_tpu0) << (4 * ulUnit);

    switch(ulUnit)
    {
      case 0:
        ptXmacArea->ulXmac_config_shared0 &= ~(MSK_NX51_xmac_config_shared0_gpio0_out | 
                                               MSK_NX51_xmac_config_shared0_gpio1_out);
        break;
      case 1:
        ptXmacArea->ulXmac_config_shared1 &= ~(MSK_NX51_xmac_config_shared1_gpio0_out |
                                               MSK_NX51_xmac_config_shared1_gpio1_out);
        break;
    }

    /* reset pc */
    ptXmacArea->ulXmac_rpu_pc = 0;
    ptXmacArea->ulXmac_tpu_pc = 0;
    ptRpecArea->ulXpec_pc     = 0x7ff;  
    ptTpecArea->ulXpec_pc     = 0x7ff;  

    fRet = true;
  }

  return fRet;
}

cyg_bool xc_reset(cyg_uint32 ulUnit)
{
  cyg_bool fRet = false;

  if(IsValidXCUnit(ulUnit))
  {
    NX51_XPEC_AREA_T* ptRpec      = s_atXCUnits[ulUnit].ptRpec;
    NX51_XPEC_AREA_T* ptTpec      = s_atXCUnits[ulUnit].ptTpec;
    NX51_XMAC_AREA_T* ptXmac      = s_atXCUnits[ulUnit].ptXmac;
    cyg_uint32*       pulRpecPram = s_atXCUnits[ulUnit].pulRpecPram;
    cyg_uint32*       pulTpecPram = s_atXCUnits[ulUnit].pulTpecPram;
    cyg_uint32        uIdx;

    s_atXCUnits[ulUnit].ulLoadMask = 0;

    /* Stop xPEC and xMAC */
    s_ptXcStartStop->ulXc_start_stop_ctrl = (MSK_NX51_xc_start_stop_ctrl_stop_rpec0 | 
                                             MSK_NX51_xc_start_stop_ctrl_stop_tpec0 | 
                                             MSK_NX51_xc_start_stop_ctrl_stop_rpu0 | 
                                             MSK_NX51_xc_start_stop_ctrl_stop_tpu0) << (4 * ulUnit);

    /* Clear output enable of tx asap */
    ptXmac->ulXmac_config_obu  = DFLT_VAL_NX51_xmac_config_obu;
    /* Clear output enable of io0..5 asap */

    ptRpec->aulStatcfg[ulUnit] = 0xffff0000;
              
    switch (ulUnit)
    {
      case 0: ptRpec->ulXpec_config = MSK_NX51_xpec_config_reset_urx_fifo0 | MSK_NX51_xpec_config_reset_utx_fifo0; 
              break;
      case 1: ptRpec->ulXpec_config = MSK_NX51_xpec_config_reset_urx_fifo1 | MSK_NX51_xpec_config_reset_utx_fifo1; 
              break;
    }
    
    /* load ratemul reset code */
    if(!LoadXCCode( (cyg_uint32)ptXmac,
                    (cyg_uint32*)ptXmac,
                    sizeof(*ptXmac),
                    (ulUnit==0) ? XcCode_rpu_reset0 : XcCode_rpu_reset1)) {
      return false;
    }
    if(!LoadXCCode( (cyg_uint32)ptXmac,
                    (cyg_uint32*)ptXmac,
                    sizeof(*ptXmac),
                    (ulUnit==0) ? XcCode_tpu_reset0 : XcCode_tpu_reset1)) {
      return false;
    }

    ptXmac->ulXmac_rpu_pc      = 0; /* Reset PC to 0 */
    ptXmac->ulXmac_tpu_pc      = 0; /* Reset PC to 0 */

    s_ptXcStartStop->ulXc_start_stop_ctrl = (MSK_NX51_xc_start_stop_ctrl_start_rpu0 |
                                             MSK_NX51_xc_start_stop_ctrl_start_tpu0) << (4*ulUnit);

    /* !!!! ATTENTION: There must be enougth time between starting xMAC and stopping xMAC to execute reset programm */

    pulRpecPram[0] = 0xC0000FFF;                                   /* Use the command wait b000000000000,b111111111111 at Address 0*/
    pulTpecPram[0] = 0xC0000FFF;                                   /* Use the command wait b000000000000,b111111111111 at Address 0*/

    ptRpec->ulXpec_pc = 0x7ff;                                     /* Reset the Program Counter to 0x7ff */
    ptTpec->ulXpec_pc = 0x7ff;                                     /* Reset the Program Counter to 0x7ff */


    /* let the XC run for at least 10 cycles */
    for (uIdx = 0; uIdx < 10; uIdx++)
    {
      s_ptXcStartStop->ulXc_start_stop_ctrl = (MSK_NX51_xc_start_stop_ctrl_start_rpec0 |
                                               MSK_NX51_xc_start_stop_ctrl_start_tpec0) << (4*ulUnit);
    }

    s_ptXcStartStop->ulXc_start_stop_ctrl = (MSK_NX51_xc_start_stop_ctrl_stop_rpec0 |
                                             MSK_NX51_xc_start_stop_ctrl_stop_tpec0) << (4*ulUnit);
    ptRpec->ulXpec_pc     = 0x7ff;                                 /* Reset the Program Counter to 0x7ff */
    ptTpec->ulXpec_pc     = 0x7ff;                                 /* Reset the Program Counter to 0x7ff */

    /* reset all registers */
    ptRpec->aulXpec_r[0]   = 0;
    ptTpec->aulXpec_r[0]   = 0;
    ptRpec->aulXpec_r[1]   = 0;
    ptTpec->aulXpec_r[1]   = 0;
    ptRpec->aulXpec_r[2]   = 0;
    ptTpec->aulXpec_r[2]   = 0;
    ptRpec->aulXpec_r[3]   = 0;
    ptTpec->aulXpec_r[3]   = 0;
    ptRpec->aulXpec_r[4]   = 0;
    ptTpec->aulXpec_r[4]   = 0;
    ptRpec->aulXpec_r[5]   = 0;
    ptTpec->aulXpec_r[5]   = 0;
    ptRpec->aulXpec_r[6]   = 0;
    ptTpec->aulXpec_r[6]   = 0;
    ptRpec->aulXpec_r[7]   = 0;
    ptTpec->aulXpec_r[7]   = 0;

    switch (ulUnit)
    {
      case 0: ptRpec->ulXpec_stat_bits_shared = 0x00ff0000;
              break;
      case 1: ptRpec->ulXpec_stat_bits_shared = 0xff000000;
              break;
    }

    ptRpec->ulRange_urtx_count = 0;
    ptTpec->ulRange_urtx_count = 0;
    ptRpec->ulRange45          = 0;
    ptTpec->ulRange45          = 0;
    ptRpec->ulRange67          = 0;
    ptTpec->ulRange67          = 0;
    ptRpec->ulUrx_count        = 0;
    ptTpec->ulUrx_count        = 0;
    ptRpec->ulUtx_count        = 0;
    ptTpec->ulUtx_count        = 0;
    
    /* Stop all Timers */
    ptRpec->ulTimer4       = 0;
    ptTpec->ulTimer4       = 0;
    ptRpec->ulTimer5       = 0;
    ptTpec->ulTimer5       = 0;
    ptRpec->aulTimer[0]    = 0; 
    ptTpec->aulTimer[0]    = 0; 
    ptRpec->aulTimer[1]    = 0;
    ptTpec->aulTimer[1]    = 0;
    ptRpec->aulTimer[2]    = 0;
    ptTpec->aulTimer[2]    = 0;
    ptRpec->aulTimer[3]    = 0;
    ptTpec->aulTimer[3]    = 0;

    ptRpec->ulIrq          = 0xFFFF0000; /* Clear XPEC side IRQ request lines */
    ptTpec->ulIrq          = 0xFFFF0000; /* Clear XPEC side IRQ request lines */

    /* Reset events */
    ptRpec->ulEc_maska     = 0x0000FFFF;
    ptTpec->ulEc_maska     = 0x0000FFFF;
    ptRpec->ulEc_maskb     = 0x0000FFFF;
    ptTpec->ulEc_maskb     = 0x0000FFFF;
    ptRpec->aulEc_mask[0]  = 0x0000FFFF; 
    ptTpec->aulEc_mask[0]  = 0x0000FFFF; 
    ptRpec->aulEc_mask[1]  = 0x0000FFFF;
    ptTpec->aulEc_mask[1]  = 0x0000FFFF;
    ptRpec->aulEc_mask[2]  = 0x0000FFFF;
    ptTpec->aulEc_mask[2]  = 0x0000FFFF;
    ptRpec->aulEc_mask[3]  = 0x0000FFFF;
    ptTpec->aulEc_mask[3]  = 0x0000FFFF;
    ptRpec->aulEc_mask[4]  = 0x0000FFFF;
    ptTpec->aulEc_mask[4]  = 0x0000FFFF;
    ptRpec->aulEc_mask[5]  = 0x0000FFFF;
    ptTpec->aulEc_mask[5]  = 0x0000FFFF;
    ptRpec->aulEc_mask[6]  = 0x0000FFFF;
    ptTpec->aulEc_mask[6]  = 0x0000FFFF;
    ptRpec->aulEc_mask[7]  = 0x0000FFFF;
    ptTpec->aulEc_mask[7]  = 0x0000FFFF;
    ptRpec->aulEc_mask[8]  = 0x0000FFFF;
    ptTpec->aulEc_mask[8]  = 0x0000FFFF;
    ptRpec->aulEc_mask[9]  = 0x0000FFFF;
    ptTpec->aulEc_mask[9]  = 0x0000FFFF;

    /* Reset shared registers, reset URX/UTX fifos */
    /* Reset SR0-3 for XC0, SR4-7 for XC1 */
    for( uIdx = 4 * ulUnit; uIdx < 4 * ulUnit + 4; ++uIdx )
      ptRpec->aulXpec_sr[uIdx] = 0;
    /* Reset SR8-11 for XC0, SR12-15 for XC1 */
    for( uIdx = 8 + 4 * ulUnit; uIdx < 12 + 4 * ulUnit; ++uIdx )
      ptRpec->aulXpec_sr[uIdx] = 0;
      
    ptRpec->ulDatach_wr_cfg = 0;
    ptTpec->ulDatach_wr_cfg = 0;
    ptRpec->ulDatach_rd_cfg = 0;
    ptTpec->ulDatach_rd_cfg = 0;
    ptRpec->ulSysch_addr    = 0;
    ptTpec->ulSysch_addr    = 0;

    /* confirm all interrupts from xPEC */
    s_pulXpecIrqs[ulUnit] = 0x0000FFFF;

    /* hold xMAC */
    s_ptXcStartStop->ulXc_start_stop_ctrl = (MSK_NX51_xc_start_stop_ctrl_stop_rpu0 |
                                             MSK_NX51_xc_start_stop_ctrl_stop_tpu0) << (4*ulUnit);
        
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
    ptXmac->ulXmac_config_rx_nibble_fifo  = DFLT_VAL_NX51_xmac_config_rx_nibble_fifo;
    ptXmac->ulXmac_config_tx_nibble_fifo  = 0;
    ptXmac->ulXmac_rpu_count1          = 0;
    ptXmac->ulXmac_rpu_count2          = 0;
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

    ptXmac->ulXmac_rx_crc32_l          = 0;
    ptXmac->ulXmac_rx_crc32_h          = 0;
    ptXmac->ulXmac_rx_crc32_cfg        = 0;
    ptXmac->ulXmac_tx_crc32_l          = 0;
    ptXmac->ulXmac_tx_crc32_h          = 0;
    ptXmac->ulXmac_tx_crc32_cfg        = 0;

    ptXmac->ulXmac_config_sbu2         = DFLT_VAL_NX51_xmac_config_sbu2;
    ptXmac->ulXmac_config_obu2         = DFLT_VAL_NX51_xmac_config_obu2;

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
  uiElements = pulXcPrg[0] / sizeof(cyg_uint32) - 1;

  /* get the pointer in the xc area */
  /* ram_virtual_start + code_physical_start - ram_physical_start */
  pulDst = pulRamStart + (pulXcPrg[2] - ulPhysicalStart) / sizeof(cyg_uint32);

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
  uiElements = pulXcPrg[1] / sizeof(cyg_uint32);

  /* get source start and end pointer */
  pulSrcCnt = pulXcPrg + 2 + pulXcPrg[0] / sizeof(cyg_uint32);
  pulSrcEnd = pulSrcCnt + uiElements;

  /* write all trailing loads */
  while( pulSrcCnt<pulSrcEnd ) 
  {
    /* get the destination address */
    /* ram_virtual_start + data_physical_start - ram_physical_start */
    pulDst = pulRamStart + (*(pulSrcCnt++) - ulPhysicalStart) / sizeof(cyg_uint32);

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

cyg_bool xc_load(cyg_uint32 ulUnit, const cyg_uint32* pulRPEC, const cyg_uint32* pulTPEC, const cyg_uint32* pulXMACRPU, const cyg_uint32* pulXMACTPU)
{
  cyg_bool fRet = true;

  if(NULL != pulRPEC)
  {
    if(!LoadXCCode((cyg_uint32)s_atXCUnits[ulUnit].ptRpec, 
                   (cyg_uint32*)s_atXCUnits[ulUnit].ptRpec, 
                   0x8000, 
                   pulRPEC)) {
      fRet = false;
      goto exit;
    }
    s_atXCUnits[ulUnit].ulLoadMask |= MSK_RPEC_LOADED;
  }

  if(NULL != pulTPEC)
  {
    if(!LoadXCCode((cyg_uint32)s_atXCUnits[ulUnit].ptTpec, 
                   (cyg_uint32*)s_atXCUnits[ulUnit].ptTpec, 
                   0x8000, 
                   pulTPEC)) {
      fRet = false;
      goto exit;
    }
    s_atXCUnits[ulUnit].ulLoadMask |= MSK_TPEC_LOADED;
  }

  if(NULL != pulXMACTPU)
  {
    if(!LoadXCCode((cyg_uint32)s_atXCUnits[ulUnit].ptXmac, 
                   (cyg_uint32*)s_atXCUnits[ulUnit].ptXmac, 
                   sizeof(*s_atXCUnits[ulUnit].ptXmac), 
                   pulXMACTPU)) {
      fRet = false;
      goto exit;      
    }
    s_atXCUnits[ulUnit].ulLoadMask |= MSK_TPU_LOADED;
  }
  
  if(NULL != pulXMACRPU)
  {
    if(!LoadXCCode((cyg_uint32)s_atXCUnits[ulUnit].ptXmac, 
                   (cyg_uint32*)s_atXCUnits[ulUnit].ptXmac, 
                   sizeof(*s_atXCUnits[ulUnit].ptXmac), 
                   pulXMACRPU)) {
      fRet = false;
      goto exit;
    }
    s_atXCUnits[ulUnit].ulLoadMask |= MSK_RPU_LOADED;
  }

exit:
  return fRet;
}
