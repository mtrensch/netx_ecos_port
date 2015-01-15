//==========================================================================
//
//      io/serial/arm/netx_serial.c
//
//      Hilscher netX Serial I/O Interface Module (interrupt driven)
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
// Date:         March 11, 2006
// Purpose:      Hilscher netX Serial I/O module (interrupt driven)
// Description: 
//
//####DESCRIPTIONEND####
//
//==========================================================================

#include <pkgconf/system.h>
#include <pkgconf/io.h>
#include <pkgconf/io_serial.h>
#include <cyg/io/io.h>
#include <cyg/hal/hal_intr.h>
#include <cyg/hal/hal_netx.h>
#include <cyg/io/devtab.h>
#include <cyg/io/serial.h>
#include <cyg/infra/diag.h>

extern cyg_uint32 hal_phys_to_virt_address(cyg_uint32 phys, cyg_bool fCached);

#include "netx_serial.h"

#if defined(HAL_CPU_NETX500)
  static PGPIO_REGISTERS s_ptGpio = NULL;
#endif

typedef struct netx_serial_info 
{
    cyg_uint32     uiPhysBase;
    cyg_vector_t   ulInterrupt;
    cyg_uint32     ulPort;
    cyg_uint32*    pulVirtBase;
    cyg_interrupt  tInterruptObj;
    cyg_handle_t   hInterrupt;
} netx_serial_info;

static bool           netx_serial_init(struct cyg_devtab_entry *tab);
static bool           netx_serial_putc(serial_channel *chan, unsigned char c);
static Cyg_ErrNo      netx_serial_lookup(struct cyg_devtab_entry **tab, struct cyg_devtab_entry *sub_tab, const char *name);
static unsigned char  netx_serial_getc(serial_channel *chan);
static Cyg_ErrNo      netx_serial_set_config(serial_channel *chan, cyg_uint32 key, const void *xbuf, cyg_uint32 *len);
static void           netx_serial_start_xmit(serial_channel *chan);
static void           netx_serial_stop_xmit(serial_channel *chan);

static cyg_uint32     netx_serial_ISR(cyg_vector_t vector, cyg_addrword_t data);
static void           netx_serial_DSR(cyg_vector_t vector, cyg_ucount32 count, cyg_addrword_t data);

static SERIAL_FUNS(netx_serial_funs,
                   netx_serial_putc,
                   netx_serial_getc,
                   netx_serial_set_config,
                   netx_serial_start_xmit,
                   netx_serial_stop_xmit);

#define BUFFER_SIZE 256

#ifdef CYGPKG_IO_SERIAL_ARM_NETX_UART0

  static netx_serial_info netx_serial_info0 = {Addr_uart0, CYGNUM_HAL_INTERRUPT_UART0, 0};
  static unsigned char netx_serial_out_buf0[BUFFER_SIZE];
  static unsigned char netx_serial_in_buf0[BUFFER_SIZE];

  static SERIAL_CHANNEL_USING_INTERRUPTS(netx_serial_channel0,
                                         netx_serial_funs, 
                                         netx_serial_info0,
                                         CYG_SERIAL_BAUD_RATE(CYGNUM_IO_SERIAL_ARM_NETX_UART0_BAUD),
                                         CYG_SERIAL_STOP_DEFAULT,
                                         CYG_SERIAL_PARITY_DEFAULT,
                                         CYG_SERIAL_WORD_LENGTH_DEFAULT,
                                         CYG_SERIAL_FLAGS_DEFAULT,
                                         &netx_serial_out_buf0[0], sizeof(netx_serial_out_buf0),
                                         &netx_serial_in_buf0[0], sizeof(netx_serial_in_buf0));

  DEVTAB_ENTRY(netx_serial_io0, 
               "/dev/ser0",
               0,                     // Does not depend on a lower level interface
               &cyg_io_serial_devio, 
               netx_serial_init, 
               netx_serial_lookup,     // Serial driver may need initializing
               &netx_serial_channel0);
#endif

