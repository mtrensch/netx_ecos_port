//==========================================================================
//
//      netx_ether.c
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
#include <pkgconf/system.h>
#include <pkgconf/devs_eth_arm_netx10.h>
#include <pkgconf/io_eth_drivers.h>
#include <cyg/infra/cyg_type.h>  // Common type definitions and support
                                 // including endian-ness
#include <cyg/infra/diag.h>
#include <cyg/hal/hal_intr.h>
#include <cyg/hal/hal_netx.h>
#include <cyg/hal/drv_api.h>
#include <cyg/io/eth/netdev.h>
#include <cyg/io/eth/eth_drv.h>
#include <cyg/io/eth/eth_drv_stats.h>

#ifdef CYGPKG_NET
#include <pkgconf/net.h>
#include <net/if.h>  /* Needed for struct ifnet */
#else
#include <cyg/hal/hal_if.h>
#endif


#if defined(CYGPKG_REDBOOT)
#include <pkgconf/redboot.h>
#endif

#include <nec_cb12.h>
#include <netx_ether.h>

#include <string.h>   //memcpy, memset

#if defined(CYGPKG_DEVS_ETH_ARM_NETX_ETH0)
  #include <xpec_eth_std_mac0.h>
  #include <rpu_eth0.h>
  #include <tpu_eth0.h>
#endif

typedef struct NETX_ETH_SEND_INFOtag
{
  unsigned long ulSegment;
  unsigned long ulFrameNr;
  unsigned long ulKey;
  bool          fUsed;
} NETX_ETH_SEND_INFO;

//the first 4 Buffers are send only buffers
//the next 16 are empty pointers for receive frames

typedef struct NETX_ETH_PORT_INFOtag
{
  cyg_uint32            ulPort;
  cyg_vector_t          ulInterrupt;
  const cyg_uint32*     pulxPECFirmware;
  const cyg_uint32*     pulxMACRPUFirmware;
  const cyg_uint32*     pulxMACTPUFirmware;

  cyg_uint32            ulxPECBasePhys;
  cyg_uint32            ulxMACBasePhys;
  cyg_uint32            ulSRAMBasePhys;

  volatile cyg_uint32*  pulxPECBase;
  volatile cyg_uint32*  pulxMACBase;
  volatile cyg_uint32*  pulSRAMBase;

  unsigned char         abMAC[6];

  cyg_handle_t          hInterrupt;
  cyg_interrupt         tInterruptObject;

  FIFO_POINTER          tCurrentPtr;
  
  NETX_ETH_SEND_INFO    atSendFrames[4];
  
  
} NETX_ETH_PORT_INFO, *PNETX_ETH_PORT_INFO;

static volatile cyg_uint32*       s_pulxPECInterruptRegisters = (volatile cyg_uint32*)NX10_NETX_XP_IRQ_AREA;
static volatile NX10_MIIMU_REG_T* s_ptMiiMu                   = (volatile NX10_MIIMU_REG_T*)Adr_NX10_miimu_reg;
static NX10_POINTER_FIFO_AREA_T*  s_ptFifoArea                = (NX10_POINTER_FIFO_AREA_T*)NX10_NETX_PTR_FIFO_AREA;
static bool                       s_fPhyInitialized           = false;
static cyg_uint8                  s_abPhyAddresses[]          = {PHY_PORT0_ADDRESS};

#if defined(CYGPKG_DEVS_ETH_ARM_NETX_ETH0)

  static NETX_ETH_PORT_INFO s_tPortInfo0 =
  {  0,    
     CYGNUM_HAL_INTERRUPT_COM0, 
     (cyg_uint32*)XcCode_xpec_eth_std_mac0, (cyg_uint32*)XcCode_rpu_eth0, (cyg_uint32*)XcCode_tpu_eth0, 
     NX10_NETX_XC_AREA, NX10_NETX_XM0_BASE, Addr_NX10_intram4,
     (volatile cyg_uint32*)NX10_NETX_XC_AREA, (volatile cyg_uint32*)NX10_NETX_XM0_BASE, (volatile cyg_uint32*)Addr_NX10_intram4,
     {0, 0x11, 0x22, 0x33, 0x44, 0x55}
  };

  ETH_DRV_SC(netxeth0_sc,
             &s_tPortInfo0,
             "eth0",            // Name for this interface          
             netxeth_start,                                         
             netxeth_stop,                                          
             netxeth_control,                                       
             netxeth_can_send,                                       
             netxeth_send,                                          
             netxeth_recv,                                          
             netxeth_deliver,                                       
             netxeth_poll,                                          
             netxeth_interrupt);                                                                

  NETDEVTAB_ENTRY(DRV_netdev0, 
                  "NETXETHDRV", 
                  netxeth_init, 
                  &netxeth0_sc);
