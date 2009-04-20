#ifndef CYGONCE_HAL_CACHE_H
#define CYGONCE_HAL_CACHE_H

//=============================================================================
//
//      hal_cache.h
//
//      HAL cache control API
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
// Author(s):   gthomas
// Contributors:hmt, jskov
//              Travis C. Furrer <furrer@mit.edu>
// Date:        2000-05-08
// Purpose:     Cache control API
// Description: The macros defined here provide the HAL APIs for handling
//              cache control operations.
// Usage:
//              #include <cyg/hal/hal_cache.h>
//              ...
//              
//
//####DESCRIPTIONEND####
//
//=============================================================================

#include <cyg/infra/cyg_type.h>
#include <cyg/hal/hal_mmu.h>


//-----------------------------------------------------------------------------
// Cache dimensions

//DCache: 64 sets, 4 ways, 32 line size, 8192 size                                                          
//ICache: 128 sets, 4 ways, 32 line size, 16384 size                                                        

#if defined(CYGPKG_HAL_ARM_ARM9_NETX500)
  #define HAL_ICACHE_SIZE                 0x4000
  #define HAL_ICACHE_LINE_SIZE            32
  #define HAL_ICACHE_WAYS                 4
  #define HAL_ICACHE_SETS (HAL_ICACHE_SIZE/(HAL_ICACHE_LINE_SIZE*HAL_ICACHE_WAYS))
  
  #define HAL_DCACHE_SIZE                 0x2000
  #define HAL_DCACHE_LINE_SIZE            32
  #define HAL_DCACHE_WAYS                 4
  #define HAL_DCACHE_SETS (HAL_DCACHE_SIZE/(HAL_DCACHE_LINE_SIZE*HAL_DCACHE_WAYS))
  
  #define HAL_WRITE_BUFFER                64 
#else
# error "No cache details defined"
#endif

#if HAL_ICACHE_SIZE != 0

#define HAL_ICACHE_ENABLE()                                             \
CYG_MACRO_START                                                         \
    asm volatile (                                                      \
        "mrc  p15, 0, r1, c1, c0, 0;"                                   \
        "orr  r1,r1,#0x1000;"                                           \
                      /*(MMU_Control_I)*/                               \
                      /* enable ICache (aligment faules and MMU will */ \
                      /* be enabled in hal_mmu_init()also ensures   */  \
        "mcr  p15, 0, r1, c1, c0, 0"                                    \
        :                                                               \
        :                                                               \
        : "r1" /* Clobber list */                                       \
        );                                                              \
CYG_MACRO_END

#define HAL_ICACHE_DISABLE()                                                    \
CYG_MACRO_START                                                                 \
    asm volatile (                                                              \
        "mrc    p15, 0, r1, c1, c0, 0;"                                         \
        "bic    r1,r1,#0x1000;" /* disable ICache (but not MMU)*/               \
        "mcr    p15, 0, r1, c1, c0, 0;"                                         \
        "mov    r1,#0;"                                                         \
        "mcr    p15, 0, r1, c7, c5, 0;"  /* flush ICache */                     \
        "nop;" /* next few instructions may be via cache    */                  \
        "nop;"                                                                  \
        "nop;"                                                                  \
        "nop;"                                                                  \
        "nop;"                                                                  \
        "nop"                                                                   \
        :                                                                       \
        :                                                                       \
        : "r1" /* Clobber list */                                               \
        );                                                                      \
CYG_MACRO_END

#define HAL_ICACHE_IS_ENABLED(_state_)                                   \
CYG_MACRO_START                                                          \
    register cyg_uint32 reg;                                             \
    asm volatile ("mrc  p15,0,%0,c1,c0,0"                                \
                  : "=r"(reg)                                            \
                  :                                                      \
        );                                                               \
    (_state_) = (0 != (0x1000 & reg)); /* Bit 12 is ICache enable */     \
CYG_MACRO_END

// Invalidate the entire cache
#define HAL_ICACHE_INVALIDATE_ALL()                                     \
CYG_MACRO_START                                                         \
    /* this macro can discard dirty cache lines (N/A for ICache) */     \
    asm volatile (                                                      \
        "mov    r1,#0;"                                                 \
        "mcr    p15,0,r1,c7,c5,0;"  /* flush ICache */                  \
        "mcr    p15,0,r1,c8,c5,0;"  /* flush ITLB only */               \
        "nop;" /* next few instructions may be via cache    */          \
        "nop;"                                                          \
        "nop;"                                                          \
        "nop;"                                                          \
        "nop;"                                                          \
        "nop;"                                                          \
        :                                                               \
        :                                                               \
        : "r1" /* Clobber list */                                       \
        );                                                              \
CYG_MACRO_END

// Synchronize the contents of the cache with memory.
// (which includes flushing out pending writes)
#define HAL_ICACHE_SYNC()                                       \
CYG_MACRO_START                                                 \
    HAL_DCACHE_SYNC(); /* ensure data gets to RAM */            \
    HAL_ICACHE_INVALIDATE_ALL(); /* forget all we know */       \