#ifdef CYGPKG_IO_SERIAL_ARM_NETX_UART1

  static netx_serial_info netx_serial_info1 = {Addr_uart1, CYGNUM_HAL_INTERRUPT_UART1, 1};
  static unsigned char netx_serial_out_buf1[BUFFER_SIZE];
  static unsigned char netx_serial_in_buf1[BUFFER_SIZE];

  static SERIAL_CHANNEL_USING_INTERRUPTS(netx_serial_channel1,
                                         netx_serial_funs, 
                                         netx_serial_info1,
                                         CYG_SERIAL_BAUD_RATE(CYGNUM_IO_SERIAL_ARM_NETX_UART1_BAUD),
                                         CYG_SERIAL_STOP_DEFAULT,
                                         CYG_SERIAL_PARITY_DEFAULT,
                                         CYG_SERIAL_WORD_LENGTH_DEFAULT,
                                         CYG_SERIAL_FLAGS_DEFAULT,
                                         &netx_serial_out_buf1[0], sizeof(netx_serial_out_buf1),
                                         &netx_serial_in_buf1[0], sizeof(netx_serial_in_buf1));

  DEVTAB_ENTRY(netx_serial_io1,
               "/dev/ser1",
               0,                     // Does not depend on a lower level interface
               &cyg_io_serial_devio, 
               netx_serial_init, 
               netx_serial_lookup,     // Serial driver may need initializing
               &netx_serial_channel1);
#endif

#ifdef CYGPKG_IO_SERIAL_ARM_NETX_UART2
  
  static netx_serial_info netx_serial_info2 = {Addr_uart2, CYGNUM_HAL_INTERRUPT_UART2, 2}; 
  static unsigned char netx_serial_out_buf2[BUFFER_SIZE];
  static unsigned char netx_serial_in_buf2[BUFFER_SIZE];

  static SERIAL_CHANNEL_USING_INTERRUPTS(netx_serial_channel2,
                                         netx_serial_funs, 
                                         netx_serial_info2,
                                         CYG_SERIAL_BAUD_RATE(CYGNUM_IO_SERIAL_ARM_NETX_UART1_BAUD),
                                         CYG_SERIAL_STOP_DEFAULT,
                                         CYG_SERIAL_PARITY_DEFAULT,
                                         CYG_SERIAL_WORD_LENGTH_DEFAULT,
                                         CYG_SERIAL_FLAGS_DEFAULT,
                                         &netx_serial_out_buf2[0], sizeof(netx_serial_out_buf2),
                                         &netx_serial_in_buf2[0], sizeof(netx_serial_in_buf2));

  DEVTAB_ENTRY(netx_serial_io2,
               "/dev/ser2",
               0,                     // Does not depend on a lower level interface
               &cyg_io_serial_devio, 
               netx_serial_init, 
               netx_serial_lookup,     // Serial driver may need initializing
               &netx_serial_channel2);
#endif

#define RX_DATA(s)		          (((s) & MSK_uartfr_RXFE) == 0)
#define TX_READY(s)		          (((s) & MSK_uartfr_TXFF) == 0)

// Internal function to actually configure the hardware to desired baud rate, etc.
static bool netx_serial_config_port(serial_channel *chan, cyg_serial_info_t *new_config, bool init)
{
    netx_serial_info*       netx_chan     = (netx_serial_info *)chan->dev_priv;
    volatile unsigned int*  puiVirtBase   = netx_chan->pulVirtBase;
    unsigned short          baud_divisor  = select_baud[new_config->baud];
    unsigned char _lcr ;

    // don't do this baud rate...
    if(baud_divisor == 0) 
      return false;  // Invalid configuration

  // first, disable everything
  puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint32)] = 0;

  // TODO: For lower baudrates, we need to use normal baudrate calculation

  // use alternate baudrate calculation
  puiVirtBase[REL_Adr_uartcr_2   / sizeof(cyg_uint32)] = MSK_uartcr_2_Baud_Rate_Mode;

  // Set baud rate CYGNUM_HAL_VIRTUAL_VECTOR_CONSOLE_CHANNEL_BAUD
  puiVirtBase[REL_Adr_uartlcr_m / sizeof(cyg_uint32)]  = (baud_divisor & 0xFF00) >> 8;
  puiVirtBase[REL_Adr_uartlcr_l / sizeof(cyg_uint32)]  = baud_divisor & 0xFF;

  puiVirtBase[REL_Adr_uartdrvout / sizeof(cyg_uint32)] = MSK_uartdrvout_DRVTX; /* Set TX-Driver to enabled */   

  // ----------v----------v----------v----------v---------- 
  // NOTE: MUST BE WRITTEN LAST (AFTER UARTLCR_M & UARTLCR_L) 
  // ----------^----------^----------^----------^----------
  _lcr = select_word_length[new_config->word_length - CYGNUM_SERIAL_WORD_LENGTH_5] | 
          select_stop_bits[new_config->stop]                                        |
          select_parity[new_config->parity]                                         | 
          MSK_uartlcr_h_FEN ;

  puiVirtBase[REL_Adr_uartlcr_h / sizeof(cyg_uint32)] = _lcr;
    
    // finally, enable the uart 
  puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint32)]  = MSK_uartcr_uartEN;
  puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint32)] |= MSK_uartcr_RTIE | MSK_uartcr_RIE;

  // save the configuration
  if(new_config != &chan->config) 
  {
      chan->config = *new_config;
  }

  // success
  return true;
}