#endif

typedef enum MDIO_ACCESStag
{
  MDIO_READ  = 0,
  MDIO_WRITE = 1,
  MDIO_RESET = 2
  
} MDIO_ACCESS;

static void PhyMDIO(unsigned int uPhyPrt, unsigned int uAcc, unsigned int uRegAdr, unsigned int* puDat)
{
  NX10_MIIMU_REG_T  tVlu     = {0};
 
  /* set mode with preamble and phyaddr */
  tVlu.bf.miimu_snrdy = 1;
  tVlu.bf.miimu_preamble = 1; /* Send the Preamble with the Code */
  tVlu.bf.miimu_rta = 0;
  tVlu.bf.miimu_phyaddr = uPhyPrt;
  tVlu.bf.miimu_regaddr = uRegAdr;
  
  if(uAcc == 0) {
    tVlu.bf.miimu_opmode = 0;
    tVlu.bf.phy_nres = 1;
    tVlu.bf.miimu_data = 0;
    s_ptMiiMu->val = tVlu.val; /* Write the Command now to the PHY */

    do{
      tVlu.val = s_ptMiiMu->val;
    } while(tVlu.bf.miimu_snrdy == 1); /* Wait until PHY is ready first of all */

    tVlu.val = s_ptMiiMu->val;
    *puDat = (unsigned int) tVlu.bf.miimu_data; /* Read now the wished PHY data */

  } else if(uAcc == 1) {
    tVlu.bf.miimu_opmode = 1;
    tVlu.bf.phy_nres = 1;
    tVlu.bf.miimu_data = (unsigned int) *puDat;
    s_ptMiiMu->val = tVlu.val;/* Write the Command again now to the PHY */

    do {
      tVlu.val = s_ptMiiMu->val;
    } while(tVlu.bf.miimu_snrdy == 1); /* Wait until PHY is ready first of all */
  } else if(uAcc == 2) {
    tVlu.val = 0;
    tVlu.bf.phy_nres = 1;
    tVlu.bf.miimu_snrdy = 1;
    s_ptMiiMu->val = tVlu.val;/* Write the Command again now to the PHY */

    do {
      tVlu.val = s_ptMiiMu->val;
    } while(tVlu.bf.miimu_snrdy == 1); /* Wait until PHY is ready first of all */
  } 
}

// ///////////////////////////////////////////////////// 
//! Enables one access to asic control registers
// ////////////////////////////////////////////////////
static void EnableAsicControl(void)
{
  volatile cyg_uint32* pulAsicCtrlKey;
  cyg_uint32           ulAccessKey;
  
  pulAsicCtrlKey = (volatile cyg_uint32*)Adr_NX10_asic_ctrl_asic_ctrl_access_key;
  
  ulAccessKey = *pulAsicCtrlKey;
  *pulAsicCtrlKey = ulAccessKey;
}