CYG_MACRO_END

#else

#define HAL_ICACHE_ENABLE()
#define HAL_ICACHE_DISABLE()
#define HAL_ICACHE_IS_ENABLED(_state_) ((_state_) = 0)
#define HAL_ICACHE_INVALIDATE_ALL()
#define HAL_ICACHE_SYNC()

#endif

#if HAL_ICACHE_SIZE != 0

#define HAL_DCACHE_ENABLE()                                             \
CYG_MACRO_START                                                         \
    asm volatile (                                                      \
        "mrc  p15,0,r1,c1,c0,0;"                                        \
        "orr  r1,r1,#0x04;"                                             \
                    /* (MMU_Control_C)*/    \
                    /* enable DCache MMU and Alignemnt checks will */   \
                    /* be enabled in hal_mmu_init     */                \
        "mcr  p15,0,r1,c1,c0,0"                                         \
        :                                                               \
        :                                                               \
        : "r1" /* Clobber list */                                       \
        );                                                              \
CYG_MACRO_END

#define HAL_DCACHE_DISABLE()                                            \
CYG_MACRO_START                                                         \
    asm volatile (                                                      \
        "mrc  p15,0,r1,c1,c0,0;"                                        \
        "bic  r1,r1,#0x04;"   /*MMU_Control_C*/                         \
                              /* disable DCache AND write buffer  */    \
                              /* but not MMU and alignment faults */    \
        "mcr  p15,0,r1,c1,c0,0;"                                        \
        "mov  r1,#0;"                                                   \
        "mcr  p15,0,r1,c7,c6,0" /* clear data cache */                  \
        :                                                               \
        :                                                               \
        : "r1" /* Clobber list */                                       \
        );                                                              \
CYG_MACRO_END

// Query the state of the data cache
#define HAL_DCACHE_IS_ENABLED(_state_)                                      \
CYG_MACRO_START                                                             \
    register int reg;                                                       \
    asm volatile ("mrc  p15,0,%0,c1,c0,0;"                                  \
                  : "=r"(reg)                                               \
                  :                                                         \
        );                                                                  \
    (_state_) = (0 != (0x04 & reg)); /* Bit 2 is DCache enable */           \
CYG_MACRO_END

// Flush the entire dcache (and then both TLBs, just in case)
#define HAL_DCACHE_INVALIDATE_ALL()                                     \
CYG_MACRO_START  /* this macro can discard dirty cache lines. */        \
    asm volatile (                                                      \
	    "mov    r0,#0;"                                                 \
        "mcr    p15,0,r0,c7,c6,0;" /* flush d-cache */                  \
        "mcr    p15,0,r0,c8,c7,0;" /* flush i+d-TLBs */                 \
        :                                                               \
        :                                                               \
        : "r0","memory" /* clobber list */);                            \
CYG_MACRO_END

#define HAL_DCACHE_SYNC()                                               \
CYG_MACRO_START                                                         \
    asm volatile (                                                      \
        "1: mrc p15,0,r15,c7,c14,3;"  /* wait for dirty flag to clear */ \
        "bne    1b;"                                                    \
        "mov    r0,#0;"                                                 \
        "mcr    p15,0,r0,c7,c6,0;"  /* flush DCache */                  \
        :                                                               \
        :                                                               \
        : "r0" /* Clobber list */                                       \
        );                                                              \
CYG_MACRO_END

#else

#define HAL_DCACHE_ENABLE()
#define HAL_DCACHE_DISABLE()
#define HAL_DCACHE_IS_ENABLED(_state_) ((_state_) = 0)
#define HAL_DCACHE_INVALIDATE_ALL()
#define HAL_DCACHE_SYNC()

#endif

#define HAL_DCACHE_WRITETHRU_MODE       0
#define HAL_DCACHE_WRITEBACK_MODE       1

// Get the current writeback mode - or only writeback mode if fixed
#define HAL_DCACHE_QUERY_WRITE_MODE( _mode_ ) CYG_MACRO_START           \
    _mode_ = HAL_DCACHE_WRITEBACK_MODE;                                 \
CYG_MACRO_END

//-----------------------------------------------------------------------------
// Virtual<->Physical translations
#ifndef HAL_VIRT_TO_PHYS_ADDRESS
extern cyg_uint32 hal_virt_to_phys_address(cyg_uint32 phys);
#define HAL_VIRT_TO_PHYS_ADDRESS(_va, _pa) \
   _pa = hal_virt_to_phys_address(_va)
#endif

#ifndef HAL_PHYS_TO_VIRT_ADDRESS
extern cyg_uint32 hal_phys_to_virt_address(cyg_uint32 phys, cyg_bool fCached);
#define HAL_PHYS_TO_VIRT_ADDRESS(_va, _pa) \
   _va = hal_phys_to_virt_address(_pa, false)
#endif

//-----------------------------------------------------------------------------
#endif // ifndef CYGONCE_HAL_CACHE_H
// End of hal_cache.h