// Function to initialize the device.  Called at bootstrap time.
static bool netx_serial_init(struct cyg_devtab_entry *tab)
{
    serial_channel*   chan      = (serial_channel *)tab->priv;
    netx_serial_info* netx_chan = (netx_serial_info *)chan->dev_priv;
    int               iIdx;
   
    netx_chan->pulVirtBase = hal_phys_to_virt_address(netx_chan->uiPhysBase, false);

    (chan->callbacks->serial_init)(chan);  // Really only required for interrupt driven devices
    
    netx_serial_config_port(chan, &chan->config, true);
  
#if defined(HAL_CPU_NETX500)
    if(NULL == s_ptGpio)
    {
      s_ptGpio = (PGPIO_REGISTERS)hal_phys_to_virt_address(Addr_gpio, false);
    }

    for(iIdx = 0; iIdx < 4; iIdx++)
    {
      s_ptGpio->aulConfig[netx_chan->ulPort * 4 + iIdx] = 0x02;
    }
#endif

    if (chan->out_cbuf.len != 0) 
    {     
      cyg_drv_interrupt_create(netx_chan->ulInterrupt,
                               99,                     // Priority - what goes here?
                               (cyg_addrword_t)chan,   //  Data item passed to interrupt handler
                               netx_serial_ISR,
                               netx_serial_DSR,
                               &netx_chan->hInterrupt,
                               &netx_chan->tInterruptObj);
      cyg_drv_interrupt_attach(netx_chan->hInterrupt);
      cyg_drv_interrupt_unmask(netx_chan->ulInterrupt);
    }
    
    return true;
}

// This routine is called when the device is "looked" up (i.e. attached)
static Cyg_ErrNo netx_serial_lookup(struct cyg_devtab_entry **tab, struct cyg_devtab_entry *sub_tab, const char *name)
{
    serial_channel *chan = (serial_channel *)(*tab)->priv;
    (chan->callbacks->serial_init)(chan);  // Really only required for interrupt driven devices
    return ENOERR;
}

// Send a character to the device output buffer.
// Return 'true' if character is sent to device
static bool netx_serial_putc(serial_channel *chan, unsigned char c)
{
  netx_serial_info*       netx_chan   = (netx_serial_info *)chan->dev_priv;
  volatile unsigned int*  puiVirtBase = netx_chan->pulVirtBase;
  unsigned int            status      = puiVirtBase[REL_Adr_uartfr / sizeof(cyg_uint32)];

  if(TX_READY(status)) 
  {
    // Transmit buffer is empty
    puiVirtBase[REL_Adr_uartdr / sizeof(cyg_uint32)] = c;
    return true;
  } else 
  {
    // No space
    return false;
  }
}

// Fetch a character from the device input buffer, waiting if necessary
static unsigned char netx_serial_getc(serial_channel *chan)
{
  unsigned char           c;
  netx_serial_info*       netx_chan = (netx_serial_info *)chan->dev_priv;
  volatile unsigned int*  puiVirtBase = netx_chan->pulVirtBase;
  unsigned int            status ;

  do {
      status = puiVirtBase[REL_Adr_uartfr / sizeof(cyg_uint32)];
  } while (!RX_DATA(status)) ;                   // Wait for char

  // get it 
  c = (cyg_uint8)(puiVirtBase[REL_Adr_uartdr / sizeof(cyg_uint32)] & 0xFF);
  return c;
}