// ///////////////////////////////////////////////////// 
//! Initialize internal PHYs. They must only be controlled
//! by MDIO interface
// ////////////////////////////////////////////////////
static bool InitInternalPHY(void)
{
  unsigned long           ulCfgValue  = 0;
  volatile unsigned long* pulPhyCtrl  = (volatile unsigned long*)Adr_NX10_phy_control;
  unsigned int            uiPhyDat    = 0;
  unsigned int            uiPhyDat2   = 0;

  if(NULL == pulPhyCtrl)
    return false;  
  
  ulCfgValue = ((0xE << SRT_NX10_phy_control_phy_address)    & MSK_NX10_phy_control_phy_address)   | //set phy's to MDIO Addres 1C, 1D
               ((0x7 << SRT_NX10_phy_control_phy0_mode)      & MSK_NX10_phy_control_phy0_mode)     | //Auto negotitation, AutoMDIX
               ((0x1 << SRT_NX10_phy_control_phy0_automdix)  & MSK_NX10_phy_control_phy0_automdix) | //AutoMDIX
               ((0x1 << SRT_NX10_phy_control_phy0_enable)    & MSK_NX10_phy_control_phy0_enable);    //enable phy 1
               
  EnableAsicControl();
  
  //reset PHY's
  *pulPhyCtrl = ulCfgValue | MSK_NX10_phy_control_phy_reset;

  //wait 100us
  HAL_DELAY_US(100);
  
  EnableAsicControl();
  
  //enable PHY's
  *pulPhyCtrl = ulCfgValue;

  //200ms delay
  HAL_DELAY_US(200);

  //dummy read, to prevent Gunnar bug
  PhyMDIO(PHY_PORT0_ADDRESS, MDIO_READ, DRV_CB12_CONTROL, &uiPhyDat);
  
  //reset PHY
  uiPhyDat = DRV_CB12_CONTROL_RESET;
  PhyMDIO(PHY_PORT0_ADDRESS, MDIO_WRITE, DRV_CB12_CONTROL, &uiPhyDat);
  PhyMDIO(PHY_PORT1_ADDRESS, MDIO_WRITE, DRV_CB12_CONTROL, &uiPhyDat);

  do
  {
    PhyMDIO(PHY_PORT0_ADDRESS, MDIO_READ, DRV_CB12_CONTROL, &uiPhyDat);
    PhyMDIO(PHY_PORT1_ADDRESS, MDIO_READ, DRV_CB12_CONTROL, &uiPhyDat2);
  } while( (uiPhyDat & DRV_CB12_CONTROL_RESET) && (uiPhyDat2 & DRV_CB12_CONTROL_RESET) );

  //Power down PHY's. Driver is responsible to wake them up
  PhyMDIO(PHY_PORT0_ADDRESS, MDIO_READ, DRV_CB12_CONTROL, &uiPhyDat);
  uiPhyDat |= DRV_CB12_CONTROL_POWER_DOWN;
  PhyMDIO(PHY_PORT0_ADDRESS, MDIO_WRITE, DRV_CB12_CONTROL, &uiPhyDat);

  PhyMDIO(PHY_PORT1_ADDRESS, MDIO_READ, DRV_CB12_CONTROL, &uiPhyDat);
  uiPhyDat |= DRV_CB12_CONTROL_POWER_DOWN;
  PhyMDIO(PHY_PORT1_ADDRESS, MDIO_WRITE, DRV_CB12_CONTROL, &uiPhyDat);   
  
  return true;
}

// Initialize hardware (including startup)
void netxeth_start(struct eth_drv_sc *sc, unsigned char *enaddr, int flags)
{
  PNETX_ETH_PORT_INFO ptPortInfo   = sc->driver_private;
  cyg_uint32          uiPhyData;
  cyg_uint32          ulPort       = ptPortInfo->ulPort;
  cyg_uint32          ulIdx;
  cyg_uint32          ulFifoOffset = 8 * ulPort;
  cyg_uint16*         pusMAC       = (cyg_uint16*)ptPortInfo->abMAC;

  xc_reset(ptPortInfo->ulPort);
  xc_load(ptPortInfo->ulPort, 
          ptPortInfo->pulxPECFirmware,
          ptPortInfo->pulxMACRPUFirmware,
          ptPortInfo->pulxMACTPUFirmware);

  // local mac config
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT) / sizeof(cyg_uint32)] = (0x8 << SRT_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_VAL);

  for(ulIdx = 1; ulIdx < (MAX_SEND_SLOTS + 1); ulIdx++)
  {
    ptPortInfo->atSendFrames[ulIdx - 1].ulSegment = ptPortInfo->ulPort;
    ptPortInfo->atSendFrames[ulIdx - 1].ulFrameNr = ulIdx;
    ptPortInfo->atSendFrames[ulIdx - 1].ulKey     = 0;
    ptPortInfo->atSendFrames[ulIdx - 1].fUsed     = false;
  }

  for(ulIdx = MAX_SEND_SLOTS + 1; ulIdx < MAX_SLOTS; ulIdx++)
  {
    FIFO_POINTER tPtr = {0};
    
    tPtr.tBf.uiSegment = ptPortInfo->ulPort;
    tPtr.tBf.uiFrameNr = ulIdx;
    
    s_ptFifoArea->aulPfifo[ulFifoOffset + EMPTY_PTR_FIFO] = tPtr.uiVal;    
  }

  /* Enable all interrupt sources */
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_INTERRUPTS_ENABLE_IND_HI) / sizeof(cyg_uint32)] = MSK_ETHMAC_INTERRUPTS_ENABLE_IND_HI_VAL;
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_INTERRUPTS_ENABLE_IND_LO) / sizeof(cyg_uint32)] = MSK_ETHMAC_INTERRUPTS_ENABLE_IND_LO_VAL;
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_INTERRUPTS_ENABLE_CON_HI) / sizeof(cyg_uint32)] = MSK_ETHMAC_INTERRUPTS_ENABLE_CON_HI_VAL;
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_INTERRUPTS_ENABLE_CON_LO) / sizeof(cyg_uint32)] = MSK_ETHMAC_INTERRUPTS_ENABLE_CON_LO_VAL;

  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_HI) / sizeof(cyg_uint32)] = pusMAC[2];
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_LO) / sizeof(cyg_uint32)] = (pusMAC[1] << 16) |
                                                                                                            pusMAC[0];

  xc_start(ptPortInfo->ulPort);

  //Wakeup phy from powerdown  
  PhyMDIO(s_abPhyAddresses[ptPortInfo->ulPort], MDIO_READ, DRV_CB12_CONTROL, &uiPhyData); 
  uiPhyData = DRV_CB12_CONTROL_AUTO_NEG_ENABLE;
  PhyMDIO(s_abPhyAddresses[ptPortInfo->ulPort], MDIO_WRITE, DRV_CB12_CONTROL, &uiPhyData);   
  
  cyg_drv_interrupt_unmask(ptPortInfo->ulInterrupt);  
}

