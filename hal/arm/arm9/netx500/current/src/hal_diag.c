/*=============================================================================
//
//      hal_diag.c
//
//      HAL diagnostic output code
//
//=============================================================================
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
//=============================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):     Michael Trensch
// Contributors:  
// Date:          March 4, 2006
// Purpose:       HAL diagnostic output
// Description:   Implementations of HAL diagnostic output support.
//
//####DESCRIPTIONEND####
//
//===========================================================================*/

#include <pkgconf/hal.h>
#include <cyg/infra/cyg_type.h>         // base types
#include <cyg/infra/cyg_trac.h>         // tracing macros
#include <cyg/infra/cyg_ass.h>          // assertion macros

#include <cyg/hal/hal_netx.h>
#include <cyg/hal/hal_arch.h>           // SAVE/RESTORE GP macros
#include <cyg/hal/hal_io.h>             // IO macros
#include <cyg/hal/hal_if.h>             // interface API
#include <cyg/hal/hal_intr.h>           // HAL_ENABLE/MASK/UNMASK_INTERRUPTS
#include <cyg/hal/hal_misc.h>           // Helper functions
#include <cyg/hal/drv_api.h>            // CYG_ISR_HANDLED

// AMBA uart access macros
#define RX_DATA(s)		    (((s) & MSK_uartfr_RXFE) == 0)
#define TX_READY(s)		    (((s) & MSK_uartfr_TXFF) == 0)

/*---------------------------------------------------------------------------*/
// Define the serial registers.

//-----------------------------------------------------------------------------
typedef struct {
    cyg_uint32            uiPhysicalBase;
    volatile cyg_uint32*  puiVirtualBase;
    cyg_int32             msec_timeout;
    cyg_uint8             bPort;
    int         isr_vector;
} channel_data_t;

static channel_data_t s_atSerialChannels[3] = {
    { Addr_uart0, NULL, 1000, 0, CYGNUM_HAL_INTERRUPT_UART0 },
    { Addr_uart1, NULL, 1000, 1, CYGNUM_HAL_INTERRUPT_UART1 },
    { Addr_uart2, NULL, 1000, 2, CYGNUM_HAL_INTERRUPT_UART2 }
};

#if (CYGNUM_HAL_VIRTUAL_VECTOR_CONSOLE_CHANNEL_BAUD == 9600)
  #define ARM_NETX_BAUD_DIVISOR	        ARM_NETX_BAUD_9600
#elif (CYGNUM_HAL_VIRTUAL_VECTOR_CONSOLE_CHANNEL_BAUD == 19200)
  #define ARM_NETX_BAUD_DIVISOR	        ARM_NETX_BAUD_19200
#elif (CYGNUM_HAL_VIRTUAL_VECTOR_CONSOLE_CHANNEL_BAUD == 38400)
  #define ARM_NETX_BAUD_DIVISOR	        ARM_NETX_BAUD_38400
#elif (CYGNUM_HAL_VIRTUAL_VECTOR_CONSOLE_CHANNEL_BAUD == 57600)
  #define ARM_NETX_BAUD_DIVISOR	        ARM_NETX_BAUD_57600
#elif (CYGNUM_HAL_VIRTUAL_VECTOR_CONSOLE_CHANNEL_BAUD == 115200)
  #define ARM_NETX_BAUD_DIVISOR	        ARM_NETX_BAUD_115200
#endif


//-----------------------------------------------------------------------------

static void cyg_hal_plf_serial_init_channel(void* __ch_data)
{
  cyg_uint32            uiPhyBase   = ((channel_data_t*)__ch_data)->uiPhysicalBase;
  volatile cyg_uint32*  puiVirtBase = (volatile cyg_uint32*)(hal_phys_to_virt_address(uiPhyBase, false));
  PGPIO_REGISTERS       ptGPIORegs  = (PGPIO_REGISTERS)(hal_phys_to_virt_address(Addr_gpio, false));
  cyg_uint32            ulIdx;
  cyg_uint8             bPort       = ((channel_data_t*)__ch_data)->bPort;
  
  for(ulIdx = 0; ulIdx < 4; ulIdx++)
    ptGPIORegs->aulConfig[bPort * 4 + ulIdx] = 0x02;
  
  ((channel_data_t*)__ch_data)->puiVirtualBase = puiVirtBase;
  
  // first, disable everything
  puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint32)] = 0;
    
  // Set baud rate CYGNUM_HAL_VIRTUAL_VECTOR_CONSOLE_CHANNEL_BAUD
  puiVirtBase[REL_Adr_uartlcr_m / sizeof(cyg_uint32)] = (ARM_NETX_BAUD_DIVISOR & 0xFF00) >> 8;
  puiVirtBase[REL_Adr_uartlcr_l / sizeof(cyg_uint32)] = ARM_NETX_BAUD_DIVISOR & 0xFF;
   
  // ----------v----------v----------v----------v----------
  // NOTE: MUST BE WRITTEN LAST (AFTER UARTLCR_M & UARTLCR_L)
  // ----------^----------^----------^----------^----------
  // set the UART to be 8 bits, 1 stop bit, no parity, fifo enabled
  puiVirtBase[REL_Adr_uartcr_2 / sizeof(cyg_uint32)]  = MSK_uartcr_2_Baud_Rate_Mode;
  puiVirtBase[REL_Adr_uartlcr_h / sizeof(cyg_uint32)] = MSK_uartlcr_h_WLEN | MSK_uartlcr_h_FEN;

  puiVirtBase[REL_Adr_uartdrvout / sizeof(cyg_uint32)] = MSK_uartdrvout_DRVTX; /* Set TX-Driver to enabled */
 
  // finally, enable the uart
  puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint32)] = MSK_uartcr_uartEN;
}