// Set up the device characteristics; baud rate, etc.
static Cyg_ErrNo netx_serial_set_config(serial_channel *chan, cyg_uint32 key, const void *xbuf, cyg_uint32 *len)
{
//    netx_serial_info* netx_chan = (netx_serial_info *)chan->dev_priv;

    switch (key) {
    case CYG_IO_SET_CONFIG_SERIAL_INFO:
      {
        cyg_serial_info_t *config = (cyg_serial_info_t *)xbuf;
        if ( *len < sizeof(cyg_serial_info_t) ) {
            return -EINVAL;
        }
        *len = sizeof(cyg_serial_info_t);
        if ( true != netx_serial_config_port(chan, config, false) )
            return -EINVAL;
      }
      break;
#ifdef CYGOPT_IO_SERIAL_FLOW_CONTROL_HW
#ifdef FIXME
    case CYG_IO_SET_CONFIG_SERIAL_HW_RX_FLOW_THROTTLE:
      {
          volatile struct serial_port *port = (volatile struct serial_port *)netx_chan->base;
          cyg_uint8 *f = (cyg_uint8 *)xbuf;
          unsigned char mask=0;
          if ( *len < *f )
              return -EINVAL;
          
          if ( chan->config.flags & CYGNUM_SERIAL_FLOW_RTSCTS_RX )
              mask = MCR_RTS;
          if ( chan->config.flags & CYGNUM_SERIAL_FLOW_DSRDTR_RX )
              mask |= MCR_DTR;
          if (*f) // we should throttle
              port->REG_mcr &= ~mask;
          else // we should no longer throttle
              port->REG_mcr |= mask;
      }
      break;
    case CYG_IO_SET_CONFIG_SERIAL_HW_FLOW_CONFIG:
        // Nothing to do because we do support both RTSCTS and DSRDTR flow
        // control.
        // Other targets would clear any unsupported flags here.
        // We just return ENOERR.
      break;
#else
#error "Flow control for netX not integrated!"
#endif
#endif
    default:
        return -EINVAL;
    }
    return ENOERR;
}

// Enable the transmitter on the device
static void netx_serial_start_xmit(serial_channel *chan)
{
  netx_serial_info*       netx_chan   = (netx_serial_info *)chan->dev_priv;
  volatile unsigned int*  puiVirtBase = netx_chan->pulVirtBase;

  puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint32)] |= MSK_uartcr_TIE;
}

// Disable the transmitter on the device
static void netx_serial_stop_xmit(serial_channel *chan)
{
  netx_serial_info*       netx_chan = (netx_serial_info *)chan->dev_priv;
  volatile unsigned int*  puiVirtBase = netx_chan->pulVirtBase;

  puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint32)] &= ~MSK_uartcr_TIE; 
}

// Serial I/O - low level interrupt handler (ISR)
static cyg_uint32 netx_serial_ISR(cyg_vector_t vector, cyg_addrword_t data)
{
    serial_channel*   chan      = (serial_channel *)data;
    netx_serial_info* netx_chan = (netx_serial_info *)chan->dev_priv;

    cyg_drv_interrupt_mask(netx_chan->ulInterrupt);
    cyg_drv_interrupt_acknowledge(netx_chan->ulInterrupt);
    return CYG_ISR_CALL_DSR;  // Cause DSR to be run
}

// Serial I/O - high level interrupt handler (DSR)
static void netx_serial_DSR(cyg_vector_t vector, cyg_ucount32 count, cyg_addrword_t data)
{
  serial_channel*         chan        = (serial_channel *)data;
  netx_serial_info*       netx_chan   = (netx_serial_info *)chan->dev_priv;
  volatile unsigned int*  puiVirtBase = netx_chan->pulVirtBase;
  unsigned char           isr         = puiVirtBase[REL_Adr_uartiir / sizeof(cyg_uint32)];

  while((isr & (MSK_uartiir_RTIS | MSK_uartiir_TIS | MSK_uartiir_RIS)) != 0) 
  {
    if (isr & MSK_uartiir_TIS) 
    {
      (chan->callbacks->xmt_char)(chan);
      
    } else if (isr & MSK_uartiir_RTIS) 
    {
      (chan->callbacks->rcv_char)(chan, 
                                 (cyg_uint8)(puiVirtBase[REL_Adr_uartdr / sizeof(cyg_uint32)] & 0xFF));
      
    } else if (isr & MSK_uartiir_RIS) 
    {
      (chan->callbacks->rcv_char)(chan, 
                                  (cyg_uint8)(puiVirtBase[REL_Adr_uartdr / sizeof(cyg_uint32)] & 0xFF));
    }
   
    puiVirtBase[REL_Adr_uartiir / sizeof(cyg_uint32)] = isr;
    isr = puiVirtBase[REL_Adr_uartiir / sizeof(cyg_uint32)];
  }
  
  cyg_drv_interrupt_unmask(netx_chan->ulInterrupt);
}