// Shut down hardware
void netxeth_stop(struct eth_drv_sc *sc)
{
  PNETX_ETH_PORT_INFO ptPortInfo = sc->driver_private;
  cyg_uint32          uiPhyData;

  cyg_drv_interrupt_mask(ptPortInfo->ulInterrupt);
  
  xc_stop(ptPortInfo->ulPort);

  //Put Phy into Power down mode
  PhyMDIO(s_abPhyAddresses[ptPortInfo->ulPort], MDIO_READ, DRV_CB12_CONTROL, &uiPhyData); 
  uiPhyData |= DRV_CB12_CONTROL_POWER_DOWN;
  PhyMDIO(s_abPhyAddresses[ptPortInfo->ulPort], MDIO_WRITE, DRV_CB12_CONTROL, &uiPhyData); 
  
  /* Disable all interrupts */
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_INTERRUPTS_ENABLE_IND_HI) / sizeof(cyg_uint32)] = 0;
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_INTERRUPTS_ENABLE_IND_LO) / sizeof(cyg_uint32)] = 0;
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_INTERRUPTS_ENABLE_CON_HI) / sizeof(cyg_uint32)] = 0;
  ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_INTERRUPTS_ENABLE_CON_LO) / sizeof(cyg_uint32)] = 0;
  
  //empty all fifo's from this channel
  s_ptFifoArea->ulPfifo_reset |= 0xFF << (ptPortInfo->ulPort * 8);
  s_ptFifoArea->ulPfifo_reset &= ~(0xFF << (ptPortInfo->ulPort * 8));
}