void cyg_hal_plf_serial_putc(void *__ch_data, char c)
{
  volatile cyg_uint32*  puiVirtBase = ((channel_data_t*)__ch_data)->puiVirtualBase;
  cyg_uint32            status;
  
  CYGARC_HAL_SAVE_GP();
  
  do {
    status = puiVirtBase[REL_Adr_uartfr / sizeof(cyg_uint32)];
  } while (!TX_READY(status));	// wait until ready

  puiVirtBase[REL_Adr_uartdr / sizeof(cyg_uint32)] = c;
  
  if (c == '\n') 
  {
    do 
    {
      status = puiVirtBase[REL_Adr_uartfr / sizeof(cyg_uint32)];
    } while (!TX_READY(status));	// wait until ready
    
    puiVirtBase[REL_Adr_uartdr / sizeof(cyg_uint32)] = '\r';
  }
  
  CYGARC_HAL_RESTORE_GP();
}

static cyg_bool cyg_hal_plf_serial_getc_nonblock(void* __ch_data, cyg_uint8* ch)
{
  volatile cyg_uint32*  puiVirtBase = ((channel_data_t*)__ch_data)->puiVirtualBase;
  cyg_uint32  status ;
  long timeout = 100;  // A long time...

  do 
  {
    status = puiVirtBase[REL_Adr_uartfr / sizeof(cyg_uint32)];
    if (--timeout == 0) 
      return false ; 
  } while (!RX_DATA(status));	// wait until ready

  *ch = (cyg_uint8)(puiVirtBase[REL_Adr_uartdr / sizeof(cyg_uint32)] & 0xFF);

  return true;  
}

cyg_uint8 cyg_hal_plf_serial_getc(void* __ch_data)
{
  cyg_uint8 ch;
  CYGARC_HAL_SAVE_GP();
  
  while(!cyg_hal_plf_serial_getc_nonblock(__ch_data, &ch));
  
  CYGARC_HAL_RESTORE_GP();
  return ch;
}

static void cyg_hal_plf_serial_write(void* __ch_data, const cyg_uint8* __buf, cyg_uint32 __len)
{
  CYGARC_HAL_SAVE_GP();
  
  while(__len-- > 0)
      cyg_hal_plf_serial_putc(__ch_data, *__buf++);
  
  CYGARC_HAL_RESTORE_GP();  
}

static void cyg_hal_plf_serial_read(void* __ch_data, cyg_uint8* __buf, cyg_uint32 __len)
{    
  CYGARC_HAL_SAVE_GP();

  while(__len-- > 0)
    *__buf++ = cyg_hal_plf_serial_getc(__ch_data);

  CYGARC_HAL_RESTORE_GP();
}

cyg_bool cyg_hal_plf_serial_getc_timeout(void* __ch_data, cyg_uint8* ch)
{
  int delay_count;
  channel_data_t* chan = (channel_data_t*)__ch_data;
  cyg_bool res;
  CYGARC_HAL_SAVE_GP();

  delay_count = chan->msec_timeout * 10; // delay in .1 ms steps

  for(;;) 
  {
      res = cyg_hal_plf_serial_getc_nonblock(__ch_data, ch);
      if (res || 0 == delay_count--)
          break;
      
      CYGACC_CALL_IF_DELAY_US(100);
  }

  CYGARC_HAL_RESTORE_GP();
  return res;  
}