// Device control (ioctl pass-thru)
int netxeth_control(struct eth_drv_sc *sc, unsigned long cmd, void *data, int data_length)
{
  PNETX_ETH_PORT_INFO ptPortInfo = sc->driver_private; 
  int                 iRet       = 0;
  
  switch (cmd)
  {
#if defined(CYGPKG_NET)      
  case ETH_DRV_GET_IF_STATS_UD:
  case ETH_DRV_GET_IF_STATS:
  {
    struct ether_drv_stats* ptStats         = (struct ether_drv_stats*)data;
    cyg_uint32*             pulxPECRamStart = (cyg_uint32*)&ptPortInfo->pulxPECBase[REL_Adr_NX10_dram_start / sizeof(cyg_uint32)];
    PXC_ETH_INFO_T          ptXCStatistics  = (PXC_ETH_INFO_T)&pulxPECRamStart[REL_Adr_ETHMAC_FRAMES_TRANSMITTED_OK / sizeof(cyg_uint32)];
    cyg_uint32              ulTemp;
        
    strncpy(ptStats->description,"netX ETH", sizeof(ptStats->description) - 1);
    ptStats->description[sizeof(ptStats->description) - 1] = '\0';
    strncpy(ptStats->snmp_chipset,"XC",sizeof(ptStats->snmp_chipset) - 1);
    ptStats->snmp_chipset[sizeof(ptStats->snmp_chipset) - 1] = '\0';

    ulTemp = pulxPECRamStart[REL_Adr_ETHMAC_PHY_LEDS / sizeof(cyg_uint32)];

    if(ulTemp & MSK_ETHMAC_PHY_LEDS_SPEED_100)
      ptStats->speed = 100000000;
    else
      ptStats->speed = 10000000;

    if(ulTemp & MSK_ETHMAC_PHY_LEDS_DUPLEX_FULL)
      ptStats->duplex = ETH_FULLDUPLEX;
    else
      ptStats->duplex = ETH_HALFDUPLEX;

    if(ulTemp & MSK_ETHMAC_PHY_LEDS_LINK_UP)
      ptStats->operational = ETH_LINKUP;
    else
      ptStats->operational = ETH_LINKDOWN;

    ptStats->tx_good              = ptXCStatistics->ulFramesTransmittedOK;
    ptStats->tx_max_collisions    = ptXCStatistics->ulMultipleCollisionFrames;
    ptStats->tx_late_collisions   = ptXCStatistics->ulLateCollisions;
    ptStats->tx_underrun          = ptXCStatistics->ulUTXUnderflow;
    ptStats->tx_carrier_loss      = ptXCStatistics->ulLinkDownDuringTransmissionErrors;
    ptStats->tx_deferred          = 0;
    ptStats->tx_sqetesterrors     = 0;
    ptStats->tx_single_collisions = ptXCStatistics->ulSingleCollisionFrames;
    ptStats->tx_mult_collisions   = ptXCStatistics->ulMultipleCollisionFrames;
    ptStats->tx_total_collisions  = ptStats->tx_mult_collisions + ptStats->tx_single_collisions;
    ptStats->rx_good              = ptXCStatistics->ulFramesReceivedOK;
    ptStats->rx_crc_errors        = ptXCStatistics->ulFrameCheckSequenceErrors;
    ptStats->rx_align_errors      = ptXCStatistics->ulAlignmentErrors;
    ptStats->rx_resource_errors   = ptXCStatistics->ulFramesDiscarded;
    ptStats->rx_overrun_errors    = ptXCStatistics->ulURXUnderflow;
    ptStats->rx_collisions        = ptXCStatistics->ulCollisionFragmentsRcvd;
    ptStats->rx_short_frames      = ptXCStatistics->ulRuntFrameReceived;
    ptStats->rx_too_long_frames   = ptXCStatistics->ulFrameTooLongErrors;
    ptStats->rx_symbol_errors     = 0;
    
    //TODO: Implement counters in interrupt
/*
    ptStats->interrupts
    ptStats->rx_count
    ptStats->rx_deliver
    ptStats->rx_resource
    ptStats->rx_restart
    ptStats->tx_queue_len
    ptStats->tx_count
    ptStats->tx_complete
    ptStats->tx_dropped
*/
  }
  break;
#endif      

  case ETH_DRV_SET_MAC_ADDRESS: 
  {
    if(ETHER_ADDR_LEN != data_length)
    {
       iRet = -1;
    } else
    {
      cyg_uint16* pusMAC = (cyg_uint16*)data;
      ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_HI) / sizeof(cyg_uint32)] = pusMAC[2];    
      ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_LO) / sizeof(cyg_uint32)] = (pusMAC[1] << 16) |
                                                                                                         pusMAC[0];    
      memcpy(ptPortInfo->abMAC, pusMAC, sizeof(ptPortInfo->abMAC));
    }
  }
#ifdef	ETH_DRV_GET_MAC_ADDRESS
  case ETH_DRV_GET_MAC_ADDRESS: 
  {
    if(data_length < ETHER_ADDR_LEN)
    {
      iRet = -1;
    } else
    {
      cyg_uint16* pusMAC = (cyg_uint16*)data;
      pusMAC[2] = ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_HI) / sizeof(cyg_uint32)];
      pusMAC[1] = ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_LO) / sizeof(cyg_uint32)] >> 16;
      pusMAC[0] = ptPortInfo->pulxPECBase[(REL_Adr_NX10_dram_start + REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_LO) / sizeof(cyg_uint32)];
    }
  }
#endif  
  default:
    iRet = -1;
    break;
  }

  return iRet;
}

// Query - can a packet be sent?
int netxeth_can_send(struct eth_drv_sc *sc)
{
  PNETX_ETH_PORT_INFO ptPortInfo = sc->driver_private; 
  int                 iRet       = 0; //no send possible
  unsigned long       ulIdx;

  for(ulIdx = 0; ulIdx < MAX_SEND_SLOTS; ulIdx++)
  {
    if(!ptPortInfo->atSendFrames[ulIdx].fUsed)
    {
      //at least one slot is free
      iRet = 1;
      break;
    }
  }
  return iRet;
}

// Send a packet of data
void netxeth_send(struct eth_drv_sc *sc, struct eth_drv_sg *sg_list, int sg_len, int total_len, unsigned long key)
{
  PNETX_ETH_PORT_INFO ptPortInfo = sc->driver_private; 
  unsigned long       ulIdx;
  NETX_ETH_SEND_INFO* ptSendInfo = NULL;
  FIFO_POINTER        tPtr = {0};
  cyg_uint8*          pbSendBuffer;

  if (total_len >= MAX_ETH_FRAME_SIZE)
  {
    (sc->funs->eth_drv->tx_done)(sc, 
                                 key, 
                                 -1);
    return;
  }

  //this loop should always find a usable slot, as can_send has been called before by eth_drv
  for(ulIdx = 0; ulIdx < MAX_SEND_SLOTS; ulIdx++)
  {
    if(!ptPortInfo->atSendFrames[ulIdx].fUsed)
    {
      ptSendInfo = &ptPortInfo->atSendFrames[ulIdx];
      break;
    }
  }

  //out of buffers. This should never happen, as can_send should be called before actual send
  if(NULL == ptSendInfo)
  {
    (sc->funs->eth_drv->tx_done)(sc, 
                                 key, 
                                 -1);
  } else
  {
    ptSendInfo->fUsed = true;
    ptSendInfo->ulKey = key;
    
    tPtr.tBf.uiSegment   = ptSendInfo->ulSegment;
    tPtr.tBf.uiFrameNr   = ptSendInfo->ulFrameNr;
    
    pbSendBuffer = ((cyg_uint8*)ptPortInfo->pulSRAMBase) + tPtr.tBf.uiFrameNr * XC_FRAME_LENGTH;
    
    if(total_len < MIN_ETH_FRAME_SIZE)
    {
      tPtr.tBf.uiFrameLen  = MIN_ETH_FRAME_SIZE;
      memset(pbSendBuffer + total_len, 0, MIN_ETH_FRAME_SIZE - total_len);
    }
    else
      tPtr.tBf.uiFrameLen  = total_len;
    
    while(sg_len)
    {
      memcpy(pbSendBuffer,  (unsigned char*)sg_list->buf, sg_list->len);
      pbSendBuffer += sg_list->len;
      ++sg_list;
      --sg_len;
    }

    s_ptFifoArea->aulPfifo[ptPortInfo->ulPort * 8 + REQ_FIFO_PORT_LO] = tPtr.uiVal;  
  }
}

// Receive [unload] a packet of data
void netxeth_recv(struct eth_drv_sc *sc, struct eth_drv_sg *sg_list, int sg_len)
{
  //Pointer has been stored in netxeth_deliver, so we just need to use the pointer in the portinfo structure
  PNETX_ETH_PORT_INFO ptPortInfo    = sc->driver_private; 
  unsigned long       ulOffset      = ptPortInfo->tCurrentPtr.tBf.uiFrameNr * XC_FRAME_LENGTH;
  cyg_uint8*          pbRecvBuffer  = ((cyg_uint8*)ptPortInfo->pulSRAMBase) + ulOffset;
  
  while(sg_len)
  {
    if(sg_list->buf)
	    memcpy((unsigned char*)sg_list->buf,
	           pbRecvBuffer,
	           sg_list->len);
    pbRecvBuffer += sg_list->len;
    ++sg_list;
    --sg_len;
  }
  
  ptPortInfo->tCurrentPtr.uiVal &= MSK_FIFO_PTR_SEGMENT | MSK_FIFO_PTR_FRAMENR;
  s_ptFifoArea->aulPfifo[8 * ptPortInfo->ulPort + EMPTY_PTR_FIFO] = ptPortInfo->tCurrentPtr.uiVal;  
}