static int 
cyg_hal_plf_serial_control(void* __ch_data, __comm_control_cmd_t __func, ...)
{
  static int            irq_state     = 0;
  channel_data_t*       chan          = (channel_data_t*)__ch_data;
  volatile cyg_uint32*  puiVirtBase   = ((channel_data_t*)__ch_data)->puiVirtualBase;
  int                   ret           = 0;
  cyg_uint8             status;
  
  CYGARC_HAL_SAVE_GP();
  
  switch (__func) 
  {
  case __COMMCTL_IRQ_ENABLE:
    irq_state = 1;
    // Ensure that only Receive ints are generated.
    status = puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint8)];
  
    status |= (MSK_uartcr_RTIE | MSK_uartcr_RIE);
    puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint8)] = status;
  
    HAL_INTERRUPT_UNMASK(chan->isr_vector);
    break;

  case __COMMCTL_IRQ_DISABLE:
    ret = irq_state;
    irq_state = 0;

    status = puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint8)];
    status &= ~(MSK_uartcr_RTIE | MSK_uartcr_TIE | MSK_uartcr_RIE | MSK_uartcr_MSIE);
    puiVirtBase[REL_Adr_uartcr / sizeof(cyg_uint8)] = status;

    HAL_INTERRUPT_MASK(chan->isr_vector);
    break;

  case __COMMCTL_DBG_ISR_VECTOR:
    ret = chan->isr_vector;
    break;

  case __COMMCTL_SET_TIMEOUT:
  {
    va_list ap;

    va_start(ap, __func);

    ret = chan->msec_timeout;
    chan->msec_timeout = va_arg(ap, cyg_uint32);

    va_end(ap);
  }        
  default:
      break;
  }
  CYGARC_HAL_RESTORE_GP();
  return ret;  
}

static int cyg_hal_plf_serial_isr(void *__ch_data, int* __ctrlc, CYG_ADDRWORD __vector, CYG_ADDRWORD __data)
{
  int                   res           = 0;
  channel_data_t*       chan          = (channel_data_t*)__ch_data;
  volatile cyg_uint32*  puiVirtBase   = ((channel_data_t*)__ch_data)->puiVirtualBase;
  char                  c;
  cyg_uint32            status;
  CYGARC_HAL_SAVE_GP();

  cyg_drv_interrupt_acknowledge(chan->isr_vector);

  *__ctrlc = 0;
  status = puiVirtBase[REL_Adr_uartfr / sizeof(cyg_uint32)];

  if(RX_DATA(status)) 
  {
    c = (cyg_uint8)(puiVirtBase[REL_Adr_uartdr / sizeof(cyg_uint32)] & 0xFF);

    if( cyg_hal_is_break( &c , 1 ) )
      *__ctrlc = 1;

    res = CYG_ISR_HANDLED;
  }

  CYGARC_HAL_RESTORE_GP();
  return res;  
}

static void cyg_hal_plf_serial_init(void)
{
  hal_virtual_comm_table_t* comm;
  int                       cur = CYGACC_CALL_IF_SET_CONSOLE_COMM(CYGNUM_CALL_IF_SET_COMM_ID_QUERY_CURRENT);
  int                       iChannels = sizeof(s_atSerialChannels) / sizeof(s_atSerialChannels[0]);
  int                       iIdx;

  for(iIdx = 0; iIdx < iChannels; iIdx++)
  {
    // Disable interrupts.
    HAL_INTERRUPT_MASK(s_atSerialChannels[iIdx].isr_vector);

    // Init channels
    cyg_hal_plf_serial_init_channel(&s_atSerialChannels[iIdx]);

    // Setup procs in the vector table
    CYGACC_CALL_IF_SET_CONSOLE_COMM(iIdx);
    comm = CYGACC_CALL_IF_CONSOLE_PROCS();
    CYGACC_COMM_IF_CH_DATA_SET(*comm, &s_atSerialChannels[iIdx]);
    CYGACC_COMM_IF_WRITE_SET(*comm, cyg_hal_plf_serial_write);
    CYGACC_COMM_IF_READ_SET(*comm, cyg_hal_plf_serial_read);
    CYGACC_COMM_IF_PUTC_SET(*comm, cyg_hal_plf_serial_putc);
    CYGACC_COMM_IF_GETC_SET(*comm, cyg_hal_plf_serial_getc);
    CYGACC_COMM_IF_CONTROL_SET(*comm, cyg_hal_plf_serial_control);
    CYGACC_COMM_IF_DBG_ISR_SET(*comm, cyg_hal_plf_serial_isr);
    CYGACC_COMM_IF_GETC_TIMEOUT_SET(*comm, cyg_hal_plf_serial_getc_timeout);
  }
  
  // Restore original console
  CYGACC_CALL_IF_SET_CONSOLE_COMM(cur);  
}

void cyg_hal_plf_comms_init(void)
{
  static int initialized = 0;
  
  if(initialized)
    return;
  
  initialized = 1;
  
  cyg_hal_plf_serial_init();
  
  #ifdef CYGDBG_HAL_DEBUG_GDB_BREAK_SUPPORT2
  cyg_hal_gdb_isr_attach();	// FIXME, hack to get CTRLC working
  #endif 
}

/*---------------------------------------------------------------------------*/

void hal_diag_led(int n)
{
}

void hal_diag_alpha_led(unsigned int val)
{
}

void hal_diag_alpha_led_char(char c1, char c2)
{
}

/*---------------------------------------------------------------------------*/
/* End of hal_diag.c */