static cyg_uint32 netxeth_GetSendIdx(PNETX_ETH_PORT_INFO ptPortInfo, cyg_uint32 ulFrameNr)
{
  cyg_uint32 uiRet = 0;
  cyg_uint32 uiIdx;
  
  for(uiIdx = 0; uiIdx < MAX_SEND_SLOTS; uiIdx++)
  {
    if(ptPortInfo->atSendFrames[uiIdx].ulFrameNr == ulFrameNr)
    {
      uiRet = uiIdx;
      break;
    }
  }

  return uiRet;  
}

void netxeth_deliver(struct eth_drv_sc *sc)
{
  PNETX_ETH_PORT_INFO ptPortInfo = sc->driver_private; 

  cyg_uint32 ulXCFifoOffset      = 8 * ptPortInfo->ulPort;
  cyg_uint32 ulRecvFramesHi      = s_ptFifoArea->aulPfifo_fill_level[ulXCFifoOffset + IND_FIFO_PORT_HI];
  cyg_uint32 ulRecvFramesLo      = s_ptFifoArea->aulPfifo_fill_level[ulXCFifoOffset + IND_FIFO_PORT_LO];
  cyg_uint32 ulConfirmationsHi   = s_ptFifoArea->aulPfifo_fill_level[ulXCFifoOffset + CON_FIFO_PORT_HI];
  cyg_uint32 ulConfirmationsLo   = s_ptFifoArea->aulPfifo_fill_level[ulXCFifoOffset + CON_FIFO_PORT_LO];
  cyg_uint32 ulInterrupts        = s_pulxPECInterruptRegisters[ptPortInfo->ulPort] & MSK_NX10_irq_xpec0_xpec_irq;

  s_pulxPECInterruptRegisters[ptPortInfo->ulPort] = ulInterrupts;

  while(ulRecvFramesHi-- > 0)
  {
    ptPortInfo->tCurrentPtr.uiVal = s_ptFifoArea->aulPfifo[ulXCFifoOffset + IND_FIFO_PORT_HI];

//    diag_printf("netxeth_deliver(): Hi Prio Ind Port=%u, Len=%u\n", 
//                ptPortInfo->ulPort, ptPortInfo->tCurrentPtr.tBf.uiFrameLen);
    
    //this will call netxeth_recv with the requested length. So the stored pointer will not be changed by any other instance
    (sc->funs->eth_drv->recv)(sc, ptPortInfo->tCurrentPtr.tBf.uiFrameLen);
    
    ptPortInfo->tCurrentPtr.uiVal &= (MSK_FIFO_PTR_SEGMENT | MSK_FIFO_PTR_FRAMENR);
    s_ptFifoArea->aulPfifo[ulXCFifoOffset + EMPTY_PTR_FIFO] = ptPortInfo->tCurrentPtr.uiVal;
  }

  while(ulRecvFramesLo-- > 0)
  {
    ptPortInfo->tCurrentPtr.uiVal = s_ptFifoArea->aulPfifo[ulXCFifoOffset + IND_FIFO_PORT_LO];

//    diag_printf("netxeth_deliver(): Lo Prio Ind Port=%u, Len=%u\n", 
//                ptPortInfo->ulPort, ptPortInfo->tCurrentPtr.tBf.uiFrameLen);
    
    //this will call netxeth_recv with the requested length. So the stored pointer will not be changed by any other instance
    (sc->funs->eth_drv->recv)(sc, ptPortInfo->tCurrentPtr.tBf.uiFrameLen);
    
    ptPortInfo->tCurrentPtr.uiVal &= (MSK_FIFO_PTR_SEGMENT | MSK_FIFO_PTR_FRAMENR);
    s_ptFifoArea->aulPfifo[ulXCFifoOffset + EMPTY_PTR_FIFO] = ptPortInfo->tCurrentPtr.uiVal;
  }

  while(ulConfirmationsHi-- > 0)
  {
    FIFO_POINTER tPtr;
    cyg_uint32   ulIdx;

    tPtr.uiVal = s_ptFifoArea->aulPfifo[ulXCFifoOffset + CON_FIFO_PORT_HI];
    ulIdx      = netxeth_GetSendIdx(ptPortInfo, tPtr.tBf.uiFrameNr);

//    diag_printf("netxeth_deliver(): Hi Prio Send Ack Port=%u, Status=0x%x\n", 
//                ptPortInfo->ulPort, tPtr.tBf.uiError);
    
    (sc->funs->eth_drv->tx_done)(sc, 
                                 ptPortInfo->atSendFrames[ulIdx].ulKey, 
                                 SUCCEEDED_XC(tPtr.tBf.uiError)? 0 : -1);
                                 
    ptPortInfo->atSendFrames[ulIdx].fUsed = false;
  }    

  while(ulConfirmationsLo-- > 0)
  {
    FIFO_POINTER tPtr;
    cyg_uint32   ulIdx;

    tPtr.uiVal = s_ptFifoArea->aulPfifo[ulXCFifoOffset + CON_FIFO_PORT_LO];
    ulIdx      = netxeth_GetSendIdx(ptPortInfo, tPtr.tBf.uiFrameNr);

//    diag_printf("netxeth_deliver(): Lo Prio Send Ack Port=%u, Status=0x%x\n", 
//                ptPortInfo->ulPort, tPtr.tBf.uiError);
    
    (sc->funs->eth_drv->tx_done)(sc, 
                                 ptPortInfo->atSendFrames[ulIdx].ulKey, 
                                 SUCCEEDED_XC(tPtr.tBf.uiError)? 0 : -1);
                                 
    ptPortInfo->atSendFrames[ulIdx].fUsed = false;
  }    
  
  // Allow interrupts to happen again
  cyg_drv_interrupt_unmask(ptPortInfo->ulInterrupt);  
}

static cyg_uint32 netxeth_ISR(cyg_vector_t vector, cyg_addrword_t data)
{ 
  cyg_drv_interrupt_mask(vector);
  cyg_drv_interrupt_acknowledge(vector);
 
  return CYG_ISR_HANDLED | CYG_ISR_CALL_DSR;
}

// Poll for interrupts/device service
void netxeth_poll(struct eth_drv_sc *sc)
{
  PNETX_ETH_PORT_INFO ptPortInfo = sc->driver_private; 

  netxeth_ISR(ptPortInfo->ulInterrupt, (cyg_addrword_t)sc);
  netxeth_deliver(sc);
}

// Get interrupt information from hardware driver
int netxeth_interrupt(struct eth_drv_sc *sc)
{
  PNETX_ETH_PORT_INFO ptPortInfo = sc->driver_private; 

  return ptPortInfo->ulInterrupt;  
}

bool netxeth_init(struct cyg_netdevtab_entry *tab)
{
  struct eth_drv_sc*  sc         = tab->device_instance;
  PNETX_ETH_PORT_INFO ptPortInfo = (PNETX_ETH_PORT_INFO)sc->driver_private;
  bool fRet = false;

  if(!xc_open(ptPortInfo->ulPort))
    return false;

  cyg_drv_interrupt_create(ptPortInfo->ulInterrupt, 
                           0, 
                           (unsigned)sc, 
                           netxeth_ISR, 
                           eth_drv_dsr, 
                           &ptPortInfo->hInterrupt,
                           &ptPortInfo->tInterruptObject);
  cyg_drv_interrupt_attach(ptPortInfo->hInterrupt);

  //TODO: insert xpec firmware pointer
  if(s_ptMiiMu &&
     s_pulxPECInterruptRegisters &&
     ptPortInfo->pulxPECBase &&
     ptPortInfo->pulxMACBase &&
     (ptPortInfo->pulSRAMBase || (ptPortInfo->ulPort == 0)) ) //port 0 may return a null pointer, as internal ram segment starts at 0
  {   
    if(!s_fPhyInitialized)
    {
      s_fPhyInitialized = InitInternalPHY();
    }

    ((sc)->funs->eth_drv->init)(sc, ptPortInfo->abMAC);
    netxeth_control(sc, ETH_DRV_SET_MAC_ADDRESS, ptPortInfo->abMAC, sizeof(ptPortInfo->abMAC));
    
    fRet = true;
  }
  
  return fRet;
}
