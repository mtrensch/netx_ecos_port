// ******************************************************************
// from regdef.v by regdef2h auto-generated C-header file            
// please see the regdef.html file for detailed register description 
// ******************************************************************

#ifndef __regdef_h
#define __regdef_h


// =====================================================================
//
// Area of sram0_ahbls0
//
// =====================================================================

#define Addr_sram0_ahbls0	0x00000000U

// ---------------------------------------------------------------------
// Register intram0_base
// => internal SRAM AHBL slave 0 start address
//    Area size: 32kB
//    Read accesses in this memory area: 0WS, byte accessable
//    Write accesses in this memory area: 0WS, byte accessable
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_intram0_base 0x00000000U
#define Adr_intram0_base     0x00000000U

// ---------------------------------------------------------------------
// Register intram0_end
// => internal SRAM AHBL slave 0 end address
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_intram0_end 0x00007FFCU
#define Adr_intram0_end     0x00007FFCU


// =====================================================================
//
// Area of sram1_ahbls1
//
// =====================================================================

#define Addr_sram1_ahbls1	0x00008000U

// ---------------------------------------------------------------------
// Register intram1_base
// => internal SRAM AHBL slave 1 start address
//    Area size: 32kB
//    Read accesses in this memory area: 0WS, byte accessable
//    Write accesses in this memory area: 0WS, byte accessable
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_intram1_base 0x00000000U
#define Adr_intram1_base     0x00008000U

// ---------------------------------------------------------------------
// Register intram1_end
// => internal SRAM AHBL slave 1 end address
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_intram1_end 0x00007FFCU
#define Adr_intram1_end     0x0000FFFCU


// =====================================================================
//
// Area of sram2_ahbls2
//
// =====================================================================

#define Addr_sram2_ahbls2	0x00010000U

// ---------------------------------------------------------------------
// Register intram2_base
// => internal SRAM AHBL slave 2 start address
//    Area size: 32kB
//    Read accesses in this memory area: 0WS, byte accessable
//    Write accesses in this memory area: 0WS, byte accessable
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_intram2_base 0x00000000U
#define Adr_intram2_base     0x00010000U

// ---------------------------------------------------------------------
// Register intram2_end
// => internal SRAM AHBL slave 2 end address
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_intram2_end 0x00007FFCU
#define Adr_intram2_end     0x00017FFCU


// =====================================================================
//
// Area of sram3_ahbls3
//
// =====================================================================

#define Addr_sram3_ahbls3	0x00018000U

// ---------------------------------------------------------------------
// Register intram3_base
// => internal SRAM AHBL slave 3 start address
//    Area size: 32kB
//    Read accesses in this memory area: 0WS, byte accessable
//    Write accesses in this memory area: 0WS, byte accessable
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_intram3_base 0x00000000U
#define Adr_intram3_base     0x00018000U

// ---------------------------------------------------------------------
// Register intram3_end
// => internal SRAM AHBL slave 3 end address
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_intram3_end 0x00007FFCU
#define Adr_intram3_end     0x0001FFFCU


// =====================================================================
//
// Area of boot_rom
//
// =====================================================================

#define Addr_boot_rom	0x00200000U

// ---------------------------------------------------------------------
// Register boot_rom_base
// => internal ROM start address
//    Area size: 32kB
//    Read accesses in this memory area: 0WS, byte accessable
//    ROM-content will be mirrored any 32kb between 0x00200000 and 0x002ffffc
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_boot_rom_base 0x00000000U
#define Adr_boot_rom_base     0x00200000U

// ---------------------------------------------------------------------
// Register boot_rom_end
// => internal ROM end address
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_boot_rom_end 0x00007FFCU
#define Adr_boot_rom_end     0x00207FFCU


// =====================================================================
//
// Area of backup_ram
//
// =====================================================================

#define Addr_backup_ram	0x00300000U

// ---------------------------------------------------------------------
// Register backup_ram_base
// => internal battery buffered backup SRAM start address
//    Area size: 16kB
//    Read accesses in this memory area: 1WS, byte accessable
//    Write accesses in this memory area: 1WS, byte accessable
//    Power down backup ram will be locked like RTC by if register rtc_isolated signals isolation mode.
//    On accesses in isolation mode, ther will be an abort generated.
//    Power down backup ram-content will be mirrored any 16kb between 0x00300000 and 0x003ffffc
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_backup_ram_base 0x00000000U
#define Adr_backup_ram_base     0x00300000U

// ---------------------------------------------------------------------
// Register backup_ram_end
// => internal battery buffered backup SRAM end address
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_backup_ram_end 0x00003FFCU
#define Adr_backup_ram_end     0x00303FFCU


// =====================================================================
//
// Area of asic_ctrl
//
// =====================================================================

#define Addr_asic_ctrl	0x00100000U

// ---------------------------------------------------------------------
// Register io_status
// => IO bondout status registers
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_io_status 0x00000000U
#define Adr_io_status     0x00100000U

#define MSK_io_status_bond_option0 0x00000001U // [0]
#define SRT_io_status_bond_option0 0           
#define MSK_io_status_bond_option1 0x00000002U // [1]
#define SRT_io_status_bond_option1 1           
#define MSK_io_status_bond_option2 0x00000004U // [2]
#define SRT_io_status_bond_option2 2           
#define MSK_io_status_quick_count  0x00000008U // [3]
#define SRT_io_status_quick_count  3           
#define MSK_io_status_arm100       0x00000010U // [4]
#define SRT_io_status_arm100       4           
#define MSK_io_status_pll_bypass   0x00000020U // [5]
#define SRT_io_status_pll_bypass   5           

enum {
	BFW_io_status_bond_option0 = 1,  // [0]
	BFW_io_status_bond_option1 = 1,  // [1]
	BFW_io_status_bond_option2 = 1,  // [2]
	BFW_io_status_quick_count  = 1,  // [3]
	BFW_io_status_arm100       = 1,  // [4]
	BFW_io_status_pll_bypass   = 1,  // [5]
	BFW_io_status_reserved1    = 26  // [31:6]
};

typedef struct IO_STATUS_BIT_Ttag {
	unsigned int bond_option0 : BFW_io_status_bond_option0; // Value of Bond-Option Pin0
	unsigned int bond_option1 : BFW_io_status_bond_option1; // Value of Bond-Option Pin1
	unsigned int bond_option2 : BFW_io_status_bond_option2; // Value of Bond-Option Pin2
	unsigned int quick_count  : BFW_io_status_quick_count;  // Testmode 'quick_count' is activated by external pins
	                                                        // -> diverse internal counters count faster (RTC-clock-divider, PLL-stby-controller,...)
	unsigned int arm100       : BFW_io_status_arm100;       // Testmode 'arm100' is activated by external pins
	                                                        // -> ARM926 runs on system frequency (100MHz) instead of double system frequency (200MHz)
	unsigned int pll_bypass   : BFW_io_status_pll_bypass;   // Testmode 'pll_bypass' is activated by external pins
	                                                        // -> 400MHz-PLL is bypassed, PLL output is directly connected to XTALIN
	unsigned int reserved1    : BFW_io_status_reserved1;    // reserved
} IO_STATUS_BIT_T;

typedef union {
	unsigned int    val;
	IO_STATUS_BIT_T bf;
} IO_STATUS_T;

// ---------------------------------------------------------------------
// Register io_config
// => IO config registers
//    Selects of output pin multiplexing.
//    See Excel pinning sheet for details.
//    Selects can only be activated, if appropriate bit of io_config_mask is set.
//    Bits will be reset according to the io_config_mask-register register if a new mask is correctly written (netX locking algorithm).
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_io_config 0x00000004U
#define Adr_io_config     0x00100004U

#define MSK_io_config_sel_lcd_bw       0x00000001U // [0]
#define SRT_io_config_sel_lcd_bw       0           
#define MSK_io_config_sel_lcd_col      0x00000002U // [1]
#define SRT_io_config_sel_lcd_col      1           
#define MSK_io_config_sel_mii2         0x00000004U // [2]
#define SRT_io_config_sel_mii2         2           
#define MSK_io_config_sel_mii3         0x00000008U // [3]
#define SRT_io_config_sel_mii3         3           
#define MSK_io_config_sel_mii23        0x00000010U // [4]
#define SRT_io_config_sel_mii23        4           
#define MSK_io_config_sel_mii3pwm      0x00000020U // [5]
#define SRT_io_config_sel_mii3pwm      5           
#define MSK_io_config_sel_fo0          0x00000040U // [6]
#define SRT_io_config_sel_fo0          6           
#define MSK_io_config_sel_fo1          0x00000080U // [7]
#define SRT_io_config_sel_fo1          7           
#define MSK_io_config_sel_f0_pwm3      0x00000100U // [8]
#define SRT_io_config_sel_f0_pwm3      8           
#define MSK_io_config_sel_f0_failure3  0x00000200U // [9]
#define SRT_io_config_sel_f0_failure3  9           
#define MSK_io_config_sel_f1_pwm3      0x00000400U // [10]
#define SRT_io_config_sel_f1_pwm3      10          
#define MSK_io_config_sel_f1_rpwm3     0x00000800U // [11]
#define SRT_io_config_sel_f1_rpwm3     11          
#define MSK_io_config_sel_f2_failure3  0x00001000U // [12]
#define SRT_io_config_sel_f2_failure3  12          
#define MSK_io_config_sel_f2_rpwm3     0x00002000U // [13]
#define SRT_io_config_sel_f2_rpwm3     13          
#define MSK_io_config_sel_f3_pwm3      0x00004000U // [14]
#define SRT_io_config_sel_f3_pwm3      14          
#define MSK_io_config_sel_e_pwm2       0x00008000U // [15]
#define SRT_io_config_sel_e_pwm2       15          
#define MSK_io_config_sel_e_failure2   0x00010000U // [16]
#define SRT_io_config_sel_e_failure2   16          
#define MSK_io_config_sel_e_rpwm2      0x00020000U // [17]
#define SRT_io_config_sel_e_rpwm2      17          
#define MSK_io_config_sel_enc0         0x00040000U // [18]
#define SRT_io_config_sel_enc0         18          
#define MSK_io_config_sel_enc1         0x00080000U // [19]
#define SRT_io_config_sel_enc1         19          
#define MSK_io_config_sel_mp           0x00100000U // [20]
#define SRT_io_config_sel_mp           20          
#define MSK_io_config_sel_led_mii2     0x00200000U // [21]
#define SRT_io_config_sel_led_mii2     21          
#define MSK_io_config_sel_led_mii3     0x00400000U // [22]
#define SRT_io_config_sel_led_mii3     22          
#define MSK_io_config_sel_etm          0x00800000U // [23]
#define SRT_io_config_sel_etm          23          
#define MSK_io_config_sel_wdg          0x01000000U // [24]
#define SRT_io_config_sel_wdg          24          
#define MSK_io_config_sel_f0_pwm3_eclk 0x02000000U // [25]
#define SRT_io_config_sel_f0_pwm3_eclk 25          
#define MSK_io_config_sel_f1_pwm3_eclk 0x04000000U // [26]
#define SRT_io_config_sel_f1_pwm3_eclk 26          
#define MSK_io_config_sel_f3_pwm3_eclk 0x08000000U // [27]
#define SRT_io_config_sel_f3_pwm3_eclk 27          
#define MSK_io_config_sel_e_pwm2_eclk  0x10000000U // [28]
#define SRT_io_config_sel_e_pwm2_eclk  28          
#define MSK_io_config_if_select_n      0x80000000U // [31]
#define SRT_io_config_if_select_n      31          

enum {
	BFW_io_config_sel_lcd_bw       = 1, // [0]
	BFW_io_config_sel_lcd_col      = 1, // [1]
	BFW_io_config_sel_mii2         = 1, // [2]
	BFW_io_config_sel_mii3         = 1, // [3]
	BFW_io_config_sel_mii23        = 1, // [4]
	BFW_io_config_sel_mii3pwm      = 1, // [5]
	BFW_io_config_sel_fo0          = 1, // [6]
	BFW_io_config_sel_fo1          = 1, // [7]
	BFW_io_config_sel_f0_pwm3      = 1, // [8]
	BFW_io_config_sel_f0_failure3  = 1, // [9]
	BFW_io_config_sel_f1_pwm3      = 1, // [10]
	BFW_io_config_sel_f1_rpwm3     = 1, // [11]
	BFW_io_config_sel_f2_failure3  = 1, // [12]
	BFW_io_config_sel_f2_rpwm3     = 1, // [13]
	BFW_io_config_sel_f3_pwm3      = 1, // [14]
	BFW_io_config_sel_e_pwm2       = 1, // [15]
	BFW_io_config_sel_e_failure2   = 1, // [16]
	BFW_io_config_sel_e_rpwm2      = 1, // [17]
	BFW_io_config_sel_enc0         = 1, // [18]
	BFW_io_config_sel_enc1         = 1, // [19]
	BFW_io_config_sel_mp           = 1, // [20]
	BFW_io_config_sel_led_mii2     = 1, // [21]
	BFW_io_config_sel_led_mii3     = 1, // [22]
	BFW_io_config_sel_etm          = 1, // [23]
	BFW_io_config_sel_wdg          = 1, // [24]
	BFW_io_config_sel_f0_pwm3_eclk = 1, // [25]
	BFW_io_config_sel_f1_pwm3_eclk = 1, // [26]
	BFW_io_config_sel_f3_pwm3_eclk = 1, // [27]
	BFW_io_config_sel_e_pwm2_eclk  = 1, // [28]
	BFW_io_config_reserved1        = 2, // [30:29]
	BFW_io_config_if_select_n      = 1  // [31]
};

typedef struct IO_CONFIG_BIT_Ttag {
	unsigned int sel_lcd_bw       : BFW_io_config_sel_lcd_bw;       // select outputs for Black and White LCD Display 
	unsigned int sel_lcd_col      : BFW_io_config_sel_lcd_col;      // select outputs for Couloured LCD Display 
	unsigned int sel_mii2         : BFW_io_config_sel_mii2;         // select outputs for MII interface of xMAC2 
	unsigned int sel_mii3         : BFW_io_config_sel_mii3;         // select outputs for MII interface of xMAC2 
	unsigned int sel_mii23        : BFW_io_config_sel_mii23;        // select outputs for MDIO signals 
	unsigned int sel_mii3pwm      : BFW_io_config_sel_mii3pwm;      // select outputs for PWM output of xMAC3 
	unsigned int sel_fo0          : BFW_io_config_sel_fo0;          // select outputs for Fiber Optics of Phy0 
	unsigned int sel_fo1          : BFW_io_config_sel_fo1;          // select outputs for Fiber Optics of Phy1 
	unsigned int sel_f0_pwm3      : BFW_io_config_sel_f0_pwm3;      // select outputs for PWM-siganls at Fieldbus0 pads 
	unsigned int sel_f0_failure3  : BFW_io_config_sel_f0_failure3;  // select output  for PWM-failure at Fieldbus0 pads 
	unsigned int sel_f1_pwm3      : BFW_io_config_sel_f1_pwm3;      // select outputs for PWM-signals at Fieldbus1 pads 
	unsigned int sel_f1_rpwm3     : BFW_io_config_sel_f1_rpwm3;     // select output  for rpwm signal at Fieldbus1 pads 
	unsigned int sel_f2_failure3  : BFW_io_config_sel_f2_failure3;  // select output  for PWM-failure at Fieldbus2 pads 
	unsigned int sel_f2_rpwm3     : BFW_io_config_sel_f2_rpwm3;     // select output  for rpwm signal at Fieldbus2 pads 
	unsigned int sel_f3_pwm3      : BFW_io_config_sel_f3_pwm3;      // select outputs for PWM-signals at Fieldbus3 pads 
	unsigned int sel_e_pwm2       : BFW_io_config_sel_e_pwm2;       // select outputs for PWM-signals at PIO pads 
	unsigned int sel_e_failure2   : BFW_io_config_sel_e_failure2;   // select output  for PWM-failure at PIO pads 
	unsigned int sel_e_rpwm2      : BFW_io_config_sel_e_rpwm2;      // select output  for rpwm signal at PIO pads 
	unsigned int sel_enc0         : BFW_io_config_sel_enc0;         // select outputs for enc0 
	unsigned int sel_enc1         : BFW_io_config_sel_enc1;         // select outputs for enc1 
	unsigned int sel_mp           : BFW_io_config_sel_mp;           // select outputs for mp 
	unsigned int sel_led_mii2     : BFW_io_config_sel_led_mii2;     // select inputs for leds of mii2 
	unsigned int sel_led_mii3     : BFW_io_config_sel_led_mii3;     // select inputs for leds of mii3 
	unsigned int sel_etm          : BFW_io_config_sel_etm;          // select pins for ETM9 of ARM926 
	unsigned int sel_wdg          : BFW_io_config_sel_wdg;          // select pins for clk watchdoq / system watchdog 
	unsigned int sel_f0_pwm3_eclk : BFW_io_config_sel_f0_pwm3_eclk; // select outputs for PWM-siganls clocked by xmac3_eclk_in at Fieldbus0 pads 
	                                                        // usually used for xmac3 fiber-optic mode with low clock jitter
	unsigned int sel_f1_pwm3_eclk : BFW_io_config_sel_f1_pwm3_eclk; // select outputs for PWM-signals clocked by xmac3_eclk_in at Fieldbus1 pads 
	                                                        // usually used for xmac3 fiber-optic mode with low clock jitter
	unsigned int sel_f3_pwm3_eclk : BFW_io_config_sel_f3_pwm3_eclk; // select outputs for PWM-signals clocked by xmac3_eclk_in at Fieldbus3 pads 
	                                                        // usually used for xmac3 fiber-optic mode with low clock jitter
	unsigned int sel_e_pwm2_eclk  : BFW_io_config_sel_e_pwm2_eclk;  // select outputs for PWM-signals clocked by xmac2_eclk_in at PIO pads 
	                                                        // usually used for xmac2 fiber-optic mode with low clock jitter
	unsigned int reserved1        : BFW_io_config_reserved1;        // reserved
	unsigned int if_select_n      : BFW_io_config_if_select_n;      // inverted HIF if-select signal: 
	                                                        // 1: PCI-Mode, 0: DPM/PIO-Mode
} IO_CONFIG_BIT_T;

typedef union {
	unsigned int    val;
	IO_CONFIG_BIT_T bf;
} IO_CONFIG_T;

// ---------------------------------------------------------------------
// Register io_config_mask
// => IO config mask registers
//    Masks of output pin multiplexing select signals.
//    This register is lockable by netX locking algorithm. It will be only reset on Power on, not on normal system nres.
//    The io_config-register will change according to this register if a new mask is correctly written (netX locking algorithm).
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_io_config_mask 0x00000008U
#define Adr_io_config_mask     0x00100008U

#define MSK_io_config_mask_sel_lcd_bw       0x00000001U // [0]
#define SRT_io_config_mask_sel_lcd_bw       0           
#define MSK_io_config_mask_sel_lcd_col      0x00000002U // [1]
#define SRT_io_config_mask_sel_lcd_col      1           
#define MSK_io_config_mask_sel_mii2         0x00000004U // [2]
#define SRT_io_config_mask_sel_mii2         2           
#define MSK_io_config_mask_sel_mii3         0x00000008U // [3]
#define SRT_io_config_mask_sel_mii3         3           
#define MSK_io_config_mask_sel_mii23        0x00000010U // [4]
#define SRT_io_config_mask_sel_mii23        4           
#define MSK_io_config_mask_sel_mii3pwm      0x00000020U // [5]
#define SRT_io_config_mask_sel_mii3pwm      5           
#define MSK_io_config_mask_sel_fo0          0x00000040U // [6]
#define SRT_io_config_mask_sel_fo0          6           
#define MSK_io_config_mask_sel_fo1          0x00000080U // [7]
#define SRT_io_config_mask_sel_fo1          7           
#define MSK_io_config_mask_sel_f0_pwm3      0x00000100U // [8]
#define SRT_io_config_mask_sel_f0_pwm3      8           
#define MSK_io_config_mask_sel_f0_failure3  0x00000200U // [9]
#define SRT_io_config_mask_sel_f0_failure3  9           
#define MSK_io_config_mask_sel_f1_pwm3      0x00000400U // [10]
#define SRT_io_config_mask_sel_f1_pwm3      10          
#define MSK_io_config_mask_sel_f1_rpwm3     0x00000800U // [11]
#define SRT_io_config_mask_sel_f1_rpwm3     11          
#define MSK_io_config_mask_sel_f2_failure3  0x00001000U // [12]
#define SRT_io_config_mask_sel_f2_failure3  12          
#define MSK_io_config_mask_sel_f2_rpwm3     0x00002000U // [13]
#define SRT_io_config_mask_sel_f2_rpwm3     13          
#define MSK_io_config_mask_sel_f3_pwm3      0x00004000U // [14]
#define SRT_io_config_mask_sel_f3_pwm3      14          
#define MSK_io_config_mask_sel_e_pwm2       0x00008000U // [15]
#define SRT_io_config_mask_sel_e_pwm2       15          
#define MSK_io_config_mask_sel_e_failure2   0x00010000U // [16]
#define SRT_io_config_mask_sel_e_failure2   16          
#define MSK_io_config_mask_sel_e_rpwm2      0x00020000U // [17]
#define SRT_io_config_mask_sel_e_rpwm2      17          
#define MSK_io_config_mask_sel_enc0         0x00040000U // [18]
#define SRT_io_config_mask_sel_enc0         18          
#define MSK_io_config_mask_sel_enc1         0x00080000U // [19]
#define SRT_io_config_mask_sel_enc1         19          
#define MSK_io_config_mask_sel_mp           0x00100000U // [20]
#define SRT_io_config_mask_sel_mp           20          
#define MSK_io_config_mask_sel_led_mii2     0x00200000U // [21]
#define SRT_io_config_mask_sel_led_mii2     21          
#define MSK_io_config_mask_sel_led_mii3     0x00400000U // [22]
#define SRT_io_config_mask_sel_led_mii3     22          
#define MSK_io_config_mask_sel_etm          0x00800000U // [23]
#define SRT_io_config_mask_sel_etm          23          
#define MSK_io_config_mask_sel_wdg          0x01000000U // [24]
#define SRT_io_config_mask_sel_wdg          24          
#define MSK_io_config_mask_sel_f0_pwm3_eclk 0x02000000U // [25]
#define SRT_io_config_mask_sel_f0_pwm3_eclk 25          
#define MSK_io_config_mask_sel_f1_pwm3_eclk 0x04000000U // [26]
#define SRT_io_config_mask_sel_f1_pwm3_eclk 26          
#define MSK_io_config_mask_sel_f3_pwm3_eclk 0x08000000U // [27]
#define SRT_io_config_mask_sel_f3_pwm3_eclk 27          
#define MSK_io_config_mask_sel_e_pwm2_eclk  0x10000000U // [28]
#define SRT_io_config_mask_sel_e_pwm2_eclk  28          
#define MSK_io_config_mask_if_select_n      0x80000000U // [31]
#define SRT_io_config_mask_if_select_n      31          

enum {
	BFW_io_config_mask_sel_lcd_bw       = 1, // [0]
	BFW_io_config_mask_sel_lcd_col      = 1, // [1]
	BFW_io_config_mask_sel_mii2         = 1, // [2]
	BFW_io_config_mask_sel_mii3         = 1, // [3]
	BFW_io_config_mask_sel_mii23        = 1, // [4]
	BFW_io_config_mask_sel_mii3pwm      = 1, // [5]
	BFW_io_config_mask_sel_fo0          = 1, // [6]
	BFW_io_config_mask_sel_fo1          = 1, // [7]
	BFW_io_config_mask_sel_f0_pwm3      = 1, // [8]
	BFW_io_config_mask_sel_f0_failure3  = 1, // [9]
	BFW_io_config_mask_sel_f1_pwm3      = 1, // [10]
	BFW_io_config_mask_sel_f1_rpwm3     = 1, // [11]
	BFW_io_config_mask_sel_f2_failure3  = 1, // [12]
	BFW_io_config_mask_sel_f2_rpwm3     = 1, // [13]
	BFW_io_config_mask_sel_f3_pwm3      = 1, // [14]
	BFW_io_config_mask_sel_e_pwm2       = 1, // [15]
	BFW_io_config_mask_sel_e_failure2   = 1, // [16]
	BFW_io_config_mask_sel_e_rpwm2      = 1, // [17]
	BFW_io_config_mask_sel_enc0         = 1, // [18]
	BFW_io_config_mask_sel_enc1         = 1, // [19]
	BFW_io_config_mask_sel_mp           = 1, // [20]
	BFW_io_config_mask_sel_led_mii2     = 1, // [21]
	BFW_io_config_mask_sel_led_mii3     = 1, // [22]
	BFW_io_config_mask_sel_etm          = 1, // [23]
	BFW_io_config_mask_sel_wdg          = 1, // [24]
	BFW_io_config_mask_sel_f0_pwm3_eclk = 1, // [25]
	BFW_io_config_mask_sel_f1_pwm3_eclk = 1, // [26]
	BFW_io_config_mask_sel_f3_pwm3_eclk = 1, // [27]
	BFW_io_config_mask_sel_e_pwm2_eclk  = 1, // [28]
	BFW_io_config_mask_reserved1        = 2, // [30:29]
	BFW_io_config_mask_if_select_n      = 1  // [31]
};

typedef struct IO_CONFIG_MASK_BIT_Ttag {
	unsigned int sel_lcd_bw       : BFW_io_config_mask_sel_lcd_bw;       // mask of select outputs for Black and White LCD Display 
	unsigned int sel_lcd_col      : BFW_io_config_mask_sel_lcd_col;      // mask of select outputs for Couloured LCD Display 
	unsigned int sel_mii2         : BFW_io_config_mask_sel_mii2;         // mask of select outputs for MII interface of xMAC2 
	unsigned int sel_mii3         : BFW_io_config_mask_sel_mii3;         // mask of select outputs for MII interface of xMAC2 
	unsigned int sel_mii23        : BFW_io_config_mask_sel_mii23;        // mask of select outputs for MDIO signals 
	unsigned int sel_mii3pwm      : BFW_io_config_mask_sel_mii3pwm;      // mask of select outputs for PWM output of xMAC3 
	unsigned int sel_fo0          : BFW_io_config_mask_sel_fo0;          // mask of select outputs for Fiber Optics of Phy0 
	unsigned int sel_fo1          : BFW_io_config_mask_sel_fo1;          // mask of select outputs for Fiber Optics of Phy1 
	unsigned int sel_f0_pwm3      : BFW_io_config_mask_sel_f0_pwm3;      // mask of select outputs for PWM-siganls at Fieldbus0 pads 
	unsigned int sel_f0_failure3  : BFW_io_config_mask_sel_f0_failure3;  // mask of select output  for PWM-failure at Fieldbus0 pads 
	unsigned int sel_f1_pwm3      : BFW_io_config_mask_sel_f1_pwm3;      // mask of select outputs for PWM-signals at Fieldbus1 pads 
	unsigned int sel_f1_rpwm3     : BFW_io_config_mask_sel_f1_rpwm3;     // mask of select output  for rpwm signal at Fieldbus1 pads 
	unsigned int sel_f2_failure3  : BFW_io_config_mask_sel_f2_failure3;  // mask of select output  for PWM-failure at Fieldbus2 pads 
	unsigned int sel_f2_rpwm3     : BFW_io_config_mask_sel_f2_rpwm3;     // mask of select output  for rpwm signal at Fieldbus2 pads 
	unsigned int sel_f3_pwm3      : BFW_io_config_mask_sel_f3_pwm3;      // mask of select outputs for PWM-signals at Fieldbus3 pads 
	unsigned int sel_e_pwm2       : BFW_io_config_mask_sel_e_pwm2;       // mask of select outputs for PWM-signals at PIO pads 
	unsigned int sel_e_failure2   : BFW_io_config_mask_sel_e_failure2;   // mask of select output  for PWM-failure at PIO pads 
	unsigned int sel_e_rpwm2      : BFW_io_config_mask_sel_e_rpwm2;      // mask of select output  for rpwm signal at PIO pads 
	unsigned int sel_enc0         : BFW_io_config_mask_sel_enc0;         // mask of select outputs for enc0 
	unsigned int sel_enc1         : BFW_io_config_mask_sel_enc1;         // mask of select outputs for enc1 
	unsigned int sel_mp           : BFW_io_config_mask_sel_mp;           // mask of select outputs for mp 
	unsigned int sel_led_mii2     : BFW_io_config_mask_sel_led_mii2;     // mask of select inputs for leds of mii2 
	unsigned int sel_led_mii3     : BFW_io_config_mask_sel_led_mii3;     // mask of select inputs for leds of mii3 
	unsigned int sel_etm          : BFW_io_config_mask_sel_etm;          // mask of select pins for ETM9 of ARM926 
	unsigned int sel_wdg          : BFW_io_config_mask_sel_wdg;          // mask of select pins for clk watchdoq / system watchdog 
	unsigned int sel_f0_pwm3_eclk : BFW_io_config_mask_sel_f0_pwm3_eclk; // mask of select outputs for PWM-siganls clocked by xmac3_eclk_in at Fieldbus0 pads 
	unsigned int sel_f1_pwm3_eclk : BFW_io_config_mask_sel_f1_pwm3_eclk; // mask of select outputs for PWM-signals clocked by xmac3_eclk_in at Fieldbus1 pads 
	unsigned int sel_f3_pwm3_eclk : BFW_io_config_mask_sel_f3_pwm3_eclk; // mask of select outputs for PWM-signals clocked by xmac3_eclk_in at Fieldbus3 pads 
	unsigned int sel_e_pwm2_eclk  : BFW_io_config_mask_sel_e_pwm2_eclk;  // mask of select outputs for PWM-signals clocked by xmac2_eclk_in at PIO pads 
	unsigned int reserved1        : BFW_io_config_mask_reserved1;        // reserved
	unsigned int if_select_n      : BFW_io_config_mask_if_select_n;      // mask of inverted HIF if-select signal: 
} IO_CONFIG_MASK_BIT_T;

typedef union {
	unsigned int         val;
	IO_CONFIG_MASK_BIT_T bf;
} IO_CONFIG_MASK_T;

// ---------------------------------------------------------------------
// Register reset_ctrl
// => Reset Control Register
//    register for reading the reset state of all resets, and to set two different Software Resets
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_reset_ctrl 0x0000000CU
#define Adr_reset_ctrl     0x0010000CU

#define MSK_reset_ctrl_RES_IN           0x00000001U // [0]
#define SRT_reset_ctrl_RES_IN           0           
#define MSK_reset_ctrl_RES_WDOG         0x00000002U // [1]
#define SRT_reset_ctrl_RES_WDOG         1           
#define MSK_reset_ctrl_RES_HOST         0x00000004U // [2]
#define SRT_reset_ctrl_RES_HOST         2           
#define MSK_reset_ctrl_RES_FIRMWARE     0x00000008U // [3]
#define SRT_reset_ctrl_RES_FIRMWARE     3           
#define MSK_reset_ctrl_RES_XPEC0        0x00000010U // [4]
#define SRT_reset_ctrl_RES_XPEC0        4           
#define MSK_reset_ctrl_RES_XPEC1        0x00000020U // [5]
#define SRT_reset_ctrl_RES_XPEC1        5           
#define MSK_reset_ctrl_RES_XPEC2        0x00000040U // [6]
#define SRT_reset_ctrl_RES_XPEC2        6           
#define MSK_reset_ctrl_RES_XPEC3        0x00000080U // [7]
#define SRT_reset_ctrl_RES_XPEC3        7           
#define MSK_reset_ctrl_DIS_RES_XPEC0    0x00010000U // [16]
#define SRT_reset_ctrl_DIS_RES_XPEC0    16          
#define MSK_reset_ctrl_DIS_RES_XPEC1    0x00020000U // [17]
#define SRT_reset_ctrl_DIS_RES_XPEC1    17          
#define MSK_reset_ctrl_DIS_RES_XPEC2    0x00040000U // [18]
#define SRT_reset_ctrl_DIS_RES_XPEC2    18          
#define MSK_reset_ctrl_DIS_RES_XPEC3    0x00080000U // [19]
#define SRT_reset_ctrl_DIS_RES_XPEC3    19          
#define MSK_reset_ctrl_FIRMWARE_STATUS0 0x00100000U // [20]
#define SRT_reset_ctrl_FIRMWARE_STATUS0 20          
#define MSK_reset_ctrl_FIRMWARE_STATUS1 0x00200000U // [21]
#define SRT_reset_ctrl_FIRMWARE_STATUS1 21          
#define MSK_reset_ctrl_FIRMWARE_STATUS2 0x00400000U // [22]
#define SRT_reset_ctrl_FIRMWARE_STATUS2 22          
#define MSK_reset_ctrl_FIRMWARE_STATUS3 0x00800000U // [23]
#define SRT_reset_ctrl_FIRMWARE_STATUS3 23          
#define MSK_reset_ctrl_RES_REQ_FIRMWARE 0x01000000U // [24]
#define SRT_reset_ctrl_RES_REQ_FIRMWARE 24          
#define MSK_reset_ctrl_RES_REQ_OUT      0x02000000U // [25]
#define SRT_reset_ctrl_RES_REQ_OUT      25          
#define MSK_reset_ctrl_EN_RES_REQ_OUT   0x04000000U // [26]
#define SRT_reset_ctrl_EN_RES_REQ_OUT   26          

enum {
	BFW_reset_ctrl_RES_IN           = 1, // [0]
	BFW_reset_ctrl_RES_WDOG         = 1, // [1]
	BFW_reset_ctrl_RES_HOST         = 1, // [2]
	BFW_reset_ctrl_RES_FIRMWARE     = 1, // [3]
	BFW_reset_ctrl_RES_XPEC0        = 1, // [4]
	BFW_reset_ctrl_RES_XPEC1        = 1, // [5]
	BFW_reset_ctrl_RES_XPEC2        = 1, // [6]
	BFW_reset_ctrl_RES_XPEC3        = 1, // [7]
	BFW_reset_ctrl_reserved1        = 8, // [15:8]
	BFW_reset_ctrl_DIS_RES_XPEC0    = 1, // [16]
	BFW_reset_ctrl_DIS_RES_XPEC1    = 1, // [17]
	BFW_reset_ctrl_DIS_RES_XPEC2    = 1, // [18]
	BFW_reset_ctrl_DIS_RES_XPEC3    = 1, // [19]
	BFW_reset_ctrl_FIRMWARE_STATUS0 = 1, // [20]
	BFW_reset_ctrl_FIRMWARE_STATUS1 = 1, // [21]
	BFW_reset_ctrl_FIRMWARE_STATUS2 = 1, // [22]
	BFW_reset_ctrl_FIRMWARE_STATUS3 = 1, // [23]
	BFW_reset_ctrl_RES_REQ_FIRMWARE = 1, // [24]
	BFW_reset_ctrl_RES_REQ_OUT      = 1, // [25]
	BFW_reset_ctrl_EN_RES_REQ_OUT   = 1, // [26]
	BFW_reset_ctrl_reserved2        = 5  // [31:27]
};

typedef struct RESET_CTRL_BIT_Ttag {
	unsigned int RES_IN           : BFW_reset_ctrl_RES_IN;           // reset from external pin, after reading write back a "1" to clear the status bit               
	unsigned int RES_WDOG         : BFW_reset_ctrl_RES_WDOG;         // reset from System WDG, after reading write back a "1" to clear the status bit                 
	unsigned int RES_HOST         : BFW_reset_ctrl_RES_HOST;         // reset from Hostinterface, after reading write back a "1" to clear the status bit              
	unsigned int RES_FIRMWARE     : BFW_reset_ctrl_RES_FIRMWARE;     // reset from FIRMWARE (software reset), after reading write back a "1" to clear the status bit  
	unsigned int RES_XPEC0        : BFW_reset_ctrl_RES_XPEC0;        // reset from RES_XPEC0, after reading write back a "1" to clear the status bit                  
	unsigned int RES_XPEC1        : BFW_reset_ctrl_RES_XPEC1;        // reset from RES_XPEC1, after reading write back a "1" to clear the status bit                  
	unsigned int RES_XPEC2        : BFW_reset_ctrl_RES_XPEC2;        // reset from RES_XPEC2, after reading write back a "1" to clear the status bit                  
	unsigned int RES_XPEC3        : BFW_reset_ctrl_RES_XPEC3;        // reset from RES_XPEC3, after reading write back a "1" to clear the status bit                  
	unsigned int reserved1        : BFW_reset_ctrl_reserved1;        // reserved
	unsigned int DIS_RES_XPEC0    : BFW_reset_ctrl_DIS_RES_XPEC0;    // reset from RES_XPEC0 is disabled (read only)     
	unsigned int DIS_RES_XPEC1    : BFW_reset_ctrl_DIS_RES_XPEC1;    // reset from RES_XPEC1 is disabled (read only)     
	unsigned int DIS_RES_XPEC2    : BFW_reset_ctrl_DIS_RES_XPEC2;    // reset from RES_XPEC2 is disabled (read only)     
	unsigned int DIS_RES_XPEC3    : BFW_reset_ctrl_DIS_RES_XPEC3;    // reset from RES_XPEC3 is disabled (read only)     
	unsigned int FIRMWARE_STATUS0 : BFW_reset_ctrl_FIRMWARE_STATUS0; // readable and writable bit to save the firmware status; only a PowerOn Reset will clear this bit 
	unsigned int FIRMWARE_STATUS1 : BFW_reset_ctrl_FIRMWARE_STATUS1; // readable and writable bit to save the firmware status; only a PowerOn Reset will clear this bit 
	unsigned int FIRMWARE_STATUS2 : BFW_reset_ctrl_FIRMWARE_STATUS2; // readable and writable bit to save the firmware status; only a PowerOn Reset will clear this bit 
	unsigned int FIRMWARE_STATUS3 : BFW_reset_ctrl_FIRMWARE_STATUS3; // readable and writable bit to save the firmware status; only a PowerOn Reset will clear this bit 
	unsigned int RES_REQ_FIRMWARE : BFW_reset_ctrl_RES_REQ_FIRMWARE; // (software reset) writing a "1" sets the reset request to reset the hole system (write only)   
	unsigned int RES_REQ_OUT      : BFW_reset_ctrl_RES_REQ_OUT;      // (software reset) programmable reset sets the reset on the external pin                        
	unsigned int EN_RES_REQ_OUT   : BFW_reset_ctrl_EN_RES_REQ_OUT;   // this bit enables the programmable reset       
	unsigned int reserved2        : BFW_reset_ctrl_reserved2;        // reserved
} RESET_CTRL_BIT_T;

typedef union {
	unsigned int     val;
	RESET_CTRL_BIT_T bf;
} RESET_CTRL_T;

// ---------------------------------------------------------------------
// Register phy_control
// => Phy Controll Register
//    This register contains all static connectors of the NEC Ethernet Phy.
//    Usually the Phy read these values only during reset, which can be controlled by Bit31.
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
//    In total the programming sequence should be:
//    a: read access key, write access key, write new value with bit phy_reset=1
//    b: wait for synchronization(~16cc) and proper reset of phy(~40cc ? better check NEC document)
//    c: read access key, write access key, write new value with bit phy_reset=0
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_phy_control 0x00000010U
#define Adr_phy_control     0x00100010U

#define MSK_phy_control_phy_address      0x0000000fU // [3:0]
#define SRT_phy_control_phy_address      0           
#define MSK_phy_control_phy1_mode        0x00000070U // [6:4]
#define SRT_phy_control_phy1_mode        4           
#define MSK_phy_control_phy1_fxmode      0x00000080U // [7]
#define SRT_phy_control_phy1_fxmode      7           
#define MSK_phy_control_phy1_automdix    0x00000100U // [8]
#define SRT_phy_control_phy1_automdix    8           
#define MSK_phy_control_phy1_np_msg_code 0x00000e00U // [11:9]
#define SRT_phy_control_phy1_np_msg_code 9           
#define MSK_phy_control_phy1_enable      0x00001000U // [12]
#define SRT_phy_control_phy1_enable      12          
#define MSK_phy_control_phy2_mode        0x0000e000U // [15:13]
#define SRT_phy_control_phy2_mode        13          
#define MSK_phy_control_phy2_fxmode      0x00010000U // [16]
#define SRT_phy_control_phy2_fxmode      16          
#define MSK_phy_control_phy2_automdix    0x00020000U // [17]
#define SRT_phy_control_phy2_automdix    17          
#define MSK_phy_control_phy2_np_msg_code 0x001c0000U // [20:18]
#define SRT_phy_control_phy2_np_msg_code 18          
#define MSK_phy_control_phy2_enable      0x00200000U // [21]
#define SRT_phy_control_phy2_enable      21          
#define MSK_phy_control_phy_clk_xlatin   0x20000000U // [29]
#define SRT_phy_control_phy_clk_xlatin   29          
#define MSK_phy_control_phy_sim_byp      0x40000000U // [30]
#define SRT_phy_control_phy_sim_byp      30          
#define MSK_phy_control_phy_reset        0x80000000U // [31]
#define SRT_phy_control_phy_reset        31          

enum {
	BFW_phy_control_phy_address      = 4, // [3:0]
	BFW_phy_control_phy1_mode        = 3, // [6:4]
	BFW_phy_control_phy1_fxmode      = 1, // [7]
	BFW_phy_control_phy1_automdix    = 1, // [8]
	BFW_phy_control_phy1_np_msg_code = 3, // [11:9]
	BFW_phy_control_phy1_enable      = 1, // [12]
	BFW_phy_control_phy2_mode        = 3, // [15:13]
	BFW_phy_control_phy2_fxmode      = 1, // [16]
	BFW_phy_control_phy2_automdix    = 1, // [17]
	BFW_phy_control_phy2_np_msg_code = 3, // [20:18]
	BFW_phy_control_phy2_enable      = 1, // [21]
	BFW_phy_control_reserved1        = 7, // [28:22]
	BFW_phy_control_phy_clk_xlatin   = 1, // [29]
	BFW_phy_control_phy_sim_byp      = 1, // [30]
	BFW_phy_control_phy_reset        = 1  // [31]
};

typedef struct PHY_CONTROL_BIT_Ttag {
	unsigned int phy_address      : BFW_phy_control_phy_address;      // Bits 4:1 of phy mdio-address. 
	                                                        // Bit0 defines 1st or 2nd internal phy
	unsigned int phy1_mode        : BFW_phy_control_phy1_mode;        // Phy1 Mode: 
	                                                        // 000: 10BASE-T Half Duplex, Auto Negotiation disabled.
	                                                        // 001: 10BASE-T Full Duplex. Auto-Negotiation disabled.
	                                                        // 010: 100BASE-TX/FX Half Duplex. Auto-Negotiation disabled. CRS is active during Transmit & Receive.
	                                                        // 011: 100BASE-TX/FX Full Duplex. Auto-Negotiation disabled. CRS is active during Receive.
	                                                        // 100: 100BASE-TX Half Duplex is advertised. Auto-Negotiation enabled. CRS is active during Transmit & Receive.
	                                                        // 101: Repeater mode. Auto-Negotiation enabled. 100BASETX Half Duplex is advertised. CRS is active during Receive.
	                                                        // 110: Power Down mode. In this mode the PHY wake-up in Power-Down mode.
	                                                        // 111: All capable. Auto-Negotiation enabled. AutoMDIX enabled.
	unsigned int phy1_fxmode      : BFW_phy_control_phy1_fxmode;      // Phy1 100BASE-FX mode (phy_mode must be 01x) 
	unsigned int phy1_automdix    : BFW_phy_control_phy1_automdix;    // Phy1 Enables AutoMDIX state machine 
	unsigned int phy1_np_msg_code : BFW_phy_control_phy1_np_msg_code; // Phy1 Next Page Message Code (auto negotiation) 
	unsigned int phy1_enable      : BFW_phy_control_phy1_enable;      // Phy1 enable 
	unsigned int phy2_mode        : BFW_phy_control_phy2_mode;        // Phy2 Mode: 
	                                                        // 000: 10BASE-T Half Duplex, Auto Negotiation disabled.
	                                                        // 001: 10BASE-T Full Duplex. Auto-Negotiation disabled.
	                                                        // 010: 100BASE-TX/FX Half Duplex. Auto-Negotiation disabled. CRS is active during Transmit & Receive.
	                                                        // 011: 100BASE-TX/FX Full Duplex. Auto-Negotiation disabled. CRS is active during Receive.
	                                                        // 100: 100BASE-TX Half Duplex is advertised. Auto-Negotiation enabled. CRS is active during Transmit & Receive.
	                                                        // 101: Repeater mode. Auto-Negotiation enabled. 100BASETX Half Duplex is advertised. CRS is active during Receive.
	                                                        // 110: Power Down mode. In this mode the PHY wake-up in Power-Down mode.
	                                                        // 111: All capable. Auto-Negotiation enabled. AutoMDIX enabled.
	unsigned int phy2_fxmode      : BFW_phy_control_phy2_fxmode;      // Phy2 100BASE-FX mode (phy_mode must be 01x) 
	unsigned int phy2_automdix    : BFW_phy_control_phy2_automdix;    // Phy2 Enables AutoMDIX state machine 
	unsigned int phy2_np_msg_code : BFW_phy_control_phy2_np_msg_code; // Phy2 Next Page Message Code (auto negotiation) 
	unsigned int phy2_enable      : BFW_phy_control_phy2_enable;      // Phy2 enable 
	unsigned int reserved1        : BFW_phy_control_reserved1;        // reserved
	unsigned int phy_clk_xlatin   : BFW_phy_control_phy_clk_xlatin;   // 1: use the external oscillator input (25MHz) to clock ethernet Phy # defautl 1
	                                                        // 0: use phyclk_rate_mul_add (further down) to clock ethernet Phy 
	unsigned int phy_sim_byp      : BFW_phy_control_phy_sim_byp;      // Phy Power up Bypass: 0=normal | 1=bypass, # defautl 0
	                                                        // only used for simulation issues,
	                                                        // for further information ask Alexander Ockert (+49 6190 9907 72)
	unsigned int phy_reset        : BFW_phy_control_phy_reset;        // Hardware reset for PHY: 1=reset 
} PHY_CONTROL_BIT_T;

typedef union {
	unsigned int      val;
	PHY_CONTROL_BIT_T bf;
} PHY_CONTROL_T;

// ---------------------------------------------------------------------
// Register armclk_rate_mul_add
// => Rate Multiplier Add Value
//    This register is lockable by netX locking algorithm. It will be only reset on Power on, not on normal system nres.
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_armclk_rate_mul_add 0x00000014U
#define Adr_armclk_rate_mul_add     0x00100014U

#define MSK_armclk_rate_mul_add_armclk_rate_mul_add 0x000001ffU // [8:0]
#define SRT_armclk_rate_mul_add_armclk_rate_mul_add 0           

enum {
	BFW_armclk_rate_mul_add_armclk_rate_mul_add = 9,  // [8:0]
	BFW_armclk_rate_mul_add_reserved1           = 23  // [31:9]
};

typedef struct ARMCLK_RATE_MUL_ADD_BIT_Ttag {
	unsigned int armclk_rate_mul_add : BFW_armclk_rate_mul_add_armclk_rate_mul_add; // This value is added each clk400 cycle to armclk_rate_mul to generate armclk. 
	                                                        // Change value according to formula: armclk_rate_mul_add = [freq in MHz] / 400 * 2^9
	unsigned int reserved1           : BFW_armclk_rate_mul_add_reserved1;           // reserved
} ARMCLK_RATE_MUL_ADD_BIT_T;

typedef union {
	unsigned int              val;
	ARMCLK_RATE_MUL_ADD_BIT_T bf;
} ARMCLK_RATE_MUL_ADD_T;

// ---------------------------------------------------------------------
// Register usbclk_rate_mul_add
// => Rate Multiplier Add Value
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_usbclk_rate_mul_add 0x00000018U
#define Adr_usbclk_rate_mul_add     0x00100018U

#define MSK_usbclk_rate_mul_add_unused              0x0000ffffU // [15:0]
#define SRT_usbclk_rate_mul_add_unused              0           
#define MSK_usbclk_rate_mul_add_usbclk_rate_mul_add 0xffff0000U // [31:16]
#define SRT_usbclk_rate_mul_add_usbclk_rate_mul_add 16          

enum {
	BFW_usbclk_rate_mul_add_unused              = 16, // [15:0]
	BFW_usbclk_rate_mul_add_usbclk_rate_mul_add = 16  // [31:16]
};

typedef struct USBCLK_RATE_MUL_ADD_BIT_Ttag {
	unsigned int unused              : BFW_usbclk_rate_mul_add_unused;              // unused 
	unsigned int usbclk_rate_mul_add : BFW_usbclk_rate_mul_add_usbclk_rate_mul_add; // This value is added each clk400 cycle to usbclk_rate_mul to generate usbclk. 
	                                                        // Change value according to formula: usbclk_rate_mul_add = [freq in MHz] / 400 * 2^16
} USBCLK_RATE_MUL_ADD_BIT_T;

typedef union {
	unsigned int              val;
	USBCLK_RATE_MUL_ADD_BIT_T bf;
} USBCLK_RATE_MUL_ADD_T;

// ---------------------------------------------------------------------
// Register adcclk_rate_mul_add
// => Rate Multiplier Add Value
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_adcclk_rate_mul_add 0x0000001CU
#define Adr_adcclk_rate_mul_add     0x0010001CU

#define MSK_adcclk_rate_mul_add_adcclk_rate_mul_add 0x7fffffffU // [30:0]
#define SRT_adcclk_rate_mul_add_adcclk_rate_mul_add 0           

enum {
	BFW_adcclk_rate_mul_add_adcclk_rate_mul_add = 31, // [30:0]
	BFW_adcclk_rate_mul_add_reserved1           = 1   // [31]
};

typedef struct ADCCLK_RATE_MUL_ADD_BIT_Ttag {
	unsigned int adcclk_rate_mul_add : BFW_adcclk_rate_mul_add_adcclk_rate_mul_add; // This value is added each clk200 cycle to adcclk_rate_mul to generate adcclk. 
	                                                        // Change value according to formula: adcclk_rate_mul_add = [freq in MHz] / 200 * 2^31
	unsigned int reserved1           : BFW_adcclk_rate_mul_add_reserved1;           // reserved
} ADCCLK_RATE_MUL_ADD_BIT_T;

typedef union {
	unsigned int              val;
	ADCCLK_RATE_MUL_ADD_BIT_T bf;
} ADCCLK_RATE_MUL_ADD_T;

// ---------------------------------------------------------------------
// Register phyclk_rate_mul_add
// => Rate Multiplier Add Value
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_phyclk_rate_mul_add 0x00000020U
#define Adr_phyclk_rate_mul_add     0x00100020U

#define MSK_phyclk_rate_mul_add_phyclk_rate_mul_add 0x7fffffffU // [30:0]
#define SRT_phyclk_rate_mul_add_phyclk_rate_mul_add 0           

enum {
	BFW_phyclk_rate_mul_add_phyclk_rate_mul_add = 31, // [30:0]
	BFW_phyclk_rate_mul_add_reserved1           = 1   // [31]
};

typedef struct PHYCLK_RATE_MUL_ADD_BIT_Ttag {
	unsigned int phyclk_rate_mul_add : BFW_phyclk_rate_mul_add_phyclk_rate_mul_add; // This value is added each clk200 cycle to phyclk_rate_mul to generate phyclk. 
	                                                        // Change value according to formula: phyclk_rate_mul_add = [freq in MHz] / 200 * 2^31
	unsigned int reserved1           : BFW_phyclk_rate_mul_add_reserved1;           // reserved
} PHYCLK_RATE_MUL_ADD_BIT_T;

typedef union {
	unsigned int              val;
	PHYCLK_RATE_MUL_ADD_BIT_T bf;
} PHYCLK_RATE_MUL_ADD_T;

// ---------------------------------------------------------------------
// Register clock_enable
// => Global Clock Enable register
//    Allows to disable modules completely for power saving purpose.
//    Changes will only have effect if according bit in clock_enable_mask-register is set.
//    Bits will be reset according to the clock_enable_mask-register register if a new mask is correctly written (netX locking algorithm).
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_clock_enable 0x00000024U
#define Adr_clock_enable     0x00100024U

#define MSK_clock_enable_xpec0 0x00000001U // [0]
#define SRT_clock_enable_xpec0 0           
#define MSK_clock_enable_xpec1 0x00000002U // [1]
#define SRT_clock_enable_xpec1 1           
#define MSK_clock_enable_xpec2 0x00000004U // [2]
#define SRT_clock_enable_xpec2 2           
#define MSK_clock_enable_xpec3 0x00000008U // [3]
#define SRT_clock_enable_xpec3 3           
#define MSK_clock_enable_xmac0 0x00000010U // [4]
#define SRT_clock_enable_xmac0 4           
#define MSK_clock_enable_xmac1 0x00000020U // [5]
#define SRT_clock_enable_xmac1 5           
#define MSK_clock_enable_xmac2 0x00000040U // [6]
#define SRT_clock_enable_xmac2 6           
#define MSK_clock_enable_xmac3 0x00000080U // [7]
#define SRT_clock_enable_xmac3 7           
#define MSK_clock_enable_lcd   0x00000100U // [8]
#define SRT_clock_enable_lcd   8           
#define MSK_clock_enable_hif   0x00000200U // [9]
#define SRT_clock_enable_hif   9           

enum {
	BFW_clock_enable_xpec0     = 1,  // [0]
	BFW_clock_enable_xpec1     = 1,  // [1]
	BFW_clock_enable_xpec2     = 1,  // [2]
	BFW_clock_enable_xpec3     = 1,  // [3]
	BFW_clock_enable_xmac0     = 1,  // [4]
	BFW_clock_enable_xmac1     = 1,  // [5]
	BFW_clock_enable_xmac2     = 1,  // [6]
	BFW_clock_enable_xmac3     = 1,  // [7]
	BFW_clock_enable_lcd       = 1,  // [8]
	BFW_clock_enable_hif       = 1,  // [9]
	BFW_clock_enable_reserved1 = 22  // [31:10]
};

typedef struct CLOCK_ENABLE_BIT_Ttag {
	unsigned int xpec0     : BFW_clock_enable_xpec0;     // enables clock for xPEC0 
	unsigned int xpec1     : BFW_clock_enable_xpec1;     // enables clock for xPEC1 
	unsigned int xpec2     : BFW_clock_enable_xpec2;     // enables clock for xPEC2 
	unsigned int xpec3     : BFW_clock_enable_xpec3;     // enables clock for xPEC3 
	unsigned int xmac0     : BFW_clock_enable_xmac0;     // enables clock for xMAC0 
	unsigned int xmac1     : BFW_clock_enable_xmac1;     // enables clock for xMAC1 
	unsigned int xmac2     : BFW_clock_enable_xmac2;     // enables clock for xMAC2 
	unsigned int xmac3     : BFW_clock_enable_xmac3;     // enables clock for xMAC3 
	unsigned int lcd       : BFW_clock_enable_lcd;       // enables clock for LCD Ctrl 
	unsigned int hif       : BFW_clock_enable_hif;       // enables clock for HIF 
	unsigned int reserved1 : BFW_clock_enable_reserved1; // reserved
} CLOCK_ENABLE_BIT_T;

typedef union {
	unsigned int       val;
	CLOCK_ENABLE_BIT_T bf;
} CLOCK_ENABLE_T;

// ---------------------------------------------------------------------
// Register clock_enable_mask
// => Global Clock Enable register
//    allows to disable modules for different netX-versions 
//    This register is lockable by netX locking algorithm. It will be only reset on Power on, not on normal system nres.
//    The clock_enable-register will change according to this register if a new mask is correctly written (netX locking algorithm).
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_clock_enable_mask 0x00000028U
#define Adr_clock_enable_mask     0x00100028U

#define MSK_clock_enable_mask_xpec0 0x00000001U // [0]
#define SRT_clock_enable_mask_xpec0 0           
#define MSK_clock_enable_mask_xpec1 0x00000002U // [1]
#define SRT_clock_enable_mask_xpec1 1           
#define MSK_clock_enable_mask_xpec2 0x00000004U // [2]
#define SRT_clock_enable_mask_xpec2 2           
#define MSK_clock_enable_mask_xpec3 0x00000008U // [3]
#define SRT_clock_enable_mask_xpec3 3           
#define MSK_clock_enable_mask_xmac0 0x00000010U // [4]
#define SRT_clock_enable_mask_xmac0 4           
#define MSK_clock_enable_mask_xmac1 0x00000020U // [5]
#define SRT_clock_enable_mask_xmac1 5           
#define MSK_clock_enable_mask_xmac2 0x00000040U // [6]
#define SRT_clock_enable_mask_xmac2 6           
#define MSK_clock_enable_mask_xmac3 0x00000080U // [7]
#define SRT_clock_enable_mask_xmac3 7           
#define MSK_clock_enable_mask_lcd   0x00000100U // [8]
#define SRT_clock_enable_mask_lcd   8           
#define MSK_clock_enable_mask_hif   0x00000200U // [9]
#define SRT_clock_enable_mask_hif   9           

enum {
	BFW_clock_enable_mask_xpec0     = 1,  // [0]
	BFW_clock_enable_mask_xpec1     = 1,  // [1]
	BFW_clock_enable_mask_xpec2     = 1,  // [2]
	BFW_clock_enable_mask_xpec3     = 1,  // [3]
	BFW_clock_enable_mask_xmac0     = 1,  // [4]
	BFW_clock_enable_mask_xmac1     = 1,  // [5]
	BFW_clock_enable_mask_xmac2     = 1,  // [6]
	BFW_clock_enable_mask_xmac3     = 1,  // [7]
	BFW_clock_enable_mask_lcd       = 1,  // [8]
	BFW_clock_enable_mask_hif       = 1,  // [9]
	BFW_clock_enable_mask_reserved1 = 22  // [31:10]
};

typedef struct CLOCK_ENABLE_MASK_BIT_Ttag {
	unsigned int xpec0     : BFW_clock_enable_mask_xpec0;     // 0: xPEC0 is disabled  1: clock can be enabled/disabled by clock_enable-register for xPEC0 
	unsigned int xpec1     : BFW_clock_enable_mask_xpec1;     // 0: xPEC1 is disabled  1: clock can be enabled/disabled by clock_enable-register for xPEC1 
	unsigned int xpec2     : BFW_clock_enable_mask_xpec2;     // 0: xPEC2 is disabled  1: clock can be enabled/disabled by clock_enable-register for xPEC2 
	unsigned int xpec3     : BFW_clock_enable_mask_xpec3;     // 0: xPEC3 is disabled  1: clock can be enabled/disabled by clock_enable-register for xPEC3 
	unsigned int xmac0     : BFW_clock_enable_mask_xmac0;     // 0: xMAC0 is disabled  1: clock can be enabled/disabled by clock_enable-register for xMAC0 
	unsigned int xmac1     : BFW_clock_enable_mask_xmac1;     // 0: xMAC1 is disabled  1: clock can be enabled/disabled by clock_enable-register for xMAC1 
	unsigned int xmac2     : BFW_clock_enable_mask_xmac2;     // 0: xMAC2 is disabled  1: clock can be enabled/disabled by clock_enable-register for xMAC2 
	unsigned int xmac3     : BFW_clock_enable_mask_xmac3;     // 0: xMAC3 is disabled  1: clock can be enabled/disabled by clock_enable-register for xMAC3 
	unsigned int lcd       : BFW_clock_enable_mask_lcd;       // 0: LCD Ctrl is disabled  1: clock can be enabled/disabled by clock_enable-register for LCD Ctrl 
	unsigned int hif       : BFW_clock_enable_mask_hif;       // 0: HIF is disabled  1: clock can be enabled/disabled by clock_enable-register for HIF 
	unsigned int reserved1 : BFW_clock_enable_mask_reserved1; // reserved
} CLOCK_ENABLE_MASK_BIT_T;

typedef union {
	unsigned int            val;
	CLOCK_ENABLE_MASK_BIT_T bf;
} CLOCK_ENABLE_MASK_T;

// ---------------------------------------------------------------------
// Register misc_asic_ctrl
// => miscellaneous ASIC controll register
//    This register is lockable by netX locking algorithm. It will be only reset on Power on, not on normal system nres.
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_misc_asic_ctrl 0x0000002CU
#define Adr_misc_asic_ctrl     0x0010002CU

#define MSK_misc_asic_ctrl_arm_dbgen     0x00000001U // [0]
#define SRT_misc_asic_ctrl_arm_dbgen     0           
#define MSK_misc_asic_ctrl_arm_dtcm_ws   0x00000002U // [1]
#define SRT_misc_asic_ctrl_arm_dtcm_ws   1           
#define MSK_misc_asic_ctrl_arm_extmem_ws 0x00000004U // [2]
#define SRT_misc_asic_ctrl_arm_extmem_ws 2           

enum {
	BFW_misc_asic_ctrl_arm_dbgen     = 1,  // [0]
	BFW_misc_asic_ctrl_arm_dtcm_ws   = 1,  // [1]
	BFW_misc_asic_ctrl_arm_extmem_ws = 1,  // [2]
	BFW_misc_asic_ctrl_reserved1     = 29  // [31:3]
};

typedef struct MISC_ASIC_CTRL_BIT_Ttag {
	unsigned int arm_dbgen     : BFW_misc_asic_ctrl_arm_dbgen;     // 1: ARM debug features are enabled 
	                                                        // 0: ARM debug features are disabled
	unsigned int arm_dtcm_ws   : BFW_misc_asic_ctrl_arm_dtcm_ws;   // 1: ARM data TCM runs with 1 ARM-clock Waitstate  
	                                                        // 0: ARM data TCM runs with 0 ARM-clock Waitstate
	unsigned int arm_extmem_ws : BFW_misc_asic_ctrl_arm_extmem_ws; // 1: 1 additional arbiter Waitstate for ARM (instr. and data) accesses to addr_extmemory_ahbls7 - chipselect area 
	                                                        // 0: 0 additional arbiter Waitstate for ARM (instr. and data) accesses to addr_extmemory_ahbls7 - chipselect area # default 10: ARM data TCM runs with 0 ARM-clock Waitstate
	unsigned int reserved1     : BFW_misc_asic_ctrl_reserved1;     // reserved
} MISC_ASIC_CTRL_BIT_T;

typedef union {
	unsigned int         val;
	MISC_ASIC_CTRL_BIT_T bf;
} MISC_ASIC_CTRL_T;

// ---------------------------------------------------------------------
// Register exmem_priority_lock
// => Global exmemory priority controlling mask register
//    Set bits to lock the registers extmem_prio_timslot_ctrl and extmem_prio_accesstime_ctrl
//    in address area extmem_priority_ctrl.
//    allows to disable modules completely for power saving reasons
//    This register is lockable by netX locking algorithm. It will be only reset on Power on, not on normal system nres.
//    Changing this register is only possible by the following sequence:
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_exmem_priority_lock 0x00000030U
#define Adr_exmem_priority_lock     0x00100030U

#define MSK_exmem_priority_lock_lock_HIF_priority  0x00000001U // [0]
#define SRT_exmem_priority_lock_lock_HIF_priority  0           
#define MSK_exmem_priority_lock_lock_XC_priority   0x00000002U // [1]
#define SRT_exmem_priority_lock_lock_XC_priority   1           
#define MSK_exmem_priority_lock_lock_LCD_priority  0x00000004U // [2]
#define SRT_exmem_priority_lock_lock_LCD_priority  2           
#define MSK_exmem_priority_lock_lock_ARMI_priority 0x00000008U // [3]
#define SRT_exmem_priority_lock_lock_ARMI_priority 3           
#define MSK_exmem_priority_lock_lock_ARMD_priority 0x00000010U // [4]
#define SRT_exmem_priority_lock_lock_ARMD_priority 4           

enum {
	BFW_exmem_priority_lock_lock_HIF_priority  = 1,  // [0]
	BFW_exmem_priority_lock_lock_XC_priority   = 1,  // [1]
	BFW_exmem_priority_lock_lock_LCD_priority  = 1,  // [2]
	BFW_exmem_priority_lock_lock_ARMI_priority = 1,  // [3]
	BFW_exmem_priority_lock_lock_ARMD_priority = 1,  // [4]
	BFW_exmem_priority_lock_reserved1          = 27  // [31:5]
};

typedef struct EXMEM_PRIORITY_LOCK_BIT_Ttag {
	unsigned int lock_HIF_priority  : BFW_exmem_priority_lock_lock_HIF_priority;  // 1 HIF settings in registers extmem_prio_timslot_ctrl and extmem_prio_accesstime_ctrl will be locked 
	unsigned int lock_XC_priority   : BFW_exmem_priority_lock_lock_XC_priority;   // 1 XC settings in registers extmem_prio_timslot_ctrl and extmem_prio_accesstime_ctrl will be locked 
	unsigned int lock_LCD_priority  : BFW_exmem_priority_lock_lock_LCD_priority;  // 1 LCD settings in registers extmem_prio_timslot_ctrl and extmem_prio_accesstime_ctrl will be locked 
	unsigned int lock_ARMI_priority : BFW_exmem_priority_lock_lock_ARMI_priority; // 1 ARMI settings in registers extmem_prio_timslot_ctrl and extmem_prio_accesstime_ctrl will be locked 
	unsigned int lock_ARMD_priority : BFW_exmem_priority_lock_lock_ARMD_priority; // 1 ARMD settings in registers extmem_prio_timslot_ctrl and extmem_prio_accesstime_ctrl will be locked 
	unsigned int reserved1          : BFW_exmem_priority_lock_reserved1;          // reserved
} EXMEM_PRIORITY_LOCK_BIT_T;

typedef union {
	unsigned int              val;
	EXMEM_PRIORITY_LOCK_BIT_T bf;
} EXMEM_PRIORITY_LOCK_T;

// ---------------------------------------------------------------------
// Register netx_version
// => netX Version register
//    lockable by netX locking algorithm
//    1.: read out access key
//    2.: write back access key
//    3.: write desired value to this register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_netx_version 0x00000034U
#define Adr_netx_version     0x00100034U

#define MSK_netx_version_netx_version 0xffffffffU // [31:0]
#define SRT_netx_version_netx_version 0           

enum {
	BFW_netx_version_netx_version = 32  // [31:0]
};

typedef struct NETX_VERSION_BIT_Ttag {
	unsigned int netx_version : BFW_netx_version_netx_version; // netX Version number 
} NETX_VERSION_BIT_T;

typedef union {
	unsigned int       val;
	NETX_VERSION_BIT_T bf;
} NETX_VERSION_T;

// ---------------------------------------------------------------------
// Register asic_ctrl_access_key
// => ASIC Controll Access Key Register
//    Writing to any register in the asic_ctrl - address area is only possible after
//    setting the correct key here to avoid unmeant changes eg. by crashed software.
//    ----
//    Changing a controll register in the asic_ctrl - address area is only possible by the following sequence:
//    1.: Read out the access key from this register.
//    2.: Write back this access key to this register.
//    3.: Write desired value to the controll register.
//    ----
//    The access key will become unvalid after each access to any register in the asic_ctrl - address area
//    and has to be read out and set again for sequent accesses.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_asic_ctrl_access_key 0x00000070U
#define Adr_asic_ctrl_access_key     0x00100070U

#define MSK_asic_ctrl_access_key_access_key 0x0000ffffU // [15:0]
#define SRT_asic_ctrl_access_key_access_key 0           

enum {
	BFW_asic_ctrl_access_key_access_key = 16, // [15:0]
	BFW_asic_ctrl_access_key_reserved1  = 16  // [31:16]
};

typedef struct ASIC_CTRL_ACCESS_KEY_BIT_Ttag {
	unsigned int access_key : BFW_asic_ctrl_access_key_access_key; // access key for next write access. 
	unsigned int reserved1  : BFW_asic_ctrl_access_key_reserved1;  // reserved
} ASIC_CTRL_ACCESS_KEY_BIT_T;

typedef union {
	unsigned int               val;
	ASIC_CTRL_ACCESS_KEY_BIT_T bf;
} ASIC_CTRL_ACCESS_KEY_T;

// ---------------------------------------------------------------------
// Register netx_lock_reserved00
// => reserved address for netX locking purpose
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_netx_lock_reserved00 0x00000074U
#define Adr_netx_lock_reserved00     0x00100074U

#define MSK_netx_lock_reserved00_lock 0xffffffffU // [31:0]
#define SRT_netx_lock_reserved00_lock 0           

enum {
	BFW_netx_lock_reserved00_lock = 32  // [31:0]
};

typedef struct NETX_LOCK_RESERVED00_BIT_Ttag {
	unsigned int lock : BFW_netx_lock_reserved00_lock; // locking purpose 
} NETX_LOCK_RESERVED00_BIT_T;

typedef union {
	unsigned int               val;
	NETX_LOCK_RESERVED00_BIT_T bf;
} NETX_LOCK_RESERVED00_T;

// ---------------------------------------------------------------------
// Register netx_lock_reserved01
// => reserved address for netX locking purpose
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_netx_lock_reserved01 0x00000078U
#define Adr_netx_lock_reserved01     0x00100078U

#define MSK_netx_lock_reserved01_lock 0xffffffffU // [31:0]
#define SRT_netx_lock_reserved01_lock 0           

enum {
	BFW_netx_lock_reserved01_lock = 32  // [31:0]
};

typedef struct NETX_LOCK_RESERVED01_BIT_Ttag {
	unsigned int lock : BFW_netx_lock_reserved01_lock; // locking purpose 
} NETX_LOCK_RESERVED01_BIT_T;

typedef union {
	unsigned int               val;
	NETX_LOCK_RESERVED01_BIT_T bf;
} NETX_LOCK_RESERVED01_T;

// ---------------------------------------------------------------------
// Register netx_lock_reserved_start
// => reserved start address for netX locking purpose address area - don't implement other registers at 0x80 .. 0xfc! 
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_netx_lock_reserved_start 0x00000080U
#define Adr_netx_lock_reserved_start     0x00100080U

#define MSK_netx_lock_reserved_start_lock 0xffffffffU // [31:0]
#define SRT_netx_lock_reserved_start_lock 0           

enum {
	BFW_netx_lock_reserved_start_lock = 32  // [31:0]
};

typedef struct NETX_LOCK_RESERVED_START_BIT_Ttag {
	unsigned int lock : BFW_netx_lock_reserved_start_lock; // locking purpose 
} NETX_LOCK_RESERVED_START_BIT_T;

typedef union {
	unsigned int                   val;
	NETX_LOCK_RESERVED_START_BIT_T bf;
} NETX_LOCK_RESERVED_START_T;

// ---------------------------------------------------------------------
// Register netx_lock_reserved_end
// => reserved end address for netX locking purpose address area - don't implement other registers at 0x80 .. 0xfc! 
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_netx_lock_reserved_end 0x000000FCU
#define Adr_netx_lock_reserved_end     0x001000FCU

#define MSK_netx_lock_reserved_end_lock 0xffffffffU // [31:0]
#define SRT_netx_lock_reserved_end_lock 0           

enum {
	BFW_netx_lock_reserved_end_lock = 32  // [31:0]
};

typedef struct NETX_LOCK_RESERVED_END_BIT_Ttag {
	unsigned int lock : BFW_netx_lock_reserved_end_lock; // locking purpose 
} NETX_LOCK_RESERVED_END_BIT_T;

typedef union {
	unsigned int                 val;
	NETX_LOCK_RESERVED_END_BIT_T bf;
} NETX_LOCK_RESERVED_END_T;


// =====================================================================
//
// Area of ext_asyncmem_ctrl
//
// =====================================================================

#define Addr_ext_asyncmem_ctrl	0x00100100U

// ---------------------------------------------------------------------
// Register extsram0_ctrl
// => Control Register for external bus interface and Waitstates for ExtMem0 chip select area
//    memory width coding like ARM-signals MAS / HSIZE[1:0]:
//    00=8bit
//    01=16bit
//    10=32bit
//    11=reserved
//    external addresses will be alligned (right shifted) according to the selected memory width
//    8 bit  -> no right shift of Aext
//    16 bit -> right shift Aext 1 bit
//    32 bit -> right shift Aext 2 bits
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_extsram0_ctrl 0x00000000U
#define Adr_extsram0_ctrl     0x00100100U

#define MSK_extsram0_ctrl_WSExtMem0          0x0000003fU // [5:0]
#define SRT_extsram0_ctrl_WSExtMem0          0           
#define MSK_extsram0_ctrl_WSPrePauseExtMem0  0x00000300U // [9:8]
#define SRT_extsram0_ctrl_WSPrePauseExtMem0  8           
#define MSK_extsram0_ctrl_WSPostPauseExtMem0 0x00030000U // [17:16]
#define SRT_extsram0_ctrl_WSPostPauseExtMem0 16          
#define MSK_extsram0_ctrl_WidthExtMem0       0x03000000U // [25:24]
#define SRT_extsram0_ctrl_WidthExtMem0       24          

enum {
	BFW_extsram0_ctrl_WSExtMem0          = 6, // [5:0]
	BFW_extsram0_ctrl_reserved1          = 2, // [7:6]
	BFW_extsram0_ctrl_WSPrePauseExtMem0  = 2, // [9:8]
	BFW_extsram0_ctrl_reserved2          = 6, // [15:10]
	BFW_extsram0_ctrl_WSPostPauseExtMem0 = 2, // [17:16]
	BFW_extsram0_ctrl_reserved3          = 6, // [23:18]
	BFW_extsram0_ctrl_WidthExtMem0       = 2, // [25:24]
	BFW_extsram0_ctrl_reserved4          = 6  // [31:26]
};

typedef struct EXTSRAM0_CTRL_BIT_Ttag {
	unsigned int WSExtMem0          : BFW_extsram0_ctrl_WSExtMem0;          // Waitstates 0 - 63 cycles 
	unsigned int reserved1          : BFW_extsram0_ctrl_reserved1;          // reserved
	unsigned int WSPrePauseExtMem0  : BFW_extsram0_ctrl_WSPrePauseExtMem0;  // additional Waitstates for setuptime nCS,Aext to nOE,nWE 0 - 3 cycles 
	unsigned int reserved2          : BFW_extsram0_ctrl_reserved2;          // reserved
	unsigned int WSPostPauseExtMem0 : BFW_extsram0_ctrl_WSPostPauseExtMem0; // additional Waitstates after access 0 - 3 cycles 
	unsigned int reserved3          : BFW_extsram0_ctrl_reserved3;          // reserved
	unsigned int WidthExtMem0       : BFW_extsram0_ctrl_WidthExtMem0;       // Datapath width of ExtMem0 area 
	unsigned int reserved4          : BFW_extsram0_ctrl_reserved4;          // reserved
} EXTSRAM0_CTRL_BIT_T;

typedef union {
	unsigned int        val;
	EXTSRAM0_CTRL_BIT_T bf;
} EXTSRAM0_CTRL_T;

// ---------------------------------------------------------------------
// Register extsram1_ctrl
// => Control Register for external bus interface and Waitstates for ExtMem1 chip select area
//    memory width coding like ARM-signals MAS / HSIZE[1:0]:
//    00=8bit
//    01=16bit
//    10=32bit
//    11=reserved
//    external addresses will be alligned (right shifted) according to the selected memory width
//    8 bit  -> no right shift of Aext
//    16 bit -> right shift Aext 1 bit
//    32 bit -> right shift Aext 2 bits
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_extsram1_ctrl 0x00000004U
#define Adr_extsram1_ctrl     0x00100104U

#define MSK_extsram1_ctrl_WSExtMem1          0x0000003fU // [5:0]
#define SRT_extsram1_ctrl_WSExtMem1          0           
#define MSK_extsram1_ctrl_WSPrePauseExtMem1  0x00000300U // [9:8]
#define SRT_extsram1_ctrl_WSPrePauseExtMem1  8           
#define MSK_extsram1_ctrl_WSPostPauseExtMem1 0x00030000U // [17:16]
#define SRT_extsram1_ctrl_WSPostPauseExtMem1 16          
#define MSK_extsram1_ctrl_WidthExtMem1       0x03000000U // [25:24]
#define SRT_extsram1_ctrl_WidthExtMem1       24          

enum {
	BFW_extsram1_ctrl_WSExtMem1          = 6, // [5:0]
	BFW_extsram1_ctrl_reserved1          = 2, // [7:6]
	BFW_extsram1_ctrl_WSPrePauseExtMem1  = 2, // [9:8]
	BFW_extsram1_ctrl_reserved2          = 6, // [15:10]
	BFW_extsram1_ctrl_WSPostPauseExtMem1 = 2, // [17:16]
	BFW_extsram1_ctrl_reserved3          = 6, // [23:18]
	BFW_extsram1_ctrl_WidthExtMem1       = 2, // [25:24]
	BFW_extsram1_ctrl_reserved4          = 6  // [31:26]
};

typedef struct EXTSRAM1_CTRL_BIT_Ttag {
	unsigned int WSExtMem1          : BFW_extsram1_ctrl_WSExtMem1;          // Waitstates 0 - 63 cycles 
	unsigned int reserved1          : BFW_extsram1_ctrl_reserved1;          // reserved
	unsigned int WSPrePauseExtMem1  : BFW_extsram1_ctrl_WSPrePauseExtMem1;  // additional Waitstates for setuptime nCS,Aext to nOE,nWE 0 - 3 cycles 
	unsigned int reserved2          : BFW_extsram1_ctrl_reserved2;          // reserved
	unsigned int WSPostPauseExtMem1 : BFW_extsram1_ctrl_WSPostPauseExtMem1; // additional Waitstates after access 0 - 3 cycles 
	unsigned int reserved3          : BFW_extsram1_ctrl_reserved3;          // reserved
	unsigned int WidthExtMem1       : BFW_extsram1_ctrl_WidthExtMem1;       // Datapath width of ExtMem1 area 
	unsigned int reserved4          : BFW_extsram1_ctrl_reserved4;          // reserved
} EXTSRAM1_CTRL_BIT_T;

typedef union {
	unsigned int        val;
	EXTSRAM1_CTRL_BIT_T bf;
} EXTSRAM1_CTRL_T;

// ---------------------------------------------------------------------
// Register extsram2_ctrl
// => Control Register for external bus interface and Waitstates for ExtMem2 chip select area
//    memory width coding like ARM-signals MAS / HSIZE[1:0]:
//    00=8bit
//    01=16bit
//    10=32bit
//    11=reserved
//    external addresses will be alligned (right shifted) according to the selected memory width
//    8 bit  -> no right shift of Aext
//    16 bit -> right shift Aext 1 bit
//    32 bit -> right shift Aext 2 bits
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_extsram2_ctrl 0x00000008U
#define Adr_extsram2_ctrl     0x00100108U

#define MSK_extsram2_ctrl_WSExtMem2          0x0000003fU // [5:0]
#define SRT_extsram2_ctrl_WSExtMem2          0           
#define MSK_extsram2_ctrl_WSPrePauseExtMem2  0x00000300U // [9:8]
#define SRT_extsram2_ctrl_WSPrePauseExtMem2  8           
#define MSK_extsram2_ctrl_WSPostPauseExtMem2 0x00030000U // [17:16]
#define SRT_extsram2_ctrl_WSPostPauseExtMem2 16          
#define MSK_extsram2_ctrl_WidthExtMem2       0x03000000U // [25:24]
#define SRT_extsram2_ctrl_WidthExtMem2       24          

enum {
	BFW_extsram2_ctrl_WSExtMem2          = 6, // [5:0]
	BFW_extsram2_ctrl_reserved1          = 2, // [7:6]
	BFW_extsram2_ctrl_WSPrePauseExtMem2  = 2, // [9:8]
	BFW_extsram2_ctrl_reserved2          = 6, // [15:10]
	BFW_extsram2_ctrl_WSPostPauseExtMem2 = 2, // [17:16]
	BFW_extsram2_ctrl_reserved3          = 6, // [23:18]
	BFW_extsram2_ctrl_WidthExtMem2       = 2, // [25:24]
	BFW_extsram2_ctrl_reserved4          = 6  // [31:26]
};

typedef struct EXTSRAM2_CTRL_BIT_Ttag {
	unsigned int WSExtMem2          : BFW_extsram2_ctrl_WSExtMem2;          // Waitstates 0 - 63 cycles 
	unsigned int reserved1          : BFW_extsram2_ctrl_reserved1;          // reserved
	unsigned int WSPrePauseExtMem2  : BFW_extsram2_ctrl_WSPrePauseExtMem2;  // additional Waitstates for setuptime nCS,Aext to nOE,nWE 0 - 3 cycles 
	unsigned int reserved2          : BFW_extsram2_ctrl_reserved2;          // reserved
	unsigned int WSPostPauseExtMem2 : BFW_extsram2_ctrl_WSPostPauseExtMem2; // additional Waitstates after access 0 - 3 cycles 
	unsigned int reserved3          : BFW_extsram2_ctrl_reserved3;          // reserved
	unsigned int WidthExtMem2       : BFW_extsram2_ctrl_WidthExtMem2;       // Datapath width of ExtMem2 area 
	unsigned int reserved4          : BFW_extsram2_ctrl_reserved4;          // reserved
} EXTSRAM2_CTRL_BIT_T;

typedef union {
	unsigned int        val;
	EXTSRAM2_CTRL_BIT_T bf;
} EXTSRAM2_CTRL_T;

// ---------------------------------------------------------------------
// Register extsram3_ctrl
// => Control Register for external bus interface and Waitstates for ExtMem3 chip select area
//    memory width coding like ARM-signals MAS / HSIZE[1:0]:
//    00=8bit
//    01=16bit
//    10=32bit
//    11=reserved
//    external addresses will be alligned (right shifted) according to the selected memory width
//    8 bit  -> no right shift of Aext
//    16 bit -> right shift Aext 1 bit
//    32 bit -> right shift Aext 2 bits
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_extsram3_ctrl 0x0000000CU
#define Adr_extsram3_ctrl     0x0010010CU

#define MSK_extsram3_ctrl_WSExtMem3          0x0000003fU // [5:0]
#define SRT_extsram3_ctrl_WSExtMem3          0           
#define MSK_extsram3_ctrl_WSPrePauseExtMem3  0x00000300U // [9:8]
#define SRT_extsram3_ctrl_WSPrePauseExtMem3  8           
#define MSK_extsram3_ctrl_WSPostPauseExtMem3 0x00030000U // [17:16]
#define SRT_extsram3_ctrl_WSPostPauseExtMem3 16          
#define MSK_extsram3_ctrl_WidthExtMem3       0x03000000U // [25:24]
#define SRT_extsram3_ctrl_WidthExtMem3       24          

enum {
	BFW_extsram3_ctrl_WSExtMem3          = 6, // [5:0]
	BFW_extsram3_ctrl_reserved1          = 2, // [7:6]
	BFW_extsram3_ctrl_WSPrePauseExtMem3  = 2, // [9:8]
	BFW_extsram3_ctrl_reserved2          = 6, // [15:10]
	BFW_extsram3_ctrl_WSPostPauseExtMem3 = 2, // [17:16]
	BFW_extsram3_ctrl_reserved3          = 6, // [23:18]
	BFW_extsram3_ctrl_WidthExtMem3       = 2, // [25:24]
	BFW_extsram3_ctrl_reserved4          = 6  // [31:26]
};

typedef struct EXTSRAM3_CTRL_BIT_Ttag {
	unsigned int WSExtMem3          : BFW_extsram3_ctrl_WSExtMem3;          // Waitstates 0 - 63 cycles 
	unsigned int reserved1          : BFW_extsram3_ctrl_reserved1;          // reserved
	unsigned int WSPrePauseExtMem3  : BFW_extsram3_ctrl_WSPrePauseExtMem3;  // additional Waitstates for setuptime nCS,Aext to nOE,nWE 0 - 3 cycles 
	unsigned int reserved2          : BFW_extsram3_ctrl_reserved2;          // reserved
	unsigned int WSPostPauseExtMem3 : BFW_extsram3_ctrl_WSPostPauseExtMem3; // additional Waitstates after access 0 - 3 cycles 
	unsigned int reserved3          : BFW_extsram3_ctrl_reserved3;          // reserved
	unsigned int WidthExtMem3       : BFW_extsram3_ctrl_WidthExtMem3;       // Datapath width of ExtMem3 area 
	unsigned int reserved4          : BFW_extsram3_ctrl_reserved4;          // reserved
} EXTSRAM3_CTRL_BIT_T;

typedef union {
	unsigned int        val;
	EXTSRAM3_CTRL_BIT_T bf;
} EXTSRAM3_CTRL_T;


// =====================================================================
//
// Area of ext_sdram_ctrl
//
// =====================================================================

#define Addr_ext_sdram_ctrl	0x00100140U

// ---------------------------------------------------------------------
// Register sdram_general_ctrl
// => Control Register for external SDRAM access.
//    ----------------------------------------------------------
//    No DDR/DDR2 support in netX! Don't regard DDR/DDR2 options
//    ----------------------------------------------------------
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_sdram_general_ctrl 0x00000000U
#define Adr_sdram_general_ctrl     0x00100140U

#define MSK_sdram_general_ctrl_banks         0x00000003U // [1:0]
#define SRT_sdram_general_ctrl_banks         0           
#define MSK_sdram_general_ctrl_rows          0x00000070U // [6:4]
#define SRT_sdram_general_ctrl_rows          4           
#define MSK_sdram_general_ctrl_columns       0x00000700U // [10:8]
#define SRT_sdram_general_ctrl_columns       8           
#define MSK_sdram_general_ctrl_dbus32        0x00010000U // [16]
#define SRT_sdram_general_ctrl_dbus32        16          
#define MSK_sdram_general_ctrl_sdram_pwdn    0x00020000U // [17]
#define SRT_sdram_general_ctrl_sdram_pwdn    17          
#define MSK_sdram_general_ctrl_extclk_en     0x00040000U // [18]
#define SRT_sdram_general_ctrl_extclk_en     18          
#define MSK_sdram_general_ctrl_ctrl_en       0x00080000U // [19]
#define SRT_sdram_general_ctrl_ctrl_en       19          
#define MSK_sdram_general_ctrl_refresh_mode  0x03000000U // [25:24]
#define SRT_sdram_general_ctrl_refresh_mode  24          
#define MSK_sdram_general_ctrl_sdram_ready   0x40000000U // [30]
#define SRT_sdram_general_ctrl_sdram_ready   30          
#define MSK_sdram_general_ctrl_refresh_error 0x80000000U // [31]
#define SRT_sdram_general_ctrl_refresh_error 31          

enum {
	BFW_sdram_general_ctrl_banks         = 2, // [1:0]
	BFW_sdram_general_ctrl_reserved1     = 2, // [3:2]
	BFW_sdram_general_ctrl_rows          = 3, // [6:4]
	BFW_sdram_general_ctrl_reserved2     = 1, // [7]
	BFW_sdram_general_ctrl_columns       = 3, // [10:8]
	BFW_sdram_general_ctrl_reserved3     = 5, // [15:11]
	BFW_sdram_general_ctrl_dbus32        = 1, // [16]
	BFW_sdram_general_ctrl_sdram_pwdn    = 1, // [17]
	BFW_sdram_general_ctrl_extclk_en     = 1, // [18]
	BFW_sdram_general_ctrl_ctrl_en       = 1, // [19]
	BFW_sdram_general_ctrl_reserved4     = 4, // [23:20]
	BFW_sdram_general_ctrl_refresh_mode  = 2, // [25:24]
	BFW_sdram_general_ctrl_reserved5     = 4, // [29:26]
	BFW_sdram_general_ctrl_sdram_ready   = 1, // [30]
	BFW_sdram_general_ctrl_refresh_error = 1  // [31]
};

typedef struct SDRAM_GENERAL_CTRL_BIT_Ttag {
	unsigned int banks         : BFW_sdram_general_ctrl_banks;         // bank address coding. 
	                                                        // 00 : 2
	                                                        // 01 : 4 (default)
	                                                        // 10 : 8
	                                                        // 11 : reserved
	                                                        // bank addresses are always mapped on A18 (=BA2), A17 (=BA1) and A16(BA0).
	unsigned int reserved1     : BFW_sdram_general_ctrl_reserved1;     // reserved
	unsigned int rows          : BFW_sdram_general_ctrl_rows;          // row address coding. 
	                                                        // 000 : 2k  (A0..A10) (default)
	                                                        // 001 : 4k  (A0..A11)
	                                                        // 010 : 8k  (A0..A12)
	                                                        // 011 : 16k (A0..A13)
	                                                        // 100 : 32k (A0..A14) (no devices today)
	                                                        // 101 : 64k (A0..A15) (no devices today)
	                                                        // 110 : reserved
	                                                        // 111 : reserved
	unsigned int reserved2     : BFW_sdram_general_ctrl_reserved2;     // reserved
	unsigned int columns       : BFW_sdram_general_ctrl_columns;       // column address coding. 
	                                                        // 000 : 256 (A0..A7) (default)
	                                                        // 001 : 512 (A0..A8)
	                                                        // 010 : 1k  (A0..A9)
	                                                        // 011 : 2k  (A0..A9,A11)
	                                                        // 100 : 4k  (A0..A9,A11,A12)
	                                                        // 101 : 8k  (A0..A9,A11..A13) (no devices today)
	                                                        // 110 : 16k (A0..A9,A11..A14) (no devices today)
	                                                        // 111 : reserved
	unsigned int reserved3     : BFW_sdram_general_ctrl_reserved3;     // reserved
	unsigned int dbus32        : BFW_sdram_general_ctrl_dbus32;        // SDRAM data bus width 
	                                                        // 0: SDRAM Data bus is 16 bit wide.  (default)
	                                                        // 1: SDRAM data bus is 32 bit wide.
	unsigned int sdram_pwdn    : BFW_sdram_general_ctrl_sdram_pwdn;    // SDRAM Power Down 
	                                                        // If this bit is set, the Controller will move SDRAM to power down self refresh mode (no data loss)
	                                                        // and stop the external SDRAM clock. After resetting this bit, for DDR and DDR2 device types
	                                                        // a 200 clk DLLs startup pause will be done.
	unsigned int extclk_en     : BFW_sdram_general_ctrl_extclk_en;     // external SDRAM clock enable 
	unsigned int ctrl_en       : BFW_sdram_general_ctrl_ctrl_en;       // SDRAM controller enable 
	                                                        // The sdram_timing_ctrl-register can only be changed while this bit is 0.
	                                                        // ------------------------------------
	                                                        // After enable, the controller will run the following SDRAM initialisation procedure (100MHz, t_clk = 10ns).
	                                                        //    NOP (200us = 20,000t_clk, running sd_clk (if extclk_en), n_cs low, cke high)
	                                                        //    PRECHARGE ALL
	                                                        //    NOP (160ns = 16t_clk)
	                                                        //    7x (AUTO REFRESH, NOP (310ns = 31t_clk))
	                                                        //    AUTO REFRESH
	                                                        //    NOP (220ns = 22t_clk)
	                                                        //    LOAD MODE REGISTER (with settings done by these config registers)
	                                                        //    NOP (40ns = 4t_clk)
	                                                        //    ACTIVATE (for first access, if requested, sdram_ready will be set to 1 here)
	                                                        // ------------------------------------
	                                                        // Accesses requested before sdram_ready is 1 will be blocked (no ready).
	                                                        // The external SDRAM-clk will not run if the controller is disabled.
	unsigned int reserved4     : BFW_sdram_general_ctrl_reserved4;     // reserved
	unsigned int refresh_mode  : BFW_sdram_general_ctrl_refresh_mode;  // Refresh priortity mode 
	                                                        // If refresh has not highest priority and , it was not possible to generate the Refresh command in cause
	                                                        // of to much data accesses, refresh will become highest priority for no data loss.
	                                                        // In this case, the bit sdram_ctrl_general,refresh_error will be set to 1.
	                                                        // if it was not possible to generate the Refresh command in cause of to much data accesses.
	                                                        // 00 : fix intervall any t_REFI us (refresh has highest priority)
	                                                        // 01 : collect up to 8 refreshes (for DDR, DDR2, data access has higher priority than refresh, default)
	                                                        // 10 : collect up to 16 refreshes (data access has higher priority than refresh)
	                                                        // 11 : collect up to 2047 refreshes (for SDR only, data access has higher priority than refresh)
	unsigned int reserved5     : BFW_sdram_general_ctrl_reserved5;     // reserved
	unsigned int sdram_ready   : BFW_sdram_general_ctrl_sdram_ready;   // SDRAM Ready. 
	                                                        // This bit is set to 1 if SDRAM is ready for access. If sdram_general_ctrl.ctrl_en == 0 or
	                                                        // sdram_general_ctrl.sdram_pwdn == 0, sdram_ready will be low. It will be set to 1 after
	                                                        // SDRAM has been initialized or after power down wake up.
	unsigned int refresh_error : BFW_sdram_general_ctrl_refresh_error; // Refresh not achieved for debug purpose 
	                                                        // If refresh has not highest priority, (sdram_ctrl_timing.refresh_mode), this bit will be set to 1
	                                                        // when it was not possible to generate the Refresh command in cause of to much data accesses.
	                                                        // The SDRAM-Controller will only set this bit. It can be resetted by writing '0' to it.
} SDRAM_GENERAL_CTRL_BIT_T;

typedef union {
	unsigned int             val;
	SDRAM_GENERAL_CTRL_BIT_T bf;
} SDRAM_GENERAL_CTRL_T;

// ---------------------------------------------------------------------
// Register sdram_timing_ctrl
// => Control Register for external SDRAM access.
//    Changes can only be done, if the SDRAM-Controller is disabled (sdram_general_ctrl.ctrl_en == 0)
//    to avoid configuration problems.
//    ----------------------------------------------------------
//    No DDR/DDR2 support in netX! Don't regard DDR/DDR2 options
//    ----------------------------------------------------------
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_sdram_timing_ctrl 0x00000004U
#define Adr_sdram_timing_ctrl     0x00100144U

#define MSK_sdram_timing_ctrl_t_RCD             0x00000003U // [1:0]
#define SRT_sdram_timing_ctrl_t_RCD             0           
#define MSK_sdram_timing_ctrl_t_WR              0x00000030U // [5:4]
#define SRT_sdram_timing_ctrl_t_WR              4           
#define MSK_sdram_timing_ctrl_t_RP              0x000000c0U // [7:6]
#define SRT_sdram_timing_ctrl_t_RP              6           
#define MSK_sdram_timing_ctrl_t_RAS             0x00000700U // [10:8]
#define SRT_sdram_timing_ctrl_t_RAS             8           
#define MSK_sdram_timing_ctrl_t_RFC             0x0000f000U // [15:12]
#define SRT_sdram_timing_ctrl_t_RFC             12          
#define MSK_sdram_timing_ctrl_t_REFI            0x00030000U // [17:16]
#define SRT_sdram_timing_ctrl_t_REFI            16          
#define MSK_sdram_timing_ctrl_mem_sdclk_phase   0x00700000U // [22:20]
#define SRT_sdram_timing_ctrl_mem_sdclk_phase   20          
#define MSK_sdram_timing_ctrl_mem_sdclk_ssneg   0x00800000U // [23]
#define SRT_sdram_timing_ctrl_mem_sdclk_ssneg   23          
#define MSK_sdram_timing_ctrl_data_sample_phase 0x07000000U // [26:24]
#define SRT_sdram_timing_ctrl_data_sample_phase 24          
#define MSK_sdram_timing_ctrl_bypass_neg_delay  0x10000000U // [28]
#define SRT_sdram_timing_ctrl_bypass_neg_delay  28          

enum {
	BFW_sdram_timing_ctrl_t_RCD             = 2, // [1:0]
	BFW_sdram_timing_ctrl_reserved1         = 2, // [3:2]
	BFW_sdram_timing_ctrl_t_WR              = 2, // [5:4]
	BFW_sdram_timing_ctrl_t_RP              = 2, // [7:6]
	BFW_sdram_timing_ctrl_t_RAS             = 3, // [10:8]
	BFW_sdram_timing_ctrl_reserved2         = 1, // [11]
	BFW_sdram_timing_ctrl_t_RFC             = 4, // [15:12]
	BFW_sdram_timing_ctrl_t_REFI            = 2, // [17:16]
	BFW_sdram_timing_ctrl_reserved3         = 2, // [19:18]
	BFW_sdram_timing_ctrl_mem_sdclk_phase   = 3, // [22:20]
	BFW_sdram_timing_ctrl_mem_sdclk_ssneg   = 1, // [23]
	BFW_sdram_timing_ctrl_data_sample_phase = 3, // [26:24]
	BFW_sdram_timing_ctrl_reserved4         = 1, // [27]
	BFW_sdram_timing_ctrl_bypass_neg_delay  = 1, // [28]
	BFW_sdram_timing_ctrl_reserved5         = 3  // [31:29]
};

typedef struct SDRAM_TIMING_CTRL_BIT_Ttag {
	unsigned int t_RCD             : BFW_sdram_timing_ctrl_t_RCD;             // Active to Read or Write time (RAS to CAS, clk = t_RCD) 
	                                                        // This value will be also taken as t_RRD (Active bank A to Active bank B time)
	                                                        // 00 : 1 clk
	                                                        // 01 : 2 clks
	                                                        // 10 : 3 clks (default)
	                                                        // 11 : reserved
	unsigned int reserved1         : BFW_sdram_timing_ctrl_reserved1;         // reserved
	unsigned int t_WR              : BFW_sdram_timing_ctrl_t_WR;              // Write recovery time (last write data to Precharge) 
	                                                        // 00 : 1 clk
	                                                        // 01 : 2 clks
	                                                        // 10 : 3 clks (default)
	                                                        // 11 : reserved
	unsigned int t_RP              : BFW_sdram_timing_ctrl_t_RP;              // Precharge command period time (Precharge to command) 
	                                                        // 00 : 1 clk
	                                                        // 01 : 2 clks
	                                                        // 10 : 3 clks (default)
	                                                        // 11 : reserved
	unsigned int t_RAS             : BFW_sdram_timing_ctrl_t_RAS;             // Active to Precharge command time (clk = t_RAS + 3) 
	                                                        // 000 :  3 clks
	                                                        // 001 :  4 clks
	                                                        // and so on
	                                                        // 111 : 10 clks (default)
	unsigned int reserved2         : BFW_sdram_timing_ctrl_reserved2;         // reserved
	unsigned int t_RFC             : BFW_sdram_timing_ctrl_t_RFC;             // Refresh to Command time (clk = tRFC + 4) 
	                                                        // 0000 :  4 clks
	                                                        // 0001 :  5 clks
	                                                        // and so on
	                                                        // 1111 :  19 clks (default)
	unsigned int t_REFI            : BFW_sdram_timing_ctrl_t_REFI;            // Average Periodic refresh interval (3.90 us * 2^t_REFI 
	                                                        // 00 :   3.90 us
	                                                        // 01 :   7.80 us (default)
	                                                        // 10 :  15.60 us
	                                                        // 11 :  31.20 us
	unsigned int reserved3         : BFW_sdram_timing_ctrl_reserved3;         // reserved
	unsigned int mem_sdclk_phase   : BFW_sdram_timing_ctrl_mem_sdclk_phase;   // 0..5: adjustable phase-shift for external SDRAM clock depending on external capacitive 
	                                                        // load on mem_sdclk-signal to match SDRAM ctrl-signal setup times. The phase can be shiftet in 1.25ns steps.
	                                                        // mem_sdlk will internally rise at the mem_sdclk_phase+2nd clk400 edge after internal changes of 
	                                                        // SDRAM ctrl-signals (mem_sd*-signals, driven by clk_memsig), where the 1st egde is defined by the 
	                                                        // mem_sdclk_ssneg-bit.
	                                                        // For correct settings, delays depending on external capacitive have to be respected.
	unsigned int mem_sdclk_ssneg   : BFW_sdram_timing_ctrl_mem_sdclk_ssneg;   // 1: clk_memsig will be sampled for mem_sdclk-generation internally first on negedge of clk400 
	                                                        // 0: clk_memsig will be sampled for mem_sdclk-generation internally first on posedge of clk400
	unsigned int data_sample_phase : BFW_sdram_timing_ctrl_data_sample_phase; // 0..5: adjustable phase-shift for data sampling SDRAM loopback clock (clk_sdloopback) 
	                                                        // depending external capacitive load and SDRAM access time (t_AC). The phase can be shiftet in 1.25ns steps.
	                                                        // clk_sdloopback will internally rise (sample SDRAM read data) at the data_sample_phase+4th clk400 edge 
	                                                        // after rise of external mem_sdclk (including external capacitive load).
	                                                        // For correct settings, the delays depending on external capacitive have to be respected.
	                                                        // Data sampling has to be done at least 8ns after internal changes of SDRAM ctrl-signals (mem_sd*-signals, 
	                                                        // driven by clk_memsig) .
	unsigned int reserved4         : BFW_sdram_timing_ctrl_reserved4;         // reserved
	unsigned int bypass_neg_delay  : BFW_sdram_timing_ctrl_bypass_neg_delay;  // 0: use phase shifted (negative delayed) SDRAM loopback clock for data sampling. 
	                                                        // 1: bypass phase shift logic for SDRAM data sampling use SDRAM loopback clock for data sampling
	unsigned int reserved5         : BFW_sdram_timing_ctrl_reserved5;         // reserved
} SDRAM_TIMING_CTRL_BIT_T;

typedef union {
	unsigned int            val;
	SDRAM_TIMING_CTRL_BIT_T bf;
} SDRAM_TIMING_CTRL_T;

// ---------------------------------------------------------------------
// Register sdram_mr
// => Moder Register for all SDRAM-devicetypes and Extended Mode Register for DDR/DDR2-SDRAM-devices.
//    Changes can only be done, if the SDRAM-Controller is disabled (sdram_general_ctrl.ctrl_en == 0)
//    to avoid configuration problems.
//    The SDRAM Mode Registers will be set after enabling the SDRAM Controller in the 200us
//    SDRAM memory initialisation procedure.
//    ----------------------------------------------------------
//    No DDR/DDR2 support in netX! Don't regard DDR/DDR2 options
//    ----------------------------------------------------------
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_sdram_mr 0x00000008U
#define Adr_sdram_mr     0x00100148U

#define MSK_sdram_mr_MR  0x00003fffU // [13:0]
#define SRT_sdram_mr_MR  0           
#define MSK_sdram_mr_EMR 0x3fff0000U // [29:16]
#define SRT_sdram_mr_EMR 16          

enum {
	BFW_sdram_mr_MR        = 14, // [13:0]
	BFW_sdram_mr_reserved1 = 2,  // [15:14]
	BFW_sdram_mr_EMR       = 14, // [29:16]
	BFW_sdram_mr_reserved2 = 2   // [31:30]
};

typedef struct SDRAM_MR_BIT_Ttag {
	unsigned int MR        : BFW_sdram_mr_MR;        // SDRAM Mode Register. 
	                                                        // CAS latency bits in modereg[6:4]; default CL3
	                                                        // The controller supports only Burst Length 8 on dq16 an 4 on dq32 (default)
	                                                        // SDRAM DLL reset on initiaisation procedure is done by modereg[8]
	unsigned int reserved1 : BFW_sdram_mr_reserved1; // reserved
	unsigned int EMR       : BFW_sdram_mr_EMR;       // Extended Mode Register for DDR/DDR2 - SDRAM devices 
	                                                        // The following settings must not be changed because tey are not supported by the Controller:
	                                                        // Additive Latency (EMR[5:3]) - fix to AL 0
	                                                        // nDQS (EMR[10]) - always disabled
	                                                        // RDQS (EMR[12]) - always disabled
	unsigned int reserved2 : BFW_sdram_mr_reserved2; // reserved
} SDRAM_MR_BIT_T;

typedef union {
	unsigned int   val;
	SDRAM_MR_BIT_T bf;
} SDRAM_MR_T;

// ---------------------------------------------------------------------
// Register sdram_emr2
// => Extended Mode Registers EMR2 and EMR3 for DDR2 - SDRAM devices.
//    Changes can only be done, if the SDRAM-Controller is disabled (sdram_general_ctrl.ctrl_en == 0)
//    to avoid configuration problems.
//    The SDRAM Mode Registers will be set after enabling the SDRAM Controller in the 200us
//    SDRAM memory initialisation procedure.
//    ----------------------------------------------------------
//    No DDR/DDR2 support in netX! Don't regard DDR/DDR2 options
//    ----------------------------------------------------------
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_sdram_emr2 0x0000000CU
#define Adr_sdram_emr2     0x0010014CU

#define MSK_sdram_emr2_EMR2 0x00003fffU // [13:0]
#define SRT_sdram_emr2_EMR2 0           
#define MSK_sdram_emr2_EMR3 0x3fff0000U // [29:16]
#define SRT_sdram_emr2_EMR3 16          

enum {
	BFW_sdram_emr2_EMR2      = 14, // [13:0]
	BFW_sdram_emr2_reserved1 = 2,  // [15:14]
	BFW_sdram_emr2_EMR3      = 14, // [29:16]
	BFW_sdram_emr2_reserved2 = 2   // [31:30]
};

typedef struct SDRAM_EMR2_BIT_Ttag {
	unsigned int EMR2      : BFW_sdram_emr2_EMR2;      // Extended Mode Register 2 for DDR2 - SDRAM devices 
	                                                        // For further extensions. No Settings must be done, which affect non supported
	                                                        // SDRAM-Controller features.
	unsigned int reserved1 : BFW_sdram_emr2_reserved1; // reserved
	unsigned int EMR3      : BFW_sdram_emr2_EMR3;      // Extended Mode Register 3 for DDR2 - SDRAM devices 
	                                                        // For further extensions. No Settings must be done, which affect non supported
	                                                        // SDRAM-Controller features.
	unsigned int reserved2 : BFW_sdram_emr2_reserved2; // reserved
} SDRAM_EMR2_BIT_T;

typedef union {
	unsigned int     val;
	SDRAM_EMR2_BIT_T bf;
} SDRAM_EMR2_T;


// =====================================================================
//
// Area of extmem_priority_ctrl
//
// =====================================================================

#define Addr_extmem_priority_ctrl	0x00100180U

// ---------------------------------------------------------------------
// Register extmem_prio_timslot_ctrl
// => Memory interface master timeslot priority control register.
//    This register may be partially locked by the exmem_priority_lock-register in asic_ctrl-address area.
//    Note:
//    Any master can access in one timeslot ((ts_accessrate_mX*ts_length_mX)/64) + 1 times (i.e. at 
//    maximum (ts_accessrate_mX)/64 bandwidth on external memory bus, ts_accessrate_mX is programmed 
//    by extmem_prio_accesstime_ctrl-register).
//    Priority control will watch data accesses on external memory data bus (SDRAM and non SDRAM), 
//    including pauses on non SDRAM-accesses, not including control commands to SDRAM.
//    Any master requesting more accesses will be forced to wait for the remaining timeslot.
//    --------------------------------------------------------
//    Programmable timeslots are:
//    ts_length =  0 :             64 systen clock cycles (i.e  0.64us at 100MHz)
//    ts_length =  1 :            128 systen clock cycles (i.e  1.28us at 100MHz)
//    ts_length =  2 :            256 systen clock cycles (i.e  2.56us at 100MHz)
//    ts_length =  3 :            512 systen clock cycles (i.e  5.12us at 100MHz)
//    ts_length =  4 :           1024 systen clock cycles (i.e 10.24us at 100MHz)
//    ts_length =  5 :           2048 systen clock cycles (i.e 20.48us at 100MHz)
//    ts_length =  6 :           4096 systen clock cycles (i.e 40.96us at 100MHz)
//    ts_length =  7 :           8192 systen clock cycles (i.e 81.92us at 100MHz)
//    --------------------------------------------------------
//    master channel m0: Host Bus Interface  (highest priority)
//    master channel m1: XC
//    master channel m2: LCD-Controller
//    master channel m3: ARM instruction channel
//    master channel m4: ARM data channel  (lowest priority)
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_extmem_prio_timslot_ctrl 0x00000000U
#define Adr_extmem_prio_timslot_ctrl     0x00100180U

#define MSK_extmem_prio_timslot_ctrl_ts_length_HIF_mi  0x00000007U // [2:0]
#define SRT_extmem_prio_timslot_ctrl_ts_length_HIF_mi  0           
#define MSK_extmem_prio_timslot_ctrl_ts_length_XC_mi   0x00000070U // [6:4]
#define SRT_extmem_prio_timslot_ctrl_ts_length_XC_mi   4           
#define MSK_extmem_prio_timslot_ctrl_ts_length_LCD_mi  0x00000700U // [10:8]
#define SRT_extmem_prio_timslot_ctrl_ts_length_LCD_mi  8           
#define MSK_extmem_prio_timslot_ctrl_ts_length_ARMI_mi 0x00007000U // [14:12]
#define SRT_extmem_prio_timslot_ctrl_ts_length_ARMI_mi 12          
#define MSK_extmem_prio_timslot_ctrl_ts_length_ARMD_mi 0x00070000U // [18:16]
#define SRT_extmem_prio_timslot_ctrl_ts_length_ARMD_mi 16          

enum {
	BFW_extmem_prio_timslot_ctrl_ts_length_HIF_mi  = 3,  // [2:0]
	BFW_extmem_prio_timslot_ctrl_reserved1         = 1,  // [3]
	BFW_extmem_prio_timslot_ctrl_ts_length_XC_mi   = 3,  // [6:4]
	BFW_extmem_prio_timslot_ctrl_reserved2         = 1,  // [7]
	BFW_extmem_prio_timslot_ctrl_ts_length_LCD_mi  = 3,  // [10:8]
	BFW_extmem_prio_timslot_ctrl_reserved3         = 1,  // [11]
	BFW_extmem_prio_timslot_ctrl_ts_length_ARMI_mi = 3,  // [14:12]
	BFW_extmem_prio_timslot_ctrl_reserved4         = 1,  // [15]
	BFW_extmem_prio_timslot_ctrl_ts_length_ARMD_mi = 3,  // [18:16]
	BFW_extmem_prio_timslot_ctrl_reserved5         = 13  // [31:19]
};

typedef struct EXTMEM_PRIO_TIMSLOT_CTRL_BIT_Ttag {
	unsigned int ts_length_HIF_mi  : BFW_extmem_prio_timslot_ctrl_ts_length_HIF_mi;  // 0..7: the timeslot of master m0 is on external memory interface 64*2^ts_length_HIF_mi systen clock cycles  
	unsigned int reserved1         : BFW_extmem_prio_timslot_ctrl_reserved1;         // reserved
	unsigned int ts_length_XC_mi   : BFW_extmem_prio_timslot_ctrl_ts_length_XC_mi;   // 0..7: the timeslot of master m1 is on external memory interface 64*2^ts_length_XC_mi systen clock cycles  
	unsigned int reserved2         : BFW_extmem_prio_timslot_ctrl_reserved2;         // reserved
	unsigned int ts_length_LCD_mi  : BFW_extmem_prio_timslot_ctrl_ts_length_LCD_mi;  // 0..7: the timeslot of master m2 is on external memory interface 64*2^ts_length_LCD_mi systen clock cycles  
	unsigned int reserved3         : BFW_extmem_prio_timslot_ctrl_reserved3;         // reserved
	unsigned int ts_length_ARMI_mi : BFW_extmem_prio_timslot_ctrl_ts_length_ARMI_mi; // 0..7: the timeslot of master m3 is on external memory interface 64*2^ts_length_ARMI_mi systen clock cycles  
	unsigned int reserved4         : BFW_extmem_prio_timslot_ctrl_reserved4;         // reserved
	unsigned int ts_length_ARMD_mi : BFW_extmem_prio_timslot_ctrl_ts_length_ARMD_mi; // 0..7: the timeslot of master m4 is on external memory interface 64*2^ts_length_ARMD_mi systen clock cycles  
	unsigned int reserved5         : BFW_extmem_prio_timslot_ctrl_reserved5;         // reserved
} EXTMEM_PRIO_TIMSLOT_CTRL_BIT_T;

typedef union {
	unsigned int                   val;
	EXTMEM_PRIO_TIMSLOT_CTRL_BIT_T bf;
} EXTMEM_PRIO_TIMSLOT_CTRL_T;

// ---------------------------------------------------------------------
// Register extmem_prio_accesstime_ctrl
// => Control Register for master channel accesses per timeslot on external meory interface.
//    This register may be partially locked by the exmem_priority_lock-register in asic_ctrl-address area.
//    For detailed priority controlling read note at extmem_prio_timslot_ctrl-register description.
//    --------------------------------------------------------
//    master channel m0: Host Bus Interface  (highest priority)
//    master channel m1: XC
//    master channel m2: LCD-Controller
//    master channel m3: ARM instruction channel
//    master channel m4: ARM data channel  (lowest priority)
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_extmem_prio_accesstime_ctrl 0x00000004U
#define Adr_extmem_prio_accesstime_ctrl     0x00100184U

#define MSK_extmem_prio_accesstime_ctrl_ts_accessrate_HIF_mi  0x0000003fU // [5:0]
#define SRT_extmem_prio_accesstime_ctrl_ts_accessrate_HIF_mi  0           
#define MSK_extmem_prio_accesstime_ctrl_ts_accessrate_XC_mi   0x00000fc0U // [11:6]
#define SRT_extmem_prio_accesstime_ctrl_ts_accessrate_XC_mi   6           
#define MSK_extmem_prio_accesstime_ctrl_ts_accessrate_LCD_mi  0x0003f000U // [17:12]
#define SRT_extmem_prio_accesstime_ctrl_ts_accessrate_LCD_mi  12          
#define MSK_extmem_prio_accesstime_ctrl_ts_accessrate_ARMI_mi 0x00fc0000U // [23:18]
#define SRT_extmem_prio_accesstime_ctrl_ts_accessrate_ARMI_mi 18          
#define MSK_extmem_prio_accesstime_ctrl_ts_accessrate_ARMD_mi 0x3f000000U // [29:24]
#define SRT_extmem_prio_accesstime_ctrl_ts_accessrate_ARMD_mi 24          

enum {
	BFW_extmem_prio_accesstime_ctrl_ts_accessrate_HIF_mi  = 6, // [5:0]
	BFW_extmem_prio_accesstime_ctrl_ts_accessrate_XC_mi   = 6, // [11:6]
	BFW_extmem_prio_accesstime_ctrl_ts_accessrate_LCD_mi  = 6, // [17:12]
	BFW_extmem_prio_accesstime_ctrl_ts_accessrate_ARMI_mi = 6, // [23:18]
	BFW_extmem_prio_accesstime_ctrl_ts_accessrate_ARMD_mi = 6, // [29:24]
	BFW_extmem_prio_accesstime_ctrl_reserved1             = 2  // [31:30]
};

typedef struct EXTMEM_PRIO_ACCESSTIME_CTRL_BIT_Ttag {
	unsigned int ts_accessrate_HIF_mi  : BFW_extmem_prio_accesstime_ctrl_ts_accessrate_HIF_mi;  // 0..63: master m0 is alowed to request ((ts_accessrate_HIF_mi*ts_length_HIF_mi)/64) + 1 accesses on external memory  
	unsigned int ts_accessrate_XC_mi   : BFW_extmem_prio_accesstime_ctrl_ts_accessrate_XC_mi;   // 0..63: master m1 is alowed to request ((ts_accessrate_XC_mi*ts_length_XC_mi)/64) + 1 accesses on external memory  
	unsigned int ts_accessrate_LCD_mi  : BFW_extmem_prio_accesstime_ctrl_ts_accessrate_LCD_mi;  // 0..63: master m2 is alowed to request ((ts_accessrate_LCD_mi*ts_length_LCD_mi)/64) + 1 accesses on external memory  
	unsigned int ts_accessrate_ARMI_mi : BFW_extmem_prio_accesstime_ctrl_ts_accessrate_ARMI_mi; // 0..63: master m3 is alowed to request ((ts_accessrate_ARMI_mi*ts_length_ARMI_mi)/64) + 1 accesses on external memory  
	unsigned int ts_accessrate_ARMD_mi : BFW_extmem_prio_accesstime_ctrl_ts_accessrate_ARMD_mi; // 0..63: master m4 is alowed to request ((ts_accessrate_ARMD_mi*ts_length_ARMD_mi)/64) + 1 accesses on external memory  
	unsigned int reserved1             : BFW_extmem_prio_accesstime_ctrl_reserved1;             // reserved
} EXTMEM_PRIO_ACCESSTIME_CTRL_BIT_T;

typedef union {
	unsigned int                      val;
	EXTMEM_PRIO_ACCESSTIME_CTRL_BIT_T bf;
} EXTMEM_PRIO_ACCESSTIME_CTRL_T;


// =====================================================================
//
// Area of watchdog
//
// =====================================================================

#define Addr_watchdog	0x00100200U

// ---------------------------------------------------------------------
// Register sys_wdg
// => !! This register should be removed, only for compatability reasons !!
//    System Watchdog Register
//    Writing the watchdog register is done by the following sequence:
//    - reading the netX_SYS_WDG register (getting a new access code value at bit [31:16])
//    - writing back the new access code value to bit [31:16] and new watchdog timeout value to
//    bit [15:0] in the netX_SYS_WDG register
//    The watchdog access code is generated by a pseudo random generator.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_sys_wdg 0x00000000U
#define Adr_sys_wdg     0x00100200U

#define MSK_sys_wdg_WDG_TIMEOUT 0x0000ffffU // [15:0]
#define SRT_sys_wdg_WDG_TIMEOUT 0           
#define MSK_sys_wdg_WDG_ACCESS  0xffff0000U // [31:16]
#define SRT_sys_wdg_WDG_ACCESS  16          

enum {
	BFW_sys_wdg_WDG_TIMEOUT = 16, // [15:0]
	BFW_sys_wdg_WDG_ACCESS  = 16  // [31:16]
};

typedef struct SYS_WDG_BIT_Ttag {
	unsigned int WDG_TIMEOUT : BFW_sys_wdg_WDG_TIMEOUT; // Actual watchdog timer value for read accesses. Timeout R/W 
	                                                        // value for valid write accesses.
	unsigned int WDG_ACCESS  : BFW_sys_wdg_WDG_ACCESS;  // Watchdog access code for writing the timeout value. A read 
	                                                        // access gives the 16 bit code for next write access. A write
	                                                        // access will only acknowledged when the access code is
	                                                        // equal to the last readed one.
} SYS_WDG_BIT_T;

typedef union {
	unsigned int  val;
	SYS_WDG_BIT_T bf;
} SYS_WDG_T;

// ---------------------------------------------------------------------
// Register netx_sys_wdg_ctrl
// => netX System Watchdog Trigger Register
//    The watchdog access code is generated by a pseudo random generator.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_netx_sys_wdg_ctrl 0x00000000U
#define Adr_netx_sys_wdg_ctrl     0x00100200U

#define MSK_netx_sys_wdg_ctrl_WDG_ACCESS_CODE 0x0000ffffU // [15:0]
#define SRT_netx_sys_wdg_ctrl_WDG_ACCESS_CODE 0           

enum {
	BFW_netx_sys_wdg_ctrl_WDG_ACCESS_CODE = 16, // [15:0]
	BFW_netx_sys_wdg_ctrl_reserved1       = 16  // [31:16]
};

typedef struct NETX_SYS_WDG_CTRL_BIT_Ttag {
	unsigned int WDG_ACCESS_CODE : BFW_netx_sys_wdg_ctrl_WDG_ACCESS_CODE; // Watchdog access code for triggering. A read access gives the next 16 bit code for trigger. 
	                                                        // A write access with correct access code will trigger the watchdog counter.
	unsigned int reserved1       : BFW_netx_sys_wdg_ctrl_reserved1;       // reserved
} NETX_SYS_WDG_CTRL_BIT_T;

typedef union {
	unsigned int            val;
	NETX_SYS_WDG_CTRL_BIT_T bf;
} NETX_SYS_WDG_CTRL_T;

// ---------------------------------------------------------------------
// Register netx_sys_wdg
// => netX System Watchdog Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_netx_sys_wdg 0x00000004U
#define Adr_netx_sys_wdg     0x00100204U

#define MSK_netx_sys_wdg_WDG_COUNTER 0x0001ffffU // [16:0]
#define SRT_netx_sys_wdg_WDG_COUNTER 0           

enum {
	BFW_netx_sys_wdg_WDG_COUNTER = 17, // [16:0]
	BFW_netx_sys_wdg_reserved1   = 15  // [31:17]
};

typedef struct NETX_SYS_WDG_BIT_Ttag {
	unsigned int WDG_COUNTER : BFW_netx_sys_wdg_WDG_COUNTER; // Actual watchdog counter value 
	unsigned int reserved1   : BFW_netx_sys_wdg_reserved1;   // reserved
} NETX_SYS_WDG_BIT_T;

typedef union {
	unsigned int       val;
	NETX_SYS_WDG_BIT_T bf;
} NETX_SYS_WDG_T;

// ---------------------------------------------------------------------
// Register netx_sys_wdg_irq_timeout
// => netX System Wachtdog Interrupt Timout Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_netx_sys_wdg_irq_timeout 0x00000008U
#define Adr_netx_sys_wdg_irq_timeout     0x00100208U

#define MSK_netx_sys_wdg_irq_timeout_WDG_IRQ_TIMEOUT 0x0000ffffU // [15:0]
#define SRT_netx_sys_wdg_irq_timeout_WDG_IRQ_TIMEOUT 0           

enum {
	BFW_netx_sys_wdg_irq_timeout_WDG_IRQ_TIMEOUT = 16, // [15:0]
	BFW_netx_sys_wdg_irq_timeout_reserved1       = 16  // [31:16]
};

typedef struct NETX_SYS_WDG_IRQ_TIMEOUT_BIT_Ttag {
	unsigned int WDG_IRQ_TIMEOUT : BFW_netx_sys_wdg_irq_timeout_WDG_IRQ_TIMEOUT; // Watchdog interrupt timeout 
	unsigned int reserved1       : BFW_netx_sys_wdg_irq_timeout_reserved1;       // reserved
} NETX_SYS_WDG_IRQ_TIMEOUT_BIT_T;

typedef union {
	unsigned int                   val;
	NETX_SYS_WDG_IRQ_TIMEOUT_BIT_T bf;
} NETX_SYS_WDG_IRQ_TIMEOUT_T;

// ---------------------------------------------------------------------
// Register netx_sys_wdg_res_timeout
// => netX System Watchdog Reset Timeout Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_netx_sys_wdg_res_timeout 0x0000000CU
#define Adr_netx_sys_wdg_res_timeout     0x0010020CU

#define MSK_netx_sys_wdg_res_timeout_WDG_RES_TIMEOUT 0x0000ffffU // [15:0]
#define SRT_netx_sys_wdg_res_timeout_WDG_RES_TIMEOUT 0           

enum {
	BFW_netx_sys_wdg_res_timeout_WDG_RES_TIMEOUT = 16, // [15:0]
	BFW_netx_sys_wdg_res_timeout_reserved1       = 16  // [31:16]
};

typedef struct NETX_SYS_WDG_RES_TIMEOUT_BIT_Ttag {
	unsigned int WDG_RES_TIMEOUT : BFW_netx_sys_wdg_res_timeout_WDG_RES_TIMEOUT; // Watchdog Reset Request Timeout 
	unsigned int reserved1       : BFW_netx_sys_wdg_res_timeout_reserved1;       // reserved
} NETX_SYS_WDG_RES_TIMEOUT_BIT_T;

typedef union {
	unsigned int                   val;
	NETX_SYS_WDG_RES_TIMEOUT_BIT_T bf;
} NETX_SYS_WDG_RES_TIMEOUT_T;


// =====================================================================
//
// Area of abort
//
// =====================================================================

#define Addr_abort	0x00100300U

// ---------------------------------------------------------------------
// Register abort_base
// => abort generation start address (HRESP will be 2'b01) for test purpose.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_abort_base 0x00000000U
#define Adr_abort_base     0x00100300U

// ---------------------------------------------------------------------
// Register abort_end
// => abort generation end address (HRESP will be 2'b01) for test purpose.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_abort_end 0x000000FCU
#define Adr_abort_end     0x001003FCU


// =====================================================================
//
// Area of gpio
//
// =====================================================================

#define Addr_gpio	0x00100800U

// ---------------------------------------------------------------------
// Register gpio_cfg0
// => GPIO pin 0 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg0 0x00000000U
#define Adr_gpio_cfg0     0x00100800U

#define MSK_gpio_cfg0_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg0_iocfg     0           
#define MSK_gpio_cfg0_inv       0x00000004U // [2]
#define SRT_gpio_cfg0_inv       2           
#define MSK_gpio_cfg0_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg0_mode      3           
#define MSK_gpio_cfg0_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg0_count_ref 5           

enum {
	BFW_gpio_cfg0_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg0_inv       = 1,  // [2]
	BFW_gpio_cfg0_mode      = 2,  // [4:3]
	BFW_gpio_cfg0_count_ref = 3,  // [7:5]
	BFW_gpio_cfg0_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG0_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg0_iocfg;     // defines the input/output configuration 
	                                                        // 00 : gp input mode
	                                                        // 01 : gp output mode
	                                                        // 10 : ext0 mode
	                                                        // 11 : ext1 mode
	unsigned int inv       : BFW_gpio_cfg0_inv;       // 0 : don't invert, 1 : invert input/output value 
	unsigned int mode      : BFW_gpio_cfg0_mode;      // defines the gp input or output mode - depends on iocfg 
	                                                        // gp input modi :
	                                                        //              00 : read mode
	                                                        //              01 : capture mode (continued) at rising edge
	                                                        //              10 : capture mode (once) at rising edge
	                                                        //              11 : capture mode (high level)
	                                                        // gp output modi:
	                                                        //              00 : set to 0
	                                                        //              01 : set to 1
	                                                        //              10 : set to gpio_line[0]
	                                                        //              11 : pwm mode
	unsigned int count_ref : BFW_gpio_cfg0_count_ref; // counter reference 
	                                                        // 000 : counter 0
	                                                        // 001 : counter 1
	                                                        // 010 : counter 2
	                                                        // 011 : counter 3
	                                                        // 100 : counter 4
	                                                        // 111 : system time
	unsigned int reserved1 : BFW_gpio_cfg0_reserved1; // reserved
} GPIO_CFG0_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG0_BIT_T bf;
} GPIO_CFG0_T;

// ---------------------------------------------------------------------
// Register gpio_cfg1
// => GPIO pin 1 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg1 0x00000004U
#define Adr_gpio_cfg1     0x00100804U

#define MSK_gpio_cfg1_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg1_iocfg     0           
#define MSK_gpio_cfg1_inv       0x00000004U // [2]
#define SRT_gpio_cfg1_inv       2           
#define MSK_gpio_cfg1_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg1_mode      3           
#define MSK_gpio_cfg1_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg1_count_ref 5           

enum {
	BFW_gpio_cfg1_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg1_inv       = 1,  // [2]
	BFW_gpio_cfg1_mode      = 2,  // [4:3]
	BFW_gpio_cfg1_count_ref = 3,  // [7:5]
	BFW_gpio_cfg1_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG1_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg1_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg1_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg1_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg1_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg1_reserved1; // reserved
} GPIO_CFG1_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG1_BIT_T bf;
} GPIO_CFG1_T;

// ---------------------------------------------------------------------
// Register gpio_cfg2
// => GPIO pin 2 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg2 0x00000008U
#define Adr_gpio_cfg2     0x00100808U

#define MSK_gpio_cfg2_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg2_iocfg     0           
#define MSK_gpio_cfg2_inv       0x00000004U // [2]
#define SRT_gpio_cfg2_inv       2           
#define MSK_gpio_cfg2_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg2_mode      3           
#define MSK_gpio_cfg2_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg2_count_ref 5           

enum {
	BFW_gpio_cfg2_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg2_inv       = 1,  // [2]
	BFW_gpio_cfg2_mode      = 2,  // [4:3]
	BFW_gpio_cfg2_count_ref = 3,  // [7:5]
	BFW_gpio_cfg2_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG2_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg2_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg2_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg2_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg2_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg2_reserved1; // reserved
} GPIO_CFG2_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG2_BIT_T bf;
} GPIO_CFG2_T;

// ---------------------------------------------------------------------
// Register gpio_cfg3
// => GPIO pin 3 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg3 0x0000000CU
#define Adr_gpio_cfg3     0x0010080CU

#define MSK_gpio_cfg3_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg3_iocfg     0           
#define MSK_gpio_cfg3_inv       0x00000004U // [2]
#define SRT_gpio_cfg3_inv       2           
#define MSK_gpio_cfg3_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg3_mode      3           
#define MSK_gpio_cfg3_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg3_count_ref 5           

enum {
	BFW_gpio_cfg3_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg3_inv       = 1,  // [2]
	BFW_gpio_cfg3_mode      = 2,  // [4:3]
	BFW_gpio_cfg3_count_ref = 3,  // [7:5]
	BFW_gpio_cfg3_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG3_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg3_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg3_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg3_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg3_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg3_reserved1; // reserved
} GPIO_CFG3_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG3_BIT_T bf;
} GPIO_CFG3_T;

// ---------------------------------------------------------------------
// Register gpio_cfg4
// => GPIO pin 4 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg4 0x00000010U
#define Adr_gpio_cfg4     0x00100810U

#define MSK_gpio_cfg4_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg4_iocfg     0           
#define MSK_gpio_cfg4_inv       0x00000004U // [2]
#define SRT_gpio_cfg4_inv       2           
#define MSK_gpio_cfg4_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg4_mode      3           
#define MSK_gpio_cfg4_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg4_count_ref 5           

enum {
	BFW_gpio_cfg4_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg4_inv       = 1,  // [2]
	BFW_gpio_cfg4_mode      = 2,  // [4:3]
	BFW_gpio_cfg4_count_ref = 3,  // [7:5]
	BFW_gpio_cfg4_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG4_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg4_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg4_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg4_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg4_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg4_reserved1; // reserved
} GPIO_CFG4_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG4_BIT_T bf;
} GPIO_CFG4_T;

// ---------------------------------------------------------------------
// Register gpio_cfg5
// => GPIO pin 5 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg5 0x00000014U
#define Adr_gpio_cfg5     0x00100814U

#define MSK_gpio_cfg5_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg5_iocfg     0           
#define MSK_gpio_cfg5_inv       0x00000004U // [2]
#define SRT_gpio_cfg5_inv       2           
#define MSK_gpio_cfg5_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg5_mode      3           
#define MSK_gpio_cfg5_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg5_count_ref 5           

enum {
	BFW_gpio_cfg5_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg5_inv       = 1,  // [2]
	BFW_gpio_cfg5_mode      = 2,  // [4:3]
	BFW_gpio_cfg5_count_ref = 3,  // [7:5]
	BFW_gpio_cfg5_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG5_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg5_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg5_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg5_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg5_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg5_reserved1; // reserved
} GPIO_CFG5_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG5_BIT_T bf;
} GPIO_CFG5_T;

// ---------------------------------------------------------------------
// Register gpio_cfg6
// => GPIO pin 6 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg6 0x00000018U
#define Adr_gpio_cfg6     0x00100818U

#define MSK_gpio_cfg6_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg6_iocfg     0           
#define MSK_gpio_cfg6_inv       0x00000004U // [2]
#define SRT_gpio_cfg6_inv       2           
#define MSK_gpio_cfg6_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg6_mode      3           
#define MSK_gpio_cfg6_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg6_count_ref 5           

enum {
	BFW_gpio_cfg6_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg6_inv       = 1,  // [2]
	BFW_gpio_cfg6_mode      = 2,  // [4:3]
	BFW_gpio_cfg6_count_ref = 3,  // [7:5]
	BFW_gpio_cfg6_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG6_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg6_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg6_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg6_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg6_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg6_reserved1; // reserved
} GPIO_CFG6_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG6_BIT_T bf;
} GPIO_CFG6_T;

// ---------------------------------------------------------------------
// Register gpio_cfg7
// => GPIO pin 7 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg7 0x0000001CU
#define Adr_gpio_cfg7     0x0010081CU

#define MSK_gpio_cfg7_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg7_iocfg     0           
#define MSK_gpio_cfg7_inv       0x00000004U // [2]
#define SRT_gpio_cfg7_inv       2           
#define MSK_gpio_cfg7_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg7_mode      3           
#define MSK_gpio_cfg7_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg7_count_ref 5           

enum {
	BFW_gpio_cfg7_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg7_inv       = 1,  // [2]
	BFW_gpio_cfg7_mode      = 2,  // [4:3]
	BFW_gpio_cfg7_count_ref = 3,  // [7:5]
	BFW_gpio_cfg7_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG7_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg7_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg7_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg7_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg7_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg7_reserved1; // reserved
} GPIO_CFG7_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG7_BIT_T bf;
} GPIO_CFG7_T;

// ---------------------------------------------------------------------
// Register gpio_cfg8
// => GPIO pin 8 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg8 0x00000020U
#define Adr_gpio_cfg8     0x00100820U

#define MSK_gpio_cfg8_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg8_iocfg     0           
#define MSK_gpio_cfg8_inv       0x00000004U // [2]
#define SRT_gpio_cfg8_inv       2           
#define MSK_gpio_cfg8_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg8_mode      3           
#define MSK_gpio_cfg8_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg8_count_ref 5           

enum {
	BFW_gpio_cfg8_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg8_inv       = 1,  // [2]
	BFW_gpio_cfg8_mode      = 2,  // [4:3]
	BFW_gpio_cfg8_count_ref = 3,  // [7:5]
	BFW_gpio_cfg8_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG8_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg8_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg8_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg8_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg8_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg8_reserved1; // reserved
} GPIO_CFG8_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG8_BIT_T bf;
} GPIO_CFG8_T;

// ---------------------------------------------------------------------
// Register gpio_cfg9
// => GPIO pin 9 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg9 0x00000024U
#define Adr_gpio_cfg9     0x00100824U

#define MSK_gpio_cfg9_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg9_iocfg     0           
#define MSK_gpio_cfg9_inv       0x00000004U // [2]
#define SRT_gpio_cfg9_inv       2           
#define MSK_gpio_cfg9_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg9_mode      3           
#define MSK_gpio_cfg9_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg9_count_ref 5           

enum {
	BFW_gpio_cfg9_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg9_inv       = 1,  // [2]
	BFW_gpio_cfg9_mode      = 2,  // [4:3]
	BFW_gpio_cfg9_count_ref = 3,  // [7:5]
	BFW_gpio_cfg9_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG9_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg9_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg9_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg9_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg9_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg9_reserved1; // reserved
} GPIO_CFG9_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_CFG9_BIT_T bf;
} GPIO_CFG9_T;

// ---------------------------------------------------------------------
// Register gpio_cfg10
// => GPIO pin 10 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg10 0x00000028U
#define Adr_gpio_cfg10     0x00100828U

#define MSK_gpio_cfg10_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg10_iocfg     0           
#define MSK_gpio_cfg10_inv       0x00000004U // [2]
#define SRT_gpio_cfg10_inv       2           
#define MSK_gpio_cfg10_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg10_mode      3           
#define MSK_gpio_cfg10_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg10_count_ref 5           

enum {
	BFW_gpio_cfg10_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg10_inv       = 1,  // [2]
	BFW_gpio_cfg10_mode      = 2,  // [4:3]
	BFW_gpio_cfg10_count_ref = 3,  // [7:5]
	BFW_gpio_cfg10_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG10_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg10_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg10_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg10_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg10_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg10_reserved1; // reserved
} GPIO_CFG10_BIT_T;

typedef union {
	unsigned int     val;
	GPIO_CFG10_BIT_T bf;
} GPIO_CFG10_T;

// ---------------------------------------------------------------------
// Register gpio_cfg11
// => GPIO pin 11 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg11 0x0000002CU
#define Adr_gpio_cfg11     0x0010082CU

#define MSK_gpio_cfg11_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg11_iocfg     0           
#define MSK_gpio_cfg11_inv       0x00000004U // [2]
#define SRT_gpio_cfg11_inv       2           
#define MSK_gpio_cfg11_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg11_mode      3           
#define MSK_gpio_cfg11_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg11_count_ref 5           

enum {
	BFW_gpio_cfg11_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg11_inv       = 1,  // [2]
	BFW_gpio_cfg11_mode      = 2,  // [4:3]
	BFW_gpio_cfg11_count_ref = 3,  // [7:5]
	BFW_gpio_cfg11_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG11_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg11_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg11_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg11_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg11_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg11_reserved1; // reserved
} GPIO_CFG11_BIT_T;

typedef union {
	unsigned int     val;
	GPIO_CFG11_BIT_T bf;
} GPIO_CFG11_T;

// ---------------------------------------------------------------------
// Register gpio_cfg12
// => GPIO pin 12 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg12 0x00000030U
#define Adr_gpio_cfg12     0x00100830U

#define MSK_gpio_cfg12_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg12_iocfg     0           
#define MSK_gpio_cfg12_inv       0x00000004U // [2]
#define SRT_gpio_cfg12_inv       2           
#define MSK_gpio_cfg12_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg12_mode      3           
#define MSK_gpio_cfg12_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg12_count_ref 5           

enum {
	BFW_gpio_cfg12_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg12_inv       = 1,  // [2]
	BFW_gpio_cfg12_mode      = 2,  // [4:3]
	BFW_gpio_cfg12_count_ref = 3,  // [7:5]
	BFW_gpio_cfg12_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG12_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg12_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg12_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg12_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg12_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg12_reserved1; // reserved
} GPIO_CFG12_BIT_T;

typedef union {
	unsigned int     val;
	GPIO_CFG12_BIT_T bf;
} GPIO_CFG12_T;

// ---------------------------------------------------------------------
// Register gpio_cfg13
// => GPIO pin 13 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg13 0x00000034U
#define Adr_gpio_cfg13     0x00100834U

#define MSK_gpio_cfg13_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg13_iocfg     0           
#define MSK_gpio_cfg13_inv       0x00000004U // [2]
#define SRT_gpio_cfg13_inv       2           
#define MSK_gpio_cfg13_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg13_mode      3           
#define MSK_gpio_cfg13_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg13_count_ref 5           

enum {
	BFW_gpio_cfg13_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg13_inv       = 1,  // [2]
	BFW_gpio_cfg13_mode      = 2,  // [4:3]
	BFW_gpio_cfg13_count_ref = 3,  // [7:5]
	BFW_gpio_cfg13_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG13_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg13_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg13_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg13_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg13_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg13_reserved1; // reserved
} GPIO_CFG13_BIT_T;

typedef union {
	unsigned int     val;
	GPIO_CFG13_BIT_T bf;
} GPIO_CFG13_T;

// ---------------------------------------------------------------------
// Register gpio_cfg14
// => GPIO pin 14 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg14 0x00000038U
#define Adr_gpio_cfg14     0x00100838U

#define MSK_gpio_cfg14_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg14_iocfg     0           
#define MSK_gpio_cfg14_inv       0x00000004U // [2]
#define SRT_gpio_cfg14_inv       2           
#define MSK_gpio_cfg14_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg14_mode      3           
#define MSK_gpio_cfg14_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg14_count_ref 5           

enum {
	BFW_gpio_cfg14_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg14_inv       = 1,  // [2]
	BFW_gpio_cfg14_mode      = 2,  // [4:3]
	BFW_gpio_cfg14_count_ref = 3,  // [7:5]
	BFW_gpio_cfg14_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG14_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg14_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg14_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg14_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg14_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg14_reserved1; // reserved
} GPIO_CFG14_BIT_T;

typedef union {
	unsigned int     val;
	GPIO_CFG14_BIT_T bf;
} GPIO_CFG14_T;

// ---------------------------------------------------------------------
// Register gpio_cfg15
// => GPIO pin 15 config register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_cfg15 0x0000003CU
#define Adr_gpio_cfg15     0x0010083CU

#define MSK_gpio_cfg15_iocfg     0x00000003U // [1:0]
#define SRT_gpio_cfg15_iocfg     0           
#define MSK_gpio_cfg15_inv       0x00000004U // [2]
#define SRT_gpio_cfg15_inv       2           
#define MSK_gpio_cfg15_mode      0x00000018U // [4:3]
#define SRT_gpio_cfg15_mode      3           
#define MSK_gpio_cfg15_count_ref 0x000000e0U // [7:5]
#define SRT_gpio_cfg15_count_ref 5           

enum {
	BFW_gpio_cfg15_iocfg     = 2,  // [1:0]
	BFW_gpio_cfg15_inv       = 1,  // [2]
	BFW_gpio_cfg15_mode      = 2,  // [4:3]
	BFW_gpio_cfg15_count_ref = 3,  // [7:5]
	BFW_gpio_cfg15_reserved1 = 24  // [31:8]
};

typedef struct GPIO_CFG15_BIT_Ttag {
	unsigned int iocfg     : BFW_gpio_cfg15_iocfg;     // analog to gpio_cfg0 
	unsigned int inv       : BFW_gpio_cfg15_inv;       // analog to gpio_cfg0 
	unsigned int mode      : BFW_gpio_cfg15_mode;      // analog to gpio_cfg0 
	unsigned int count_ref : BFW_gpio_cfg15_count_ref; // analog to gpio_cfg0 
	unsigned int reserved1 : BFW_gpio_cfg15_reserved1; // reserved
} GPIO_CFG15_BIT_T;

typedef union {
	unsigned int     val;
	GPIO_CFG15_BIT_T bf;
} GPIO_CFG15_T;

// ---------------------------------------------------------------------
// Register gpio_tc0
// => GPIO pin 0 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc0 0x00000040U
#define Adr_gpio_tc0     0x00100840U

#define MSK_gpio_tc0_val 0xffffffffU // [31:0]
#define SRT_gpio_tc0_val 0           

enum {
	BFW_gpio_tc0_val = 32  // [31:0]
};

typedef struct GPIO_TC0_BIT_Ttag {
	unsigned int val : BFW_gpio_tc0_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC0_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC0_BIT_T bf;
} GPIO_TC0_T;

// ---------------------------------------------------------------------
// Register gpio_tc1
// => GPIO pin 1 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc1 0x00000044U
#define Adr_gpio_tc1     0x00100844U

#define MSK_gpio_tc1_val 0xffffffffU // [31:0]
#define SRT_gpio_tc1_val 0           

enum {
	BFW_gpio_tc1_val = 32  // [31:0]
};

typedef struct GPIO_TC1_BIT_Ttag {
	unsigned int val : BFW_gpio_tc1_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC1_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC1_BIT_T bf;
} GPIO_TC1_T;

// ---------------------------------------------------------------------
// Register gpio_tc2
// => GPIO pin 2 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc2 0x00000048U
#define Adr_gpio_tc2     0x00100848U

#define MSK_gpio_tc2_val 0xffffffffU // [31:0]
#define SRT_gpio_tc2_val 0           

enum {
	BFW_gpio_tc2_val = 32  // [31:0]
};

typedef struct GPIO_TC2_BIT_Ttag {
	unsigned int val : BFW_gpio_tc2_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC2_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC2_BIT_T bf;
} GPIO_TC2_T;

// ---------------------------------------------------------------------
// Register gpio_tc3
// => GPIO pin 3 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc3 0x0000004CU
#define Adr_gpio_tc3     0x0010084CU

#define MSK_gpio_tc3_val 0xffffffffU // [31:0]
#define SRT_gpio_tc3_val 0           

enum {
	BFW_gpio_tc3_val = 32  // [31:0]
};

typedef struct GPIO_TC3_BIT_Ttag {
	unsigned int val : BFW_gpio_tc3_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC3_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC3_BIT_T bf;
} GPIO_TC3_T;

// ---------------------------------------------------------------------
// Register gpio_tc4
// => GPIO pin 4 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc4 0x00000050U
#define Adr_gpio_tc4     0x00100850U

#define MSK_gpio_tc4_val 0xffffffffU // [31:0]
#define SRT_gpio_tc4_val 0           

enum {
	BFW_gpio_tc4_val = 32  // [31:0]
};

typedef struct GPIO_TC4_BIT_Ttag {
	unsigned int val : BFW_gpio_tc4_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC4_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC4_BIT_T bf;
} GPIO_TC4_T;

// ---------------------------------------------------------------------
// Register gpio_tc5
// => GPIO pin 5 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc5 0x00000054U
#define Adr_gpio_tc5     0x00100854U

#define MSK_gpio_tc5_val 0xffffffffU // [31:0]
#define SRT_gpio_tc5_val 0           

enum {
	BFW_gpio_tc5_val = 32  // [31:0]
};

typedef struct GPIO_TC5_BIT_Ttag {
	unsigned int val : BFW_gpio_tc5_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC5_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC5_BIT_T bf;
} GPIO_TC5_T;

// ---------------------------------------------------------------------
// Register gpio_tc6
// => GPIO pin 6 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc6 0x00000058U
#define Adr_gpio_tc6     0x00100858U

#define MSK_gpio_tc6_val 0xffffffffU // [31:0]
#define SRT_gpio_tc6_val 0           

enum {
	BFW_gpio_tc6_val = 32  // [31:0]
};

typedef struct GPIO_TC6_BIT_Ttag {
	unsigned int val : BFW_gpio_tc6_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC6_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC6_BIT_T bf;
} GPIO_TC6_T;

// ---------------------------------------------------------------------
// Register gpio_tc7
// => GPIO pin 7 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc7 0x0000005CU
#define Adr_gpio_tc7     0x0010085CU

#define MSK_gpio_tc7_val 0xffffffffU // [31:0]
#define SRT_gpio_tc7_val 0           

enum {
	BFW_gpio_tc7_val = 32  // [31:0]
};

typedef struct GPIO_TC7_BIT_Ttag {
	unsigned int val : BFW_gpio_tc7_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC7_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC7_BIT_T bf;
} GPIO_TC7_T;

// ---------------------------------------------------------------------
// Register gpio_tc8
// => GPIO pin 8 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc8 0x00000060U
#define Adr_gpio_tc8     0x00100860U

#define MSK_gpio_tc8_val 0xffffffffU // [31:0]
#define SRT_gpio_tc8_val 0           

enum {
	BFW_gpio_tc8_val = 32  // [31:0]
};

typedef struct GPIO_TC8_BIT_Ttag {
	unsigned int val : BFW_gpio_tc8_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC8_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC8_BIT_T bf;
} GPIO_TC8_T;

// ---------------------------------------------------------------------
// Register gpio_tc9
// => GPIO pin 9 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc9 0x00000064U
#define Adr_gpio_tc9     0x00100864U

#define MSK_gpio_tc9_val 0xffffffffU // [31:0]
#define SRT_gpio_tc9_val 0           

enum {
	BFW_gpio_tc9_val = 32  // [31:0]
};

typedef struct GPIO_TC9_BIT_Ttag {
	unsigned int val : BFW_gpio_tc9_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC9_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_TC9_BIT_T bf;
} GPIO_TC9_T;

// ---------------------------------------------------------------------
// Register gpio_tc10
// => GPIO pin 10 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc10 0x00000068U
#define Adr_gpio_tc10     0x00100868U

#define MSK_gpio_tc10_val 0xffffffffU // [31:0]
#define SRT_gpio_tc10_val 0           

enum {
	BFW_gpio_tc10_val = 32  // [31:0]
};

typedef struct GPIO_TC10_BIT_Ttag {
	unsigned int val : BFW_gpio_tc10_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC10_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_TC10_BIT_T bf;
} GPIO_TC10_T;

// ---------------------------------------------------------------------
// Register gpio_tc11
// => GPIO pin 11 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc11 0x0000006CU
#define Adr_gpio_tc11     0x0010086CU

#define MSK_gpio_tc11_val 0xffffffffU // [31:0]
#define SRT_gpio_tc11_val 0           

enum {
	BFW_gpio_tc11_val = 32  // [31:0]
};

typedef struct GPIO_TC11_BIT_Ttag {
	unsigned int val : BFW_gpio_tc11_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC11_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_TC11_BIT_T bf;
} GPIO_TC11_T;

// ---------------------------------------------------------------------
// Register gpio_tc12
// => GPIO pin 12 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc12 0x00000070U
#define Adr_gpio_tc12     0x00100870U

#define MSK_gpio_tc12_val 0xffffffffU // [31:0]
#define SRT_gpio_tc12_val 0           

enum {
	BFW_gpio_tc12_val = 32  // [31:0]
};

typedef struct GPIO_TC12_BIT_Ttag {
	unsigned int val : BFW_gpio_tc12_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC12_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_TC12_BIT_T bf;
} GPIO_TC12_T;

// ---------------------------------------------------------------------
// Register gpio_tc13
// => GPIO pin 13 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc13 0x00000074U
#define Adr_gpio_tc13     0x00100874U

#define MSK_gpio_tc13_val 0xffffffffU // [31:0]
#define SRT_gpio_tc13_val 0           

enum {
	BFW_gpio_tc13_val = 32  // [31:0]
};

typedef struct GPIO_TC13_BIT_Ttag {
	unsigned int val : BFW_gpio_tc13_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC13_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_TC13_BIT_T bf;
} GPIO_TC13_T;

// ---------------------------------------------------------------------
// Register gpio_tc14
// => GPIO pin 14 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc14 0x00000078U
#define Adr_gpio_tc14     0x00100878U

#define MSK_gpio_tc14_val 0xffffffffU // [31:0]
#define SRT_gpio_tc14_val 0           

enum {
	BFW_gpio_tc14_val = 32  // [31:0]
};

typedef struct GPIO_TC14_BIT_Ttag {
	unsigned int val : BFW_gpio_tc14_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC14_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_TC14_BIT_T bf;
} GPIO_TC14_T;

// ---------------------------------------------------------------------
// Register gpio_tc15
// => GPIO pin 15 threshold or capture register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_tc15 0x0000007CU
#define Adr_gpio_tc15     0x0010087CU

#define MSK_gpio_tc15_val 0xffffffffU // [31:0]
#define SRT_gpio_tc15_val 0           

enum {
	BFW_gpio_tc15_val = 32  // [31:0]
};

typedef struct GPIO_TC15_BIT_Ttag {
	unsigned int val : BFW_gpio_tc15_val; // holds the counter threshold value for the pwm mode 
	                                                        // or the captured value in the capture mode
} GPIO_TC15_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_TC15_BIT_T bf;
} GPIO_TC15_T;

// ---------------------------------------------------------------------
// Register gpio_counter0_ctrl
// => GPIO counter0 control register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter0_ctrl 0x00000080U
#define Adr_gpio_counter0_ctrl     0x00100880U

#define MSK_gpio_counter0_ctrl_run       0x00000001U // [0]
#define SRT_gpio_counter0_ctrl_run       0           
#define MSK_gpio_counter0_ctrl_sym_nasym 0x00000002U // [1]
#define SRT_gpio_counter0_ctrl_sym_nasym 1           
#define MSK_gpio_counter0_ctrl_once      0x00000004U // [2]
#define SRT_gpio_counter0_ctrl_once      2           
#define MSK_gpio_counter0_ctrl_irq_en    0x00000008U // [3]
#define SRT_gpio_counter0_ctrl_irq_en    3           
#define MSK_gpio_counter0_ctrl_cnt_event 0x00000010U // [4]
#define SRT_gpio_counter0_ctrl_cnt_event 4           
#define MSK_gpio_counter0_ctrl_rst_en    0x00000020U // [5]
#define SRT_gpio_counter0_ctrl_rst_en    5           
#define MSK_gpio_counter0_ctrl_sel_event 0x00000040U // [6]
#define SRT_gpio_counter0_ctrl_sel_event 6           
#define MSK_gpio_counter0_ctrl_gpio_ref  0x00000780U // [10:7]
#define SRT_gpio_counter0_ctrl_gpio_ref  7           

enum {
	BFW_gpio_counter0_ctrl_run       = 1,  // [0]
	BFW_gpio_counter0_ctrl_sym_nasym = 1,  // [1]
	BFW_gpio_counter0_ctrl_once      = 1,  // [2]
	BFW_gpio_counter0_ctrl_irq_en    = 1,  // [3]
	BFW_gpio_counter0_ctrl_cnt_event = 1,  // [4]
	BFW_gpio_counter0_ctrl_rst_en    = 1,  // [5]
	BFW_gpio_counter0_ctrl_sel_event = 1,  // [6]
	BFW_gpio_counter0_ctrl_gpio_ref  = 4,  // [10:7]
	BFW_gpio_counter0_ctrl_reserved1 = 21  // [31:11]
};

typedef struct GPIO_COUNTER0_CTRL_BIT_Ttag {
	unsigned int run       : BFW_gpio_counter0_ctrl_run;       // 1 .. start counter; 0 .. stop counter 
	unsigned int sym_nasym : BFW_gpio_counter0_ctrl_sym_nasym; // 1 .. symmetric mode (triangle); 0 .. asymmetric mode (sawtooth) 
	unsigned int once      : BFW_gpio_counter0_ctrl_once;      // 1 .. count once; 0 .. count continue 
	unsigned int irq_en    : BFW_gpio_counter0_ctrl_irq_en;    // 1 .. enable interrupt request; 0 .. disable interrupt request 
	unsigned int cnt_event : BFW_gpio_counter0_ctrl_cnt_event; // 1 .. count external event (edge, level); 0 .. count every clock cycle 
	unsigned int rst_en    : BFW_gpio_counter0_ctrl_rst_en;    // 1 .. enable automatic reset; 0 .. disable automatic reset 
	unsigned int sel_event : BFW_gpio_counter0_ctrl_sel_event; // select external event 
	                                                        // 0 .. (high) level
	                                                        // 1 .. (pos.) edge
	unsigned int gpio_ref  : BFW_gpio_counter0_ctrl_gpio_ref;  // gpio reference (0 - 15) 
	unsigned int reserved1 : BFW_gpio_counter0_ctrl_reserved1; // reserved
} GPIO_COUNTER0_CTRL_BIT_T;

typedef union {
	unsigned int             val;
	GPIO_COUNTER0_CTRL_BIT_T bf;
} GPIO_COUNTER0_CTRL_T;

// ---------------------------------------------------------------------
// Register gpio_counter1_ctrl
// => GPIO counter1 control register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter1_ctrl 0x00000084U
#define Adr_gpio_counter1_ctrl     0x00100884U

#define MSK_gpio_counter1_ctrl_run       0x00000001U // [0]
#define SRT_gpio_counter1_ctrl_run       0           
#define MSK_gpio_counter1_ctrl_sym_nasym 0x00000002U // [1]
#define SRT_gpio_counter1_ctrl_sym_nasym 1           
#define MSK_gpio_counter1_ctrl_once      0x00000004U // [2]
#define SRT_gpio_counter1_ctrl_once      2           
#define MSK_gpio_counter1_ctrl_irq_en    0x00000008U // [3]
#define SRT_gpio_counter1_ctrl_irq_en    3           
#define MSK_gpio_counter1_ctrl_cnt_event 0x00000010U // [4]
#define SRT_gpio_counter1_ctrl_cnt_event 4           
#define MSK_gpio_counter1_ctrl_rst_en    0x00000020U // [5]
#define SRT_gpio_counter1_ctrl_rst_en    5           
#define MSK_gpio_counter1_ctrl_sel_event 0x00000040U // [6]
#define SRT_gpio_counter1_ctrl_sel_event 6           
#define MSK_gpio_counter1_ctrl_gpio_ref  0x00000780U // [10:7]
#define SRT_gpio_counter1_ctrl_gpio_ref  7           

enum {
	BFW_gpio_counter1_ctrl_run       = 1,  // [0]
	BFW_gpio_counter1_ctrl_sym_nasym = 1,  // [1]
	BFW_gpio_counter1_ctrl_once      = 1,  // [2]
	BFW_gpio_counter1_ctrl_irq_en    = 1,  // [3]
	BFW_gpio_counter1_ctrl_cnt_event = 1,  // [4]
	BFW_gpio_counter1_ctrl_rst_en    = 1,  // [5]
	BFW_gpio_counter1_ctrl_sel_event = 1,  // [6]
	BFW_gpio_counter1_ctrl_gpio_ref  = 4,  // [10:7]
	BFW_gpio_counter1_ctrl_reserved1 = 21  // [31:11]
};

typedef struct GPIO_COUNTER1_CTRL_BIT_Ttag {
	unsigned int run       : BFW_gpio_counter1_ctrl_run;       // 1 .. start counter; 0 .. stop counter 
	unsigned int sym_nasym : BFW_gpio_counter1_ctrl_sym_nasym; // 1 .. symmetric mode (triangle); 0 .. asymmetric mode (sawtooth) 
	unsigned int once      : BFW_gpio_counter1_ctrl_once;      // 1 .. count once; 0 .. count continue 
	unsigned int irq_en    : BFW_gpio_counter1_ctrl_irq_en;    // 1 .. enable interrupt request; 0 .. disable interrupt request 
	unsigned int cnt_event : BFW_gpio_counter1_ctrl_cnt_event; // 1 .. count external event (edge, level); 0 .. count every clock cycle 
	unsigned int rst_en    : BFW_gpio_counter1_ctrl_rst_en;    // 1 .. enable automatic reset; 0 .. disable automatic reset 
	unsigned int sel_event : BFW_gpio_counter1_ctrl_sel_event; // select external event 
	                                                        // 0 .. (high) level
	                                                        // 1 .. (pos.) edge
	unsigned int gpio_ref  : BFW_gpio_counter1_ctrl_gpio_ref;  // gpio reference (0 - 15) 
	unsigned int reserved1 : BFW_gpio_counter1_ctrl_reserved1; // reserved
} GPIO_COUNTER1_CTRL_BIT_T;

typedef union {
	unsigned int             val;
	GPIO_COUNTER1_CTRL_BIT_T bf;
} GPIO_COUNTER1_CTRL_T;

// ---------------------------------------------------------------------
// Register gpio_counter2_ctrl
// => GPIO counter2 control register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter2_ctrl 0x00000088U
#define Adr_gpio_counter2_ctrl     0x00100888U

#define MSK_gpio_counter2_ctrl_run       0x00000001U // [0]
#define SRT_gpio_counter2_ctrl_run       0           
#define MSK_gpio_counter2_ctrl_sym_nasym 0x00000002U // [1]
#define SRT_gpio_counter2_ctrl_sym_nasym 1           
#define MSK_gpio_counter2_ctrl_once      0x00000004U // [2]
#define SRT_gpio_counter2_ctrl_once      2           
#define MSK_gpio_counter2_ctrl_irq_en    0x00000008U // [3]
#define SRT_gpio_counter2_ctrl_irq_en    3           
#define MSK_gpio_counter2_ctrl_cnt_event 0x00000010U // [4]
#define SRT_gpio_counter2_ctrl_cnt_event 4           
#define MSK_gpio_counter2_ctrl_rst_en    0x00000020U // [5]
#define SRT_gpio_counter2_ctrl_rst_en    5           
#define MSK_gpio_counter2_ctrl_sel_event 0x00000040U // [6]
#define SRT_gpio_counter2_ctrl_sel_event 6           
#define MSK_gpio_counter2_ctrl_gpio_ref  0x00000780U // [10:7]
#define SRT_gpio_counter2_ctrl_gpio_ref  7           

enum {
	BFW_gpio_counter2_ctrl_run       = 1,  // [0]
	BFW_gpio_counter2_ctrl_sym_nasym = 1,  // [1]
	BFW_gpio_counter2_ctrl_once      = 1,  // [2]
	BFW_gpio_counter2_ctrl_irq_en    = 1,  // [3]
	BFW_gpio_counter2_ctrl_cnt_event = 1,  // [4]
	BFW_gpio_counter2_ctrl_rst_en    = 1,  // [5]
	BFW_gpio_counter2_ctrl_sel_event = 1,  // [6]
	BFW_gpio_counter2_ctrl_gpio_ref  = 4,  // [10:7]
	BFW_gpio_counter2_ctrl_reserved1 = 21  // [31:11]
};

typedef struct GPIO_COUNTER2_CTRL_BIT_Ttag {
	unsigned int run       : BFW_gpio_counter2_ctrl_run;       // 1 .. start counter; 0 .. stop counter 
	unsigned int sym_nasym : BFW_gpio_counter2_ctrl_sym_nasym; // 1 .. symmetric mode (triangle); 0 .. asymmetric mode (sawtooth) 
	unsigned int once      : BFW_gpio_counter2_ctrl_once;      // 1 .. count once; 0 .. count continue 
	unsigned int irq_en    : BFW_gpio_counter2_ctrl_irq_en;    // 1 .. enable interrupt request; 0 .. disable interrupt request 
	unsigned int cnt_event : BFW_gpio_counter2_ctrl_cnt_event; // 1 .. count external event (edge, level); 0 .. count every clock cycle 
	unsigned int rst_en    : BFW_gpio_counter2_ctrl_rst_en;    // 1 .. enable automatic reset; 0 .. disable automatic reset 
	unsigned int sel_event : BFW_gpio_counter2_ctrl_sel_event; // select external event 
	                                                        // 0 .. (high) level
	                                                        // 1 .. (pos.) edge
	unsigned int gpio_ref  : BFW_gpio_counter2_ctrl_gpio_ref;  // gpio reference (0 - 15) 
	unsigned int reserved1 : BFW_gpio_counter2_ctrl_reserved1; // reserved
} GPIO_COUNTER2_CTRL_BIT_T;

typedef union {
	unsigned int             val;
	GPIO_COUNTER2_CTRL_BIT_T bf;
} GPIO_COUNTER2_CTRL_T;

// ---------------------------------------------------------------------
// Register gpio_counter3_ctrl
// => GPIO counter3 control register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter3_ctrl 0x0000008CU
#define Adr_gpio_counter3_ctrl     0x0010088CU

#define MSK_gpio_counter3_ctrl_run       0x00000001U // [0]
#define SRT_gpio_counter3_ctrl_run       0           
#define MSK_gpio_counter3_ctrl_sym_nasym 0x00000002U // [1]
#define SRT_gpio_counter3_ctrl_sym_nasym 1           
#define MSK_gpio_counter3_ctrl_once      0x00000004U // [2]
#define SRT_gpio_counter3_ctrl_once      2           
#define MSK_gpio_counter3_ctrl_irq_en    0x00000008U // [3]
#define SRT_gpio_counter3_ctrl_irq_en    3           
#define MSK_gpio_counter3_ctrl_cnt_event 0x00000010U // [4]
#define SRT_gpio_counter3_ctrl_cnt_event 4           
#define MSK_gpio_counter3_ctrl_rst_en    0x00000020U // [5]
#define SRT_gpio_counter3_ctrl_rst_en    5           
#define MSK_gpio_counter3_ctrl_sel_event 0x00000040U // [6]
#define SRT_gpio_counter3_ctrl_sel_event 6           
#define MSK_gpio_counter3_ctrl_gpio_ref  0x00000780U // [10:7]
#define SRT_gpio_counter3_ctrl_gpio_ref  7           

enum {
	BFW_gpio_counter3_ctrl_run       = 1,  // [0]
	BFW_gpio_counter3_ctrl_sym_nasym = 1,  // [1]
	BFW_gpio_counter3_ctrl_once      = 1,  // [2]
	BFW_gpio_counter3_ctrl_irq_en    = 1,  // [3]
	BFW_gpio_counter3_ctrl_cnt_event = 1,  // [4]
	BFW_gpio_counter3_ctrl_rst_en    = 1,  // [5]
	BFW_gpio_counter3_ctrl_sel_event = 1,  // [6]
	BFW_gpio_counter3_ctrl_gpio_ref  = 4,  // [10:7]
	BFW_gpio_counter3_ctrl_reserved1 = 21  // [31:11]
};

typedef struct GPIO_COUNTER3_CTRL_BIT_Ttag {
	unsigned int run       : BFW_gpio_counter3_ctrl_run;       // 1 .. start counter; 0 .. stop counter 
	unsigned int sym_nasym : BFW_gpio_counter3_ctrl_sym_nasym; // 1 .. symmetric mode (triangle); 0 .. asymmetric mode (sawtooth) 
	unsigned int once      : BFW_gpio_counter3_ctrl_once;      // 1 .. count once; 0 .. count continue 
	unsigned int irq_en    : BFW_gpio_counter3_ctrl_irq_en;    // 1 .. enable interrupt request; 0 .. disable interrupt request 
	unsigned int cnt_event : BFW_gpio_counter3_ctrl_cnt_event; // 1 .. count external event (edge, level); 0 .. count every clock cycle 
	unsigned int rst_en    : BFW_gpio_counter3_ctrl_rst_en;    // 1 .. enable automatic reset; 0 .. disable automatic reset 
	unsigned int sel_event : BFW_gpio_counter3_ctrl_sel_event; // select external event 
	                                                        // 0 .. (high) level
	                                                        // 1 .. (pos.) edge
	unsigned int gpio_ref  : BFW_gpio_counter3_ctrl_gpio_ref;  // gpio reference (0 - 15) 
	unsigned int reserved1 : BFW_gpio_counter3_ctrl_reserved1; // reserved
} GPIO_COUNTER3_CTRL_BIT_T;

typedef union {
	unsigned int             val;
	GPIO_COUNTER3_CTRL_BIT_T bf;
} GPIO_COUNTER3_CTRL_T;

// ---------------------------------------------------------------------
// Register gpio_counter4_ctrl
// => GPIO counter4 control register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter4_ctrl 0x00000090U
#define Adr_gpio_counter4_ctrl     0x00100890U

#define MSK_gpio_counter4_ctrl_run       0x00000001U // [0]
#define SRT_gpio_counter4_ctrl_run       0           
#define MSK_gpio_counter4_ctrl_sym_nasym 0x00000002U // [1]
#define SRT_gpio_counter4_ctrl_sym_nasym 1           
#define MSK_gpio_counter4_ctrl_once      0x00000004U // [2]
#define SRT_gpio_counter4_ctrl_once      2           
#define MSK_gpio_counter4_ctrl_irq_en    0x00000008U // [3]
#define SRT_gpio_counter4_ctrl_irq_en    3           
#define MSK_gpio_counter4_ctrl_cnt_event 0x00000010U // [4]
#define SRT_gpio_counter4_ctrl_cnt_event 4           
#define MSK_gpio_counter4_ctrl_rst_en    0x00000020U // [5]
#define SRT_gpio_counter4_ctrl_rst_en    5           
#define MSK_gpio_counter4_ctrl_sel_event 0x00000040U // [6]
#define SRT_gpio_counter4_ctrl_sel_event 6           
#define MSK_gpio_counter4_ctrl_gpio_ref  0x00000780U // [10:7]
#define SRT_gpio_counter4_ctrl_gpio_ref  7           

enum {
	BFW_gpio_counter4_ctrl_run       = 1,  // [0]
	BFW_gpio_counter4_ctrl_sym_nasym = 1,  // [1]
	BFW_gpio_counter4_ctrl_once      = 1,  // [2]
	BFW_gpio_counter4_ctrl_irq_en    = 1,  // [3]
	BFW_gpio_counter4_ctrl_cnt_event = 1,  // [4]
	BFW_gpio_counter4_ctrl_rst_en    = 1,  // [5]
	BFW_gpio_counter4_ctrl_sel_event = 1,  // [6]
	BFW_gpio_counter4_ctrl_gpio_ref  = 4,  // [10:7]
	BFW_gpio_counter4_ctrl_reserved1 = 21  // [31:11]
};

typedef struct GPIO_COUNTER4_CTRL_BIT_Ttag {
	unsigned int run       : BFW_gpio_counter4_ctrl_run;       // 1 .. start counter; 0 .. stop counter 
	unsigned int sym_nasym : BFW_gpio_counter4_ctrl_sym_nasym; // 1 .. symmetric mode (triangle); 0 .. asymmetric mode (sawtooth) 
	unsigned int once      : BFW_gpio_counter4_ctrl_once;      // 1 .. count once; 0 .. count continue 
	unsigned int irq_en    : BFW_gpio_counter4_ctrl_irq_en;    // 1 .. enable interrupt request; 0 .. disable interrupt request 
	unsigned int cnt_event : BFW_gpio_counter4_ctrl_cnt_event; // 1 .. count external event (edge, level); 0 .. count every clock cycle 
	unsigned int rst_en    : BFW_gpio_counter4_ctrl_rst_en;    // 1 .. enable automatic reset; 0 .. disable automatic reset 
	unsigned int sel_event : BFW_gpio_counter4_ctrl_sel_event; // select external event 
	                                                        // 0 .. (high) level
	                                                        // 1 .. (pos.) edge
	unsigned int gpio_ref  : BFW_gpio_counter4_ctrl_gpio_ref;  // gpio reference (0 - 15) 
	unsigned int reserved1 : BFW_gpio_counter4_ctrl_reserved1; // reserved
} GPIO_COUNTER4_CTRL_BIT_T;

typedef union {
	unsigned int             val;
	GPIO_COUNTER4_CTRL_BIT_T bf;
} GPIO_COUNTER4_CTRL_T;

// ---------------------------------------------------------------------
// Register gpio_counter0_max
// => GPIO counter0 max value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter0_max 0x00000094U
#define Adr_gpio_counter0_max     0x00100894U

#define MSK_gpio_counter0_max_val 0xffffffffU // [31:0]
#define SRT_gpio_counter0_max_val 0           

enum {
	BFW_gpio_counter0_max_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER0_MAX_BIT_Ttag {
	unsigned int val : BFW_gpio_counter0_max_val; // max. counter value where the counter switches from upcounting to 
	                                                        // downcounting (symmetric mode) or jumps to zero (asymmetric mode)
} GPIO_COUNTER0_MAX_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER0_MAX_BIT_T bf;
} GPIO_COUNTER0_MAX_T;

// ---------------------------------------------------------------------
// Register gpio_counter1_max
// => GPIO counter1 max value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter1_max 0x00000098U
#define Adr_gpio_counter1_max     0x00100898U

#define MSK_gpio_counter1_max_val 0xffffffffU // [31:0]
#define SRT_gpio_counter1_max_val 0           

enum {
	BFW_gpio_counter1_max_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER1_MAX_BIT_Ttag {
	unsigned int val : BFW_gpio_counter1_max_val; // max. counter value where the counter switches from upcounting to 
	                                                        // downcounting (symmetric mode) or jumps to zero (asymmetric mode)
} GPIO_COUNTER1_MAX_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER1_MAX_BIT_T bf;
} GPIO_COUNTER1_MAX_T;

// ---------------------------------------------------------------------
// Register gpio_counter2_max
// => GPIO counter2 max value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter2_max 0x0000009CU
#define Adr_gpio_counter2_max     0x0010089CU

#define MSK_gpio_counter2_max_val 0xffffffffU // [31:0]
#define SRT_gpio_counter2_max_val 0           

enum {
	BFW_gpio_counter2_max_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER2_MAX_BIT_Ttag {
	unsigned int val : BFW_gpio_counter2_max_val; // max. counter value where the counter switches from upcounting to 
	                                                        // downcounting (symmetric mode) or jumps to zero (asymmetric mode)
} GPIO_COUNTER2_MAX_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER2_MAX_BIT_T bf;
} GPIO_COUNTER2_MAX_T;

// ---------------------------------------------------------------------
// Register gpio_counter3_max
// => GPIO counter3 max value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter3_max 0x000000A0U
#define Adr_gpio_counter3_max     0x001008A0U

#define MSK_gpio_counter3_max_val 0xffffffffU // [31:0]
#define SRT_gpio_counter3_max_val 0           

enum {
	BFW_gpio_counter3_max_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER3_MAX_BIT_Ttag {
	unsigned int val : BFW_gpio_counter3_max_val; // max. counter value where the counter switches from upcounting to 
	                                                        // downcounting (symmetric mode) or jumps to zero (asymmetric mode)
} GPIO_COUNTER3_MAX_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER3_MAX_BIT_T bf;
} GPIO_COUNTER3_MAX_T;

// ---------------------------------------------------------------------
// Register gpio_counter4_max
// => GPIO counter4 max value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter4_max 0x000000A4U
#define Adr_gpio_counter4_max     0x001008A4U

#define MSK_gpio_counter4_max_val 0xffffffffU // [31:0]
#define SRT_gpio_counter4_max_val 0           

enum {
	BFW_gpio_counter4_max_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER4_MAX_BIT_Ttag {
	unsigned int val : BFW_gpio_counter4_max_val; // max. counter value where the counter switches from upcounting to 
	                                                        // downcounting (symmetric mode) or jumps to zero (asymmetric mode)
} GPIO_COUNTER4_MAX_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER4_MAX_BIT_T bf;
} GPIO_COUNTER4_MAX_T;

// ---------------------------------------------------------------------
// Register gpio_counter0_cnt
// => GPIO counter0 current value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter0_cnt 0x000000A8U
#define Adr_gpio_counter0_cnt     0x001008A8U

#define MSK_gpio_counter0_cnt_val 0xffffffffU // [31:0]
#define SRT_gpio_counter0_cnt_val 0           

enum {
	BFW_gpio_counter0_cnt_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER0_CNT_BIT_Ttag {
	unsigned int val : BFW_gpio_counter0_cnt_val; // curent counter value  
} GPIO_COUNTER0_CNT_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER0_CNT_BIT_T bf;
} GPIO_COUNTER0_CNT_T;

// ---------------------------------------------------------------------
// Register gpio_counter1_cnt
// => GPIO counter1 current value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter1_cnt 0x000000ACU
#define Adr_gpio_counter1_cnt     0x001008ACU

#define MSK_gpio_counter1_cnt_val 0xffffffffU // [31:0]
#define SRT_gpio_counter1_cnt_val 0           

enum {
	BFW_gpio_counter1_cnt_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER1_CNT_BIT_Ttag {
	unsigned int val : BFW_gpio_counter1_cnt_val; // curent counter value  
} GPIO_COUNTER1_CNT_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER1_CNT_BIT_T bf;
} GPIO_COUNTER1_CNT_T;

// ---------------------------------------------------------------------
// Register gpio_counter2_cnt
// => GPIO counter2 current value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter2_cnt 0x000000B0U
#define Adr_gpio_counter2_cnt     0x001008B0U

#define MSK_gpio_counter2_cnt_val 0xffffffffU // [31:0]
#define SRT_gpio_counter2_cnt_val 0           

enum {
	BFW_gpio_counter2_cnt_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER2_CNT_BIT_Ttag {
	unsigned int val : BFW_gpio_counter2_cnt_val; // curent counter value  
} GPIO_COUNTER2_CNT_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER2_CNT_BIT_T bf;
} GPIO_COUNTER2_CNT_T;

// ---------------------------------------------------------------------
// Register gpio_counter3_cnt
// => GPIO counter3 current value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter3_cnt 0x000000B4U
#define Adr_gpio_counter3_cnt     0x001008B4U

#define MSK_gpio_counter3_cnt_val 0xffffffffU // [31:0]
#define SRT_gpio_counter3_cnt_val 0           

enum {
	BFW_gpio_counter3_cnt_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER3_CNT_BIT_Ttag {
	unsigned int val : BFW_gpio_counter3_cnt_val; // curent counter value  
} GPIO_COUNTER3_CNT_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER3_CNT_BIT_T bf;
} GPIO_COUNTER3_CNT_T;

// ---------------------------------------------------------------------
// Register gpio_counter4_cnt
// => GPIO counter4 current value
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_counter4_cnt 0x000000B8U
#define Adr_gpio_counter4_cnt     0x001008B8U

#define MSK_gpio_counter4_cnt_val 0xffffffffU // [31:0]
#define SRT_gpio_counter4_cnt_val 0           

enum {
	BFW_gpio_counter4_cnt_val = 32  // [31:0]
};

typedef struct GPIO_COUNTER4_CNT_BIT_Ttag {
	unsigned int val : BFW_gpio_counter4_cnt_val; // curent counter value  
} GPIO_COUNTER4_CNT_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_COUNTER4_CNT_BIT_T bf;
} GPIO_COUNTER4_CNT_T;

// ---------------------------------------------------------------------
// Register gpio_irq_mask_set
// => GPIO interrupt enable
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_irq_mask_set 0x000000BCU
#define Adr_gpio_irq_mask_set     0x001008BCU

#define MSK_gpio_irq_mask_set_gpio    0x0000ffffU // [15:0]
#define SRT_gpio_irq_mask_set_gpio    0           
#define MSK_gpio_irq_mask_set_cnt0    0x00010000U // [16]
#define SRT_gpio_irq_mask_set_cnt0    16          
#define MSK_gpio_irq_mask_set_cnt1    0x00020000U // [17]
#define SRT_gpio_irq_mask_set_cnt1    17          
#define MSK_gpio_irq_mask_set_cnt2    0x00040000U // [18]
#define SRT_gpio_irq_mask_set_cnt2    18          
#define MSK_gpio_irq_mask_set_cnt3    0x00080000U // [19]
#define SRT_gpio_irq_mask_set_cnt3    19          
#define MSK_gpio_irq_mask_set_cnt4    0x00100000U // [20]
#define SRT_gpio_irq_mask_set_cnt4    20          
#define MSK_gpio_irq_mask_set_systime 0x00200000U // [21]
#define SRT_gpio_irq_mask_set_systime 21          

enum {
	BFW_gpio_irq_mask_set_gpio      = 16, // [15:0]
	BFW_gpio_irq_mask_set_cnt0      = 1,  // [16]
	BFW_gpio_irq_mask_set_cnt1      = 1,  // [17]
	BFW_gpio_irq_mask_set_cnt2      = 1,  // [18]
	BFW_gpio_irq_mask_set_cnt3      = 1,  // [19]
	BFW_gpio_irq_mask_set_cnt4      = 1,  // [20]
	BFW_gpio_irq_mask_set_systime   = 1,  // [21]
	BFW_gpio_irq_mask_set_reserved1 = 10  // [31:22]
};

typedef struct GPIO_IRQ_MASK_SET_BIT_Ttag {
	unsigned int gpio      : BFW_gpio_irq_mask_set_gpio;      // enable interrupt request for every gpio 
	unsigned int cnt0      : BFW_gpio_irq_mask_set_cnt0;      // enable interrupt request for counter0 
	unsigned int cnt1      : BFW_gpio_irq_mask_set_cnt1;      // enable interrupt request for counter1 
	unsigned int cnt2      : BFW_gpio_irq_mask_set_cnt2;      // enable interrupt request for counter2 
	unsigned int cnt3      : BFW_gpio_irq_mask_set_cnt3;      // enable interrupt request for counter3 
	unsigned int cnt4      : BFW_gpio_irq_mask_set_cnt4;      // enable interrupt request for counter4 
	unsigned int systime   : BFW_gpio_irq_mask_set_systime;   // enable interrupt request if sys_time = gpio_systime_cmp 
	unsigned int reserved1 : BFW_gpio_irq_mask_set_reserved1; // reserved
} GPIO_IRQ_MASK_SET_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_IRQ_MASK_SET_BIT_T bf;
} GPIO_IRQ_MASK_SET_T;

// ---------------------------------------------------------------------
// Register gpio_irq_mask_rst
// => GPIO interrupt disable
// => Mode: Mode (cow)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_irq_mask_rst 0x000000C0U
#define Adr_gpio_irq_mask_rst     0x001008C0U

#define MSK_gpio_irq_mask_rst_gpio    0x0000ffffU // [15:0]
#define SRT_gpio_irq_mask_rst_gpio    0           
#define MSK_gpio_irq_mask_rst_cnt0    0x00010000U // [16]
#define SRT_gpio_irq_mask_rst_cnt0    16          
#define MSK_gpio_irq_mask_rst_cnt1    0x00020000U // [17]
#define SRT_gpio_irq_mask_rst_cnt1    17          
#define MSK_gpio_irq_mask_rst_cnt2    0x00040000U // [18]
#define SRT_gpio_irq_mask_rst_cnt2    18          
#define MSK_gpio_irq_mask_rst_cnt3    0x00080000U // [19]
#define SRT_gpio_irq_mask_rst_cnt3    19          
#define MSK_gpio_irq_mask_rst_cnt4    0x00100000U // [20]
#define SRT_gpio_irq_mask_rst_cnt4    20          
#define MSK_gpio_irq_mask_rst_systime 0x00200000U // [21]
#define SRT_gpio_irq_mask_rst_systime 21          

enum {
	BFW_gpio_irq_mask_rst_gpio      = 16, // [15:0]
	BFW_gpio_irq_mask_rst_cnt0      = 1,  // [16]
	BFW_gpio_irq_mask_rst_cnt1      = 1,  // [17]
	BFW_gpio_irq_mask_rst_cnt2      = 1,  // [18]
	BFW_gpio_irq_mask_rst_cnt3      = 1,  // [19]
	BFW_gpio_irq_mask_rst_cnt4      = 1,  // [20]
	BFW_gpio_irq_mask_rst_systime   = 1,  // [21]
	BFW_gpio_irq_mask_rst_reserved1 = 10  // [31:22]
};

typedef struct GPIO_IRQ_MASK_RST_BIT_Ttag {
	unsigned int gpio      : BFW_gpio_irq_mask_rst_gpio;      // write access with '1' disables interrupt request for corresponding gpio 
	unsigned int cnt0      : BFW_gpio_irq_mask_rst_cnt0;      // write access with '1' disables interrupt request for counter0 
	unsigned int cnt1      : BFW_gpio_irq_mask_rst_cnt1;      // write access with '1' disables interrupt request for counter1 
	unsigned int cnt2      : BFW_gpio_irq_mask_rst_cnt2;      // write access with '1' disables interrupt request for counter2 
	unsigned int cnt3      : BFW_gpio_irq_mask_rst_cnt3;      // write access with '1' disables interrupt request for counter3 
	unsigned int cnt4      : BFW_gpio_irq_mask_rst_cnt4;      // write access with '1' disables interrupt request for counter4 
	unsigned int systime   : BFW_gpio_irq_mask_rst_systime;   // write access with '1' disables interrupt request for sys_time 
	unsigned int reserved1 : BFW_gpio_irq_mask_rst_reserved1; // reserved
} GPIO_IRQ_MASK_RST_BIT_T;

typedef union {
	unsigned int            val;
	GPIO_IRQ_MASK_RST_BIT_T bf;
} GPIO_IRQ_MASK_RST_T;

// ---------------------------------------------------------------------
// Register gpio_systime_cmp
// => GPIO sys_time compare value
//    compares this value with systime_ns considering incontinous behaviour of systime_ns
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_systime_cmp 0x000000C4U
#define Adr_gpio_systime_cmp     0x001008C4U

#define MSK_gpio_systime_cmp_val 0xffffffffU // [31:0]
#define SRT_gpio_systime_cmp_val 0           

enum {
	BFW_gpio_systime_cmp_val = 32  // [31:0]
};

typedef struct GPIO_SYSTIME_CMP_BIT_Ttag {
	unsigned int val : BFW_gpio_systime_cmp_val; // compare value for systime  
} GPIO_SYSTIME_CMP_BIT_T;

typedef union {
	unsigned int           val;
	GPIO_SYSTIME_CMP_BIT_T bf;
} GPIO_SYSTIME_CMP_T;

// ---------------------------------------------------------------------
// Register gpio_line
// => GPIO line register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_line 0x000000C8U
#define Adr_gpio_line     0x001008C8U

#define MSK_gpio_line_val 0x0000ffffU // [15:0]
#define SRT_gpio_line_val 0           

enum {
	BFW_gpio_line_val       = 16, // [15:0]
	BFW_gpio_line_reserved1 = 16  // [31:16]
};

typedef struct GPIO_LINE_BIT_Ttag {
	unsigned int val       : BFW_gpio_line_val;       // gpio output values 
	unsigned int reserved1 : BFW_gpio_line_reserved1; // reserved
} GPIO_LINE_BIT_T;

typedef union {
	unsigned int    val;
	GPIO_LINE_BIT_T bf;
} GPIO_LINE_T;

// ---------------------------------------------------------------------
// Register gpio_in
// => GPIO latched register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_in 0x000000CCU
#define Adr_gpio_in     0x001008CCU

#define MSK_gpio_in_val 0x0000ffffU // [15:0]
#define SRT_gpio_in_val 0           

enum {
	BFW_gpio_in_val       = 16, // [15:0]
	BFW_gpio_in_reserved1 = 16  // [31:16]
};

typedef struct GPIO_IN_BIT_Ttag {
	unsigned int val       : BFW_gpio_in_val;       // gpio input values 
	unsigned int reserved1 : BFW_gpio_in_reserved1; // reserved
} GPIO_IN_BIT_T;

typedef union {
	unsigned int  val;
	GPIO_IN_BIT_T bf;
} GPIO_IN_T;

// ---------------------------------------------------------------------
// Register gpio_irq
// => GPIO irq register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_gpio_irq 0x000000D0U
#define Adr_gpio_irq     0x001008D0U

#define MSK_gpio_irq_gpio     0x0000ffffU // [15:0]
#define SRT_gpio_irq_gpio     0           
#define MSK_gpio_irq_cnt0     0x00010000U // [16]
#define SRT_gpio_irq_cnt0     16          
#define MSK_gpio_irq_cnt1     0x00020000U // [17]
#define SRT_gpio_irq_cnt1     17          
#define MSK_gpio_irq_cnt2     0x00040000U // [18]
#define SRT_gpio_irq_cnt2     18          
#define MSK_gpio_irq_cnt3     0x00080000U // [19]
#define SRT_gpio_irq_cnt3     19          
#define MSK_gpio_irq_cnt4     0x00100000U // [20]
#define SRT_gpio_irq_cnt4     20          
#define MSK_gpio_irq_sys_time 0x00200000U // [21]
#define SRT_gpio_irq_sys_time 21          

enum {
	BFW_gpio_irq_gpio      = 16, // [15:0]
	BFW_gpio_irq_cnt0      = 1,  // [16]
	BFW_gpio_irq_cnt1      = 1,  // [17]
	BFW_gpio_irq_cnt2      = 1,  // [18]
	BFW_gpio_irq_cnt3      = 1,  // [19]
	BFW_gpio_irq_cnt4      = 1,  // [20]
	BFW_gpio_irq_sys_time  = 1,  // [21]
	BFW_gpio_irq_reserved1 = 10  // [31:22]
};

typedef struct GPIO_IRQ_BIT_Ttag {
	unsigned int gpio      : BFW_gpio_irq_gpio;      // holds the interrupt bits for every GPIO 
	                                                        // write access with '1' resets the appropriate irq
	unsigned int cnt0      : BFW_gpio_irq_cnt0;      // hold the interrupt bit for counter0 
	unsigned int cnt1      : BFW_gpio_irq_cnt1;      // hold the interrupt bit for counter1 
	unsigned int cnt2      : BFW_gpio_irq_cnt2;      // hold the interrupt bit for counter2 
	unsigned int cnt3      : BFW_gpio_irq_cnt3;      // hold the interrupt bit for counter3 
	unsigned int cnt4      : BFW_gpio_irq_cnt4;      // hold the interrupt bit for counter4 
	unsigned int sys_time  : BFW_gpio_irq_sys_time;  // hold the interrupt bit for sys_time 
	unsigned int reserved1 : BFW_gpio_irq_reserved1; // reserved
} GPIO_IRQ_BIT_T;

typedef union {
	unsigned int   val;
	GPIO_IRQ_BIT_T bf;
} GPIO_IRQ_T;


// =====================================================================
//
// Area of pio
//
// =====================================================================

#define Addr_pio	0x00100900U

// ---------------------------------------------------------------------
// Register pio_in
// => PIO input register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_pio_in 0x00000000U
#define Adr_pio_in     0x00100900U

#define MSK_pio_in_val 0x7fffffffU // [30:0]
#define SRT_pio_in_val 0           

enum {
	BFW_pio_in_val       = 31, // [30:0]
	BFW_pio_in_reserved1 = 1   // [31]
};

typedef struct PIO_IN_BIT_Ttag {
	unsigned int val       : BFW_pio_in_val;       // pio input values 
	unsigned int reserved1 : BFW_pio_in_reserved1; // reserved
} PIO_IN_BIT_T;

typedef union {
	unsigned int val;
	PIO_IN_BIT_T bf;
} PIO_IN_T;

// ---------------------------------------------------------------------
// Register pio_out
// => PIO output register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_pio_out 0x00000004U
#define Adr_pio_out     0x00100904U

#define MSK_pio_out_val 0x7fffffffU // [30:0]
#define SRT_pio_out_val 0           

enum {
	BFW_pio_out_val       = 31, // [30:0]
	BFW_pio_out_reserved1 = 1   // [31]
};

typedef struct PIO_OUT_BIT_Ttag {
	unsigned int val       : BFW_pio_out_val;       // pio output values 
	unsigned int reserved1 : BFW_pio_out_reserved1; // reserved
} PIO_OUT_BIT_T;

typedef union {
	unsigned int  val;
	PIO_OUT_BIT_T bf;
} PIO_OUT_T;

// ---------------------------------------------------------------------
// Register pio_oe
// => PIO output enable register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_pio_oe 0x00000008U
#define Adr_pio_oe     0x00100908U

#define MSK_pio_oe_val 0x7fffffffU // [30:0]
#define SRT_pio_oe_val 0           

enum {
	BFW_pio_oe_val       = 31, // [30:0]
	BFW_pio_oe_reserved1 = 1   // [31]
};

typedef struct PIO_OE_BIT_Ttag {
	unsigned int val       : BFW_pio_oe_val;       // pio output enables 
	unsigned int reserved1 : BFW_pio_oe_reserved1; // reserved
} PIO_OE_BIT_T;

typedef union {
	unsigned int val;
	PIO_OE_BIT_T bf;
} PIO_OE_T;


// =====================================================================
//
// Area of uart0, uart1, uart2
//
// =====================================================================

#define Addr_uart0	0x00100A00U
#define Addr_uart1	0x00100A40U
#define Addr_uart2	0x00100A80U

// ---------------------------------------------------------------------
// Register uartdr
// => data read or written from the interface
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartdr   0x00000000U
#define Adr_uart0_uartdr 0x00100A00U
#define Adr_uart1_uartdr 0x00100A40U
#define Adr_uart2_uartdr 0x00100A80U

#define MSK_uartdr_DATA 0x000000ffU // [7:0]
#define SRT_uartdr_DATA 0           

enum {
	BFW_uartdr_DATA      = 8,  // [7:0]
	BFW_uartdr_reserved1 = 24  // [31:8]
};

typedef struct UARTDR_BIT_Ttag {
	unsigned int DATA      : BFW_uartdr_DATA;      // data read or written from the interface 
	unsigned int reserved1 : BFW_uartdr_reserved1; // reserved
} UARTDR_BIT_T;

typedef union {
	unsigned int val;
	UARTDR_BIT_T bf;
} UARTDR_T;

// ---------------------------------------------------------------------
// Register uartrsr
// => receive status register (read) / Error Clear Register (write)
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartrsr   0x00000004U
#define Adr_uart0_uartrsr 0x00100A04U
#define Adr_uart1_uartrsr 0x00100A44U
#define Adr_uart2_uartrsr 0x00100A84U

#define MSK_uartrsr_FE 0x00000001U // [0]
#define SRT_uartrsr_FE 0           
#define MSK_uartrsr_PE 0x00000002U // [1]
#define SRT_uartrsr_PE 1           
#define MSK_uartrsr_BE 0x00000004U // [2]
#define SRT_uartrsr_BE 2           
#define MSK_uartrsr_OE 0x00000008U // [3]
#define SRT_uartrsr_OE 3           

enum {
	BFW_uartrsr_FE        = 1,  // [0]
	BFW_uartrsr_PE        = 1,  // [1]
	BFW_uartrsr_BE        = 1,  // [2]
	BFW_uartrsr_OE        = 1,  // [3]
	BFW_uartrsr_reserved1 = 28  // [31:4]
};

typedef struct UARTRSR_BIT_Ttag {
	unsigned int FE        : BFW_uartrsr_FE;        // Framing Error 
	unsigned int PE        : BFW_uartrsr_PE;        // Parity Error 
	unsigned int BE        : BFW_uartrsr_BE;        // Break Error 
	unsigned int OE        : BFW_uartrsr_OE;        // Overrun Error 
	unsigned int reserved1 : BFW_uartrsr_reserved1; // reserved
} UARTRSR_BIT_T;

typedef union {
	unsigned int  val;
	UARTRSR_BIT_T bf;
} UARTRSR_T;

// ---------------------------------------------------------------------
// Register uartlcr_h
// => Line control Register, high byte
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartlcr_h   0x00000008U
#define Adr_uart0_uartlcr_h 0x00100A08U
#define Adr_uart1_uartlcr_h 0x00100A48U
#define Adr_uart2_uartlcr_h 0x00100A88U

#define MSK_uartlcr_h_BRK  0x00000001U // [0]
#define SRT_uartlcr_h_BRK  0           
#define MSK_uartlcr_h_PEN  0x00000002U // [1]
#define SRT_uartlcr_h_PEN  1           
#define MSK_uartlcr_h_EPS  0x00000004U // [2]
#define SRT_uartlcr_h_EPS  2           
#define MSK_uartlcr_h_STP2 0x00000008U // [3]
#define SRT_uartlcr_h_STP2 3           
#define MSK_uartlcr_h_FEN  0x00000010U // [4]
#define SRT_uartlcr_h_FEN  4           
#define MSK_uartlcr_h_WLEN 0x00000060U // [6:5]
#define SRT_uartlcr_h_WLEN 5           

enum {
	BFW_uartlcr_h_BRK       = 1,  // [0]
	BFW_uartlcr_h_PEN       = 1,  // [1]
	BFW_uartlcr_h_EPS       = 1,  // [2]
	BFW_uartlcr_h_STP2      = 1,  // [3]
	BFW_uartlcr_h_FEN       = 1,  // [4]
	BFW_uartlcr_h_WLEN      = 2,  // [6:5]
	BFW_uartlcr_h_reserved1 = 25  // [31:7]
};

typedef struct UARTLCR_H_BIT_Ttag {
	unsigned int BRK       : BFW_uartlcr_h_BRK;       // Send Break 
	unsigned int PEN       : BFW_uartlcr_h_PEN;       // Parity Enalble 
	unsigned int EPS       : BFW_uartlcr_h_EPS;       // Even Parity Select 
	unsigned int STP2      : BFW_uartlcr_h_STP2;      // 2 Stop Bits Select 
	unsigned int FEN       : BFW_uartlcr_h_FEN;       // FIFO Enable 
	unsigned int WLEN      : BFW_uartlcr_h_WLEN;      // Word Length 
	                                                        //"00" 5 bits
	                                                        //"01" 6 bits
	                                                        //"10" 7 bits
	                                                        //"11" 8 bits
	unsigned int reserved1 : BFW_uartlcr_h_reserved1; // reserved
} UARTLCR_H_BIT_T;

typedef union {
	unsigned int    val;
	UARTLCR_H_BIT_T bf;
} UARTLCR_H_T;

// ---------------------------------------------------------------------
// Register uartlcr_m
// => Line control Register, middle byte
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartlcr_m   0x0000000CU
#define Adr_uart0_uartlcr_m 0x00100A0CU
#define Adr_uart1_uartlcr_m 0x00100A4CU
#define Adr_uart2_uartlcr_m 0x00100A8CU

#define MSK_uartlcr_m_BAUDDIVMS 0x000000ffU // [7:0]
#define SRT_uartlcr_m_BAUDDIVMS 0           

enum {
	BFW_uartlcr_m_BAUDDIVMS = 8,  // [7:0]
	BFW_uartlcr_m_reserved1 = 24  // [31:8]
};

typedef struct UARTLCR_M_BIT_Ttag {
	unsigned int BAUDDIVMS : BFW_uartlcr_m_BAUDDIVMS; // bauddiv : Baud Divisor Most Significant Byte 
	                                                        // use higher byte of bauddiv = (system clk / (16 * baud rate)) - 1
	                                                        // if not alternative settings by register uartcr_2 are done
	unsigned int reserved1 : BFW_uartlcr_m_reserved1; // reserved
} UARTLCR_M_BIT_T;

typedef union {
	unsigned int    val;
	UARTLCR_M_BIT_T bf;
} UARTLCR_M_T;

// ---------------------------------------------------------------------
// Register uartlcr_l
// => Line control Register, low byte
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartlcr_l   0x00000010U
#define Adr_uart0_uartlcr_l 0x00100A10U
#define Adr_uart1_uartlcr_l 0x00100A50U
#define Adr_uart2_uartlcr_l 0x00100A90U

#define MSK_uartlcr_l_BAUDDIVLS 0x000000ffU // [7:0]
#define SRT_uartlcr_l_BAUDDIVLS 0           

enum {
	BFW_uartlcr_l_BAUDDIVLS = 8,  // [7:0]
	BFW_uartlcr_l_reserved1 = 24  // [31:8]
};

typedef struct UARTLCR_L_BIT_Ttag {
	unsigned int BAUDDIVLS : BFW_uartlcr_l_BAUDDIVLS; // Baud Divisor Least Significant Byte 
	                                                        // use lower byte of bauddiv = (system clk / (16 * baud rate)) - 1
	                                                        // if not alternative settings by register uartcr_2 are done
	unsigned int reserved1 : BFW_uartlcr_l_reserved1; // reserved
} UARTLCR_L_BIT_T;

typedef union {
	unsigned int    val;
	UARTLCR_L_BIT_T bf;
} UARTLCR_L_T;

// ---------------------------------------------------------------------
// Register uartcr
// => uart control Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartcr   0x00000014U
#define Adr_uart0_uartcr 0x00100A14U
#define Adr_uart1_uartcr 0x00100A54U
#define Adr_uart2_uartcr 0x00100A94U

#define MSK_uartcr_uartEN 0x00000001U // [0]
#define SRT_uartcr_uartEN 0           
#define MSK_uartcr_SIREN  0x00000002U // [1]
#define SRT_uartcr_SIREN  1           
#define MSK_uartcr_SIRLP  0x00000004U // [2]
#define SRT_uartcr_SIRLP  2           
#define MSK_uartcr_MSIE   0x00000008U // [3]
#define SRT_uartcr_MSIE   3           
#define MSK_uartcr_RIE    0x00000010U // [4]
#define SRT_uartcr_RIE    4           
#define MSK_uartcr_TIE    0x00000020U // [5]
#define SRT_uartcr_TIE    5           
#define MSK_uartcr_RTIE   0x00000040U // [6]
#define SRT_uartcr_RTIE   6           
#define MSK_uartcr_LBE    0x00000080U // [7]
#define SRT_uartcr_LBE    7           

enum {
	BFW_uartcr_uartEN    = 1,  // [0]
	BFW_uartcr_SIREN     = 1,  // [1]
	BFW_uartcr_SIRLP     = 1,  // [2]
	BFW_uartcr_MSIE      = 1,  // [3]
	BFW_uartcr_RIE       = 1,  // [4]
	BFW_uartcr_TIE       = 1,  // [5]
	BFW_uartcr_RTIE      = 1,  // [6]
	BFW_uartcr_LBE       = 1,  // [7]
	BFW_uartcr_reserved1 = 24  // [31:8]
};

typedef struct UARTCR_BIT_Ttag {
	unsigned int uartEN    : BFW_uartcr_uartEN;    // uart Enable 
	unsigned int SIREN     : BFW_uartcr_SIREN;     // SIR Enable 
	unsigned int SIRLP     : BFW_uartcr_SIRLP;     // IrDA SIR Low Power Mode 
	unsigned int MSIE      : BFW_uartcr_MSIE;      // Modem Status Interrupt Enable 
	unsigned int RIE       : BFW_uartcr_RIE;       // Receive Interrupt Enable 
	unsigned int TIE       : BFW_uartcr_TIE;       // Transmit Interrupt Enable 
	unsigned int RTIE      : BFW_uartcr_RTIE;      // Receive Timeout Interrupt Enable 
	unsigned int LBE       : BFW_uartcr_LBE;       // Loop Back Enable 
	unsigned int reserved1 : BFW_uartcr_reserved1; // reserved
} UARTCR_BIT_T;

typedef union {
	unsigned int val;
	UARTCR_BIT_T bf;
} UARTCR_T;

// ---------------------------------------------------------------------
// Register uartfr
// => uart Flag Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_uartfr   0x00000018U
#define Adr_uart0_uartfr 0x00100A18U
#define Adr_uart1_uartfr 0x00100A58U
#define Adr_uart2_uartfr 0x00100A98U

#define MSK_uartfr_CTS  0x00000001U // [0]
#define SRT_uartfr_CTS  0           
#define MSK_uartfr_DSR  0x00000002U // [1]
#define SRT_uartfr_DSR  1           
#define MSK_uartfr_DCD  0x00000004U // [2]
#define SRT_uartfr_DCD  2           
#define MSK_uartfr_BUSY 0x00000008U // [3]
#define SRT_uartfr_BUSY 3           
#define MSK_uartfr_RXFE 0x00000010U // [4]
#define SRT_uartfr_RXFE 4           
#define MSK_uartfr_TXFF 0x00000020U // [5]
#define SRT_uartfr_TXFF 5           
#define MSK_uartfr_RXFF 0x00000040U // [6]
#define SRT_uartfr_RXFF 6           
#define MSK_uartfr_TXFE 0x00000080U // [7]
#define SRT_uartfr_TXFE 7           

enum {
	BFW_uartfr_CTS       = 1,  // [0]
	BFW_uartfr_DSR       = 1,  // [1]
	BFW_uartfr_DCD       = 1,  // [2]
	BFW_uartfr_BUSY      = 1,  // [3]
	BFW_uartfr_RXFE      = 1,  // [4]
	BFW_uartfr_TXFF      = 1,  // [5]
	BFW_uartfr_RXFF      = 1,  // [6]
	BFW_uartfr_TXFE      = 1,  // [7]
	BFW_uartfr_reserved1 = 24  // [31:8]
};

typedef struct UARTFR_BIT_Ttag {
	unsigned int CTS       : BFW_uartfr_CTS;       // Clear To Send 
	unsigned int DSR       : BFW_uartfr_DSR;       // Data Set Ready 
	unsigned int DCD       : BFW_uartfr_DCD;       // Data Carrier Detect 
	unsigned int BUSY      : BFW_uartfr_BUSY;      // uart BUSY 
	unsigned int RXFE      : BFW_uartfr_RXFE;      // Receive FIFO Empty 
	unsigned int TXFF      : BFW_uartfr_TXFF;      // Transmit FIFO Full 
	unsigned int RXFF      : BFW_uartfr_RXFF;      // Receive FIFO Full 
	unsigned int TXFE      : BFW_uartfr_TXFE;      // Transmit FIFO Empty 
	unsigned int reserved1 : BFW_uartfr_reserved1; // reserved
} UARTFR_BIT_T;

typedef union {
	unsigned int val;
	UARTFR_BIT_T bf;
} UARTFR_T;

// ---------------------------------------------------------------------
// Register uartiir
// => Interrupt Identification (read) / interrupt clear (write)
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartiir   0x0000001CU
#define Adr_uart0_uartiir 0x00100A1CU
#define Adr_uart1_uartiir 0x00100A5CU
#define Adr_uart2_uartiir 0x00100A9CU

#define MSK_uartiir_MIS  0x00000001U // [0]
#define SRT_uartiir_MIS  0           
#define MSK_uartiir_RIS  0x00000002U // [1]
#define SRT_uartiir_RIS  1           
#define MSK_uartiir_TIS  0x00000004U // [2]
#define SRT_uartiir_TIS  2           
#define MSK_uartiir_RTIS 0x00000008U // [3]
#define SRT_uartiir_RTIS 3           

enum {
	BFW_uartiir_MIS       = 1,  // [0]
	BFW_uartiir_RIS       = 1,  // [1]
	BFW_uartiir_TIS       = 1,  // [2]
	BFW_uartiir_RTIS      = 1,  // [3]
	BFW_uartiir_reserved1 = 28  // [31:4]
};

typedef struct UARTIIR_BIT_Ttag {
	unsigned int MIS       : BFW_uartiir_MIS;       // Modem Interrupt Status 
	unsigned int RIS       : BFW_uartiir_RIS;       // Receive Interrupt Status # defaul0x0
	unsigned int TIS       : BFW_uartiir_TIS;       // Transmit Interrupt Status 
	unsigned int RTIS      : BFW_uartiir_RTIS;      // Receive Timeout Interrupt Status 
	unsigned int reserved1 : BFW_uartiir_reserved1; // reserved
} UARTIIR_BIT_T;

typedef union {
	unsigned int  val;
	UARTIIR_BIT_T bf;
} UARTIIR_T;

// ---------------------------------------------------------------------
// Register uartilpr
// => IrDA Low Power Counter Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartilpr   0x00000020U
#define Adr_uart0_uartilpr 0x00100A20U
#define Adr_uart1_uartilpr 0x00100A60U
#define Adr_uart2_uartilpr 0x00100AA0U

#define MSK_uartilpr_ILPDVSR 0x000000ffU // [7:0]
#define SRT_uartilpr_ILPDVSR 0           

enum {
	BFW_uartilpr_ILPDVSR   = 8,  // [7:0]
	BFW_uartilpr_reserved1 = 24  // [31:8]
};

typedef struct UARTILPR_BIT_Ttag {
	unsigned int ILPDVSR   : BFW_uartilpr_ILPDVSR;   // IrDA Low Power Divisor 
	unsigned int reserved1 : BFW_uartilpr_reserved1; // reserved
} UARTILPR_BIT_T;

typedef union {
	unsigned int   val;
	UARTILPR_BIT_T bf;
} UARTILPR_T;

// ---------------------------------------------------------------------
// Register uartrts
// => RTS Control Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartrts   0x00000024U
#define Adr_uart0_uartrts 0x00100A24U
#define Adr_uart1_uartrts 0x00100A64U
#define Adr_uart2_uartrts 0x00100AA4U

#define MSK_uartrts_AUTO    0x00000001U // [0]
#define SRT_uartrts_AUTO    0           
#define MSK_uartrts_RTS     0x00000002U // [1]
#define SRT_uartrts_RTS     1           
#define MSK_uartrts_COUNT   0x00000004U // [2]
#define SRT_uartrts_COUNT   2           
#define MSK_uartrts_MOD2    0x00000008U // [3]
#define SRT_uartrts_MOD2    3           
#define MSK_uartrts_RTS_pol 0x00000010U // [4]
#define SRT_uartrts_RTS_pol 4           
#define MSK_uartrts_CTS_ctr 0x00000020U // [5]
#define SRT_uartrts_CTS_ctr 5           
#define MSK_uartrts_CTS_pol 0x00000040U // [6]
#define SRT_uartrts_CTS_pol 6           
#define MSK_uartrts_STICK   0x00000080U // [7]
#define SRT_uartrts_STICK   7           

enum {
	BFW_uartrts_AUTO      = 1,  // [0]
	BFW_uartrts_RTS       = 1,  // [1]
	BFW_uartrts_COUNT     = 1,  // [2]
	BFW_uartrts_MOD2      = 1,  // [3]
	BFW_uartrts_RTS_pol   = 1,  // [4]
	BFW_uartrts_CTS_ctr   = 1,  // [5]
	BFW_uartrts_CTS_pol   = 1,  // [6]
	BFW_uartrts_STICK     = 1,  // [7]
	BFW_uartrts_reserved1 = 24  // [31:8]
};

typedef struct UARTRTS_BIT_Ttag {
	unsigned int AUTO      : BFW_uartrts_AUTO;      // automatic or controlled by the next bit (RTS) 
	unsigned int RTS       : BFW_uartrts_RTS;       // if AUTO=0: controlled by this bit 
	unsigned int COUNT     : BFW_uartrts_COUNT;     // count base: 1=system clocks, 0=time in bauds 
	unsigned int MOD2      : BFW_uartrts_MOD2;      // mode1/mode2 
	unsigned int RTS_pol   : BFW_uartrts_RTS_pol;   // RTS polarity: 1=active high 
	unsigned int CTS_ctr   : BFW_uartrts_CTS_ctr;   // nUARTCTS control 
	unsigned int CTS_pol   : BFW_uartrts_CTS_pol;   // nUARTCTS polarity: 1=active high 
	unsigned int STICK     : BFW_uartrts_STICK;     // stick parity 
	unsigned int reserved1 : BFW_uartrts_reserved1; // reserved
} UARTRTS_BIT_T;

typedef union {
	unsigned int  val;
	UARTRTS_BIT_T bf;
} UARTRTS_T;

// ---------------------------------------------------------------------
// Register uartforerun
// => RTS forerun cycles
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartforerun   0x00000028U
#define Adr_uart0_uartforerun 0x00100A28U
#define Adr_uart1_uartforerun 0x00100A68U
#define Adr_uart2_uartforerun 0x00100AA8U

#define MSK_uartforerun_FORERUN 0x000000ffU // [7:0]
#define SRT_uartforerun_FORERUN 0           

enum {
	BFW_uartforerun_FORERUN   = 8,  // [7:0]
	BFW_uartforerun_reserved1 = 24  // [31:8]
};

typedef struct UARTFORERUN_BIT_Ttag {
	unsigned int FORERUN   : BFW_uartforerun_FORERUN;   // number of forerun cycles in system clocks or bauds 
	unsigned int reserved1 : BFW_uartforerun_reserved1; // reserved
} UARTFORERUN_BIT_T;

typedef union {
	unsigned int      val;
	UARTFORERUN_BIT_T bf;
} UARTFORERUN_T;

// ---------------------------------------------------------------------
// Register uarttrail
// => RTS trail cycles
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uarttrail   0x0000002CU
#define Adr_uart0_uarttrail 0x00100A2CU
#define Adr_uart1_uarttrail 0x00100A6CU
#define Adr_uart2_uarttrail 0x00100AACU

#define MSK_uarttrail_TRAIL 0x000000ffU // [7:0]
#define SRT_uarttrail_TRAIL 0           

enum {
	BFW_uarttrail_TRAIL     = 8,  // [7:0]
	BFW_uarttrail_reserved1 = 24  // [31:8]
};

typedef struct UARTTRAIL_BIT_Ttag {
	unsigned int TRAIL     : BFW_uarttrail_TRAIL;     // number of trail cycles in system clocks or bauds 
	unsigned int reserved1 : BFW_uarttrail_reserved1; // reserved
} UARTTRAIL_BIT_T;

typedef union {
	unsigned int    val;
	UARTTRAIL_BIT_T bf;
} UARTTRAIL_T;

// ---------------------------------------------------------------------
// Register uartdrvout
// => Drive Output
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartdrvout   0x00000030U
#define Adr_uart0_uartdrvout 0x00100A30U
#define Adr_uart1_uartdrvout 0x00100A70U
#define Adr_uart2_uartdrvout 0x00100AB0U

#define MSK_uartdrvout_DRVTX  0x00000001U // [0]
#define SRT_uartdrvout_DRVTX  0           
#define MSK_uartdrvout_DRVRTS 0x00000002U // [1]
#define SRT_uartdrvout_DRVRTS 1           

enum {
	BFW_uartdrvout_DRVTX     = 1,  // [0]
	BFW_uartdrvout_DRVRTS    = 1,  // [1]
	BFW_uartdrvout_reserved1 = 30  // [31:2]
};

typedef struct UARTDRVOUT_BIT_Ttag {
	unsigned int DRVTX     : BFW_uartdrvout_DRVTX;     // enable driver for TX 
	unsigned int DRVRTS    : BFW_uartdrvout_DRVRTS;    // enable driver for RTS 
	unsigned int reserved1 : BFW_uartdrvout_reserved1; // reserved
} UARTDRVOUT_BIT_T;

typedef union {
	unsigned int     val;
	UARTDRVOUT_BIT_T bf;
} UARTDRVOUT_T;

// ---------------------------------------------------------------------
// Register uartcr_2
// => Control Register 2
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartcr_2   0x00000034U
#define Adr_uart0_uartcr_2 0x00100A34U
#define Adr_uart1_uartcr_2 0x00100A74U
#define Adr_uart2_uartcr_2 0x00100AB4U

#define MSK_uartcr_2_Baud_Rate_Mode 0x00000001U // [0]
#define SRT_uartcr_2_Baud_Rate_Mode 0           

enum {
	BFW_uartcr_2_Baud_Rate_Mode = 1,  // [0]
	BFW_uartcr_2_reserved1      = 31  // [31:1]
};

typedef struct UARTCR_2_BIT_Ttag {
	unsigned int Baud_Rate_Mode : BFW_uartcr_2_Baud_Rate_Mode; // If this bit is set the baud rate is generated more exactly by the following formula:      
	                                                        // value = ( (Baud Rate * 16) / System Frequency ) * 2^16  .
	                                                        // You have to write this 16-bit value in register uartlcr_l and uartlcr_m.
	unsigned int reserved1      : BFW_uartcr_2_reserved1;      // reserved
} UARTCR_2_BIT_T;

typedef union {
	unsigned int   val;
	UARTCR_2_BIT_T bf;
} UARTCR_2_T;

// ---------------------------------------------------------------------
// Register uartrxiflsel
// => RX FIFO trigger level
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uartrxiflsel   0x00000038U
#define Adr_uart0_uartrxiflsel 0x00100A38U
#define Adr_uart1_uartrxiflsel 0x00100A78U
#define Adr_uart2_uartrxiflsel 0x00100AB8U

#define MSK_uartrxiflsel_RXIFLSEL 0x0000001fU // [4:0]
#define SRT_uartrxiflsel_RXIFLSEL 0           

enum {
	BFW_uartrxiflsel_RXIFLSEL  = 5,  // [4:0]
	BFW_uartrxiflsel_reserved1 = 27  // [31:5]
};

typedef struct UARTRXIFLSEL_BIT_Ttag {
	unsigned int RXIFLSEL  : BFW_uartrxiflsel_RXIFLSEL;  //  	Choose a number between 1 and 16. It defines the IRQ trigger level of the receive fifo. 
	                                                        //   The IRQ (UARTRXINTR) will be set if the number of received bytes in the receive fifo are greater than or equal RXIFLSEL. 	
	unsigned int reserved1 : BFW_uartrxiflsel_reserved1; // reserved
} UARTRXIFLSEL_BIT_T;

typedef union {
	unsigned int       val;
	UARTRXIFLSEL_BIT_T bf;
} UARTRXIFLSEL_T;

// ---------------------------------------------------------------------
// Register uarttxiflsel
// => TX FIFO trigger level
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_uarttxiflsel   0x0000003CU
#define Adr_uart0_uarttxiflsel 0x00100A3CU
#define Adr_uart1_uarttxiflsel 0x00100A7CU
#define Adr_uart2_uarttxiflsel 0x00100ABCU

#define MSK_uarttxiflsel_TXIFLSEL 0x0000001fU // [4:0]
#define SRT_uarttxiflsel_TXIFLSEL 0           

enum {
	BFW_uarttxiflsel_TXIFLSEL  = 5,  // [4:0]
	BFW_uarttxiflsel_reserved1 = 27  // [31:5]
};

typedef struct UARTTXIFLSEL_BIT_Ttag {
	unsigned int TXIFLSEL  : BFW_uarttxiflsel_TXIFLSEL;  //  	Choose a number between 1 and 16. It defines the IRQ trigger level of the transmit fifo. 
	                                                        //   The IRQ (UARTTXINTR) will be set if the number of transmitted bytes in the transmit fifo are less than TXIFLSEL.	
	unsigned int reserved1 : BFW_uarttxiflsel_reserved1; // reserved
} UARTTXIFLSEL_BIT_T;

typedef union {
	unsigned int       val;
	UARTTXIFLSEL_BIT_T bf;
} UARTTXIFLSEL_T;


// =====================================================================
//
// Area of miimu
//
// =====================================================================

#define Addr_miimu	0x00100B00U

// ---------------------------------------------------------------------
// Register miimu_reg
// => MIIMU receive/transmit register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_miimu_reg 0x00000000U
#define Adr_miimu_reg     0x00100B00U

#define MSK_miimu_reg_miimu_snrdy      0x00000001U // [0]
#define SRT_miimu_reg_miimu_snrdy      0           
#define MSK_miimu_reg_miimu_preamble   0x00000002U // [1]
#define SRT_miimu_reg_miimu_preamble   1           
#define MSK_miimu_reg_miimu_opmode     0x00000004U // [2]
#define SRT_miimu_reg_miimu_opmode     2           
#define MSK_miimu_reg_miimu_mdc_period 0x00000008U // [3]
#define SRT_miimu_reg_miimu_mdc_period 3           
#define MSK_miimu_reg_phy_nres         0x00000010U // [4]
#define SRT_miimu_reg_phy_nres         4           
#define MSK_miimu_reg_miimu_rta        0x00000020U // [5]
#define SRT_miimu_reg_miimu_rta        5           
#define MSK_miimu_reg_miimu_regaddr    0x000007c0U // [10:6]
#define SRT_miimu_reg_miimu_regaddr    6           
#define MSK_miimu_reg_miimu_phyaddr    0x0000f800U // [15:11]
#define SRT_miimu_reg_miimu_phyaddr    11          
#define MSK_miimu_reg_miimu_data       0xffff0000U // [31:16]
#define SRT_miimu_reg_miimu_data       16          

enum {
	BFW_miimu_reg_miimu_snrdy      = 1,  // [0]
	BFW_miimu_reg_miimu_preamble   = 1,  // [1]
	BFW_miimu_reg_miimu_opmode     = 1,  // [2]
	BFW_miimu_reg_miimu_mdc_period = 1,  // [3]
	BFW_miimu_reg_phy_nres         = 1,  // [4]
	BFW_miimu_reg_miimu_rta        = 1,  // [5]
	BFW_miimu_reg_miimu_regaddr    = 5,  // [10:6]
	BFW_miimu_reg_miimu_phyaddr    = 5,  // [15:11]
	BFW_miimu_reg_miimu_data       = 16  // [31:16]
};

typedef struct MIIMU_REG_BIT_Ttag {
	unsigned int miimu_snrdy      : BFW_miimu_reg_miimu_snrdy;      // start not ready 
	unsigned int miimu_preamble   : BFW_miimu_reg_miimu_preamble;   // send preamble 
	unsigned int miimu_opmode     : BFW_miimu_reg_miimu_opmode;     // operation mode 
	                                                        // 1..write					  
	                                                        // 0..read					  
	unsigned int miimu_mdc_period : BFW_miimu_reg_miimu_mdc_period; // mdc period 
	                                                        // 1..800ns  																		 
	                                                        // 0..400ns  																		 
	unsigned int phy_nres         : BFW_miimu_reg_phy_nres;         // phy hardware nReset (activ low!) 
	                                                        // If this bit and the miimu_snrdy-bit ist set, the phys will be hardware-reseted.	 
	                                                        // No data will be transmitted in this case. 										 
	                                                        // After reset the miimu-controller will set this bit to 1 again.					 
	unsigned int miimu_rta        : BFW_miimu_reg_miimu_rta;        // read turn around field 
	                                                        // 0.. one bit																		 
	                                                        // 1.. two bits  																	 
	unsigned int miimu_regaddr    : BFW_miimu_reg_miimu_regaddr;    // register address 
	unsigned int miimu_phyaddr    : BFW_miimu_reg_miimu_phyaddr;    // phy address 
	unsigned int miimu_data       : BFW_miimu_reg_miimu_data;       // data to or from phy register 
} MIIMU_REG_BIT_T;

typedef union {
	unsigned int    val;
	MIIMU_REG_BIT_T bf;
} MIIMU_REG_T;

// ---------------------------------------------------------------------
// Register miimu_sw_en
// => MIIMU software mode enable register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_miimu_sw_en 0x00000004U
#define Adr_miimu_sw_en     0x00100B04U

#define MSK_miimu_sw_en_miimu_sw_en 0x00000001U // [0]
#define SRT_miimu_sw_en_miimu_sw_en 0           

enum {
	BFW_miimu_sw_en_miimu_sw_en = 1,  // [0]
	BFW_miimu_sw_en_reserved1   = 31  // [31:1]
};

typedef struct MIIMU_SW_EN_BIT_Ttag {
	unsigned int miimu_sw_en : BFW_miimu_sw_en_miimu_sw_en; // enables software mode 
	                                                        // mdc, mdo and mdoe have to set by software
	                                                        // the current md_in value can read from miimu_sw_mdi 
	unsigned int reserved1   : BFW_miimu_sw_en_reserved1;   // reserved
} MIIMU_SW_EN_BIT_T;

typedef union {
	unsigned int      val;
	MIIMU_SW_EN_BIT_T bf;
} MIIMU_SW_EN_T;

// ---------------------------------------------------------------------
// Register miimu_sw_mdc
// => MIIMU software mode MDC register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_miimu_sw_mdc 0x00000008U
#define Adr_miimu_sw_mdc     0x00100B08U

#define MSK_miimu_sw_mdc_miimu_sw_mdc 0x00000001U // [0]
#define SRT_miimu_sw_mdc_miimu_sw_mdc 0           

enum {
	BFW_miimu_sw_mdc_miimu_sw_mdc = 1,  // [0]
	BFW_miimu_sw_mdc_reserved1    = 31  // [31:1]
};

typedef struct MIIMU_SW_MDC_BIT_Ttag {
	unsigned int miimu_sw_mdc : BFW_miimu_sw_mdc_miimu_sw_mdc; // MDC value for software mode  
	unsigned int reserved1    : BFW_miimu_sw_mdc_reserved1;    // reserved
} MIIMU_SW_MDC_BIT_T;

typedef union {
	unsigned int       val;
	MIIMU_SW_MDC_BIT_T bf;
} MIIMU_SW_MDC_T;

// ---------------------------------------------------------------------
// Register miimu_sw_mdo
// => MIIMU software mode MDO register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_miimu_sw_mdo 0x0000000CU
#define Adr_miimu_sw_mdo     0x00100B0CU

#define MSK_miimu_sw_mdo_miimu_sw_mdo 0x00000001U // [0]
#define SRT_miimu_sw_mdo_miimu_sw_mdo 0           

enum {
	BFW_miimu_sw_mdo_miimu_sw_mdo = 1,  // [0]
	BFW_miimu_sw_mdo_reserved1    = 31  // [31:1]
};

typedef struct MIIMU_SW_MDO_BIT_Ttag {
	unsigned int miimu_sw_mdo : BFW_miimu_sw_mdo_miimu_sw_mdo; // MDO value for software mode  
	unsigned int reserved1    : BFW_miimu_sw_mdo_reserved1;    // reserved
} MIIMU_SW_MDO_BIT_T;

typedef union {
	unsigned int       val;
	MIIMU_SW_MDO_BIT_T bf;
} MIIMU_SW_MDO_T;

// ---------------------------------------------------------------------
// Register miimu_sw_mdoe
// => MIIMU software mode MDOE register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_miimu_sw_mdoe 0x00000010U
#define Adr_miimu_sw_mdoe     0x00100B10U

#define MSK_miimu_sw_mdoe_miimu_sw_mdoe 0x00000001U // [0]
#define SRT_miimu_sw_mdoe_miimu_sw_mdoe 0           

enum {
	BFW_miimu_sw_mdoe_miimu_sw_mdoe = 1,  // [0]
	BFW_miimu_sw_mdoe_reserved1     = 31  // [31:1]
};

typedef struct MIIMU_SW_MDOE_BIT_Ttag {
	unsigned int miimu_sw_mdoe : BFW_miimu_sw_mdoe_miimu_sw_mdoe; // MDOE value for software mode  
	unsigned int reserved1     : BFW_miimu_sw_mdoe_reserved1;     // reserved
} MIIMU_SW_MDOE_BIT_T;

typedef union {
	unsigned int        val;
	MIIMU_SW_MDOE_BIT_T bf;
} MIIMU_SW_MDOE_T;

// ---------------------------------------------------------------------
// Register miimu_sw_mdi
// => MIIMU software mode MDI register
// => Mode: Mode (ro)
// ---------------------------------------------------------------------

#define REL_Adr_miimu_sw_mdi 0x00000014U
#define Adr_miimu_sw_mdi     0x00100B14U

#define MSK_miimu_sw_mdi_miimu_sw_mdi 0x00000001U // [0]
#define SRT_miimu_sw_mdi_miimu_sw_mdi 0           

enum {
	BFW_miimu_sw_mdi_miimu_sw_mdi = 1,  // [0]
	BFW_miimu_sw_mdi_reserved1    = 31  // [31:1]
};

typedef struct MIIMU_SW_MDI_BIT_Ttag {
	unsigned int miimu_sw_mdi : BFW_miimu_sw_mdi_miimu_sw_mdi; // current MDI value 
	unsigned int reserved1    : BFW_miimu_sw_mdi_reserved1;    // reserved
} MIIMU_SW_MDI_BIT_T;

typedef union {
	unsigned int       val;
	MIIMU_SW_MDI_BIT_T bf;
} MIIMU_SW_MDI_T;


// =====================================================================
//
// Area of spi
//
// =====================================================================

#define Addr_spi	0x00100C00U

// ---------------------------------------------------------------------
// Register spi_data_register
// => spi data register (DR)
//    2 data bytes with valid bits
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_spi_data_register 0x00000000U
#define Adr_spi_data_register     0x00100C00U

#define MSK_spi_data_register_data_byte_0 0x000000ffU // [7:0]
#define SRT_spi_data_register_data_byte_0 0           
#define MSK_spi_data_register_data_byte_1 0x0000ff00U // [15:8]
#define SRT_spi_data_register_data_byte_1 8           
#define MSK_spi_data_register_dr_valid0   0x00010000U // [16]
#define SRT_spi_data_register_dr_valid0   16          
#define MSK_spi_data_register_dr_valid1   0x00020000U // [17]
#define SRT_spi_data_register_dr_valid1   17          

enum {
	BFW_spi_data_register_data_byte_0 = 8,  // [7:0]
	BFW_spi_data_register_data_byte_1 = 8,  // [15:8]
	BFW_spi_data_register_dr_valid0   = 1,  // [16]
	BFW_spi_data_register_dr_valid1   = 1,  // [17]
	BFW_spi_data_register_reserved1   = 14  // [31:18]
};

typedef struct SPI_DATA_REGISTER_BIT_Ttag {
	unsigned int data_byte_0 : BFW_spi_data_register_data_byte_0; // data byte                 
	unsigned int data_byte_1 : BFW_spi_data_register_data_byte_1; // data byte                 
	unsigned int dr_valid0   : BFW_spi_data_register_dr_valid0;   // valid bit for data_byte_0 
	unsigned int dr_valid1   : BFW_spi_data_register_dr_valid1;   // valid bit for data_byte_1 
	unsigned int reserved1   : BFW_spi_data_register_reserved1;   // reserved
} SPI_DATA_REGISTER_BIT_T;

typedef union {
	unsigned int            val;
	SPI_DATA_REGISTER_BIT_T bf;
} SPI_DATA_REGISTER_T;

// ---------------------------------------------------------------------
// Register spi_status_register
// => spi status register (SR):
//    Shows the actual status of the spi interface.
//    Bits 24..18 show occured interrupts,
//    writing ones into these bits deletes the interrupts.
//    Writing into other bits has no effect
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_spi_status_register 0x00000004U
#define Adr_spi_status_register     0x00100C04U

#define MSK_spi_status_register_SR_in_fuel_val  0x000001ffU // [8:0]
#define SRT_spi_status_register_SR_in_fuel_val  0           
#define MSK_spi_status_register_SR_out_fuel_val 0x0003fe00U // [17:9]
#define SRT_spi_status_register_SR_out_fuel_val 9           
#define MSK_spi_status_register_SR_in_fuel      0x00040000U // [18]
#define SRT_spi_status_register_SR_in_fuel      18          
#define MSK_spi_status_register_SR_in_recdata   0x00080000U // [19]
#define SRT_spi_status_register_SR_in_recdata   19          
#define MSK_spi_status_register_SR_in_full      0x00100000U // [20]
#define SRT_spi_status_register_SR_in_full      20          
#define MSK_spi_status_register_SR_out_fuel     0x00200000U // [21]
#define SRT_spi_status_register_SR_out_fuel     21          
#define MSK_spi_status_register_SR_out_fw       0x00400000U // [22]
#define SRT_spi_status_register_SR_out_fw       22          
#define MSK_spi_status_register_SR_out_empty    0x00800000U // [23]
#define SRT_spi_status_register_SR_out_empty    23          
#define MSK_spi_status_register_SR_out_full     0x01000000U // [24]
#define SRT_spi_status_register_SR_out_full     24          
#define MSK_spi_status_register_SR_selected     0x02000000U // [25]
#define SRT_spi_status_register_SR_selected     25          

enum {
	BFW_spi_status_register_SR_in_fuel_val  = 9, // [8:0]
	BFW_spi_status_register_SR_out_fuel_val = 9, // [17:9]
	BFW_spi_status_register_SR_in_fuel      = 1, // [18]
	BFW_spi_status_register_SR_in_recdata   = 1, // [19]
	BFW_spi_status_register_SR_in_full      = 1, // [20]
	BFW_spi_status_register_SR_out_fuel     = 1, // [21]
	BFW_spi_status_register_SR_out_fw       = 1, // [22]
	BFW_spi_status_register_SR_out_empty    = 1, // [23]
	BFW_spi_status_register_SR_out_full     = 1, // [24]
	BFW_spi_status_register_SR_selected     = 1, // [25]
	BFW_spi_status_register_reserved1       = 6  // [31:26]
};

typedef struct SPI_STATUS_REGISTER_BIT_Ttag {
	unsigned int SR_in_fuel_val  : BFW_spi_status_register_SR_in_fuel_val;  // input FIFO fuel (number of bytes)                
	unsigned int SR_out_fuel_val : BFW_spi_status_register_SR_out_fuel_val; // output FIFO fuel (number of bytes)               
	unsigned int SR_in_fuel      : BFW_spi_status_register_SR_in_fuel;      // adjustable fuel value of input FIFO reached      
	unsigned int SR_in_recdata   : BFW_spi_status_register_SR_in_recdata;   // valid data bytes in input FIFO                   
	unsigned int SR_in_full      : BFW_spi_status_register_SR_in_full;      // input FIFO is full                               
	unsigned int SR_out_fuel     : BFW_spi_status_register_SR_out_fuel;     // adjustable fuel value of output FIFO reached     
	unsigned int SR_out_fw       : BFW_spi_status_register_SR_out_fw;       // ARM is writing data to fast into output FIFO     
	unsigned int SR_out_empty    : BFW_spi_status_register_SR_out_empty;    // output FIFO is empty and interface sending data  
	                                                        // (occures only in slave mode)
	unsigned int SR_out_full     : BFW_spi_status_register_SR_out_full;     // output FIFO is full                              
	unsigned int SR_selected     : BFW_spi_status_register_SR_selected;     // external master has access to spi-interface      
	unsigned int reserved1       : BFW_spi_status_register_reserved1;       // reserved
} SPI_STATUS_REGISTER_BIT_T;

typedef union {
	unsigned int              val;
	SPI_STATUS_REGISTER_BIT_T bf;
} SPI_STATUS_REGISTER_T;

// ---------------------------------------------------------------------
// Register spi_control_register
// => spi control register (CR)
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_spi_control_register 0x00000008U
#define Adr_spi_control_register     0x00100C08U

#define MSK_spi_control_register_CR_softreset   0x00000001U // [0]
#define SRT_spi_control_register_CR_softreset   0           
#define MSK_spi_control_register_CR_speed       0x0000001eU // [4:1]
#define SRT_spi_control_register_CR_speed       1           
#define MSK_spi_control_register_CR_read        0x00000040U // [6]
#define SRT_spi_control_register_CR_read        6           
#define MSK_spi_control_register_CR_write       0x00000080U // [7]
#define SRT_spi_control_register_CR_write       7           
#define MSK_spi_control_register_CR_ss          0x00000700U // [10:8]
#define SRT_spi_control_register_CR_ss          8           
#define MSK_spi_control_register_CR_clr_infifo  0x00100000U // [20]
#define SRT_spi_control_register_CR_clr_infifo  20          
#define MSK_spi_control_register_CR_clr_outfifo 0x00200000U // [21]
#define SRT_spi_control_register_CR_clr_outfifo 21          
#define MSK_spi_control_register_CR_burstdelay  0x01c00000U // [24:22]
#define SRT_spi_control_register_CR_burstdelay  22          
#define MSK_spi_control_register_CR_burst       0x0e000000U // [27:25]
#define SRT_spi_control_register_CR_burst       25          
#define MSK_spi_control_register_CR_ncpha       0x10000000U // [28]
#define SRT_spi_control_register_CR_ncpha       28          
#define MSK_spi_control_register_CR_cpol        0x20000000U // [29]
#define SRT_spi_control_register_CR_cpol        29          
#define MSK_spi_control_register_CR_ms          0x40000000U // [30]
#define SRT_spi_control_register_CR_ms          30          
#define MSK_spi_control_register_CR_en          0x80000000U // [31]
#define SRT_spi_control_register_CR_en          31          

enum {
	BFW_spi_control_register_CR_softreset   = 1, // [0]
	BFW_spi_control_register_CR_speed       = 4, // [4:1]
	BFW_spi_control_register_reserved1      = 1, // [5]
	BFW_spi_control_register_CR_read        = 1, // [6]
	BFW_spi_control_register_CR_write       = 1, // [7]
	BFW_spi_control_register_CR_ss          = 3, // [10:8]
	BFW_spi_control_register_reserved2      = 9, // [19:11]
	BFW_spi_control_register_CR_clr_infifo  = 1, // [20]
	BFW_spi_control_register_CR_clr_outfifo = 1, // [21]
	BFW_spi_control_register_CR_burstdelay  = 3, // [24:22]
	BFW_spi_control_register_CR_burst       = 3, // [27:25]
	BFW_spi_control_register_CR_ncpha       = 1, // [28]
	BFW_spi_control_register_CR_cpol        = 1, // [29]
	BFW_spi_control_register_CR_ms          = 1, // [30]
	BFW_spi_control_register_CR_en          = 1  // [31]
};

typedef struct SPI_CONTROL_REGISTER_BIT_Ttag {
	unsigned int CR_softreset   : BFW_spi_control_register_CR_softreset;   // TBD                                             
	unsigned int CR_speed       : BFW_spi_control_register_CR_speed;       // clock devider for SPI clock (2 - 2^16)          
	unsigned int reserved1      : BFW_spi_control_register_reserved1;      // reserved
	unsigned int CR_read        : BFW_spi_control_register_CR_read;        // 1:spi interface read data                       
	unsigned int CR_write       : BFW_spi_control_register_CR_write;       // 1:spi interface write data                      
	unsigned int CR_ss          : BFW_spi_control_register_CR_ss;          // external slave select                           
	unsigned int reserved2      : BFW_spi_control_register_reserved2;      // reserved
	unsigned int CR_clr_infifo  : BFW_spi_control_register_CR_clr_infifo;  // clear input FIFO                                
	unsigned int CR_clr_outfifo : BFW_spi_control_register_CR_clr_outfifo; // clear output FIFO                               
	unsigned int CR_burstdelay  : BFW_spi_control_register_CR_burstdelay;  // delay between transmittion of 2 data bytes      
	                                                        // (0 to 7 SCK cycles)
	unsigned int CR_burst       : BFW_spi_control_register_CR_burst;       // burst lenght = 2^CR_burst                       
	unsigned int CR_ncpha       : BFW_spi_control_register_CR_ncpha;       // relativ to CR_cpol                              
	                                                        // 1:change data to primary spi_sck edge
	                                                        //   data are activ to secondary spi_sck edge
	                                                        // 1:change data to secondary spi_sck edge
	                                                        //   data are activ to primary spi_sck edge
	unsigned int CR_cpol        : BFW_spi_control_register_CR_cpol;        // 1:falling edge of spi_sck is primary
	                                                        // 0:rising edge of spi_sck is primary
	unsigned int CR_ms          : BFW_spi_control_register_CR_ms;          // 1:master mode 0:slave mode                      
	unsigned int CR_en          : BFW_spi_control_register_CR_en;          // 1:enable 0:disable spi interface                
} SPI_CONTROL_REGISTER_BIT_T;

typedef union {
	unsigned int               val;
	SPI_CONTROL_REGISTER_BIT_T bf;
} SPI_CONTROL_REGISTER_T;

// ---------------------------------------------------------------------
// Register spi_interrupt_control_register
// => spi interrupt control register (IR)
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_spi_interrupt_control_register 0x0000000CU
#define Adr_spi_interrupt_control_register     0x00100C0CU

#define MSK_spi_interrupt_control_register_IR_in_fuel       0x000001ffU // [8:0]
#define SRT_spi_interrupt_control_register_IR_in_fuel       0           
#define MSK_spi_interrupt_control_register_IR_out_fuel      0x0003fe00U // [17:9]
#define SRT_spi_interrupt_control_register_IR_out_fuel      9           
#define MSK_spi_interrupt_control_register_IR_in_fuel_en    0x00040000U // [18]
#define SRT_spi_interrupt_control_register_IR_in_fuel_en    18          
#define MSK_spi_interrupt_control_register_IR_in_recdata_en 0x00080000U // [19]
#define SRT_spi_interrupt_control_register_IR_in_recdata_en 19          
#define MSK_spi_interrupt_control_register_IR_in_full_en    0x00100000U // [20]
#define SRT_spi_interrupt_control_register_IR_in_full_en    20          
#define MSK_spi_interrupt_control_register_IR_out_fuel_en   0x00200000U // [21]
#define SRT_spi_interrupt_control_register_IR_out_fuel_en   21          
#define MSK_spi_interrupt_control_register_IR_out_fw_en     0x00400000U // [22]
#define SRT_spi_interrupt_control_register_IR_out_fw_en     22          
#define MSK_spi_interrupt_control_register_IR_out_empty_en  0x00800000U // [23]
#define SRT_spi_interrupt_control_register_IR_out_empty_en  23          
#define MSK_spi_interrupt_control_register_IR_out_full_en   0x01000000U // [24]
#define SRT_spi_interrupt_control_register_IR_out_full_en   24          

enum {
	BFW_spi_interrupt_control_register_IR_in_fuel       = 9, // [8:0]
	BFW_spi_interrupt_control_register_IR_out_fuel      = 9, // [17:9]
	BFW_spi_interrupt_control_register_IR_in_fuel_en    = 1, // [18]
	BFW_spi_interrupt_control_register_IR_in_recdata_en = 1, // [19]
	BFW_spi_interrupt_control_register_IR_in_full_en    = 1, // [20]
	BFW_spi_interrupt_control_register_IR_out_fuel_en   = 1, // [21]
	BFW_spi_interrupt_control_register_IR_out_fw_en     = 1, // [22]
	BFW_spi_interrupt_control_register_IR_out_empty_en  = 1, // [23]
	BFW_spi_interrupt_control_register_IR_out_full_en   = 1, // [24]
	BFW_spi_interrupt_control_register_reserved1        = 7  // [31:25]
};

typedef struct SPI_INTERRUPT_CONTROL_REGISTER_BIT_Ttag {
	unsigned int IR_in_fuel       : BFW_spi_interrupt_control_register_IR_in_fuel;       // adjustable fuel value of input FIFO           
	unsigned int IR_out_fuel      : BFW_spi_interrupt_control_register_IR_out_fuel;      // adjustable fuel value of output FIFO          
	unsigned int IR_in_fuel_en    : BFW_spi_interrupt_control_register_IR_in_fuel_en;    // IRQ enable for irq_spi(0)		             
	unsigned int IR_in_recdata_en : BFW_spi_interrupt_control_register_IR_in_recdata_en; // IRQ enable for irq_spi(1)		             
	unsigned int IR_in_full_en    : BFW_spi_interrupt_control_register_IR_in_full_en;    // IRQ enable for irq_spi(2)		             
	unsigned int IR_out_fuel_en   : BFW_spi_interrupt_control_register_IR_out_fuel_en;   // IRQ enable for irq_spi(3)		             
	unsigned int IR_out_fw_en     : BFW_spi_interrupt_control_register_IR_out_fw_en;     // IRQ enable for irq_spi(4)		             
	unsigned int IR_out_empty_en  : BFW_spi_interrupt_control_register_IR_out_empty_en;  // IRQ enable for irq_spi(5)		             
	unsigned int IR_out_full_en   : BFW_spi_interrupt_control_register_IR_out_full_en;   // IRQ enable for irq_spi(6)		             
	unsigned int reserved1        : BFW_spi_interrupt_control_register_reserved1;        // reserved
} SPI_INTERRUPT_CONTROL_REGISTER_BIT_T;

typedef union {
	unsigned int                         val;
	SPI_INTERRUPT_CONTROL_REGISTER_BIT_T bf;
} SPI_INTERRUPT_CONTROL_REGISTER_T;


// =====================================================================
//
// Area of i2c
//
// =====================================================================

#define Addr_i2c	0x00100D00U

// ---------------------------------------------------------------------
// Register i2c_ctrl
// => I2C Control Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_i2c_ctrl 0x00000000U
#define Adr_i2c_ctrl     0x00100D00U

#define MSK_i2c_ctrl_ENABLE 0x00000001U // [0]
#define SRT_i2c_ctrl_ENABLE 0           
#define MSK_i2c_ctrl_SPEED  0x0000000eU // [3:1]
#define SRT_i2c_ctrl_SPEED  1           
#define MSK_i2c_ctrl_ID     0x000007f0U // [10:4]
#define SRT_i2c_ctrl_ID     4           

enum {
	BFW_i2c_ctrl_ENABLE    = 1,  // [0]
	BFW_i2c_ctrl_SPEED     = 3,  // [3:1]
	BFW_i2c_ctrl_ID        = 7,  // [10:4]
	BFW_i2c_ctrl_reserved1 = 21  // [31:11]
};

typedef struct I2C_CTRL_BIT_Ttag {
	unsigned int ENABLE    : BFW_i2c_ctrl_ENABLE;    // 0: interface disable          
	                                                        // 1: interface enable
	unsigned int SPEED     : BFW_i2c_ctrl_SPEED;     // speed select                  
	                                                        // when 100 MHz system clock:
	                                                        // 000 -   25 kHz
	                                                        // 001 -   50 kHz
	                                                        // 010 -  100 kHz (normal mode)
	                                                        // 011 -  200 kHz
	                                                        // 100 -  400 kHz (fast mode)
	                                                        // 101 -  600 kHz
	                                                        // 110 -  800 kHz
	                                                        // 111 - 1000 kHz
	unsigned int ID        : BFW_i2c_ctrl_ID;        // slave device id               
	unsigned int reserved1 : BFW_i2c_ctrl_reserved1; // reserved
} I2C_CTRL_BIT_T;

typedef union {
	unsigned int   val;
	I2C_CTRL_BIT_T bf;
} I2C_CTRL_T;

// ---------------------------------------------------------------------
// Register i2c_data
// => I2c data register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_i2c_data 0x00000004U
#define Adr_i2c_data     0x00100D04U

#define MSK_i2c_data_DATA 0x000000ffU // [7:0]
#define SRT_i2c_data_DATA 0           
#define MSK_i2c_data_CMD0 0x00000100U // [8]
#define SRT_i2c_data_CMD0 8           
#define MSK_i2c_data_CMD1 0x00000200U // [9]
#define SRT_i2c_data_CMD1 9           
#define MSK_i2c_data_CMD2 0x00000400U // [10]
#define SRT_i2c_data_CMD2 10          
#define MSK_i2c_data_CMD3 0x00000800U // [11]
#define SRT_i2c_data_CMD3 11          
#define MSK_i2c_data_RDF  0x00001000U // [12]
#define SRT_i2c_data_RDF  12          
#define MSK_i2c_data_ACK  0x00006000U // [14:13]
#define SRT_i2c_data_ACK  13          

enum {
	BFW_i2c_data_DATA      = 8,  // [7:0]
	BFW_i2c_data_CMD0      = 1,  // [8]
	BFW_i2c_data_CMD1      = 1,  // [9]
	BFW_i2c_data_CMD2      = 1,  // [10]
	BFW_i2c_data_CMD3      = 1,  // [11]
	BFW_i2c_data_RDF       = 1,  // [12]
	BFW_i2c_data_ACK       = 2,  // [14:13]
	BFW_i2c_data_reserved1 = 17  // [31:15]
};

typedef struct I2C_DATA_BIT_Ttag {
	unsigned int DATA      : BFW_i2c_data_DATA;      // transmit and receive data byte
	unsigned int CMD0      : BFW_i2c_data_CMD0;      // Command Bit 0: stop
	                                                        //  0 : nothing
	                                                        //  1 : send Stop Condition
	unsigned int CMD1      : BFW_i2c_data_CMD1;      // Command Bit 1: readwrite
	                                                        //  0 : write Byte
	                                                        //  1 : read Byte
	unsigned int CMD2      : BFW_i2c_data_CMD2;      // Command Bit 2: start
	                                                        //  0 : nothing
	                                                        //  1 : send Start Condition + ID
	unsigned int CMD3      : BFW_i2c_data_CMD3;      // Command Bit 3: execute
	                                                        //  0 : no operation, ready, next command can be programmed by CPU
	                                                        //  1 : execute command, interface busy
	unsigned int RDF       : BFW_i2c_data_RDF;       // 1: Read Data Finished:
	                                                        // reading data word from slave is finished
	unsigned int ACK       : BFW_i2c_data_ACK;       // Number of acknowledge bits sended by slave in actual command.
	                                                        // Allows software to detect abnormalities of slaves.
	unsigned int reserved1 : BFW_i2c_data_reserved1; // reserved
} I2C_DATA_BIT_T;

typedef union {
	unsigned int   val;
	I2C_DATA_BIT_T bf;
} I2C_DATA_T;


// =====================================================================
//
// Area of lcd_ctrl
//
// =====================================================================

#define Addr_lcd_ctrl	0x00104000U

// ---------------------------------------------------------------------
// Register LCDTiming0
// => LCD Timing 0 Register
//    This register controls the Horizontal Sync width, Horizontal Front porch and Horizontal
//    Back porch period. The data path latency forces some restrictions on the usable minimum
//    values for horizontal porch width in STN mode. The minimum values are HSW = 2 and HBP = 2.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDTiming0 0x00000000U
#define Adr_LCDTiming0     0x00104000U

#define MSK_LCDTiming0_unused 0x00000003U // [1:0]
#define SRT_LCDTiming0_unused 0           
#define MSK_LCDTiming0_PPL    0x000000fcU // [7:2]
#define SRT_LCDTiming0_PPL    2           
#define MSK_LCDTiming0_HSW    0x0000ff00U // [15:8]
#define SRT_LCDTiming0_HSW    8           
#define MSK_LCDTiming0_HFP    0x00ff0000U // [23:16]
#define SRT_LCDTiming0_HFP    16          
#define MSK_LCDTiming0_HBP    0xff000000U // [31:24]
#define SRT_LCDTiming0_HBP    24          

enum {
	BFW_LCDTiming0_unused = 2, // [1:0]
	BFW_LCDTiming0_PPL    = 6, // [7:2]
	BFW_LCDTiming0_HSW    = 8, // [15:8]
	BFW_LCDTiming0_HFP    = 8, // [23:16]
	BFW_LCDTiming0_HBP    = 8  // [31:24]
};

typedef struct LCDTIMING0_BIT_Ttag {
	unsigned int unused : BFW_LCDTiming0_unused; // reserved
	unsigned int PPL    : BFW_LCDTiming0_PPL;    // Pixels per line                                                      
	                                                        // Actual Pixels-per-line = 16 (PPL+1)
	unsigned int HSW    : BFW_LCDTiming0_HSW;    // Horizontal Sync Pulse Width                                          
	                                                        // Width of the LLP signal in CLCP periods. Program with value minus 1.
	unsigned int HFP    : BFW_LCDTiming0_HFP;    // Horizontal Front Porch                                               
	                                                        // Number of CLCP periods between the end of active data and the rising edge of CLCP.
	                                                        // Program with value minus 1.
	unsigned int HBP    : BFW_LCDTiming0_HBP;    // Horizontal Back Porch                                                
	                                                        // Number of CLCP periods between the falling edge of CLCP and the start of active data.
	                                                        // Program with value minus 1.
} LCDTIMING0_BIT_T;

typedef union {
	unsigned int     val;
	LCDTIMING0_BIT_T bf;
} LCDTIMING0_T;

// ---------------------------------------------------------------------
// Register LCDTiming1
// => LCD Timing 1 Register
//    This register controls the Lines per screen, Vertical Sync width, Vertical Front porch and Vertical
//    Back porch period.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDTiming1 0x00000004U
#define Adr_LCDTiming1     0x00104004U

#define MSK_LCDTiming1_LPP 0x000003ffU // [9:0]
#define SRT_LCDTiming1_LPP 0           
#define MSK_LCDTiming1_VSW 0x0000fc00U // [15:10]
#define SRT_LCDTiming1_VSW 10          
#define MSK_LCDTiming1_VFP 0x00ff0000U // [23:16]
#define SRT_LCDTiming1_VFP 16          
#define MSK_LCDTiming1_VBP 0xff000000U // [31:24]
#define SRT_LCDTiming1_VBP 24          

enum {
	BFW_LCDTiming1_LPP = 10, // [9:0]
	BFW_LCDTiming1_VSW = 6,  // [15:10]
	BFW_LCDTiming1_VFP = 8,  // [23:16]
	BFW_LCDTiming1_VBP = 8   // [31:24]
};

typedef struct LCDTIMING1_BIT_Ttag {
	unsigned int LPP : BFW_LCDTiming1_LPP; // Lines per panel                                                      
	                                                        // Number of active lines per screen. Program to number of lines required minus 1.
	unsigned int VSW : BFW_LCDTiming1_VSW; // Vertical Sync Pulse Width                                            
	                                                        // Number of Hsync lines. Should be small (e.g. program to zero) for passive STN LCDs.
	                                                        // Program the number of lines minus one. The higher the value the worse the contrast of STN LCDs.
	unsigned int VFP : BFW_LCDTiming1_VFP; // Vertical Front Porch                                                 
	                                                        // Number of inactive lines at the end of the frame, before Vsync period.
	                                                        // Program to zero on passive displays or reduced contrast will result.
	unsigned int VBP : BFW_LCDTiming1_VBP; // Vertical Back Porch                                                  
	                                                        // Number of inactive lines at the start of the frame, after Vsync period.
	                                                        // Program to zero on passive displays or reduced contrast will result.
} LCDTIMING1_BIT_T;

typedef union {
	unsigned int     val;
	LCDTIMING1_BIT_T bf;
} LCDTIMING1_T;

// ---------------------------------------------------------------------
// Register LCDTiming2
// => LCD Timing 2 Register
//    The data path latency forces some restrictions on the usable minimum values for the panel clock
//    divider in STN modes.
//    Single panel colour mode:               PCD =  1 (CLCP = CLCDCLK/3)
//    Dual panel colour mode:                 PCD =  4 (CLCP = CLCDCLK/6)
//    Single panel mono 4-bit interface mode: PCD =  2 (CLCP = CLCDCLK/4)
//    Dual panel mono 4-bit interface mode:   PCD =  6 (CLCP = CLCDCLK/8)
//    Single panel mono 8-bit interface mode: PCD =  6 (CLCP = CLCDCLK/8)
//    Dual panel mono 8-bit interface mode:   PCD = 14 (CLCP = CLCDCLK/16)
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDTiming2 0x00000008U
#define Adr_LCDTiming2     0x00104008U

#define MSK_LCDTiming2_PCD_LO 0x0000001fU // [4:0]
#define SRT_LCDTiming2_PCD_LO 0           
#define MSK_LCDTiming2_CLKSEL 0x00000020U // [5]
#define SRT_LCDTiming2_CLKSEL 5           
#define MSK_LCDTiming2_ACB    0x000007c0U // [10:6]
#define SRT_LCDTiming2_ACB    6           
#define MSK_LCDTiming2_IVS    0x00000800U // [11]
#define SRT_LCDTiming2_IVS    11          
#define MSK_LCDTiming2_IHS    0x00001000U // [12]
#define SRT_LCDTiming2_IHS    12          
#define MSK_LCDTiming2_IPC    0x00002000U // [13]
#define SRT_LCDTiming2_IPC    13          
#define MSK_LCDTiming2_IEO    0x00004000U // [14]
#define SRT_LCDTiming2_IEO    14          
#define MSK_LCDTiming2_CPL    0x03ff0000U // [25:16]
#define SRT_LCDTiming2_CPL    16          
#define MSK_LCDTiming2_BCD    0x04000000U // [26]
#define SRT_LCDTiming2_BCD    26          
#define MSK_LCDTiming2_PCD_HI 0xf8000000U // [31:27]
#define SRT_LCDTiming2_PCD_HI 27          

enum {
	BFW_LCDTiming2_PCD_LO    = 5,  // [4:0]
	BFW_LCDTiming2_CLKSEL    = 1,  // [5]
	BFW_LCDTiming2_ACB       = 5,  // [10:6]
	BFW_LCDTiming2_IVS       = 1,  // [11]
	BFW_LCDTiming2_IHS       = 1,  // [12]
	BFW_LCDTiming2_IPC       = 1,  // [13]
	BFW_LCDTiming2_IEO       = 1,  // [14]
	BFW_LCDTiming2_reserved1 = 1,  // [15]
	BFW_LCDTiming2_CPL       = 10, // [25:16]
	BFW_LCDTiming2_BCD       = 1,  // [26]
	BFW_LCDTiming2_PCD_HI    = 5   // [31:27]
};

typedef struct LCDTIMING2_BIT_Ttag {
	unsigned int PCD_LO    : BFW_LCDTiming2_PCD_LO;    // Panel clock divisor - lower 5-bits                                   
	                                                        // Used to specify the frequency of the LCD panel (CLCP) clock based on the LCD clock
	                                                        // (CLCDCLK) frequency. LCD panel clock frequency can range from CLCDCLK/2 toCLCDCLK/33.
	                                                        // Panel clock frequency = CLCDCLK/(PCD+2)
	unsigned int CLKSEL    : BFW_LCDTiming2_CLKSEL;    // This bit drives the CLCDCLKSEL signal, which is used as a select     # default 0                                                
	                                                        // signal for the external LCD clock MUX.
	unsigned int ACB       : BFW_LCDTiming2_ACB;       // AC Bias Pin Frequency                                                
	                                                        // Number of line clocks to count before toggling the AC Bias pin. This pin is used to
	                                                        // periodically invert the polarity of the power supply to prevent DC charge build-up
	                                                        // within STN displays.Program to value required minus 1.
	unsigned int IVS       : BFW_LCDTiming2_IVS;       // Invert Vsync                                                         
	                                                        //  0 : CLFP pin is active HIGH and inactive LOW.
	                                                        //  1 : CLFP pin is active LOW and inactive HIGH.
	unsigned int IHS       : BFW_LCDTiming2_IHS;       // Invert Hsync                                                         
	                                                        //  0 : CLLP pin is active HIGH and inactive LOW.
	                                                        //  1 : CLLP pin is active LOW and inactive HIGH.
	unsigned int IPC       : BFW_LCDTiming2_IPC;       // Invert Panel clock                                                   
	                                                        //  0 : Data is driven on the LCDs data lines on the rising-edge of CLCP.
	                                                        //  1 : Data is driven on the LCDs data lines on the falling-edge of CLCP.
	unsigned int IEO       : BFW_LCDTiming2_IEO;       // Invert Output Enable                                                 
	                                                        //  0 : CLAC pin is active HIGH in TFT mode.
	                                                        //  1 : CLAC pin is active LOW in TFT mode.
	unsigned int reserved1 : BFW_LCDTiming2_reserved1; // reserved
	unsigned int CPL       : BFW_LCDTiming2_CPL;       // Clocks Per Line                                                      
	                                                        // This field specifies the number of actual CLCP clocks to the LCD panel on each line.
	                                                        // This is the number of pixels per line divided by either 1 (TFT), 4 or 8 (for mono passive),
	                                                        // 2 2/3 (for colour passive), minus one. This must be correctly programmed in addition to PPL
	                                                        // for the LCD controller to work correctly.
	unsigned int BCD       : BFW_LCDTiming2_BCD;       // Bypass Pixel Clock Divider                                           
	                                                        // Setting this to 1 bypasses the pixel clock divider logic. This is mainly used for TFT displays.
	unsigned int PCD_HI    : BFW_LCDTiming2_PCD_HI;    // Panel clock divisor - upper 5-bits                                   
	                                                        // Used to specify the frequency of the LCD panel (CLCP) clock based on the LCD clock
	                                                        // (CLCDCLK) frequency. LCD panel clock frequency can range from CLCDCLK/2 toCLCDCLK/33.
	                                                        // Panel clock frequency = CLCDCLK/(PCD+2)
} LCDTIMING2_BIT_T;

typedef union {
	unsigned int     val;
	LCDTIMING2_BIT_T bf;
} LCDTIMING2_T;

// ---------------------------------------------------------------------
// Register LCDTiming3
// => LCD Timing 3 Register
//    This register controls the Line-End signal.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDTiming3 0x0000000CU
#define Adr_LCDTiming3     0x0010400CU

#define MSK_LCDTiming3_LED 0x0000007fU // [6:0]
#define SRT_LCDTiming3_LED 0           
#define MSK_LCDTiming3_LEE 0x00010000U // [16]
#define SRT_LCDTiming3_LEE 16          

enum {
	BFW_LCDTiming3_LED       = 7,  // [6:0]
	BFW_LCDTiming3_reserved1 = 9,  // [15:7]
	BFW_LCDTiming3_LEE       = 1,  // [16]
	BFW_LCDTiming3_reserved2 = 15  // [31:17]
};

typedef struct LCDTIMING3_BIT_Ttag {
	unsigned int LED       : BFW_LCDTiming3_LED;       // Line-End signal delay from the rising edge of the last panel clock (CLCP) 
	unsigned int reserved1 : BFW_LCDTiming3_reserved1; // reserved
	unsigned int LEE       : BFW_LCDTiming3_LEE;       // LCD Line end enable                                                       
	                                                        //  0 : CLLE disabled (held low)
	                                                        //  1 : CLLE signal active
	unsigned int reserved2 : BFW_LCDTiming3_reserved2; // reserved
} LCDTIMING3_BIT_T;

typedef union {
	unsigned int     val;
	LCDTIMING3_BIT_T bf;
} LCDTIMING3_T;

// ---------------------------------------------------------------------
// Register LCDUPBASE
// => LCD Upper panel DMA Channel Base Address
//    This is a register to program the upper base address of the frame buffer. The base address is word aligned, hence only
//    the bits 31:2 are used. LCDUPBASE is used for TFT and single panel STN displays, and also the upper panel of dual panel
//    STN displays.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDUPBASE 0x00000010U
#define Adr_LCDUPBASE     0x00104010U

// ---------------------------------------------------------------------
// Register LCDLPBASE
// => LCD Lower panel DMA Channel Base Address
//    This is a register to program the lower base address of the frame buffer. The base address is word aligned, hence only
//    the bits 31:2 are used. LCDLPBASE is used for the lower panel of dual panel STN displays.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDLPBASE 0x00000014U
#define Adr_LCDLPBASE     0x00104014U

// ---------------------------------------------------------------------
// Register LCDIMSC
// => LCD Interrupt Mask Set/Clear Register
//    The interrupt enable register contains bits, which corresponds directly to those in the interrupt status register.
//    If a bit is set in this register than the colour LCD interrupt bit in the system interrupt controller will be asserted
//    if the corresponding bit is set in the status register.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDIMSC 0x00000018U
#define Adr_LCDIMSC     0x00104018U

#define MSK_LCDIMSC_Unused          0x00000001U // [0]
#define SRT_LCDIMSC_Unused          0           
#define MSK_LCDIMSC_CLCDFUFINTREN   0x00000002U // [1]
#define SRT_LCDIMSC_CLCDFUFINTREN   1           
#define MSK_LCDIMSC_CLCDLNBUINTREN  0x00000004U // [2]
#define SRT_LCDIMSC_CLCDLNBUINTREN  2           
#define MSK_LCDIMSC_CLCDVCOMPINTREN 0x00000008U // [3]
#define SRT_LCDIMSC_CLCDVCOMPINTREN 3           
#define MSK_LCDIMSC_CLCDMBEINTREN   0x00000010U // [4]
#define SRT_LCDIMSC_CLCDMBEINTREN   4           

enum {
	BFW_LCDIMSC_Unused          = 1,  // [0]
	BFW_LCDIMSC_CLCDFUFINTREN   = 1,  // [1]
	BFW_LCDIMSC_CLCDLNBUINTREN  = 1,  // [2]
	BFW_LCDIMSC_CLCDVCOMPINTREN = 1,  // [3]
	BFW_LCDIMSC_CLCDMBEINTREN   = 1,  // [4]
	BFW_LCDIMSC_reserved1       = 27  // [31:5]
};

typedef struct LCDIMSC_BIT_Ttag {
	unsigned int Unused          : BFW_LCDIMSC_Unused;          // Unused                                                            
	unsigned int CLCDFUFINTREN   : BFW_LCDIMSC_CLCDFUFINTREN;   // DMA FIFO underflow interrupt enable                               
	unsigned int CLCDLNBUINTREN  : BFW_LCDIMSC_CLCDLNBUINTREN;  // LCD next address base update interrupt enable                     
	unsigned int CLCDVCOMPINTREN : BFW_LCDIMSC_CLCDVCOMPINTREN; // Vertical compare interrupt enable                                 
	unsigned int CLCDMBEINTREN   : BFW_LCDIMSC_CLCDMBEINTREN;   // AHB master error interrupt enable                                 
	unsigned int reserved1       : BFW_LCDIMSC_reserved1;       // reserved
} LCDIMSC_BIT_T;

typedef union {
	unsigned int  val;
	LCDIMSC_BIT_T bf;
} LCDIMSC_T;

// ---------------------------------------------------------------------
// Register LCDControl
// => LCD Control Register
//    This register controls the mode in which the LCD controller operates.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDControl 0x0000001CU
#define Adr_LCDControl     0x0010401CU

#define MSK_LCDControl_LcdEn     0x00000001U // [0]
#define SRT_LCDControl_LcdEn     0           
#define MSK_LCDControl_LcdBpp    0x0000000eU // [3:1]
#define SRT_LCDControl_LcdBpp    1           
#define MSK_LCDControl_LcdBW     0x00000010U // [4]
#define SRT_LCDControl_LcdBW     4           
#define MSK_LCDControl_LcdTFT    0x00000020U // [5]
#define SRT_LCDControl_LcdTFT    5           
#define MSK_LCDControl_LcdMono8  0x00000040U // [6]
#define SRT_LCDControl_LcdMono8  6           
#define MSK_LCDControl_LcdDual   0x00000080U // [7]
#define SRT_LCDControl_LcdDual   7           
#define MSK_LCDControl_BGR       0x00000100U // [8]
#define SRT_LCDControl_BGR       8           
#define MSK_LCDControl_BEBO      0x00000200U // [9]
#define SRT_LCDControl_BEBO      9           
#define MSK_LCDControl_BEPO      0x00000400U // [10]
#define SRT_LCDControl_BEPO      10          
#define MSK_LCDControl_LcdPwr    0x00000800U // [11]
#define SRT_LCDControl_LcdPwr    11          
#define MSK_LCDControl_LcdVComp  0x00003000U // [13:12]
#define SRT_LCDControl_LcdVComp  12          
#define MSK_LCDControl_WATERMARK 0x00010000U // [16]
#define SRT_LCDControl_WATERMARK 16          

enum {
	BFW_LCDControl_LcdEn     = 1,  // [0]
	BFW_LCDControl_LcdBpp    = 3,  // [3:1]
	BFW_LCDControl_LcdBW     = 1,  // [4]
	BFW_LCDControl_LcdTFT    = 1,  // [5]
	BFW_LCDControl_LcdMono8  = 1,  // [6]
	BFW_LCDControl_LcdDual   = 1,  // [7]
	BFW_LCDControl_BGR       = 1,  // [8]
	BFW_LCDControl_BEBO      = 1,  // [9]
	BFW_LCDControl_BEPO      = 1,  // [10]
	BFW_LCDControl_LcdPwr    = 1,  // [11]
	BFW_LCDControl_LcdVComp  = 2,  // [13:12]
	BFW_LCDControl_reserved1 = 2,  // [15:14]
	BFW_LCDControl_WATERMARK = 1,  // [16]
	BFW_LCDControl_reserved2 = 15  // [31:17]
};

typedef struct LCDCONTROL_BIT_Ttag {
	unsigned int LcdEn     : BFW_LCDControl_LcdEn;     // LCD Controller Enable                                                
	                                                        //  0 : LCD Controller disabled
	                                                        //  1 : LCD Controller enabled
	unsigned int LcdBpp    : BFW_LCDControl_LcdBpp;    // LCD Bits Per Pixel                                                   
	                                                        //  000 :  1 bpp
	                                                        //  001 :  2 bpp
	                                                        //  010 :  4 bpp
	                                                        //  011 :  8 bpp
	                                                        //  100 : 16 bpp
	                                                        //  101 : 24 bpp (This should be only used for TFT panel)
	                                                        //  110 : Reserved
	                                                        //  111 : Reserved
	unsigned int LcdBW     : BFW_LCDControl_LcdBW;     // STN LCD is monochrome (black and white)                              
	                                                        //  0 : STN is colour
	                                                        //  1 : STN is monochrome
	                                                        //  This bit hs no meaning in TFT mode.
	unsigned int LcdTFT    : BFW_LCDControl_LcdTFT;    // LCD is TFT                                                           
	                                                        //  0 : LCD is an STN display - use greyscaler
	                                                        //  1 : LCD is TFT - do not use greyscaler
	unsigned int LcdMono8  : BFW_LCDControl_LcdMono8;  // Monochrome LCD has 8 bit interface                                   
	                                                        // This bit controls whether monochrome STN LCD uses a 4 or 8 bit
	                                                        // parallel interface. It has no meaning in other modes and should
	                                                        // be programmed to zero.
	                                                        //  0 : Mono LCD uses 4 bit interface
	                                                        //  1 : Mono LCD uses 8 bit interface
	unsigned int LcdDual   : BFW_LCDControl_LcdDual;   // LCD interface is dual panel. This should only be used for STN        
	                                                        // panels, when TFT is 0.
	                                                        //  0 : Single panel LCD is in use
	                                                        //  1 : Dual panel LCD is in use
	unsigned int BGR       : BFW_LCDControl_BGR;       // Swap red and blue output                                             
	                                                        //  0 : RGB normal output
	                                                        //  1 : BGR red and blue swapped
	unsigned int BEBO      : BFW_LCDControl_BEBO;      // Big Endian Byte Order                                                
	                                                        //  0 : Little endian byte order
	                                                        //  1 : Big endian byte order
	unsigned int BEPO      : BFW_LCDControl_BEPO;      // Big endian pixel ordering within a byte                              
	                                                        //  0 : Little endian pixel ordering within a byte
	                                                        //  1 : Big endian pixel ordering within a byte
	unsigned int LcdPwr    : BFW_LCDControl_LcdPwr;    // LCD power enable                                                     
	                                                        //  0 : LCD is off
	                                                        //  1 : LCD is on when LcdEn=1
	unsigned int LcdVComp  : BFW_LCDControl_LcdVComp;  // Generate Interrupt at:                                               
	                                                        //  00 : start of Vsync
	                                                        //  01 : start of BACK PORCH
	                                                        //  10 : start of ACTIVE VIDEO
	                                                        //  11 : start of FRONT PORCH
	unsigned int reserved1 : BFW_LCDControl_reserved1; // reserved
	unsigned int WATERMARK : BFW_LCDControl_WATERMARK; // LCD DMA FIFO Watermark level                                         
	                                                        //  0 : FIFO Watermark level will be set to 4-words
	                                                        //  1 : FIFO Watermark level will be set to 8-words
	unsigned int reserved2 : BFW_LCDControl_reserved2; // reserved
} LCDCONTROL_BIT_T;

typedef union {
	unsigned int     val;
	LCDCONTROL_BIT_T bf;
} LCDCONTROL_T;

// ---------------------------------------------------------------------
// Register LCDRIS
// => LCD Raw Interrupt Status Register
//    On a read the register returns five bits that may generate interrupts when set. Write to this register of a
//    bit value of '1' will clear the interrupt corresponding to that bit. Writing a '0' will have no effect.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_LCDRIS 0x00000020U
#define Adr_LCDRIS     0x00104020U

#define MSK_LCDRIS_Unused      0x00000001U // [0]
#define SRT_LCDRIS_Unused      0           
#define MSK_LCDRIS_FUFSTAT     0x00000002U // [1]
#define SRT_LCDRIS_FUFSTAT     1           
#define MSK_LCDRIS_LNBUSTAT    0x00000004U // [2]
#define SRT_LCDRIS_LNBUSTAT    2           
#define MSK_LCDRIS_VCOMPSTAT   0x00000008U // [3]
#define SRT_LCDRIS_VCOMPSTAT   3           
#define MSK_LCDRIS_MBERRORSTAT 0x00000010U // [4]
#define SRT_LCDRIS_MBERRORSTAT 4           

enum {
	BFW_LCDRIS_Unused      = 1,  // [0]
	BFW_LCDRIS_FUFSTAT     = 1,  // [1]
	BFW_LCDRIS_LNBUSTAT    = 1,  // [2]
	BFW_LCDRIS_VCOMPSTAT   = 1,  // [3]
	BFW_LCDRIS_MBERRORSTAT = 1,  // [4]
	BFW_LCDRIS_reserved1   = 27  // [31:5]
};

typedef struct LCDRIS_BIT_Ttag {
	unsigned int Unused      : BFW_LCDRIS_Unused;      // Unused                                                               
	unsigned int FUFSTAT     : BFW_LCDRIS_FUFSTAT;     // DMA FIFO underflow                                                   
	unsigned int LNBUSTAT    : BFW_LCDRIS_LNBUSTAT;    // LCD next address base update                                         
	unsigned int VCOMPSTAT   : BFW_LCDRIS_VCOMPSTAT;   // Vertical compare                                                     
	unsigned int MBERRORSTAT : BFW_LCDRIS_MBERRORSTAT; // AHB master error status, set to 1 when the AHB master encounters an  
	                                                        // error response from the slave
	unsigned int reserved1   : BFW_LCDRIS_reserved1;   // reserved
} LCDRIS_BIT_T;

typedef union {
	unsigned int val;
	LCDRIS_BIT_T bf;
} LCDRIS_T;

// ---------------------------------------------------------------------
// Register LCDMIS
// => LCD Masked Interrupt Status Register
//    This register is a bit-by-bit logical AND of the LCDStatus register. Interrupt lines corresponding to each
//    interrupt addition to the logical OR of all interrupts are provided to the system interrupt controller.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_LCDMIS 0x00000024U
#define Adr_LCDMIS     0x00104024U

#define MSK_LCDMIS_Unused          0x00000001U // [0]
#define SRT_LCDMIS_Unused          0           
#define MSK_LCDMIS_CLCDFUFINTR     0x00000002U // [1]
#define SRT_LCDMIS_CLCDFUFINTR     1           
#define MSK_LCDMIS_CLCDLNBUINTR    0x00000004U // [2]
#define SRT_LCDMIS_CLCDLNBUINTR    2           
#define MSK_LCDMIS_CLCDVCOMPINTR   0x00000008U // [3]
#define SRT_LCDMIS_CLCDVCOMPINTR   3           
#define MSK_LCDMIS_CLCDMBERRORINTR 0x00000010U // [4]
#define SRT_LCDMIS_CLCDMBERRORINTR 4           

enum {
	BFW_LCDMIS_Unused          = 1,  // [0]
	BFW_LCDMIS_CLCDFUFINTR     = 1,  // [1]
	BFW_LCDMIS_CLCDLNBUINTR    = 1,  // [2]
	BFW_LCDMIS_CLCDVCOMPINTR   = 1,  // [3]
	BFW_LCDMIS_CLCDMBERRORINTR = 1,  // [4]
	BFW_LCDMIS_reserved1       = 27  // [31:5]
};

typedef struct LCDMIS_BIT_Ttag {
	unsigned int Unused          : BFW_LCDMIS_Unused;          // Unused                                                            
	unsigned int CLCDFUFINTR     : BFW_LCDMIS_CLCDFUFINTR;     // DMA FIFO underflow interrupt                                      
	unsigned int CLCDLNBUINTR    : BFW_LCDMIS_CLCDLNBUINTR;    // LCD next address base update interrupt                            
	unsigned int CLCDVCOMPINTR   : BFW_LCDMIS_CLCDVCOMPINTR;   // Vertical compare interrupt                                        
	unsigned int CLCDMBERRORINTR : BFW_LCDMIS_CLCDMBERRORINTR; // AHB master error interrupt                                        
	unsigned int reserved1       : BFW_LCDMIS_reserved1;       // reserved
} LCDMIS_BIT_T;

typedef union {
	unsigned int val;
	LCDMIS_BIT_T bf;
} LCDMIS_T;

// ---------------------------------------------------------------------
// Register LCDICR
// => LCD Interrupt Clear Register
//    The LCDICR is a write only register. Writing logic 1 to the relevant bit clears the corresponding interrupt.
// => Mode: Mode (w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDICR 0x00000028U
#define Adr_LCDICR     0x00104028U

#define MSK_LCDICR_Unused  0x00000001U // [0]
#define SRT_LCDICR_Unused  0           
#define MSK_LCDICR_FUF     0x00000002U // [1]
#define SRT_LCDICR_FUF     1           
#define MSK_LCDICR_LNBU    0x00000004U // [2]
#define SRT_LCDICR_LNBU    2           
#define MSK_LCDICR_VCOMP   0x00000008U // [3]
#define SRT_LCDICR_VCOMP   3           
#define MSK_LCDICR_MBERROR 0x00000010U // [4]
#define SRT_LCDICR_MBERROR 4           

enum {
	BFW_LCDICR_Unused    = 1,  // [0]
	BFW_LCDICR_FUF       = 1,  // [1]
	BFW_LCDICR_LNBU      = 1,  // [2]
	BFW_LCDICR_VCOMP     = 1,  // [3]
	BFW_LCDICR_MBERROR   = 1,  // [4]
	BFW_LCDICR_reserved1 = 27  // [31:5]
};

typedef struct LCDICR_BIT_Ttag {
	unsigned int Unused    : BFW_LCDICR_Unused;    // Unused                                                              
	unsigned int FUF       : BFW_LCDICR_FUF;       // Clear DMA FIFO underflow interrupt                                  
	unsigned int LNBU      : BFW_LCDICR_LNBU;      // Clear LCD next address base update interrupt                        
	unsigned int VCOMP     : BFW_LCDICR_VCOMP;     // Clear Vertical compare interrupt                                    
	unsigned int MBERROR   : BFW_LCDICR_MBERROR;   // Clear AHB master error interrupt                                    
	unsigned int reserved1 : BFW_LCDICR_reserved1; // reserved
} LCDICR_BIT_T;

typedef union {
	unsigned int val;
	LCDICR_BIT_T bf;
} LCDICR_T;

// ---------------------------------------------------------------------
// Register LCDUPCURR
// => LCD Upper panel DMA Channel Current Address
//    This register contains the current DMA address for display data read of TFT, single panel STN and upper panel
//    of dual STN displays.
//    This register's value may change at any moment, and is not normally read from, but can be read to determine
//    the approximate position within the buffer, or for test.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_LCDUPCURR 0x0000002CU
#define Adr_LCDUPCURR     0x0010402CU

#define MSK_LCDUPCURR_LCDUPCURR 0xffffffffU // [31:0]
#define SRT_LCDUPCURR_LCDUPCURR 0           

enum {
	BFW_LCDUPCURR_LCDUPCURR = 32  // [31:0]
};

typedef struct LCDUPCURR_BIT_Ttag {
	unsigned int LCDUPCURR : BFW_LCDUPCURR_LCDUPCURR; // Upper panel address                                                  
} LCDUPCURR_BIT_T;

typedef union {
	unsigned int    val;
	LCDUPCURR_BIT_T bf;
} LCDUPCURR_T;

// ---------------------------------------------------------------------
// Register LCDLPCURR
// => LCD Lower panel DMA Channel Current Address
//    This register contains the current DMA address for display data read of the lower panel of dual STN displays.
//    This register's value may change at any moment, and is not normally read from, but can be read to determine
//    the approximate position within the buffer, or for test.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_LCDLPCURR 0x00000030U
#define Adr_LCDLPCURR     0x00104030U

#define MSK_LCDLPCURR_LCDLPCURR 0xffffffffU // [31:0]
#define SRT_LCDLPCURR_LCDLPCURR 0           

enum {
	BFW_LCDLPCURR_LCDLPCURR = 32  // [31:0]
};

typedef struct LCDLPCURR_BIT_Ttag {
	unsigned int LCDLPCURR : BFW_LCDLPCURR_LCDLPCURR; // Lower panel address                                                  
} LCDLPCURR_BIT_T;

typedef union {
	unsigned int    val;
	LCDLPCURR_BIT_T bf;
} LCDLPCURR_T;

// ---------------------------------------------------------------------
// Register LCDPaletteStart
// => 256 main palette entries organised as 128 locations x two entries per word
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDPaletteStart 0x00000200U
#define Adr_LCDPaletteStart     0x00104200U

#define MSK_LCDPaletteStart_LCDPalette 0xffffffffU // [31:0]
#define SRT_LCDPaletteStart_LCDPalette 0           

enum {
	BFW_LCDPaletteStart_LCDPalette = 32  // [31:0]
};

typedef struct LCDPALETTESTART_BIT_Ttag {
	unsigned int LCDPalette : BFW_LCDPaletteStart_LCDPalette; // 256 main palette entries organised as 128 locations x two           
	                                                        // entries per word
} LCDPALETTESTART_BIT_T;

typedef union {
	unsigned int          val;
	LCDPALETTESTART_BIT_T bf;
} LCDPALETTESTART_T;

// ---------------------------------------------------------------------
// Register LCDPaletteEnd
// => 
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_LCDPaletteEnd 0x000003FCU
#define Adr_LCDPaletteEnd     0x001043FCU

#define MSK_LCDPaletteEnd_LCDPalette 0xffffffffU // [31:0]
#define SRT_LCDPaletteEnd_LCDPalette 0           

enum {
	BFW_LCDPaletteEnd_LCDPalette = 32  // [31:0]
};

typedef struct LCDPALETTEEND_BIT_Ttag {
	unsigned int LCDPalette : BFW_LCDPaletteEnd_LCDPalette; //                                                                     
} LCDPALETTEEND_BIT_T;

typedef union {
	unsigned int        val;
	LCDPALETTEEND_BIT_T bf;
} LCDPALETTEEND_T;

// ---------------------------------------------------------------------
// Register DMAFIFOStart
// => Test mode. LCD DMA FIFO Access path. Upper and lower FIFOs cascaded.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_DMAFIFOStart 0x00000400U
#define Adr_DMAFIFOStart     0x00104400U

#define MSK_DMAFIFOStart_LCDDMAFIFO 0xffffffffU // [31:0]
#define SRT_DMAFIFOStart_LCDDMAFIFO 0           

enum {
	BFW_DMAFIFOStart_LCDDMAFIFO = 32  // [31:0]
};

typedef struct DMAFIFOSTART_BIT_Ttag {
	unsigned int LCDDMAFIFO : BFW_DMAFIFOStart_LCDDMAFIFO; // LCD DMA FIFO Access path. Upper and lower FIFOs cascaded.           
} DMAFIFOSTART_BIT_T;

typedef union {
	unsigned int       val;
	DMAFIFOSTART_BIT_T bf;
} DMAFIFOSTART_T;

// ---------------------------------------------------------------------
// Register DMAFIFOEnd
// => 
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_DMAFIFOEnd 0x000007FCU
#define Adr_DMAFIFOEnd     0x001047FCU

#define MSK_DMAFIFOEnd_LCDDMAFIFO 0xffffffffU // [31:0]
#define SRT_DMAFIFOEnd_LCDDMAFIFO 0           

enum {
	BFW_DMAFIFOEnd_LCDDMAFIFO = 32  // [31:0]
};

typedef struct DMAFIFOEND_BIT_Ttag {
	unsigned int LCDDMAFIFO : BFW_DMAFIFOEnd_LCDDMAFIFO; //                                                                     
} DMAFIFOEND_BIT_T;

typedef union {
	unsigned int     val;
	DMAFIFOEND_BIT_T bf;
} DMAFIFOEND_T;

// ---------------------------------------------------------------------
// Register CLCDPERIPHID0
// => Peripheral Identification register 0
//    The CLCDPERIPHID0 Register is hard-coded and the fields in the register determine the reset value.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_CLCDPERIPHID0 0x00000FE0U
#define Adr_CLCDPERIPHID0     0x00104FE0U

#define MSK_CLCDPERIPHID0_PartNumber0 0x000000ffU // [7:0]
#define SRT_CLCDPERIPHID0_PartNumber0 0           

enum {
	BFW_CLCDPERIPHID0_PartNumber0 = 8,  // [7:0]
	BFW_CLCDPERIPHID0_reserved1   = 24  // [31:8]
};

typedef struct CLCDPERIPHID0_BIT_Ttag {
	unsigned int PartNumber0 : BFW_CLCDPERIPHID0_PartNumber0; // These bits read back as 0x10                                         
	unsigned int reserved1   : BFW_CLCDPERIPHID0_reserved1;   // reserved
} CLCDPERIPHID0_BIT_T;

typedef union {
	unsigned int        val;
	CLCDPERIPHID0_BIT_T bf;
} CLCDPERIPHID0_T;

// ---------------------------------------------------------------------
// Register CLCDPERIPHID1
// => Peripheral Identification register 1
//    The CLCDPERIPHID1 Register is hard-coded and the fields in the register determine the reset value.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_CLCDPERIPHID1 0x00000FE4U
#define Adr_CLCDPERIPHID1     0x00104FE4U

#define MSK_CLCDPERIPHID1_PartNumber1 0x0000000fU // [3:0]
#define SRT_CLCDPERIPHID1_PartNumber1 0           
#define MSK_CLCDPERIPHID1_Designer0   0x000000f0U // [7:4]
#define SRT_CLCDPERIPHID1_Designer0   4           

enum {
	BFW_CLCDPERIPHID1_PartNumber1 = 4,  // [3:0]
	BFW_CLCDPERIPHID1_Designer0   = 4,  // [7:4]
	BFW_CLCDPERIPHID1_reserved1   = 24  // [31:8]
};

typedef struct CLCDPERIPHID1_BIT_Ttag {
	unsigned int PartNumber1 : BFW_CLCDPERIPHID1_PartNumber1; // These bits read back as 0x1                                          
	unsigned int Designer0   : BFW_CLCDPERIPHID1_Designer0;   // These bits read back as 0x1                                          
	unsigned int reserved1   : BFW_CLCDPERIPHID1_reserved1;   // reserved
} CLCDPERIPHID1_BIT_T;

typedef union {
	unsigned int        val;
	CLCDPERIPHID1_BIT_T bf;
} CLCDPERIPHID1_T;

// ---------------------------------------------------------------------
// Register CLCDPERIPHID2
// => Peripheral Identification register 2
//    The CLCDPERIPHID2 Register is hard-coded and the fields in the register determine the reset value.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_CLCDPERIPHID2 0x00000FE8U
#define Adr_CLCDPERIPHID2     0x00104FE8U

#define MSK_CLCDPERIPHID2_Designer1 0x0000000fU // [3:0]
#define SRT_CLCDPERIPHID2_Designer1 0           
#define MSK_CLCDPERIPHID2_Revision  0x000000f0U // [7:4]
#define SRT_CLCDPERIPHID2_Revision  4           

enum {
	BFW_CLCDPERIPHID2_Designer1 = 4,  // [3:0]
	BFW_CLCDPERIPHID2_Revision  = 4,  // [7:4]
	BFW_CLCDPERIPHID2_reserved1 = 24  // [31:8]
};

typedef struct CLCDPERIPHID2_BIT_Ttag {
	unsigned int Designer1 : BFW_CLCDPERIPHID2_Designer1; // These bits read back as 0x4                                          
	unsigned int Revision  : BFW_CLCDPERIPHID2_Revision;  // These bits read back as 0x0                                          
	unsigned int reserved1 : BFW_CLCDPERIPHID2_reserved1; // reserved
} CLCDPERIPHID2_BIT_T;

typedef union {
	unsigned int        val;
	CLCDPERIPHID2_BIT_T bf;
} CLCDPERIPHID2_T;

// ---------------------------------------------------------------------
// Register CLCDPERIPHID3
// => Peripheral Identification register 3
//    The CLCDPERIPHID3 Register is hard-coded and the fields in the register determine the reset value.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_CLCDPERIPHID3 0x00000FECU
#define Adr_CLCDPERIPHID3     0x00104FECU

#define MSK_CLCDPERIPHID3_Configuration 0x000000ffU // [7:0]
#define SRT_CLCDPERIPHID3_Configuration 0           

enum {
	BFW_CLCDPERIPHID3_Configuration = 8,  // [7:0]
	BFW_CLCDPERIPHID3_reserved1     = 24  // [31:8]
};

typedef struct CLCDPERIPHID3_BIT_Ttag {
	unsigned int Configuration : BFW_CLCDPERIPHID3_Configuration; // These bits read back as 0x0                                         
	unsigned int reserved1     : BFW_CLCDPERIPHID3_reserved1;     // reserved
} CLCDPERIPHID3_BIT_T;

typedef union {
	unsigned int        val;
	CLCDPERIPHID3_BIT_T bf;
} CLCDPERIPHID3_T;

// ---------------------------------------------------------------------
// Register CLCDPCELLID0
// => Primecell Identification register 0
//    The CLCDPCELLID0 Register is hard-coded and the fields in the register determine the reset value.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_CLCDPCELLID0 0x00000FF0U
#define Adr_CLCDPCELLID0     0x00104FF0U

#define MSK_CLCDPCELLID0_PCELLIDID0 0x000000ffU // [7:0]
#define SRT_CLCDPCELLID0_PCELLIDID0 0           

enum {
	BFW_CLCDPCELLID0_PCELLIDID0 = 8,  // [7:0]
	BFW_CLCDPCELLID0_reserved1  = 24  // [31:8]
};

typedef struct CLCDPCELLID0_BIT_Ttag {
	unsigned int PCELLIDID0 : BFW_CLCDPCELLID0_PCELLIDID0; // These bits read back as 0x0D                                        
	unsigned int reserved1  : BFW_CLCDPCELLID0_reserved1;  // reserved
} CLCDPCELLID0_BIT_T;

typedef union {
	unsigned int       val;
	CLCDPCELLID0_BIT_T bf;
} CLCDPCELLID0_T;

// ---------------------------------------------------------------------
// Register CLCDPCELLID1
// => Primecell Identification register 1
//    The CLCDPCELLID1 Register is hard-coded and the fields in the register determine the reset value.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_CLCDPCELLID1 0x00000FF4U
#define Adr_CLCDPCELLID1     0x00104FF4U

#define MSK_CLCDPCELLID1_PCELLIDID1 0x000000ffU // [7:0]
#define SRT_CLCDPCELLID1_PCELLIDID1 0           

enum {
	BFW_CLCDPCELLID1_PCELLIDID1 = 8,  // [7:0]
	BFW_CLCDPCELLID1_reserved1  = 24  // [31:8]
};

typedef struct CLCDPCELLID1_BIT_Ttag {
	unsigned int PCELLIDID1 : BFW_CLCDPCELLID1_PCELLIDID1; // These bits read back as 0xF0                                        
	unsigned int reserved1  : BFW_CLCDPCELLID1_reserved1;  // reserved
} CLCDPCELLID1_BIT_T;

typedef union {
	unsigned int       val;
	CLCDPCELLID1_BIT_T bf;
} CLCDPCELLID1_T;

// ---------------------------------------------------------------------
// Register CLCDPCELLID2
// => Primecell Identification register 2
//    The CLCDPCELLID2 Register is hard-coded and the fields in the register determine the reset value.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_CLCDPCELLID2 0x00000FF8U
#define Adr_CLCDPCELLID2     0x00104FF8U

#define MSK_CLCDPCELLID2_PCELLIDID2 0x000000ffU // [7:0]
#define SRT_CLCDPCELLID2_PCELLIDID2 0           

enum {
	BFW_CLCDPCELLID2_PCELLIDID2 = 8,  // [7:0]
	BFW_CLCDPCELLID2_reserved1  = 24  // [31:8]
};

typedef struct CLCDPCELLID2_BIT_Ttag {
	unsigned int PCELLIDID2 : BFW_CLCDPCELLID2_PCELLIDID2; // These bits read back as 0x05                                        
	unsigned int reserved1  : BFW_CLCDPCELLID2_reserved1;  // reserved
} CLCDPCELLID2_BIT_T;

typedef union {
	unsigned int       val;
	CLCDPCELLID2_BIT_T bf;
} CLCDPCELLID2_T;

// ---------------------------------------------------------------------
// Register CLCDPCELLID3
// => Primecell Identification register 3
//    The CLCDPCELLID3 Register is hard-coded and the fields in the register determine the reset value.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_CLCDPCELLID3 0x00000FFCU
#define Adr_CLCDPCELLID3     0x00104FFCU

#define MSK_CLCDPCELLID3_PCELLIDID3 0x000000ffU // [7:0]
#define SRT_CLCDPCELLID3_PCELLIDID3 0           

enum {
	BFW_CLCDPCELLID3_PCELLIDID3 = 8,  // [7:0]
	BFW_CLCDPCELLID3_reserved1  = 24  // [31:8]
};

typedef struct CLCDPCELLID3_BIT_Ttag {
	unsigned int PCELLIDID3 : BFW_CLCDPCELLID3_PCELLIDID3; // These bits read back as 0xb1                                        
	unsigned int reserved1  : BFW_CLCDPCELLID3_reserved1;  // reserved
} CLCDPCELLID3_BIT_T;

typedef union {
	unsigned int       val;
	CLCDPCELLID3_BIT_T bf;
} CLCDPCELLID3_T;


// =====================================================================
//
// Area of host_controlled_dma_register_block
//
// =====================================================================

#define Addr_host_controlled_dma_register_block	0x00103000U

// ---------------------------------------------------------------------
// Register dma_host_reg
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_dma_host_reg 0x00000000U
#define Adr_dma_host_reg     0x00103000U


// =====================================================================
//
// Area of host_controlled_global_register_block
//
// =====================================================================

#define Addr_host_controlled_global_register_block	0x00103100U

// ---------------------------------------------------------------------
// Register pci_base
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_base 0x000000BCU
#define Adr_pci_base     0x001031BCU

// ---------------------------------------------------------------------
// Register wdg_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_wdg_host 0x000000C0U
#define Adr_wdg_host     0x001031C0U

// ---------------------------------------------------------------------
// Register cyclic_tmr_control
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_cyclic_tmr_control 0x000000D0U
#define Adr_cyclic_tmr_control     0x001031D0U

// ---------------------------------------------------------------------
// Register cyclic_tmr_reload
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_cyclic_tmr_reload 0x000000D4U
#define Adr_cyclic_tmr_reload     0x001031D4U

// ---------------------------------------------------------------------
// Register sta_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_sta_host 0x000000D8U
#define Adr_sta_host     0x001031D8U

// ---------------------------------------------------------------------
// Register res_reg
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_res_reg 0x000000DCU
#define Adr_res_reg     0x001031DCU

// ---------------------------------------------------------------------
// Register irq_reg_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_reg_host 0x000000E0U
#define Adr_irq_reg_host     0x001031E0U

// ---------------------------------------------------------------------
// Register irq_status_0_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_status_0_host 0x000000E0U
#define Adr_irq_status_0_host     0x001031E0U

// ---------------------------------------------------------------------
// Register irq_status_1_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_status_1_host 0x000000E4U
#define Adr_irq_status_1_host     0x001031E4U

// ---------------------------------------------------------------------
// Register irq_status_2_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_status_2_host 0x000000E8U
#define Adr_irq_status_2_host     0x001031E8U

// ---------------------------------------------------------------------
// Register irq_status_3_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_status_3_host 0x000000ECU
#define Adr_irq_status_3_host     0x001031ECU

// ---------------------------------------------------------------------
// Register irq_mask_0_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_mask_0_host 0x000000F0U
#define Adr_irq_mask_0_host     0x001031F0U

// ---------------------------------------------------------------------
// Register irq_mask_1_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_mask_1_host 0x000000F4U
#define Adr_irq_mask_1_host     0x001031F4U

// ---------------------------------------------------------------------
// Register irq_mask_2_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_mask_2_host 0x000000F8U
#define Adr_irq_mask_2_host     0x001031F8U

// ---------------------------------------------------------------------
// Register irq_mask_3_host
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_mask_3_host 0x000000FCU
#define Adr_irq_mask_3_host     0x001031FCU


// =====================================================================
//
// Area of host_controlled_handshake_register_block
//
// =====================================================================

#define Addr_host_controlled_handshake_register_block	0x00103200U

// ---------------------------------------------------------------------
// Register host_regs
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_host_regs 0x00000000U
#define Adr_host_regs     0x00103200U


// =====================================================================
//
// Area of netx_controlled_dma_register_block
//
// =====================================================================

#define Addr_netx_controlled_dma_register_block	0x00103300U

// ---------------------------------------------------------------------
// Register dma_netx_reg
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_dma_netx_reg 0x00000000U
#define Adr_dma_netx_reg     0x00103300U


// =====================================================================
//
// Area of netx_controlled_global_register_block_1
//
// =====================================================================

#define Addr_netx_controlled_global_register_block_1	0x00103400U

// ---------------------------------------------------------------------
// Register pci_window_high3
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_window_high3 0x0000009CU
#define Adr_pci_window_high3     0x0010349CU

// ---------------------------------------------------------------------
// Register pci_window_low3
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_window_low3 0x00000098U
#define Adr_pci_window_low3     0x00103498U

// ---------------------------------------------------------------------
// Register pci_window_high2
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_window_high2 0x00000094U
#define Adr_pci_window_high2     0x00103494U

// ---------------------------------------------------------------------
// Register pci_window_low2
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_window_low2 0x00000090U
#define Adr_pci_window_low2     0x00103490U

// ---------------------------------------------------------------------
// Register pci_window_high1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_window_high1 0x0000008CU
#define Adr_pci_window_high1     0x0010348CU

// ---------------------------------------------------------------------
// Register pci_window_low1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_window_low1 0x00000088U
#define Adr_pci_window_low1     0x00103488U

// ---------------------------------------------------------------------
// Register pci_window_high0
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_window_high0 0x00000084U
#define Adr_pci_window_high0     0x00103484U

// ---------------------------------------------------------------------
// Register pci_window_low0
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_window_low0 0x00000080U
#define Adr_pci_window_low0     0x00103480U

// ---------------------------------------------------------------------
// Register pci_io_base
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_io_base 0x000000A0U
#define Adr_pci_io_base     0x001034A0U

// ---------------------------------------------------------------------
// Register pci_rom_base
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_rom_base 0x000000A4U
#define Adr_pci_rom_base     0x001034A4U

// ---------------------------------------------------------------------
// Register arb_ctrl
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_arb_ctrl 0x000000A8U
#define Adr_arb_ctrl     0x001034A8U

// ---------------------------------------------------------------------
// Register pci_config
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_config 0x000000ACU
#define Adr_pci_config     0x001034ACU

// ---------------------------------------------------------------------
// Register cis_base
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_cis_base 0x000000BCU
#define Adr_cis_base     0x001034BCU

// ---------------------------------------------------------------------
// Register wdg_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_wdg_netx 0x000000C0U
#define Adr_wdg_netx     0x001034C0U

// ---------------------------------------------------------------------
// Register sta_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_sta_netx 0x000000D8U
#define Adr_sta_netx     0x001034D8U

// ---------------------------------------------------------------------
// Register res_ctrl
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_res_ctrl 0x000000DCU
#define Adr_res_ctrl     0x001034DCU

// ---------------------------------------------------------------------
// Register irq_reg_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_reg_netx 0x000000E0U
#define Adr_irq_reg_netx     0x001034E0U

// ---------------------------------------------------------------------
// Register irq_status_0_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_status_0_netx 0x000000E0U
#define Adr_irq_status_0_netx     0x001034E0U

// ---------------------------------------------------------------------
// Register irq_status_1_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_status_1_netx 0x000000E4U
#define Adr_irq_status_1_netx     0x001034E4U

// ---------------------------------------------------------------------
// Register irq_status_2_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_status_2_netx 0x000000E8U
#define Adr_irq_status_2_netx     0x001034E8U

// ---------------------------------------------------------------------
// Register irq_status_3_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_status_3_netx 0x000000ECU
#define Adr_irq_status_3_netx     0x001034ECU

// ---------------------------------------------------------------------
// Register irq_mask_0_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_mask_0_netx 0x000000F0U
#define Adr_irq_mask_0_netx     0x001034F0U

// ---------------------------------------------------------------------
// Register irq_mask_1_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_mask_1_netx 0x000000F4U
#define Adr_irq_mask_1_netx     0x001034F4U

// ---------------------------------------------------------------------
// Register irq_mask_2_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_mask_2_netx 0x000000F8U
#define Adr_irq_mask_2_netx     0x001034F8U

// ---------------------------------------------------------------------
// Register irq_mask_3_netx
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_irq_mask_3_netx 0x000000FCU
#define Adr_irq_mask_3_netx     0x001034FCU


// =====================================================================
//
// Area of netx_controlled_handshake_register_block
//
// =====================================================================

#define Addr_netx_controlled_handshake_register_block	0x00103500U

// ---------------------------------------------------------------------
// Register netx_regs
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_netx_regs 0x00000000U
#define Adr_netx_regs     0x00103500U

// ---------------------------------------------------------------------
// Register handshake_ch0
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch0 0x00000000U
#define Adr_handshake_ch0     0x00103500U

// ---------------------------------------------------------------------
// Register handshake_ch1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch1 0x00000004U
#define Adr_handshake_ch1     0x00103504U

// ---------------------------------------------------------------------
// Register handshake_ch2
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch2 0x00000008U
#define Adr_handshake_ch2     0x00103508U

// ---------------------------------------------------------------------
// Register handshake_ch3
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch3 0x0000000CU
#define Adr_handshake_ch3     0x0010350CU

// ---------------------------------------------------------------------
// Register handshake_ch4
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch4 0x00000010U
#define Adr_handshake_ch4     0x00103510U

// ---------------------------------------------------------------------
// Register handshake_ch5
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch5 0x00000014U
#define Adr_handshake_ch5     0x00103514U

// ---------------------------------------------------------------------
// Register handshake_ch6
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch6 0x00000018U
#define Adr_handshake_ch6     0x00103518U

// ---------------------------------------------------------------------
// Register handshake_ch7
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch7 0x0000001CU
#define Adr_handshake_ch7     0x0010351CU

// ---------------------------------------------------------------------
// Register handshake_ch8
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch8 0x00000020U
#define Adr_handshake_ch8     0x00103520U

// ---------------------------------------------------------------------
// Register handshake_ch9
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch9 0x00000024U
#define Adr_handshake_ch9     0x00103524U

// ---------------------------------------------------------------------
// Register handshake_ch10
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch10 0x00000028U
#define Adr_handshake_ch10     0x00103528U

// ---------------------------------------------------------------------
// Register handshake_ch11
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch11 0x0000002CU
#define Adr_handshake_ch11     0x0010352CU

// ---------------------------------------------------------------------
// Register handshake_ch12
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch12 0x00000030U
#define Adr_handshake_ch12     0x00103530U

// ---------------------------------------------------------------------
// Register handshake_ch13
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch13 0x00000034U
#define Adr_handshake_ch13     0x00103534U

// ---------------------------------------------------------------------
// Register handshake_ch14
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch14 0x00000038U
#define Adr_handshake_ch14     0x00103538U

// ---------------------------------------------------------------------
// Register handshake_ch15
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_handshake_ch15 0x0000003CU
#define Adr_handshake_ch15     0x0010353CU


// =====================================================================
//
// Area of netx_controlled_global_register_block_2
//
// =====================================================================

#define Addr_netx_controlled_global_register_block_2	0x00103600U

// ---------------------------------------------------------------------
// Register clk_reg
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_clk_reg 0x00000004U
#define Adr_clk_reg     0x00103604U

// ---------------------------------------------------------------------
// Register if_conf1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_if_conf1 0x00000008U
#define Adr_if_conf1     0x00103608U

// ---------------------------------------------------------------------
// Register if_conf2
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_if_conf2 0x0000000CU
#define Adr_if_conf2     0x0010360CU

// ---------------------------------------------------------------------
// Register exp_bus_reg
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_exp_bus_reg 0x00000010U
#define Adr_exp_bus_reg     0x00103610U

// ---------------------------------------------------------------------
// Register io_reg
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_io_reg 0x00000020U
#define Adr_io_reg     0x00103620U

// ---------------------------------------------------------------------
// Register io_reg_mode0
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_io_reg_mode0 0x00000020U
#define Adr_io_reg_mode0     0x00103620U

// ---------------------------------------------------------------------
// Register io_reg_drv_en0
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_io_reg_drv_en0 0x00000024U
#define Adr_io_reg_drv_en0     0x00103624U

// ---------------------------------------------------------------------
// Register io_reg_data0
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_io_reg_data0 0x00000028U
#define Adr_io_reg_data0     0x00103628U

// ---------------------------------------------------------------------
// Register io_reg_reserved0
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_io_reg_reserved0 0x0000002CU
#define Adr_io_reg_reserved0     0x0010362CU

// ---------------------------------------------------------------------
// Register io_reg_mode1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_io_reg_mode1 0x00000030U
#define Adr_io_reg_mode1     0x00103630U

// ---------------------------------------------------------------------
// Register io_reg_drv_en1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_io_reg_drv_en1 0x00000034U
#define Adr_io_reg_drv_en1     0x00103634U

// ---------------------------------------------------------------------
// Register io_reg_data1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_io_reg_data1 0x00000038U
#define Adr_io_reg_data1     0x00103638U

// ---------------------------------------------------------------------
// Register io_reg_reserved1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_io_reg_reserved1 0x0000003CU
#define Adr_io_reg_reserved1     0x0010363CU

// ---------------------------------------------------------------------
// Register mb_ctrl
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_mb_ctrl 0x00000040U
#define Adr_mb_ctrl     0x00103640U

// ---------------------------------------------------------------------
// Register hs_ctrl
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_hs_ctrl 0x00000080U
#define Adr_hs_ctrl     0x00103680U


// =====================================================================
//
// Area of netx_controlled_pci_configuration_shadow_register_block
//
// =====================================================================

#define Addr_netx_controlled_pci_configuration_shadow_register_block	0x00103700U

// ---------------------------------------------------------------------
// Register pci_regs_addr
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_pci_regs_addr 0x00000000U
#define Adr_pci_regs_addr     0x00103700U


// =====================================================================
//
// Area of xc_extbus_sel
//
// =====================================================================

#define Addr_xc_extbus_sel	0x00180000U

// ---------------------------------------------------------------------
// Register xc_extbus_sel_ctrl
// => External XC-bus-selection register - FPGA/EVA-Board version only!!!
//    Bus coding:
//    0000 : PHY1
//    0001 : PHY2
//    0010 : MMC
//    0011 : ProfiBus
//    0100 : CAN
//    0101 : ASI
//    1111 : nothing selected
//    Each XC-block can be assigned to one of these busses by setting the according bit-arear to the
//    value, the bus is coded with.
//    NO bus MUST be assigned to more than one XC-Block!
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xc_extbus_sel_ctrl 0x00000000U
#define Adr_xc_extbus_sel_ctrl     0x00180000U

#define MSK_xc_extbus_sel_ctrl_xmac0_sel 0x0000000fU // [3:0]
#define SRT_xc_extbus_sel_ctrl_xmac0_sel 0           
#define MSK_xc_extbus_sel_ctrl_xmac1_sel 0x000000f0U // [7:4]
#define SRT_xc_extbus_sel_ctrl_xmac1_sel 4           
#define MSK_xc_extbus_sel_ctrl_xmac2_sel 0x00000f00U // [11:8]
#define SRT_xc_extbus_sel_ctrl_xmac2_sel 8           
#define MSK_xc_extbus_sel_ctrl_xmac3_sel 0x0000f000U // [15:12]
#define SRT_xc_extbus_sel_ctrl_xmac3_sel 12          

enum {
	BFW_xc_extbus_sel_ctrl_xmac0_sel = 4,  // [3:0]
	BFW_xc_extbus_sel_ctrl_xmac1_sel = 4,  // [7:4]
	BFW_xc_extbus_sel_ctrl_xmac2_sel = 4,  // [11:8]
	BFW_xc_extbus_sel_ctrl_xmac3_sel = 4,  // [15:12]
	BFW_xc_extbus_sel_ctrl_reserved1 = 16  // [31:16]
};

typedef struct XC_EXTBUS_SEL_CTRL_BIT_Ttag {
	unsigned int xmac0_sel : BFW_xc_extbus_sel_ctrl_xmac0_sel; // selects the external bus, assigned to xMAC0 (default PHY1) 
	unsigned int xmac1_sel : BFW_xc_extbus_sel_ctrl_xmac1_sel; // selects the external bus, assigned to xMAC1 (default PHY2) 
	unsigned int xmac2_sel : BFW_xc_extbus_sel_ctrl_xmac2_sel; // selects the external bus, assigned to xMAC2 (default MMC) 
	unsigned int xmac3_sel : BFW_xc_extbus_sel_ctrl_xmac3_sel; // selects the external bus, assigned to xMAC3 (default ProfiBus) 
	unsigned int reserved1 : BFW_xc_extbus_sel_ctrl_reserved1; // reserved
} XC_EXTBUS_SEL_CTRL_BIT_T;

typedef union {
	unsigned int             val;
	XC_EXTBUS_SEL_CTRL_BIT_T bf;
} XC_EXTBUS_SEL_CTRL_T;


// =====================================================================
//
// Area of vic
//
// =====================================================================

#define Addr_vic	0x001FF000U

// ---------------------------------------------------------------------
// Register vic_irq_status
// => VIC IRQ status register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_vic_irq_status 0x00000000U
#define Adr_vic_irq_status     0x001FF000U

#define MSK_vic_irq_status_sw         0x00000001U // [0]
#define SRT_vic_irq_status_sw         0           
#define MSK_vic_irq_status_timer0     0x00000002U // [1]
#define SRT_vic_irq_status_timer0     1           
#define MSK_vic_irq_status_timer1     0x00000004U // [2]
#define SRT_vic_irq_status_timer1     2           
#define MSK_vic_irq_status_timer2     0x00000008U // [3]
#define SRT_vic_irq_status_timer2     3           
#define MSK_vic_irq_status_systime_ns 0x00000010U // [4]
#define SRT_vic_irq_status_systime_ns 4           
#define MSK_vic_irq_status_systime_s  0x00000020U // [5]
#define SRT_vic_irq_status_systime_s  5           
#define MSK_vic_irq_status_gpio15     0x00000040U // [6]
#define SRT_vic_irq_status_gpio15     6           
#define MSK_vic_irq_status_watchdog   0x00000080U // [7]
#define SRT_vic_irq_status_watchdog   7           
#define MSK_vic_irq_status_uart0      0x00000100U // [8]
#define SRT_vic_irq_status_uart0      8           
#define MSK_vic_irq_status_uart1      0x00000200U // [9]
#define SRT_vic_irq_status_uart1      9           
#define MSK_vic_irq_status_uart2      0x00000400U // [10]
#define SRT_vic_irq_status_uart2      10          
#define MSK_vic_irq_status_usb        0x00000800U // [11]
#define SRT_vic_irq_status_usb        11          
#define MSK_vic_irq_status_spi        0x00001000U // [12]
#define SRT_vic_irq_status_spi        12          
#define MSK_vic_irq_status_i2c        0x00002000U // [13]
#define SRT_vic_irq_status_i2c        13          
#define MSK_vic_irq_status_lcd        0x00004000U // [14]
#define SRT_vic_irq_status_lcd        14          
#define MSK_vic_irq_status_hif        0x00008000U // [15]
#define SRT_vic_irq_status_hif        15          
#define MSK_vic_irq_status_gpio       0x00010000U // [16]
#define SRT_vic_irq_status_gpio       16          
#define MSK_vic_irq_status_com0       0x00020000U // [17]
#define SRT_vic_irq_status_com0       17          
#define MSK_vic_irq_status_com1       0x00040000U // [18]
#define SRT_vic_irq_status_com1       18          
#define MSK_vic_irq_status_com2       0x00080000U // [19]
#define SRT_vic_irq_status_com2       19          
#define MSK_vic_irq_status_com3       0x00100000U // [20]
#define SRT_vic_irq_status_com3       20          
#define MSK_vic_irq_status_msync0     0x00200000U // [21]
#define SRT_vic_irq_status_msync0     21          
#define MSK_vic_irq_status_msync1     0x00400000U // [22]
#define SRT_vic_irq_status_msync1     22          
#define MSK_vic_irq_status_msync2     0x00800000U // [23]
#define SRT_vic_irq_status_msync2     23          
#define MSK_vic_irq_status_msync3     0x01000000U // [24]
#define SRT_vic_irq_status_msync3     24          
#define MSK_vic_irq_status_int_phy    0x02000000U // [25]
#define SRT_vic_irq_status_int_phy    25          
#define MSK_vic_irq_status_iso_area   0x04000000U // [26]
#define SRT_vic_irq_status_iso_area   26          
#define MSK_vic_irq_status_timer3     0x20000000U // [29]
#define SRT_vic_irq_status_timer3     29          
#define MSK_vic_irq_status_timer4     0x40000000U // [30]
#define SRT_vic_irq_status_timer4     30          
#define MSK_vic_irq_status_vfp9       0x80000000U // [31]
#define SRT_vic_irq_status_vfp9       31          

enum {
	BFW_vic_irq_status_sw         = 1, // [0]
	BFW_vic_irq_status_timer0     = 1, // [1]
	BFW_vic_irq_status_timer1     = 1, // [2]
	BFW_vic_irq_status_timer2     = 1, // [3]
	BFW_vic_irq_status_systime_ns = 1, // [4]
	BFW_vic_irq_status_systime_s  = 1, // [5]
	BFW_vic_irq_status_gpio15     = 1, // [6]
	BFW_vic_irq_status_watchdog   = 1, // [7]
	BFW_vic_irq_status_uart0      = 1, // [8]
	BFW_vic_irq_status_uart1      = 1, // [9]
	BFW_vic_irq_status_uart2      = 1, // [10]
	BFW_vic_irq_status_usb        = 1, // [11]
	BFW_vic_irq_status_spi        = 1, // [12]
	BFW_vic_irq_status_i2c        = 1, // [13]
	BFW_vic_irq_status_lcd        = 1, // [14]
	BFW_vic_irq_status_hif        = 1, // [15]
	BFW_vic_irq_status_gpio       = 1, // [16]
	BFW_vic_irq_status_com0       = 1, // [17]
	BFW_vic_irq_status_com1       = 1, // [18]
	BFW_vic_irq_status_com2       = 1, // [19]
	BFW_vic_irq_status_com3       = 1, // [20]
	BFW_vic_irq_status_msync0     = 1, // [21]
	BFW_vic_irq_status_msync1     = 1, // [22]
	BFW_vic_irq_status_msync2     = 1, // [23]
	BFW_vic_irq_status_msync3     = 1, // [24]
	BFW_vic_irq_status_int_phy    = 1, // [25]
	BFW_vic_irq_status_iso_area   = 1, // [26]
	BFW_vic_irq_status_reserved1  = 2, // [28:27]
	BFW_vic_irq_status_timer3     = 1, // [29]
	BFW_vic_irq_status_timer4     = 1, // [30]
	BFW_vic_irq_status_vfp9       = 1  // [31]
};

typedef struct VIC_IRQ_STATUS_BIT_Ttag {
	unsigned int sw         : BFW_vic_irq_status_sw;         // Reserved  for Software Interrupt, ARM standard configuration 
	unsigned int timer0     : BFW_vic_irq_status_timer0;     // Timer0 / Counter0 from GPIO Module -> Real time operating system timer, Windows CE required 
	unsigned int timer1     : BFW_vic_irq_status_timer1;     // Timer1 / Counter1 from GPIO Module 
	unsigned int timer2     : BFW_vic_irq_status_timer2;     // Timer2 / Counter2 from GPIO Module 
	unsigned int systime_ns : BFW_vic_irq_status_systime_ns; // systime ns compare irq from GPIO module 
	unsigned int systime_s  : BFW_vic_irq_status_systime_s;  // systime 1day IRQ from SYSTIME module, Windows CE required 
	unsigned int gpio15     : BFW_vic_irq_status_gpio15;     // external interrupt 15, Windows CE required (NMI) 
	unsigned int watchdog   : BFW_vic_irq_status_watchdog;   // reserved 
	unsigned int uart0      : BFW_vic_irq_status_uart0;      // UART 0 -> Diagnostic channel, Windows CE required 
	unsigned int uart1      : BFW_vic_irq_status_uart1;      // UART 1 
	unsigned int uart2      : BFW_vic_irq_status_uart2;      // UART 2 
	unsigned int usb        : BFW_vic_irq_status_usb;        // USB interrupt 
	unsigned int spi        : BFW_vic_irq_status_spi;        // SPI interrupt 
	unsigned int i2c        : BFW_vic_irq_status_i2c;        // reserved 
	unsigned int lcd        : BFW_vic_irq_status_lcd;        // LCD-Controller interrupt 
	unsigned int hif        : BFW_vic_irq_status_hif;        // PCI / HIF interrupt 
	unsigned int gpio       : BFW_vic_irq_status_gpio;       // other external Interrupts from GPIO 0-14 
	unsigned int com0       : BFW_vic_irq_status_com0;       // Communication channel 0 (= |xpec0_irq[11:0]) 
	unsigned int com1       : BFW_vic_irq_status_com1;       // Communication channel 1 (= |xpec1_irq[11:0]) 
	unsigned int com2       : BFW_vic_irq_status_com2;       // Communication channel 2 (= |xpec2_irq[11:0]) 
	unsigned int com3       : BFW_vic_irq_status_com3;       // Communication channel 3 (= |xpec3_irq[11:0]) 
	unsigned int msync0     : BFW_vic_irq_status_msync0;     // Motion synchronization channel 0 (= |xpec0_irq[15:12]) 
	unsigned int msync1     : BFW_vic_irq_status_msync1;     // Motion synchronization channel 1 (= |xpec1_irq[15:12]) 
	unsigned int msync2     : BFW_vic_irq_status_msync2;     // Motion synchronization channel 2 (= |xpec2_irq[15:12]) 
	unsigned int msync3     : BFW_vic_irq_status_msync3;     // Motion synchronization channel 3 (= |xpec3_irq[15:12]) 
	unsigned int int_phy    : BFW_vic_irq_status_int_phy;    // Interrupt from internal Phys 
	unsigned int iso_area   : BFW_vic_irq_status_iso_area;   // Power is going down (see RTC for details) 
	unsigned int reserved1  : BFW_vic_irq_status_reserved1;  // reserved
	unsigned int timer3     : BFW_vic_irq_status_timer3;     // Timer3 / Counter3 from GPIO Module 
	unsigned int timer4     : BFW_vic_irq_status_timer4;     // Timer4 / Counter4 from GPIO Module 
	unsigned int vfp9       : BFW_vic_irq_status_vfp9;       // reserved 
} VIC_IRQ_STATUS_BIT_T;

typedef union {
	unsigned int         val;
	VIC_IRQ_STATUS_BIT_T bf;
} VIC_IRQ_STATUS_T;

// ---------------------------------------------------------------------
// Register vic_fiq_status
// => VIC FIQ status register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_vic_fiq_status 0x00000004U
#define Adr_vic_fiq_status     0x001FF004U

#define MSK_vic_fiq_status_sw         0x00000001U // [0]
#define SRT_vic_fiq_status_sw         0           
#define MSK_vic_fiq_status_timer0     0x00000002U // [1]
#define SRT_vic_fiq_status_timer0     1           
#define MSK_vic_fiq_status_timer1     0x00000004U // [2]
#define SRT_vic_fiq_status_timer1     2           
#define MSK_vic_fiq_status_timer2     0x00000008U // [3]
#define SRT_vic_fiq_status_timer2     3           
#define MSK_vic_fiq_status_systime_ns 0x00000010U // [4]
#define SRT_vic_fiq_status_systime_ns 4           
#define MSK_vic_fiq_status_systime_s  0x00000020U // [5]
#define SRT_vic_fiq_status_systime_s  5           
#define MSK_vic_fiq_status_gpio15     0x00000040U // [6]
#define SRT_vic_fiq_status_gpio15     6           
#define MSK_vic_fiq_status_watchdog   0x00000080U // [7]
#define SRT_vic_fiq_status_watchdog   7           
#define MSK_vic_fiq_status_uart0      0x00000100U // [8]
#define SRT_vic_fiq_status_uart0      8           
#define MSK_vic_fiq_status_uart1      0x00000200U // [9]
#define SRT_vic_fiq_status_uart1      9           
#define MSK_vic_fiq_status_uart2      0x00000400U // [10]
#define SRT_vic_fiq_status_uart2      10          
#define MSK_vic_fiq_status_usb        0x00000800U // [11]
#define SRT_vic_fiq_status_usb        11          
#define MSK_vic_fiq_status_spi        0x00001000U // [12]
#define SRT_vic_fiq_status_spi        12          
#define MSK_vic_fiq_status_i2c        0x00002000U // [13]
#define SRT_vic_fiq_status_i2c        13          
#define MSK_vic_fiq_status_lcd        0x00004000U // [14]
#define SRT_vic_fiq_status_lcd        14          
#define MSK_vic_fiq_status_hif        0x00008000U // [15]
#define SRT_vic_fiq_status_hif        15          
#define MSK_vic_fiq_status_gpio       0x00010000U // [16]
#define SRT_vic_fiq_status_gpio       16          
#define MSK_vic_fiq_status_com0       0x00020000U // [17]
#define SRT_vic_fiq_status_com0       17          
#define MSK_vic_fiq_status_com1       0x00040000U // [18]
#define SRT_vic_fiq_status_com1       18          
#define MSK_vic_fiq_status_com2       0x00080000U // [19]
#define SRT_vic_fiq_status_com2       19          
#define MSK_vic_fiq_status_com3       0x00100000U // [20]
#define SRT_vic_fiq_status_com3       20          
#define MSK_vic_fiq_status_msync0     0x00200000U // [21]
#define SRT_vic_fiq_status_msync0     21          
#define MSK_vic_fiq_status_msync1     0x00400000U // [22]
#define SRT_vic_fiq_status_msync1     22          
#define MSK_vic_fiq_status_msync2     0x00800000U // [23]
#define SRT_vic_fiq_status_msync2     23          
#define MSK_vic_fiq_status_msync3     0x01000000U // [24]
#define SRT_vic_fiq_status_msync3     24          
#define MSK_vic_fiq_status_int_phy    0x02000000U // [25]
#define SRT_vic_fiq_status_int_phy    25          
#define MSK_vic_fiq_status_iso_area   0x04000000U // [26]
#define SRT_vic_fiq_status_iso_area   26          
#define MSK_vic_fiq_status_timer3     0x20000000U // [29]
#define SRT_vic_fiq_status_timer3     29          
#define MSK_vic_fiq_status_timer4     0x40000000U // [30]
#define SRT_vic_fiq_status_timer4     30          
#define MSK_vic_fiq_status_vfp9       0x80000000U // [31]
#define SRT_vic_fiq_status_vfp9       31          

enum {
	BFW_vic_fiq_status_sw         = 1, // [0]
	BFW_vic_fiq_status_timer0     = 1, // [1]
	BFW_vic_fiq_status_timer1     = 1, // [2]
	BFW_vic_fiq_status_timer2     = 1, // [3]
	BFW_vic_fiq_status_systime_ns = 1, // [4]
	BFW_vic_fiq_status_systime_s  = 1, // [5]
	BFW_vic_fiq_status_gpio15     = 1, // [6]
	BFW_vic_fiq_status_watchdog   = 1, // [7]
	BFW_vic_fiq_status_uart0      = 1, // [8]
	BFW_vic_fiq_status_uart1      = 1, // [9]
	BFW_vic_fiq_status_uart2      = 1, // [10]
	BFW_vic_fiq_status_usb        = 1, // [11]
	BFW_vic_fiq_status_spi        = 1, // [12]
	BFW_vic_fiq_status_i2c        = 1, // [13]
	BFW_vic_fiq_status_lcd        = 1, // [14]
	BFW_vic_fiq_status_hif        = 1, // [15]
	BFW_vic_fiq_status_gpio       = 1, // [16]
	BFW_vic_fiq_status_com0       = 1, // [17]
	BFW_vic_fiq_status_com1       = 1, // [18]
	BFW_vic_fiq_status_com2       = 1, // [19]
	BFW_vic_fiq_status_com3       = 1, // [20]
	BFW_vic_fiq_status_msync0     = 1, // [21]
	BFW_vic_fiq_status_msync1     = 1, // [22]
	BFW_vic_fiq_status_msync2     = 1, // [23]
	BFW_vic_fiq_status_msync3     = 1, // [24]
	BFW_vic_fiq_status_int_phy    = 1, // [25]
	BFW_vic_fiq_status_iso_area   = 1, // [26]
	BFW_vic_fiq_status_reserved1  = 2, // [28:27]
	BFW_vic_fiq_status_timer3     = 1, // [29]
	BFW_vic_fiq_status_timer4     = 1, // [30]
	BFW_vic_fiq_status_vfp9       = 1  // [31]
};

typedef struct VIC_FIQ_STATUS_BIT_Ttag {
	unsigned int sw         : BFW_vic_fiq_status_sw;         // Reserved  for Software Interrupt, ARM standard configuration 
	unsigned int timer0     : BFW_vic_fiq_status_timer0;     // Timer0 / Counter0 from GPIO Module -> Real time operating system timer, Windows CE required 
	unsigned int timer1     : BFW_vic_fiq_status_timer1;     // Timer1 / Counter1 from GPIO Module 
	unsigned int timer2     : BFW_vic_fiq_status_timer2;     // Timer2 / Counter2 from GPIO Module 
	unsigned int systime_ns : BFW_vic_fiq_status_systime_ns; // systime ns compare irq from GPIO module 
	unsigned int systime_s  : BFW_vic_fiq_status_systime_s;  // systime 1day IRQ from SYSTIME module, Windows CE required 
	unsigned int gpio15     : BFW_vic_fiq_status_gpio15;     // external interrupt 15, Windows CE required (NMI) 
	unsigned int watchdog   : BFW_vic_fiq_status_watchdog;   // reserved 
	unsigned int uart0      : BFW_vic_fiq_status_uart0;      // UART 0 -> Diagnostic channel, Windows CE required 
	unsigned int uart1      : BFW_vic_fiq_status_uart1;      // UART 1 
	unsigned int uart2      : BFW_vic_fiq_status_uart2;      // UART 2 
	unsigned int usb        : BFW_vic_fiq_status_usb;        // USB interrupt 
	unsigned int spi        : BFW_vic_fiq_status_spi;        // SPI interrupt 
	unsigned int i2c        : BFW_vic_fiq_status_i2c;        // reserved 
	unsigned int lcd        : BFW_vic_fiq_status_lcd;        // LCD-Controller interrupt 
	unsigned int hif        : BFW_vic_fiq_status_hif;        // PCI / HIF interrupt 
	unsigned int gpio       : BFW_vic_fiq_status_gpio;       // other external Interrupts from GPIO 0-14 
	unsigned int com0       : BFW_vic_fiq_status_com0;       // Communication channel 0 (= |xpec0_irq[11:0]) 
	unsigned int com1       : BFW_vic_fiq_status_com1;       // Communication channel 1 (= |xpec1_irq[11:0]) 
	unsigned int com2       : BFW_vic_fiq_status_com2;       // Communication channel 2 (= |xpec2_irq[11:0]) 
	unsigned int com3       : BFW_vic_fiq_status_com3;       // Communication channel 3 (= |xpec3_irq[11:0]) 
	unsigned int msync0     : BFW_vic_fiq_status_msync0;     // Motion synchronization channel 0 (= |xpec0_irq[15:12]) 
	unsigned int msync1     : BFW_vic_fiq_status_msync1;     // Motion synchronization channel 1 (= |xpec1_irq[15:12]) 
	unsigned int msync2     : BFW_vic_fiq_status_msync2;     // Motion synchronization channel 2 (= |xpec2_irq[15:12]) 
	unsigned int msync3     : BFW_vic_fiq_status_msync3;     // Motion synchronization channel 3 (= |xpec3_irq[15:12]) 
	unsigned int int_phy    : BFW_vic_fiq_status_int_phy;    // Interrupt from internal Phys 
	unsigned int iso_area   : BFW_vic_fiq_status_iso_area;   // Power is going down (see RTC for details) 
	unsigned int reserved1  : BFW_vic_fiq_status_reserved1;  // reserved
	unsigned int timer3     : BFW_vic_fiq_status_timer3;     // Timer3 / Counter3 from GPIO Module 
	unsigned int timer4     : BFW_vic_fiq_status_timer4;     // Timer4 / Counter4 from GPIO Module 
	unsigned int vfp9       : BFW_vic_fiq_status_vfp9;       // reserved 
} VIC_FIQ_STATUS_BIT_T;

typedef union {
	unsigned int         val;
	VIC_FIQ_STATUS_BIT_T bf;
} VIC_FIQ_STATUS_T;

// ---------------------------------------------------------------------
// Register vic_raw_intr
// => VIC Raw interrupt status register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_vic_raw_intr 0x00000008U
#define Adr_vic_raw_intr     0x001FF008U

#define MSK_vic_raw_intr_sw         0x00000001U // [0]
#define SRT_vic_raw_intr_sw         0           
#define MSK_vic_raw_intr_timer0     0x00000002U // [1]
#define SRT_vic_raw_intr_timer0     1           
#define MSK_vic_raw_intr_timer1     0x00000004U // [2]
#define SRT_vic_raw_intr_timer1     2           
#define MSK_vic_raw_intr_timer2     0x00000008U // [3]
#define SRT_vic_raw_intr_timer2     3           
#define MSK_vic_raw_intr_systime_ns 0x00000010U // [4]
#define SRT_vic_raw_intr_systime_ns 4           
#define MSK_vic_raw_intr_systime_s  0x00000020U // [5]
#define SRT_vic_raw_intr_systime_s  5           
#define MSK_vic_raw_intr_gpio15     0x00000040U // [6]
#define SRT_vic_raw_intr_gpio15     6           
#define MSK_vic_raw_intr_watchdog   0x00000080U // [7]
#define SRT_vic_raw_intr_watchdog   7           
#define MSK_vic_raw_intr_uart0      0x00000100U // [8]
#define SRT_vic_raw_intr_uart0      8           
#define MSK_vic_raw_intr_uart1      0x00000200U // [9]
#define SRT_vic_raw_intr_uart1      9           
#define MSK_vic_raw_intr_uart2      0x00000400U // [10]
#define SRT_vic_raw_intr_uart2      10          
#define MSK_vic_raw_intr_usb        0x00000800U // [11]
#define SRT_vic_raw_intr_usb        11          
#define MSK_vic_raw_intr_spi        0x00001000U // [12]
#define SRT_vic_raw_intr_spi        12          
#define MSK_vic_raw_intr_i2c        0x00002000U // [13]
#define SRT_vic_raw_intr_i2c        13          
#define MSK_vic_raw_intr_lcd        0x00004000U // [14]
#define SRT_vic_raw_intr_lcd        14          
#define MSK_vic_raw_intr_hif        0x00008000U // [15]
#define SRT_vic_raw_intr_hif        15          
#define MSK_vic_raw_intr_gpio       0x00010000U // [16]
#define SRT_vic_raw_intr_gpio       16          
#define MSK_vic_raw_intr_com0       0x00020000U // [17]
#define SRT_vic_raw_intr_com0       17          
#define MSK_vic_raw_intr_com1       0x00040000U // [18]
#define SRT_vic_raw_intr_com1       18          
#define MSK_vic_raw_intr_com2       0x00080000U // [19]
#define SRT_vic_raw_intr_com2       19          
#define MSK_vic_raw_intr_com3       0x00100000U // [20]
#define SRT_vic_raw_intr_com3       20          
#define MSK_vic_raw_intr_msync0     0x00200000U // [21]
#define SRT_vic_raw_intr_msync0     21          
#define MSK_vic_raw_intr_msync1     0x00400000U // [22]
#define SRT_vic_raw_intr_msync1     22          
#define MSK_vic_raw_intr_msync2     0x00800000U // [23]
#define SRT_vic_raw_intr_msync2     23          
#define MSK_vic_raw_intr_msync3     0x01000000U // [24]
#define SRT_vic_raw_intr_msync3     24          
#define MSK_vic_raw_intr_int_phy    0x02000000U // [25]
#define SRT_vic_raw_intr_int_phy    25          
#define MSK_vic_raw_intr_iso_area   0x04000000U // [26]
#define SRT_vic_raw_intr_iso_area   26          
#define MSK_vic_raw_intr_timer3     0x20000000U // [29]
#define SRT_vic_raw_intr_timer3     29          
#define MSK_vic_raw_intr_timer4     0x40000000U // [30]
#define SRT_vic_raw_intr_timer4     30          
#define MSK_vic_raw_intr_vfp9       0x80000000U // [31]
#define SRT_vic_raw_intr_vfp9       31          

enum {
	BFW_vic_raw_intr_sw         = 1, // [0]
	BFW_vic_raw_intr_timer0     = 1, // [1]
	BFW_vic_raw_intr_timer1     = 1, // [2]
	BFW_vic_raw_intr_timer2     = 1, // [3]
	BFW_vic_raw_intr_systime_ns = 1, // [4]
	BFW_vic_raw_intr_systime_s  = 1, // [5]
	BFW_vic_raw_intr_gpio15     = 1, // [6]
	BFW_vic_raw_intr_watchdog   = 1, // [7]
	BFW_vic_raw_intr_uart0      = 1, // [8]
	BFW_vic_raw_intr_uart1      = 1, // [9]
	BFW_vic_raw_intr_uart2      = 1, // [10]
	BFW_vic_raw_intr_usb        = 1, // [11]
	BFW_vic_raw_intr_spi        = 1, // [12]
	BFW_vic_raw_intr_i2c        = 1, // [13]
	BFW_vic_raw_intr_lcd        = 1, // [14]
	BFW_vic_raw_intr_hif        = 1, // [15]
	BFW_vic_raw_intr_gpio       = 1, // [16]
	BFW_vic_raw_intr_com0       = 1, // [17]
	BFW_vic_raw_intr_com1       = 1, // [18]
	BFW_vic_raw_intr_com2       = 1, // [19]
	BFW_vic_raw_intr_com3       = 1, // [20]
	BFW_vic_raw_intr_msync0     = 1, // [21]
	BFW_vic_raw_intr_msync1     = 1, // [22]
	BFW_vic_raw_intr_msync2     = 1, // [23]
	BFW_vic_raw_intr_msync3     = 1, // [24]
	BFW_vic_raw_intr_int_phy    = 1, // [25]
	BFW_vic_raw_intr_iso_area   = 1, // [26]
	BFW_vic_raw_intr_reserved1  = 2, // [28:27]
	BFW_vic_raw_intr_timer3     = 1, // [29]
	BFW_vic_raw_intr_timer4     = 1, // [30]
	BFW_vic_raw_intr_vfp9       = 1  // [31]
};

typedef struct VIC_RAW_INTR_BIT_Ttag {
	unsigned int sw         : BFW_vic_raw_intr_sw;         // Reserved  for Software Interrupt, ARM standard configuration 
	unsigned int timer0     : BFW_vic_raw_intr_timer0;     // Timer0 / Counter0 from GPIO Module -> Real time operating system timer, Windows CE required 
	unsigned int timer1     : BFW_vic_raw_intr_timer1;     // Timer1 / Counter1 from GPIO Module 
	unsigned int timer2     : BFW_vic_raw_intr_timer2;     // Timer2 / Counter2 from GPIO Module 
	unsigned int systime_ns : BFW_vic_raw_intr_systime_ns; // systime ns compare irq from GPIO module 
	unsigned int systime_s  : BFW_vic_raw_intr_systime_s;  // systime 1day IRQ from SYSTIME module, Windows CE required 
	unsigned int gpio15     : BFW_vic_raw_intr_gpio15;     // external interrupt 15, Windows CE required (NMI) 
	unsigned int watchdog   : BFW_vic_raw_intr_watchdog;   // reserved 
	unsigned int uart0      : BFW_vic_raw_intr_uart0;      // UART 0 -> Diagnostic channel, Windows CE required 
	unsigned int uart1      : BFW_vic_raw_intr_uart1;      // UART 1 
	unsigned int uart2      : BFW_vic_raw_intr_uart2;      // UART 2 
	unsigned int usb        : BFW_vic_raw_intr_usb;        // USB interrupt 
	unsigned int spi        : BFW_vic_raw_intr_spi;        // SPI interrupt 
	unsigned int i2c        : BFW_vic_raw_intr_i2c;        // reserved 
	unsigned int lcd        : BFW_vic_raw_intr_lcd;        // LCD-Controller interrupt 
	unsigned int hif        : BFW_vic_raw_intr_hif;        // PCI / HIF interrupt 
	unsigned int gpio       : BFW_vic_raw_intr_gpio;       // other external Interrupts from GPIO 0-14 
	unsigned int com0       : BFW_vic_raw_intr_com0;       // Communication channel 0 (= |xpec0_irq[11:0]) 
	unsigned int com1       : BFW_vic_raw_intr_com1;       // Communication channel 1 (= |xpec1_irq[11:0]) 
	unsigned int com2       : BFW_vic_raw_intr_com2;       // Communication channel 2 (= |xpec2_irq[11:0]) 
	unsigned int com3       : BFW_vic_raw_intr_com3;       // Communication channel 3 (= |xpec3_irq[11:0]) 
	unsigned int msync0     : BFW_vic_raw_intr_msync0;     // Motion synchronization channel 0 (= |xpec0_irq[15:12]) 
	unsigned int msync1     : BFW_vic_raw_intr_msync1;     // Motion synchronization channel 1 (= |xpec1_irq[15:12]) 
	unsigned int msync2     : BFW_vic_raw_intr_msync2;     // Motion synchronization channel 2 (= |xpec2_irq[15:12]) 
	unsigned int msync3     : BFW_vic_raw_intr_msync3;     // Motion synchronization channel 3 (= |xpec3_irq[15:12]) 
	unsigned int int_phy    : BFW_vic_raw_intr_int_phy;    // Interrupt from internal Phys 
	unsigned int iso_area   : BFW_vic_raw_intr_iso_area;   // Power is going down (see RTC for details) 
	unsigned int reserved1  : BFW_vic_raw_intr_reserved1;  // reserved
	unsigned int timer3     : BFW_vic_raw_intr_timer3;     // Timer3 / Counter3 from GPIO Module 
	unsigned int timer4     : BFW_vic_raw_intr_timer4;     // Timer4 / Counter4 from GPIO Module 
	unsigned int vfp9       : BFW_vic_raw_intr_vfp9;       // reserved 
} VIC_RAW_INTR_BIT_T;

typedef union {
	unsigned int       val;
	VIC_RAW_INTR_BIT_T bf;
} VIC_RAW_INTR_T;

// ---------------------------------------------------------------------
// Register vic_int_select
// => VIC Interrupt select register
//    1 = FIQ interrupt
//    0 = IRQ interrupt
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_int_select 0x0000000CU
#define Adr_vic_int_select     0x001FF00CU

#define MSK_vic_int_select_sw         0x00000001U // [0]
#define SRT_vic_int_select_sw         0           
#define MSK_vic_int_select_timer0     0x00000002U // [1]
#define SRT_vic_int_select_timer0     1           
#define MSK_vic_int_select_timer1     0x00000004U // [2]
#define SRT_vic_int_select_timer1     2           
#define MSK_vic_int_select_timer2     0x00000008U // [3]
#define SRT_vic_int_select_timer2     3           
#define MSK_vic_int_select_systime_ns 0x00000010U // [4]
#define SRT_vic_int_select_systime_ns 4           
#define MSK_vic_int_select_systime_s  0x00000020U // [5]
#define SRT_vic_int_select_systime_s  5           
#define MSK_vic_int_select_gpio15     0x00000040U // [6]
#define SRT_vic_int_select_gpio15     6           
#define MSK_vic_int_select_watchdog   0x00000080U // [7]
#define SRT_vic_int_select_watchdog   7           
#define MSK_vic_int_select_uart0      0x00000100U // [8]
#define SRT_vic_int_select_uart0      8           
#define MSK_vic_int_select_uart1      0x00000200U // [9]
#define SRT_vic_int_select_uart1      9           
#define MSK_vic_int_select_uart2      0x00000400U // [10]
#define SRT_vic_int_select_uart2      10          
#define MSK_vic_int_select_usb        0x00000800U // [11]
#define SRT_vic_int_select_usb        11          
#define MSK_vic_int_select_spi        0x00001000U // [12]
#define SRT_vic_int_select_spi        12          
#define MSK_vic_int_select_i2c        0x00002000U // [13]
#define SRT_vic_int_select_i2c        13          
#define MSK_vic_int_select_lcd        0x00004000U // [14]
#define SRT_vic_int_select_lcd        14          
#define MSK_vic_int_select_hif        0x00008000U // [15]
#define SRT_vic_int_select_hif        15          
#define MSK_vic_int_select_gpio       0x00010000U // [16]
#define SRT_vic_int_select_gpio       16          
#define MSK_vic_int_select_com0       0x00020000U // [17]
#define SRT_vic_int_select_com0       17          
#define MSK_vic_int_select_com1       0x00040000U // [18]
#define SRT_vic_int_select_com1       18          
#define MSK_vic_int_select_com2       0x00080000U // [19]
#define SRT_vic_int_select_com2       19          
#define MSK_vic_int_select_com3       0x00100000U // [20]
#define SRT_vic_int_select_com3       20          
#define MSK_vic_int_select_msync0     0x00200000U // [21]
#define SRT_vic_int_select_msync0     21          
#define MSK_vic_int_select_msync1     0x00400000U // [22]
#define SRT_vic_int_select_msync1     22          
#define MSK_vic_int_select_msync2     0x00800000U // [23]
#define SRT_vic_int_select_msync2     23          
#define MSK_vic_int_select_msync3     0x01000000U // [24]
#define SRT_vic_int_select_msync3     24          
#define MSK_vic_int_select_int_phy    0x02000000U // [25]
#define SRT_vic_int_select_int_phy    25          
#define MSK_vic_int_select_iso_area   0x04000000U // [26]
#define SRT_vic_int_select_iso_area   26          
#define MSK_vic_int_select_timer3     0x20000000U // [29]
#define SRT_vic_int_select_timer3     29          
#define MSK_vic_int_select_timer4     0x40000000U // [30]
#define SRT_vic_int_select_timer4     30          
#define MSK_vic_int_select_vfp9       0x80000000U // [31]
#define SRT_vic_int_select_vfp9       31          

enum {
	BFW_vic_int_select_sw         = 1, // [0]
	BFW_vic_int_select_timer0     = 1, // [1]
	BFW_vic_int_select_timer1     = 1, // [2]
	BFW_vic_int_select_timer2     = 1, // [3]
	BFW_vic_int_select_systime_ns = 1, // [4]
	BFW_vic_int_select_systime_s  = 1, // [5]
	BFW_vic_int_select_gpio15     = 1, // [6]
	BFW_vic_int_select_watchdog   = 1, // [7]
	BFW_vic_int_select_uart0      = 1, // [8]
	BFW_vic_int_select_uart1      = 1, // [9]
	BFW_vic_int_select_uart2      = 1, // [10]
	BFW_vic_int_select_usb        = 1, // [11]
	BFW_vic_int_select_spi        = 1, // [12]
	BFW_vic_int_select_i2c        = 1, // [13]
	BFW_vic_int_select_lcd        = 1, // [14]
	BFW_vic_int_select_hif        = 1, // [15]
	BFW_vic_int_select_gpio       = 1, // [16]
	BFW_vic_int_select_com0       = 1, // [17]
	BFW_vic_int_select_com1       = 1, // [18]
	BFW_vic_int_select_com2       = 1, // [19]
	BFW_vic_int_select_com3       = 1, // [20]
	BFW_vic_int_select_msync0     = 1, // [21]
	BFW_vic_int_select_msync1     = 1, // [22]
	BFW_vic_int_select_msync2     = 1, // [23]
	BFW_vic_int_select_msync3     = 1, // [24]
	BFW_vic_int_select_int_phy    = 1, // [25]
	BFW_vic_int_select_iso_area   = 1, // [26]
	BFW_vic_int_select_reserved1  = 2, // [28:27]
	BFW_vic_int_select_timer3     = 1, // [29]
	BFW_vic_int_select_timer4     = 1, // [30]
	BFW_vic_int_select_vfp9       = 1  // [31]
};

typedef struct VIC_INT_SELECT_BIT_Ttag {
	unsigned int sw         : BFW_vic_int_select_sw;         // Reserved  for Software Interrupt, ARM standard configuration 
	unsigned int timer0     : BFW_vic_int_select_timer0;     // Timer0 / Counter0 from GPIO Module -> Real time operating system timer, Windows CE required 
	unsigned int timer1     : BFW_vic_int_select_timer1;     // Timer1 / Counter1 from GPIO Module 
	unsigned int timer2     : BFW_vic_int_select_timer2;     // Timer2 / Counter2 from GPIO Module 
	unsigned int systime_ns : BFW_vic_int_select_systime_ns; // systime ns compare irq from GPIO module 
	unsigned int systime_s  : BFW_vic_int_select_systime_s;  // systime 1day IRQ from SYSTIME module, Windows CE required 
	unsigned int gpio15     : BFW_vic_int_select_gpio15;     // external interrupt 15, Windows CE required (NMI) 
	unsigned int watchdog   : BFW_vic_int_select_watchdog;   // reserved 
	unsigned int uart0      : BFW_vic_int_select_uart0;      // UART 0 -> Diagnostic channel, Windows CE required 
	unsigned int uart1      : BFW_vic_int_select_uart1;      // UART 1 
	unsigned int uart2      : BFW_vic_int_select_uart2;      // UART 2 
	unsigned int usb        : BFW_vic_int_select_usb;        // USB interrupt 
	unsigned int spi        : BFW_vic_int_select_spi;        // SPI interrupt 
	unsigned int i2c        : BFW_vic_int_select_i2c;        // reserved 
	unsigned int lcd        : BFW_vic_int_select_lcd;        // LCD-Controller interrupt 
	unsigned int hif        : BFW_vic_int_select_hif;        // PCI / HIF interrupt 
	unsigned int gpio       : BFW_vic_int_select_gpio;       // other external Interrupts from GPIO 0-14 
	unsigned int com0       : BFW_vic_int_select_com0;       // Communication channel 0 (= |xpec0_irq[11:0]) 
	unsigned int com1       : BFW_vic_int_select_com1;       // Communication channel 1 (= |xpec1_irq[11:0]) 
	unsigned int com2       : BFW_vic_int_select_com2;       // Communication channel 2 (= |xpec2_irq[11:0]) 
	unsigned int com3       : BFW_vic_int_select_com3;       // Communication channel 3 (= |xpec3_irq[11:0]) 
	unsigned int msync0     : BFW_vic_int_select_msync0;     // Motion synchronization channel 0 (= |xpec0_irq[15:12]) 
	unsigned int msync1     : BFW_vic_int_select_msync1;     // Motion synchronization channel 1 (= |xpec1_irq[15:12]) 
	unsigned int msync2     : BFW_vic_int_select_msync2;     // Motion synchronization channel 2 (= |xpec2_irq[15:12]) 
	unsigned int msync3     : BFW_vic_int_select_msync3;     // Motion synchronization channel 3 (= |xpec3_irq[15:12]) 
	unsigned int int_phy    : BFW_vic_int_select_int_phy;    // Interrupt from internal Phys 
	unsigned int iso_area   : BFW_vic_int_select_iso_area;   // Power is going down (see RTC for details) 
	unsigned int reserved1  : BFW_vic_int_select_reserved1;  // reserved
	unsigned int timer3     : BFW_vic_int_select_timer3;     // Timer3 / Counter3 from GPIO Module 
	unsigned int timer4     : BFW_vic_int_select_timer4;     // Timer4 / Counter4 from GPIO Module 
	unsigned int vfp9       : BFW_vic_int_select_vfp9;       // reserved 
} VIC_INT_SELECT_BIT_T;

typedef union {
	unsigned int         val;
	VIC_INT_SELECT_BIT_T bf;
} VIC_INT_SELECT_T;

// ---------------------------------------------------------------------
// Register vic_int_enable
// => VIC Interrupt enable register
//    1 = Interrupt enabled
//    0 = Interrupt disabled
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_int_enable 0x00000010U
#define Adr_vic_int_enable     0x001FF010U

#define MSK_vic_int_enable_sw         0x00000001U // [0]
#define SRT_vic_int_enable_sw         0           
#define MSK_vic_int_enable_timer0     0x00000002U // [1]
#define SRT_vic_int_enable_timer0     1           
#define MSK_vic_int_enable_timer1     0x00000004U // [2]
#define SRT_vic_int_enable_timer1     2           
#define MSK_vic_int_enable_timer2     0x00000008U // [3]
#define SRT_vic_int_enable_timer2     3           
#define MSK_vic_int_enable_systime_ns 0x00000010U // [4]
#define SRT_vic_int_enable_systime_ns 4           
#define MSK_vic_int_enable_systime_s  0x00000020U // [5]
#define SRT_vic_int_enable_systime_s  5           
#define MSK_vic_int_enable_gpio15     0x00000040U // [6]
#define SRT_vic_int_enable_gpio15     6           
#define MSK_vic_int_enable_watchdog   0x00000080U // [7]
#define SRT_vic_int_enable_watchdog   7           
#define MSK_vic_int_enable_uart0      0x00000100U // [8]
#define SRT_vic_int_enable_uart0      8           
#define MSK_vic_int_enable_uart1      0x00000200U // [9]
#define SRT_vic_int_enable_uart1      9           
#define MSK_vic_int_enable_uart2      0x00000400U // [10]
#define SRT_vic_int_enable_uart2      10          
#define MSK_vic_int_enable_usb        0x00000800U // [11]
#define SRT_vic_int_enable_usb        11          
#define MSK_vic_int_enable_spi        0x00001000U // [12]
#define SRT_vic_int_enable_spi        12          
#define MSK_vic_int_enable_i2c        0x00002000U // [13]
#define SRT_vic_int_enable_i2c        13          
#define MSK_vic_int_enable_lcd        0x00004000U // [14]
#define SRT_vic_int_enable_lcd        14          
#define MSK_vic_int_enable_hif        0x00008000U // [15]
#define SRT_vic_int_enable_hif        15          
#define MSK_vic_int_enable_gpio       0x00010000U // [16]
#define SRT_vic_int_enable_gpio       16          
#define MSK_vic_int_enable_com0       0x00020000U // [17]
#define SRT_vic_int_enable_com0       17          
#define MSK_vic_int_enable_com1       0x00040000U // [18]
#define SRT_vic_int_enable_com1       18          
#define MSK_vic_int_enable_com2       0x00080000U // [19]
#define SRT_vic_int_enable_com2       19          
#define MSK_vic_int_enable_com3       0x00100000U // [20]
#define SRT_vic_int_enable_com3       20          
#define MSK_vic_int_enable_msync0     0x00200000U // [21]
#define SRT_vic_int_enable_msync0     21          
#define MSK_vic_int_enable_msync1     0x00400000U // [22]
#define SRT_vic_int_enable_msync1     22          
#define MSK_vic_int_enable_msync2     0x00800000U // [23]
#define SRT_vic_int_enable_msync2     23          
#define MSK_vic_int_enable_msync3     0x01000000U // [24]
#define SRT_vic_int_enable_msync3     24          
#define MSK_vic_int_enable_int_phy    0x02000000U // [25]
#define SRT_vic_int_enable_int_phy    25          
#define MSK_vic_int_enable_iso_area   0x04000000U // [26]
#define SRT_vic_int_enable_iso_area   26          
#define MSK_vic_int_enable_timer3     0x20000000U // [29]
#define SRT_vic_int_enable_timer3     29          
#define MSK_vic_int_enable_timer4     0x40000000U // [30]
#define SRT_vic_int_enable_timer4     30          
#define MSK_vic_int_enable_vfp9       0x80000000U // [31]
#define SRT_vic_int_enable_vfp9       31          

enum {
	BFW_vic_int_enable_sw         = 1, // [0]
	BFW_vic_int_enable_timer0     = 1, // [1]
	BFW_vic_int_enable_timer1     = 1, // [2]
	BFW_vic_int_enable_timer2     = 1, // [3]
	BFW_vic_int_enable_systime_ns = 1, // [4]
	BFW_vic_int_enable_systime_s  = 1, // [5]
	BFW_vic_int_enable_gpio15     = 1, // [6]
	BFW_vic_int_enable_watchdog   = 1, // [7]
	BFW_vic_int_enable_uart0      = 1, // [8]
	BFW_vic_int_enable_uart1      = 1, // [9]
	BFW_vic_int_enable_uart2      = 1, // [10]
	BFW_vic_int_enable_usb        = 1, // [11]
	BFW_vic_int_enable_spi        = 1, // [12]
	BFW_vic_int_enable_i2c        = 1, // [13]
	BFW_vic_int_enable_lcd        = 1, // [14]
	BFW_vic_int_enable_hif        = 1, // [15]
	BFW_vic_int_enable_gpio       = 1, // [16]
	BFW_vic_int_enable_com0       = 1, // [17]
	BFW_vic_int_enable_com1       = 1, // [18]
	BFW_vic_int_enable_com2       = 1, // [19]
	BFW_vic_int_enable_com3       = 1, // [20]
	BFW_vic_int_enable_msync0     = 1, // [21]
	BFW_vic_int_enable_msync1     = 1, // [22]
	BFW_vic_int_enable_msync2     = 1, // [23]
	BFW_vic_int_enable_msync3     = 1, // [24]
	BFW_vic_int_enable_int_phy    = 1, // [25]
	BFW_vic_int_enable_iso_area   = 1, // [26]
	BFW_vic_int_enable_reserved1  = 2, // [28:27]
	BFW_vic_int_enable_timer3     = 1, // [29]
	BFW_vic_int_enable_timer4     = 1, // [30]
	BFW_vic_int_enable_vfp9       = 1  // [31]
};

typedef struct VIC_INT_ENABLE_BIT_Ttag {
	unsigned int sw         : BFW_vic_int_enable_sw;         // Reserved  for Software Interrupt, ARM standard configuration 
	unsigned int timer0     : BFW_vic_int_enable_timer0;     // Timer0 / Counter0 from GPIO Module -> Real time operating system timer, Windows CE required 
	unsigned int timer1     : BFW_vic_int_enable_timer1;     // Timer1 / Counter1 from GPIO Module 
	unsigned int timer2     : BFW_vic_int_enable_timer2;     // Timer2 / Counter2 from GPIO Module 
	unsigned int systime_ns : BFW_vic_int_enable_systime_ns; // systime ns compare irq from GPIO module 
	unsigned int systime_s  : BFW_vic_int_enable_systime_s;  // systime 1day IRQ from SYSTIME module, Windows CE required 
	unsigned int gpio15     : BFW_vic_int_enable_gpio15;     // external interrupt 15, Windows CE required (NMI) 
	unsigned int watchdog   : BFW_vic_int_enable_watchdog;   // reserved 
	unsigned int uart0      : BFW_vic_int_enable_uart0;      // UART 0 -> Diagnostic channel, Windows CE required 
	unsigned int uart1      : BFW_vic_int_enable_uart1;      // UART 1 
	unsigned int uart2      : BFW_vic_int_enable_uart2;      // UART 2 
	unsigned int usb        : BFW_vic_int_enable_usb;        // USB interrupt 
	unsigned int spi        : BFW_vic_int_enable_spi;        // SPI interrupt 
	unsigned int i2c        : BFW_vic_int_enable_i2c;        // reserved 
	unsigned int lcd        : BFW_vic_int_enable_lcd;        // LCD-Controller interrupt 
	unsigned int hif        : BFW_vic_int_enable_hif;        // PCI / HIF interrupt 
	unsigned int gpio       : BFW_vic_int_enable_gpio;       // other external Interrupts from GPIO 0-14 
	unsigned int com0       : BFW_vic_int_enable_com0;       // Communication channel 0 (= |xpec0_irq[11:0]) 
	unsigned int com1       : BFW_vic_int_enable_com1;       // Communication channel 1 (= |xpec1_irq[11:0]) 
	unsigned int com2       : BFW_vic_int_enable_com2;       // Communication channel 2 (= |xpec2_irq[11:0]) 
	unsigned int com3       : BFW_vic_int_enable_com3;       // Communication channel 3 (= |xpec3_irq[11:0]) 
	unsigned int msync0     : BFW_vic_int_enable_msync0;     // Motion synchronization channel 0 (= |xpec0_irq[15:12]) 
	unsigned int msync1     : BFW_vic_int_enable_msync1;     // Motion synchronization channel 1 (= |xpec1_irq[15:12]) 
	unsigned int msync2     : BFW_vic_int_enable_msync2;     // Motion synchronization channel 2 (= |xpec2_irq[15:12]) 
	unsigned int msync3     : BFW_vic_int_enable_msync3;     // Motion synchronization channel 3 (= |xpec3_irq[15:12]) 
	unsigned int int_phy    : BFW_vic_int_enable_int_phy;    // Interrupt from internal Phys 
	unsigned int iso_area   : BFW_vic_int_enable_iso_area;   // Power is going down (see RTC for details) 
	unsigned int reserved1  : BFW_vic_int_enable_reserved1;  // reserved
	unsigned int timer3     : BFW_vic_int_enable_timer3;     // Timer3 / Counter3 from GPIO Module 
	unsigned int timer4     : BFW_vic_int_enable_timer4;     // Timer4 / Counter4 from GPIO Module 
	unsigned int vfp9       : BFW_vic_int_enable_vfp9;       // reserved 
} VIC_INT_ENABLE_BIT_T;

typedef union {
	unsigned int         val;
	VIC_INT_ENABLE_BIT_T bf;
} VIC_INT_ENABLE_T;

// ---------------------------------------------------------------------
// Register vic_int_enclear
// => VIC Interrupt enable clear register:
//    clear interrupt enable bits
// => Mode: Mode (w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_int_enclear 0x00000014U
#define Adr_vic_int_enclear     0x001FF014U

#define MSK_vic_int_enclear_sw         0x00000001U // [0]
#define SRT_vic_int_enclear_sw         0           
#define MSK_vic_int_enclear_timer0     0x00000002U // [1]
#define SRT_vic_int_enclear_timer0     1           
#define MSK_vic_int_enclear_timer1     0x00000004U // [2]
#define SRT_vic_int_enclear_timer1     2           
#define MSK_vic_int_enclear_timer2     0x00000008U // [3]
#define SRT_vic_int_enclear_timer2     3           
#define MSK_vic_int_enclear_systime_ns 0x00000010U // [4]
#define SRT_vic_int_enclear_systime_ns 4           
#define MSK_vic_int_enclear_systime_s  0x00000020U // [5]
#define SRT_vic_int_enclear_systime_s  5           
#define MSK_vic_int_enclear_gpio15     0x00000040U // [6]
#define SRT_vic_int_enclear_gpio15     6           
#define MSK_vic_int_enclear_watchdog   0x00000080U // [7]
#define SRT_vic_int_enclear_watchdog   7           
#define MSK_vic_int_enclear_uart0      0x00000100U // [8]
#define SRT_vic_int_enclear_uart0      8           
#define MSK_vic_int_enclear_uart1      0x00000200U // [9]
#define SRT_vic_int_enclear_uart1      9           
#define MSK_vic_int_enclear_uart2      0x00000400U // [10]
#define SRT_vic_int_enclear_uart2      10          
#define MSK_vic_int_enclear_usb        0x00000800U // [11]
#define SRT_vic_int_enclear_usb        11          
#define MSK_vic_int_enclear_spi        0x00001000U // [12]
#define SRT_vic_int_enclear_spi        12          
#define MSK_vic_int_enclear_i2c        0x00002000U // [13]
#define SRT_vic_int_enclear_i2c        13          
#define MSK_vic_int_enclear_lcd        0x00004000U // [14]
#define SRT_vic_int_enclear_lcd        14          
#define MSK_vic_int_enclear_hif        0x00008000U // [15]
#define SRT_vic_int_enclear_hif        15          
#define MSK_vic_int_enclear_gpio       0x00010000U // [16]
#define SRT_vic_int_enclear_gpio       16          
#define MSK_vic_int_enclear_com0       0x00020000U // [17]
#define SRT_vic_int_enclear_com0       17          
#define MSK_vic_int_enclear_com1       0x00040000U // [18]
#define SRT_vic_int_enclear_com1       18          
#define MSK_vic_int_enclear_com2       0x00080000U // [19]
#define SRT_vic_int_enclear_com2       19          
#define MSK_vic_int_enclear_com3       0x00100000U // [20]
#define SRT_vic_int_enclear_com3       20          
#define MSK_vic_int_enclear_msync0     0x00200000U // [21]
#define SRT_vic_int_enclear_msync0     21          
#define MSK_vic_int_enclear_msync1     0x00400000U // [22]
#define SRT_vic_int_enclear_msync1     22          
#define MSK_vic_int_enclear_msync2     0x00800000U // [23]
#define SRT_vic_int_enclear_msync2     23          
#define MSK_vic_int_enclear_msync3     0x01000000U // [24]
#define SRT_vic_int_enclear_msync3     24          
#define MSK_vic_int_enclear_int_phy    0x02000000U // [25]
#define SRT_vic_int_enclear_int_phy    25          
#define MSK_vic_int_enclear_iso_area   0x04000000U // [26]
#define SRT_vic_int_enclear_iso_area   26          
#define MSK_vic_int_enclear_timer3     0x20000000U // [29]
#define SRT_vic_int_enclear_timer3     29          
#define MSK_vic_int_enclear_timer4     0x40000000U // [30]
#define SRT_vic_int_enclear_timer4     30          
#define MSK_vic_int_enclear_vfp9       0x80000000U // [31]
#define SRT_vic_int_enclear_vfp9       31          

enum {
	BFW_vic_int_enclear_sw         = 1, // [0]
	BFW_vic_int_enclear_timer0     = 1, // [1]
	BFW_vic_int_enclear_timer1     = 1, // [2]
	BFW_vic_int_enclear_timer2     = 1, // [3]
	BFW_vic_int_enclear_systime_ns = 1, // [4]
	BFW_vic_int_enclear_systime_s  = 1, // [5]
	BFW_vic_int_enclear_gpio15     = 1, // [6]
	BFW_vic_int_enclear_watchdog   = 1, // [7]
	BFW_vic_int_enclear_uart0      = 1, // [8]
	BFW_vic_int_enclear_uart1      = 1, // [9]
	BFW_vic_int_enclear_uart2      = 1, // [10]
	BFW_vic_int_enclear_usb        = 1, // [11]
	BFW_vic_int_enclear_spi        = 1, // [12]
	BFW_vic_int_enclear_i2c        = 1, // [13]
	BFW_vic_int_enclear_lcd        = 1, // [14]
	BFW_vic_int_enclear_hif        = 1, // [15]
	BFW_vic_int_enclear_gpio       = 1, // [16]
	BFW_vic_int_enclear_com0       = 1, // [17]
	BFW_vic_int_enclear_com1       = 1, // [18]
	BFW_vic_int_enclear_com2       = 1, // [19]
	BFW_vic_int_enclear_com3       = 1, // [20]
	BFW_vic_int_enclear_msync0     = 1, // [21]
	BFW_vic_int_enclear_msync1     = 1, // [22]
	BFW_vic_int_enclear_msync2     = 1, // [23]
	BFW_vic_int_enclear_msync3     = 1, // [24]
	BFW_vic_int_enclear_int_phy    = 1, // [25]
	BFW_vic_int_enclear_iso_area   = 1, // [26]
	BFW_vic_int_enclear_reserved1  = 2, // [28:27]
	BFW_vic_int_enclear_timer3     = 1, // [29]
	BFW_vic_int_enclear_timer4     = 1, // [30]
	BFW_vic_int_enclear_vfp9       = 1  // [31]
};

typedef struct VIC_INT_ENCLEAR_BIT_Ttag {
	unsigned int sw         : BFW_vic_int_enclear_sw;         // Reserved  for Software Interrupt, ARM standard configuration 
	unsigned int timer0     : BFW_vic_int_enclear_timer0;     // Timer0 / Counter0 from GPIO Module -> Real time operating system timer, Windows CE required 
	unsigned int timer1     : BFW_vic_int_enclear_timer1;     // Timer1 / Counter1 from GPIO Module 
	unsigned int timer2     : BFW_vic_int_enclear_timer2;     // Timer2 / Counter2 from GPIO Module 
	unsigned int systime_ns : BFW_vic_int_enclear_systime_ns; // systime ns compare irq from GPIO module 
	unsigned int systime_s  : BFW_vic_int_enclear_systime_s;  // systime 1day IRQ from SYSTIME module, Windows CE required 
	unsigned int gpio15     : BFW_vic_int_enclear_gpio15;     // external interrupt 15, Windows CE required (NMI) 
	unsigned int watchdog   : BFW_vic_int_enclear_watchdog;   // reserved 
	unsigned int uart0      : BFW_vic_int_enclear_uart0;      // UART 0 -> Diagnostic channel, Windows CE required 
	unsigned int uart1      : BFW_vic_int_enclear_uart1;      // UART 1 
	unsigned int uart2      : BFW_vic_int_enclear_uart2;      // UART 2 
	unsigned int usb        : BFW_vic_int_enclear_usb;        // USB interrupt 
	unsigned int spi        : BFW_vic_int_enclear_spi;        // SPI interrupt 
	unsigned int i2c        : BFW_vic_int_enclear_i2c;        // reserved 
	unsigned int lcd        : BFW_vic_int_enclear_lcd;        // LCD-Controller interrupt 
	unsigned int hif        : BFW_vic_int_enclear_hif;        // PCI / HIF interrupt 
	unsigned int gpio       : BFW_vic_int_enclear_gpio;       // other external Interrupts from GPIO 0-14 
	unsigned int com0       : BFW_vic_int_enclear_com0;       // Communication channel 0 (= |xpec0_irq[11:0]) 
	unsigned int com1       : BFW_vic_int_enclear_com1;       // Communication channel 1 (= |xpec1_irq[11:0]) 
	unsigned int com2       : BFW_vic_int_enclear_com2;       // Communication channel 2 (= |xpec2_irq[11:0]) 
	unsigned int com3       : BFW_vic_int_enclear_com3;       // Communication channel 3 (= |xpec3_irq[11:0]) 
	unsigned int msync0     : BFW_vic_int_enclear_msync0;     // Motion synchronization channel 0 (= |xpec0_irq[15:12]) 
	unsigned int msync1     : BFW_vic_int_enclear_msync1;     // Motion synchronization channel 1 (= |xpec1_irq[15:12]) 
	unsigned int msync2     : BFW_vic_int_enclear_msync2;     // Motion synchronization channel 2 (= |xpec2_irq[15:12]) 
	unsigned int msync3     : BFW_vic_int_enclear_msync3;     // Motion synchronization channel 3 (= |xpec3_irq[15:12]) 
	unsigned int int_phy    : BFW_vic_int_enclear_int_phy;    // Interrupt from internal Phys 
	unsigned int iso_area   : BFW_vic_int_enclear_iso_area;   // Power is going down (see RTC for details) 
	unsigned int reserved1  : BFW_vic_int_enclear_reserved1;  // reserved
	unsigned int timer3     : BFW_vic_int_enclear_timer3;     // Timer3 / Counter3 from GPIO Module 
	unsigned int timer4     : BFW_vic_int_enclear_timer4;     // Timer4 / Counter4 from GPIO Module 
	unsigned int vfp9       : BFW_vic_int_enclear_vfp9;       // reserved 
} VIC_INT_ENCLEAR_BIT_T;

typedef union {
	unsigned int          val;
	VIC_INT_ENCLEAR_BIT_T bf;
} VIC_INT_ENCLEAR_T;

// ---------------------------------------------------------------------
// Register vic_softint
// => VIC Software interrupt register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_softint 0x00000018U
#define Adr_vic_softint     0x001FF018U

#define MSK_vic_softint_sw         0x00000001U // [0]
#define SRT_vic_softint_sw         0           
#define MSK_vic_softint_timer0     0x00000002U // [1]
#define SRT_vic_softint_timer0     1           
#define MSK_vic_softint_timer1     0x00000004U // [2]
#define SRT_vic_softint_timer1     2           
#define MSK_vic_softint_timer2     0x00000008U // [3]
#define SRT_vic_softint_timer2     3           
#define MSK_vic_softint_systime_ns 0x00000010U // [4]
#define SRT_vic_softint_systime_ns 4           
#define MSK_vic_softint_systime_s  0x00000020U // [5]
#define SRT_vic_softint_systime_s  5           
#define MSK_vic_softint_gpio15     0x00000040U // [6]
#define SRT_vic_softint_gpio15     6           
#define MSK_vic_softint_watchdog   0x00000080U // [7]
#define SRT_vic_softint_watchdog   7           
#define MSK_vic_softint_uart0      0x00000100U // [8]
#define SRT_vic_softint_uart0      8           
#define MSK_vic_softint_uart1      0x00000200U // [9]
#define SRT_vic_softint_uart1      9           
#define MSK_vic_softint_uart2      0x00000400U // [10]
#define SRT_vic_softint_uart2      10          
#define MSK_vic_softint_usb        0x00000800U // [11]
#define SRT_vic_softint_usb        11          
#define MSK_vic_softint_spi        0x00001000U // [12]
#define SRT_vic_softint_spi        12          
#define MSK_vic_softint_i2c        0x00002000U // [13]
#define SRT_vic_softint_i2c        13          
#define MSK_vic_softint_lcd        0x00004000U // [14]
#define SRT_vic_softint_lcd        14          
#define MSK_vic_softint_hif        0x00008000U // [15]
#define SRT_vic_softint_hif        15          
#define MSK_vic_softint_gpio       0x00010000U // [16]
#define SRT_vic_softint_gpio       16          
#define MSK_vic_softint_com0       0x00020000U // [17]
#define SRT_vic_softint_com0       17          
#define MSK_vic_softint_com1       0x00040000U // [18]
#define SRT_vic_softint_com1       18          
#define MSK_vic_softint_com2       0x00080000U // [19]
#define SRT_vic_softint_com2       19          
#define MSK_vic_softint_com3       0x00100000U // [20]
#define SRT_vic_softint_com3       20          
#define MSK_vic_softint_msync0     0x00200000U // [21]
#define SRT_vic_softint_msync0     21          
#define MSK_vic_softint_msync1     0x00400000U // [22]
#define SRT_vic_softint_msync1     22          
#define MSK_vic_softint_msync2     0x00800000U // [23]
#define SRT_vic_softint_msync2     23          
#define MSK_vic_softint_msync3     0x01000000U // [24]
#define SRT_vic_softint_msync3     24          
#define MSK_vic_softint_int_phy    0x02000000U // [25]
#define SRT_vic_softint_int_phy    25          
#define MSK_vic_softint_iso_area   0x04000000U // [26]
#define SRT_vic_softint_iso_area   26          
#define MSK_vic_softint_timer3     0x20000000U // [29]
#define SRT_vic_softint_timer3     29          
#define MSK_vic_softint_timer4     0x40000000U // [30]
#define SRT_vic_softint_timer4     30          
#define MSK_vic_softint_vfp9       0x80000000U // [31]
#define SRT_vic_softint_vfp9       31          

enum {
	BFW_vic_softint_sw         = 1, // [0]
	BFW_vic_softint_timer0     = 1, // [1]
	BFW_vic_softint_timer1     = 1, // [2]
	BFW_vic_softint_timer2     = 1, // [3]
	BFW_vic_softint_systime_ns = 1, // [4]
	BFW_vic_softint_systime_s  = 1, // [5]
	BFW_vic_softint_gpio15     = 1, // [6]
	BFW_vic_softint_watchdog   = 1, // [7]
	BFW_vic_softint_uart0      = 1, // [8]
	BFW_vic_softint_uart1      = 1, // [9]
	BFW_vic_softint_uart2      = 1, // [10]
	BFW_vic_softint_usb        = 1, // [11]
	BFW_vic_softint_spi        = 1, // [12]
	BFW_vic_softint_i2c        = 1, // [13]
	BFW_vic_softint_lcd        = 1, // [14]
	BFW_vic_softint_hif        = 1, // [15]
	BFW_vic_softint_gpio       = 1, // [16]
	BFW_vic_softint_com0       = 1, // [17]
	BFW_vic_softint_com1       = 1, // [18]
	BFW_vic_softint_com2       = 1, // [19]
	BFW_vic_softint_com3       = 1, // [20]
	BFW_vic_softint_msync0     = 1, // [21]
	BFW_vic_softint_msync1     = 1, // [22]
	BFW_vic_softint_msync2     = 1, // [23]
	BFW_vic_softint_msync3     = 1, // [24]
	BFW_vic_softint_int_phy    = 1, // [25]
	BFW_vic_softint_iso_area   = 1, // [26]
	BFW_vic_softint_reserved1  = 2, // [28:27]
	BFW_vic_softint_timer3     = 1, // [29]
	BFW_vic_softint_timer4     = 1, // [30]
	BFW_vic_softint_vfp9       = 1  // [31]
};

typedef struct VIC_SOFTINT_BIT_Ttag {
	unsigned int sw         : BFW_vic_softint_sw;         // Reserved  for Software Interrupt, ARM standard configuration 
	unsigned int timer0     : BFW_vic_softint_timer0;     // Timer0 / Counter0 from GPIO Module -> Real time operating system timer, Windows CE required 
	unsigned int timer1     : BFW_vic_softint_timer1;     // Timer1 / Counter1 from GPIO Module 
	unsigned int timer2     : BFW_vic_softint_timer2;     // Timer2 / Counter2 from GPIO Module 
	unsigned int systime_ns : BFW_vic_softint_systime_ns; // systime ns compare irq from GPIO module 
	unsigned int systime_s  : BFW_vic_softint_systime_s;  // systime 1day IRQ from SYSTIME module, Windows CE required 
	unsigned int gpio15     : BFW_vic_softint_gpio15;     // external interrupt 15, Windows CE required (NMI) 
	unsigned int watchdog   : BFW_vic_softint_watchdog;   // reserved 
	unsigned int uart0      : BFW_vic_softint_uart0;      // UART 0 -> Diagnostic channel, Windows CE required 
	unsigned int uart1      : BFW_vic_softint_uart1;      // UART 1 
	unsigned int uart2      : BFW_vic_softint_uart2;      // UART 2 
	unsigned int usb        : BFW_vic_softint_usb;        // USB interrupt 
	unsigned int spi        : BFW_vic_softint_spi;        // SPI interrupt 
	unsigned int i2c        : BFW_vic_softint_i2c;        // reserved 
	unsigned int lcd        : BFW_vic_softint_lcd;        // LCD-Controller interrupt 
	unsigned int hif        : BFW_vic_softint_hif;        // PCI / HIF interrupt 
	unsigned int gpio       : BFW_vic_softint_gpio;       // other external Interrupts from GPIO 0-14 
	unsigned int com0       : BFW_vic_softint_com0;       // Communication channel 0 (= |xpec0_irq[11:0]) 
	unsigned int com1       : BFW_vic_softint_com1;       // Communication channel 1 (= |xpec1_irq[11:0]) 
	unsigned int com2       : BFW_vic_softint_com2;       // Communication channel 2 (= |xpec2_irq[11:0]) 
	unsigned int com3       : BFW_vic_softint_com3;       // Communication channel 3 (= |xpec3_irq[11:0]) 
	unsigned int msync0     : BFW_vic_softint_msync0;     // Motion synchronization channel 0 (= |xpec0_irq[15:12]) 
	unsigned int msync1     : BFW_vic_softint_msync1;     // Motion synchronization channel 1 (= |xpec1_irq[15:12]) 
	unsigned int msync2     : BFW_vic_softint_msync2;     // Motion synchronization channel 2 (= |xpec2_irq[15:12]) 
	unsigned int msync3     : BFW_vic_softint_msync3;     // Motion synchronization channel 3 (= |xpec3_irq[15:12]) 
	unsigned int int_phy    : BFW_vic_softint_int_phy;    // Interrupt from internal Phys 
	unsigned int iso_area   : BFW_vic_softint_iso_area;   // Power is going down (see RTC for details) 
	unsigned int reserved1  : BFW_vic_softint_reserved1;  // reserved
	unsigned int timer3     : BFW_vic_softint_timer3;     // Timer3 / Counter3 from GPIO Module 
	unsigned int timer4     : BFW_vic_softint_timer4;     // Timer4 / Counter4 from GPIO Module 
	unsigned int vfp9       : BFW_vic_softint_vfp9;       // reserved 
} VIC_SOFTINT_BIT_T;

typedef union {
	unsigned int      val;
	VIC_SOFTINT_BIT_T bf;
} VIC_SOFTINT_T;

// ---------------------------------------------------------------------
// Register vic_softint_clear
// => VIC Software interrupt clear register:
//    clear software interrupt bits
// => Mode: Mode (w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_softint_clear 0x0000001CU
#define Adr_vic_softint_clear     0x001FF01CU

#define MSK_vic_softint_clear_sw         0x00000001U // [0]
#define SRT_vic_softint_clear_sw         0           
#define MSK_vic_softint_clear_timer0     0x00000002U // [1]
#define SRT_vic_softint_clear_timer0     1           
#define MSK_vic_softint_clear_timer1     0x00000004U // [2]
#define SRT_vic_softint_clear_timer1     2           
#define MSK_vic_softint_clear_timer2     0x00000008U // [3]
#define SRT_vic_softint_clear_timer2     3           
#define MSK_vic_softint_clear_systime_ns 0x00000010U // [4]
#define SRT_vic_softint_clear_systime_ns 4           
#define MSK_vic_softint_clear_systime_s  0x00000020U // [5]
#define SRT_vic_softint_clear_systime_s  5           
#define MSK_vic_softint_clear_gpio15     0x00000040U // [6]
#define SRT_vic_softint_clear_gpio15     6           
#define MSK_vic_softint_clear_watchdog   0x00000080U // [7]
#define SRT_vic_softint_clear_watchdog   7           
#define MSK_vic_softint_clear_uart0      0x00000100U // [8]
#define SRT_vic_softint_clear_uart0      8           
#define MSK_vic_softint_clear_uart1      0x00000200U // [9]
#define SRT_vic_softint_clear_uart1      9           
#define MSK_vic_softint_clear_uart2      0x00000400U // [10]
#define SRT_vic_softint_clear_uart2      10          
#define MSK_vic_softint_clear_usb        0x00000800U // [11]
#define SRT_vic_softint_clear_usb        11          
#define MSK_vic_softint_clear_spi        0x00001000U // [12]
#define SRT_vic_softint_clear_spi        12          
#define MSK_vic_softint_clear_i2c        0x00002000U // [13]
#define SRT_vic_softint_clear_i2c        13          
#define MSK_vic_softint_clear_lcd        0x00004000U // [14]
#define SRT_vic_softint_clear_lcd        14          
#define MSK_vic_softint_clear_hif        0x00008000U // [15]
#define SRT_vic_softint_clear_hif        15          
#define MSK_vic_softint_clear_gpio       0x00010000U // [16]
#define SRT_vic_softint_clear_gpio       16          
#define MSK_vic_softint_clear_com0       0x00020000U // [17]
#define SRT_vic_softint_clear_com0       17          
#define MSK_vic_softint_clear_com1       0x00040000U // [18]
#define SRT_vic_softint_clear_com1       18          
#define MSK_vic_softint_clear_com2       0x00080000U // [19]
#define SRT_vic_softint_clear_com2       19          
#define MSK_vic_softint_clear_com3       0x00100000U // [20]
#define SRT_vic_softint_clear_com3       20          
#define MSK_vic_softint_clear_msync0     0x00200000U // [21]
#define SRT_vic_softint_clear_msync0     21          
#define MSK_vic_softint_clear_msync1     0x00400000U // [22]
#define SRT_vic_softint_clear_msync1     22          
#define MSK_vic_softint_clear_msync2     0x00800000U // [23]
#define SRT_vic_softint_clear_msync2     23          
#define MSK_vic_softint_clear_msync3     0x01000000U // [24]
#define SRT_vic_softint_clear_msync3     24          
#define MSK_vic_softint_clear_int_phy    0x02000000U // [25]
#define SRT_vic_softint_clear_int_phy    25          
#define MSK_vic_softint_clear_iso_area   0x04000000U // [26]
#define SRT_vic_softint_clear_iso_area   26          
#define MSK_vic_softint_clear_timer3     0x20000000U // [29]
#define SRT_vic_softint_clear_timer3     29          
#define MSK_vic_softint_clear_timer4     0x40000000U // [30]
#define SRT_vic_softint_clear_timer4     30          
#define MSK_vic_softint_clear_vfp9       0x80000000U // [31]
#define SRT_vic_softint_clear_vfp9       31          

enum {
	BFW_vic_softint_clear_sw         = 1, // [0]
	BFW_vic_softint_clear_timer0     = 1, // [1]
	BFW_vic_softint_clear_timer1     = 1, // [2]
	BFW_vic_softint_clear_timer2     = 1, // [3]
	BFW_vic_softint_clear_systime_ns = 1, // [4]
	BFW_vic_softint_clear_systime_s  = 1, // [5]
	BFW_vic_softint_clear_gpio15     = 1, // [6]
	BFW_vic_softint_clear_watchdog   = 1, // [7]
	BFW_vic_softint_clear_uart0      = 1, // [8]
	BFW_vic_softint_clear_uart1      = 1, // [9]
	BFW_vic_softint_clear_uart2      = 1, // [10]
	BFW_vic_softint_clear_usb        = 1, // [11]
	BFW_vic_softint_clear_spi        = 1, // [12]
	BFW_vic_softint_clear_i2c        = 1, // [13]
	BFW_vic_softint_clear_lcd        = 1, // [14]
	BFW_vic_softint_clear_hif        = 1, // [15]
	BFW_vic_softint_clear_gpio       = 1, // [16]
	BFW_vic_softint_clear_com0       = 1, // [17]
	BFW_vic_softint_clear_com1       = 1, // [18]
	BFW_vic_softint_clear_com2       = 1, // [19]
	BFW_vic_softint_clear_com3       = 1, // [20]
	BFW_vic_softint_clear_msync0     = 1, // [21]
	BFW_vic_softint_clear_msync1     = 1, // [22]
	BFW_vic_softint_clear_msync2     = 1, // [23]
	BFW_vic_softint_clear_msync3     = 1, // [24]
	BFW_vic_softint_clear_int_phy    = 1, // [25]
	BFW_vic_softint_clear_iso_area   = 1, // [26]
	BFW_vic_softint_clear_reserved1  = 2, // [28:27]
	BFW_vic_softint_clear_timer3     = 1, // [29]
	BFW_vic_softint_clear_timer4     = 1, // [30]
	BFW_vic_softint_clear_vfp9       = 1  // [31]
};

typedef struct VIC_SOFTINT_CLEAR_BIT_Ttag {
	unsigned int sw         : BFW_vic_softint_clear_sw;         // Reserved  for Software Interrupt, ARM standard configuration 
	unsigned int timer0     : BFW_vic_softint_clear_timer0;     // Timer0 / Counter0 from GPIO Module -> Real time operating system timer, Windows CE required 
	unsigned int timer1     : BFW_vic_softint_clear_timer1;     // Timer1 / Counter1 from GPIO Module 
	unsigned int timer2     : BFW_vic_softint_clear_timer2;     // Timer2 / Counter2 from GPIO Module 
	unsigned int systime_ns : BFW_vic_softint_clear_systime_ns; // systime ns compare irq from GPIO module 
	unsigned int systime_s  : BFW_vic_softint_clear_systime_s;  // systime 1day IRQ from SYSTIME module, Windows CE required 
	unsigned int gpio15     : BFW_vic_softint_clear_gpio15;     // external interrupt 15, Windows CE required (NMI) 
	unsigned int watchdog   : BFW_vic_softint_clear_watchdog;   // reserved 
	unsigned int uart0      : BFW_vic_softint_clear_uart0;      // UART 0 -> Diagnostic channel, Windows CE required 
	unsigned int uart1      : BFW_vic_softint_clear_uart1;      // UART 1 
	unsigned int uart2      : BFW_vic_softint_clear_uart2;      // UART 2 
	unsigned int usb        : BFW_vic_softint_clear_usb;        // USB interrupt 
	unsigned int spi        : BFW_vic_softint_clear_spi;        // SPI interrupt 
	unsigned int i2c        : BFW_vic_softint_clear_i2c;        // reserved 
	unsigned int lcd        : BFW_vic_softint_clear_lcd;        // LCD-Controller interrupt 
	unsigned int hif        : BFW_vic_softint_clear_hif;        // PCI / HIF interrupt 
	unsigned int gpio       : BFW_vic_softint_clear_gpio;       // other external Interrupts from GPIO 0-14 
	unsigned int com0       : BFW_vic_softint_clear_com0;       // Communication channel 0 (= |xpec0_irq[11:0]) 
	unsigned int com1       : BFW_vic_softint_clear_com1;       // Communication channel 1 (= |xpec1_irq[11:0]) 
	unsigned int com2       : BFW_vic_softint_clear_com2;       // Communication channel 2 (= |xpec2_irq[11:0]) 
	unsigned int com3       : BFW_vic_softint_clear_com3;       // Communication channel 3 (= |xpec3_irq[11:0]) 
	unsigned int msync0     : BFW_vic_softint_clear_msync0;     // Motion synchronization channel 0 (= |xpec0_irq[15:12]) 
	unsigned int msync1     : BFW_vic_softint_clear_msync1;     // Motion synchronization channel 1 (= |xpec1_irq[15:12]) 
	unsigned int msync2     : BFW_vic_softint_clear_msync2;     // Motion synchronization channel 2 (= |xpec2_irq[15:12]) 
	unsigned int msync3     : BFW_vic_softint_clear_msync3;     // Motion synchronization channel 3 (= |xpec3_irq[15:12]) 
	unsigned int int_phy    : BFW_vic_softint_clear_int_phy;    // Interrupt from internal Phys 
	unsigned int iso_area   : BFW_vic_softint_clear_iso_area;   // Power is going down (see RTC for details) 
	unsigned int reserved1  : BFW_vic_softint_clear_reserved1;  // reserved
	unsigned int timer3     : BFW_vic_softint_clear_timer3;     // Timer3 / Counter3 from GPIO Module 
	unsigned int timer4     : BFW_vic_softint_clear_timer4;     // Timer4 / Counter4 from GPIO Module 
	unsigned int vfp9       : BFW_vic_softint_clear_vfp9;       // reserved 
} VIC_SOFTINT_CLEAR_BIT_T;

typedef union {
	unsigned int            val;
	VIC_SOFTINT_CLEAR_BIT_T bf;
} VIC_SOFTINT_CLEAR_T;

// ---------------------------------------------------------------------
// Register vic_protection
// => VIC Protection enable register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_protection 0x00000020U
#define Adr_vic_protection     0x001FF020U

#define MSK_vic_protection_PROTECTION 0x00000001U // [0]
#define SRT_vic_protection_PROTECTION 0           

enum {
	BFW_vic_protection_PROTECTION = 1,  // [0]
	BFW_vic_protection_reserved1  = 31  // [31:1]
};

typedef struct VIC_PROTECTION_BIT_Ttag {
	unsigned int PROTECTION : BFW_vic_protection_PROTECTION; // enables or disables protected register access 
	unsigned int reserved1  : BFW_vic_protection_reserved1;  // reserved
} VIC_PROTECTION_BIT_T;

typedef union {
	unsigned int         val;
	VIC_PROTECTION_BIT_T bf;
} VIC_PROTECTION_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr
// => VIC Vector address register
//    Any writes to this register clear the interrupt.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr 0x00000030U
#define Adr_vic_vect_addr     0x001FF030U

#define MSK_vic_vect_addr_VECT_ADDR 0xffffffffU // [31:0]
#define SRT_vic_vect_addr_VECT_ADDR 0           

enum {
	BFW_vic_vect_addr_VECT_ADDR = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR_BIT_Ttag {
	unsigned int VECT_ADDR : BFW_vic_vect_addr_VECT_ADDR; // address of the currently active ISR handler 
} VIC_VECT_ADDR_BIT_T;

typedef union {
	unsigned int        val;
	VIC_VECT_ADDR_BIT_T bf;
} VIC_VECT_ADDR_T;

// ---------------------------------------------------------------------
// Register vic_def_vect_addr
// => VIC Default vector address register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_def_vect_addr 0x00000034U
#define Adr_vic_def_vect_addr     0x001FF034U

#define MSK_vic_def_vect_addr_DEF_VECT_ADDR 0xffffffffU // [31:0]
#define SRT_vic_def_vect_addr_DEF_VECT_ADDR 0           

enum {
	BFW_vic_def_vect_addr_DEF_VECT_ADDR = 32  // [31:0]
};

typedef struct VIC_DEF_VECT_ADDR_BIT_Ttag {
	unsigned int DEF_VECT_ADDR : BFW_vic_def_vect_addr_DEF_VECT_ADDR; // address of the default ISR handler 
} VIC_DEF_VECT_ADDR_BIT_T;

typedef union {
	unsigned int            val;
	VIC_DEF_VECT_ADDR_BIT_T bf;
} VIC_DEF_VECT_ADDR_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr0
// => VIC Vector address 0 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr0 0x00000100U
#define Adr_vic_vect_addr0     0x001FF100U

#define MSK_vic_vect_addr0_VECT_ADDR0 0xffffffffU // [31:0]
#define SRT_vic_vect_addr0_VECT_ADDR0 0           

enum {
	BFW_vic_vect_addr0_VECT_ADDR0 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR0_BIT_Ttag {
	unsigned int VECT_ADDR0 : BFW_vic_vect_addr0_VECT_ADDR0; // ISR vector addresses 
} VIC_VECT_ADDR0_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR0_BIT_T bf;
} VIC_VECT_ADDR0_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr1
// => VIC Vector address 1 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr1 0x00000104U
#define Adr_vic_vect_addr1     0x001FF104U

#define MSK_vic_vect_addr1_VECT_ADDR1 0xffffffffU // [31:0]
#define SRT_vic_vect_addr1_VECT_ADDR1 0           

enum {
	BFW_vic_vect_addr1_VECT_ADDR1 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR1_BIT_Ttag {
	unsigned int VECT_ADDR1 : BFW_vic_vect_addr1_VECT_ADDR1; // ISR vector addresses 
} VIC_VECT_ADDR1_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR1_BIT_T bf;
} VIC_VECT_ADDR1_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr2
// => VIC Vector address 2 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr2 0x00000108U
#define Adr_vic_vect_addr2     0x001FF108U

#define MSK_vic_vect_addr2_VECT_ADDR2 0xffffffffU // [31:0]
#define SRT_vic_vect_addr2_VECT_ADDR2 0           

enum {
	BFW_vic_vect_addr2_VECT_ADDR2 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR2_BIT_Ttag {
	unsigned int VECT_ADDR2 : BFW_vic_vect_addr2_VECT_ADDR2; // ISR vector addresses 
} VIC_VECT_ADDR2_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR2_BIT_T bf;
} VIC_VECT_ADDR2_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr3
// => VIC Vector address 3 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr3 0x0000010CU
#define Adr_vic_vect_addr3     0x001FF10CU

#define MSK_vic_vect_addr3_VECT_ADDR3 0xffffffffU // [31:0]
#define SRT_vic_vect_addr3_VECT_ADDR3 0           

enum {
	BFW_vic_vect_addr3_VECT_ADDR3 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR3_BIT_Ttag {
	unsigned int VECT_ADDR3 : BFW_vic_vect_addr3_VECT_ADDR3; // ISR vector addresses 
} VIC_VECT_ADDR3_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR3_BIT_T bf;
} VIC_VECT_ADDR3_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr4
// => VIC Vector address 4 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr4 0x00000110U
#define Adr_vic_vect_addr4     0x001FF110U

#define MSK_vic_vect_addr4_VECT_ADDR4 0xffffffffU // [31:0]
#define SRT_vic_vect_addr4_VECT_ADDR4 0           

enum {
	BFW_vic_vect_addr4_VECT_ADDR4 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR4_BIT_Ttag {
	unsigned int VECT_ADDR4 : BFW_vic_vect_addr4_VECT_ADDR4; // ISR vector addresses 
} VIC_VECT_ADDR4_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR4_BIT_T bf;
} VIC_VECT_ADDR4_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr5
// => VIC Vector address 5 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr5 0x00000114U
#define Adr_vic_vect_addr5     0x001FF114U

#define MSK_vic_vect_addr5_VECT_ADDR5 0xffffffffU // [31:0]
#define SRT_vic_vect_addr5_VECT_ADDR5 0           

enum {
	BFW_vic_vect_addr5_VECT_ADDR5 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR5_BIT_Ttag {
	unsigned int VECT_ADDR5 : BFW_vic_vect_addr5_VECT_ADDR5; // ISR vector addresses 
} VIC_VECT_ADDR5_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR5_BIT_T bf;
} VIC_VECT_ADDR5_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr6
// => VIC Vector address 6 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr6 0x00000118U
#define Adr_vic_vect_addr6     0x001FF118U

#define MSK_vic_vect_addr6_VECT_ADDR6 0xffffffffU // [31:0]
#define SRT_vic_vect_addr6_VECT_ADDR6 0           

enum {
	BFW_vic_vect_addr6_VECT_ADDR6 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR6_BIT_Ttag {
	unsigned int VECT_ADDR6 : BFW_vic_vect_addr6_VECT_ADDR6; // ISR vector addresses 
} VIC_VECT_ADDR6_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR6_BIT_T bf;
} VIC_VECT_ADDR6_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr7
// => VIC Vector address 7 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr7 0x0000011CU
#define Adr_vic_vect_addr7     0x001FF11CU

#define MSK_vic_vect_addr7_VECT_ADDR7 0xffffffffU // [31:0]
#define SRT_vic_vect_addr7_VECT_ADDR7 0           

enum {
	BFW_vic_vect_addr7_VECT_ADDR7 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR7_BIT_Ttag {
	unsigned int VECT_ADDR7 : BFW_vic_vect_addr7_VECT_ADDR7; // ISR vector addresses 
} VIC_VECT_ADDR7_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR7_BIT_T bf;
} VIC_VECT_ADDR7_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr8
// => VIC Vector address 8 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr8 0x00000120U
#define Adr_vic_vect_addr8     0x001FF120U

#define MSK_vic_vect_addr8_VECT_ADDR8 0xffffffffU // [31:0]
#define SRT_vic_vect_addr8_VECT_ADDR8 0           

enum {
	BFW_vic_vect_addr8_VECT_ADDR8 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR8_BIT_Ttag {
	unsigned int VECT_ADDR8 : BFW_vic_vect_addr8_VECT_ADDR8; // ISR vector addresses 
} VIC_VECT_ADDR8_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR8_BIT_T bf;
} VIC_VECT_ADDR8_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr9
// => VIC Vector address 9 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr9 0x00000124U
#define Adr_vic_vect_addr9     0x001FF124U

#define MSK_vic_vect_addr9_VECT_ADDR9 0xffffffffU // [31:0]
#define SRT_vic_vect_addr9_VECT_ADDR9 0           

enum {
	BFW_vic_vect_addr9_VECT_ADDR9 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR9_BIT_Ttag {
	unsigned int VECT_ADDR9 : BFW_vic_vect_addr9_VECT_ADDR9; // ISR vector addresses 
} VIC_VECT_ADDR9_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_ADDR9_BIT_T bf;
} VIC_VECT_ADDR9_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr10
// => VIC Vector address 10 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr10 0x00000128U
#define Adr_vic_vect_addr10     0x001FF128U

#define MSK_vic_vect_addr10_VECT_ADDR10 0xffffffffU // [31:0]
#define SRT_vic_vect_addr10_VECT_ADDR10 0           

enum {
	BFW_vic_vect_addr10_VECT_ADDR10 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR10_BIT_Ttag {
	unsigned int VECT_ADDR10 : BFW_vic_vect_addr10_VECT_ADDR10; // ISR vector addresses 
} VIC_VECT_ADDR10_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_ADDR10_BIT_T bf;
} VIC_VECT_ADDR10_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr11
// => VIC Vector address 11 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr11 0x0000012CU
#define Adr_vic_vect_addr11     0x001FF12CU

#define MSK_vic_vect_addr11_VECT_ADDR11 0xffffffffU // [31:0]
#define SRT_vic_vect_addr11_VECT_ADDR11 0           

enum {
	BFW_vic_vect_addr11_VECT_ADDR11 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR11_BIT_Ttag {
	unsigned int VECT_ADDR11 : BFW_vic_vect_addr11_VECT_ADDR11; // ISR vector addresses 
} VIC_VECT_ADDR11_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_ADDR11_BIT_T bf;
} VIC_VECT_ADDR11_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr12
// => VIC Vector address 12 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr12 0x00000130U
#define Adr_vic_vect_addr12     0x001FF130U

#define MSK_vic_vect_addr12_VECT_ADDR12 0xffffffffU // [31:0]
#define SRT_vic_vect_addr12_VECT_ADDR12 0           

enum {
	BFW_vic_vect_addr12_VECT_ADDR12 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR12_BIT_Ttag {
	unsigned int VECT_ADDR12 : BFW_vic_vect_addr12_VECT_ADDR12; // ISR vector addresses 
} VIC_VECT_ADDR12_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_ADDR12_BIT_T bf;
} VIC_VECT_ADDR12_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr13
// => VIC Vector address 13 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr13 0x00000134U
#define Adr_vic_vect_addr13     0x001FF134U

#define MSK_vic_vect_addr13_VECT_ADDR13 0xffffffffU // [31:0]
#define SRT_vic_vect_addr13_VECT_ADDR13 0           

enum {
	BFW_vic_vect_addr13_VECT_ADDR13 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR13_BIT_Ttag {
	unsigned int VECT_ADDR13 : BFW_vic_vect_addr13_VECT_ADDR13; // ISR vector addresses 
} VIC_VECT_ADDR13_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_ADDR13_BIT_T bf;
} VIC_VECT_ADDR13_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr14
// => VIC Vector address 14 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr14 0x00000138U
#define Adr_vic_vect_addr14     0x001FF138U

#define MSK_vic_vect_addr14_VECT_ADDR14 0xffffffffU // [31:0]
#define SRT_vic_vect_addr14_VECT_ADDR14 0           

enum {
	BFW_vic_vect_addr14_VECT_ADDR14 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR14_BIT_Ttag {
	unsigned int VECT_ADDR14 : BFW_vic_vect_addr14_VECT_ADDR14; // ISR vector addresses 
} VIC_VECT_ADDR14_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_ADDR14_BIT_T bf;
} VIC_VECT_ADDR14_T;

// ---------------------------------------------------------------------
// Register vic_vect_addr15
// => VIC Vector address 15 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_addr15 0x0000013CU
#define Adr_vic_vect_addr15     0x001FF13CU

#define MSK_vic_vect_addr15_VECT_ADDR15 0xffffffffU // [31:0]
#define SRT_vic_vect_addr15_VECT_ADDR15 0           

enum {
	BFW_vic_vect_addr15_VECT_ADDR15 = 32  // [31:0]
};

typedef struct VIC_VECT_ADDR15_BIT_Ttag {
	unsigned int VECT_ADDR15 : BFW_vic_vect_addr15_VECT_ADDR15; // ISR vector addresses 
} VIC_VECT_ADDR15_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_ADDR15_BIT_T bf;
} VIC_VECT_ADDR15_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl0
// => VIC Vector control 0 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl0 0x00000200U
#define Adr_vic_vect_cntl0     0x001FF200U

#define MSK_vic_vect_cntl0_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl0_INT_SOURCE 0           
#define MSK_vic_vect_cntl0_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl0_ENABLE     5           

enum {
	BFW_vic_vect_cntl0_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl0_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl0_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL0_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl0_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl0_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl0_reserved1;  // reserved
} VIC_VECT_CNTL0_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL0_BIT_T bf;
} VIC_VECT_CNTL0_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl1
// => VIC Vector control 1 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl1 0x00000204U
#define Adr_vic_vect_cntl1     0x001FF204U

#define MSK_vic_vect_cntl1_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl1_INT_SOURCE 0           
#define MSK_vic_vect_cntl1_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl1_ENABLE     5           

enum {
	BFW_vic_vect_cntl1_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl1_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl1_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL1_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl1_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl1_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl1_reserved1;  // reserved
} VIC_VECT_CNTL1_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL1_BIT_T bf;
} VIC_VECT_CNTL1_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl2
// => VIC Vector control 2 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl2 0x00000208U
#define Adr_vic_vect_cntl2     0x001FF208U

#define MSK_vic_vect_cntl2_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl2_INT_SOURCE 0           
#define MSK_vic_vect_cntl2_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl2_ENABLE     5           

enum {
	BFW_vic_vect_cntl2_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl2_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl2_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL2_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl2_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl2_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl2_reserved1;  // reserved
} VIC_VECT_CNTL2_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL2_BIT_T bf;
} VIC_VECT_CNTL2_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl3
// => VIC Vector control 3 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl3 0x0000020CU
#define Adr_vic_vect_cntl3     0x001FF20CU

#define MSK_vic_vect_cntl3_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl3_INT_SOURCE 0           
#define MSK_vic_vect_cntl3_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl3_ENABLE     5           

enum {
	BFW_vic_vect_cntl3_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl3_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl3_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL3_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl3_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl3_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl3_reserved1;  // reserved
} VIC_VECT_CNTL3_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL3_BIT_T bf;
} VIC_VECT_CNTL3_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl4
// => VIC Vector control 4 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl4 0x00000210U
#define Adr_vic_vect_cntl4     0x001FF210U

#define MSK_vic_vect_cntl4_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl4_INT_SOURCE 0           
#define MSK_vic_vect_cntl4_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl4_ENABLE     5           

enum {
	BFW_vic_vect_cntl4_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl4_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl4_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL4_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl4_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl4_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl4_reserved1;  // reserved
} VIC_VECT_CNTL4_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL4_BIT_T bf;
} VIC_VECT_CNTL4_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl5
// => VIC Vector control 5 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl5 0x00000214U
#define Adr_vic_vect_cntl5     0x001FF214U

#define MSK_vic_vect_cntl5_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl5_INT_SOURCE 0           
#define MSK_vic_vect_cntl5_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl5_ENABLE     5           

enum {
	BFW_vic_vect_cntl5_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl5_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl5_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL5_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl5_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl5_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl5_reserved1;  // reserved
} VIC_VECT_CNTL5_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL5_BIT_T bf;
} VIC_VECT_CNTL5_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl6
// => VIC Vector control 6 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl6 0x00000218U
#define Adr_vic_vect_cntl6     0x001FF218U

#define MSK_vic_vect_cntl6_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl6_INT_SOURCE 0           
#define MSK_vic_vect_cntl6_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl6_ENABLE     5           

enum {
	BFW_vic_vect_cntl6_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl6_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl6_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL6_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl6_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl6_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl6_reserved1;  // reserved
} VIC_VECT_CNTL6_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL6_BIT_T bf;
} VIC_VECT_CNTL6_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl7
// => VIC Vector control 7 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl7 0x0000021CU
#define Adr_vic_vect_cntl7     0x001FF21CU

#define MSK_vic_vect_cntl7_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl7_INT_SOURCE 0           
#define MSK_vic_vect_cntl7_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl7_ENABLE     5           

enum {
	BFW_vic_vect_cntl7_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl7_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl7_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL7_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl7_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl7_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl7_reserved1;  // reserved
} VIC_VECT_CNTL7_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL7_BIT_T bf;
} VIC_VECT_CNTL7_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl8
// => VIC Vector control 8 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl8 0x00000220U
#define Adr_vic_vect_cntl8     0x001FF220U

#define MSK_vic_vect_cntl8_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl8_INT_SOURCE 0           
#define MSK_vic_vect_cntl8_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl8_ENABLE     5           

enum {
	BFW_vic_vect_cntl8_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl8_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl8_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL8_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl8_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl8_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl8_reserved1;  // reserved
} VIC_VECT_CNTL8_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL8_BIT_T bf;
} VIC_VECT_CNTL8_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl9
// => VIC Vector control 9 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl9 0x00000224U
#define Adr_vic_vect_cntl9     0x001FF224U

#define MSK_vic_vect_cntl9_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl9_INT_SOURCE 0           
#define MSK_vic_vect_cntl9_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl9_ENABLE     5           

enum {
	BFW_vic_vect_cntl9_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl9_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl9_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL9_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl9_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl9_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl9_reserved1;  // reserved
} VIC_VECT_CNTL9_BIT_T;

typedef union {
	unsigned int         val;
	VIC_VECT_CNTL9_BIT_T bf;
} VIC_VECT_CNTL9_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl10
// => VIC Vector control 10 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl10 0x00000228U
#define Adr_vic_vect_cntl10     0x001FF228U

#define MSK_vic_vect_cntl10_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl10_INT_SOURCE 0           
#define MSK_vic_vect_cntl10_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl10_ENABLE     5           

enum {
	BFW_vic_vect_cntl10_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl10_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl10_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL10_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl10_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl10_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl10_reserved1;  // reserved
} VIC_VECT_CNTL10_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_CNTL10_BIT_T bf;
} VIC_VECT_CNTL10_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl11
// => VIC Vector control 11 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl11 0x0000022CU
#define Adr_vic_vect_cntl11     0x001FF22CU

#define MSK_vic_vect_cntl11_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl11_INT_SOURCE 0           
#define MSK_vic_vect_cntl11_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl11_ENABLE     5           

enum {
	BFW_vic_vect_cntl11_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl11_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl11_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL11_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl11_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl11_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl11_reserved1;  // reserved
} VIC_VECT_CNTL11_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_CNTL11_BIT_T bf;
} VIC_VECT_CNTL11_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl12
// => VIC Vector control 12 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl12 0x00000230U
#define Adr_vic_vect_cntl12     0x001FF230U

#define MSK_vic_vect_cntl12_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl12_INT_SOURCE 0           
#define MSK_vic_vect_cntl12_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl12_ENABLE     5           

enum {
	BFW_vic_vect_cntl12_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl12_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl12_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL12_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl12_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl12_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl12_reserved1;  // reserved
} VIC_VECT_CNTL12_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_CNTL12_BIT_T bf;
} VIC_VECT_CNTL12_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl13
// => VIC Vector control 13 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl13 0x00000234U
#define Adr_vic_vect_cntl13     0x001FF234U

#define MSK_vic_vect_cntl13_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl13_INT_SOURCE 0           
#define MSK_vic_vect_cntl13_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl13_ENABLE     5           

enum {
	BFW_vic_vect_cntl13_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl13_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl13_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL13_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl13_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl13_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl13_reserved1;  // reserved
} VIC_VECT_CNTL13_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_CNTL13_BIT_T bf;
} VIC_VECT_CNTL13_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl14
// => VIC Vector control 14 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl14 0x00000238U
#define Adr_vic_vect_cntl14     0x001FF238U

#define MSK_vic_vect_cntl14_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl14_INT_SOURCE 0           
#define MSK_vic_vect_cntl14_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl14_ENABLE     5           

enum {
	BFW_vic_vect_cntl14_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl14_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl14_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL14_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl14_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl14_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl14_reserved1;  // reserved
} VIC_VECT_CNTL14_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_CNTL14_BIT_T bf;
} VIC_VECT_CNTL14_T;

// ---------------------------------------------------------------------
// Register vic_vect_cntl15
// => VIC Vector control 15 register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_vic_vect_cntl15 0x0000023CU
#define Adr_vic_vect_cntl15     0x001FF23CU

#define MSK_vic_vect_cntl15_INT_SOURCE 0x0000001fU // [4:0]
#define SRT_vic_vect_cntl15_INT_SOURCE 0           
#define MSK_vic_vect_cntl15_ENABLE     0x00000020U // [5]
#define SRT_vic_vect_cntl15_ENABLE     5           

enum {
	BFW_vic_vect_cntl15_INT_SOURCE = 5,  // [4:0]
	BFW_vic_vect_cntl15_ENABLE     = 1,  // [5]
	BFW_vic_vect_cntl15_reserved1  = 26  // [31:6]
};

typedef struct VIC_VECT_CNTL15_BIT_Ttag {
	unsigned int INT_SOURCE : BFW_vic_vect_cntl15_INT_SOURCE; // interrupt source select 
	unsigned int ENABLE     : BFW_vic_vect_cntl15_ENABLE;     // vector interrupt enable 
	unsigned int reserved1  : BFW_vic_vect_cntl15_reserved1;  // reserved
} VIC_VECT_CNTL15_BIT_T;

typedef union {
	unsigned int          val;
	VIC_VECT_CNTL15_BIT_T bf;
} VIC_VECT_CNTL15_T;


// =====================================================================
//
// Area of crc
//
// =====================================================================

#define Addr_crc	0x00101000U

// ---------------------------------------------------------------------
// Register crc_crc
// => CRC Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_crc_crc 0x00000000U
#define Adr_crc_crc     0x00101000U

#define MSK_crc_crc_crc_val 0xffffffffU // [31:0]
#define SRT_crc_crc_crc_val 0           

enum {
	BFW_crc_crc_crc_val = 32  // [31:0]
};

typedef struct CRC_CRC_BIT_Ttag {
	unsigned int crc_val : BFW_crc_crc_crc_val; // CRC value 
	                                                        // Upper bits should be masked, if crc_len smaller 31
} CRC_CRC_BIT_T;

typedef union {
	unsigned int  val;
	CRC_CRC_BIT_T bf;
} CRC_CRC_T;

// ---------------------------------------------------------------------
// Register crc_data_in
// => CRC data in Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_crc_data_in 0x00000004U
#define Adr_crc_data_in     0x00101004U

#define MSK_crc_data_in_in 0x000000ffU // [7:0]
#define SRT_crc_data_in_in 0           

enum {
	BFW_crc_data_in_in        = 8,  // [7:0]
	BFW_crc_data_in_reserved1 = 24  // [31:8]
};

typedef struct CRC_DATA_IN_BIT_Ttag {
	unsigned int in        : BFW_crc_data_in_in;        // CRC input bits
	unsigned int reserved1 : BFW_crc_data_in_reserved1; // reserved
} CRC_DATA_IN_BIT_T;

typedef union {
	unsigned int      val;
	CRC_DATA_IN_BIT_T bf;
} CRC_DATA_IN_T;

// ---------------------------------------------------------------------
// Register crc_polynomial
// => CRC Polynomial Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_crc_polynomial 0x00000008U
#define Adr_crc_polynomial     0x00101008U

#define MSK_crc_polynomial_crc_polynomial 0xffffffffU // [31:0]
#define SRT_crc_polynomial_crc_polynomial 0           

enum {
	BFW_crc_polynomial_crc_polynomial = 32  // [31:0]
};

typedef struct CRC_POLYNOMIAL_BIT_Ttag {
	unsigned int crc_polynomial : BFW_crc_polynomial_crc_polynomial; // crc polynomial (default:Ethenet CRC32)
	                                                        // Most significant bit of polynome is always one, thus not considered.
} CRC_POLYNOMIAL_BIT_T;

typedef union {
	unsigned int         val;
	CRC_POLYNOMIAL_BIT_T bf;
} CRC_POLYNOMIAL_T;

// ---------------------------------------------------------------------
// Register crc_config
// => CRC config Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_crc_config 0x0000000CU
#define Adr_crc_config     0x0010100CU

#define MSK_crc_config_crc_len         0x0000003fU // [5:0]
#define SRT_crc_config_crc_len         0           
#define MSK_crc_config_crc_shift_right 0x00000040U // [6]
#define SRT_crc_config_crc_shift_right 6           
#define MSK_crc_config_crc_direct_div  0x00000080U // [7]
#define SRT_crc_config_crc_direct_div  7           
#define MSK_crc_config_crc_nof_bits    0x00000300U // [9:8]
#define SRT_crc_config_crc_nof_bits    8           
#define MSK_crc_config_crc_in_msb_low  0x00000400U // [10]
#define SRT_crc_config_crc_in_msb_low  10          

enum {
	BFW_crc_config_crc_len         = 6,  // [5:0]
	BFW_crc_config_crc_shift_right = 1,  // [6]
	BFW_crc_config_crc_direct_div  = 1,  // [7]
	BFW_crc_config_crc_nof_bits    = 2,  // [9:8]
	BFW_crc_config_crc_in_msb_low  = 1,  // [10]
	BFW_crc_config_reserved1       = 21  // [31:11]
};

typedef struct CRC_CONFIG_BIT_Ttag {
	unsigned int crc_len         : BFW_crc_config_crc_len;         // Length of CRC - 1 
	unsigned int crc_shift_right : BFW_crc_config_crc_shift_right; // 1: shift crc right 
	unsigned int crc_direct_div  : BFW_crc_config_crc_direct_div;  // 1: calculate direct polynolial division without n zeros after frame, usefull for parity calculation 
	unsigned int crc_nof_bits    : BFW_crc_config_crc_nof_bits;    // number of bits to be calculated in parallel (00: 1, 01: 2, 10; 4, 11: 8) 
	unsigned int crc_in_msb_low  : BFW_crc_config_crc_in_msb_low;  // swap crc_data_in, only usefull when calculating multiple bits in parallel (crc_nof_bits > 0): 
	                                                        // 1: msb of incoming bits is data_in[0],
	                                                        // 0: msb is data_in[crc_nof_bits_m1]
	                                                        // (msb=first bit in data-stream)
	unsigned int reserved1       : BFW_crc_config_reserved1;       // reserved
} CRC_CONFIG_BIT_T;

typedef union {
	unsigned int     val;
	CRC_CONFIG_BIT_T bf;
} CRC_CONFIG_T;


// =====================================================================
//
// Area of systime
//
// =====================================================================

#define Addr_systime	0x00101100U

// ---------------------------------------------------------------------
// Register systime_ns
// => lower SYSTIME register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_systime_ns 0x00000000U
#define Adr_systime_ns     0x00101100U

#define MSK_systime_ns_systime_ns 0xffffffffU // [31:0]
#define SRT_systime_ns_systime_ns 0           

enum {
	BFW_systime_ns_systime_ns = 32  // [31:0]
};

typedef struct SYSTIME_NS_BIT_Ttag {
	unsigned int systime_ns : BFW_systime_ns_systime_ns; // Systime low (used for counting nanoseconds in IEEE15888)
} SYSTIME_NS_BIT_T;

typedef union {
	unsigned int     val;
	SYSTIME_NS_BIT_T bf;
} SYSTIME_NS_T;

// ---------------------------------------------------------------------
// Register systime_s
// => upper SYSTIME register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_systime_s 0x00000004U
#define Adr_systime_s     0x00101104U

#define MSK_systime_s_systime_s 0xffffffffU // [31:0]
#define SRT_systime_s_systime_s 0           

enum {
	BFW_systime_s_systime_s = 32  // [31:0]
};

typedef struct SYSTIME_S_BIT_Ttag {
	unsigned int systime_s : BFW_systime_s_systime_s; // systime high (used for counting seconds in IEEE 1588)
	                                                        // value is incremented, if systime_ns reaches systime_border
} SYSTIME_S_BIT_T;

typedef union {
	unsigned int    val;
	SYSTIME_S_BIT_T bf;
} SYSTIME_S_T;

// ---------------------------------------------------------------------
// Register systime_border
// => SYSTIME border register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_systime_border 0x00000008U
#define Adr_systime_border     0x00101108U

#define MSK_systime_border_systime_border 0xffffffffU // [31:0]
#define SRT_systime_border_systime_border 0           

enum {
	BFW_systime_border_systime_border = 32  // [31:0]
};

typedef struct SYSTIME_BORDER_BIT_Ttag {
	unsigned int systime_border : BFW_systime_border_systime_border; // Systime border for lower systime: 
	                                                        // systime_ns counts from 0 to this value (inlcuded),
	                                                        // i.e. systime_ns counts modulo (systime_border + 1)
} SYSTIME_BORDER_BIT_T;

typedef union {
	unsigned int         val;
	SYSTIME_BORDER_BIT_T bf;
} SYSTIME_BORDER_T;

// ---------------------------------------------------------------------
// Register systime_count_value
// => SYSTIME count register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_systime_count_value 0x0000000CU
#define Adr_systime_count_value     0x0010110CU

#define MSK_systime_count_value_systime_count_value 0xffffffffU // [31:0]
#define SRT_systime_count_value_systime_count_value 0           

enum {
	BFW_systime_count_value_systime_count_value = 32  // [31:0]
};

typedef struct SYSTIME_COUNT_VALUE_BIT_Ttag {
	unsigned int systime_count_value : BFW_systime_count_value_systime_count_value; // Each clock cycle (systime_count_value >> 28) 
	                                                        // will be added to systime (rate multiplier for IEEE1588).
	                                                        // Value 0x10000000 can be used for counting in 10ns (ethernet clock) steps.
} SYSTIME_COUNT_VALUE_BIT_T;

typedef union {
	unsigned int              val;
	SYSTIME_COUNT_VALUE_BIT_T bf;
} SYSTIME_COUNT_VALUE_T;

// ---------------------------------------------------------------------
// Register systime_s_compare_value
// => SYSTIME sec compare register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_systime_s_compare_value 0x00000010U
#define Adr_systime_s_compare_value     0x00101110U

#define MSK_systime_s_compare_value_systime_s_compare_value 0xffffffffU // [31:0]
#define SRT_systime_s_compare_value_systime_s_compare_value 0           

enum {
	BFW_systime_s_compare_value_systime_s_compare_value = 32  // [31:0]
};

typedef struct SYSTIME_S_COMPARE_VALUE_BIT_Ttag {
	unsigned int systime_s_compare_value : BFW_systime_s_compare_value_systime_s_compare_value; // compare value with systime_s (seconds) 
	                                                        // set systime_s_compare_irq register if systime_s_compare_enable is set
} SYSTIME_S_COMPARE_VALUE_BIT_T;

typedef union {
	unsigned int                  val;
	SYSTIME_S_COMPARE_VALUE_BIT_T bf;
} SYSTIME_S_COMPARE_VALUE_T;

// ---------------------------------------------------------------------
// Register systime_s_compare_enable
// => SYSTIME sec compare enable register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_systime_s_compare_enable 0x00000014U
#define Adr_systime_s_compare_enable     0x00101114U

#define MSK_systime_s_compare_enable_systime_s_compare_enable 0x00000001U // [0]
#define SRT_systime_s_compare_enable_systime_s_compare_enable 0           

enum {
	BFW_systime_s_compare_enable_systime_s_compare_enable = 1,  // [0]
	BFW_systime_s_compare_enable_reserved1                = 31  // [31:1]
};

typedef struct SYSTIME_S_COMPARE_ENABLE_BIT_Ttag {
	unsigned int systime_s_compare_enable : BFW_systime_s_compare_enable_systime_s_compare_enable; // enable compare with systime_s (seconds) 
	                                                        // automatic set with set systime_s_compare_value
	                                                        // automatic reset after irq
	unsigned int reserved1                : BFW_systime_s_compare_enable_reserved1;                // reserved
} SYSTIME_S_COMPARE_ENABLE_BIT_T;

typedef union {
	unsigned int                   val;
	SYSTIME_S_COMPARE_ENABLE_BIT_T bf;
} SYSTIME_S_COMPARE_ENABLE_T;

// ---------------------------------------------------------------------
// Register systime_s_compare_irq
// => SYSTIME sec compare irq register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_systime_s_compare_irq 0x00000018U
#define Adr_systime_s_compare_irq     0x00101118U

#define MSK_systime_s_compare_irq_systime_s_compare_irq 0x00000001U // [0]
#define SRT_systime_s_compare_irq_systime_s_compare_irq 0           

enum {
	BFW_systime_s_compare_irq_systime_s_compare_irq = 1,  // [0]
	BFW_systime_s_compare_irq_reserved1             = 31  // [31:1]
};

typedef struct SYSTIME_S_COMPARE_IRQ_BIT_Ttag {
	unsigned int systime_s_compare_irq : BFW_systime_s_compare_irq_systime_s_compare_irq; // compare with systime_s (seconds) irq 
	                                                        // set if systime_s equal systime_s_compare_value
	                                                        // reset by arm (arm writes 1 to reset)
	unsigned int reserved1             : BFW_systime_s_compare_irq_reserved1;             // reserved
} SYSTIME_S_COMPARE_IRQ_BIT_T;

typedef union {
	unsigned int                val;
	SYSTIME_S_COMPARE_IRQ_BIT_T bf;
} SYSTIME_S_COMPARE_IRQ_T;


// =====================================================================
//
// Area of rtc
//
// =====================================================================

#define Addr_rtc	0x00101200U

// ---------------------------------------------------------------------
// Register rtc_val
// => RTC 1Hz based value register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_rtc_val 0x00000000U
#define Adr_rtc_val     0x00101200U

#define MSK_rtc_val_VAL 0xffffffffU // [31:0]
#define SRT_rtc_val_VAL 0           

enum {
	BFW_rtc_val_VAL = 32  // [31:0]
};

typedef struct RTC_VAL_BIT_Ttag {
	unsigned int VAL : BFW_rtc_val_VAL; // 1Hz counter value 
} RTC_VAL_BIT_T;

typedef union {
	unsigned int  val;
	RTC_VAL_BIT_T bf;
} RTC_VAL_T;

// ---------------------------------------------------------------------
// Register rtc_32k
// => RTC 32KHz based value register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_rtc_32k 0x00000004U
#define Adr_rtc_32k     0x00101204U

#define MSK_rtc_32k_VAL 0xffffffffU // [31:0]
#define SRT_rtc_32k_VAL 0           

enum {
	BFW_rtc_32k_VAL = 32  // [31:0]
};

typedef struct RTC_32K_BIT_Ttag {
	unsigned int VAL : BFW_rtc_32k_VAL; // 32KHz counter value 
} RTC_32K_BIT_T;

typedef union {
	unsigned int  val;
	RTC_32K_BIT_T bf;
} RTC_32K_T;

// ---------------------------------------------------------------------
// Register rtc_32ks
// => RTC 32KHz based value register (sampled on Adr_RTC_VAL read)
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_rtc_32ks 0x00000008U
#define Adr_rtc_32ks     0x00101208U

#define MSK_rtc_32ks_VAL 0xffffffffU // [31:0]
#define SRT_rtc_32ks_VAL 0           

enum {
	BFW_rtc_32ks_VAL = 32  // [31:0]
};

typedef struct RTC_32KS_BIT_Ttag {
	unsigned int VAL : BFW_rtc_32ks_VAL; // 32KHz counter value 
} RTC_32KS_BIT_T;

typedef union {
	unsigned int   val;
	RTC_32KS_BIT_T bf;
} RTC_32KS_T;

// ---------------------------------------------------------------------
// Register rtc_irq2isolate_cycles
// => Number of clock_32kHz cycles, between powergood goes low and activation of isolation of RTC and buffered SRAM.
//    During this time, ARM-software must write all data to buffered SRAM and deactivate outputs to isolated area.
//    As this value is stored inside the isolated area (that has no reset), the default value has to be programmed during startup.
//    After powergood goes low, the remaining 32kHz-clock-cycles until enter to isolation-mode can be read out.
// => Mode: Mode (w)
// ---------------------------------------------------------------------

#define REL_Adr_rtc_irq2isolate_cycles 0x0000000CU
#define Adr_rtc_irq2isolate_cycles     0x0010120CU

#define MSK_rtc_irq2isolate_cycles_irq2iso 0x000000ffU // [7:0]
#define SRT_rtc_irq2isolate_cycles_irq2iso 0           

enum {
	BFW_rtc_irq2isolate_cycles_irq2iso   = 8,  // [7:0]
	BFW_rtc_irq2isolate_cycles_reserved1 = 24  // [31:8]
};

typedef struct RTC_IRQ2ISOLATE_CYCLES_BIT_Ttag {
	unsigned int irq2iso   : BFW_rtc_irq2isolate_cycles_irq2iso;   // number of clock_32kHz cycles 
	unsigned int reserved1 : BFW_rtc_irq2isolate_cycles_reserved1; // reserved
} RTC_IRQ2ISOLATE_CYCLES_BIT_T;

typedef union {
	unsigned int                 val;
	RTC_IRQ2ISOLATE_CYCLES_BIT_T bf;
} RTC_IRQ2ISOLATE_CYCLES_T;

// ---------------------------------------------------------------------
// Register rtc_irq_mask
// => Isolated Area interrupt mask register
// => Mode: Mode (rw)
// ---------------------------------------------------------------------

#define REL_Adr_rtc_irq_mask 0x00000010U
#define Adr_rtc_irq_mask     0x00101210U

#define MSK_rtc_irq_mask_en_power_down   0x00000001U // [0]
#define SRT_rtc_irq_mask_en_power_down   0           
#define MSK_rtc_irq_mask_en_clk32_fault1 0x00000002U // [1]
#define SRT_rtc_irq_mask_en_clk32_fault1 1           
#define MSK_rtc_irq_mask_en_clk32_fault2 0x00000004U // [2]
#define SRT_rtc_irq_mask_en_clk32_fault2 2           

enum {
	BFW_rtc_irq_mask_en_power_down   = 1,  // [0]
	BFW_rtc_irq_mask_en_clk32_fault1 = 1,  // [1]
	BFW_rtc_irq_mask_en_clk32_fault2 = 1,  // [2]
	BFW_rtc_irq_mask_reserved1       = 29  // [31:3]
};

typedef struct RTC_IRQ_MASK_BIT_Ttag {
	unsigned int en_power_down   : BFW_rtc_irq_mask_en_power_down;   // enable power_good interrupt  
	unsigned int en_clk32_fault1 : BFW_rtc_irq_mask_en_clk32_fault1; // enable clk32_fault1 interrupt 
	unsigned int en_clk32_fault2 : BFW_rtc_irq_mask_en_clk32_fault2; // enable clk32_fault2 interrupt 
	unsigned int reserved1       : BFW_rtc_irq_mask_reserved1;       // reserved
} RTC_IRQ_MASK_BIT_T;

typedef union {
	unsigned int       val;
	RTC_IRQ_MASK_BIT_T bf;
} RTC_IRQ_MASK_T;

// ---------------------------------------------------------------------
// Register rtc_irq_stat
// => Isolated Area interrupt status register
//    writing 1 to a bit resets the Interrupt
// => Mode: Mode (rw)
// ---------------------------------------------------------------------

#define REL_Adr_rtc_irq_stat 0x00000014U
#define Adr_rtc_irq_stat     0x00101214U

#define MSK_rtc_irq_stat_power_down   0x00000001U // [0]
#define SRT_rtc_irq_stat_power_down   0           
#define MSK_rtc_irq_stat_clk32_fault1 0x00000002U // [1]
#define SRT_rtc_irq_stat_clk32_fault1 1           
#define MSK_rtc_irq_stat_clk32_fault2 0x00000004U // [2]
#define SRT_rtc_irq_stat_clk32_fault2 2           

enum {
	BFW_rtc_irq_stat_power_down   = 1,  // [0]
	BFW_rtc_irq_stat_clk32_fault1 = 1,  // [1]
	BFW_rtc_irq_stat_clk32_fault2 = 1,  // [2]
	BFW_rtc_irq_stat_reserved1    = 29  // [31:3]
};

typedef struct RTC_IRQ_STAT_BIT_Ttag {
	unsigned int power_down   : BFW_rtc_irq_stat_power_down;   // power_good signal from external became 0, 
	unsigned int clk32_fault1 : BFW_rtc_irq_stat_clk32_fault1; // if clk32 is not running, this bit will be set all 4096 system clock cycles (100MHz: 40,96us) 
	                                                        // After resetting this bit, the next interrupt will be generated not befor 4096 system clk cycles passed.
	unsigned int clk32_fault2 : BFW_rtc_irq_stat_clk32_fault2; // if clk32 is not running, this bit will be set all 131072 (128k) system clock cycles (100MHz: 1.31ms) 
	                                                        // After resetting this bit, the next interrupt will be generated not befor 128k system clk cycles passed.
	unsigned int reserved1    : BFW_rtc_irq_stat_reserved1;    // reserved
} RTC_IRQ_STAT_BIT_T;

typedef union {
	unsigned int       val;
	RTC_IRQ_STAT_BIT_T bf;
} RTC_IRQ_STAT_T;

// ---------------------------------------------------------------------
// Register rtc_isolated
// => Isolated Area is currently isolated:
//    write accesses to registers of RTC or BACKUP_RAM have no effect,
//    read accesses to registers of RTC will deliver 0, to BACKUP_RAM an abort
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_rtc_isolated 0x00000018U
#define Adr_rtc_isolated     0x00101218U

#define MSK_rtc_isolated_not_isolated 0x00000001U // [0]
#define SRT_rtc_isolated_not_isolated 0           

enum {
	BFW_rtc_isolated_not_isolated = 1,  // [0]
	BFW_rtc_isolated_reserved1    = 31  // [31:1]
};

typedef struct RTC_ISOLATED_BIT_Ttag {
	unsigned int not_isolated : BFW_rtc_isolated_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_rtc_isolated_reserved1;    // reserved
} RTC_ISOLATED_BIT_T;

typedef union {
	unsigned int       val;
	RTC_ISOLATED_BIT_T bf;
} RTC_ISOLATED_T;


// =====================================================================
//
// Area of usb_core
//
// =====================================================================

#define Addr_usb_core	0x00120000U

// ---------------------------------------------------------------------
// Register ID
// => ID Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_ID 0x00000000U
#define Adr_ID     0x00120000U

#define MSK_ID_not_isolated 0x00000001U // [0]
#define SRT_ID_not_isolated 0           

enum {
	BFW_ID_not_isolated = 1,  // [0]
	BFW_ID_reserved1    = 31  // [31:1]
};

typedef struct ID_BIT_Ttag {
	unsigned int not_isolated : BFW_ID_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_ID_reserved1;    // reserved
} ID_BIT_T;

typedef union {
	unsigned int val;
	ID_BIT_T     bf;
} ID_T;

// ---------------------------------------------------------------------
// Register USB_CTRL
// => USB Control Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_USB_CTRL 0x00000004U
#define Adr_USB_CTRL     0x00120004U

#define MSK_USB_CTRL_not_isolated 0x00000001U // [0]
#define SRT_USB_CTRL_not_isolated 0           

enum {
	BFW_USB_CTRL_not_isolated = 1,  // [0]
	BFW_USB_CTRL_reserved1    = 31  // [31:1]
};

typedef struct USB_CTRL_BIT_Ttag {
	unsigned int not_isolated : BFW_USB_CTRL_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_USB_CTRL_reserved1;    // reserved
} USB_CTRL_BIT_T;

typedef union {
	unsigned int   val;
	USB_CTRL_BIT_T bf;
} USB_CTRL_T;

// ---------------------------------------------------------------------
// Register FRM_TIMER
// => Frame Timer Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_FRM_TIMER 0x00000008U
#define Adr_FRM_TIMER     0x00120008U

#define MSK_FRM_TIMER_not_isolated 0x00000001U // [0]
#define SRT_FRM_TIMER_not_isolated 0           

enum {
	BFW_FRM_TIMER_not_isolated = 1,  // [0]
	BFW_FRM_TIMER_reserved1    = 31  // [31:1]
};

typedef struct FRM_TIMER_BIT_Ttag {
	unsigned int not_isolated : BFW_FRM_TIMER_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_FRM_TIMER_reserved1;    // reserved
} FRM_TIMER_BIT_T;

typedef union {
	unsigned int    val;
	FRM_TIMER_BIT_T bf;
} FRM_TIMER_T;

// ---------------------------------------------------------------------
// Register MAIN_EV
// => Main Event Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_MAIN_EV 0x0000000CU
#define Adr_MAIN_EV     0x0012000CU

#define MSK_MAIN_EV_not_isolated 0x00000001U // [0]
#define SRT_MAIN_EV_not_isolated 0           

enum {
	BFW_MAIN_EV_not_isolated = 1,  // [0]
	BFW_MAIN_EV_reserved1    = 31  // [31:1]
};

typedef struct MAIN_EV_BIT_Ttag {
	unsigned int not_isolated : BFW_MAIN_EV_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_MAIN_EV_reserved1;    // reserved
} MAIN_EV_BIT_T;

typedef union {
	unsigned int  val;
	MAIN_EV_BIT_T bf;
} MAIN_EV_T;

// ---------------------------------------------------------------------
// Register MAIN_EM
// => Main Event Mask Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_MAIN_EM 0x00000010U
#define Adr_MAIN_EM     0x00120010U

#define MSK_MAIN_EM_not_isolated 0x00000001U // [0]
#define SRT_MAIN_EM_not_isolated 0           

enum {
	BFW_MAIN_EM_not_isolated = 1,  // [0]
	BFW_MAIN_EM_reserved1    = 31  // [31:1]
};

typedef struct MAIN_EM_BIT_Ttag {
	unsigned int not_isolated : BFW_MAIN_EM_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_MAIN_EM_reserved1;    // reserved
} MAIN_EM_BIT_T;

typedef union {
	unsigned int  val;
	MAIN_EM_BIT_T bf;
} MAIN_EM_T;

// ---------------------------------------------------------------------
// Register PIPE_EV
// => Pipe Event Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_EV 0x00000014U
#define Adr_PIPE_EV     0x00120014U

#define MSK_PIPE_EV_not_isolated 0x00000001U // [0]
#define SRT_PIPE_EV_not_isolated 0           

enum {
	BFW_PIPE_EV_not_isolated = 1,  // [0]
	BFW_PIPE_EV_reserved1    = 31  // [31:1]
};

typedef struct PIPE_EV_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_EV_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_EV_reserved1;    // reserved
} PIPE_EV_BIT_T;

typedef union {
	unsigned int  val;
	PIPE_EV_BIT_T bf;
} PIPE_EV_T;

// ---------------------------------------------------------------------
// Register PIPE_EM
// => Pipe Event Mask Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_EM 0x00000018U
#define Adr_PIPE_EM     0x00120018U

#define MSK_PIPE_EM_not_isolated 0x00000001U // [0]
#define SRT_PIPE_EM_not_isolated 0           

enum {
	BFW_PIPE_EM_not_isolated = 1,  // [0]
	BFW_PIPE_EM_reserved1    = 31  // [31:1]
};

typedef struct PIPE_EM_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_EM_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_EM_reserved1;    // reserved
} PIPE_EM_BIT_T;

typedef union {
	unsigned int  val;
	PIPE_EM_BIT_T bf;
} PIPE_EM_T;

// ---------------------------------------------------------------------
// Register PIPE_SEL
// => Pipe Select Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_SEL 0x00000024U
#define Adr_PIPE_SEL     0x00120024U

#define MSK_PIPE_SEL_not_isolated 0x00000001U // [0]
#define SRT_PIPE_SEL_not_isolated 0           

enum {
	BFW_PIPE_SEL_not_isolated = 1,  // [0]
	BFW_PIPE_SEL_reserved1    = 31  // [31:1]
};

typedef struct PIPE_SEL_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_SEL_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_SEL_reserved1;    // reserved
} PIPE_SEL_BIT_T;

typedef union {
	unsigned int   val;
	PIPE_SEL_BIT_T bf;
} PIPE_SEL_T;

// ---------------------------------------------------------------------
// Register PORT_STAT
// => Port Statuus Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PORT_STAT 0x0000002CU
#define Adr_PORT_STAT     0x0012002CU

#define MSK_PORT_STAT_not_isolated 0x00000001U // [0]
#define SRT_PORT_STAT_not_isolated 0           

enum {
	BFW_PORT_STAT_not_isolated = 1,  // [0]
	BFW_PORT_STAT_reserved1    = 31  // [31:1]
};

typedef struct PORT_STAT_BIT_Ttag {
	unsigned int not_isolated : BFW_PORT_STAT_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PORT_STAT_reserved1;    // reserved
} PORT_STAT_BIT_T;

typedef union {
	unsigned int    val;
	PORT_STAT_BIT_T bf;
} PORT_STAT_T;

// ---------------------------------------------------------------------
// Register PORT_CTRL
// => Port Control Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PORT_CTRL 0x00000030U
#define Adr_PORT_CTRL     0x00120030U

#define MSK_PORT_CTRL_not_isolated 0x00000001U // [0]
#define SRT_PORT_CTRL_not_isolated 0           

enum {
	BFW_PORT_CTRL_not_isolated = 1,  // [0]
	BFW_PORT_CTRL_reserved1    = 31  // [31:1]
};

typedef struct PORT_CTRL_BIT_Ttag {
	unsigned int not_isolated : BFW_PORT_CTRL_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PORT_CTRL_reserved1;    // reserved
} PORT_CTRL_BIT_T;

typedef union {
	unsigned int    val;
	PORT_CTRL_BIT_T bf;
} PORT_CTRL_T;

// ---------------------------------------------------------------------
// Register PSC_EV
// => Port Status Change Event Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PSC_EV 0x00000034U
#define Adr_PSC_EV     0x00120034U

#define MSK_PSC_EV_not_isolated 0x00000001U // [0]
#define SRT_PSC_EV_not_isolated 0           

enum {
	BFW_PSC_EV_not_isolated = 1,  // [0]
	BFW_PSC_EV_reserved1    = 31  // [31:1]
};

typedef struct PSC_EV_BIT_Ttag {
	unsigned int not_isolated : BFW_PSC_EV_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PSC_EV_reserved1;    // reserved
} PSC_EV_BIT_T;

typedef union {
	unsigned int val;
	PSC_EV_BIT_T bf;
} PSC_EV_T;

// ---------------------------------------------------------------------
// Register PSC_EM
// => Port Status Change Event Mask Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PSC_EM 0x00000038U
#define Adr_PSC_EM     0x00120038U

#define MSK_PSC_EM_not_isolated 0x00000001U // [0]
#define SRT_PSC_EM_not_isolated 0           

enum {
	BFW_PSC_EM_not_isolated = 1,  // [0]
	BFW_PSC_EM_reserved1    = 31  // [31:1]
};

typedef struct PSC_EM_BIT_Ttag {
	unsigned int not_isolated : BFW_PSC_EM_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PSC_EM_reserved1;    // reserved
} PSC_EM_BIT_T;

typedef union {
	unsigned int val;
	PSC_EM_BIT_T bf;
} PSC_EM_T;

// ---------------------------------------------------------------------
// Register PIPE_CTRL
// => Pipe Control Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_CTRL 0x00000040U
#define Adr_PIPE_CTRL     0x00120040U

#define MSK_PIPE_CTRL_not_isolated 0x00000001U // [0]
#define SRT_PIPE_CTRL_not_isolated 0           

enum {
	BFW_PIPE_CTRL_not_isolated = 1,  // [0]
	BFW_PIPE_CTRL_reserved1    = 31  // [31:1]
};

typedef struct PIPE_CTRL_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_CTRL_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_CTRL_reserved1;    // reserved
} PIPE_CTRL_BIT_T;

typedef union {
	unsigned int    val;
	PIPE_CTRL_BIT_T bf;
} PIPE_CTRL_T;

// ---------------------------------------------------------------------
// Register PIPE_CFG
// => Pipe Configuration Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_CFG 0x00000044U
#define Adr_PIPE_CFG     0x00120044U

#define MSK_PIPE_CFG_not_isolated 0x00000001U // [0]
#define SRT_PIPE_CFG_not_isolated 0           

enum {
	BFW_PIPE_CFG_not_isolated = 1,  // [0]
	BFW_PIPE_CFG_reserved1    = 31  // [31:1]
};

typedef struct PIPE_CFG_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_CFG_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_CFG_reserved1;    // reserved
} PIPE_CFG_BIT_T;

typedef union {
	unsigned int   val;
	PIPE_CFG_BIT_T bf;
} PIPE_CFG_T;

// ---------------------------------------------------------------------
// Register PIPE_ADDR
// => Pipe Address Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_ADDR 0x00000048U
#define Adr_PIPE_ADDR     0x00120048U

#define MSK_PIPE_ADDR_not_isolated 0x00000001U // [0]
#define SRT_PIPE_ADDR_not_isolated 0           

enum {
	BFW_PIPE_ADDR_not_isolated = 1,  // [0]
	BFW_PIPE_ADDR_reserved1    = 31  // [31:1]
};

typedef struct PIPE_ADDR_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_ADDR_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_ADDR_reserved1;    // reserved
} PIPE_ADDR_BIT_T;

typedef union {
	unsigned int    val;
	PIPE_ADDR_BIT_T bf;
} PIPE_ADDR_T;

// ---------------------------------------------------------------------
// Register PIPE_STAT
// => Pipe Status Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_STAT 0x0000004CU
#define Adr_PIPE_STAT     0x0012004CU

#define MSK_PIPE_STAT_not_isolated 0x00000001U // [0]
#define SRT_PIPE_STAT_not_isolated 0           

enum {
	BFW_PIPE_STAT_not_isolated = 1,  // [0]
	BFW_PIPE_STAT_reserved1    = 31  // [31:1]
};

typedef struct PIPE_STAT_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_STAT_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_STAT_reserved1;    // reserved
} PIPE_STAT_BIT_T;

typedef union {
	unsigned int    val;
	PIPE_STAT_BIT_T bf;
} PIPE_STAT_T;

// ---------------------------------------------------------------------
// Register PIPE_DATA_PTR
// => Pipe Data Pointer Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_DATA_PTR 0x00000050U
#define Adr_PIPE_DATA_PTR     0x00120050U

#define MSK_PIPE_DATA_PTR_not_isolated 0x00000001U // [0]
#define SRT_PIPE_DATA_PTR_not_isolated 0           

enum {
	BFW_PIPE_DATA_PTR_not_isolated = 1,  // [0]
	BFW_PIPE_DATA_PTR_reserved1    = 31  // [31:1]
};

typedef struct PIPE_DATA_PTR_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_DATA_PTR_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_DATA_PTR_reserved1;    // reserved
} PIPE_DATA_PTR_BIT_T;

typedef union {
	unsigned int        val;
	PIPE_DATA_PTR_BIT_T bf;
} PIPE_DATA_PTR_T;

// ---------------------------------------------------------------------
// Register PIPE_DATA_TBYTES
// => Pipe Total Bytes Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_DATA_TBYTES 0x00000054U
#define Adr_PIPE_DATA_TBYTES     0x00120054U

#define MSK_PIPE_DATA_TBYTES_not_isolated 0x00000001U // [0]
#define SRT_PIPE_DATA_TBYTES_not_isolated 0           

enum {
	BFW_PIPE_DATA_TBYTES_not_isolated = 1,  // [0]
	BFW_PIPE_DATA_TBYTES_reserved1    = 31  // [31:1]
};

typedef struct PIPE_DATA_TBYTES_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_DATA_TBYTES_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_DATA_TBYTES_reserved1;    // reserved
} PIPE_DATA_TBYTES_BIT_T;

typedef union {
	unsigned int           val;
	PIPE_DATA_TBYTES_BIT_T bf;
} PIPE_DATA_TBYTES_T;

// ---------------------------------------------------------------------
// Register PIPE_ADATA_PTR
// => Pipe Alternative Data Pointer Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_ADATA_PTR 0x00000058U
#define Adr_PIPE_ADATA_PTR     0x00120058U

#define MSK_PIPE_ADATA_PTR_not_isolated 0x00000001U // [0]
#define SRT_PIPE_ADATA_PTR_not_isolated 0           

enum {
	BFW_PIPE_ADATA_PTR_not_isolated = 1,  // [0]
	BFW_PIPE_ADATA_PTR_reserved1    = 31  // [31:1]
};

typedef struct PIPE_ADATA_PTR_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_ADATA_PTR_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_ADATA_PTR_reserved1;    // reserved
} PIPE_ADATA_PTR_BIT_T;

typedef union {
	unsigned int         val;
	PIPE_ADATA_PTR_BIT_T bf;
} PIPE_ADATA_PTR_T;

// ---------------------------------------------------------------------
// Register PIPE_ADATA_TBYTES
// => Pipe Altenative Data Total Bytes Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_PIPE_ADATA_TBYTES 0x0000005CU
#define Adr_PIPE_ADATA_TBYTES     0x0012005CU

#define MSK_PIPE_ADATA_TBYTES_not_isolated 0x00000001U // [0]
#define SRT_PIPE_ADATA_TBYTES_not_isolated 0           

enum {
	BFW_PIPE_ADATA_TBYTES_not_isolated = 1,  // [0]
	BFW_PIPE_ADATA_TBYTES_reserved1    = 31  // [31:1]
};

typedef struct PIPE_ADATA_TBYTES_BIT_Ttag {
	unsigned int not_isolated : BFW_PIPE_ADATA_TBYTES_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_PIPE_ADATA_TBYTES_reserved1;    // reserved
} PIPE_ADATA_TBYTES_BIT_T;

typedef union {
	unsigned int            val;
	PIPE_ADATA_TBYTES_BIT_T bf;
} PIPE_ADATA_TBYTES_T;

// ---------------------------------------------------------------------
// Register DEBUG_CTRL
// => Debug Control Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_DEBUG_CTRL 0x00000060U
#define Adr_DEBUG_CTRL     0x00120060U

#define MSK_DEBUG_CTRL_not_isolated 0x00000001U // [0]
#define SRT_DEBUG_CTRL_not_isolated 0           

enum {
	BFW_DEBUG_CTRL_not_isolated = 1,  // [0]
	BFW_DEBUG_CTRL_reserved1    = 31  // [31:1]
};

typedef struct DEBUG_CTRL_BIT_Ttag {
	unsigned int not_isolated : BFW_DEBUG_CTRL_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_DEBUG_CTRL_reserved1;    // reserved
} DEBUG_CTRL_BIT_T;

typedef union {
	unsigned int     val;
	DEBUG_CTRL_BIT_T bf;
} DEBUG_CTRL_T;

// ---------------------------------------------------------------------
// Register DEBUG_PID
// => Debug PID Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_DEBUG_PID 0x00000064U
#define Adr_DEBUG_PID     0x00120064U

#define MSK_DEBUG_PID_not_isolated 0x00000001U // [0]
#define SRT_DEBUG_PID_not_isolated 0           

enum {
	BFW_DEBUG_PID_not_isolated = 1,  // [0]
	BFW_DEBUG_PID_reserved1    = 31  // [31:1]
};

typedef struct DEBUG_PID_BIT_Ttag {
	unsigned int not_isolated : BFW_DEBUG_PID_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_DEBUG_PID_reserved1;    // reserved
} DEBUG_PID_BIT_T;

typedef union {
	unsigned int    val;
	DEBUG_PID_BIT_T bf;
} DEBUG_PID_T;

// ---------------------------------------------------------------------
// Register DEBUG_STAT
// => Debug Status Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_DEBUG_STAT 0x00000068U
#define Adr_DEBUG_STAT     0x00120068U

#define MSK_DEBUG_STAT_not_isolated 0x00000001U // [0]
#define SRT_DEBUG_STAT_not_isolated 0           

enum {
	BFW_DEBUG_STAT_not_isolated = 1,  // [0]
	BFW_DEBUG_STAT_reserved1    = 31  // [31:1]
};

typedef struct DEBUG_STAT_BIT_Ttag {
	unsigned int not_isolated : BFW_DEBUG_STAT_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_DEBUG_STAT_reserved1;    // reserved
} DEBUG_STAT_BIT_T;

typedef union {
	unsigned int     val;
	DEBUG_STAT_BIT_T bf;
} DEBUG_STAT_T;

// ---------------------------------------------------------------------
// Register TEST
// => Test Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_TEST 0x0000006CU
#define Adr_TEST     0x0012006CU

#define MSK_TEST_not_isolated 0x00000001U // [0]
#define SRT_TEST_not_isolated 0           

enum {
	BFW_TEST_not_isolated = 1,  // [0]
	BFW_TEST_reserved1    = 31  // [31:1]
};

typedef struct TEST_BIT_Ttag {
	unsigned int not_isolated : BFW_TEST_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_TEST_reserved1;    // reserved
} TEST_BIT_T;

typedef union {
	unsigned int val;
	TEST_BIT_T   bf;
} TEST_T;

// ---------------------------------------------------------------------
// Register MAIN_CFG
// => Main Configuration Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_MAIN_CFG 0x00000080U
#define Adr_MAIN_CFG     0x00120080U

#define MSK_MAIN_CFG_not_isolated 0x00000001U // [0]
#define SRT_MAIN_CFG_not_isolated 0           

enum {
	BFW_MAIN_CFG_not_isolated = 1,  // [0]
	BFW_MAIN_CFG_reserved1    = 31  // [31:1]
};

typedef struct MAIN_CFG_BIT_Ttag {
	unsigned int not_isolated : BFW_MAIN_CFG_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_MAIN_CFG_reserved1;    // reserved
} MAIN_CFG_BIT_T;

typedef union {
	unsigned int   val;
	MAIN_CFG_BIT_T bf;
} MAIN_CFG_T;

// ---------------------------------------------------------------------
// Register MODE_CFG
// => Mode Configuration Register
// => Mode: Mode (USB Function Core Data Sheet)
// ---------------------------------------------------------------------

#define REL_Adr_MODE_CFG 0x00000084U
#define Adr_MODE_CFG     0x00120084U

#define MSK_MODE_CFG_not_isolated 0x00000001U // [0]
#define SRT_MODE_CFG_not_isolated 0           

enum {
	BFW_MODE_CFG_not_isolated = 1,  // [0]
	BFW_MODE_CFG_reserved1    = 31  // [31:1]
};

typedef struct MODE_CFG_BIT_Ttag {
	unsigned int not_isolated : BFW_MODE_CFG_not_isolated; // 0 : Isolated Area is currently isolated 
	                                                        // 1 : Isolated Area is currently not isolated
	                                                        // This bit will be set asynchronous by powergood (powergood must be stable at power on reset).
	                                                        // It will be set to zero rtc_irq2isolate_cycles 32khz clocks plus 2 (for synchronisation) after 
	                                                        // powergood-pin goes down. If this bit is 0, any access to backup SRAM will generate an abort (HRESP=1).
	                                                        // The ARM-CPU will switch to instruction or data abort mode!!! 
	                                                        // No valid access to backup SRAM and RTC-registers can be done in isolation mode!!!
	unsigned int reserved1    : BFW_MODE_CFG_reserved1;    // reserved
} MODE_CFG_BIT_T;

typedef union {
	unsigned int   val;
	MODE_CFG_BIT_T bf;
} MODE_CFG_T;

// ---------------------------------------------------------------------
// Register usb_core_ctrl
// => USB core control and status register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_usb_core_ctrl 0x00000088U
#define Adr_usb_core_ctrl     0x00120088U

#define MSK_usb_core_ctrl_reset              0x00000001U // [0]
#define SRT_usb_core_ctrl_reset              0           
#define MSK_usb_core_ctrl_dbg_support        0x00000002U // [1]
#define SRT_usb_core_ctrl_dbg_support        1           
#define MSK_usb_core_ctrl_xtd_dbg_support    0x00000004U // [2]
#define SRT_usb_core_ctrl_xtd_dbg_support    2           
#define MSK_usb_core_ctrl_soft_id_dig        0x00000008U // [3]
#define SRT_usb_core_ctrl_soft_id_dig        3           
#define MSK_usb_core_ctrl_alt_buffer_support 0x00000ff0U // [11:4]
#define SRT_usb_core_ctrl_alt_buffer_support 4           
#define MSK_usb_core_ctrl_core_suspend_n     0x00001000U // [12]
#define SRT_usb_core_ctrl_core_suspend_n     12          
#define MSK_usb_core_ctrl_xcvr_suspend_n     0x00002000U // [13]
#define SRT_usb_core_ctrl_xcvr_suspend_n     13          
#define MSK_usb_core_ctrl_over_current       0x00004000U // [14]
#define SRT_usb_core_ctrl_over_current       14          
#define MSK_usb_core_ctrl_va_sess_vld        0x00008000U // [15]
#define SRT_usb_core_ctrl_va_sess_vld        15          
#define MSK_usb_core_ctrl_vb_sess_end        0x00010000U // [16]
#define SRT_usb_core_ctrl_vb_sess_end        16          
#define MSK_usb_core_ctrl_vb_sess_vld        0x00020000U // [17]
#define SRT_usb_core_ctrl_vb_sess_vld        17          
#define MSK_usb_core_ctrl_vbus_vld           0x00040000U // [18]
#define SRT_usb_core_ctrl_vbus_vld           18          
#define MSK_usb_core_ctrl_chrg_vbus          0x00080000U // [19]
#define SRT_usb_core_ctrl_chrg_vbus          19          
#define MSK_usb_core_ctrl_dlp_active         0x00100000U // [20]
#define SRT_usb_core_ctrl_dlp_active         20          
#define MSK_usb_core_ctrl_vb_on              0x00200000U // [21]
#define SRT_usb_core_ctrl_vb_on              21          
#define MSK_usb_core_ctrl_dischrg_vbus       0x00400000U // [22]
#define SRT_usb_core_ctrl_dischrg_vbus       22          
#define MSK_usb_core_ctrl_ucif_rdy           0x00800000U // [23]
#define SRT_usb_core_ctrl_ucif_rdy           23          
#define MSK_usb_core_ctrl_usb_irq            0x01000000U // [24]
#define SRT_usb_core_ctrl_usb_irq            24          

enum {
	BFW_usb_core_ctrl_reset              = 1, // [0]
	BFW_usb_core_ctrl_dbg_support        = 1, // [1]
	BFW_usb_core_ctrl_xtd_dbg_support    = 1, // [2]
	BFW_usb_core_ctrl_soft_id_dig        = 1, // [3]
	BFW_usb_core_ctrl_alt_buffer_support = 8, // [11:4]
	BFW_usb_core_ctrl_core_suspend_n     = 1, // [12]
	BFW_usb_core_ctrl_xcvr_suspend_n     = 1, // [13]
	BFW_usb_core_ctrl_over_current       = 1, // [14]
	BFW_usb_core_ctrl_va_sess_vld        = 1, // [15]
	BFW_usb_core_ctrl_vb_sess_end        = 1, // [16]
	BFW_usb_core_ctrl_vb_sess_vld        = 1, // [17]
	BFW_usb_core_ctrl_vbus_vld           = 1, // [18]
	BFW_usb_core_ctrl_chrg_vbus          = 1, // [19]
	BFW_usb_core_ctrl_dlp_active         = 1, // [20]
	BFW_usb_core_ctrl_vb_on              = 1, // [21]
	BFW_usb_core_ctrl_dischrg_vbus       = 1, // [22]
	BFW_usb_core_ctrl_ucif_rdy           = 1, // [23]
	BFW_usb_core_ctrl_usb_irq            = 1, // [24]
	BFW_usb_core_ctrl_reserved1          = 7  // [31:25]
};

typedef struct USB_CORE_CTRL_BIT_Ttag {
	unsigned int reset              : BFW_usb_core_ctrl_reset;              // software reset (r/w) 
	unsigned int dbg_support        : BFW_usb_core_ctrl_dbg_support;        // enables debug support (r/w) 
	unsigned int xtd_dbg_support    : BFW_usb_core_ctrl_xtd_dbg_support;    // enables extended debug support (r/w) 
	unsigned int soft_id_dig        : BFW_usb_core_ctrl_soft_id_dig;        // to set id_dig via software (r/w) 
	unsigned int alt_buffer_support : BFW_usb_core_ctrl_alt_buffer_support; // alt buffer support (r/w) 
	unsigned int core_suspend_n     : BFW_usb_core_ctrl_core_suspend_n;     // reflects core_suspend_n (ro) 
	unsigned int xcvr_suspend_n     : BFW_usb_core_ctrl_xcvr_suspend_n;     // reflects xcvr_suspend_n (ro) 
	unsigned int over_current       : BFW_usb_core_ctrl_over_current;       // reflects over_current (ro) 
	unsigned int va_sess_vld        : BFW_usb_core_ctrl_va_sess_vld;        // reflects va_sess_vld (ro) 
	unsigned int vb_sess_end        : BFW_usb_core_ctrl_vb_sess_end;        // reflects vb_sess_end (ro) 
	unsigned int vb_sess_vld        : BFW_usb_core_ctrl_vb_sess_vld;        // reflects vb_sess_vld (ro) 
	unsigned int vbus_vld           : BFW_usb_core_ctrl_vbus_vld;           // reflects vbus_vld (ro) 
	unsigned int chrg_vbus          : BFW_usb_core_ctrl_chrg_vbus;          // reflects chrg_vbus (ro) 
	unsigned int dlp_active         : BFW_usb_core_ctrl_dlp_active;         // reflects dlp_active (ro) 
	unsigned int vb_on              : BFW_usb_core_ctrl_vb_on;              // reflects vb_on (ro) 
	unsigned int dischrg_vbus       : BFW_usb_core_ctrl_dischrg_vbus;       // reflects dischrg_vbus (ro) 
	unsigned int ucif_rdy           : BFW_usb_core_ctrl_ucif_rdy;           // reflects ucif_rdy (ro) 
	unsigned int usb_irq            : BFW_usb_core_ctrl_usb_irq;            // reflects usb_irq (ro) 
	unsigned int reserved1          : BFW_usb_core_ctrl_reserved1;          // reserved
} USB_CORE_CTRL_BIT_T;

typedef union {
	unsigned int        val;
	USB_CORE_CTRL_BIT_T bf;
} USB_CORE_CTRL_T;


// =====================================================================
//
// Area of usb_fifo
//
// =====================================================================

#define Addr_usb_fifo	0x00130000U

// ---------------------------------------------------------------------
// Register USB_FIFO_BASE
// => USB End Point 0 (IN) Base Address
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_USB_FIFO_BASE 0x00000000U
#define Adr_USB_FIFO_BASE     0x00130000U


// =====================================================================
//
// Area of xc
//
// =====================================================================

#define Addr_xc	0x00140000U

// ---------------------------------------------------------------------
// Register xc_base
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_xc_base 0x00000000U
#define Adr_xc_base     0x00140000U


// =====================================================================
//
// Area of xmac0, xmac1, xmac2, xmac3
//
// =====================================================================

#define Addr_xmac0	0x00160000U
#define Addr_xmac1	0x00161000U
#define Addr_xmac2	0x00162000U
#define Addr_xmac3	0x00163000U

// ---------------------------------------------------------------------
// Register xmac_rpu_program_start
// => xMAC RPU program-RAM start address.
//    The Program-RAM is not addressable for xMAC RPU and TPU !
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpu_program_start   0x00000000U
#define Adr_xmac0_xmac_rpu_program_start 0x00160000U
#define Adr_xmac1_xmac_rpu_program_start 0x00161000U
#define Adr_xmac2_xmac_rpu_program_start 0x00162000U
#define Adr_xmac3_xmac_rpu_program_start 0x00163000U

// ---------------------------------------------------------------------
// Register xmac_rpu_program_end
// => xMAC RPU program-RAM end address.
//    This value is not used by design flow, only for documentation
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpu_program_end   0x000003FFU
#define Adr_xmac0_xmac_rpu_program_end 0x001603FFU
#define Adr_xmac1_xmac_rpu_program_end 0x001613FFU
#define Adr_xmac2_xmac_rpu_program_end 0x001623FFU
#define Adr_xmac3_xmac_rpu_program_end 0x001633FFU

// ---------------------------------------------------------------------
// Register xmac_tpu_program_start
// => xMAC TPU program-RAM start address.
//    The Program-RAM is not addressable for xMAC RPU and TPU !
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpu_program_start   0x00000400U
#define Adr_xmac0_xmac_tpu_program_start 0x00160400U
#define Adr_xmac1_xmac_tpu_program_start 0x00161400U
#define Adr_xmac2_xmac_tpu_program_start 0x00162400U
#define Adr_xmac3_xmac_tpu_program_start 0x00163400U

// ---------------------------------------------------------------------
// Register xmac_tpu_program_end
// => xMAC TPU program-RAM end address.
//    This value is not used by design flow, only for documentation
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpu_program_end   0x000007FFU
#define Adr_xmac0_xmac_tpu_program_end 0x001607FFU
#define Adr_xmac1_xmac_tpu_program_end 0x001617FFU
#define Adr_xmac2_xmac_tpu_program_end 0x001627FFU
#define Adr_xmac3_xmac_tpu_program_end 0x001637FFU

// ---------------------------------------------------------------------
// Register xmac_rpu_hold_pc
// => xMAC RPU hold_pc register:
//    rpu_hold_pc and tpu_hold_pc are the only registers accessible by ARM-CPU,
//    while RPU or TPU are running (hold=0).
//    To access other registers of xMAC, first hold RPU and TPU.
//    This register is not visible for xMAC RPU and TPU.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpu_hold_pc   0x00000A00U
#define Adr_xmac0_xmac_rpu_hold_pc 0x00160A00U
#define Adr_xmac1_xmac_rpu_hold_pc 0x00161A00U
#define Adr_xmac2_xmac_rpu_hold_pc 0x00162A00U
#define Adr_xmac3_xmac_rpu_hold_pc 0x00163A00U

#define MSK_xmac_rpu_hold_pc_rpu_pc   0x0000007fU // [6:0]
#define SRT_xmac_rpu_hold_pc_rpu_pc   0           
#define MSK_xmac_rpu_hold_pc_rpu_hold 0x00008000U // [15]
#define SRT_xmac_rpu_hold_pc_rpu_hold 15          

enum {
	BFW_xmac_rpu_hold_pc_rpu_pc    = 7,  // [6:0]
	BFW_xmac_rpu_hold_pc_reserved1 = 8,  // [14:7]
	BFW_xmac_rpu_hold_pc_rpu_hold  = 1,  // [15]
	BFW_xmac_rpu_hold_pc_reserved2 = 16  // [31:16]
};

typedef struct XMAC_RPU_HOLD_PC_BIT_Ttag {
	unsigned int rpu_pc    : BFW_xmac_rpu_hold_pc_rpu_pc;    // Program counter (read only, write can happen via adr_xmac_rpu_pc) 
	unsigned int reserved1 : BFW_xmac_rpu_hold_pc_reserved1; // reserved
	unsigned int rpu_hold  : BFW_xmac_rpu_hold_pc_rpu_hold;  // to hold RPU 
	unsigned int reserved2 : BFW_xmac_rpu_hold_pc_reserved2; // reserved
} XMAC_RPU_HOLD_PC_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_RPU_HOLD_PC_BIT_T bf;
} XMAC_RPU_HOLD_PC_T;

// ---------------------------------------------------------------------
// Register xmac_tpu_hold_pc
// => xMAC TPU hold_pc register:
//    rpu_hold_pc and tpu_hold_pc are the only registers accessible by ARM-CPU,
//    while RPU or TPU are running (hold=0).
//    To access other registers of xMAC, first hold RPU and TPU.
//    This register is not visible for xMAC RPU and TPU.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpu_hold_pc   0x00000A04U
#define Adr_xmac0_xmac_tpu_hold_pc 0x00160A04U
#define Adr_xmac1_xmac_tpu_hold_pc 0x00161A04U
#define Adr_xmac2_xmac_tpu_hold_pc 0x00162A04U
#define Adr_xmac3_xmac_tpu_hold_pc 0x00163A04U

#define MSK_xmac_tpu_hold_pc_tpu_pc   0x0000007fU // [6:0]
#define SRT_xmac_tpu_hold_pc_tpu_pc   0           
#define MSK_xmac_tpu_hold_pc_tpu_hold 0x00008000U // [15]
#define SRT_xmac_tpu_hold_pc_tpu_hold 15          

enum {
	BFW_xmac_tpu_hold_pc_tpu_pc    = 7,  // [6:0]
	BFW_xmac_tpu_hold_pc_reserved1 = 8,  // [14:7]
	BFW_xmac_tpu_hold_pc_tpu_hold  = 1,  // [15]
	BFW_xmac_tpu_hold_pc_reserved2 = 16  // [31:16]
};

typedef struct XMAC_TPU_HOLD_PC_BIT_Ttag {
	unsigned int tpu_pc    : BFW_xmac_tpu_hold_pc_tpu_pc;    // Program counter (read only, write can happen via adr_xmac_tpu_pc) 
	unsigned int reserved1 : BFW_xmac_tpu_hold_pc_reserved1; // reserved
	unsigned int tpu_hold  : BFW_xmac_tpu_hold_pc_tpu_hold;  // to hold TPU 
	unsigned int reserved2 : BFW_xmac_tpu_hold_pc_reserved2; // reserved
} XMAC_TPU_HOLD_PC_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_TPU_HOLD_PC_BIT_T bf;
} XMAC_TPU_HOLD_PC_T;

// ---------------------------------------------------------------------
// Register xmac_sr0
// => Shared Work Register 0 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr0   0x00000800U
#define Adr_xmac0_xmac_sr0 0x00160800U
#define Adr_xmac1_xmac_sr0 0x00161800U
#define Adr_xmac2_xmac_sr0 0x00162800U
#define Adr_xmac3_xmac_sr0 0x00163800U

#define MSK_xmac_sr0_SR0 0x0000ffffU // [15:0]
#define SRT_xmac_sr0_SR0 0           

enum {
	BFW_xmac_sr0_SR0       = 16, // [15:0]
	BFW_xmac_sr0_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR0_BIT_Ttag {
	unsigned int SR0       : BFW_xmac_sr0_SR0;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr0_reserved1; // reserved
} XMAC_SR0_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR0_BIT_T bf;
} XMAC_SR0_T;

// ---------------------------------------------------------------------
// Register xmac_sr1
// => Shared Work Register 1 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr1   0x00000804U
#define Adr_xmac0_xmac_sr1 0x00160804U
#define Adr_xmac1_xmac_sr1 0x00161804U
#define Adr_xmac2_xmac_sr1 0x00162804U
#define Adr_xmac3_xmac_sr1 0x00163804U

#define MSK_xmac_sr1_SR1 0x0000ffffU // [15:0]
#define SRT_xmac_sr1_SR1 0           

enum {
	BFW_xmac_sr1_SR1       = 16, // [15:0]
	BFW_xmac_sr1_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR1_BIT_Ttag {
	unsigned int SR1       : BFW_xmac_sr1_SR1;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr1_reserved1; // reserved
} XMAC_SR1_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR1_BIT_T bf;
} XMAC_SR1_T;

// ---------------------------------------------------------------------
// Register xmac_sr2
// => Shared Work Register 2 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr2   0x00000808U
#define Adr_xmac0_xmac_sr2 0x00160808U
#define Adr_xmac1_xmac_sr2 0x00161808U
#define Adr_xmac2_xmac_sr2 0x00162808U
#define Adr_xmac3_xmac_sr2 0x00163808U

#define MSK_xmac_sr2_SR2 0x0000ffffU // [15:0]
#define SRT_xmac_sr2_SR2 0           

enum {
	BFW_xmac_sr2_SR2       = 16, // [15:0]
	BFW_xmac_sr2_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR2_BIT_Ttag {
	unsigned int SR2       : BFW_xmac_sr2_SR2;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr2_reserved1; // reserved
} XMAC_SR2_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR2_BIT_T bf;
} XMAC_SR2_T;

// ---------------------------------------------------------------------
// Register xmac_sr3
// => Shared Work Register 3 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr3   0x0000080CU
#define Adr_xmac0_xmac_sr3 0x0016080CU
#define Adr_xmac1_xmac_sr3 0x0016180CU
#define Adr_xmac2_xmac_sr3 0x0016280CU
#define Adr_xmac3_xmac_sr3 0x0016380CU

#define MSK_xmac_sr3_SR3 0x0000ffffU // [15:0]
#define SRT_xmac_sr3_SR3 0           

enum {
	BFW_xmac_sr3_SR3       = 16, // [15:0]
	BFW_xmac_sr3_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR3_BIT_Ttag {
	unsigned int SR3       : BFW_xmac_sr3_SR3;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr3_reserved1; // reserved
} XMAC_SR3_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR3_BIT_T bf;
} XMAC_SR3_T;

// ---------------------------------------------------------------------
// Register xmac_sr4
// => Shared Work Register 4 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr4   0x00000810U
#define Adr_xmac0_xmac_sr4 0x00160810U
#define Adr_xmac1_xmac_sr4 0x00161810U
#define Adr_xmac2_xmac_sr4 0x00162810U
#define Adr_xmac3_xmac_sr4 0x00163810U

#define MSK_xmac_sr4_SR4 0x0000ffffU // [15:0]
#define SRT_xmac_sr4_SR4 0           

enum {
	BFW_xmac_sr4_SR4       = 16, // [15:0]
	BFW_xmac_sr4_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR4_BIT_Ttag {
	unsigned int SR4       : BFW_xmac_sr4_SR4;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr4_reserved1; // reserved
} XMAC_SR4_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR4_BIT_T bf;
} XMAC_SR4_T;

// ---------------------------------------------------------------------
// Register xmac_sr5
// => Shared Work Register 5 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr5   0x00000814U
#define Adr_xmac0_xmac_sr5 0x00160814U
#define Adr_xmac1_xmac_sr5 0x00161814U
#define Adr_xmac2_xmac_sr5 0x00162814U
#define Adr_xmac3_xmac_sr5 0x00163814U

#define MSK_xmac_sr5_SR5 0x0000ffffU // [15:0]
#define SRT_xmac_sr5_SR5 0           

enum {
	BFW_xmac_sr5_SR5       = 16, // [15:0]
	BFW_xmac_sr5_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR5_BIT_Ttag {
	unsigned int SR5       : BFW_xmac_sr5_SR5;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr5_reserved1; // reserved
} XMAC_SR5_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR5_BIT_T bf;
} XMAC_SR5_T;

// ---------------------------------------------------------------------
// Register xmac_sr6
// => Shared Work Register 6 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr6   0x00000818U
#define Adr_xmac0_xmac_sr6 0x00160818U
#define Adr_xmac1_xmac_sr6 0x00161818U
#define Adr_xmac2_xmac_sr6 0x00162818U
#define Adr_xmac3_xmac_sr6 0x00163818U

#define MSK_xmac_sr6_SR6 0x0000ffffU // [15:0]
#define SRT_xmac_sr6_SR6 0           

enum {
	BFW_xmac_sr6_SR6       = 16, // [15:0]
	BFW_xmac_sr6_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR6_BIT_Ttag {
	unsigned int SR6       : BFW_xmac_sr6_SR6;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr6_reserved1; // reserved
} XMAC_SR6_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR6_BIT_T bf;
} XMAC_SR6_T;

// ---------------------------------------------------------------------
// Register xmac_sr7
// => Shared Work Register 7 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr7   0x0000081CU
#define Adr_xmac0_xmac_sr7 0x0016081CU
#define Adr_xmac1_xmac_sr7 0x0016181CU
#define Adr_xmac2_xmac_sr7 0x0016281CU
#define Adr_xmac3_xmac_sr7 0x0016381CU

#define MSK_xmac_sr7_SR7 0x0000ffffU // [15:0]
#define SRT_xmac_sr7_SR7 0           

enum {
	BFW_xmac_sr7_SR7       = 16, // [15:0]
	BFW_xmac_sr7_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR7_BIT_Ttag {
	unsigned int SR7       : BFW_xmac_sr7_SR7;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr7_reserved1; // reserved
} XMAC_SR7_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR7_BIT_T bf;
} XMAC_SR7_T;

// ---------------------------------------------------------------------
// Register xmac_sr8
// => Shared Work Register 8 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr8   0x00000820U
#define Adr_xmac0_xmac_sr8 0x00160820U
#define Adr_xmac1_xmac_sr8 0x00161820U
#define Adr_xmac2_xmac_sr8 0x00162820U
#define Adr_xmac3_xmac_sr8 0x00163820U

#define MSK_xmac_sr8_SR8 0x0000ffffU // [15:0]
#define SRT_xmac_sr8_SR8 0           

enum {
	BFW_xmac_sr8_SR8       = 16, // [15:0]
	BFW_xmac_sr8_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR8_BIT_Ttag {
	unsigned int SR8       : BFW_xmac_sr8_SR8;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr8_reserved1; // reserved
} XMAC_SR8_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR8_BIT_T bf;
} XMAC_SR8_T;

// ---------------------------------------------------------------------
// Register xmac_sr9
// => Shared Work Register 9 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr9   0x00000824U
#define Adr_xmac0_xmac_sr9 0x00160824U
#define Adr_xmac1_xmac_sr9 0x00161824U
#define Adr_xmac2_xmac_sr9 0x00162824U
#define Adr_xmac3_xmac_sr9 0x00163824U

#define MSK_xmac_sr9_SR9 0x0000ffffU // [15:0]
#define SRT_xmac_sr9_SR9 0           

enum {
	BFW_xmac_sr9_SR9       = 16, // [15:0]
	BFW_xmac_sr9_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR9_BIT_Ttag {
	unsigned int SR9       : BFW_xmac_sr9_SR9;       // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr9_reserved1; // reserved
} XMAC_SR9_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_SR9_BIT_T bf;
} XMAC_SR9_T;

// ---------------------------------------------------------------------
// Register xmac_sr10
// => Shared Work Register 10 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr10   0x00000828U
#define Adr_xmac0_xmac_sr10 0x00160828U
#define Adr_xmac1_xmac_sr10 0x00161828U
#define Adr_xmac2_xmac_sr10 0x00162828U
#define Adr_xmac3_xmac_sr10 0x00163828U

#define MSK_xmac_sr10_SR10 0x0000ffffU // [15:0]
#define SRT_xmac_sr10_SR10 0           

enum {
	BFW_xmac_sr10_SR10      = 16, // [15:0]
	BFW_xmac_sr10_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR10_BIT_Ttag {
	unsigned int SR10      : BFW_xmac_sr10_SR10;      // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr10_reserved1; // reserved
} XMAC_SR10_BIT_T;

typedef union {
	unsigned int    val;
	XMAC_SR10_BIT_T bf;
} XMAC_SR10_T;

// ---------------------------------------------------------------------
// Register xmac_sr11
// => Shared Work Register 11 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr11   0x0000082CU
#define Adr_xmac0_xmac_sr11 0x0016082CU
#define Adr_xmac1_xmac_sr11 0x0016182CU
#define Adr_xmac2_xmac_sr11 0x0016282CU
#define Adr_xmac3_xmac_sr11 0x0016382CU

#define MSK_xmac_sr11_SR11 0x0000ffffU // [15:0]
#define SRT_xmac_sr11_SR11 0           

enum {
	BFW_xmac_sr11_SR11      = 16, // [15:0]
	BFW_xmac_sr11_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR11_BIT_Ttag {
	unsigned int SR11      : BFW_xmac_sr11_SR11;      // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr11_reserved1; // reserved
} XMAC_SR11_BIT_T;

typedef union {
	unsigned int    val;
	XMAC_SR11_BIT_T bf;
} XMAC_SR11_T;

// ---------------------------------------------------------------------
// Register xmac_sr12
// => Shared Work Register 12 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr12   0x00000830U
#define Adr_xmac0_xmac_sr12 0x00160830U
#define Adr_xmac1_xmac_sr12 0x00161830U
#define Adr_xmac2_xmac_sr12 0x00162830U
#define Adr_xmac3_xmac_sr12 0x00163830U

#define MSK_xmac_sr12_SR12 0x0000ffffU // [15:0]
#define SRT_xmac_sr12_SR12 0           

enum {
	BFW_xmac_sr12_SR12      = 16, // [15:0]
	BFW_xmac_sr12_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR12_BIT_Ttag {
	unsigned int SR12      : BFW_xmac_sr12_SR12;      // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr12_reserved1; // reserved
} XMAC_SR12_BIT_T;

typedef union {
	unsigned int    val;
	XMAC_SR12_BIT_T bf;
} XMAC_SR12_T;

// ---------------------------------------------------------------------
// Register xmac_sr13
// => Shared Work Register 13 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr13   0x00000834U
#define Adr_xmac0_xmac_sr13 0x00160834U
#define Adr_xmac1_xmac_sr13 0x00161834U
#define Adr_xmac2_xmac_sr13 0x00162834U
#define Adr_xmac3_xmac_sr13 0x00163834U

#define MSK_xmac_sr13_SR13 0x0000ffffU // [15:0]
#define SRT_xmac_sr13_SR13 0           

enum {
	BFW_xmac_sr13_SR13      = 16, // [15:0]
	BFW_xmac_sr13_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR13_BIT_Ttag {
	unsigned int SR13      : BFW_xmac_sr13_SR13;      // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr13_reserved1; // reserved
} XMAC_SR13_BIT_T;

typedef union {
	unsigned int    val;
	XMAC_SR13_BIT_T bf;
} XMAC_SR13_T;

// ---------------------------------------------------------------------
// Register xmac_sr14
// => Shared Work Register 14 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr14   0x00000838U
#define Adr_xmac0_xmac_sr14 0x00160838U
#define Adr_xmac1_xmac_sr14 0x00161838U
#define Adr_xmac2_xmac_sr14 0x00162838U
#define Adr_xmac3_xmac_sr14 0x00163838U

#define MSK_xmac_sr14_SR14 0x0000ffffU // [15:0]
#define SRT_xmac_sr14_SR14 0           

enum {
	BFW_xmac_sr14_SR14      = 16, // [15:0]
	BFW_xmac_sr14_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR14_BIT_Ttag {
	unsigned int SR14      : BFW_xmac_sr14_SR14;      // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr14_reserved1; // reserved
} XMAC_SR14_BIT_T;

typedef union {
	unsigned int    val;
	XMAC_SR14_BIT_T bf;
} XMAC_SR14_T;

// ---------------------------------------------------------------------
// Register xmac_sr15
// => Shared Work Register 15 accessible by all xMACs and xPECs
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sr15   0x0000083CU
#define Adr_xmac0_xmac_sr15 0x0016083CU
#define Adr_xmac1_xmac_sr15 0x0016183CU
#define Adr_xmac2_xmac_sr15 0x0016283CU
#define Adr_xmac3_xmac_sr15 0x0016383CU

#define MSK_xmac_sr15_SR15 0x0000ffffU // [15:0]
#define SRT_xmac_sr15_SR15 0           

enum {
	BFW_xmac_sr15_SR15      = 16, // [15:0]
	BFW_xmac_sr15_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SR15_BIT_Ttag {
	unsigned int SR15      : BFW_xmac_sr15_SR15;      // Shared Register 
	unsigned int reserved1 : BFW_xmac_sr15_reserved1; // reserved
} XMAC_SR15_BIT_T;

typedef union {
	unsigned int    val;
	XMAC_SR15_BIT_T bf;
} XMAC_SR15_T;

// ---------------------------------------------------------------------
// Register xmac_status_shared0
// => xMAC0 Shared Status Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_status_shared0   0x00000840U
#define Adr_xmac0_xmac_status_shared0 0x00160840U
#define Adr_xmac1_xmac_status_shared0 0x00161840U
#define Adr_xmac2_xmac_status_shared0 0x00162840U
#define Adr_xmac3_xmac_status_shared0 0x00163840U

#define MSK_xmac_status_shared0_gpio0_in  0x00000001U // [0]
#define SRT_xmac_status_shared0_gpio0_in  0           
#define MSK_xmac_status_shared0_gpio1_in  0x00000002U // [1]
#define SRT_xmac_status_shared0_gpio1_in  1           
#define MSK_xmac_status_shared0_rx_rdy    0x00000004U // [2]
#define SRT_xmac_status_shared0_rx_rdy    2           
#define MSK_xmac_status_shared0_rx_ovf    0x00000008U // [3]
#define SRT_xmac_status_shared0_rx_ovf    3           
#define MSK_xmac_status_shared0_tx_nxt    0x00000010U // [4]
#define SRT_xmac_status_shared0_tx_nxt    4           
#define MSK_xmac_status_shared0_tx_ufl    0x00000020U // [5]
#define SRT_xmac_status_shared0_tx_ufl    5           
#define MSK_xmac_status_shared0_utx_empty 0x00000040U // [6]
#define SRT_xmac_status_shared0_utx_empty 6           
#define MSK_xmac_status_shared0_brec      0x00000080U // [7]
#define SRT_xmac_status_shared0_brec      7           
#define MSK_xmac_status_shared0_btran     0x00000100U // [8]
#define SRT_xmac_status_shared0_btran     8           
#define MSK_xmac_status_shared0_stat_rpu  0x00000200U // [9]
#define SRT_xmac_status_shared0_stat_rpu  9           
#define MSK_xmac_status_shared0_stat_tpu  0x00000400U // [10]
#define SRT_xmac_status_shared0_stat_tpu  10          
#define MSK_xmac_status_shared0_phy_led0  0x00001000U // [12]
#define SRT_xmac_status_shared0_phy_led0  12          
#define MSK_xmac_status_shared0_phy_led1  0x00002000U // [13]
#define SRT_xmac_status_shared0_phy_led1  13          
#define MSK_xmac_status_shared0_phy_led2  0x00004000U // [14]
#define SRT_xmac_status_shared0_phy_led2  14          
#define MSK_xmac_status_shared0_phy_led3  0x00008000U // [15]
#define SRT_xmac_status_shared0_phy_led3  15          

enum {
	BFW_xmac_status_shared0_gpio0_in  = 1,  // [0]
	BFW_xmac_status_shared0_gpio1_in  = 1,  // [1]
	BFW_xmac_status_shared0_rx_rdy    = 1,  // [2]
	BFW_xmac_status_shared0_rx_ovf    = 1,  // [3]
	BFW_xmac_status_shared0_tx_nxt    = 1,  // [4]
	BFW_xmac_status_shared0_tx_ufl    = 1,  // [5]
	BFW_xmac_status_shared0_utx_empty = 1,  // [6]
	BFW_xmac_status_shared0_brec      = 1,  // [7]
	BFW_xmac_status_shared0_btran     = 1,  // [8]
	BFW_xmac_status_shared0_stat_rpu  = 1,  // [9]
	BFW_xmac_status_shared0_stat_tpu  = 1,  // [10]
	BFW_xmac_status_shared0_reserved1 = 1,  // [11]
	BFW_xmac_status_shared0_phy_led0  = 1,  // [12]
	BFW_xmac_status_shared0_phy_led1  = 1,  // [13]
	BFW_xmac_status_shared0_phy_led2  = 1,  // [14]
	BFW_xmac_status_shared0_phy_led3  = 1,  // [15]
	BFW_xmac_status_shared0_reserved2 = 16  // [31:16]
};

typedef struct XMAC_STATUS_SHARED0_BIT_Ttag {
	unsigned int gpio0_in  : BFW_xmac_status_shared0_gpio0_in;  // value at external gpio1 pin
	unsigned int gpio1_in  : BFW_xmac_status_shared0_gpio1_in;  // value at external gpio2 pin
	unsigned int rx_rdy    : BFW_xmac_status_shared0_rx_rdy;    // received bytes are valid at output of URX_FIFO
	unsigned int rx_ovf    : BFW_xmac_status_shared0_rx_ovf;    // receive overflow (too much data in URX_FIFO)
	unsigned int tx_nxt    : BFW_xmac_status_shared0_tx_nxt;    // put next tx_word to UTX_FIFO: at least one entry of UTX_FIFO is empty
	unsigned int tx_ufl    : BFW_xmac_status_shared0_tx_ufl;    // transmit underflow (not enough data in UTX_FIFO)
	unsigned int utx_empty : BFW_xmac_status_shared0_utx_empty; // UTX_FIFO is empty
	unsigned int brec      : BFW_xmac_status_shared0_brec;      // bit_received (active for 1 cc)
	unsigned int btran     : BFW_xmac_status_shared0_btran;     // bit_transmitted (active for 1 cc)
	unsigned int stat_rpu  : BFW_xmac_status_shared0_stat_rpu;  // set and reset by RPU command bits
	unsigned int stat_tpu  : BFW_xmac_status_shared0_stat_tpu;  // set and reset by TPU command bits
	unsigned int reserved1 : BFW_xmac_status_shared0_reserved1; // reserved
	unsigned int phy_led0  : BFW_xmac_status_shared0_phy_led0;  // Internal Phy0 LED0, usually link_status
	unsigned int phy_led1  : BFW_xmac_status_shared0_phy_led1;  // Internal Phy0 LED1, usually activity
	unsigned int phy_led2  : BFW_xmac_status_shared0_phy_led2;  // Internal Phy0 LED2, usually speed100
	unsigned int phy_led3  : BFW_xmac_status_shared0_phy_led3;  // Internal Phy0 LED3, usually full_duplex
	unsigned int reserved2 : BFW_xmac_status_shared0_reserved2; // reserved
} XMAC_STATUS_SHARED0_BIT_T;

typedef union {
	unsigned int              val;
	XMAC_STATUS_SHARED0_BIT_T bf;
} XMAC_STATUS_SHARED0_T;

// ---------------------------------------------------------------------
// Register xmac_config_shared0
// => xMAC0 Shared Config Register
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_config_shared0   0x00000844U
#define Adr_xmac0_xmac_config_shared0 0x00160844U
#define Adr_xmac1_xmac_config_shared0 0x00161844U
#define Adr_xmac2_xmac_config_shared0 0x00162844U
#define Adr_xmac3_xmac_config_shared0 0x00163844U

#define MSK_xmac_config_shared0_rx_nof_bits   0x0000000fU // [3:0]
#define SRT_xmac_config_shared0_rx_nof_bits   0           
#define MSK_xmac_config_shared0_tx_nof_bits   0x000000f0U // [7:4]
#define SRT_xmac_config_shared0_tx_nof_bits   4           
#define MSK_xmac_config_shared0_rx_shift_lr   0x00000100U // [8]
#define SRT_xmac_config_shared0_rx_shift_lr   8           
#define MSK_xmac_config_shared0_tx_shift_lr   0x00000200U // [9]
#define SRT_xmac_config_shared0_tx_shift_lr   9           
#define MSK_xmac_config_shared0_reset_rx_fifo 0x00000400U // [10]
#define SRT_xmac_config_shared0_reset_rx_fifo 10          
#define MSK_xmac_config_shared0_reset_tx_fifo 0x00000800U // [11]
#define SRT_xmac_config_shared0_reset_tx_fifo 11          
#define MSK_xmac_config_shared0_gpio0_out     0x00001000U // [12]
#define SRT_xmac_config_shared0_gpio0_out     12          
#define MSK_xmac_config_shared0_gpio0_oe      0x00002000U // [13]
#define SRT_xmac_config_shared0_gpio0_oe      13          
#define MSK_xmac_config_shared0_gpio1_out     0x00004000U // [14]
#define SRT_xmac_config_shared0_gpio1_out     14          
#define MSK_xmac_config_shared0_gpio1_oe      0x00008000U // [15]
#define SRT_xmac_config_shared0_gpio1_oe      15          

enum {
	BFW_xmac_config_shared0_rx_nof_bits   = 4,  // [3:0]
	BFW_xmac_config_shared0_tx_nof_bits   = 4,  // [7:4]
	BFW_xmac_config_shared0_rx_shift_lr   = 1,  // [8]
	BFW_xmac_config_shared0_tx_shift_lr   = 1,  // [9]
	BFW_xmac_config_shared0_reset_rx_fifo = 1,  // [10]
	BFW_xmac_config_shared0_reset_tx_fifo = 1,  // [11]
	BFW_xmac_config_shared0_gpio0_out     = 1,  // [12]
	BFW_xmac_config_shared0_gpio0_oe      = 1,  // [13]
	BFW_xmac_config_shared0_gpio1_out     = 1,  // [14]
	BFW_xmac_config_shared0_gpio1_oe      = 1,  // [15]
	BFW_xmac_config_shared0_reserved1     = 16  // [31:16]
};

typedef struct XMAC_CONFIG_SHARED0_BIT_Ttag {
	unsigned int rx_nof_bits   : BFW_xmac_config_shared0_rx_nof_bits;   // Number of bits written by SBU to rx-register, only used for rx_hw_count 
	unsigned int tx_nof_bits   : BFW_xmac_config_shared0_tx_nof_bits;   // Number of bits read by OBU from tx-register 
	unsigned int rx_shift_lr   : BFW_xmac_config_shared0_rx_shift_lr;   // 1: SBU reads incoming bits to position 0 of register rx and shifts rx left, 
	                                                        // 0: SBU reads incoming bits to position 15 of register rx and shifts rx right
	unsigned int tx_shift_lr   : BFW_xmac_config_shared0_tx_shift_lr;   // 1: OBU reads outgoing bits from position 15 of register tx and shifts tx left, 
	                                                        // 0: OBU reads outgoing bits from position 0 of register tx and shifts tx right
	unsigned int reset_rx_fifo : BFW_xmac_config_shared0_reset_rx_fifo; // reset URX_FIFO and rx_ovf bit inside status_shared register 
	unsigned int reset_tx_fifo : BFW_xmac_config_shared0_reset_tx_fifo; // reset UTX_FIFO and tx_ufl bit inside status_shared register 
	unsigned int gpio0_out     : BFW_xmac_config_shared0_gpio0_out;     // General Purpose IO 0 output 
	unsigned int gpio0_oe      : BFW_xmac_config_shared0_gpio0_oe;      // General Purpose IO 0 output enable 
	unsigned int gpio1_out     : BFW_xmac_config_shared0_gpio1_out;     // General Purpose IO 1 output 
	unsigned int gpio1_oe      : BFW_xmac_config_shared0_gpio1_oe;      // General Purpose IO 1 output enable 
	unsigned int reserved1     : BFW_xmac_config_shared0_reserved1;     // reserved
} XMAC_CONFIG_SHARED0_BIT_T;

typedef union {
	unsigned int              val;
	XMAC_CONFIG_SHARED0_BIT_T bf;
} XMAC_CONFIG_SHARED0_T;

// ---------------------------------------------------------------------
// Register xmac_status_shared1
// => xMAC1 Shared Status Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_status_shared1   0x00000848U
#define Adr_xmac0_xmac_status_shared1 0x00160848U
#define Adr_xmac1_xmac_status_shared1 0x00161848U
#define Adr_xmac2_xmac_status_shared1 0x00162848U
#define Adr_xmac3_xmac_status_shared1 0x00163848U

#define MSK_xmac_status_shared1_gpio0_in  0x00000001U // [0]
#define SRT_xmac_status_shared1_gpio0_in  0           
#define MSK_xmac_status_shared1_gpio1_in  0x00000002U // [1]
#define SRT_xmac_status_shared1_gpio1_in  1           
#define MSK_xmac_status_shared1_rx_rdy    0x00000004U // [2]
#define SRT_xmac_status_shared1_rx_rdy    2           
#define MSK_xmac_status_shared1_rx_ovf    0x00000008U // [3]
#define SRT_xmac_status_shared1_rx_ovf    3           
#define MSK_xmac_status_shared1_tx_nxt    0x00000010U // [4]
#define SRT_xmac_status_shared1_tx_nxt    4           
#define MSK_xmac_status_shared1_tx_ufl    0x00000020U // [5]
#define SRT_xmac_status_shared1_tx_ufl    5           
#define MSK_xmac_status_shared1_utx_empty 0x00000040U // [6]
#define SRT_xmac_status_shared1_utx_empty 6           
#define MSK_xmac_status_shared1_brec      0x00000080U // [7]
#define SRT_xmac_status_shared1_brec      7           
#define MSK_xmac_status_shared1_btran     0x00000100U // [8]
#define SRT_xmac_status_shared1_btran     8           
#define MSK_xmac_status_shared1_stat_rpu  0x00000200U // [9]
#define SRT_xmac_status_shared1_stat_rpu  9           
#define MSK_xmac_status_shared1_stat_tpu  0x00000400U // [10]
#define SRT_xmac_status_shared1_stat_tpu  10          
#define MSK_xmac_status_shared1_phy_led0  0x00001000U // [12]
#define SRT_xmac_status_shared1_phy_led0  12          
#define MSK_xmac_status_shared1_phy_led1  0x00002000U // [13]
#define SRT_xmac_status_shared1_phy_led1  13          
#define MSK_xmac_status_shared1_phy_led2  0x00004000U // [14]
#define SRT_xmac_status_shared1_phy_led2  14          
#define MSK_xmac_status_shared1_phy_led3  0x00008000U // [15]
#define SRT_xmac_status_shared1_phy_led3  15          

enum {
	BFW_xmac_status_shared1_gpio0_in  = 1,  // [0]
	BFW_xmac_status_shared1_gpio1_in  = 1,  // [1]
	BFW_xmac_status_shared1_rx_rdy    = 1,  // [2]
	BFW_xmac_status_shared1_rx_ovf    = 1,  // [3]
	BFW_xmac_status_shared1_tx_nxt    = 1,  // [4]
	BFW_xmac_status_shared1_tx_ufl    = 1,  // [5]
	BFW_xmac_status_shared1_utx_empty = 1,  // [6]
	BFW_xmac_status_shared1_brec      = 1,  // [7]
	BFW_xmac_status_shared1_btran     = 1,  // [8]
	BFW_xmac_status_shared1_stat_rpu  = 1,  // [9]
	BFW_xmac_status_shared1_stat_tpu  = 1,  // [10]
	BFW_xmac_status_shared1_reserved1 = 1,  // [11]
	BFW_xmac_status_shared1_phy_led0  = 1,  // [12]
	BFW_xmac_status_shared1_phy_led1  = 1,  // [13]
	BFW_xmac_status_shared1_phy_led2  = 1,  // [14]
	BFW_xmac_status_shared1_phy_led3  = 1,  // [15]
	BFW_xmac_status_shared1_reserved2 = 16  // [31:16]
};

typedef struct XMAC_STATUS_SHARED1_BIT_Ttag {
	unsigned int gpio0_in  : BFW_xmac_status_shared1_gpio0_in;  // value at external gpio1 pin
	unsigned int gpio1_in  : BFW_xmac_status_shared1_gpio1_in;  // value at external gpio2 pin
	unsigned int rx_rdy    : BFW_xmac_status_shared1_rx_rdy;    // received bytes are valid at output of URX_FIFO
	unsigned int rx_ovf    : BFW_xmac_status_shared1_rx_ovf;    // receive overflow (too much data in URX_FIFO)
	unsigned int tx_nxt    : BFW_xmac_status_shared1_tx_nxt;    // put next tx_word to UTX_FIFO: at least one entry of UTX_FIFO is empty
	unsigned int tx_ufl    : BFW_xmac_status_shared1_tx_ufl;    // transmit underflow (not enough data in UTX_FIFO)
	unsigned int utx_empty : BFW_xmac_status_shared1_utx_empty; // UTX_FIFO is empty
	unsigned int brec      : BFW_xmac_status_shared1_brec;      // bit_received (active for 1 cc)
	unsigned int btran     : BFW_xmac_status_shared1_btran;     // bit_transmitted (active for 1 cc)
	unsigned int stat_rpu  : BFW_xmac_status_shared1_stat_rpu;  // set and reset by RPU command bits
	unsigned int stat_tpu  : BFW_xmac_status_shared1_stat_tpu;  // set and reset by TPU command bits
	unsigned int reserved1 : BFW_xmac_status_shared1_reserved1; // reserved
	unsigned int phy_led0  : BFW_xmac_status_shared1_phy_led0;  // Internal Phy1 LED0, usually link_status
	unsigned int phy_led1  : BFW_xmac_status_shared1_phy_led1;  // Internal Phy1 LED1, usually activity
	unsigned int phy_led2  : BFW_xmac_status_shared1_phy_led2;  // Internal Phy1 LED2, usually speed100
	unsigned int phy_led3  : BFW_xmac_status_shared1_phy_led3;  // Internal Phy1 LED3, usually full_duplex
	unsigned int reserved2 : BFW_xmac_status_shared1_reserved2; // reserved
} XMAC_STATUS_SHARED1_BIT_T;

typedef union {
	unsigned int              val;
	XMAC_STATUS_SHARED1_BIT_T bf;
} XMAC_STATUS_SHARED1_T;

// ---------------------------------------------------------------------
// Register xmac_config_shared1
// => xMAC1 Shared Config Register
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_config_shared1   0x0000084CU
#define Adr_xmac0_xmac_config_shared1 0x0016084CU
#define Adr_xmac1_xmac_config_shared1 0x0016184CU
#define Adr_xmac2_xmac_config_shared1 0x0016284CU
#define Adr_xmac3_xmac_config_shared1 0x0016384CU

#define MSK_xmac_config_shared1_rx_nof_bits   0x0000000fU // [3:0]
#define SRT_xmac_config_shared1_rx_nof_bits   0           
#define MSK_xmac_config_shared1_tx_nof_bits   0x000000f0U // [7:4]
#define SRT_xmac_config_shared1_tx_nof_bits   4           
#define MSK_xmac_config_shared1_rx_shift_lr   0x00000100U // [8]
#define SRT_xmac_config_shared1_rx_shift_lr   8           
#define MSK_xmac_config_shared1_tx_shift_lr   0x00000200U // [9]
#define SRT_xmac_config_shared1_tx_shift_lr   9           
#define MSK_xmac_config_shared1_reset_rx_fifo 0x00000400U // [10]
#define SRT_xmac_config_shared1_reset_rx_fifo 10          
#define MSK_xmac_config_shared1_reset_tx_fifo 0x00000800U // [11]
#define SRT_xmac_config_shared1_reset_tx_fifo 11          
#define MSK_xmac_config_shared1_gpio0_out     0x00001000U // [12]
#define SRT_xmac_config_shared1_gpio0_out     12          
#define MSK_xmac_config_shared1_gpio0_oe      0x00002000U // [13]
#define SRT_xmac_config_shared1_gpio0_oe      13          
#define MSK_xmac_config_shared1_gpio1_out     0x00004000U // [14]
#define SRT_xmac_config_shared1_gpio1_out     14          
#define MSK_xmac_config_shared1_gpio1_oe      0x00008000U // [15]
#define SRT_xmac_config_shared1_gpio1_oe      15          

enum {
	BFW_xmac_config_shared1_rx_nof_bits   = 4,  // [3:0]
	BFW_xmac_config_shared1_tx_nof_bits   = 4,  // [7:4]
	BFW_xmac_config_shared1_rx_shift_lr   = 1,  // [8]
	BFW_xmac_config_shared1_tx_shift_lr   = 1,  // [9]
	BFW_xmac_config_shared1_reset_rx_fifo = 1,  // [10]
	BFW_xmac_config_shared1_reset_tx_fifo = 1,  // [11]
	BFW_xmac_config_shared1_gpio0_out     = 1,  // [12]
	BFW_xmac_config_shared1_gpio0_oe      = 1,  // [13]
	BFW_xmac_config_shared1_gpio1_out     = 1,  // [14]
	BFW_xmac_config_shared1_gpio1_oe      = 1,  // [15]
	BFW_xmac_config_shared1_reserved1     = 16  // [31:16]
};

typedef struct XMAC_CONFIG_SHARED1_BIT_Ttag {
	unsigned int rx_nof_bits   : BFW_xmac_config_shared1_rx_nof_bits;   // Number of bits written by SBU to rx-register, only used for rx_hw_count 
	unsigned int tx_nof_bits   : BFW_xmac_config_shared1_tx_nof_bits;   // Number of bits read by OBU from tx-register 
	unsigned int rx_shift_lr   : BFW_xmac_config_shared1_rx_shift_lr;   // 1: SBU reads incoming bits to position 0 of register rx and shifts rx left, 
	                                                        // 0: SBU reads incoming bits to position 15 of register rx and shifts rx right
	unsigned int tx_shift_lr   : BFW_xmac_config_shared1_tx_shift_lr;   // 1: OBU reads outgoing bits from position 15 of register tx and shifts tx left, 
	                                                        // 0: OBU reads outgoing bits from position 0 of register tx and shifts tx right
	unsigned int reset_rx_fifo : BFW_xmac_config_shared1_reset_rx_fifo; // reset URX_FIFO and rx_ovf bit inside status_shared register 
	unsigned int reset_tx_fifo : BFW_xmac_config_shared1_reset_tx_fifo; // reset UTX_FIFO and tx_ufl bit inside status_shared register 
	unsigned int gpio0_out     : BFW_xmac_config_shared1_gpio0_out;     // General Purpose IO 0 output 
	unsigned int gpio0_oe      : BFW_xmac_config_shared1_gpio0_oe;      // General Purpose IO 0 output enable 
	unsigned int gpio1_out     : BFW_xmac_config_shared1_gpio1_out;     // General Purpose IO 1 output 
	unsigned int gpio1_oe      : BFW_xmac_config_shared1_gpio1_oe;      // General Purpose IO 1 output enable 
	unsigned int reserved1     : BFW_xmac_config_shared1_reserved1;     // reserved
} XMAC_CONFIG_SHARED1_BIT_T;

typedef union {
	unsigned int              val;
	XMAC_CONFIG_SHARED1_BIT_T bf;
} XMAC_CONFIG_SHARED1_T;

// ---------------------------------------------------------------------
// Register xmac_status_shared2
// => xMAC2 Shared Status Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_status_shared2   0x00000850U
#define Adr_xmac0_xmac_status_shared2 0x00160850U
#define Adr_xmac1_xmac_status_shared2 0x00161850U
#define Adr_xmac2_xmac_status_shared2 0x00162850U
#define Adr_xmac3_xmac_status_shared2 0x00163850U

#define MSK_xmac_status_shared2_gpio0_in  0x00000001U // [0]
#define SRT_xmac_status_shared2_gpio0_in  0           
#define MSK_xmac_status_shared2_gpio1_in  0x00000002U // [1]
#define SRT_xmac_status_shared2_gpio1_in  1           
#define MSK_xmac_status_shared2_rx_rdy    0x00000004U // [2]
#define SRT_xmac_status_shared2_rx_rdy    2           
#define MSK_xmac_status_shared2_rx_ovf    0x00000008U // [3]
#define SRT_xmac_status_shared2_rx_ovf    3           
#define MSK_xmac_status_shared2_tx_nxt    0x00000010U // [4]
#define SRT_xmac_status_shared2_tx_nxt    4           
#define MSK_xmac_status_shared2_tx_ufl    0x00000020U // [5]
#define SRT_xmac_status_shared2_tx_ufl    5           
#define MSK_xmac_status_shared2_utx_empty 0x00000040U // [6]
#define SRT_xmac_status_shared2_utx_empty 6           
#define MSK_xmac_status_shared2_brec      0x00000080U // [7]
#define SRT_xmac_status_shared2_brec      7           
#define MSK_xmac_status_shared2_btran     0x00000100U // [8]
#define SRT_xmac_status_shared2_btran     8           
#define MSK_xmac_status_shared2_stat_rpu  0x00000200U // [9]
#define SRT_xmac_status_shared2_stat_rpu  9           
#define MSK_xmac_status_shared2_stat_tpu  0x00000400U // [10]
#define SRT_xmac_status_shared2_stat_tpu  10          
#define MSK_xmac_status_shared2_phy_led0  0x00001000U // [12]
#define SRT_xmac_status_shared2_phy_led0  12          
#define MSK_xmac_status_shared2_phy_led1  0x00002000U // [13]
#define SRT_xmac_status_shared2_phy_led1  13          
#define MSK_xmac_status_shared2_phy_led2  0x00004000U // [14]
#define SRT_xmac_status_shared2_phy_led2  14          
#define MSK_xmac_status_shared2_phy_led3  0x00008000U // [15]
#define SRT_xmac_status_shared2_phy_led3  15          

enum {
	BFW_xmac_status_shared2_gpio0_in  = 1,  // [0]
	BFW_xmac_status_shared2_gpio1_in  = 1,  // [1]
	BFW_xmac_status_shared2_rx_rdy    = 1,  // [2]
	BFW_xmac_status_shared2_rx_ovf    = 1,  // [3]
	BFW_xmac_status_shared2_tx_nxt    = 1,  // [4]
	BFW_xmac_status_shared2_tx_ufl    = 1,  // [5]
	BFW_xmac_status_shared2_utx_empty = 1,  // [6]
	BFW_xmac_status_shared2_brec      = 1,  // [7]
	BFW_xmac_status_shared2_btran     = 1,  // [8]
	BFW_xmac_status_shared2_stat_rpu  = 1,  // [9]
	BFW_xmac_status_shared2_stat_tpu  = 1,  // [10]
	BFW_xmac_status_shared2_reserved1 = 1,  // [11]
	BFW_xmac_status_shared2_phy_led0  = 1,  // [12]
	BFW_xmac_status_shared2_phy_led1  = 1,  // [13]
	BFW_xmac_status_shared2_phy_led2  = 1,  // [14]
	BFW_xmac_status_shared2_phy_led3  = 1,  // [15]
	BFW_xmac_status_shared2_reserved2 = 16  // [31:16]
};

typedef struct XMAC_STATUS_SHARED2_BIT_Ttag {
	unsigned int gpio0_in  : BFW_xmac_status_shared2_gpio0_in;  // value at external gpio1 pin
	unsigned int gpio1_in  : BFW_xmac_status_shared2_gpio1_in;  // value at external gpio2 pin
	unsigned int rx_rdy    : BFW_xmac_status_shared2_rx_rdy;    // received bytes are valid at output of URX_FIFO
	unsigned int rx_ovf    : BFW_xmac_status_shared2_rx_ovf;    // receive overflow (too much data in URX_FIFO)
	unsigned int tx_nxt    : BFW_xmac_status_shared2_tx_nxt;    // put next tx_word to UTX_FIFO: at least one entry of UTX_FIFO is empty
	unsigned int tx_ufl    : BFW_xmac_status_shared2_tx_ufl;    // transmit underflow (not enough data in UTX_FIFO)
	unsigned int utx_empty : BFW_xmac_status_shared2_utx_empty; // UTX_FIFO is empty
	unsigned int brec      : BFW_xmac_status_shared2_brec;      // bit_received (active for 1 cc)
	unsigned int btran     : BFW_xmac_status_shared2_btran;     // bit_transmitted (active for 1 cc)
	unsigned int stat_rpu  : BFW_xmac_status_shared2_stat_rpu;  // set and reset by RPU command bits
	unsigned int stat_tpu  : BFW_xmac_status_shared2_stat_tpu;  // set and reset by TPU command bits
	unsigned int reserved1 : BFW_xmac_status_shared2_reserved1; // reserved
	unsigned int phy_led0  : BFW_xmac_status_shared2_phy_led0;  // not connected (zero)
	unsigned int phy_led1  : BFW_xmac_status_shared2_phy_led1;  // not connected (zero)
	unsigned int phy_led2  : BFW_xmac_status_shared2_phy_led2;  // not connected (zero)
	unsigned int phy_led3  : BFW_xmac_status_shared2_phy_led3;  // not connected (zero)
	unsigned int reserved2 : BFW_xmac_status_shared2_reserved2; // reserved
} XMAC_STATUS_SHARED2_BIT_T;

typedef union {
	unsigned int              val;
	XMAC_STATUS_SHARED2_BIT_T bf;
} XMAC_STATUS_SHARED2_T;

// ---------------------------------------------------------------------
// Register xmac_config_shared2
// => xMAC2 Shared Config Register
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_config_shared2   0x00000854U
#define Adr_xmac0_xmac_config_shared2 0x00160854U
#define Adr_xmac1_xmac_config_shared2 0x00161854U
#define Adr_xmac2_xmac_config_shared2 0x00162854U
#define Adr_xmac3_xmac_config_shared2 0x00163854U

#define MSK_xmac_config_shared2_rx_nof_bits   0x0000000fU // [3:0]
#define SRT_xmac_config_shared2_rx_nof_bits   0           
#define MSK_xmac_config_shared2_tx_nof_bits   0x000000f0U // [7:4]
#define SRT_xmac_config_shared2_tx_nof_bits   4           
#define MSK_xmac_config_shared2_rx_shift_lr   0x00000100U // [8]
#define SRT_xmac_config_shared2_rx_shift_lr   8           
#define MSK_xmac_config_shared2_tx_shift_lr   0x00000200U // [9]
#define SRT_xmac_config_shared2_tx_shift_lr   9           
#define MSK_xmac_config_shared2_reset_rx_fifo 0x00000400U // [10]
#define SRT_xmac_config_shared2_reset_rx_fifo 10          
#define MSK_xmac_config_shared2_reset_tx_fifo 0x00000800U // [11]
#define SRT_xmac_config_shared2_reset_tx_fifo 11          
#define MSK_xmac_config_shared2_gpio0_out     0x00001000U // [12]
#define SRT_xmac_config_shared2_gpio0_out     12          
#define MSK_xmac_config_shared2_gpio0_oe      0x00002000U // [13]
#define SRT_xmac_config_shared2_gpio0_oe      13          
#define MSK_xmac_config_shared2_gpio1_out     0x00004000U // [14]
#define SRT_xmac_config_shared2_gpio1_out     14          
#define MSK_xmac_config_shared2_gpio1_oe      0x00008000U // [15]
#define SRT_xmac_config_shared2_gpio1_oe      15          

enum {
	BFW_xmac_config_shared2_rx_nof_bits   = 4,  // [3:0]
	BFW_xmac_config_shared2_tx_nof_bits   = 4,  // [7:4]
	BFW_xmac_config_shared2_rx_shift_lr   = 1,  // [8]
	BFW_xmac_config_shared2_tx_shift_lr   = 1,  // [9]
	BFW_xmac_config_shared2_reset_rx_fifo = 1,  // [10]
	BFW_xmac_config_shared2_reset_tx_fifo = 1,  // [11]
	BFW_xmac_config_shared2_gpio0_out     = 1,  // [12]
	BFW_xmac_config_shared2_gpio0_oe      = 1,  // [13]
	BFW_xmac_config_shared2_gpio1_out     = 1,  // [14]
	BFW_xmac_config_shared2_gpio1_oe      = 1,  // [15]
	BFW_xmac_config_shared2_reserved1     = 16  // [31:16]
};

typedef struct XMAC_CONFIG_SHARED2_BIT_Ttag {
	unsigned int rx_nof_bits   : BFW_xmac_config_shared2_rx_nof_bits;   // Number of bits written by SBU to rx-register, only used for rx_hw_count 
	unsigned int tx_nof_bits   : BFW_xmac_config_shared2_tx_nof_bits;   // Number of bits read by OBU from tx-register 
	unsigned int rx_shift_lr   : BFW_xmac_config_shared2_rx_shift_lr;   // 1: SBU reads incoming bits to position 0 of register rx and shifts rx left, 
	                                                        // 0: SBU reads incoming bits to position 15 of register rx and shifts rx right
	unsigned int tx_shift_lr   : BFW_xmac_config_shared2_tx_shift_lr;   // 1: OBU reads outgoing bits from position 15 of register tx and shifts tx left, 
	                                                        // 0: OBU reads outgoing bits from position 0 of register tx and shifts tx right
	unsigned int reset_rx_fifo : BFW_xmac_config_shared2_reset_rx_fifo; // reset URX_FIFO and rx_ovf bit inside status_shared register 
	unsigned int reset_tx_fifo : BFW_xmac_config_shared2_reset_tx_fifo; // reset UTX_FIFO and tx_ufl bit inside status_shared register 
	unsigned int gpio0_out     : BFW_xmac_config_shared2_gpio0_out;     // General Purpose IO 0 output 
	unsigned int gpio0_oe      : BFW_xmac_config_shared2_gpio0_oe;      // General Purpose IO 0 output enable 
	unsigned int gpio1_out     : BFW_xmac_config_shared2_gpio1_out;     // General Purpose IO 1 output 
	unsigned int gpio1_oe      : BFW_xmac_config_shared2_gpio1_oe;      // General Purpose IO 1 output enable 
	unsigned int reserved1     : BFW_xmac_config_shared2_reserved1;     // reserved
} XMAC_CONFIG_SHARED2_BIT_T;

typedef union {
	unsigned int              val;
	XMAC_CONFIG_SHARED2_BIT_T bf;
} XMAC_CONFIG_SHARED2_T;

// ---------------------------------------------------------------------
// Register xmac_status_shared3
// => xMAC3 Shared Status Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_status_shared3   0x00000858U
#define Adr_xmac0_xmac_status_shared3 0x00160858U
#define Adr_xmac1_xmac_status_shared3 0x00161858U
#define Adr_xmac2_xmac_status_shared3 0x00162858U
#define Adr_xmac3_xmac_status_shared3 0x00163858U

#define MSK_xmac_status_shared3_gpio0_in  0x00000001U // [0]
#define SRT_xmac_status_shared3_gpio0_in  0           
#define MSK_xmac_status_shared3_gpio1_in  0x00000002U // [1]
#define SRT_xmac_status_shared3_gpio1_in  1           
#define MSK_xmac_status_shared3_rx_rdy    0x00000004U // [2]
#define SRT_xmac_status_shared3_rx_rdy    2           
#define MSK_xmac_status_shared3_rx_ovf    0x00000008U // [3]
#define SRT_xmac_status_shared3_rx_ovf    3           
#define MSK_xmac_status_shared3_tx_nxt    0x00000010U // [4]
#define SRT_xmac_status_shared3_tx_nxt    4           
#define MSK_xmac_status_shared3_tx_ufl    0x00000020U // [5]
#define SRT_xmac_status_shared3_tx_ufl    5           
#define MSK_xmac_status_shared3_utx_empty 0x00000040U // [6]
#define SRT_xmac_status_shared3_utx_empty 6           
#define MSK_xmac_status_shared3_brec      0x00000080U // [7]
#define SRT_xmac_status_shared3_brec      7           
#define MSK_xmac_status_shared3_btran     0x00000100U // [8]
#define SRT_xmac_status_shared3_btran     8           
#define MSK_xmac_status_shared3_stat_rpu  0x00000200U // [9]
#define SRT_xmac_status_shared3_stat_rpu  9           
#define MSK_xmac_status_shared3_stat_tpu  0x00000400U // [10]
#define SRT_xmac_status_shared3_stat_tpu  10          
#define MSK_xmac_status_shared3_phy_led0  0x00001000U // [12]
#define SRT_xmac_status_shared3_phy_led0  12          
#define MSK_xmac_status_shared3_phy_led1  0x00002000U // [13]
#define SRT_xmac_status_shared3_phy_led1  13          
#define MSK_xmac_status_shared3_phy_led2  0x00004000U // [14]
#define SRT_xmac_status_shared3_phy_led2  14          
#define MSK_xmac_status_shared3_phy_led3  0x00008000U // [15]
#define SRT_xmac_status_shared3_phy_led3  15          

enum {
	BFW_xmac_status_shared3_gpio0_in  = 1,  // [0]
	BFW_xmac_status_shared3_gpio1_in  = 1,  // [1]
	BFW_xmac_status_shared3_rx_rdy    = 1,  // [2]
	BFW_xmac_status_shared3_rx_ovf    = 1,  // [3]
	BFW_xmac_status_shared3_tx_nxt    = 1,  // [4]
	BFW_xmac_status_shared3_tx_ufl    = 1,  // [5]
	BFW_xmac_status_shared3_utx_empty = 1,  // [6]
	BFW_xmac_status_shared3_brec      = 1,  // [7]
	BFW_xmac_status_shared3_btran     = 1,  // [8]
	BFW_xmac_status_shared3_stat_rpu  = 1,  // [9]
	BFW_xmac_status_shared3_stat_tpu  = 1,  // [10]
	BFW_xmac_status_shared3_reserved1 = 1,  // [11]
	BFW_xmac_status_shared3_phy_led0  = 1,  // [12]
	BFW_xmac_status_shared3_phy_led1  = 1,  // [13]
	BFW_xmac_status_shared3_phy_led2  = 1,  // [14]
	BFW_xmac_status_shared3_phy_led3  = 1,  // [15]
	BFW_xmac_status_shared3_reserved2 = 16  // [31:16]
};

typedef struct XMAC_STATUS_SHARED3_BIT_Ttag {
	unsigned int gpio0_in  : BFW_xmac_status_shared3_gpio0_in;  // value at external gpio1 pin
	unsigned int gpio1_in  : BFW_xmac_status_shared3_gpio1_in;  // value at external gpio2 pin
	unsigned int rx_rdy    : BFW_xmac_status_shared3_rx_rdy;    // received bytes are valid at output of URX_FIFO
	unsigned int rx_ovf    : BFW_xmac_status_shared3_rx_ovf;    // receive overflow (too much data in URX_FIFO)
	unsigned int tx_nxt    : BFW_xmac_status_shared3_tx_nxt;    // put next tx_word to UTX_FIFO: at least one entry of UTX_FIFO is empty
	unsigned int tx_ufl    : BFW_xmac_status_shared3_tx_ufl;    // transmit underflow (not enough data in UTX_FIFO)
	unsigned int utx_empty : BFW_xmac_status_shared3_utx_empty; // UTX_FIFO is empty
	unsigned int brec      : BFW_xmac_status_shared3_brec;      // bit_received (active for 1 cc)
	unsigned int btran     : BFW_xmac_status_shared3_btran;     // bit_transmitted (active for 1 cc)
	unsigned int stat_rpu  : BFW_xmac_status_shared3_stat_rpu;  // set and reset by RPU command bits
	unsigned int stat_tpu  : BFW_xmac_status_shared3_stat_tpu;  // set and reset by TPU command bits
	unsigned int reserved1 : BFW_xmac_status_shared3_reserved1; // reserved
	unsigned int phy_led0  : BFW_xmac_status_shared3_phy_led0;  // not connected (zero)
	unsigned int phy_led1  : BFW_xmac_status_shared3_phy_led1;  // not connected (zero)
	unsigned int phy_led2  : BFW_xmac_status_shared3_phy_led2;  // not connected (zero)
	unsigned int phy_led3  : BFW_xmac_status_shared3_phy_led3;  // not connected (zero)
	unsigned int reserved2 : BFW_xmac_status_shared3_reserved2; // reserved
} XMAC_STATUS_SHARED3_BIT_T;

typedef union {
	unsigned int              val;
	XMAC_STATUS_SHARED3_BIT_T bf;
} XMAC_STATUS_SHARED3_T;

// ---------------------------------------------------------------------
// Register xmac_config_shared3
// => xMAC3 Shared Config Register
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_config_shared3   0x0000085CU
#define Adr_xmac0_xmac_config_shared3 0x0016085CU
#define Adr_xmac1_xmac_config_shared3 0x0016185CU
#define Adr_xmac2_xmac_config_shared3 0x0016285CU
#define Adr_xmac3_xmac_config_shared3 0x0016385CU

#define MSK_xmac_config_shared3_rx_nof_bits   0x0000000fU // [3:0]
#define SRT_xmac_config_shared3_rx_nof_bits   0           
#define MSK_xmac_config_shared3_tx_nof_bits   0x000000f0U // [7:4]
#define SRT_xmac_config_shared3_tx_nof_bits   4           
#define MSK_xmac_config_shared3_rx_shift_lr   0x00000100U // [8]
#define SRT_xmac_config_shared3_rx_shift_lr   8           
#define MSK_xmac_config_shared3_tx_shift_lr   0x00000200U // [9]
#define SRT_xmac_config_shared3_tx_shift_lr   9           
#define MSK_xmac_config_shared3_reset_rx_fifo 0x00000400U // [10]
#define SRT_xmac_config_shared3_reset_rx_fifo 10          
#define MSK_xmac_config_shared3_reset_tx_fifo 0x00000800U // [11]
#define SRT_xmac_config_shared3_reset_tx_fifo 11          
#define MSK_xmac_config_shared3_gpio0_out     0x00001000U // [12]
#define SRT_xmac_config_shared3_gpio0_out     12          
#define MSK_xmac_config_shared3_gpio0_oe      0x00002000U // [13]
#define SRT_xmac_config_shared3_gpio0_oe      13          
#define MSK_xmac_config_shared3_gpio1_out     0x00004000U // [14]
#define SRT_xmac_config_shared3_gpio1_out     14          
#define MSK_xmac_config_shared3_gpio1_oe      0x00008000U // [15]
#define SRT_xmac_config_shared3_gpio1_oe      15          

enum {
	BFW_xmac_config_shared3_rx_nof_bits   = 4,  // [3:0]
	BFW_xmac_config_shared3_tx_nof_bits   = 4,  // [7:4]
	BFW_xmac_config_shared3_rx_shift_lr   = 1,  // [8]
	BFW_xmac_config_shared3_tx_shift_lr   = 1,  // [9]
	BFW_xmac_config_shared3_reset_rx_fifo = 1,  // [10]
	BFW_xmac_config_shared3_reset_tx_fifo = 1,  // [11]
	BFW_xmac_config_shared3_gpio0_out     = 1,  // [12]
	BFW_xmac_config_shared3_gpio0_oe      = 1,  // [13]
	BFW_xmac_config_shared3_gpio1_out     = 1,  // [14]
	BFW_xmac_config_shared3_gpio1_oe      = 1,  // [15]
	BFW_xmac_config_shared3_reserved1     = 16  // [31:16]
};

typedef struct XMAC_CONFIG_SHARED3_BIT_Ttag {
	unsigned int rx_nof_bits   : BFW_xmac_config_shared3_rx_nof_bits;   // Number of bits written by SBU to rx-register, only used for rx_hw_count 
	unsigned int tx_nof_bits   : BFW_xmac_config_shared3_tx_nof_bits;   // Number of bits read by OBU from tx-register 
	unsigned int rx_shift_lr   : BFW_xmac_config_shared3_rx_shift_lr;   // 1: SBU reads incoming bits to position 0 of register rx and shifts rx left, 
	                                                        // 0: SBU reads incoming bits to position 15 of register rx and shifts rx right
	unsigned int tx_shift_lr   : BFW_xmac_config_shared3_tx_shift_lr;   // 1: OBU reads outgoing bits from position 15 of register tx and shifts tx left, 
	                                                        // 0: OBU reads outgoing bits from position 0 of register tx and shifts tx right
	unsigned int reset_rx_fifo : BFW_xmac_config_shared3_reset_rx_fifo; // reset URX_FIFO and rx_ovf bit inside status_shared register 
	unsigned int reset_tx_fifo : BFW_xmac_config_shared3_reset_tx_fifo; // reset UTX_FIFO and tx_ufl bit inside status_shared register 
	unsigned int gpio0_out     : BFW_xmac_config_shared3_gpio0_out;     // General Purpose IO 0 output 
	unsigned int gpio0_oe      : BFW_xmac_config_shared3_gpio0_oe;      // General Purpose IO 0 output enable 
	unsigned int gpio1_out     : BFW_xmac_config_shared3_gpio1_out;     // General Purpose IO 1 output 
	unsigned int gpio1_oe      : BFW_xmac_config_shared3_gpio1_oe;      // General Purpose IO 1 output enable 
	unsigned int reserved1     : BFW_xmac_config_shared3_reserved1;     // reserved
} XMAC_CONFIG_SHARED3_BIT_T;

typedef union {
	unsigned int              val;
	XMAC_CONFIG_SHARED3_BIT_T bf;
} XMAC_CONFIG_SHARED3_T;

// ---------------------------------------------------------------------
// Register xmac_urx_utx0
// => xMAC0 URX/UTX Shared Register FIFO
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_urx_utx0   0x00000860U
#define Adr_xmac0_xmac_urx_utx0 0x00160860U
#define Adr_xmac1_xmac_urx_utx0 0x00161860U
#define Adr_xmac2_xmac_urx_utx0 0x00162860U
#define Adr_xmac3_xmac_urx_utx0 0x00163860U

#define MSK_xmac_urx_utx0_UTX_XMAC0  0x000000ffU // [7:0]
#define SRT_xmac_urx_utx0_UTX_XMAC0  0           
#define MSK_xmac_urx_utx0_upper_bits 0x0000ff00U // [15:8]
#define SRT_xmac_urx_utx0_upper_bits 8           

enum {
	BFW_xmac_urx_utx0_UTX_XMAC0  = 8,  // [7:0]
	BFW_xmac_urx_utx0_upper_bits = 8,  // [15:8]
	BFW_xmac_urx_utx0_reserved1  = 16  // [31:16]
};

typedef struct XMAC_URX_UTX0_BIT_Ttag {
	unsigned int UTX_XMAC0  : BFW_xmac_urx_utx0_UTX_XMAC0;  // read access:  Lastly received bits (output of URX_FIFO) 
	                                                        // write access: Bits to be transmitted next (input of UTX_FIFO)
	unsigned int upper_bits : BFW_xmac_urx_utx0_upper_bits; // FIFO is 8 bits wide only, thus the upper bits are always ignored (zero in case of read)
	unsigned int reserved1  : BFW_xmac_urx_utx0_reserved1;  // reserved
} XMAC_URX_UTX0_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_URX_UTX0_BIT_T bf;
} XMAC_URX_UTX0_T;

// ---------------------------------------------------------------------
// Register xmac_urx_utx1
// => xMAC1 URX/UTX Shared Register FIFO
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_urx_utx1   0x00000864U
#define Adr_xmac0_xmac_urx_utx1 0x00160864U
#define Adr_xmac1_xmac_urx_utx1 0x00161864U
#define Adr_xmac2_xmac_urx_utx1 0x00162864U
#define Adr_xmac3_xmac_urx_utx1 0x00163864U

#define MSK_xmac_urx_utx1_UTX_XMAC1  0x000000ffU // [7:0]
#define SRT_xmac_urx_utx1_UTX_XMAC1  0           
#define MSK_xmac_urx_utx1_upper_bits 0x0000ff00U // [15:8]
#define SRT_xmac_urx_utx1_upper_bits 8           

enum {
	BFW_xmac_urx_utx1_UTX_XMAC1  = 8,  // [7:0]
	BFW_xmac_urx_utx1_upper_bits = 8,  // [15:8]
	BFW_xmac_urx_utx1_reserved1  = 16  // [31:16]
};

typedef struct XMAC_URX_UTX1_BIT_Ttag {
	unsigned int UTX_XMAC1  : BFW_xmac_urx_utx1_UTX_XMAC1;  // read access:  Lastly received bits (output of URX_FIFO) 
	                                                        // write access: Bits to be transmitted next (input of UTX_FIFO)
	unsigned int upper_bits : BFW_xmac_urx_utx1_upper_bits; // FIFO is 8 bits wide only, thus the upper bits are always ignored (zero in case of read)
	unsigned int reserved1  : BFW_xmac_urx_utx1_reserved1;  // reserved
} XMAC_URX_UTX1_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_URX_UTX1_BIT_T bf;
} XMAC_URX_UTX1_T;

// ---------------------------------------------------------------------
// Register xmac_urx_utx2
// => xMAC2 URX/UTX Shared Register FIFO
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_urx_utx2   0x00000868U
#define Adr_xmac0_xmac_urx_utx2 0x00160868U
#define Adr_xmac1_xmac_urx_utx2 0x00161868U
#define Adr_xmac2_xmac_urx_utx2 0x00162868U
#define Adr_xmac3_xmac_urx_utx2 0x00163868U

#define MSK_xmac_urx_utx2_UTX_XMAC2  0x000000ffU // [7:0]
#define SRT_xmac_urx_utx2_UTX_XMAC2  0           
#define MSK_xmac_urx_utx2_upper_bits 0x0000ff00U // [15:8]
#define SRT_xmac_urx_utx2_upper_bits 8           

enum {
	BFW_xmac_urx_utx2_UTX_XMAC2  = 8,  // [7:0]
	BFW_xmac_urx_utx2_upper_bits = 8,  // [15:8]
	BFW_xmac_urx_utx2_reserved1  = 16  // [31:16]
};

typedef struct XMAC_URX_UTX2_BIT_Ttag {
	unsigned int UTX_XMAC2  : BFW_xmac_urx_utx2_UTX_XMAC2;  // read access:  Lastly received bits (output of URX_FIFO) 
	                                                        // write access: Bits to be transmitted next (input of UTX_FIFO)
	unsigned int upper_bits : BFW_xmac_urx_utx2_upper_bits; // FIFO is 8 bits wide only, thus the upper bits are always ignored (zero in case of read)
	unsigned int reserved1  : BFW_xmac_urx_utx2_reserved1;  // reserved
} XMAC_URX_UTX2_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_URX_UTX2_BIT_T bf;
} XMAC_URX_UTX2_T;

// ---------------------------------------------------------------------
// Register xmac_urx_utx3
// => xMAC3 URX/UTX Shared Register FIFO
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_urx_utx3   0x0000086CU
#define Adr_xmac0_xmac_urx_utx3 0x0016086CU
#define Adr_xmac1_xmac_urx_utx3 0x0016186CU
#define Adr_xmac2_xmac_urx_utx3 0x0016286CU
#define Adr_xmac3_xmac_urx_utx3 0x0016386CU

#define MSK_xmac_urx_utx3_UTX_XMAC3  0x000000ffU // [7:0]
#define SRT_xmac_urx_utx3_UTX_XMAC3  0           
#define MSK_xmac_urx_utx3_upper_bits 0x0000ff00U // [15:8]
#define SRT_xmac_urx_utx3_upper_bits 8           

enum {
	BFW_xmac_urx_utx3_UTX_XMAC3  = 8,  // [7:0]
	BFW_xmac_urx_utx3_upper_bits = 8,  // [15:8]
	BFW_xmac_urx_utx3_reserved1  = 16  // [31:16]
};

typedef struct XMAC_URX_UTX3_BIT_Ttag {
	unsigned int UTX_XMAC3  : BFW_xmac_urx_utx3_UTX_XMAC3;  // read access:  Lastly received bits (output of URX_FIFO) 
	                                                        // write access: Bits to be transmitted next (input of UTX_FIFO)
	unsigned int upper_bits : BFW_xmac_urx_utx3_upper_bits; // FIFO is 8 bits wide only, thus the upper bits are always ignored (zero in case of read)
	unsigned int reserved1  : BFW_xmac_urx_utx3_reserved1;  // reserved
} XMAC_URX_UTX3_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_URX_UTX3_BIT_T bf;
} XMAC_URX_UTX3_T;

// ---------------------------------------------------------------------
// Register xmac_urx
// => xMAC URX FIFO input
//    URX FIFO is part of xMAC. It can be read (output) by all xMACs and xPECs, but only written (input) by the xMAC it belongs to.
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_urx   0x00000870U
#define Adr_xmac0_xmac_urx 0x00160870U
#define Adr_xmac1_xmac_urx 0x00161870U
#define Adr_xmac2_xmac_urx 0x00162870U
#define Adr_xmac3_xmac_urx 0x00163870U

#define MSK_xmac_urx_urx        0x000000ffU // [7:0]
#define SRT_xmac_urx_urx        0           
#define MSK_xmac_urx_upper_bits 0x0000ff00U // [15:8]
#define SRT_xmac_urx_upper_bits 8           

enum {
	BFW_xmac_urx_urx        = 8,  // [7:0]
	BFW_xmac_urx_upper_bits = 8,  // [15:8]
	BFW_xmac_urx_reserved1  = 16  // [31:16]
};

typedef struct XMAC_URX_BIT_Ttag {
	unsigned int urx        : BFW_xmac_urx_urx;        // Lastly received bits to be transmitted to xPEC (input of URX_FIFO)
	unsigned int upper_bits : BFW_xmac_urx_upper_bits; // FIFO is 8 bits wide only, thus the upper bits are always ignored
	unsigned int reserved1  : BFW_xmac_urx_reserved1;  // reserved
} XMAC_URX_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_URX_BIT_T bf;
} XMAC_URX_T;

// ---------------------------------------------------------------------
// Register xmac_utx
// => xMAC UTX FIFO output
//    UTX FIFO is part of xMAC. It can be written (input) by all xMACs and xPECs, but only read (output) by the xMAC it belongs to.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_utx   0x00000874U
#define Adr_xmac0_xmac_utx 0x00160874U
#define Adr_xmac1_xmac_utx 0x00161874U
#define Adr_xmac2_xmac_utx 0x00162874U
#define Adr_xmac3_xmac_utx 0x00163874U

#define MSK_xmac_utx_utx        0x000000ffU // [7:0]
#define SRT_xmac_utx_utx        0           
#define MSK_xmac_utx_upper_bits 0x0000ff00U // [15:8]
#define SRT_xmac_utx_upper_bits 8           

enum {
	BFW_xmac_utx_utx        = 8,  // [7:0]
	BFW_xmac_utx_upper_bits = 8,  // [15:8]
	BFW_xmac_utx_reserved1  = 16  // [31:16]
};

typedef struct XMAC_UTX_BIT_Ttag {
	unsigned int utx        : BFW_xmac_utx_utx;        // Bits to be transmitted next (output of UTX_FIFO) 
	                                                        // read as src2 allows multiple reads, only read as src1 will change FIFO state
	unsigned int upper_bits : BFW_xmac_utx_upper_bits; // FIFO is 8 bits wide only, thus the upper bits are always zero 
	unsigned int reserved1  : BFW_xmac_utx_reserved1;  // reserved
} XMAC_UTX_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_UTX_BIT_T bf;
} XMAC_UTX_T;

// ---------------------------------------------------------------------
// Register xmac_rx
// => xMAC RX Register
//    Sampled bits from SBU are collected in this register,
//    i.e. if a new bit arrives from SBU (sync), other bits are shifted (direction programmable).
//    Same behavior in MII-Modes (4 bits arrive in parallel and the other bits are shifted by 4).
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rx   0x00000878U
#define Adr_xmac0_xmac_rx 0x00160878U
#define Adr_xmac1_xmac_rx 0x00161878U
#define Adr_xmac2_xmac_rx 0x00162878U
#define Adr_xmac3_xmac_rx 0x00163878U

#define MSK_xmac_rx_rx 0x0000ffffU // [15:0]
#define SRT_xmac_rx_rx 0           

enum {
	BFW_xmac_rx_rx        = 16, // [15:0]
	BFW_xmac_rx_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RX_BIT_Ttag {
	unsigned int rx        : BFW_xmac_rx_rx;        // 16 previously received bits
	unsigned int reserved1 : BFW_xmac_rx_reserved1; // reserved
} XMAC_RX_BIT_T;

typedef union {
	unsigned int  val;
	XMAC_RX_BIT_T bf;
} XMAC_RX_T;

// ---------------------------------------------------------------------
// Register xmac_rx_hw
// => xMAC RX_HW Register
//    rx_hw bit in RPU-code writes actually received bit from rx to this register.
//    Useful in case of bitwise format, to collect source bits from raw input bitstream (e.g. in HDLC-coding).
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rx_hw   0x0000087CU
#define Adr_xmac0_xmac_rx_hw 0x0016087CU
#define Adr_xmac1_xmac_rx_hw 0x0016187CU
#define Adr_xmac2_xmac_rx_hw 0x0016287CU
#define Adr_xmac3_xmac_rx_hw 0x0016387CU

#define MSK_xmac_rx_hw_rx_hw 0x0000ffffU // [15:0]
#define SRT_xmac_rx_hw_rx_hw 0           

enum {
	BFW_xmac_rx_hw_rx_hw     = 16, // [15:0]
	BFW_xmac_rx_hw_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RX_HW_BIT_Ttag {
	unsigned int rx_hw     : BFW_xmac_rx_hw_rx_hw;     // collected source bits from raw input bitstream 
	                                                        // same orientation of bits as in rx register (depending on rx_shift_lr)
	unsigned int reserved1 : BFW_xmac_rx_hw_reserved1; // reserved
} XMAC_RX_HW_BIT_T;

typedef union {
	unsigned int     val;
	XMAC_RX_HW_BIT_T bf;
} XMAC_RX_HW_T;

// ---------------------------------------------------------------------
// Register xmac_rx_hw_count
// => xMAC RX_HW_COUNT Register
//    Counts bits collected by rx_hw bit RPU-code.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rx_hw_count   0x00000880U
#define Adr_xmac0_xmac_rx_hw_count 0x00160880U
#define Adr_xmac1_xmac_rx_hw_count 0x00161880U
#define Adr_xmac2_xmac_rx_hw_count 0x00162880U
#define Adr_xmac3_xmac_rx_hw_count 0x00163880U

#define MSK_xmac_rx_hw_count_rx_hw_count 0x0000ffffU // [15:0]
#define SRT_xmac_rx_hw_count_rx_hw_count 0           

enum {
	BFW_xmac_rx_hw_count_rx_hw_count = 16, // [15:0]
	BFW_xmac_rx_hw_count_reserved1   = 16  // [31:16]
};

typedef struct XMAC_RX_HW_COUNT_BIT_Ttag {
	unsigned int rx_hw_count : BFW_xmac_rx_hw_count_rx_hw_count; // counts down with rx_hw in RPU-code 
	                                                        // (from rx_nof_bits-1 to 0, 16-bit downcounter if rx_nof_bits = 0)
	unsigned int reserved1   : BFW_xmac_rx_hw_count_reserved1;   // reserved
} XMAC_RX_HW_COUNT_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_RX_HW_COUNT_BIT_T bf;
} XMAC_RX_HW_COUNT_T;

// ---------------------------------------------------------------------
// Register xmac_tx
// => xMAC TX Register
//    Transmitted bits read automatically by OBU from this register,
//    i.e. if a bit is send (sync), other bits are rotated accordingly (direction programmable).
//    Same behavior in MII-Modes (4 bits arrive in parallel and the other bits are rotated by 4).
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx   0x00000884U
#define Adr_xmac0_xmac_tx 0x00160884U
#define Adr_xmac1_xmac_tx 0x00161884U
#define Adr_xmac2_xmac_tx 0x00162884U
#define Adr_xmac3_xmac_tx 0x00163884U

#define MSK_xmac_tx_tx0  0x00000001U // [0]
#define SRT_xmac_tx_tx0  0           
#define MSK_xmac_tx_tx   0x00007ffeU // [14:1]
#define SRT_xmac_tx_tx   1           
#define MSK_xmac_tx_tx15 0x00008000U // [15]
#define SRT_xmac_tx_tx15 15          

enum {
	BFW_xmac_tx_tx0       = 1,  // [0]
	BFW_xmac_tx_tx        = 14, // [14:1]
	BFW_xmac_tx_tx15      = 1,  // [15]
	BFW_xmac_tx_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TX_BIT_Ttag {
	unsigned int tx0       : BFW_xmac_tx_tx0;       // bit to be transmitted next in case of tx_shift_lr = 0 
	unsigned int tx        : BFW_xmac_tx_tx;        // to be transmitted bits                                
	unsigned int tx15      : BFW_xmac_tx_tx15;      // bit to be transmitted next in case of tx_shift_lr = 1 
	unsigned int reserved1 : BFW_xmac_tx_reserved1; // reserved
} XMAC_TX_BIT_T;

typedef union {
	unsigned int  val;
	XMAC_TX_BIT_T bf;
} XMAC_TX_T;

// ---------------------------------------------------------------------
// Register xmac_tx_hw
// => xMAC TX_HW Register
//    tx_hw bit in TPU-code writes to be transmitted bit in tx register from this register
//    Useful in case of bitwise format, to insert source bits into output bitstream.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx_hw   0x00000888U
#define Adr_xmac0_xmac_tx_hw 0x00160888U
#define Adr_xmac1_xmac_tx_hw 0x00161888U
#define Adr_xmac2_xmac_tx_hw 0x00162888U
#define Adr_xmac3_xmac_tx_hw 0x00163888U

#define MSK_xmac_tx_hw_tx_hw 0x0000ffffU // [15:0]
#define SRT_xmac_tx_hw_tx_hw 0           

enum {
	BFW_xmac_tx_hw_tx_hw     = 16, // [15:0]
	BFW_xmac_tx_hw_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TX_HW_BIT_Ttag {
	unsigned int tx_hw     : BFW_xmac_tx_hw_tx_hw;     // bits to be inserted into output bitstream 
	                                                        // same orientation of bits as in tx register (depending on tx_shift_lr)
	unsigned int reserved1 : BFW_xmac_tx_hw_reserved1; // reserved
} XMAC_TX_HW_BIT_T;

typedef union {
	unsigned int     val;
	XMAC_TX_HW_BIT_T bf;
} XMAC_TX_HW_T;

// ---------------------------------------------------------------------
// Register xmac_tx_hw_count
// => xMAC TX_HW_COUNT Register
//    Counts bits collected by tx_hw bit TPU-code.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx_hw_count   0x0000088CU
#define Adr_xmac0_xmac_tx_hw_count 0x0016088CU
#define Adr_xmac1_xmac_tx_hw_count 0x0016188CU
#define Adr_xmac2_xmac_tx_hw_count 0x0016288CU
#define Adr_xmac3_xmac_tx_hw_count 0x0016388CU

#define MSK_xmac_tx_hw_count_tx_hw_count 0x0000ffffU // [15:0]
#define SRT_xmac_tx_hw_count_tx_hw_count 0           

enum {
	BFW_xmac_tx_hw_count_tx_hw_count = 16, // [15:0]
	BFW_xmac_tx_hw_count_reserved1   = 16  // [31:16]
};

typedef struct XMAC_TX_HW_COUNT_BIT_Ttag {
	unsigned int tx_hw_count : BFW_xmac_tx_hw_count_tx_hw_count; // counts down with tx_hw in TPU-code 
	                                                        // (from tx_nof_bits-1 to 0, 16-bit downcounter if tx_nof_bits = 0)
	unsigned int reserved1   : BFW_xmac_tx_hw_count_reserved1;   // reserved
} XMAC_TX_HW_COUNT_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_TX_HW_COUNT_BIT_T bf;
} XMAC_TX_HW_COUNT_T;

// ---------------------------------------------------------------------
// Register xmac_tx_sent
// => xMAC TX Sent Register
//    Collects already transmitted bits.
//    Useful for pattern match.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx_sent   0x00000890U
#define Adr_xmac0_xmac_tx_sent 0x00160890U
#define Adr_xmac1_xmac_tx_sent 0x00161890U
#define Adr_xmac2_xmac_tx_sent 0x00162890U
#define Adr_xmac3_xmac_tx_sent 0x00163890U

#define MSK_xmac_tx_sent_tx_sent 0x0000ffffU // [15:0]
#define SRT_xmac_tx_sent_tx_sent 0           

enum {
	BFW_xmac_tx_sent_tx_sent   = 16, // [15:0]
	BFW_xmac_tx_sent_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TX_SENT_BIT_Ttag {
	unsigned int tx_sent   : BFW_xmac_tx_sent_tx_sent;   // already transmitted bits, 
	                                                        // bit 15 is always the oldest bit (shift direction not programmable)
	unsigned int reserved1 : BFW_xmac_tx_sent_reserved1; // reserved
} XMAC_TX_SENT_BIT_T;

typedef union {
	unsigned int       val;
	XMAC_TX_SENT_BIT_T bf;
} XMAC_TX_SENT_T;

// ---------------------------------------------------------------------
// Register xmac_rpu_pc
// => RPU Progamm counter
//    Resetvalue : 00
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpu_pc   0x00000894U
#define Adr_xmac0_xmac_rpu_pc 0x00160894U
#define Adr_xmac1_xmac_rpu_pc 0x00161894U
#define Adr_xmac2_xmac_rpu_pc 0x00162894U
#define Adr_xmac3_xmac_rpu_pc 0x00163894U

#define MSK_xmac_rpu_pc_rpu_pc 0x0000007fU // [6:0]
#define SRT_xmac_rpu_pc_rpu_pc 0           

enum {
	BFW_xmac_rpu_pc_rpu_pc    = 7,  // [6:0]
	BFW_xmac_rpu_pc_reserved1 = 25  // [31:7]
};

typedef struct XMAC_RPU_PC_BIT_Ttag {
	unsigned int rpu_pc    : BFW_xmac_rpu_pc_rpu_pc;    // Program Counter of RPU 
	unsigned int reserved1 : BFW_xmac_rpu_pc_reserved1; // reserved
} XMAC_RPU_PC_BIT_T;

typedef union {
	unsigned int      val;
	XMAC_RPU_PC_BIT_T bf;
} XMAC_RPU_PC_T;

// ---------------------------------------------------------------------
// Register xmac_tpu_pc
// => TPU Progamm counter
//    Resetvalue : 00
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpu_pc   0x00000898U
#define Adr_xmac0_xmac_tpu_pc 0x00160898U
#define Adr_xmac1_xmac_tpu_pc 0x00161898U
#define Adr_xmac2_xmac_tpu_pc 0x00162898U
#define Adr_xmac3_xmac_tpu_pc 0x00163898U

#define MSK_xmac_tpu_pc_tpu_pc 0x0000007fU // [6:0]
#define SRT_xmac_tpu_pc_tpu_pc 0           

enum {
	BFW_xmac_tpu_pc_tpu_pc    = 7,  // [6:0]
	BFW_xmac_tpu_pc_reserved1 = 25  // [31:7]
};

typedef struct XMAC_TPU_PC_BIT_Ttag {
	unsigned int tpu_pc    : BFW_xmac_tpu_pc_tpu_pc;    // Program Counter of TPU 
	unsigned int reserved1 : BFW_xmac_tpu_pc_reserved1; // reserved
} XMAC_TPU_PC_BIT_T;

typedef union {
	unsigned int      val;
	XMAC_TPU_PC_BIT_T bf;
} XMAC_TPU_PC_T;

// ---------------------------------------------------------------------
// Register xmac_wr0
// => xMAC internal Work Register 0
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr0   0x0000089CU
#define Adr_xmac0_xmac_wr0 0x0016089CU
#define Adr_xmac1_xmac_wr0 0x0016189CU
#define Adr_xmac2_xmac_wr0 0x0016289CU
#define Adr_xmac3_xmac_wr0 0x0016389CU

#define MSK_xmac_wr0_WR0 0x0000ffffU // [15:0]
#define SRT_xmac_wr0_WR0 0           

enum {
	BFW_xmac_wr0_WR0       = 16, // [15:0]
	BFW_xmac_wr0_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR0_BIT_Ttag {
	unsigned int WR0       : BFW_xmac_wr0_WR0;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr0_reserved1; // reserved
} XMAC_WR0_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR0_BIT_T bf;
} XMAC_WR0_T;

// ---------------------------------------------------------------------
// Register xmac_wr1
// => xMAC internal Work Register 1
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr1   0x000008A0U
#define Adr_xmac0_xmac_wr1 0x001608A0U
#define Adr_xmac1_xmac_wr1 0x001618A0U
#define Adr_xmac2_xmac_wr1 0x001628A0U
#define Adr_xmac3_xmac_wr1 0x001638A0U

#define MSK_xmac_wr1_WR1 0x0000ffffU // [15:0]
#define SRT_xmac_wr1_WR1 0           

enum {
	BFW_xmac_wr1_WR1       = 16, // [15:0]
	BFW_xmac_wr1_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR1_BIT_Ttag {
	unsigned int WR1       : BFW_xmac_wr1_WR1;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr1_reserved1; // reserved
} XMAC_WR1_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR1_BIT_T bf;
} XMAC_WR1_T;

// ---------------------------------------------------------------------
// Register xmac_wr2
// => xMAC internal Work Register 2
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr2   0x000008A4U
#define Adr_xmac0_xmac_wr2 0x001608A4U
#define Adr_xmac1_xmac_wr2 0x001618A4U
#define Adr_xmac2_xmac_wr2 0x001628A4U
#define Adr_xmac3_xmac_wr2 0x001638A4U

#define MSK_xmac_wr2_WR2 0x0000ffffU // [15:0]
#define SRT_xmac_wr2_WR2 0           

enum {
	BFW_xmac_wr2_WR2       = 16, // [15:0]
	BFW_xmac_wr2_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR2_BIT_Ttag {
	unsigned int WR2       : BFW_xmac_wr2_WR2;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr2_reserved1; // reserved
} XMAC_WR2_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR2_BIT_T bf;
} XMAC_WR2_T;

// ---------------------------------------------------------------------
// Register xmac_wr3
// => xMAC internal Work Register 3
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr3   0x000008A8U
#define Adr_xmac0_xmac_wr3 0x001608A8U
#define Adr_xmac1_xmac_wr3 0x001618A8U
#define Adr_xmac2_xmac_wr3 0x001628A8U
#define Adr_xmac3_xmac_wr3 0x001638A8U

#define MSK_xmac_wr3_WR3 0x0000ffffU // [15:0]
#define SRT_xmac_wr3_WR3 0           

enum {
	BFW_xmac_wr3_WR3       = 16, // [15:0]
	BFW_xmac_wr3_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR3_BIT_Ttag {
	unsigned int WR3       : BFW_xmac_wr3_WR3;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr3_reserved1; // reserved
} XMAC_WR3_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR3_BIT_T bf;
} XMAC_WR3_T;

// ---------------------------------------------------------------------
// Register xmac_wr4
// => xMAC internal Work Register 4
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr4   0x000008ACU
#define Adr_xmac0_xmac_wr4 0x001608ACU
#define Adr_xmac1_xmac_wr4 0x001618ACU
#define Adr_xmac2_xmac_wr4 0x001628ACU
#define Adr_xmac3_xmac_wr4 0x001638ACU

#define MSK_xmac_wr4_WR4 0x0000ffffU // [15:0]
#define SRT_xmac_wr4_WR4 0           

enum {
	BFW_xmac_wr4_WR4       = 16, // [15:0]
	BFW_xmac_wr4_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR4_BIT_Ttag {
	unsigned int WR4       : BFW_xmac_wr4_WR4;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr4_reserved1; // reserved
} XMAC_WR4_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR4_BIT_T bf;
} XMAC_WR4_T;

// ---------------------------------------------------------------------
// Register xmac_wr5
// => xMAC internal Work Register 5
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr5   0x000008B0U
#define Adr_xmac0_xmac_wr5 0x001608B0U
#define Adr_xmac1_xmac_wr5 0x001618B0U
#define Adr_xmac2_xmac_wr5 0x001628B0U
#define Adr_xmac3_xmac_wr5 0x001638B0U

#define MSK_xmac_wr5_WR5 0x0000ffffU // [15:0]
#define SRT_xmac_wr5_WR5 0           

enum {
	BFW_xmac_wr5_WR5       = 16, // [15:0]
	BFW_xmac_wr5_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR5_BIT_Ttag {
	unsigned int WR5       : BFW_xmac_wr5_WR5;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr5_reserved1; // reserved
} XMAC_WR5_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR5_BIT_T bf;
} XMAC_WR5_T;

// ---------------------------------------------------------------------
// Register xmac_wr6
// => xMAC internal Work Register 6
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr6   0x000008B4U
#define Adr_xmac0_xmac_wr6 0x001608B4U
#define Adr_xmac1_xmac_wr6 0x001618B4U
#define Adr_xmac2_xmac_wr6 0x001628B4U
#define Adr_xmac3_xmac_wr6 0x001638B4U

#define MSK_xmac_wr6_WR6 0x0000ffffU // [15:0]
#define SRT_xmac_wr6_WR6 0           

enum {
	BFW_xmac_wr6_WR6       = 16, // [15:0]
	BFW_xmac_wr6_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR6_BIT_Ttag {
	unsigned int WR6       : BFW_xmac_wr6_WR6;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr6_reserved1; // reserved
} XMAC_WR6_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR6_BIT_T bf;
} XMAC_WR6_T;

// ---------------------------------------------------------------------
// Register xmac_wr7
// => xMAC internal Work Register 7
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr7   0x000008B8U
#define Adr_xmac0_xmac_wr7 0x001608B8U
#define Adr_xmac1_xmac_wr7 0x001618B8U
#define Adr_xmac2_xmac_wr7 0x001628B8U
#define Adr_xmac3_xmac_wr7 0x001638B8U

#define MSK_xmac_wr7_WR7 0x0000ffffU // [15:0]
#define SRT_xmac_wr7_WR7 0           

enum {
	BFW_xmac_wr7_WR7       = 16, // [15:0]
	BFW_xmac_wr7_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR7_BIT_Ttag {
	unsigned int WR7       : BFW_xmac_wr7_WR7;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr7_reserved1; // reserved
} XMAC_WR7_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR7_BIT_T bf;
} XMAC_WR7_T;

// ---------------------------------------------------------------------
// Register xmac_wr8
// => xMAC internal Work Register 7
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr8   0x000008BCU
#define Adr_xmac0_xmac_wr8 0x001608BCU
#define Adr_xmac1_xmac_wr8 0x001618BCU
#define Adr_xmac2_xmac_wr8 0x001628BCU
#define Adr_xmac3_xmac_wr8 0x001638BCU

#define MSK_xmac_wr8_WR7 0x0000ffffU // [15:0]
#define SRT_xmac_wr8_WR7 0           

enum {
	BFW_xmac_wr8_WR7       = 16, // [15:0]
	BFW_xmac_wr8_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR8_BIT_Ttag {
	unsigned int WR7       : BFW_xmac_wr8_WR7;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr8_reserved1; // reserved
} XMAC_WR8_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR8_BIT_T bf;
} XMAC_WR8_T;

// ---------------------------------------------------------------------
// Register xmac_wr9
// => xMAC internal Work Register 7
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_wr9   0x000008C0U
#define Adr_xmac0_xmac_wr9 0x001608C0U
#define Adr_xmac1_xmac_wr9 0x001618C0U
#define Adr_xmac2_xmac_wr9 0x001628C0U
#define Adr_xmac3_xmac_wr9 0x001638C0U

#define MSK_xmac_wr9_WR7 0x0000ffffU // [15:0]
#define SRT_xmac_wr9_WR7 0           

enum {
	BFW_xmac_wr9_WR7       = 16, // [15:0]
	BFW_xmac_wr9_reserved1 = 16  // [31:16]
};

typedef struct XMAC_WR9_BIT_Ttag {
	unsigned int WR7       : BFW_xmac_wr9_WR7;       // Work Register 
	unsigned int reserved1 : BFW_xmac_wr9_reserved1; // reserved
} XMAC_WR9_BIT_T;

typedef union {
	unsigned int   val;
	XMAC_WR9_BIT_T bf;
} XMAC_WR9_T;

// ---------------------------------------------------------------------
// Register xmac_sys_time
// => xMAC System Time
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sys_time   0x000008C4U
#define Adr_xmac0_xmac_sys_time 0x001608C4U
#define Adr_xmac1_xmac_sys_time 0x001618C4U
#define Adr_xmac2_xmac_sys_time 0x001628C4U
#define Adr_xmac3_xmac_sys_time 0x001638C4U

#define MSK_xmac_sys_time_sys_time 0x0000ffffU // [15:0]
#define SRT_xmac_sys_time_sys_time 0           

enum {
	BFW_xmac_sys_time_sys_time  = 16, // [15:0]
	BFW_xmac_sys_time_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SYS_TIME_BIT_Ttag {
	unsigned int sys_time  : BFW_xmac_sys_time_sys_time;  // 16 lower bits of 32 bit system time running on system clock 
	unsigned int reserved1 : BFW_xmac_sys_time_reserved1; // reserved
} XMAC_SYS_TIME_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_SYS_TIME_BIT_T bf;
} XMAC_SYS_TIME_T;

// ---------------------------------------------------------------------
// Register xmac_cmp0_status
// => xMAC Compare0 Status Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_cmp0_status   0x000008C8U
#define Adr_xmac0_xmac_cmp0_status 0x001608C8U
#define Adr_xmac1_xmac_cmp0_status 0x001618C8U
#define Adr_xmac2_xmac_cmp0_status 0x001628C8U
#define Adr_xmac3_xmac_cmp0_status 0x001638C8U

#define MSK_xmac_cmp0_status_sr0_z       0x00000001U // [0]
#define SRT_xmac_cmp0_status_sr0_z       0           
#define MSK_xmac_cmp0_status_sr1_z       0x00000002U // [1]
#define SRT_xmac_cmp0_status_sr1_z       1           
#define MSK_xmac_cmp0_status_sr2_z       0x00000004U // [2]
#define SRT_xmac_cmp0_status_sr2_z       2           
#define MSK_xmac_cmp0_status_sr3_z       0x00000008U // [3]
#define SRT_xmac_cmp0_status_sr3_z       3           
#define MSK_xmac_cmp0_status_sr4_z       0x00000010U // [4]
#define SRT_xmac_cmp0_status_sr4_z       4           
#define MSK_xmac_cmp0_status_sr5_z       0x00000020U // [5]
#define SRT_xmac_cmp0_status_sr5_z       5           
#define MSK_xmac_cmp0_status_sr6_z       0x00000040U // [6]
#define SRT_xmac_cmp0_status_sr6_z       6           
#define MSK_xmac_cmp0_status_sr7_z       0x00000080U // [7]
#define SRT_xmac_cmp0_status_sr7_z       7           
#define MSK_xmac_cmp0_status_cnt_rx_z    0x00000100U // [8]
#define SRT_xmac_cmp0_status_cnt_rx_z    8           
#define MSK_xmac_cmp0_status_cnt_tx_z    0x00000200U // [9]
#define SRT_xmac_cmp0_status_cnt_tx_z    9           
#define MSK_xmac_cmp0_status_cnt_rx_hw_z 0x00000400U // [10]
#define SRT_xmac_cmp0_status_cnt_rx_hw_z 10          
#define MSK_xmac_cmp0_status_cnt_tx_hw_z 0x00000800U // [11]
#define SRT_xmac_cmp0_status_cnt_tx_hw_z 11          
#define MSK_xmac_cmp0_status_cnt1_rpu_z  0x00001000U // [12]
#define SRT_xmac_cmp0_status_cnt1_rpu_z  12          
#define MSK_xmac_cmp0_status_cnt2_rpu_z  0x00002000U // [13]
#define SRT_xmac_cmp0_status_cnt2_rpu_z  13          
#define MSK_xmac_cmp0_status_cnt1_tpu_z  0x00004000U // [14]
#define SRT_xmac_cmp0_status_cnt1_tpu_z  14          
#define MSK_xmac_cmp0_status_cnt2_tpu_z  0x00008000U // [15]
#define SRT_xmac_cmp0_status_cnt2_tpu_z  15          

enum {
	BFW_xmac_cmp0_status_sr0_z       = 1,  // [0]
	BFW_xmac_cmp0_status_sr1_z       = 1,  // [1]
	BFW_xmac_cmp0_status_sr2_z       = 1,  // [2]
	BFW_xmac_cmp0_status_sr3_z       = 1,  // [3]
	BFW_xmac_cmp0_status_sr4_z       = 1,  // [4]
	BFW_xmac_cmp0_status_sr5_z       = 1,  // [5]
	BFW_xmac_cmp0_status_sr6_z       = 1,  // [6]
	BFW_xmac_cmp0_status_sr7_z       = 1,  // [7]
	BFW_xmac_cmp0_status_cnt_rx_z    = 1,  // [8]
	BFW_xmac_cmp0_status_cnt_tx_z    = 1,  // [9]
	BFW_xmac_cmp0_status_cnt_rx_hw_z = 1,  // [10]
	BFW_xmac_cmp0_status_cnt_tx_hw_z = 1,  // [11]
	BFW_xmac_cmp0_status_cnt1_rpu_z  = 1,  // [12]
	BFW_xmac_cmp0_status_cnt2_rpu_z  = 1,  // [13]
	BFW_xmac_cmp0_status_cnt1_tpu_z  = 1,  // [14]
	BFW_xmac_cmp0_status_cnt2_tpu_z  = 1,  // [15]
	BFW_xmac_cmp0_status_reserved1   = 16  // [31:16]
};

typedef struct XMAC_CMP0_STATUS_BIT_Ttag {
	unsigned int sr0_z       : BFW_xmac_cmp0_status_sr0_z;       // sr0 = 0
	unsigned int sr1_z       : BFW_xmac_cmp0_status_sr1_z;       // sr1 = 0
	unsigned int sr2_z       : BFW_xmac_cmp0_status_sr2_z;       // sr2 = 0
	unsigned int sr3_z       : BFW_xmac_cmp0_status_sr3_z;       // sr3 = 0
	unsigned int sr4_z       : BFW_xmac_cmp0_status_sr4_z;       // sr4 = 0
	unsigned int sr5_z       : BFW_xmac_cmp0_status_sr5_z;       // sr5 = 0
	unsigned int sr6_z       : BFW_xmac_cmp0_status_sr6_z;       // sr6 = 0
	unsigned int sr7_z       : BFW_xmac_cmp0_status_sr7_z;       // sr7 = 0
	unsigned int cnt_rx_z    : BFW_xmac_cmp0_status_cnt_rx_z;    // count_rx = 0
	unsigned int cnt_tx_z    : BFW_xmac_cmp0_status_cnt_tx_z;    // count_tx = 0
	unsigned int cnt_rx_hw_z : BFW_xmac_cmp0_status_cnt_rx_hw_z; // rx_hw_count = 0
	unsigned int cnt_tx_hw_z : BFW_xmac_cmp0_status_cnt_tx_hw_z; // tx_hw_count = 0
	unsigned int cnt1_rpu_z  : BFW_xmac_cmp0_status_cnt1_rpu_z;  // rpu_count1 = 0
	unsigned int cnt2_rpu_z  : BFW_xmac_cmp0_status_cnt2_rpu_z;  // rpu_count2 = 0
	unsigned int cnt1_tpu_z  : BFW_xmac_cmp0_status_cnt1_tpu_z;  // tpu_count1 = 0
	unsigned int cnt2_tpu_z  : BFW_xmac_cmp0_status_cnt2_tpu_z;  // tpu_count2 = 0
	unsigned int reserved1   : BFW_xmac_cmp0_status_reserved1;   // reserved
} XMAC_CMP0_STATUS_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_CMP0_STATUS_BIT_T bf;
} XMAC_CMP0_STATUS_T;

// ---------------------------------------------------------------------
// Register xmac_cmp1_status
// => xMAC Compare1 Status Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_cmp1_status   0x000008CCU
#define Adr_xmac0_xmac_cmp1_status 0x001608CCU
#define Adr_xmac1_xmac_cmp1_status 0x001618CCU
#define Adr_xmac2_xmac_cmp1_status 0x001628CCU
#define Adr_xmac3_xmac_cmp1_status 0x001638CCU

#define MSK_xmac_cmp1_status_wr0_z    0x00000001U // [0]
#define SRT_xmac_cmp1_status_wr0_z    0           
#define MSK_xmac_cmp1_status_wr1_z    0x00000002U // [1]
#define SRT_xmac_cmp1_status_wr1_z    1           
#define MSK_xmac_cmp1_status_wr2_z    0x00000004U // [2]
#define SRT_xmac_cmp1_status_wr2_z    2           
#define MSK_xmac_cmp1_status_wr3_z    0x00000008U // [3]
#define SRT_xmac_cmp1_status_wr3_z    3           
#define MSK_xmac_cmp1_status_wr4_z    0x00000010U // [4]
#define SRT_xmac_cmp1_status_wr4_z    4           
#define MSK_xmac_cmp1_status_wr5_z    0x00000020U // [5]
#define SRT_xmac_cmp1_status_wr5_z    5           
#define MSK_xmac_cmp1_status_wr6_z    0x00000040U // [6]
#define SRT_xmac_cmp1_status_wr6_z    6           
#define MSK_xmac_cmp1_status_wr7_z    0x00000080U // [7]
#define SRT_xmac_cmp1_status_wr7_z    7           
#define MSK_xmac_cmp1_status_wr8_z    0x00000100U // [8]
#define SRT_xmac_cmp1_status_wr8_z    8           
#define MSK_xmac_cmp1_status_wr9_z    0x00000200U // [9]
#define SRT_xmac_cmp1_status_wr9_z    9           
#define MSK_xmac_cmp1_status_wr0_wr1  0x00000400U // [10]
#define SRT_xmac_cmp1_status_wr0_wr1  10          
#define MSK_xmac_cmp1_status_wr2_wr3  0x00000800U // [11]
#define SRT_xmac_cmp1_status_wr2_wr3  11          
#define MSK_xmac_cmp1_status_wr4_wr5  0x00001000U // [12]
#define SRT_xmac_cmp1_status_wr4_wr5  12          
#define MSK_xmac_cmp1_status_wr6_wr7  0x00002000U // [13]
#define SRT_xmac_cmp1_status_wr6_wr7  13          
#define MSK_xmac_cmp1_status_wr8_wr9  0x00004000U // [14]
#define SRT_xmac_cmp1_status_wr8_wr9  14          
#define MSK_xmac_cmp1_status_sys_time 0x00008000U // [15]
#define SRT_xmac_cmp1_status_sys_time 15          

enum {
	BFW_xmac_cmp1_status_wr0_z     = 1,  // [0]
	BFW_xmac_cmp1_status_wr1_z     = 1,  // [1]
	BFW_xmac_cmp1_status_wr2_z     = 1,  // [2]
	BFW_xmac_cmp1_status_wr3_z     = 1,  // [3]
	BFW_xmac_cmp1_status_wr4_z     = 1,  // [4]
	BFW_xmac_cmp1_status_wr5_z     = 1,  // [5]
	BFW_xmac_cmp1_status_wr6_z     = 1,  // [6]
	BFW_xmac_cmp1_status_wr7_z     = 1,  // [7]
	BFW_xmac_cmp1_status_wr8_z     = 1,  // [8]
	BFW_xmac_cmp1_status_wr9_z     = 1,  // [9]
	BFW_xmac_cmp1_status_wr0_wr1   = 1,  // [10]
	BFW_xmac_cmp1_status_wr2_wr3   = 1,  // [11]
	BFW_xmac_cmp1_status_wr4_wr5   = 1,  // [12]
	BFW_xmac_cmp1_status_wr6_wr7   = 1,  // [13]
	BFW_xmac_cmp1_status_wr8_wr9   = 1,  // [14]
	BFW_xmac_cmp1_status_sys_time  = 1,  // [15]
	BFW_xmac_cmp1_status_reserved1 = 16  // [31:16]
};

typedef struct XMAC_CMP1_STATUS_BIT_Ttag {
	unsigned int wr0_z     : BFW_xmac_cmp1_status_wr0_z;     // 1: work register 0 equals 0
	unsigned int wr1_z     : BFW_xmac_cmp1_status_wr1_z;     // 1: work register 1 equals 0
	unsigned int wr2_z     : BFW_xmac_cmp1_status_wr2_z;     // 1: work register 2 equals 0
	unsigned int wr3_z     : BFW_xmac_cmp1_status_wr3_z;     // 1: work register 3 equals 0
	unsigned int wr4_z     : BFW_xmac_cmp1_status_wr4_z;     // 1: work register 4 equals 0
	unsigned int wr5_z     : BFW_xmac_cmp1_status_wr5_z;     // 1: work register 5 equals 0
	unsigned int wr6_z     : BFW_xmac_cmp1_status_wr6_z;     // 1: work register 6 equals 0
	unsigned int wr7_z     : BFW_xmac_cmp1_status_wr7_z;     // 1: work register 7 equals 0
	unsigned int wr8_z     : BFW_xmac_cmp1_status_wr8_z;     // 1: work register 8 equals 0
	unsigned int wr9_z     : BFW_xmac_cmp1_status_wr9_z;     // 1: work register 9 equals 0
	unsigned int wr0_wr1   : BFW_xmac_cmp1_status_wr0_wr1;   // 1: wr0 equals wr1
	unsigned int wr2_wr3   : BFW_xmac_cmp1_status_wr2_wr3;   // 1: wr2 equals wr3
	unsigned int wr4_wr5   : BFW_xmac_cmp1_status_wr4_wr5;   // 1: wr4 equals wr5
	unsigned int wr6_wr7   : BFW_xmac_cmp1_status_wr6_wr7;   // 1: wr6 equals wr7
	unsigned int wr8_wr9   : BFW_xmac_cmp1_status_wr8_wr9;   // 1: wr8 equals wr9
	unsigned int sys_time  : BFW_xmac_cmp1_status_sys_time;  // compare of sys_time with wr2(value) and wr3(mask):
	                                                        // wr3 defines, which bits of sys_time and wr2 are to be compared
	                                                        // (1: compare this bit position, 0: ignore this bit position)
	unsigned int reserved1 : BFW_xmac_cmp1_status_reserved1; // reserved
} XMAC_CMP1_STATUS_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_CMP1_STATUS_BIT_T bf;
} XMAC_CMP1_STATUS_T;

// ---------------------------------------------------------------------
// Register xmac_cmp2_status
// => xMAC Compare2 Status Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_cmp2_status   0x000008D0U
#define Adr_xmac0_xmac_cmp2_status 0x001608D0U
#define Adr_xmac1_xmac_cmp2_status 0x001618D0U
#define Adr_xmac2_xmac_cmp2_status 0x001628D0U
#define Adr_xmac3_xmac_cmp2_status 0x001638D0U

#define MSK_xmac_cmp2_status_wr0_sr0  0x00000001U // [0]
#define SRT_xmac_cmp2_status_wr0_sr0  0           
#define MSK_xmac_cmp2_status_wr1_sr1  0x00000002U // [1]
#define SRT_xmac_cmp2_status_wr1_sr1  1           
#define MSK_xmac_cmp2_status_wr2_sr2  0x00000004U // [2]
#define SRT_xmac_cmp2_status_wr2_sr2  2           
#define MSK_xmac_cmp2_status_wr3_sr3  0x00000008U // [3]
#define SRT_xmac_cmp2_status_wr3_sr3  3           
#define MSK_xmac_cmp2_status_wr4_sr4  0x00000010U // [4]
#define SRT_xmac_cmp2_status_wr4_sr4  4           
#define MSK_xmac_cmp2_status_wr5_sr5  0x00000020U // [5]
#define SRT_xmac_cmp2_status_wr5_sr5  5           
#define MSK_xmac_cmp2_status_wr6_sr6  0x00000040U // [6]
#define SRT_xmac_cmp2_status_wr6_sr6  6           
#define MSK_xmac_cmp2_status_wr7_sr7  0x00000080U // [7]
#define SRT_xmac_cmp2_status_wr7_sr7  7           
#define MSK_xmac_cmp2_status_wr8_sr8  0x00000100U // [8]
#define SRT_xmac_cmp2_status_wr8_sr8  8           
#define MSK_xmac_cmp2_status_wr9_sr9  0x00000200U // [9]
#define SRT_xmac_cmp2_status_wr9_sr9  9           
#define MSK_xmac_cmp2_status_wr5_sr10 0x00000400U // [10]
#define SRT_xmac_cmp2_status_wr5_sr10 10          
#define MSK_xmac_cmp2_status_wr6_sr11 0x00000800U // [11]
#define SRT_xmac_cmp2_status_wr6_sr11 11          
#define MSK_xmac_cmp2_status_wr5_sr12 0x00001000U // [12]
#define SRT_xmac_cmp2_status_wr5_sr12 12          
#define MSK_xmac_cmp2_status_wr6_sr13 0x00002000U // [13]
#define SRT_xmac_cmp2_status_wr6_sr13 13          
#define MSK_xmac_cmp2_status_wr5_sr14 0x00004000U // [14]
#define SRT_xmac_cmp2_status_wr5_sr14 14          
#define MSK_xmac_cmp2_status_wr6_sr15 0x00008000U // [15]
#define SRT_xmac_cmp2_status_wr6_sr15 15          

enum {
	BFW_xmac_cmp2_status_wr0_sr0   = 1,  // [0]
	BFW_xmac_cmp2_status_wr1_sr1   = 1,  // [1]
	BFW_xmac_cmp2_status_wr2_sr2   = 1,  // [2]
	BFW_xmac_cmp2_status_wr3_sr3   = 1,  // [3]
	BFW_xmac_cmp2_status_wr4_sr4   = 1,  // [4]
	BFW_xmac_cmp2_status_wr5_sr5   = 1,  // [5]
	BFW_xmac_cmp2_status_wr6_sr6   = 1,  // [6]
	BFW_xmac_cmp2_status_wr7_sr7   = 1,  // [7]
	BFW_xmac_cmp2_status_wr8_sr8   = 1,  // [8]
	BFW_xmac_cmp2_status_wr9_sr9   = 1,  // [9]
	BFW_xmac_cmp2_status_wr5_sr10  = 1,  // [10]
	BFW_xmac_cmp2_status_wr6_sr11  = 1,  // [11]
	BFW_xmac_cmp2_status_wr5_sr12  = 1,  // [12]
	BFW_xmac_cmp2_status_wr6_sr13  = 1,  // [13]
	BFW_xmac_cmp2_status_wr5_sr14  = 1,  // [14]
	BFW_xmac_cmp2_status_wr6_sr15  = 1,  // [15]
	BFW_xmac_cmp2_status_reserved1 = 16  // [31:16]
};

typedef struct XMAC_CMP2_STATUS_BIT_Ttag {
	unsigned int wr0_sr0   : BFW_xmac_cmp2_status_wr0_sr0;   // 1: wr0 equals sr0
	unsigned int wr1_sr1   : BFW_xmac_cmp2_status_wr1_sr1;   // 1: wr1 equals sr1
	unsigned int wr2_sr2   : BFW_xmac_cmp2_status_wr2_sr2;   // 1: wr2 equals sr2
	unsigned int wr3_sr3   : BFW_xmac_cmp2_status_wr3_sr3;   // 1: wr3 equals sr3
	unsigned int wr4_sr4   : BFW_xmac_cmp2_status_wr4_sr4;   // 1: wr4 equals sr4
	unsigned int wr5_sr5   : BFW_xmac_cmp2_status_wr5_sr5;   // 1: wr5 equals sr5
	unsigned int wr6_sr6   : BFW_xmac_cmp2_status_wr6_sr6;   // 1: wr6 equals sr6
	unsigned int wr7_sr7   : BFW_xmac_cmp2_status_wr7_sr7;   // 1: wr7 equals sr7
	unsigned int wr8_sr8   : BFW_xmac_cmp2_status_wr8_sr8;   // 1: wr8 equals sr8
	unsigned int wr9_sr9   : BFW_xmac_cmp2_status_wr9_sr9;   // 1: wr9 equals sr9
	unsigned int wr5_sr10  : BFW_xmac_cmp2_status_wr5_sr10;  // 1: wr5 equals sr10
	unsigned int wr6_sr11  : BFW_xmac_cmp2_status_wr6_sr11;  // 1: wr6 equals sr11
	unsigned int wr5_sr12  : BFW_xmac_cmp2_status_wr5_sr12;  // 1: wr5 equals sr12
	unsigned int wr6_sr13  : BFW_xmac_cmp2_status_wr6_sr13;  // 1: wr6 equals sr13
	unsigned int wr5_sr14  : BFW_xmac_cmp2_status_wr5_sr14;  // 1: wr5 equals sr14
	unsigned int wr6_sr15  : BFW_xmac_cmp2_status_wr6_sr15;  // 1: wr6 equals sr15
	unsigned int reserved1 : BFW_xmac_cmp2_status_reserved1; // reserved
} XMAC_CMP2_STATUS_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_CMP2_STATUS_BIT_T bf;
} XMAC_CMP2_STATUS_T;

// ---------------------------------------------------------------------
// Register xmac_cmp3_status
// => xMAC Compare3 Status Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_cmp3_status   0x000008D4U
#define Adr_xmac0_xmac_cmp3_status 0x001608D4U
#define Adr_xmac1_xmac_cmp3_status 0x001618D4U
#define Adr_xmac2_xmac_cmp3_status 0x001628D4U
#define Adr_xmac3_xmac_cmp3_status 0x001638D4U

#define MSK_xmac_cmp3_status_rpucnt1_wr0 0x00000001U // [0]
#define SRT_xmac_cmp3_status_rpucnt1_wr0 0           
#define MSK_xmac_cmp3_status_rpucnt1_wr1 0x00000002U // [1]
#define SRT_xmac_cmp3_status_rpucnt1_wr1 1           
#define MSK_xmac_cmp3_status_rpucnt1_wr2 0x00000004U // [2]
#define SRT_xmac_cmp3_status_rpucnt1_wr2 2           
#define MSK_xmac_cmp3_status_rpucnt1_wr3 0x00000008U // [3]
#define SRT_xmac_cmp3_status_rpucnt1_wr3 3           
#define MSK_xmac_cmp3_status_rpucnt1_wr4 0x00000010U // [4]
#define SRT_xmac_cmp3_status_rpucnt1_wr4 4           
#define MSK_xmac_cmp3_status_rpucnt1_wr5 0x00000020U // [5]
#define SRT_xmac_cmp3_status_rpucnt1_wr5 5           
#define MSK_xmac_cmp3_status_rpucnt1_wr6 0x00000040U // [6]
#define SRT_xmac_cmp3_status_rpucnt1_wr6 6           
#define MSK_xmac_cmp3_status_rpucnt1_wr7 0x00000080U // [7]
#define SRT_xmac_cmp3_status_rpucnt1_wr7 7           
#define MSK_xmac_cmp3_status_tpucnt1_wr0 0x00000100U // [8]
#define SRT_xmac_cmp3_status_tpucnt1_wr0 8           
#define MSK_xmac_cmp3_status_tpucnt1_wr1 0x00000200U // [9]
#define SRT_xmac_cmp3_status_tpucnt1_wr1 9           
#define MSK_xmac_cmp3_status_tpucnt1_wr2 0x00000400U // [10]
#define SRT_xmac_cmp3_status_tpucnt1_wr2 10          
#define MSK_xmac_cmp3_status_tpucnt1_wr3 0x00000800U // [11]
#define SRT_xmac_cmp3_status_tpucnt1_wr3 11          
#define MSK_xmac_cmp3_status_tpucnt1_wr4 0x00001000U // [12]
#define SRT_xmac_cmp3_status_tpucnt1_wr4 12          
#define MSK_xmac_cmp3_status_tpucnt1_wr5 0x00002000U // [13]
#define SRT_xmac_cmp3_status_tpucnt1_wr5 13          
#define MSK_xmac_cmp3_status_tpucnt1_wr6 0x00004000U // [14]
#define SRT_xmac_cmp3_status_tpucnt1_wr6 14          
#define MSK_xmac_cmp3_status_tpucnt1_wr7 0x00008000U // [15]
#define SRT_xmac_cmp3_status_tpucnt1_wr7 15          

enum {
	BFW_xmac_cmp3_status_rpucnt1_wr0 = 1,  // [0]
	BFW_xmac_cmp3_status_rpucnt1_wr1 = 1,  // [1]
	BFW_xmac_cmp3_status_rpucnt1_wr2 = 1,  // [2]
	BFW_xmac_cmp3_status_rpucnt1_wr3 = 1,  // [3]
	BFW_xmac_cmp3_status_rpucnt1_wr4 = 1,  // [4]
	BFW_xmac_cmp3_status_rpucnt1_wr5 = 1,  // [5]
	BFW_xmac_cmp3_status_rpucnt1_wr6 = 1,  // [6]
	BFW_xmac_cmp3_status_rpucnt1_wr7 = 1,  // [7]
	BFW_xmac_cmp3_status_tpucnt1_wr0 = 1,  // [8]
	BFW_xmac_cmp3_status_tpucnt1_wr1 = 1,  // [9]
	BFW_xmac_cmp3_status_tpucnt1_wr2 = 1,  // [10]
	BFW_xmac_cmp3_status_tpucnt1_wr3 = 1,  // [11]
	BFW_xmac_cmp3_status_tpucnt1_wr4 = 1,  // [12]
	BFW_xmac_cmp3_status_tpucnt1_wr5 = 1,  // [13]
	BFW_xmac_cmp3_status_tpucnt1_wr6 = 1,  // [14]
	BFW_xmac_cmp3_status_tpucnt1_wr7 = 1,  // [15]
	BFW_xmac_cmp3_status_reserved1   = 16  // [31:16]
};

typedef struct XMAC_CMP3_STATUS_BIT_Ttag {
	unsigned int rpucnt1_wr0 : BFW_xmac_cmp3_status_rpucnt1_wr0; // 1: rpu_count1 equals wr0
	unsigned int rpucnt1_wr1 : BFW_xmac_cmp3_status_rpucnt1_wr1; // 1: rpu_count1 equals wr1
	unsigned int rpucnt1_wr2 : BFW_xmac_cmp3_status_rpucnt1_wr2; // 1: rpu_count1 equals wr2
	unsigned int rpucnt1_wr3 : BFW_xmac_cmp3_status_rpucnt1_wr3; // 1: rpu_count1 equals wr3
	unsigned int rpucnt1_wr4 : BFW_xmac_cmp3_status_rpucnt1_wr4; // 1: rpu_count1 equals wr4
	unsigned int rpucnt1_wr5 : BFW_xmac_cmp3_status_rpucnt1_wr5; // 1: rpu_count1 equals wr5
	unsigned int rpucnt1_wr6 : BFW_xmac_cmp3_status_rpucnt1_wr6; // 1: rpu_count1 equals wr6
	unsigned int rpucnt1_wr7 : BFW_xmac_cmp3_status_rpucnt1_wr7; // 1: rpu_count1 equals wr7
	unsigned int tpucnt1_wr0 : BFW_xmac_cmp3_status_tpucnt1_wr0; // 1: tpu_count1 equals wr0
	unsigned int tpucnt1_wr1 : BFW_xmac_cmp3_status_tpucnt1_wr1; // 1: tpu_count1 equals wr1
	unsigned int tpucnt1_wr2 : BFW_xmac_cmp3_status_tpucnt1_wr2; // 1: tpu_count1 equals wr2
	unsigned int tpucnt1_wr3 : BFW_xmac_cmp3_status_tpucnt1_wr3; // 1: tpu_count1 equals wr3
	unsigned int tpucnt1_wr4 : BFW_xmac_cmp3_status_tpucnt1_wr4; // 1: tpu_count1 equals wr4
	unsigned int tpucnt1_wr5 : BFW_xmac_cmp3_status_tpucnt1_wr5; // 1: tpu_count1 equals wr5
	unsigned int tpucnt1_wr6 : BFW_xmac_cmp3_status_tpucnt1_wr6; // 1: tpu_count1 equals wr6
	unsigned int tpucnt1_wr7 : BFW_xmac_cmp3_status_tpucnt1_wr7; // 1: tpu_count1 equals wr7
	unsigned int reserved1   : BFW_xmac_cmp3_status_reserved1;   // reserved
} XMAC_CMP3_STATUS_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_CMP3_STATUS_BIT_T bf;
} XMAC_CMP3_STATUS_T;

// ---------------------------------------------------------------------
// Register xmac_alu_flags
// => xMAC RPU and TPU ALU Flags
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_alu_flags   0x000008D8U
#define Adr_xmac0_xmac_alu_flags 0x001608D8U
#define Adr_xmac1_xmac_alu_flags 0x001618D8U
#define Adr_xmac2_xmac_alu_flags 0x001628D8U
#define Adr_xmac3_xmac_alu_flags 0x001638D8U

#define MSK_xmac_alu_flags_rpu_carry 0x00000001U // [0]
#define SRT_xmac_alu_flags_rpu_carry 0           
#define MSK_xmac_alu_flags_rpu_zero  0x00000002U // [1]
#define SRT_xmac_alu_flags_rpu_zero  1           
#define MSK_xmac_alu_flags_rpu_neg   0x00000004U // [2]
#define SRT_xmac_alu_flags_rpu_neg   2           
#define MSK_xmac_alu_flags_rpu_ovf   0x00000008U // [3]
#define SRT_xmac_alu_flags_rpu_ovf   3           
#define MSK_xmac_alu_flags_tpu_carry 0x00000010U // [4]
#define SRT_xmac_alu_flags_tpu_carry 4           
#define MSK_xmac_alu_flags_tpu_zero  0x00000020U // [5]
#define SRT_xmac_alu_flags_tpu_zero  5           
#define MSK_xmac_alu_flags_tpu_neg   0x00000040U // [6]
#define SRT_xmac_alu_flags_tpu_neg   6           
#define MSK_xmac_alu_flags_tpu_ovf   0x00000080U // [7]
#define SRT_xmac_alu_flags_tpu_ovf   7           
#define MSK_xmac_alu_flags_rxcnt_wr2 0x00004000U // [14]
#define SRT_xmac_alu_flags_rxcnt_wr2 14          
#define MSK_xmac_alu_flags_txcnt_wr7 0x00008000U // [15]
#define SRT_xmac_alu_flags_txcnt_wr7 15          

enum {
	BFW_xmac_alu_flags_rpu_carry = 1,  // [0]
	BFW_xmac_alu_flags_rpu_zero  = 1,  // [1]
	BFW_xmac_alu_flags_rpu_neg   = 1,  // [2]
	BFW_xmac_alu_flags_rpu_ovf   = 1,  // [3]
	BFW_xmac_alu_flags_tpu_carry = 1,  // [4]
	BFW_xmac_alu_flags_tpu_zero  = 1,  // [5]
	BFW_xmac_alu_flags_tpu_neg   = 1,  // [6]
	BFW_xmac_alu_flags_tpu_ovf   = 1,  // [7]
	BFW_xmac_alu_flags_reserved1 = 6,  // [13:8]
	BFW_xmac_alu_flags_rxcnt_wr2 = 1,  // [14]
	BFW_xmac_alu_flags_txcnt_wr7 = 1,  // [15]
	BFW_xmac_alu_flags_reserved2 = 16  // [31:16]
};

typedef struct XMAC_ALU_FLAGS_BIT_Ttag {
	unsigned int rpu_carry : BFW_xmac_alu_flags_rpu_carry; // RPU carry flag
	unsigned int rpu_zero  : BFW_xmac_alu_flags_rpu_zero;  // RPU zero flag
	unsigned int rpu_neg   : BFW_xmac_alu_flags_rpu_neg;   // RPU neg flag
	unsigned int rpu_ovf   : BFW_xmac_alu_flags_rpu_ovf;   // RPU ovf flag
	unsigned int tpu_carry : BFW_xmac_alu_flags_tpu_carry; // TPU carry flag
	unsigned int tpu_zero  : BFW_xmac_alu_flags_tpu_zero;  // TPU zero flag
	unsigned int tpu_neg   : BFW_xmac_alu_flags_tpu_neg;   // TPU neg flag
	unsigned int tpu_ovf   : BFW_xmac_alu_flags_tpu_ovf;   // TPU ovf flag
	unsigned int reserved1 : BFW_xmac_alu_flags_reserved1; // reserved
	unsigned int rxcnt_wr2 : BFW_xmac_alu_flags_rxcnt_wr2; // 1: rx_count equals wr2
	unsigned int txcnt_wr7 : BFW_xmac_alu_flags_txcnt_wr7; // 1: tx_count equals wr7
	unsigned int reserved2 : BFW_xmac_alu_flags_reserved2; // reserved
} XMAC_ALU_FLAGS_BIT_T;

typedef union {
	unsigned int         val;
	XMAC_ALU_FLAGS_BIT_T bf;
} XMAC_ALU_FLAGS_T;

// ---------------------------------------------------------------------
// Register xmac_status_int
// => xMAC Status Internal Register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_status_int   0x000008DCU
#define Adr_xmac0_xmac_status_int 0x001608DCU
#define Adr_xmac1_xmac_status_int 0x001618DCU
#define Adr_xmac2_xmac_status_int 0x001628DCU
#define Adr_xmac3_xmac_status_int 0x001638DCU

#define MSK_xmac_status_int_rpm_hit0    0x00000001U // [0]
#define SRT_xmac_status_int_rpm_hit0    0           
#define MSK_xmac_status_int_rpm_hit1    0x00000002U // [1]
#define SRT_xmac_status_int_rpm_hit1    1           
#define MSK_xmac_status_int_rpm_hit0or1 0x00000004U // [2]
#define SRT_xmac_status_int_rpm_hit0or1 2           
#define MSK_xmac_status_int_tpm_hit0    0x00000008U // [3]
#define SRT_xmac_status_int_tpm_hit0    3           
#define MSK_xmac_status_int_tpm_hit1    0x00000010U // [4]
#define SRT_xmac_status_int_tpm_hit1    4           
#define MSK_xmac_status_int_tpm_hit0or1 0x00000020U // [5]
#define SRT_xmac_status_int_tpm_hit0or1 5           
#define MSK_xmac_status_int_lbit_eq_bit 0x00000040U // [6]
#define SRT_xmac_status_int_lbit_eq_bit 6           
#define MSK_xmac_status_int_tx_eq_wr45  0x00000080U // [7]
#define SRT_xmac_status_int_tx_eq_wr45  7           
#define MSK_xmac_status_int_rx_crc_ok   0x00000100U // [8]
#define SRT_xmac_status_int_rx_crc_ok   8           
#define MSK_xmac_status_int_tx_crc_ok   0x00000200U // [9]
#define SRT_xmac_status_int_tx_crc_ok   9           
#define MSK_xmac_status_int_recbit      0x00000800U // [11]
#define SRT_xmac_status_int_recbit      11          
#define MSK_xmac_status_int_brec        0x00001000U // [12]
#define SRT_xmac_status_int_brec        12          
#define MSK_xmac_status_int_btran       0x00002000U // [13]
#define SRT_xmac_status_int_btran       13          
#define MSK_xmac_status_int_arb_lost    0x00004000U // [14]
#define SRT_xmac_status_int_arb_lost    14          
#define MSK_xmac_status_int_zero        0x00008000U // [15]
#define SRT_xmac_status_int_zero        15          

enum {
	BFW_xmac_status_int_rpm_hit0    = 1,  // [0]
	BFW_xmac_status_int_rpm_hit1    = 1,  // [1]
	BFW_xmac_status_int_rpm_hit0or1 = 1,  // [2]
	BFW_xmac_status_int_tpm_hit0    = 1,  // [3]
	BFW_xmac_status_int_tpm_hit1    = 1,  // [4]
	BFW_xmac_status_int_tpm_hit0or1 = 1,  // [5]
	BFW_xmac_status_int_lbit_eq_bit = 1,  // [6]
	BFW_xmac_status_int_tx_eq_wr45  = 1,  // [7]
	BFW_xmac_status_int_rx_crc_ok   = 1,  // [8]
	BFW_xmac_status_int_tx_crc_ok   = 1,  // [9]
	BFW_xmac_status_int_reserved1   = 1,  // [10]
	BFW_xmac_status_int_recbit      = 1,  // [11]
	BFW_xmac_status_int_brec        = 1,  // [12]
	BFW_xmac_status_int_btran       = 1,  // [13]
	BFW_xmac_status_int_arb_lost    = 1,  // [14]
	BFW_xmac_status_int_zero        = 1,  // [15]
	BFW_xmac_status_int_reserved2   = 16  // [31:16]
};

typedef struct XMAC_STATUS_INT_BIT_Ttag {
	unsigned int rpm_hit0    : BFW_xmac_status_int_rpm_hit0;    // receive pattern 0 matches
	unsigned int rpm_hit1    : BFW_xmac_status_int_rpm_hit1;    // receive pattern 1 matches
	unsigned int rpm_hit0or1 : BFW_xmac_status_int_rpm_hit0or1; // receive pattern 0 or pattern 1 matches
	unsigned int tpm_hit0    : BFW_xmac_status_int_tpm_hit0;    // transmit pattern 0 matches
	unsigned int tpm_hit1    : BFW_xmac_status_int_tpm_hit1;    // transmit pattern 1 matches
	unsigned int tpm_hit0or1 : BFW_xmac_status_int_tpm_hit0or1; // transmit pattern 0 or pattern 1 matches
	unsigned int lbit_eq_bit : BFW_xmac_status_int_lbit_eq_bit; // last received bit = actually received bit
	unsigned int tx_eq_wr45  : BFW_xmac_status_int_tx_eq_wr45;  // compare of tx with wr4(value) and wr5(mask):
	                                                        // wr5 defines, which bits of tx and wr4 are to be compared
	                                                        // (1: compare this bit position, 0: ignore this bit position)
	unsigned int rx_crc_ok   : BFW_xmac_status_int_rx_crc_ok;   // compare of rx_crc_l/_h with wr0/1:
	unsigned int tx_crc_ok   : BFW_xmac_status_int_tx_crc_ok;   // compare of tx_crc_l/_h with wr8/9:
	unsigned int reserved1   : BFW_xmac_status_int_reserved1;   // reserved
	unsigned int recbit      : BFW_xmac_status_int_recbit;      // acutally received bit
	unsigned int brec        : BFW_xmac_status_int_brec;        // bit received (active for 1 cc)
	unsigned int btran       : BFW_xmac_status_int_btran;       // bit transmitted (active for 1 cc)
	unsigned int arb_lost    : BFW_xmac_status_int_arb_lost;    // Arbitration Lost: transmitted bit <> received bit
	unsigned int zero        : BFW_xmac_status_int_zero;        // always 0
	unsigned int reserved2   : BFW_xmac_status_int_reserved2;   // reserved
} XMAC_STATUS_INT_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_STATUS_INT_BIT_T bf;
} XMAC_STATUS_INT_T;

// ---------------------------------------------------------------------
// Register xmac_stat_bits
// => xMAC stat_bits:
//    set and reset by hw_support bits (set_stat and reset_stat) and selected by src1_adr,
//    accessible by all RPUs and TPUs with higher set than reset priority
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_stat_bits   0x000008E0U
#define Adr_xmac0_xmac_stat_bits 0x001608E0U
#define Adr_xmac1_xmac_stat_bits 0x001618E0U
#define Adr_xmac2_xmac_stat_bits 0x001628E0U
#define Adr_xmac3_xmac_stat_bits 0x001638E0U

#define MSK_xmac_stat_bits_stat_bits 0x0000ffffU // [15:0]
#define SRT_xmac_stat_bits_stat_bits 0           

enum {
	BFW_xmac_stat_bits_stat_bits = 16, // [15:0]
	BFW_xmac_stat_bits_reserved1 = 16  // [31:16]
};

typedef struct XMAC_STAT_BITS_BIT_Ttag {
	unsigned int stat_bits : BFW_xmac_stat_bits_stat_bits; // seperate bits selected by lower bits of src1_adr, if set_stat/reset_stat are active 
	unsigned int reserved1 : BFW_xmac_stat_bits_reserved1; // reserved
} XMAC_STAT_BITS_BIT_T;

typedef union {
	unsigned int         val;
	XMAC_STAT_BITS_BIT_T bf;
} XMAC_STAT_BITS_T;

// ---------------------------------------------------------------------
// Register xmac_status_mii
// => xMAC MII receive status register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_status_mii   0x000008E4U
#define Adr_xmac0_xmac_status_mii 0x001608E4U
#define Adr_xmac1_xmac_status_mii 0x001618E4U
#define Adr_xmac2_xmac_status_mii 0x001628E4U
#define Adr_xmac3_xmac_status_mii 0x001638E4U

#define MSK_xmac_status_mii_rx_dv       0x00000001U // [0]
#define SRT_xmac_status_mii_rx_dv       0           
#define MSK_xmac_status_mii_rx_err      0x00000002U // [1]
#define SRT_xmac_status_mii_rx_err      1           
#define MSK_xmac_status_mii_crs         0x00000004U // [2]
#define SRT_xmac_status_mii_crs         2           
#define MSK_xmac_status_mii_col         0x00000008U // [3]
#define SRT_xmac_status_mii_col         3           
#define MSK_xmac_status_mii_s_nc        0x00000010U // [4]
#define SRT_xmac_status_mii_s_nc        4           
#define MSK_xmac_status_mii_v_ne_ns_nc  0x00000020U // [5]
#define SRT_xmac_status_mii_v_ne_ns_nc  5           
#define MSK_xmac_status_mii_v_ne_nc     0x00000040U // [6]
#define SRT_xmac_status_mii_v_ne_nc     6           
#define MSK_xmac_status_mii_v_ne_ns     0x00000080U // [7]
#define SRT_xmac_status_mii_v_ne_ns     7           
#define MSK_xmac_status_mii_v_ne        0x00000100U // [8]
#define SRT_xmac_status_mii_v_ne        8           
#define MSK_xmac_status_mii_v_ne_s_nc   0x00000200U // [9]
#define SRT_xmac_status_mii_v_ne_s_nc   9           
#define MSK_xmac_status_mii_v_ne_s      0x00000400U // [10]
#define SRT_xmac_status_mii_v_ne_s      10          
#define MSK_xmac_status_mii_v_ne_nc_p0  0x00000800U // [11]
#define SRT_xmac_status_mii_v_ne_nc_p0  11          
#define MSK_xmac_status_mii_v_ne_nc_p1  0x00001000U // [12]
#define SRT_xmac_status_mii_v_ne_nc_p1  12          
#define MSK_xmac_status_mii_v_ne_nc_p01 0x00002000U // [13]
#define SRT_xmac_status_mii_v_ne_nc_p01 13          

enum {
	BFW_xmac_status_mii_rx_dv       = 1,  // [0]
	BFW_xmac_status_mii_rx_err      = 1,  // [1]
	BFW_xmac_status_mii_crs         = 1,  // [2]
	BFW_xmac_status_mii_col         = 1,  // [3]
	BFW_xmac_status_mii_s_nc        = 1,  // [4]
	BFW_xmac_status_mii_v_ne_ns_nc  = 1,  // [5]
	BFW_xmac_status_mii_v_ne_nc     = 1,  // [6]
	BFW_xmac_status_mii_v_ne_ns     = 1,  // [7]
	BFW_xmac_status_mii_v_ne        = 1,  // [8]
	BFW_xmac_status_mii_v_ne_s_nc   = 1,  // [9]
	BFW_xmac_status_mii_v_ne_s      = 1,  // [10]
	BFW_xmac_status_mii_v_ne_nc_p0  = 1,  // [11]
	BFW_xmac_status_mii_v_ne_nc_p1  = 1,  // [12]
	BFW_xmac_status_mii_v_ne_nc_p01 = 1,  // [13]
	BFW_xmac_status_mii_reserved1   = 18  // [31:14]
};

typedef struct XMAC_STATUS_MII_BIT_Ttag {
	unsigned int rx_dv       : BFW_xmac_status_mii_rx_dv;       // mii or rmii receive data valid
	unsigned int rx_err      : BFW_xmac_status_mii_rx_err;      // mii rx_err
	unsigned int crs         : BFW_xmac_status_mii_crs;         // mii crs
	unsigned int col         : BFW_xmac_status_mii_col;         // mii col
	unsigned int s_nc        : BFW_xmac_status_mii_s_nc;        // crs & !col
	unsigned int v_ne_ns_nc  : BFW_xmac_status_mii_v_ne_ns_nc;  // rx_dv & !rx_err & !crs & !col
	unsigned int v_ne_nc     : BFW_xmac_status_mii_v_ne_nc;     // rx_dv & !rx_err &        !col
	unsigned int v_ne_ns     : BFW_xmac_status_mii_v_ne_ns;     // rx_dv & !rx_err & !crs
	unsigned int v_ne        : BFW_xmac_status_mii_v_ne;        // rx_dv & !rx_err
	unsigned int v_ne_s_nc   : BFW_xmac_status_mii_v_ne_s_nc;   // rx_dv & !rx_err &  crs & !col
	unsigned int v_ne_s      : BFW_xmac_status_mii_v_ne_s;      // rx_dv & !rx_err &  crs
	unsigned int v_ne_nc_p0  : BFW_xmac_status_mii_v_ne_nc_p0;  // rx_dv & !rx_err &        !col &  rpm_hit0
	unsigned int v_ne_nc_p1  : BFW_xmac_status_mii_v_ne_nc_p1;  // rx_dv & !rx_err &        !col &              rpm_hit1
	unsigned int v_ne_nc_p01 : BFW_xmac_status_mii_v_ne_nc_p01; // rx_dv & !rx_err &        !col & (rpm_hit0 |  rpm_hit1)
	unsigned int reserved1   : BFW_xmac_status_mii_reserved1;   // reserved
} XMAC_STATUS_MII_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_STATUS_MII_BIT_T bf;
} XMAC_STATUS_MII_T;

// ---------------------------------------------------------------------
// Register xmac_status_mii2
// => xMAC 2nd MII receive status register
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_status_mii2   0x000008E8U
#define Adr_xmac0_xmac_status_mii2 0x001608E8U
#define Adr_xmac1_xmac_status_mii2 0x001618E8U
#define Adr_xmac2_xmac_status_mii2 0x001628E8U
#define Adr_xmac3_xmac_status_mii2 0x001638E8U

#define MSK_xmac_status_mii2_dv                   0x00000001U // [0]
#define SRT_xmac_status_mii2_dv                   0           
#define MSK_xmac_status_mii2_miif_error           0x00000002U // [1]
#define SRT_xmac_status_mii2_miif_error           1           
#define MSK_xmac_status_mii2_miif_ovfl            0x00000004U // [2]
#define SRT_xmac_status_mii2_miif_ovfl            2           
#define MSK_xmac_status_mii2_miif_unfl            0x00000008U // [3]
#define SRT_xmac_status_mii2_miif_unfl            3           
#define MSK_xmac_status_mii2_miif_error_short_dv  0x00000010U // [4]
#define SRT_xmac_status_mii2_miif_error_short_dv  4           
#define MSK_xmac_status_mii2_miif_error_short_ifg 0x00000020U // [5]
#define SRT_xmac_status_mii2_miif_error_short_ifg 5           
#define MSK_xmac_status_mii2_v_ne_nc              0x00000040U // [6]
#define SRT_xmac_status_mii2_v_ne_nc              6           
#define MSK_xmac_status_mii2_v_ne                 0x00000080U // [7]
#define SRT_xmac_status_mii2_v_ne                 7           
#define MSK_xmac_status_mii2_v_ne_nc_p0           0x00000100U // [8]
#define SRT_xmac_status_mii2_v_ne_nc_p0           8           
#define MSK_xmac_status_mii2_v_ne_nc_p1           0x00000200U // [9]
#define SRT_xmac_status_mii2_v_ne_nc_p1           9           
#define MSK_xmac_status_mii2_v_ne_nc_p01          0x00000400U // [10]
#define SRT_xmac_status_mii2_v_ne_nc_p01          10          
#define MSK_xmac_status_mii2_rx_err_was_here      0x00002000U // [13]
#define SRT_xmac_status_mii2_rx_err_was_here      13          
#define MSK_xmac_status_mii2_col_was_here         0x00004000U // [14]
#define SRT_xmac_status_mii2_col_was_here         14          
#define MSK_xmac_status_mii2_crs_was_here         0x00008000U // [15]
#define SRT_xmac_status_mii2_crs_was_here         15          

enum {
	BFW_xmac_status_mii2_dv                   = 1,  // [0]
	BFW_xmac_status_mii2_miif_error           = 1,  // [1]
	BFW_xmac_status_mii2_miif_ovfl            = 1,  // [2]
	BFW_xmac_status_mii2_miif_unfl            = 1,  // [3]
	BFW_xmac_status_mii2_miif_error_short_dv  = 1,  // [4]
	BFW_xmac_status_mii2_miif_error_short_ifg = 1,  // [5]
	BFW_xmac_status_mii2_v_ne_nc              = 1,  // [6]
	BFW_xmac_status_mii2_v_ne                 = 1,  // [7]
	BFW_xmac_status_mii2_v_ne_nc_p0           = 1,  // [8]
	BFW_xmac_status_mii2_v_ne_nc_p1           = 1,  // [9]
	BFW_xmac_status_mii2_v_ne_nc_p01          = 1,  // [10]
	BFW_xmac_status_mii2_reserved1            = 2,  // [12:11]
	BFW_xmac_status_mii2_rx_err_was_here      = 1,  // [13]
	BFW_xmac_status_mii2_col_was_here         = 1,  // [14]
	BFW_xmac_status_mii2_crs_was_here         = 1,  // [15]
	BFW_xmac_status_mii2_reserved2            = 16  // [31:16]
};

typedef struct XMAC_STATUS_MII2_BIT_Ttag {
	unsigned int dv                   : BFW_xmac_status_mii2_dv;                   // MII-nibble-fifo data valid
	unsigned int miif_error           : BFW_xmac_status_mii2_miif_error;           // any error at the MII-nibble-fifo occured,
	                                                        // reset by setting xmac_config_nibble_fifo-fifo_depth=0
	unsigned int miif_ovfl            : BFW_xmac_status_mii2_miif_ovfl;            // MII-nibble-fifo overflow,
	                                                        // reset by setting xmac_config_nibble_fifo-fifo_depth=0
	unsigned int miif_unfl            : BFW_xmac_status_mii2_miif_unfl;            // MII-nibble-fifo underflow,
	                                                        // reset by setting xmac_config_nibble_fifo-fifo_depth=0
	unsigned int miif_error_short_dv  : BFW_xmac_status_mii2_miif_error_short_dv;  // rx_dv was active for very short time,
	                                                        // reset by setting xmac_config_nibble_fifo-fifo_depth=0
	unsigned int miif_error_short_ifg : BFW_xmac_status_mii2_miif_error_short_ifg; // rx_dv was inactive for very short time,
	                                                        // reset by setting xmac_config_nibble_fifo-fifo_depth=0
	unsigned int v_ne_nc              : BFW_xmac_status_mii2_v_ne_nc;              // dv & !rx_err & !col
	unsigned int v_ne                 : BFW_xmac_status_mii2_v_ne;                 // dv & !rx_err
	unsigned int v_ne_nc_p0           : BFW_xmac_status_mii2_v_ne_nc_p0;           // dv & !rx_err & !col &  rpm_hit0
	unsigned int v_ne_nc_p1           : BFW_xmac_status_mii2_v_ne_nc_p1;           // dv & !rx_err & !col &             rpm_hit1
	unsigned int v_ne_nc_p01          : BFW_xmac_status_mii2_v_ne_nc_p01;          // dv & !rx_err & !col & (rpm_hit0 |  rpm_hit1)
	unsigned int reserved1            : BFW_xmac_status_mii2_reserved1;            // reserved
	unsigned int rx_err_was_here      : BFW_xmac_status_mii2_rx_err_was_here;      // rx_err was here:
	                                                        // reset with rx_err_reset of xmac_config_sbu
	                                                        // set with rx_err xor rx_err_low_active of xmac_config_sbu
	unsigned int col_was_here         : BFW_xmac_status_mii2_col_was_here;         // col was here:
	                                                        // reset with col_reset of xmac_config_sbu
	                                                        // set with col xor col_low_active of xmac_config_sbu
	unsigned int crs_was_here         : BFW_xmac_status_mii2_crs_was_here;         // crs was here:
	                                                        // reset with crs_reset of xmac_config_sbu
	                                                        // set with crs xor crs_low_active of xmac_config_sbu
	unsigned int reserved2            : BFW_xmac_status_mii2_reserved2;            // reserved
} XMAC_STATUS_MII2_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_STATUS_MII2_BIT_T bf;
} XMAC_STATUS_MII2_T;

// ---------------------------------------------------------------------
// Register xmac_config_mii
// => xMAC MII transmit config register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_config_mii   0x000008ECU
#define Adr_xmac0_xmac_config_mii 0x001608ECU
#define Adr_xmac1_xmac_config_mii 0x001618ECU
#define Adr_xmac2_xmac_config_mii 0x001628ECU
#define Adr_xmac3_xmac_config_mii 0x001638ECU

#define MSK_xmac_config_mii_tx_en  0x00000001U // [0]
#define SRT_xmac_config_mii_tx_en  0           
#define MSK_xmac_config_mii_tx_err 0x00000002U // [1]
#define SRT_xmac_config_mii_tx_err 1           

enum {
	BFW_xmac_config_mii_tx_en     = 1,  // [0]
	BFW_xmac_config_mii_tx_err    = 1,  // [1]
	BFW_xmac_config_mii_reserved1 = 30  // [31:2]
};

typedef struct XMAC_CONFIG_MII_BIT_Ttag {
	unsigned int tx_en     : BFW_xmac_config_mii_tx_en;     // mii tx_en 
	                                                        // Synchronized to mii tx_clk
	unsigned int tx_err    : BFW_xmac_config_mii_tx_err;    // mii tx_err 
	                                                        // Synchronized to mii tx_clk
	unsigned int reserved1 : BFW_xmac_config_mii_reserved1; // reserved
} XMAC_CONFIG_MII_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_CONFIG_MII_BIT_T bf;
} XMAC_CONFIG_MII_T;

// ---------------------------------------------------------------------
// Register xmac_config_nibble_fifo
// => xMAC mii nibble fifo config register
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_config_nibble_fifo   0x000008F0U
#define Adr_xmac0_xmac_config_nibble_fifo 0x001608F0U
#define Adr_xmac1_xmac_config_nibble_fifo 0x001618F0U
#define Adr_xmac2_xmac_config_nibble_fifo 0x001628F0U
#define Adr_xmac3_xmac_config_nibble_fifo 0x001638F0U

#define MSK_xmac_config_nibble_fifo_fifo_depth   0x0000000fU // [3:0]
#define SRT_xmac_config_nibble_fifo_fifo_depth   0           
#define MSK_xmac_config_nibble_fifo_read_phase   0x00000030U // [5:4]
#define SRT_xmac_config_nibble_fifo_read_phase   4           
#define MSK_xmac_config_nibble_fifo_sample_phase 0x000000c0U // [7:6]
#define SRT_xmac_config_nibble_fifo_sample_phase 6           
#define MSK_xmac_config_nibble_fifo_output_phase 0x00000300U // [9:8]
#define SRT_xmac_config_nibble_fifo_output_phase 8           

enum {
	BFW_xmac_config_nibble_fifo_fifo_depth   = 4,  // [3:0]
	BFW_xmac_config_nibble_fifo_read_phase   = 2,  // [5:4]
	BFW_xmac_config_nibble_fifo_sample_phase = 2,  // [7:6]
	BFW_xmac_config_nibble_fifo_output_phase = 2,  // [9:8]
	BFW_xmac_config_nibble_fifo_reserved1    = 22  // [31:10]
};

typedef struct XMAC_CONFIG_NIBBLE_FIFO_BIT_Ttag {
	unsigned int fifo_depth   : BFW_xmac_config_nibble_fifo_fifo_depth;   // Fill level (= number of nibbles) up to which mii-nibble-fifo is filled, before reading to rx register starts. 
	                                                        // 0 means, mii-nibble-fifo is turned off, data is sampled directly to rx register (with jitter), fifo is reset.
	unsigned int read_phase   : BFW_xmac_config_nibble_fifo_read_phase;   // Phases, in which nibbles from MII-nibble-fifo are read to rx register: 
	                                                        // If mii-nibble-fifo is enabled (fifo_depth!=0), the sync-signal (copies data to rx register) is generated by a counter (instead of rx_clk),
	                                                        // that activates the sync-signal every 4 clock-cycles. 'read_phase' defines the phase of that counter, in which sync-signal is active.
	                                                        // If mii_tx_clk is derived from system_clk (e.g. sercos), this allows to synchronize RPU and TPU program flow on mii_tx_clk.
	unsigned int sample_phase : BFW_xmac_config_nibble_fifo_sample_phase; // Phase of mii_rx_clk, where mii_rx_d, rx_dv, rx_err, crs, col are sampled: 
	                                                        // 0: sample at posedge rx_clk + 2cc ~ negedge rx_clk
	                                                        // 1: sample at posedge rx_clk + 1cc
	                                                        // 2: sample at negedge rx_clk + 2cc ~ posedge rx_clk
	                                                        // 3: sample at negedge rx_clk + 1cc
	unsigned int output_phase : BFW_xmac_config_nibble_fifo_output_phase; // Phase of mii_tx_clk, where mii_tx_d, tx_en, tx_err outputs are changed: 
	                                                        // 0: change output at posedge tx_clk + 3cc ~ negedge tx_clk + 1cc
	                                                        // 1: change output at posedge tx_clk + 2cc
	                                                        // 2: change output at negedge tx_clk + 3cc ~ posedge tx_clk + 1cc
	                                                        // 3: change output at negedge tx_clk + 2cc
	unsigned int reserved1    : BFW_xmac_config_nibble_fifo_reserved1;    // reserved
} XMAC_CONFIG_NIBBLE_FIFO_BIT_T;

typedef union {
	unsigned int                  val;
	XMAC_CONFIG_NIBBLE_FIFO_BIT_T bf;
} XMAC_CONFIG_NIBBLE_FIFO_T;

// ---------------------------------------------------------------------
// Register xmac_config_sbu
// => xMAC Config Register for SBU
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_config_sbu   0x000008F4U
#define Adr_xmac0_xmac_config_sbu 0x001608F4U
#define Adr_xmac1_xmac_config_sbu 0x001618F4U
#define Adr_xmac2_xmac_config_sbu 0x001628F4U
#define Adr_xmac3_xmac_config_sbu 0x001638F4U

#define MSK_xmac_config_sbu_sync_to_eclk      0x00000001U // [0]
#define SRT_xmac_config_sbu_sync_to_eclk      0           
#define MSK_xmac_config_sbu_sync_to_bitstream 0x00000002U // [1]
#define SRT_xmac_config_sbu_sync_to_bitstream 1           
#define MSK_xmac_config_sbu_sync_to_posedge   0x00000004U // [2]
#define SRT_xmac_config_sbu_sync_to_posedge   2           
#define MSK_xmac_config_sbu_sync_to_negedge   0x00000008U // [3]
#define SRT_xmac_config_sbu_sync_to_negedge   3           
#define MSK_xmac_config_sbu_count_modulo      0x00000010U // [4]
#define SRT_xmac_config_sbu_count_modulo      4           
#define MSK_xmac_config_sbu_invert_bit        0x00000020U // [5]
#define SRT_xmac_config_sbu_invert_bit        5           
#define MSK_xmac_config_sbu_predivide_clk     0x00000040U // [6]
#define SRT_xmac_config_sbu_predivide_clk     6           
#define MSK_xmac_config_sbu_ext_mode          0x00000300U // [9:8]
#define SRT_xmac_config_sbu_ext_mode          8           
#define MSK_xmac_config_sbu_rx_err_low_active 0x00000400U // [10]
#define SRT_xmac_config_sbu_rx_err_low_active 10          
#define MSK_xmac_config_sbu_rx_err_reset      0x00000800U // [11]
#define SRT_xmac_config_sbu_rx_err_reset      11          
#define MSK_xmac_config_sbu_col_low_active    0x00001000U // [12]
#define SRT_xmac_config_sbu_col_low_active    12          
#define MSK_xmac_config_sbu_col_reset         0x00002000U // [13]
#define SRT_xmac_config_sbu_col_reset         13          
#define MSK_xmac_config_sbu_crs_low_active    0x00004000U // [14]
#define SRT_xmac_config_sbu_crs_low_active    14          
#define MSK_xmac_config_sbu_crs_reset         0x00008000U // [15]
#define SRT_xmac_config_sbu_crs_reset         15          

enum {
	BFW_xmac_config_sbu_sync_to_eclk      = 1,  // [0]
	BFW_xmac_config_sbu_sync_to_bitstream = 1,  // [1]
	BFW_xmac_config_sbu_sync_to_posedge   = 1,  // [2]
	BFW_xmac_config_sbu_sync_to_negedge   = 1,  // [3]
	BFW_xmac_config_sbu_count_modulo      = 1,  // [4]
	BFW_xmac_config_sbu_invert_bit        = 1,  // [5]
	BFW_xmac_config_sbu_predivide_clk     = 1,  // [6]
	BFW_xmac_config_sbu_reserved1         = 1,  // [7]
	BFW_xmac_config_sbu_ext_mode          = 2,  // [9:8]
	BFW_xmac_config_sbu_rx_err_low_active = 1,  // [10]
	BFW_xmac_config_sbu_rx_err_reset      = 1,  // [11]
	BFW_xmac_config_sbu_col_low_active    = 1,  // [12]
	BFW_xmac_config_sbu_col_reset         = 1,  // [13]
	BFW_xmac_config_sbu_crs_low_active    = 1,  // [14]
	BFW_xmac_config_sbu_crs_reset         = 1,  // [15]
	BFW_xmac_config_sbu_reserved2         = 16  // [31:16]
};

typedef struct XMAC_CONFIG_SBU_BIT_Ttag {
	unsigned int sync_to_eclk      : BFW_xmac_config_sbu_sync_to_eclk;      // Synchronize rate_multiplier to external clock, 
	                                                        // rate_mul is set to rate_mul_start at pos/negedge of eclk
	unsigned int sync_to_bitstream : BFW_xmac_config_sbu_sync_to_bitstream; // Synchronize rate_multiplier to data_in, 
	                                                        // rate_mul is set to rate_mul_start at pos/negedge of data_in
	unsigned int sync_to_posedge   : BFW_xmac_config_sbu_sync_to_posedge;   // Synchronization of rate_multiplier works on positive edges of data_in/eclk 
	unsigned int sync_to_negedge   : BFW_xmac_config_sbu_sync_to_negedge;   // Synchronization of rate_multiplier works on negative edges of data_in/eclk 
	unsigned int count_modulo      : BFW_xmac_config_sbu_count_modulo;      // rate_multiplier continues counting after maximum value is reached 
	unsigned int invert_bit        : BFW_xmac_config_sbu_invert_bit;        // invert incoming bit 
	unsigned int predivide_clk     : BFW_xmac_config_sbu_predivide_clk;     // use a clock frequency divided by 256 
	unsigned int reserved1         : BFW_xmac_config_sbu_reserved1;         // reserved
	unsigned int ext_mode          : BFW_xmac_config_sbu_ext_mode;          // 00 single bit, 01 mii, 10,11 reserved  
	unsigned int rx_err_low_active : BFW_xmac_config_sbu_rx_err_low_active; // to generate rx_err_was_here signal: 
	                                                        // 0: activate rx_err_was_here if rx_err=1,
	                                                        // 1: activate rx_err_was_here if rx_err=0,
	unsigned int rx_err_reset      : BFW_xmac_config_sbu_rx_err_reset;      // to reset rx_err_was_here signal 
	unsigned int col_low_active    : BFW_xmac_config_sbu_col_low_active;    // to generate col_was_here signal: 
	                                                        // 0: activate col_was_here if col=1,
	                                                        // 1: activate col_was_here if col=0,
	unsigned int col_reset         : BFW_xmac_config_sbu_col_reset;         // to reset col_was_here signal 
	unsigned int crs_low_active    : BFW_xmac_config_sbu_crs_low_active;    // to generate crs_was_here signal: 
	                                                        // 0: activate crs_was_here if crs=1,
	                                                        // 1: activate crs_was_here if crs=0,
	unsigned int crs_reset         : BFW_xmac_config_sbu_crs_reset;         // to reset crs_was_here signal 
	unsigned int reserved2         : BFW_xmac_config_sbu_reserved2;         // reserved
} XMAC_CONFIG_SBU_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_CONFIG_SBU_BIT_T bf;
} XMAC_CONFIG_SBU_T;

// ---------------------------------------------------------------------
// Register xmac_sbu_rate_mul_add
// => xMAC SBU rate_mul_add:
//    Value added each cc to Rate Multiplier.
//    rate_mul_add = eclk / clk * 65536
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000001
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sbu_rate_mul_add   0x000008F8U
#define Adr_xmac0_xmac_sbu_rate_mul_add 0x001608F8U
#define Adr_xmac1_xmac_sbu_rate_mul_add 0x001618F8U
#define Adr_xmac2_xmac_sbu_rate_mul_add 0x001628F8U
#define Adr_xmac3_xmac_sbu_rate_mul_add 0x001638F8U

#define MSK_xmac_sbu_rate_mul_add_rate_mul_add 0x0000ffffU // [15:0]
#define SRT_xmac_sbu_rate_mul_add_rate_mul_add 0           

enum {
	BFW_xmac_sbu_rate_mul_add_rate_mul_add = 16, // [15:0]
	BFW_xmac_sbu_rate_mul_add_reserved1    = 16  // [31:16]
};

typedef struct XMAC_SBU_RATE_MUL_ADD_BIT_Ttag {
	unsigned int rate_mul_add : BFW_xmac_sbu_rate_mul_add_rate_mul_add; // Value added each cc to Rate Multiplier. 
	                                                        // If rate_mul_add=1:      rate_mul counts from [rate_mul_start:65535]
	                                                        // else (rate_mul_add!=1): rate_mul counts from [0:65535]
	unsigned int reserved1    : BFW_xmac_sbu_rate_mul_add_reserved1;    // reserved
} XMAC_SBU_RATE_MUL_ADD_BIT_T;

typedef union {
	unsigned int                val;
	XMAC_SBU_RATE_MUL_ADD_BIT_T bf;
} XMAC_SBU_RATE_MUL_ADD_T;

// ---------------------------------------------------------------------
// Register xmac_sbu_rate_mul_start
// => xMAC SBU rate_mul_start
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sbu_rate_mul_start   0x000008FCU
#define Adr_xmac0_xmac_sbu_rate_mul_start 0x001608FCU
#define Adr_xmac1_xmac_sbu_rate_mul_start 0x001618FCU
#define Adr_xmac2_xmac_sbu_rate_mul_start 0x001628FCU
#define Adr_xmac3_xmac_sbu_rate_mul_start 0x001638FCU

#define MSK_xmac_sbu_rate_mul_start_rate_mul_start 0x0000ffffU // [15:0]
#define SRT_xmac_sbu_rate_mul_start_rate_mul_start 0           

enum {
	BFW_xmac_sbu_rate_mul_start_rate_mul_start = 16, // [15:0]
	BFW_xmac_sbu_rate_mul_start_reserved1      = 16  // [31:16]
};

typedef struct XMAC_SBU_RATE_MUL_START_BIT_Ttag {
	unsigned int rate_mul_start : BFW_xmac_sbu_rate_mul_start_rate_mul_start; // Value, the Rate Multiplier is set to at sync 
	unsigned int reserved1      : BFW_xmac_sbu_rate_mul_start_reserved1;      // reserved
} XMAC_SBU_RATE_MUL_START_BIT_T;

typedef union {
	unsigned int                  val;
	XMAC_SBU_RATE_MUL_START_BIT_T bf;
} XMAC_SBU_RATE_MUL_START_T;

// ---------------------------------------------------------------------
// Register xmac_sbu_rate_mul
// => xMAC SBU rate_mul
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_sbu_rate_mul   0x00000900U
#define Adr_xmac0_xmac_sbu_rate_mul 0x00160900U
#define Adr_xmac1_xmac_sbu_rate_mul 0x00161900U
#define Adr_xmac2_xmac_sbu_rate_mul 0x00162900U
#define Adr_xmac3_xmac_sbu_rate_mul 0x00163900U

#define MSK_xmac_sbu_rate_mul_rate_mul 0x0000ffffU // [15:0]
#define SRT_xmac_sbu_rate_mul_rate_mul 0           

enum {
	BFW_xmac_sbu_rate_mul_rate_mul  = 16, // [15:0]
	BFW_xmac_sbu_rate_mul_reserved1 = 16  // [31:16]
};

typedef struct XMAC_SBU_RATE_MUL_BIT_Ttag {
	unsigned int rate_mul  : BFW_xmac_sbu_rate_mul_rate_mul;  // current value of Rate Multiplier
	unsigned int reserved1 : BFW_xmac_sbu_rate_mul_reserved1; // reserved
} XMAC_SBU_RATE_MUL_BIT_T;

typedef union {
	unsigned int            val;
	XMAC_SBU_RATE_MUL_BIT_T bf;
} XMAC_SBU_RATE_MUL_T;

// ---------------------------------------------------------------------
// Register xmac_start_sample_pos
// => xMAC SBU start_sample_pos
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_start_sample_pos   0x00000904U
#define Adr_xmac0_xmac_start_sample_pos 0x00160904U
#define Adr_xmac1_xmac_start_sample_pos 0x00161904U
#define Adr_xmac2_xmac_start_sample_pos 0x00162904U
#define Adr_xmac3_xmac_start_sample_pos 0x00163904U

#define MSK_xmac_start_sample_pos_start_sample_pos 0x0000ffffU // [15:0]
#define SRT_xmac_start_sample_pos_start_sample_pos 0           

enum {
	BFW_xmac_start_sample_pos_start_sample_pos = 16, // [15:0]
	BFW_xmac_start_sample_pos_reserved1        = 16  // [31:16]
};

typedef struct XMAC_START_SAMPLE_POS_BIT_Ttag {
	unsigned int start_sample_pos : BFW_xmac_start_sample_pos_start_sample_pos; // data is sampled and averaged if start_sample_pos <= rate_mul < stop_sample_pos 
	unsigned int reserved1        : BFW_xmac_start_sample_pos_reserved1;        // reserved
} XMAC_START_SAMPLE_POS_BIT_T;

typedef union {
	unsigned int                val;
	XMAC_START_SAMPLE_POS_BIT_T bf;
} XMAC_START_SAMPLE_POS_T;

// ---------------------------------------------------------------------
// Register xmac_stop_sample_pos
// => xMAC SBU stop_sample_pos
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_stop_sample_pos   0x00000908U
#define Adr_xmac0_xmac_stop_sample_pos 0x00160908U
#define Adr_xmac1_xmac_stop_sample_pos 0x00161908U
#define Adr_xmac2_xmac_stop_sample_pos 0x00162908U
#define Adr_xmac3_xmac_stop_sample_pos 0x00163908U

#define MSK_xmac_stop_sample_pos_stop_sample_pos 0x0000ffffU // [15:0]
#define SRT_xmac_stop_sample_pos_stop_sample_pos 0           

enum {
	BFW_xmac_stop_sample_pos_stop_sample_pos = 16, // [15:0]
	BFW_xmac_stop_sample_pos_reserved1       = 16  // [31:16]
};

typedef struct XMAC_STOP_SAMPLE_POS_BIT_Ttag {
	unsigned int stop_sample_pos : BFW_xmac_stop_sample_pos_stop_sample_pos; // data is sampled and averaged if start_sample_pos <= rate_mul < stop_sample_pos 
	unsigned int reserved1       : BFW_xmac_stop_sample_pos_reserved1;       // reserved
} XMAC_STOP_SAMPLE_POS_BIT_T;

typedef union {
	unsigned int               val;
	XMAC_STOP_SAMPLE_POS_BIT_T bf;
} XMAC_STOP_SAMPLE_POS_T;

// ---------------------------------------------------------------------
// Register xmac_config_obu
// => xMAC Config Register for OBU
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_config_obu   0x0000090CU
#define Adr_xmac0_xmac_config_obu 0x0016090CU
#define Adr_xmac1_xmac_config_obu 0x0016190CU
#define Adr_xmac2_xmac_config_obu 0x0016290CU
#define Adr_xmac3_xmac_config_obu 0x0016390CU

#define MSK_xmac_config_obu_sync_to_eclk          0x00000001U // [0]
#define SRT_xmac_config_obu_sync_to_eclk          0           
#define MSK_xmac_config_obu_sync_to_bitstream     0x00000002U // [1]
#define SRT_xmac_config_obu_sync_to_bitstream     1           
#define MSK_xmac_config_obu_sync_to_posedge       0x00000004U // [2]
#define SRT_xmac_config_obu_sync_to_posedge       2           
#define MSK_xmac_config_obu_sync_to_negedge       0x00000008U // [3]
#define SRT_xmac_config_obu_sync_to_negedge       3           
#define MSK_xmac_config_obu_count_modulo          0x00000010U // [4]
#define SRT_xmac_config_obu_count_modulo          4           
#define MSK_xmac_config_obu_invert_bit            0x00000020U // [5]
#define SRT_xmac_config_obu_invert_bit            5           
#define MSK_xmac_config_obu_predivide_clk         0x00000040U // [6]
#define SRT_xmac_config_obu_predivide_clk         6           
#define MSK_xmac_config_obu_tx_three_state        0x00000080U // [7]
#define SRT_xmac_config_obu_tx_three_state        7           
#define MSK_xmac_config_obu_eclk_noe              0x00000100U // [8]
#define SRT_xmac_config_obu_eclk_noe              8           
#define MSK_xmac_config_obu_sample_bitstream_eclk 0x00000200U // [9]
#define SRT_xmac_config_obu_sample_bitstream_eclk 9           
#define MSK_xmac_config_obu_arb_lost_delay        0x0000fc00U // [15:10]
#define SRT_xmac_config_obu_arb_lost_delay        10          

enum {
	BFW_xmac_config_obu_sync_to_eclk          = 1,  // [0]
	BFW_xmac_config_obu_sync_to_bitstream     = 1,  // [1]
	BFW_xmac_config_obu_sync_to_posedge       = 1,  // [2]
	BFW_xmac_config_obu_sync_to_negedge       = 1,  // [3]
	BFW_xmac_config_obu_count_modulo          = 1,  // [4]
	BFW_xmac_config_obu_invert_bit            = 1,  // [5]
	BFW_xmac_config_obu_predivide_clk         = 1,  // [6]
	BFW_xmac_config_obu_tx_three_state        = 1,  // [7]
	BFW_xmac_config_obu_eclk_noe              = 1,  // [8]
	BFW_xmac_config_obu_sample_bitstream_eclk = 1,  // [9]
	BFW_xmac_config_obu_arb_lost_delay        = 6,  // [15:10]
	BFW_xmac_config_obu_reserved1             = 16  // [31:16]
};

typedef struct XMAC_CONFIG_OBU_BIT_Ttag {
	unsigned int sync_to_eclk          : BFW_xmac_config_obu_sync_to_eclk;          // Synchronize rate_multiplier to external clock, 
	                                                        // rate_mul is set to rate_mul_start at pos/negedge of eclk
	unsigned int sync_to_bitstream     : BFW_xmac_config_obu_sync_to_bitstream;     // Synchronize rate_multiplier to data_in, 
	                                                        // rate_mul is set to rate_mul_start at pos/negedge of data_in
	unsigned int sync_to_posedge       : BFW_xmac_config_obu_sync_to_posedge;       // Synchronization of rate_multiplier works on positive edges of data_in/eclk 
	unsigned int sync_to_negedge       : BFW_xmac_config_obu_sync_to_negedge;       // Synchronization of rate_multiplier works on negative edges of data_in/eclk 
	unsigned int count_modulo          : BFW_xmac_config_obu_count_modulo;          // rate_multiplier continues counting after maximum value is reached 
	unsigned int invert_bit            : BFW_xmac_config_obu_invert_bit;            // invert incoming bit 
	unsigned int predivide_clk         : BFW_xmac_config_obu_predivide_clk;         // use a clock frequency divided by 256 
	unsigned int tx_three_state        : BFW_xmac_config_obu_tx_three_state;        // deactivates output enable of actually transmitted bit (or nibble in mii-mode) 
	unsigned int eclk_noe              : BFW_xmac_config_obu_eclk_noe;              // inv. output enable of eclk: 0: eclk generated by xMAC, 1: eclk coming from external 
	unsigned int sample_bitstream_eclk : BFW_xmac_config_obu_sample_bitstream_eclk; // 1: sample outgoing bitstream and its oe with eclk. 
	                                                        // In MII-Mode outgoing tx_d, tx_en and tx_err are sampled with tx_clk.
	unsigned int arb_lost_delay        : BFW_xmac_config_obu_arb_lost_delay;        // nof cc after start_trans_pos, before data_in is sampled for arb_lost 
	unsigned int reserved1             : BFW_xmac_config_obu_reserved1;             // reserved
} XMAC_CONFIG_OBU_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_CONFIG_OBU_BIT_T bf;
} XMAC_CONFIG_OBU_T;

// ---------------------------------------------------------------------
// Register xmac_obu_rate_mul_add
// => xMAC OBU rate_mul_add:
//    Value added each cc to Rate Multiplier.
//    rate_mul_add = eclk / clk * 65536
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000001
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_obu_rate_mul_add   0x00000910U
#define Adr_xmac0_xmac_obu_rate_mul_add 0x00160910U
#define Adr_xmac1_xmac_obu_rate_mul_add 0x00161910U
#define Adr_xmac2_xmac_obu_rate_mul_add 0x00162910U
#define Adr_xmac3_xmac_obu_rate_mul_add 0x00163910U

#define MSK_xmac_obu_rate_mul_add_rate_mul_add 0x0000ffffU // [15:0]
#define SRT_xmac_obu_rate_mul_add_rate_mul_add 0           

enum {
	BFW_xmac_obu_rate_mul_add_rate_mul_add = 16, // [15:0]
	BFW_xmac_obu_rate_mul_add_reserved1    = 16  // [31:16]
};

typedef struct XMAC_OBU_RATE_MUL_ADD_BIT_Ttag {
	unsigned int rate_mul_add : BFW_xmac_obu_rate_mul_add_rate_mul_add; // Value added each cc to Rate Multiplier. 
	                                                        // If rate_mul_add=1:      rate_mul counts from [rate_mul_start:65535]
	                                                        // else (rate_mul_add!=1): rate_mul counts from [0:65535]
	unsigned int reserved1    : BFW_xmac_obu_rate_mul_add_reserved1;    // reserved
} XMAC_OBU_RATE_MUL_ADD_BIT_T;

typedef union {
	unsigned int                val;
	XMAC_OBU_RATE_MUL_ADD_BIT_T bf;
} XMAC_OBU_RATE_MUL_ADD_T;

// ---------------------------------------------------------------------
// Register xmac_obu_rate_mul_start
// => xMAC OBU rate_mul_start
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_obu_rate_mul_start   0x00000914U
#define Adr_xmac0_xmac_obu_rate_mul_start 0x00160914U
#define Adr_xmac1_xmac_obu_rate_mul_start 0x00161914U
#define Adr_xmac2_xmac_obu_rate_mul_start 0x00162914U
#define Adr_xmac3_xmac_obu_rate_mul_start 0x00163914U

#define MSK_xmac_obu_rate_mul_start_rate_mul_start 0x0000ffffU // [15:0]
#define SRT_xmac_obu_rate_mul_start_rate_mul_start 0           

enum {
	BFW_xmac_obu_rate_mul_start_rate_mul_start = 16, // [15:0]
	BFW_xmac_obu_rate_mul_start_reserved1      = 16  // [31:16]
};

typedef struct XMAC_OBU_RATE_MUL_START_BIT_Ttag {
	unsigned int rate_mul_start : BFW_xmac_obu_rate_mul_start_rate_mul_start; // Value, the Rate Multiplier is set to at sync 
	unsigned int reserved1      : BFW_xmac_obu_rate_mul_start_reserved1;      // reserved
} XMAC_OBU_RATE_MUL_START_BIT_T;

typedef union {
	unsigned int                  val;
	XMAC_OBU_RATE_MUL_START_BIT_T bf;
} XMAC_OBU_RATE_MUL_START_T;

// ---------------------------------------------------------------------
// Register xmac_obu_rate_mul
// => xMAC OBU rate_mul
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_obu_rate_mul   0x00000918U
#define Adr_xmac0_xmac_obu_rate_mul 0x00160918U
#define Adr_xmac1_xmac_obu_rate_mul 0x00161918U
#define Adr_xmac2_xmac_obu_rate_mul 0x00162918U
#define Adr_xmac3_xmac_obu_rate_mul 0x00163918U

#define MSK_xmac_obu_rate_mul_rate_mul 0x0000ffffU // [15:0]
#define SRT_xmac_obu_rate_mul_rate_mul 0           

enum {
	BFW_xmac_obu_rate_mul_rate_mul  = 16, // [15:0]
	BFW_xmac_obu_rate_mul_reserved1 = 16  // [31:16]
};

typedef struct XMAC_OBU_RATE_MUL_BIT_Ttag {
	unsigned int rate_mul  : BFW_xmac_obu_rate_mul_rate_mul;  // current value of Rate Multiplier
	unsigned int reserved1 : BFW_xmac_obu_rate_mul_reserved1; // reserved
} XMAC_OBU_RATE_MUL_BIT_T;

typedef union {
	unsigned int            val;
	XMAC_OBU_RATE_MUL_BIT_T bf;
} XMAC_OBU_RATE_MUL_T;

// ---------------------------------------------------------------------
// Register xmac_start_trans_pos
// => xMAC SBU start_trans_pos
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_start_trans_pos   0x0000091CU
#define Adr_xmac0_xmac_start_trans_pos 0x0016091CU
#define Adr_xmac1_xmac_start_trans_pos 0x0016191CU
#define Adr_xmac2_xmac_start_trans_pos 0x0016291CU
#define Adr_xmac3_xmac_start_trans_pos 0x0016391CU

#define MSK_xmac_start_trans_pos_start_trans_pos 0x0000ffffU // [15:0]
#define SRT_xmac_start_trans_pos_start_trans_pos 0           

enum {
	BFW_xmac_start_trans_pos_start_trans_pos = 16, // [15:0]
	BFW_xmac_start_trans_pos_reserved1       = 16  // [31:16]
};

typedef struct XMAC_START_TRANS_POS_BIT_Ttag {
	unsigned int start_trans_pos : BFW_xmac_start_trans_pos_start_trans_pos; // bitstream_out and bitstream_oe change their value at start_trans_pos = rate_mul 
	unsigned int reserved1       : BFW_xmac_start_trans_pos_reserved1;       // reserved
} XMAC_START_TRANS_POS_BIT_T;

typedef union {
	unsigned int               val;
	XMAC_START_TRANS_POS_BIT_T bf;
} XMAC_START_TRANS_POS_T;

// ---------------------------------------------------------------------
// Register xmac_stop_trans_pos
// => xMAC SBU stop_trans_pos
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_stop_trans_pos   0x00000920U
#define Adr_xmac0_xmac_stop_trans_pos 0x00160920U
#define Adr_xmac1_xmac_stop_trans_pos 0x00161920U
#define Adr_xmac2_xmac_stop_trans_pos 0x00162920U
#define Adr_xmac3_xmac_stop_trans_pos 0x00163920U

#define MSK_xmac_stop_trans_pos_stop_trans_pos 0x0000ffffU // [15:0]
#define SRT_xmac_stop_trans_pos_stop_trans_pos 0           

enum {
	BFW_xmac_stop_trans_pos_stop_trans_pos = 16, // [15:0]
	BFW_xmac_stop_trans_pos_reserved1      = 16  // [31:16]
};

typedef struct XMAC_STOP_TRANS_POS_BIT_Ttag {
	unsigned int stop_trans_pos : BFW_xmac_stop_trans_pos_stop_trans_pos; // bitstream_oe becomes 0 if rate_mul >= stop_trans_pos 
	unsigned int reserved1      : BFW_xmac_stop_trans_pos_reserved1;      // reserved
} XMAC_STOP_TRANS_POS_BIT_T;

typedef union {
	unsigned int              val;
	XMAC_STOP_TRANS_POS_BIT_T bf;
} XMAC_STOP_TRANS_POS_T;

// ---------------------------------------------------------------------
// Register xmac_rpu_count1
// => xMAC RPU Counter 1
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpu_count1   0x00000924U
#define Adr_xmac0_xmac_rpu_count1 0x00160924U
#define Adr_xmac1_xmac_rpu_count1 0x00161924U
#define Adr_xmac2_xmac_rpu_count1 0x00162924U
#define Adr_xmac3_xmac_rpu_count1 0x00163924U

#define MSK_xmac_rpu_count1_rpu_count1 0x0000ffffU // [15:0]
#define SRT_xmac_rpu_count1_rpu_count1 0           

enum {
	BFW_xmac_rpu_count1_rpu_count1 = 16, // [15:0]
	BFW_xmac_rpu_count1_reserved1  = 16  // [31:16]
};

typedef struct XMAC_RPU_COUNT1_BIT_Ttag {
	unsigned int rpu_count1 : BFW_xmac_rpu_count1_rpu_count1; // Counter incremented by rpu-hw_support bit cnt1 
	unsigned int reserved1  : BFW_xmac_rpu_count1_reserved1;  // reserved
} XMAC_RPU_COUNT1_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_RPU_COUNT1_BIT_T bf;
} XMAC_RPU_COUNT1_T;

// ---------------------------------------------------------------------
// Register xmac_rpu_count2
// => xMAC RPU Counter 2
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpu_count2   0x00000928U
#define Adr_xmac0_xmac_rpu_count2 0x00160928U
#define Adr_xmac1_xmac_rpu_count2 0x00161928U
#define Adr_xmac2_xmac_rpu_count2 0x00162928U
#define Adr_xmac3_xmac_rpu_count2 0x00163928U

#define MSK_xmac_rpu_count2_rpu_count2 0x0000ffffU // [15:0]
#define SRT_xmac_rpu_count2_rpu_count2 0           

enum {
	BFW_xmac_rpu_count2_rpu_count2 = 16, // [15:0]
	BFW_xmac_rpu_count2_reserved1  = 16  // [31:16]
};

typedef struct XMAC_RPU_COUNT2_BIT_Ttag {
	unsigned int rpu_count2 : BFW_xmac_rpu_count2_rpu_count2; // Counter incremented by rpu-hw_support bit cnt2 
	unsigned int reserved1  : BFW_xmac_rpu_count2_reserved1;  // reserved
} XMAC_RPU_COUNT2_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_RPU_COUNT2_BIT_T bf;
} XMAC_RPU_COUNT2_T;

// ---------------------------------------------------------------------
// Register xmac_tpu_count1
// => xMAC TPU Counter 1
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpu_count1   0x0000092CU
#define Adr_xmac0_xmac_tpu_count1 0x0016092CU
#define Adr_xmac1_xmac_tpu_count1 0x0016192CU
#define Adr_xmac2_xmac_tpu_count1 0x0016292CU
#define Adr_xmac3_xmac_tpu_count1 0x0016392CU

#define MSK_xmac_tpu_count1_tpu_count1 0x0000ffffU // [15:0]
#define SRT_xmac_tpu_count1_tpu_count1 0           

enum {
	BFW_xmac_tpu_count1_tpu_count1 = 16, // [15:0]
	BFW_xmac_tpu_count1_reserved1  = 16  // [31:16]
};

typedef struct XMAC_TPU_COUNT1_BIT_Ttag {
	unsigned int tpu_count1 : BFW_xmac_tpu_count1_tpu_count1; // Counter incremented by tpu-hw_support bit cnt1 
	unsigned int reserved1  : BFW_xmac_tpu_count1_reserved1;  // reserved
} XMAC_TPU_COUNT1_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_TPU_COUNT1_BIT_T bf;
} XMAC_TPU_COUNT1_T;

// ---------------------------------------------------------------------
// Register xmac_tpu_count2
// => xMAC TPU Counter 2
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpu_count2   0x00000930U
#define Adr_xmac0_xmac_tpu_count2 0x00160930U
#define Adr_xmac1_xmac_tpu_count2 0x00161930U
#define Adr_xmac2_xmac_tpu_count2 0x00162930U
#define Adr_xmac3_xmac_tpu_count2 0x00163930U

#define MSK_xmac_tpu_count2_tpu_count2 0x0000ffffU // [15:0]
#define SRT_xmac_tpu_count2_tpu_count2 0           

enum {
	BFW_xmac_tpu_count2_tpu_count2 = 16, // [15:0]
	BFW_xmac_tpu_count2_reserved1  = 16  // [31:16]
};

typedef struct XMAC_TPU_COUNT2_BIT_Ttag {
	unsigned int tpu_count2 : BFW_xmac_tpu_count2_tpu_count2; // Counter incremented by tpu-hw_support bit cnt2 
	unsigned int reserved1  : BFW_xmac_tpu_count2_reserved1;  // reserved
} XMAC_TPU_COUNT2_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_TPU_COUNT2_BIT_T bf;
} XMAC_TPU_COUNT2_T;

// ---------------------------------------------------------------------
// Register xmac_rx_count
// => xMAC RX Counter
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rx_count   0x00000934U
#define Adr_xmac0_xmac_rx_count 0x00160934U
#define Adr_xmac1_xmac_rx_count 0x00161934U
#define Adr_xmac2_xmac_rx_count 0x00162934U
#define Adr_xmac3_xmac_rx_count 0x00163934U

#define MSK_xmac_rx_count_rx_count 0x0000ffffU // [15:0]
#define SRT_xmac_rx_count_rx_count 0           

enum {
	BFW_xmac_rx_count_rx_count  = 16, // [15:0]
	BFW_xmac_rx_count_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RX_COUNT_BIT_Ttag {
	unsigned int rx_count  : BFW_xmac_rx_count_rx_count;  // Counter running on eclk 
	unsigned int reserved1 : BFW_xmac_rx_count_reserved1; // reserved
} XMAC_RX_COUNT_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_RX_COUNT_BIT_T bf;
} XMAC_RX_COUNT_T;

// ---------------------------------------------------------------------
// Register xmac_tx_count
// => xMAC TX Counter
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx_count   0x00000938U
#define Adr_xmac0_xmac_tx_count 0x00160938U
#define Adr_xmac1_xmac_tx_count 0x00161938U
#define Adr_xmac2_xmac_tx_count 0x00162938U
#define Adr_xmac3_xmac_tx_count 0x00163938U

#define MSK_xmac_tx_count_tx_count 0x0000ffffU // [15:0]
#define SRT_xmac_tx_count_tx_count 0           

enum {
	BFW_xmac_tx_count_tx_count  = 16, // [15:0]
	BFW_xmac_tx_count_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TX_COUNT_BIT_Ttag {
	unsigned int tx_count  : BFW_xmac_tx_count_tx_count;  // Counter running on eclk 
	unsigned int reserved1 : BFW_xmac_tx_count_reserved1; // reserved
} XMAC_TX_COUNT_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_TX_COUNT_BIT_T bf;
} XMAC_TX_COUNT_T;

// ---------------------------------------------------------------------
// Register xmac_rpm_mask0
// => xMAC Receive Pattern Match Mask 0 Register:
//    Defines, which bits are compared between xmac_rpm_val0 and xmac_rx.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpm_mask0   0x0000093CU
#define Adr_xmac0_xmac_rpm_mask0 0x0016093CU
#define Adr_xmac1_xmac_rpm_mask0 0x0016193CU
#define Adr_xmac2_xmac_rpm_mask0 0x0016293CU
#define Adr_xmac3_xmac_rpm_mask0 0x0016393CU

#define MSK_xmac_rpm_mask0_PM_MASK0 0x0000ffffU // [15:0]
#define SRT_xmac_rpm_mask0_PM_MASK0 0           

enum {
	BFW_xmac_rpm_mask0_PM_MASK0  = 16, // [15:0]
	BFW_xmac_rpm_mask0_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RPM_MASK0_BIT_Ttag {
	unsigned int PM_MASK0  : BFW_xmac_rpm_mask0_PM_MASK0;  // Pattern Match Mask: 
	                                                        // 1: compare this position of xmac_rpm_val0 and xmac_rx
	                                                        // 0: ignore  this position of xmac_rpm_val0 and xmac_rx
	unsigned int reserved1 : BFW_xmac_rpm_mask0_reserved1; // reserved
} XMAC_RPM_MASK0_BIT_T;

typedef union {
	unsigned int         val;
	XMAC_RPM_MASK0_BIT_T bf;
} XMAC_RPM_MASK0_T;

// ---------------------------------------------------------------------
// Register xmac_rpm_val0
// => xMAC Receive Pattern Match Value 0 Register:
//    Defines value of bits to be compared with xmac_rx.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpm_val0   0x00000940U
#define Adr_xmac0_xmac_rpm_val0 0x00160940U
#define Adr_xmac1_xmac_rpm_val0 0x00161940U
#define Adr_xmac2_xmac_rpm_val0 0x00162940U
#define Adr_xmac3_xmac_rpm_val0 0x00163940U

#define MSK_xmac_rpm_val0_PM_VAL0 0x0000ffffU // [15:0]
#define SRT_xmac_rpm_val0_PM_VAL0 0           

enum {
	BFW_xmac_rpm_val0_PM_VAL0   = 16, // [15:0]
	BFW_xmac_rpm_val0_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RPM_VAL0_BIT_Ttag {
	unsigned int PM_VAL0   : BFW_xmac_rpm_val0_PM_VAL0;   // Pattern Match Value 
	unsigned int reserved1 : BFW_xmac_rpm_val0_reserved1; // reserved
} XMAC_RPM_VAL0_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_RPM_VAL0_BIT_T bf;
} XMAC_RPM_VAL0_T;

// ---------------------------------------------------------------------
// Register xmac_rpm_mask1
// => xMAC Receive Pattern Match Mask 1 Register:
//    Defines, which bits are compared between xmac_rpm_val1 and xmac_rx
//    Resetvalue : 0x0000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpm_mask1   0x00000944U
#define Adr_xmac0_xmac_rpm_mask1 0x00160944U
#define Adr_xmac1_xmac_rpm_mask1 0x00161944U
#define Adr_xmac2_xmac_rpm_mask1 0x00162944U
#define Adr_xmac3_xmac_rpm_mask1 0x00163944U

#define MSK_xmac_rpm_mask1_PM_MASK1 0x0000ffffU // [15:0]
#define SRT_xmac_rpm_mask1_PM_MASK1 0           

enum {
	BFW_xmac_rpm_mask1_PM_MASK1  = 16, // [15:0]
	BFW_xmac_rpm_mask1_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RPM_MASK1_BIT_Ttag {
	unsigned int PM_MASK1  : BFW_xmac_rpm_mask1_PM_MASK1;  // Pattern Match Mask: 
	                                                        // 1: compare this position of xmac_rpm_val1 and xmac_rx
	                                                        // 0: ignore  this position of xmac_rpm_val1 and xmac_rx
	unsigned int reserved1 : BFW_xmac_rpm_mask1_reserved1; // reserved
} XMAC_RPM_MASK1_BIT_T;

typedef union {
	unsigned int         val;
	XMAC_RPM_MASK1_BIT_T bf;
} XMAC_RPM_MASK1_T;

// ---------------------------------------------------------------------
// Register xmac_rpm_val1
// => xMAC Receive Pattern Match Value 1 Register:
//    Defines value of bits to be compared with xmac_rx.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpm_val1   0x00000948U
#define Adr_xmac0_xmac_rpm_val1 0x00160948U
#define Adr_xmac1_xmac_rpm_val1 0x00161948U
#define Adr_xmac2_xmac_rpm_val1 0x00162948U
#define Adr_xmac3_xmac_rpm_val1 0x00163948U

#define MSK_xmac_rpm_val1_PM_VAL1 0x0000ffffU // [15:0]
#define SRT_xmac_rpm_val1_PM_VAL1 0           

enum {
	BFW_xmac_rpm_val1_PM_VAL1   = 16, // [15:0]
	BFW_xmac_rpm_val1_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RPM_VAL1_BIT_Ttag {
	unsigned int PM_VAL1   : BFW_xmac_rpm_val1_PM_VAL1;   // Pattern Match Value 
	unsigned int reserved1 : BFW_xmac_rpm_val1_reserved1; // reserved
} XMAC_RPM_VAL1_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_RPM_VAL1_BIT_T bf;
} XMAC_RPM_VAL1_T;

// ---------------------------------------------------------------------
// Register xmac_tpm_mask0
// => xMAC Transmit Pattern Match Mask 0 Register:
//    Defines, which bits are compared between xmac_tpm_val0 and xmac_tx_sent.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpm_mask0   0x0000094CU
#define Adr_xmac0_xmac_tpm_mask0 0x0016094CU
#define Adr_xmac1_xmac_tpm_mask0 0x0016194CU
#define Adr_xmac2_xmac_tpm_mask0 0x0016294CU
#define Adr_xmac3_xmac_tpm_mask0 0x0016394CU

#define MSK_xmac_tpm_mask0_PM_MASK0 0x0000ffffU // [15:0]
#define SRT_xmac_tpm_mask0_PM_MASK0 0           

enum {
	BFW_xmac_tpm_mask0_PM_MASK0  = 16, // [15:0]
	BFW_xmac_tpm_mask0_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TPM_MASK0_BIT_Ttag {
	unsigned int PM_MASK0  : BFW_xmac_tpm_mask0_PM_MASK0;  // Pattern Match Mask: 
	                                                        // 1: compare this position of xmac_tpm_val0 and xmac_tx_sent
	                                                        // 0: ignore  this position of xmac_tpm_val0 and xmac_tx_sent
	unsigned int reserved1 : BFW_xmac_tpm_mask0_reserved1; // reserved
} XMAC_TPM_MASK0_BIT_T;

typedef union {
	unsigned int         val;
	XMAC_TPM_MASK0_BIT_T bf;
} XMAC_TPM_MASK0_T;

// ---------------------------------------------------------------------
// Register xmac_tpm_val0
// => xMAC Transmit Pattern Match Value 0 Register:
//    Defines value of bits to be compared with xmac_tx_sent.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpm_val0   0x00000950U
#define Adr_xmac0_xmac_tpm_val0 0x00160950U
#define Adr_xmac1_xmac_tpm_val0 0x00161950U
#define Adr_xmac2_xmac_tpm_val0 0x00162950U
#define Adr_xmac3_xmac_tpm_val0 0x00163950U

#define MSK_xmac_tpm_val0_PM_VAL0 0x0000ffffU // [15:0]
#define SRT_xmac_tpm_val0_PM_VAL0 0           

enum {
	BFW_xmac_tpm_val0_PM_VAL0   = 16, // [15:0]
	BFW_xmac_tpm_val0_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TPM_VAL0_BIT_Ttag {
	unsigned int PM_VAL0   : BFW_xmac_tpm_val0_PM_VAL0;   // Pattern Match Value 
	unsigned int reserved1 : BFW_xmac_tpm_val0_reserved1; // reserved
} XMAC_TPM_VAL0_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_TPM_VAL0_BIT_T bf;
} XMAC_TPM_VAL0_T;

// ---------------------------------------------------------------------
// Register xmac_tpm_mask1
// => xMAC Transmit Pattern Match Mask 1 Register:
//    Defines, which bits are compared between xmac_tpm_val1 and xmac_tx_sent.
//    Resetvalue : 0x0000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpm_mask1   0x00000954U
#define Adr_xmac0_xmac_tpm_mask1 0x00160954U
#define Adr_xmac1_xmac_tpm_mask1 0x00161954U
#define Adr_xmac2_xmac_tpm_mask1 0x00162954U
#define Adr_xmac3_xmac_tpm_mask1 0x00163954U

#define MSK_xmac_tpm_mask1_PM_MASK1 0x0000ffffU // [15:0]
#define SRT_xmac_tpm_mask1_PM_MASK1 0           

enum {
	BFW_xmac_tpm_mask1_PM_MASK1  = 16, // [15:0]
	BFW_xmac_tpm_mask1_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TPM_MASK1_BIT_Ttag {
	unsigned int PM_MASK1  : BFW_xmac_tpm_mask1_PM_MASK1;  // Pattern Match Mask: 
	                                                        // 1: compare this position of xmac_tpm_val1 and xmac_tx_sent
	                                                        // 0: ignore  this position of xmac_tpm_val1 and xmac_tx_sent
	unsigned int reserved1 : BFW_xmac_tpm_mask1_reserved1; // reserved
} XMAC_TPM_MASK1_BIT_T;

typedef union {
	unsigned int         val;
	XMAC_TPM_MASK1_BIT_T bf;
} XMAC_TPM_MASK1_T;

// ---------------------------------------------------------------------
// Register xmac_tpm_val1
// => xMAC Transmit Pattern Match Value 1 Register:
//    Defines value of bits to be compared with xmac_tx_sent.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tpm_val1   0x00000958U
#define Adr_xmac0_xmac_tpm_val1 0x00160958U
#define Adr_xmac1_xmac_tpm_val1 0x00161958U
#define Adr_xmac2_xmac_tpm_val1 0x00162958U
#define Adr_xmac3_xmac_tpm_val1 0x00163958U

#define MSK_xmac_tpm_val1_PM_VAL1 0x0000ffffU // [15:0]
#define SRT_xmac_tpm_val1_PM_VAL1 0           

enum {
	BFW_xmac_tpm_val1_PM_VAL1   = 16, // [15:0]
	BFW_xmac_tpm_val1_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TPM_VAL1_BIT_Ttag {
	unsigned int PM_VAL1   : BFW_xmac_tpm_val1_PM_VAL1;   // Pattern Match Value 
	unsigned int reserved1 : BFW_xmac_tpm_val1_reserved1; // reserved
} XMAC_TPM_VAL1_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_TPM_VAL1_BIT_T bf;
} XMAC_TPM_VAL1_T;

// ---------------------------------------------------------------------
// Register xmac_pwm_config
// => PWM config register
//    allows to set and reset outputs manually or via counters
//    (see pwm.doc for details)
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pwm_config   0x0000095CU
#define Adr_xmac0_xmac_pwm_config 0x0016095CU
#define Adr_xmac1_xmac_pwm_config 0x0016195CU
#define Adr_xmac2_xmac_pwm_config 0x0016295CU
#define Adr_xmac3_xmac_pwm_config 0x0016395CU

#define MSK_xmac_pwm_config_val_u     0x00000001U // [0]
#define SRT_xmac_pwm_config_val_u     0           
#define MSK_xmac_pwm_config_val_un    0x00000002U // [1]
#define SRT_xmac_pwm_config_val_un    1           
#define MSK_xmac_pwm_config_val_v     0x00000004U // [2]
#define SRT_xmac_pwm_config_val_v     2           
#define MSK_xmac_pwm_config_val_vn    0x00000008U // [3]
#define SRT_xmac_pwm_config_val_vn    3           
#define MSK_xmac_pwm_config_val_w     0x00000010U // [4]
#define SRT_xmac_pwm_config_val_w     4           
#define MSK_xmac_pwm_config_val_wn    0x00000020U // [5]
#define SRT_xmac_pwm_config_val_wn    5           
#define MSK_xmac_pwm_config_fo_mode   0x00000040U // [6]
#define SRT_xmac_pwm_config_fo_mode   6           
#define MSK_xmac_pwm_config_mpwm_mode 0x00000080U // [7]
#define SRT_xmac_pwm_config_mpwm_mode 7           
#define MSK_xmac_pwm_config_auto_u    0x00000100U // [8]
#define SRT_xmac_pwm_config_auto_u    8           
#define MSK_xmac_pwm_config_auto_v    0x00000200U // [9]
#define SRT_xmac_pwm_config_auto_v    9           
#define MSK_xmac_pwm_config_auto_w    0x00000400U // [10]
#define SRT_xmac_pwm_config_auto_w    10          
#define MSK_xmac_pwm_config_run_mp    0x00004000U // [14]
#define SRT_xmac_pwm_config_run_mp    14          
#define MSK_xmac_pwm_config_run_rp    0x00008000U // [15]
#define SRT_xmac_pwm_config_run_rp    15          

enum {
	BFW_xmac_pwm_config_val_u     = 1,  // [0]
	BFW_xmac_pwm_config_val_un    = 1,  // [1]
	BFW_xmac_pwm_config_val_v     = 1,  // [2]
	BFW_xmac_pwm_config_val_vn    = 1,  // [3]
	BFW_xmac_pwm_config_val_w     = 1,  // [4]
	BFW_xmac_pwm_config_val_wn    = 1,  // [5]
	BFW_xmac_pwm_config_fo_mode   = 1,  // [6]
	BFW_xmac_pwm_config_mpwm_mode = 1,  // [7]
	BFW_xmac_pwm_config_auto_u    = 1,  // [8]
	BFW_xmac_pwm_config_auto_v    = 1,  // [9]
	BFW_xmac_pwm_config_auto_w    = 1,  // [10]
	BFW_xmac_pwm_config_reserved1 = 3,  // [13:11]
	BFW_xmac_pwm_config_run_mp    = 1,  // [14]
	BFW_xmac_pwm_config_run_rp    = 1,  // [15]
	BFW_xmac_pwm_config_reserved2 = 16  // [31:16]
};

typedef struct XMAC_PWM_CONFIG_BIT_Ttag {
	unsigned int val_u     : BFW_xmac_pwm_config_val_u;     // value of pin U  = gpo_pins[0] if auto_u  = 0 
	unsigned int val_un    : BFW_xmac_pwm_config_val_un;    // value of pin Un = gpo_pins[1] if auto_un = 0 
	unsigned int val_v     : BFW_xmac_pwm_config_val_v;     // value of pin V  = gpo_pins[2] if auto_v  = 0 
	unsigned int val_vn    : BFW_xmac_pwm_config_val_vn;    // value of pin Vn = gpo_pins[3] if auto_vn = 0 
	unsigned int val_w     : BFW_xmac_pwm_config_val_w;     // value of pin W  = gpo_pins[4] if auto_w  = 0 
	unsigned int val_wn    : BFW_xmac_pwm_config_val_wn;    // value of pin Wn = gpo_pins[5] if auto_wn = 0 
	unsigned int fo_mode   : BFW_xmac_pwm_config_fo_mode;   // Fiber Optic Mode: 
	                                                        // sets gpo_pins[5:0] = xmac_pwm_config[5:0] in case that tx_data[0] = 1
	                                                        // and gpo_pins[5:0] = 0 in case that tx_data[0] = 0
	unsigned int mpwm_mode : BFW_xmac_pwm_config_mpwm_mode; // Motor PWM Mode 
	                                                        // Motor PWM Mode has higher Priority than Fiber Optic Mode
	unsigned int auto_u    : BFW_xmac_pwm_config_auto_u;    // 0: set gpo_pins[1:0] to val_u/n;  1: set gpo_pins[1:0] to output of channel U/n  
	unsigned int auto_v    : BFW_xmac_pwm_config_auto_v;    // 0: set gpo_pins[3:2] to val_v/n;  1: set gpo_pins[3:2] to output of channel V/n  
	unsigned int auto_w    : BFW_xmac_pwm_config_auto_w;    // 0: set gpo_pins[5/4] to val_w/n;  1: set gpo_pins[5:4] to output of channel W/n  
	unsigned int reserved1 : BFW_xmac_pwm_config_reserved1; // reserved
	unsigned int run_mp    : BFW_xmac_pwm_config_run_mp;    // 0: stop Motor PWM after the actual cycle;  1: run Motor PWM 
	unsigned int run_rp    : BFW_xmac_pwm_config_run_rp;    // 0: reset/stop Resolver PWM immediately;  1: run Resolver PWM 
	unsigned int reserved2 : BFW_xmac_pwm_config_reserved2; // reserved
} XMAC_PWM_CONFIG_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_PWM_CONFIG_BIT_T bf;
} XMAC_PWM_CONFIG_T;

// ---------------------------------------------------------------------
// Register xmac_pwm_status
// => Status of PWMs
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pwm_status   0x00000960U
#define Adr_xmac0_xmac_pwm_status 0x00160960U
#define Adr_xmac1_xmac_pwm_status 0x00161960U
#define Adr_xmac2_xmac_pwm_status 0x00162960U
#define Adr_xmac3_xmac_pwm_status 0x00163960U

#define MSK_xmac_pwm_status_systc       0x00000001U // [0]
#define SRT_xmac_pwm_status_systc       0           
#define MSK_xmac_pwm_status_pwmerr      0x00000040U // [6]
#define SRT_xmac_pwm_status_pwmerr      6           
#define MSK_xmac_pwm_status_pwmerr_req  0x00000080U // [7]
#define SRT_xmac_pwm_status_pwmerr_req  7           
#define MSK_xmac_pwm_status_systime_reg 0x00000100U // [8]
#define SRT_xmac_pwm_status_systime_reg 8           

enum {
	BFW_xmac_pwm_status_systc       = 1,  // [0]
	BFW_xmac_pwm_status_reserved1   = 5,  // [5:1]
	BFW_xmac_pwm_status_pwmerr      = 1,  // [6]
	BFW_xmac_pwm_status_pwmerr_req  = 1,  // [7]
	BFW_xmac_pwm_status_systime_reg = 1,  // [8]
	BFW_xmac_pwm_status_reserved2   = 23  // [31:9]
};

typedef struct XMAC_PWM_STATUS_BIT_Ttag {
	unsigned int systc       : BFW_xmac_pwm_status_systc;       // Systime captured at PWM = 0 
	unsigned int reserved1   : BFW_xmac_pwm_status_reserved1;   // reserved
	unsigned int pwmerr      : BFW_xmac_pwm_status_pwmerr;      // Actual PWM failure signal 
	unsigned int pwmerr_req  : BFW_xmac_pwm_status_pwmerr_req;  // Latched PWM failure signal 
	unsigned int systime_reg : BFW_xmac_pwm_status_systime_reg; // Systime captured at RPWM = 0 
	unsigned int reserved2   : BFW_xmac_pwm_status_reserved2;   // reserved
} XMAC_PWM_STATUS_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_PWM_STATUS_BIT_T bf;
} XMAC_PWM_STATUS_T;

// ---------------------------------------------------------------------
// Register xmac_pwm_tp
// => PWM Period
//    (see pwm.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pwm_tp   0x00000964U
#define Adr_xmac0_xmac_pwm_tp 0x00160964U
#define Adr_xmac1_xmac_pwm_tp 0x00161964U
#define Adr_xmac2_xmac_pwm_tp 0x00162964U
#define Adr_xmac3_xmac_pwm_tp 0x00163964U

#define MSK_xmac_pwm_tp_tp 0x0000ffffU // [15:0]
#define SRT_xmac_pwm_tp_tp 0           

enum {
	BFW_xmac_pwm_tp_tp        = 16, // [15:0]
	BFW_xmac_pwm_tp_reserved1 = 16  // [31:16]
};

typedef struct XMAC_PWM_TP_BIT_Ttag {
	unsigned int tp        : BFW_xmac_pwm_tp_tp;        // Length of PWM Period (bit 0 unused due to triangular counting) in clockcycles 
	unsigned int reserved1 : BFW_xmac_pwm_tp_reserved1; // reserved
} XMAC_PWM_TP_BIT_T;

typedef union {
	unsigned int      val;
	XMAC_PWM_TP_BIT_T bf;
} XMAC_PWM_TP_T;

// ---------------------------------------------------------------------
// Register xmac_pwm_tu
// => PWM channel U low phase width
//    (see pwm.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pwm_tu   0x00000968U
#define Adr_xmac0_xmac_pwm_tu 0x00160968U
#define Adr_xmac1_xmac_pwm_tu 0x00161968U
#define Adr_xmac2_xmac_pwm_tu 0x00162968U
#define Adr_xmac3_xmac_pwm_tu 0x00163968U

#define MSK_xmac_pwm_tu_level_u 0x0000ffffU // [15:0]
#define SRT_xmac_pwm_tu_level_u 0           

enum {
	BFW_xmac_pwm_tu_level_u   = 16, // [15:0]
	BFW_xmac_pwm_tu_reserved1 = 16  // [31:16]
};

typedef struct XMAC_PWM_TU_BIT_Ttag {
	unsigned int level_u   : BFW_xmac_pwm_tu_level_u;   // width of cannel U low phase in clockcycles 
	unsigned int reserved1 : BFW_xmac_pwm_tu_reserved1; // reserved
} XMAC_PWM_TU_BIT_T;

typedef union {
	unsigned int      val;
	XMAC_PWM_TU_BIT_T bf;
} XMAC_PWM_TU_T;

// ---------------------------------------------------------------------
// Register xmac_pwm_tv
// => PWM channel V low phase width
//    (see pwm.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pwm_tv   0x0000096CU
#define Adr_xmac0_xmac_pwm_tv 0x0016096CU
#define Adr_xmac1_xmac_pwm_tv 0x0016196CU
#define Adr_xmac2_xmac_pwm_tv 0x0016296CU
#define Adr_xmac3_xmac_pwm_tv 0x0016396CU

#define MSK_xmac_pwm_tv_level_u 0x0000ffffU // [15:0]
#define SRT_xmac_pwm_tv_level_u 0           

enum {
	BFW_xmac_pwm_tv_level_u   = 16, // [15:0]
	BFW_xmac_pwm_tv_reserved1 = 16  // [31:16]
};

typedef struct XMAC_PWM_TV_BIT_Ttag {
	unsigned int level_u   : BFW_xmac_pwm_tv_level_u;   // width of cannel U low phase in clockcycles 
	unsigned int reserved1 : BFW_xmac_pwm_tv_reserved1; // reserved
} XMAC_PWM_TV_BIT_T;

typedef union {
	unsigned int      val;
	XMAC_PWM_TV_BIT_T bf;
} XMAC_PWM_TV_T;

// ---------------------------------------------------------------------
// Register xmac_pwm_tw
// => PWM channel W low phase width
//    (see pwm.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pwm_tw   0x00000970U
#define Adr_xmac0_xmac_pwm_tw 0x00160970U
#define Adr_xmac1_xmac_pwm_tw 0x00161970U
#define Adr_xmac2_xmac_pwm_tw 0x00162970U
#define Adr_xmac3_xmac_pwm_tw 0x00163970U

#define MSK_xmac_pwm_tw_level_u 0x0000ffffU // [15:0]
#define SRT_xmac_pwm_tw_level_u 0           

enum {
	BFW_xmac_pwm_tw_level_u   = 16, // [15:0]
	BFW_xmac_pwm_tw_reserved1 = 16  // [31:16]
};

typedef struct XMAC_PWM_TW_BIT_Ttag {
	unsigned int level_u   : BFW_xmac_pwm_tw_level_u;   // width of cannel U low phase in clockcycles 
	unsigned int reserved1 : BFW_xmac_pwm_tw_reserved1; // reserved
} XMAC_PWM_TW_BIT_T;

typedef union {
	unsigned int      val;
	XMAC_PWM_TW_BIT_T bf;
} XMAC_PWM_TW_T;

// ---------------------------------------------------------------------
// Register xmac_pwm_td
// => PWM dead time counter preload
//    (see pwm.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pwm_td   0x00000974U
#define Adr_xmac0_xmac_pwm_td 0x00160974U
#define Adr_xmac1_xmac_pwm_td 0x00161974U
#define Adr_xmac2_xmac_pwm_td 0x00162974U
#define Adr_xmac3_xmac_pwm_td 0x00163974U

#define MSK_xmac_pwm_td_preload_d 0x0000ffffU // [15:0]
#define SRT_xmac_pwm_td_preload_d 0           

enum {
	BFW_xmac_pwm_td_preload_d = 16, // [15:0]
	BFW_xmac_pwm_td_reserved1 = 16  // [31:16]
};

typedef struct XMAC_PWM_TD_BIT_Ttag {
	unsigned int preload_d : BFW_xmac_pwm_td_preload_d; // counter preload for dead time in clockcycles 
	unsigned int reserved1 : BFW_xmac_pwm_td_reserved1; // reserved
} XMAC_PWM_TD_BIT_T;

typedef union {
	unsigned int      val;
	XMAC_PWM_TD_BIT_T bf;
} XMAC_PWM_TD_T;

// ---------------------------------------------------------------------
// Register xmac_rpwm_tp
// => Resolver PWM Period
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpwm_tp   0x00000978U
#define Adr_xmac0_xmac_rpwm_tp 0x00160978U
#define Adr_xmac1_xmac_rpwm_tp 0x00161978U
#define Adr_xmac2_xmac_rpwm_tp 0x00162978U
#define Adr_xmac3_xmac_rpwm_tp 0x00163978U

#define MSK_xmac_rpwm_tp_res_tp 0x0000ffffU // [15:0]
#define SRT_xmac_rpwm_tp_res_tp 0           

enum {
	BFW_xmac_rpwm_tp_res_tp    = 16, // [15:0]
	BFW_xmac_rpwm_tp_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RPWM_TP_BIT_Ttag {
	unsigned int res_tp    : BFW_xmac_rpwm_tp_res_tp;    // Resolver PWM Period 
	unsigned int reserved1 : BFW_xmac_rpwm_tp_reserved1; // reserved
} XMAC_RPWM_TP_BIT_T;

typedef union {
	unsigned int       val;
	XMAC_RPWM_TP_BIT_T bf;
} XMAC_RPWM_TP_T;

// ---------------------------------------------------------------------
// Register xmac_rpwm_tr
// => Resolver PWM Pulse
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpwm_tr   0x0000097CU
#define Adr_xmac0_xmac_rpwm_tr 0x0016097CU
#define Adr_xmac1_xmac_rpwm_tr 0x0016197CU
#define Adr_xmac2_xmac_rpwm_tr 0x0016297CU
#define Adr_xmac3_xmac_rpwm_tr 0x0016397CU

#define MSK_xmac_rpwm_tr_res_tr 0x0000ffffU // [15:0]
#define SRT_xmac_rpwm_tr_res_tr 0           

enum {
	BFW_xmac_rpwm_tr_res_tr    = 16, // [15:0]
	BFW_xmac_rpwm_tr_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RPWM_TR_BIT_Ttag {
	unsigned int res_tr    : BFW_xmac_rpwm_tr_res_tr;    // Resolver PWM Pulse 
	unsigned int reserved1 : BFW_xmac_rpwm_tr_reserved1; // reserved
} XMAC_RPWM_TR_BIT_T;

typedef union {
	unsigned int       val;
	XMAC_RPWM_TR_BIT_T bf;
} XMAC_RPWM_TR_T;

// ---------------------------------------------------------------------
// Register xmac_pwm_cnt
// => Actual counter Motor PWM Periode
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pwm_cnt   0x00000980U
#define Adr_xmac0_xmac_pwm_cnt 0x00160980U
#define Adr_xmac1_xmac_pwm_cnt 0x00161980U
#define Adr_xmac2_xmac_pwm_cnt 0x00162980U
#define Adr_xmac3_xmac_pwm_cnt 0x00163980U

#define MSK_xmac_pwm_cnt_pwm_cnt 0x0000ffffU // [15:0]
#define SRT_xmac_pwm_cnt_pwm_cnt 0           

enum {
	BFW_xmac_pwm_cnt_pwm_cnt   = 16, // [15:0]
	BFW_xmac_pwm_cnt_reserved1 = 16  // [31:16]
};

typedef struct XMAC_PWM_CNT_BIT_Ttag {
	unsigned int pwm_cnt   : BFW_xmac_pwm_cnt_pwm_cnt;   // Actual counter Motor PWM Periode 
	unsigned int reserved1 : BFW_xmac_pwm_cnt_reserved1; // reserved
} XMAC_PWM_CNT_BIT_T;

typedef union {
	unsigned int       val;
	XMAC_PWM_CNT_BIT_T bf;
} XMAC_PWM_CNT_T;

// ---------------------------------------------------------------------
// Register xmac_rpwm_cnt
// => Actual counter Resolver PWM Period
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpwm_cnt   0x00000984U
#define Adr_xmac0_xmac_rpwm_cnt 0x00160984U
#define Adr_xmac1_xmac_rpwm_cnt 0x00161984U
#define Adr_xmac2_xmac_rpwm_cnt 0x00162984U
#define Adr_xmac3_xmac_rpwm_cnt 0x00163984U

#define MSK_xmac_rpwm_cnt_rpwm_cnt 0x0000ffffU // [15:0]
#define SRT_xmac_rpwm_cnt_rpwm_cnt 0           

enum {
	BFW_xmac_rpwm_cnt_rpwm_cnt  = 16, // [15:0]
	BFW_xmac_rpwm_cnt_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RPWM_CNT_BIT_Ttag {
	unsigned int rpwm_cnt  : BFW_xmac_rpwm_cnt_rpwm_cnt;  // Actual counter Resolver PWM Period 
	unsigned int reserved1 : BFW_xmac_rpwm_cnt_reserved1; // reserved
} XMAC_RPWM_CNT_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_RPWM_CNT_BIT_T bf;
} XMAC_RPWM_CNT_T;

// ---------------------------------------------------------------------
// Register xmac_pwm_strtime
// => Captured Systime at start point of Motor PWM Period
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pwm_strtime   0x00000988U
#define Adr_xmac0_xmac_pwm_strtime 0x00160988U
#define Adr_xmac1_xmac_pwm_strtime 0x00161988U
#define Adr_xmac2_xmac_pwm_strtime 0x00162988U
#define Adr_xmac3_xmac_pwm_strtime 0x00163988U

#define MSK_xmac_pwm_strtime_pwm_strtime 0x0000ffffU // [15:0]
#define SRT_xmac_pwm_strtime_pwm_strtime 0           

enum {
	BFW_xmac_pwm_strtime_pwm_strtime = 16, // [15:0]
	BFW_xmac_pwm_strtime_reserved1   = 16  // [31:16]
};

typedef struct XMAC_PWM_STRTIME_BIT_Ttag {
	unsigned int pwm_strtime : BFW_xmac_pwm_strtime_pwm_strtime; // Captured Systime at start point of Motor PWM Period 
	unsigned int reserved1   : BFW_xmac_pwm_strtime_reserved1;   // reserved
} XMAC_PWM_STRTIME_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_PWM_STRTIME_BIT_T bf;
} XMAC_PWM_STRTIME_T;

// ---------------------------------------------------------------------
// Register xmac_rpwm_strtime
// => Captured Systime at start point of Resolver PWM Period
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rpwm_strtime   0x0000098CU
#define Adr_xmac0_xmac_rpwm_strtime 0x0016098CU
#define Adr_xmac1_xmac_rpwm_strtime 0x0016198CU
#define Adr_xmac2_xmac_rpwm_strtime 0x0016298CU
#define Adr_xmac3_xmac_rpwm_strtime 0x0016398CU

#define MSK_xmac_rpwm_strtime_rpwm_strtime 0x0000ffffU // [15:0]
#define SRT_xmac_rpwm_strtime_rpwm_strtime 0           

enum {
	BFW_xmac_rpwm_strtime_rpwm_strtime = 16, // [15:0]
	BFW_xmac_rpwm_strtime_reserved1    = 16  // [31:16]
};

typedef struct XMAC_RPWM_STRTIME_BIT_Ttag {
	unsigned int rpwm_strtime : BFW_xmac_rpwm_strtime_rpwm_strtime; // Captured Systime at start point of Resolver PWM Period 
	unsigned int reserved1    : BFW_xmac_rpwm_strtime_reserved1;    // reserved
} XMAC_RPWM_STRTIME_BIT_T;

typedef union {
	unsigned int            val;
	XMAC_RPWM_STRTIME_BIT_T bf;
} XMAC_RPWM_STRTIME_T;

// ---------------------------------------------------------------------
// Register xmac_pos_config_encoder
// => Configuration encoder register
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_config_encoder   0x00000990U
#define Adr_xmac0_xmac_pos_config_encoder 0x00160990U
#define Adr_xmac1_xmac_pos_config_encoder 0x00161990U
#define Adr_xmac2_xmac_pos_config_encoder 0x00162990U
#define Adr_xmac3_xmac_pos_config_encoder 0x00163990U

#define MSK_xmac_pos_config_encoder_enc0_filter_sample_rate 0x00000007U // [2:0]
#define SRT_xmac_pos_config_encoder_enc0_filter_sample_rate 0           
#define MSK_xmac_pos_config_encoder_enc0_count_dir          0x00000008U // [3]
#define SRT_xmac_pos_config_encoder_enc0_count_dir          3           
#define MSK_xmac_pos_config_encoder_enc0_n_quant            0x00000030U // [5:4]
#define SRT_xmac_pos_config_encoder_enc0_n_quant            4           
#define MSK_xmac_pos_config_encoder_enc1_filter_sample_rate 0x00000700U // [10:8]
#define SRT_xmac_pos_config_encoder_enc1_filter_sample_rate 8           
#define MSK_xmac_pos_config_encoder_enc1_count_dir          0x00000800U // [11]
#define SRT_xmac_pos_config_encoder_enc1_count_dir          11          
#define MSK_xmac_pos_config_encoder_enc1_n_quant            0x00003000U // [13:12]
#define SRT_xmac_pos_config_encoder_enc1_n_quant            12          

enum {
	BFW_xmac_pos_config_encoder_enc0_filter_sample_rate = 3,  // [2:0]
	BFW_xmac_pos_config_encoder_enc0_count_dir          = 1,  // [3]
	BFW_xmac_pos_config_encoder_enc0_n_quant            = 2,  // [5:4]
	BFW_xmac_pos_config_encoder_reserved1               = 2,  // [7:6]
	BFW_xmac_pos_config_encoder_enc1_filter_sample_rate = 3,  // [10:8]
	BFW_xmac_pos_config_encoder_enc1_count_dir          = 1,  // [11]
	BFW_xmac_pos_config_encoder_enc1_n_quant            = 2,  // [13:12]
	BFW_xmac_pos_config_encoder_reserved2               = 18  // [31:14]
};

typedef struct XMAC_POS_CONFIG_ENCODER_BIT_Ttag {
	unsigned int enc0_filter_sample_rate : BFW_xmac_pos_config_encoder_enc0_filter_sample_rate; // Encoder 0 filter sample rate 
	                                                        // 0: none
	                                                        // 1: 10 ns
	                                                        // 2: 20 ns
	                                                        // 3: 50 ns
	                                                        // 4: 100 ns
	                                                        // 5: 200 ns
	                                                        // 6: 500 ns
	                                                        // 7: 1 us
	unsigned int enc0_count_dir          : BFW_xmac_pos_config_encoder_enc0_count_dir;          // Encoder 0 count direction # 0
	                                                        // 0: up, 1: down
	unsigned int enc0_n_quant            : BFW_xmac_pos_config_encoder_enc0_n_quant;            // Encoder 0 N-qualifier
	                                                        // 0: none, sampled with every N pulse
	                                                        // 1: N-Signal channel 1 = 1
	                                                        // 2: MP0 = 1
	                                                        // 3: MP1 = 1
	unsigned int reserved1               : BFW_xmac_pos_config_encoder_reserved1;               // reserved
	unsigned int enc1_filter_sample_rate : BFW_xmac_pos_config_encoder_enc1_filter_sample_rate; // Encoder 1 filter sample rate 
	                                                        // 0: none
	                                                        // 1: 10 ns
	                                                        // 2: 20 ns
	                                                        // 3: 50 ns
	                                                        // 4: 100 ns
	                                                        // 5: 200 ns
	                                                        // 6: 500 ns
	                                                        // 7: 1 us
	unsigned int enc1_count_dir          : BFW_xmac_pos_config_encoder_enc1_count_dir;          // Encoder 1 count direction # 0
	                                                        // 0: up, 1: down
	unsigned int enc1_n_quant            : BFW_xmac_pos_config_encoder_enc1_n_quant;            // Encoder 1 N-qualifier
	                                                        // 0: none, sampled with every N pulse
	                                                        // 1: N-Signal channel 1 = 1
	                                                        // 2: MP0 = 1
	                                                        // 3: MP1 = 1
	unsigned int reserved2               : BFW_xmac_pos_config_encoder_reserved2;               // reserved
} XMAC_POS_CONFIG_ENCODER_BIT_T;

typedef union {
	unsigned int                  val;
	XMAC_POS_CONFIG_ENCODER_BIT_T bf;
} XMAC_POS_CONFIG_ENCODER_T;

// ---------------------------------------------------------------------
// Register xmac_pos_config_capture
// => Configuration capture register
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_config_capture   0x00000994U
#define Adr_xmac0_xmac_pos_config_capture 0x00160994U
#define Adr_xmac1_xmac_pos_config_capture 0x00161994U
#define Adr_xmac2_xmac_pos_config_capture 0x00162994U
#define Adr_xmac3_xmac_pos_config_capture 0x00163994U

#define MSK_xmac_pos_config_capture_creg0_cw  0x00000003U // [1:0]
#define SRT_xmac_pos_config_capture_creg0_cw  0           
#define MSK_xmac_pos_config_capture_creg0_src 0x0000000cU // [3:2]
#define SRT_xmac_pos_config_capture_creg0_src 2           
#define MSK_xmac_pos_config_capture_creg1_cw  0x00000030U // [5:4]
#define SRT_xmac_pos_config_capture_creg1_cw  4           
#define MSK_xmac_pos_config_capture_creg1_src 0x000000c0U // [7:6]
#define SRT_xmac_pos_config_capture_creg1_src 6           
#define MSK_xmac_pos_config_capture_creg2_cw  0x00000300U // [9:8]
#define SRT_xmac_pos_config_capture_creg2_cw  8           
#define MSK_xmac_pos_config_capture_creg2_src 0x00000c00U // [11:10]
#define SRT_xmac_pos_config_capture_creg2_src 10          
#define MSK_xmac_pos_config_capture_creg3_cw  0x00003000U // [13:12]
#define SRT_xmac_pos_config_capture_creg3_cw  12          
#define MSK_xmac_pos_config_capture_creg3_src 0x0000c000U // [15:14]
#define SRT_xmac_pos_config_capture_creg3_src 14          

enum {
	BFW_xmac_pos_config_capture_creg0_cw  = 2,  // [1:0]
	BFW_xmac_pos_config_capture_creg0_src = 2,  // [3:2]
	BFW_xmac_pos_config_capture_creg1_cw  = 2,  // [5:4]
	BFW_xmac_pos_config_capture_creg1_src = 2,  // [7:6]
	BFW_xmac_pos_config_capture_creg2_cw  = 2,  // [9:8]
	BFW_xmac_pos_config_capture_creg2_src = 2,  // [11:10]
	BFW_xmac_pos_config_capture_creg3_cw  = 2,  // [13:12]
	BFW_xmac_pos_config_capture_creg3_src = 2,  // [15:14]
	BFW_xmac_pos_config_capture_reserved1 = 16  // [31:16]
};

typedef struct XMAC_POS_CONFIG_CAPTURE_BIT_Ttag {
	unsigned int creg0_cw  : BFW_xmac_pos_config_capture_creg0_cw;  // Capture register0, capture with 
	                                                        // 0: mp0 positive edge
	                                                        // 1: mp0 negative edge
	                                                        // 2: mp1 positive edge
	                                                        // 3: mp1 negative edge
	unsigned int creg0_src : BFW_xmac_pos_config_capture_creg0_src; // Capture register0, source 
	                                                        // 0: none
	                                                        // 1: system time ns
	                                                        // 2: position channel 0
	                                                        // 3: position channel 1
	unsigned int creg1_cw  : BFW_xmac_pos_config_capture_creg1_cw;  // Capture register1, capture with 
	                                                        // 0: mp0 positive edge
	                                                        // 1: mp0 negative edge
	                                                        // 2: mp1 positive edge
	                                                        // 3: mp1 negative edge
	unsigned int creg1_src : BFW_xmac_pos_config_capture_creg1_src; // Capture register1, source 
	                                                        // 0: none
	                                                        // 1: system time ns
	                                                        // 2: position channel 0
	                                                        // 3: position channel 1
	unsigned int creg2_cw  : BFW_xmac_pos_config_capture_creg2_cw;  // Capture register2, capture with 
	                                                        // 0: mp0 positive edge
	                                                        // 1: mp0 negative edge
	                                                        // 2: mp1 positive edge
	                                                        // 3: mp1 negative edge
	unsigned int creg2_src : BFW_xmac_pos_config_capture_creg2_src; // Capture register2, source 
	                                                        // 0: none
	                                                        // 1: system time ns
	                                                        // 2: position channel 0
	                                                        // 3: position channel 1
	unsigned int creg3_cw  : BFW_xmac_pos_config_capture_creg3_cw;  // Capture register3, capture with 
	                                                        // 0: mp0 positive edge
	                                                        // 1: mp0 negative edge
	                                                        // 2: mp1 positive edge
	                                                        // 3: mp1 negative edge
	unsigned int creg3_src : BFW_xmac_pos_config_capture_creg3_src; // Capture register3, source 
	                                                        // 0: none
	                                                        // 1: system time ns
	                                                        // 2: position channel 0
	                                                        // 3: position channel 1
	unsigned int reserved1 : BFW_xmac_pos_config_capture_reserved1; // reserved
} XMAC_POS_CONFIG_CAPTURE_BIT_T;

typedef union {
	unsigned int                  val;
	XMAC_POS_CONFIG_CAPTURE_BIT_T bf;
} XMAC_POS_CONFIG_CAPTURE_T;

// ---------------------------------------------------------------------
// Register xmac_pos_command
// => Command register
//    (see PWM_POS.doc for details)
// => Mode: Mode(r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_command   0x00000998U
#define Adr_xmac0_xmac_pos_command 0x00160998U
#define Adr_xmac1_xmac_pos_command 0x00161998U
#define Adr_xmac2_xmac_pos_command 0x00162998U
#define Adr_xmac3_xmac_pos_command 0x00163998U

#define MSK_xmac_pos_command_enc0_en       0x00000001U // [0]
#define SRT_xmac_pos_command_enc0_en       0           
#define MSK_xmac_pos_command_enc0_res_pos  0x00000002U // [1]
#define SRT_xmac_pos_command_enc0_res_pos  1           
#define MSK_xmac_pos_command_enc0_res_zpos 0x00000004U // [2]
#define SRT_xmac_pos_command_enc0_res_zpos 2           
#define MSK_xmac_pos_command_enc1_en       0x00000100U // [8]
#define SRT_xmac_pos_command_enc1_en       8           
#define MSK_xmac_pos_command_enc1_res_pos  0x00000200U // [9]
#define SRT_xmac_pos_command_enc1_res_pos  9           
#define MSK_xmac_pos_command_enc1_res_zpos 0x00000400U // [10]
#define SRT_xmac_pos_command_enc1_res_zpos 10          

enum {
	BFW_xmac_pos_command_enc0_en       = 1,  // [0]
	BFW_xmac_pos_command_enc0_res_pos  = 1,  // [1]
	BFW_xmac_pos_command_enc0_res_zpos = 1,  // [2]
	BFW_xmac_pos_command_reserved1     = 5,  // [7:3]
	BFW_xmac_pos_command_enc1_en       = 1,  // [8]
	BFW_xmac_pos_command_enc1_res_pos  = 1,  // [9]
	BFW_xmac_pos_command_enc1_res_zpos = 1,  // [10]
	BFW_xmac_pos_command_reserved2     = 21  // [31:11]
};

typedef struct XMAC_POS_COMMAND_BIT_Ttag {
	unsigned int enc0_en       : BFW_xmac_pos_command_enc0_en;       // Encoder0 enable 
	unsigned int enc0_res_pos  : BFW_xmac_pos_command_enc0_res_pos;  // Encoder0 reset position 
	unsigned int enc0_res_zpos : BFW_xmac_pos_command_enc0_res_zpos; // Encoder0 reset null position 
	unsigned int reserved1     : BFW_xmac_pos_command_reserved1;     // reserved
	unsigned int enc1_en       : BFW_xmac_pos_command_enc1_en;       // Encoder1 enable 
	unsigned int enc1_res_pos  : BFW_xmac_pos_command_enc1_res_pos;  // Encoder1 reset position 
	unsigned int enc1_res_zpos : BFW_xmac_pos_command_enc1_res_zpos; // Encoder1 reset null position 
	unsigned int reserved2     : BFW_xmac_pos_command_reserved2;     // reserved
} XMAC_POS_COMMAND_BIT_T;

typedef union {
	unsigned int           val;
	XMAC_POS_COMMAND_BIT_T bf;
} XMAC_POS_COMMAND_T;

// ---------------------------------------------------------------------
// Register xmac_pos_status
// => Position and capture status, Bit  0: Encoder 0 overflow positive, Bit  1: Encoder 1 overflow negativ
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_status   0x0000099CU
#define Adr_xmac0_xmac_pos_status 0x0016099CU
#define Adr_xmac1_xmac_pos_status 0x0016199CU
#define Adr_xmac2_xmac_pos_status 0x0016299CU
#define Adr_xmac3_xmac_pos_status 0x0016399CU

#define MSK_xmac_pos_status_enc0_ovfl_pos  0x00000001U // [0]
#define SRT_xmac_pos_status_enc0_ovfl_pos  0           
#define MSK_xmac_pos_status_enc0_ovfl_neg  0x00000002U // [1]
#define SRT_xmac_pos_status_enc0_ovfl_neg  1           
#define MSK_xmac_pos_status_enc0_cap_zpos  0x00000004U // [2]
#define SRT_xmac_pos_status_enc0_cap_zpos  2           
#define MSK_xmac_pos_status_enc0_cap_etime 0x00000008U // [3]
#define SRT_xmac_pos_status_enc0_cap_etime 3           
#define MSK_xmac_pos_status_enc1_ovfl_pos  0x00000010U // [4]
#define SRT_xmac_pos_status_enc1_ovfl_pos  4           
#define MSK_xmac_pos_status_enc1_ovfl_neg  0x00000020U // [5]
#define SRT_xmac_pos_status_enc1_ovfl_neg  5           
#define MSK_xmac_pos_status_enc1_cap_zpos  0x00000040U // [6]
#define SRT_xmac_pos_status_enc1_cap_zpos  6           
#define MSK_xmac_pos_status_enc1_cap_etime 0x00000080U // [7]
#define SRT_xmac_pos_status_enc1_cap_etime 7           
#define MSK_xmac_pos_status_cap0           0x00000100U // [8]
#define SRT_xmac_pos_status_cap0           8           
#define MSK_xmac_pos_status_cap1           0x00000200U // [9]
#define SRT_xmac_pos_status_cap1           9           
#define MSK_xmac_pos_status_cap2           0x00000400U // [10]
#define SRT_xmac_pos_status_cap2           10          
#define MSK_xmac_pos_status_cap3           0x00000800U // [11]
#define SRT_xmac_pos_status_cap3           11          
#define MSK_xmac_pos_status_enc0_sign      0x00001000U // [12]
#define SRT_xmac_pos_status_enc0_sign      12          
#define MSK_xmac_pos_status_enc1_sign      0x00002000U // [13]
#define SRT_xmac_pos_status_enc1_sign      13          
#define MSK_xmac_pos_status_mp0            0x00004000U // [14]
#define SRT_xmac_pos_status_mp0            14          
#define MSK_xmac_pos_status_mp1            0x00008000U // [15]
#define SRT_xmac_pos_status_mp1            15          

enum {
	BFW_xmac_pos_status_enc0_ovfl_pos  = 1,  // [0]
	BFW_xmac_pos_status_enc0_ovfl_neg  = 1,  // [1]
	BFW_xmac_pos_status_enc0_cap_zpos  = 1,  // [2]
	BFW_xmac_pos_status_enc0_cap_etime = 1,  // [3]
	BFW_xmac_pos_status_enc1_ovfl_pos  = 1,  // [4]
	BFW_xmac_pos_status_enc1_ovfl_neg  = 1,  // [5]
	BFW_xmac_pos_status_enc1_cap_zpos  = 1,  // [6]
	BFW_xmac_pos_status_enc1_cap_etime = 1,  // [7]
	BFW_xmac_pos_status_cap0           = 1,  // [8]
	BFW_xmac_pos_status_cap1           = 1,  // [9]
	BFW_xmac_pos_status_cap2           = 1,  // [10]
	BFW_xmac_pos_status_cap3           = 1,  // [11]
	BFW_xmac_pos_status_enc0_sign      = 1,  // [12]
	BFW_xmac_pos_status_enc1_sign      = 1,  // [13]
	BFW_xmac_pos_status_mp0            = 1,  // [14]
	BFW_xmac_pos_status_mp1            = 1,  // [15]
	BFW_xmac_pos_status_reserved1      = 16  // [31:16]
};

typedef struct XMAC_POS_STATUS_BIT_Ttag {
	unsigned int enc0_ovfl_pos  : BFW_xmac_pos_status_enc0_ovfl_pos;  // Encoder0 overflow positive 
	unsigned int enc0_ovfl_neg  : BFW_xmac_pos_status_enc0_ovfl_neg;  // Encoder0 overflow negative 
	unsigned int enc0_cap_zpos  : BFW_xmac_pos_status_enc0_cap_zpos;  // Encoder0 captured null position 
	unsigned int enc0_cap_etime : BFW_xmac_pos_status_enc0_cap_etime; // Encoder0 captured edge time 
	unsigned int enc1_ovfl_pos  : BFW_xmac_pos_status_enc1_ovfl_pos;  // Encoder1 overflow positive 
	unsigned int enc1_ovfl_neg  : BFW_xmac_pos_status_enc1_ovfl_neg;  // Encoder1 overflow negative 
	unsigned int enc1_cap_zpos  : BFW_xmac_pos_status_enc1_cap_zpos;  // Encoder1 captured null position 
	unsigned int enc1_cap_etime : BFW_xmac_pos_status_enc1_cap_etime; // Encoder1 captured edge time 
	unsigned int cap0           : BFW_xmac_pos_status_cap0;           // Captured register 0 
	unsigned int cap1           : BFW_xmac_pos_status_cap1;           // Captured register 1 
	unsigned int cap2           : BFW_xmac_pos_status_cap2;           // Captured register 2 
	unsigned int cap3           : BFW_xmac_pos_status_cap3;           // Captured register 3 
	unsigned int enc0_sign      : BFW_xmac_pos_status_enc0_sign;      // Encoder 0 signal N 
	unsigned int enc1_sign      : BFW_xmac_pos_status_enc1_sign;      // Encoder 1 signal N 
	unsigned int mp0            : BFW_xmac_pos_status_mp0;            // Measurement Point 0 
	unsigned int mp1            : BFW_xmac_pos_status_mp1;            // Measurement Point 1 
	unsigned int reserved1      : BFW_xmac_pos_status_reserved1;      // reserved
} XMAC_POS_STATUS_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_POS_STATUS_BIT_T bf;
} XMAC_POS_STATUS_T;

// ---------------------------------------------------------------------
// Register xmac_pos_enc0_position
// => Actual position encoder 0
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_enc0_position   0x000009A0U
#define Adr_xmac0_xmac_pos_enc0_position 0x001609A0U
#define Adr_xmac1_xmac_pos_enc0_position 0x001619A0U
#define Adr_xmac2_xmac_pos_enc0_position 0x001629A0U
#define Adr_xmac3_xmac_pos_enc0_position 0x001639A0U

#define MSK_xmac_pos_enc0_position_pos_enc0_position 0x0000ffffU // [15:0]
#define SRT_xmac_pos_enc0_position_pos_enc0_position 0           

enum {
	BFW_xmac_pos_enc0_position_pos_enc0_position = 16, // [15:0]
	BFW_xmac_pos_enc0_position_reserved1         = 16  // [31:16]
};

typedef struct XMAC_POS_ENC0_POSITION_BIT_Ttag {
	unsigned int pos_enc0_position : BFW_xmac_pos_enc0_position_pos_enc0_position; // Actual position encoder 0 
	unsigned int reserved1         : BFW_xmac_pos_enc0_position_reserved1;         // reserved
} XMAC_POS_ENC0_POSITION_BIT_T;

typedef union {
	unsigned int                 val;
	XMAC_POS_ENC0_POSITION_BIT_T bf;
} XMAC_POS_ENC0_POSITION_T;

// ---------------------------------------------------------------------
// Register xmac_pos_enc0_nullposition
// => Last position encoder 0 sampled by enc0_n
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_enc0_nullposition   0x000009A4U
#define Adr_xmac0_xmac_pos_enc0_nullposition 0x001609A4U
#define Adr_xmac1_xmac_pos_enc0_nullposition 0x001619A4U
#define Adr_xmac2_xmac_pos_enc0_nullposition 0x001629A4U
#define Adr_xmac3_xmac_pos_enc0_nullposition 0x001639A4U

#define MSK_xmac_pos_enc0_nullposition_pos_enc0_nullposition 0x0000ffffU // [15:0]
#define SRT_xmac_pos_enc0_nullposition_pos_enc0_nullposition 0           

enum {
	BFW_xmac_pos_enc0_nullposition_pos_enc0_nullposition = 16, // [15:0]
	BFW_xmac_pos_enc0_nullposition_reserved1             = 16  // [31:16]
};

typedef struct XMAC_POS_ENC0_NULLPOSITION_BIT_Ttag {
	unsigned int pos_enc0_nullposition : BFW_xmac_pos_enc0_nullposition_pos_enc0_nullposition; // Last position encoder 0 sampled by enc0_n 
	unsigned int reserved1             : BFW_xmac_pos_enc0_nullposition_reserved1;             // reserved
} XMAC_POS_ENC0_NULLPOSITION_BIT_T;

typedef union {
	unsigned int                     val;
	XMAC_POS_ENC0_NULLPOSITION_BIT_T bf;
} XMAC_POS_ENC0_NULLPOSITION_T;

// ---------------------------------------------------------------------
// Register xmac_pos_enc1_position
// => Actual position encoder 1
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_enc1_position   0x000009A8U
#define Adr_xmac0_xmac_pos_enc1_position 0x001609A8U
#define Adr_xmac1_xmac_pos_enc1_position 0x001619A8U
#define Adr_xmac2_xmac_pos_enc1_position 0x001629A8U
#define Adr_xmac3_xmac_pos_enc1_position 0x001639A8U

#define MSK_xmac_pos_enc1_position_pos_enc1_position 0x0000ffffU // [15:0]
#define SRT_xmac_pos_enc1_position_pos_enc1_position 0           

enum {
	BFW_xmac_pos_enc1_position_pos_enc1_position = 16, // [15:0]
	BFW_xmac_pos_enc1_position_reserved1         = 16  // [31:16]
};

typedef struct XMAC_POS_ENC1_POSITION_BIT_Ttag {
	unsigned int pos_enc1_position : BFW_xmac_pos_enc1_position_pos_enc1_position; // Actual position encoder 1 
	unsigned int reserved1         : BFW_xmac_pos_enc1_position_reserved1;         // reserved
} XMAC_POS_ENC1_POSITION_BIT_T;

typedef union {
	unsigned int                 val;
	XMAC_POS_ENC1_POSITION_BIT_T bf;
} XMAC_POS_ENC1_POSITION_T;

// ---------------------------------------------------------------------
// Register xmac_pos_enc1_nullposition
// => Last position encoder 1 sampled by enc1_n
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_enc1_nullposition   0x000009ACU
#define Adr_xmac0_xmac_pos_enc1_nullposition 0x001609ACU
#define Adr_xmac1_xmac_pos_enc1_nullposition 0x001619ACU
#define Adr_xmac2_xmac_pos_enc1_nullposition 0x001629ACU
#define Adr_xmac3_xmac_pos_enc1_nullposition 0x001639ACU

#define MSK_xmac_pos_enc1_nullposition_pos_enc1_nullposition 0x0000ffffU // [15:0]
#define SRT_xmac_pos_enc1_nullposition_pos_enc1_nullposition 0           

enum {
	BFW_xmac_pos_enc1_nullposition_pos_enc1_nullposition = 16, // [15:0]
	BFW_xmac_pos_enc1_nullposition_reserved1             = 16  // [31:16]
};

typedef struct XMAC_POS_ENC1_NULLPOSITION_BIT_Ttag {
	unsigned int pos_enc1_nullposition : BFW_xmac_pos_enc1_nullposition_pos_enc1_nullposition; // Last position encoder 1 sampled by enc1_n 
	unsigned int reserved1             : BFW_xmac_pos_enc1_nullposition_reserved1;             // reserved
} XMAC_POS_ENC1_NULLPOSITION_BIT_T;

typedef union {
	unsigned int                     val;
	XMAC_POS_ENC1_NULLPOSITION_BIT_T bf;
} XMAC_POS_ENC1_NULLPOSITION_T;

// ---------------------------------------------------------------------
// Register xmac_pos_enc0_edgetime
// => System time at last edge of encoder 0
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_enc0_edgetime   0x000009B0U
#define Adr_xmac0_xmac_pos_enc0_edgetime 0x001609B0U
#define Adr_xmac1_xmac_pos_enc0_edgetime 0x001619B0U
#define Adr_xmac2_xmac_pos_enc0_edgetime 0x001629B0U
#define Adr_xmac3_xmac_pos_enc0_edgetime 0x001639B0U

#define MSK_xmac_pos_enc0_edgetime_pos_enc0_edgetime 0x0000ffffU // [15:0]
#define SRT_xmac_pos_enc0_edgetime_pos_enc0_edgetime 0           

enum {
	BFW_xmac_pos_enc0_edgetime_pos_enc0_edgetime = 16, // [15:0]
	BFW_xmac_pos_enc0_edgetime_reserved1         = 16  // [31:16]
};

typedef struct XMAC_POS_ENC0_EDGETIME_BIT_Ttag {
	unsigned int pos_enc0_edgetime : BFW_xmac_pos_enc0_edgetime_pos_enc0_edgetime; // System time at last edge of encoder 0 
	unsigned int reserved1         : BFW_xmac_pos_enc0_edgetime_reserved1;         // reserved
} XMAC_POS_ENC0_EDGETIME_BIT_T;

typedef union {
	unsigned int                 val;
	XMAC_POS_ENC0_EDGETIME_BIT_T bf;
} XMAC_POS_ENC0_EDGETIME_T;

// ---------------------------------------------------------------------
// Register xmac_pos_enc1_edgetime
// => System time at last edge of encoder 0
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_enc1_edgetime   0x000009B4U
#define Adr_xmac0_xmac_pos_enc1_edgetime 0x001609B4U
#define Adr_xmac1_xmac_pos_enc1_edgetime 0x001619B4U
#define Adr_xmac2_xmac_pos_enc1_edgetime 0x001629B4U
#define Adr_xmac3_xmac_pos_enc1_edgetime 0x001639B4U

#define MSK_xmac_pos_enc1_edgetime_pos_enc1_edgetime 0x0000ffffU // [15:0]
#define SRT_xmac_pos_enc1_edgetime_pos_enc1_edgetime 0           

enum {
	BFW_xmac_pos_enc1_edgetime_pos_enc1_edgetime = 16, // [15:0]
	BFW_xmac_pos_enc1_edgetime_reserved1         = 16  // [31:16]
};

typedef struct XMAC_POS_ENC1_EDGETIME_BIT_Ttag {
	unsigned int pos_enc1_edgetime : BFW_xmac_pos_enc1_edgetime_pos_enc1_edgetime; // System time at last edge of encoder 0 
	unsigned int reserved1         : BFW_xmac_pos_enc1_edgetime_reserved1;         // reserved
} XMAC_POS_ENC1_EDGETIME_BIT_T;

typedef union {
	unsigned int                 val;
	XMAC_POS_ENC1_EDGETIME_BIT_T bf;
} XMAC_POS_ENC1_EDGETIME_T;

// ---------------------------------------------------------------------
// Register xmac_pos_capture0
// => Capture register 0
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_capture0   0x000009B8U
#define Adr_xmac0_xmac_pos_capture0 0x001609B8U
#define Adr_xmac1_xmac_pos_capture0 0x001619B8U
#define Adr_xmac2_xmac_pos_capture0 0x001629B8U
#define Adr_xmac3_xmac_pos_capture0 0x001639B8U

#define MSK_xmac_pos_capture0_pos_capture0 0x0000ffffU // [15:0]
#define SRT_xmac_pos_capture0_pos_capture0 0           

enum {
	BFW_xmac_pos_capture0_pos_capture0 = 16, // [15:0]
	BFW_xmac_pos_capture0_reserved1    = 16  // [31:16]
};

typedef struct XMAC_POS_CAPTURE0_BIT_Ttag {
	unsigned int pos_capture0 : BFW_xmac_pos_capture0_pos_capture0; // Capture register 0 
	unsigned int reserved1    : BFW_xmac_pos_capture0_reserved1;    // reserved
} XMAC_POS_CAPTURE0_BIT_T;

typedef union {
	unsigned int            val;
	XMAC_POS_CAPTURE0_BIT_T bf;
} XMAC_POS_CAPTURE0_T;

// ---------------------------------------------------------------------
// Register xmac_pos_capture1
// => Capture register 1
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_capture1   0x000009BCU
#define Adr_xmac0_xmac_pos_capture1 0x001609BCU
#define Adr_xmac1_xmac_pos_capture1 0x001619BCU
#define Adr_xmac2_xmac_pos_capture1 0x001629BCU
#define Adr_xmac3_xmac_pos_capture1 0x001639BCU

#define MSK_xmac_pos_capture1_pos_capture1 0x0000ffffU // [15:0]
#define SRT_xmac_pos_capture1_pos_capture1 0           

enum {
	BFW_xmac_pos_capture1_pos_capture1 = 16, // [15:0]
	BFW_xmac_pos_capture1_reserved1    = 16  // [31:16]
};

typedef struct XMAC_POS_CAPTURE1_BIT_Ttag {
	unsigned int pos_capture1 : BFW_xmac_pos_capture1_pos_capture1; // Capture register 1 
	unsigned int reserved1    : BFW_xmac_pos_capture1_reserved1;    // reserved
} XMAC_POS_CAPTURE1_BIT_T;

typedef union {
	unsigned int            val;
	XMAC_POS_CAPTURE1_BIT_T bf;
} XMAC_POS_CAPTURE1_T;

// ---------------------------------------------------------------------
// Register xmac_pos_capture2
// => Capture register 2
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_capture2   0x000009C0U
#define Adr_xmac0_xmac_pos_capture2 0x001609C0U
#define Adr_xmac1_xmac_pos_capture2 0x001619C0U
#define Adr_xmac2_xmac_pos_capture2 0x001629C0U
#define Adr_xmac3_xmac_pos_capture2 0x001639C0U

#define MSK_xmac_pos_capture2_pos_capture2 0x0000ffffU // [15:0]
#define SRT_xmac_pos_capture2_pos_capture2 0           

enum {
	BFW_xmac_pos_capture2_pos_capture2 = 16, // [15:0]
	BFW_xmac_pos_capture2_reserved1    = 16  // [31:16]
};

typedef struct XMAC_POS_CAPTURE2_BIT_Ttag {
	unsigned int pos_capture2 : BFW_xmac_pos_capture2_pos_capture2; // Capture register 2 
	unsigned int reserved1    : BFW_xmac_pos_capture2_reserved1;    // reserved
} XMAC_POS_CAPTURE2_BIT_T;

typedef union {
	unsigned int            val;
	XMAC_POS_CAPTURE2_BIT_T bf;
} XMAC_POS_CAPTURE2_T;

// ---------------------------------------------------------------------
// Register xmac_pos_capture3
// => Capture register 3
//    (see PWM_POS.doc for details)
//    This register has a write pipeline delay of 1 clock cycle
// => Mode: Mode(r)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_pos_capture3   0x000009C4U
#define Adr_xmac0_xmac_pos_capture3 0x001609C4U
#define Adr_xmac1_xmac_pos_capture3 0x001619C4U
#define Adr_xmac2_xmac_pos_capture3 0x001629C4U
#define Adr_xmac3_xmac_pos_capture3 0x001639C4U

#define MSK_xmac_pos_capture3_pos_capture3 0x0000ffffU // [15:0]
#define SRT_xmac_pos_capture3_pos_capture3 0           

enum {
	BFW_xmac_pos_capture3_pos_capture3 = 16, // [15:0]
	BFW_xmac_pos_capture3_reserved1    = 16  // [31:16]
};

typedef struct XMAC_POS_CAPTURE3_BIT_Ttag {
	unsigned int pos_capture3 : BFW_xmac_pos_capture3_pos_capture3; // Capture register 3 
	unsigned int reserved1    : BFW_xmac_pos_capture3_reserved1;    // reserved
} XMAC_POS_CAPTURE3_BIT_T;

typedef union {
	unsigned int            val;
	XMAC_POS_CAPTURE3_BIT_T bf;
} XMAC_POS_CAPTURE3_T;

// ---------------------------------------------------------------------
// Register xmac_rx_crc_polynomial_l
// => xMAC RX CRC Polynomial lower part
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rx_crc_polynomial_l   0x000009D8U
#define Adr_xmac0_xmac_rx_crc_polynomial_l 0x001609D8U
#define Adr_xmac1_xmac_rx_crc_polynomial_l 0x001619D8U
#define Adr_xmac2_xmac_rx_crc_polynomial_l 0x001629D8U
#define Adr_xmac3_xmac_rx_crc_polynomial_l 0x001639D8U

#define MSK_xmac_rx_crc_polynomial_l_RX_POL_L 0x0000ffffU // [15:0]
#define SRT_xmac_rx_crc_polynomial_l_RX_POL_L 0           

enum {
	BFW_xmac_rx_crc_polynomial_l_RX_POL_L  = 16, // [15:0]
	BFW_xmac_rx_crc_polynomial_l_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RX_CRC_POLYNOMIAL_L_BIT_Ttag {
	unsigned int RX_POL_L  : BFW_xmac_rx_crc_polynomial_l_RX_POL_L;  // lower bits of RX-CRC Polynomial 
	unsigned int reserved1 : BFW_xmac_rx_crc_polynomial_l_reserved1; // reserved
} XMAC_RX_CRC_POLYNOMIAL_L_BIT_T;

typedef union {
	unsigned int                   val;
	XMAC_RX_CRC_POLYNOMIAL_L_BIT_T bf;
} XMAC_RX_CRC_POLYNOMIAL_L_T;

// ---------------------------------------------------------------------
// Register xmac_rx_crc_polynomial_h
// => xMAC RX CRC Polynomial lower part
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rx_crc_polynomial_h   0x000009DCU
#define Adr_xmac0_xmac_rx_crc_polynomial_h 0x001609DCU
#define Adr_xmac1_xmac_rx_crc_polynomial_h 0x001619DCU
#define Adr_xmac2_xmac_rx_crc_polynomial_h 0x001629DCU
#define Adr_xmac3_xmac_rx_crc_polynomial_h 0x001639DCU

#define MSK_xmac_rx_crc_polynomial_h_RX_POL_H 0x0000ffffU // [15:0]
#define SRT_xmac_rx_crc_polynomial_h_RX_POL_H 0           

enum {
	BFW_xmac_rx_crc_polynomial_h_RX_POL_H  = 16, // [15:0]
	BFW_xmac_rx_crc_polynomial_h_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RX_CRC_POLYNOMIAL_H_BIT_Ttag {
	unsigned int RX_POL_H  : BFW_xmac_rx_crc_polynomial_h_RX_POL_H;  // upper bits of RX-CRC Polynomial 
	unsigned int reserved1 : BFW_xmac_rx_crc_polynomial_h_reserved1; // reserved
} XMAC_RX_CRC_POLYNOMIAL_H_BIT_T;

typedef union {
	unsigned int                   val;
	XMAC_RX_CRC_POLYNOMIAL_H_BIT_T bf;
} XMAC_RX_CRC_POLYNOMIAL_H_T;

// ---------------------------------------------------------------------
// Register xmac_rx_crc_l
// => xMAC RX CRC lower part
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rx_crc_l   0x000009E0U
#define Adr_xmac0_xmac_rx_crc_l 0x001609E0U
#define Adr_xmac1_xmac_rx_crc_l 0x001619E0U
#define Adr_xmac2_xmac_rx_crc_l 0x001629E0U
#define Adr_xmac3_xmac_rx_crc_l 0x001639E0U

#define MSK_xmac_rx_crc_l_RX_CRC_L 0x0000ffffU // [15:0]
#define SRT_xmac_rx_crc_l_RX_CRC_L 0           

enum {
	BFW_xmac_rx_crc_l_RX_CRC_L  = 16, // [15:0]
	BFW_xmac_rx_crc_l_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RX_CRC_L_BIT_Ttag {
	unsigned int RX_CRC_L  : BFW_xmac_rx_crc_l_RX_CRC_L;  // lower bits of RX-CRC 
	unsigned int reserved1 : BFW_xmac_rx_crc_l_reserved1; // reserved
} XMAC_RX_CRC_L_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_RX_CRC_L_BIT_T bf;
} XMAC_RX_CRC_L_T;

// ---------------------------------------------------------------------
// Register xmac_rx_crc_h
// => xMAC RX CRC upper part
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rx_crc_h   0x000009E4U
#define Adr_xmac0_xmac_rx_crc_h 0x001609E4U
#define Adr_xmac1_xmac_rx_crc_h 0x001619E4U
#define Adr_xmac2_xmac_rx_crc_h 0x001629E4U
#define Adr_xmac3_xmac_rx_crc_h 0x001639E4U

#define MSK_xmac_rx_crc_h_RX_CRC_H 0x0000ffffU // [15:0]
#define SRT_xmac_rx_crc_h_RX_CRC_H 0           

enum {
	BFW_xmac_rx_crc_h_RX_CRC_H  = 16, // [15:0]
	BFW_xmac_rx_crc_h_reserved1 = 16  // [31:16]
};

typedef struct XMAC_RX_CRC_H_BIT_Ttag {
	unsigned int RX_CRC_H  : BFW_xmac_rx_crc_h_RX_CRC_H;  // upper bits of RX-CRC 
	unsigned int reserved1 : BFW_xmac_rx_crc_h_reserved1; // reserved
} XMAC_RX_CRC_H_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_RX_CRC_H_BIT_T bf;
} XMAC_RX_CRC_H_T;

// ---------------------------------------------------------------------
// Register xmac_rx_crc_cfg
// => xMAC RX CRC Config Register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_rx_crc_cfg   0x000009E8U
#define Adr_xmac0_xmac_rx_crc_cfg 0x001609E8U
#define Adr_xmac1_xmac_rx_crc_cfg 0x001619E8U
#define Adr_xmac2_xmac_rx_crc_cfg 0x001629E8U
#define Adr_xmac3_xmac_rx_crc_cfg 0x001639E8U

#define MSK_xmac_rx_crc_cfg_rx_crc_shift_right 0x00000001U // [0]
#define SRT_xmac_rx_crc_cfg_rx_crc_shift_right 0           
#define MSK_xmac_rx_crc_cfg_rx_crc_zero        0x00000002U // [1]
#define SRT_xmac_rx_crc_cfg_rx_crc_zero        1           
#define MSK_xmac_rx_crc_cfg_rx_crc_invert      0x00000004U // [2]
#define SRT_xmac_rx_crc_cfg_rx_crc_invert      2           
#define MSK_xmac_rx_crc_cfg_rx_crc_len         0x000000f8U // [7:3]
#define SRT_xmac_rx_crc_cfg_rx_crc_len         3           
#define MSK_xmac_rx_crc_cfg_rx_crc_nof_bits    0x00000300U // [9:8]
#define SRT_xmac_rx_crc_cfg_rx_crc_nof_bits    8           
#define MSK_xmac_rx_crc_cfg_rx_crc_direct_div  0x00000400U // [10]
#define SRT_xmac_rx_crc_cfg_rx_crc_direct_div  10          

enum {
	BFW_xmac_rx_crc_cfg_rx_crc_shift_right = 1,  // [0]
	BFW_xmac_rx_crc_cfg_rx_crc_zero        = 1,  // [1]
	BFW_xmac_rx_crc_cfg_rx_crc_invert      = 1,  // [2]
	BFW_xmac_rx_crc_cfg_rx_crc_len         = 5,  // [7:3]
	BFW_xmac_rx_crc_cfg_rx_crc_nof_bits    = 2,  // [9:8]
	BFW_xmac_rx_crc_cfg_rx_crc_direct_div  = 1,  // [10]
	BFW_xmac_rx_crc_cfg_reserved1          = 21  // [31:11]
};

typedef struct XMAC_RX_CRC_CFG_BIT_Ttag {
	unsigned int rx_crc_shift_right : BFW_xmac_rx_crc_cfg_rx_crc_shift_right; // Shift RX CRC from left to right 
	unsigned int rx_crc_zero        : BFW_xmac_rx_crc_cfg_rx_crc_zero;        // Set input of RX CRC to zero (before invert) 
	unsigned int rx_crc_invert      : BFW_xmac_rx_crc_cfg_rx_crc_invert;      // Invert input of RX CRC 
	unsigned int rx_crc_len         : BFW_xmac_rx_crc_cfg_rx_crc_len;         // Length of RX_CRC minus 1 (0-31) 
	unsigned int rx_crc_nof_bits    : BFW_xmac_rx_crc_cfg_rx_crc_nof_bits;    // 1(0),2(1),4(2),8(3) Bits from rx register to be executed in parallel 
	unsigned int rx_crc_direct_div  : BFW_xmac_rx_crc_cfg_rx_crc_direct_div;  // calculate direct polynolial division without n zeros after frame 
	unsigned int reserved1          : BFW_xmac_rx_crc_cfg_reserved1;          // reserved
} XMAC_RX_CRC_CFG_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_RX_CRC_CFG_BIT_T bf;
} XMAC_RX_CRC_CFG_T;

// ---------------------------------------------------------------------
// Register xmac_tx_crc_polynomial_l
// => xMAC TX CRC Polynomial lower part
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx_crc_polynomial_l   0x000009ECU
#define Adr_xmac0_xmac_tx_crc_polynomial_l 0x001609ECU
#define Adr_xmac1_xmac_tx_crc_polynomial_l 0x001619ECU
#define Adr_xmac2_xmac_tx_crc_polynomial_l 0x001629ECU
#define Adr_xmac3_xmac_tx_crc_polynomial_l 0x001639ECU

#define MSK_xmac_tx_crc_polynomial_l_TX_POL_L 0x0000ffffU // [15:0]
#define SRT_xmac_tx_crc_polynomial_l_TX_POL_L 0           

enum {
	BFW_xmac_tx_crc_polynomial_l_TX_POL_L  = 16, // [15:0]
	BFW_xmac_tx_crc_polynomial_l_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TX_CRC_POLYNOMIAL_L_BIT_Ttag {
	unsigned int TX_POL_L  : BFW_xmac_tx_crc_polynomial_l_TX_POL_L;  // lower bits of TX-CRC Polynomial 
	unsigned int reserved1 : BFW_xmac_tx_crc_polynomial_l_reserved1; // reserved
} XMAC_TX_CRC_POLYNOMIAL_L_BIT_T;

typedef union {
	unsigned int                   val;
	XMAC_TX_CRC_POLYNOMIAL_L_BIT_T bf;
} XMAC_TX_CRC_POLYNOMIAL_L_T;

// ---------------------------------------------------------------------
// Register xmac_tx_crc_polynomial_h
// => xMAC TX CRC Polynomial lower part
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx_crc_polynomial_h   0x000009F0U
#define Adr_xmac0_xmac_tx_crc_polynomial_h 0x001609F0U
#define Adr_xmac1_xmac_tx_crc_polynomial_h 0x001619F0U
#define Adr_xmac2_xmac_tx_crc_polynomial_h 0x001629F0U
#define Adr_xmac3_xmac_tx_crc_polynomial_h 0x001639F0U

#define MSK_xmac_tx_crc_polynomial_h_TX_POL_H 0x0000ffffU // [15:0]
#define SRT_xmac_tx_crc_polynomial_h_TX_POL_H 0           

enum {
	BFW_xmac_tx_crc_polynomial_h_TX_POL_H  = 16, // [15:0]
	BFW_xmac_tx_crc_polynomial_h_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TX_CRC_POLYNOMIAL_H_BIT_Ttag {
	unsigned int TX_POL_H  : BFW_xmac_tx_crc_polynomial_h_TX_POL_H;  // upper bits of TX-CRC Polynomial 
	unsigned int reserved1 : BFW_xmac_tx_crc_polynomial_h_reserved1; // reserved
} XMAC_TX_CRC_POLYNOMIAL_H_BIT_T;

typedef union {
	unsigned int                   val;
	XMAC_TX_CRC_POLYNOMIAL_H_BIT_T bf;
} XMAC_TX_CRC_POLYNOMIAL_H_T;

// ---------------------------------------------------------------------
// Register xmac_tx_crc_l
// => xMAC TX CRC lower part
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx_crc_l   0x000009F4U
#define Adr_xmac0_xmac_tx_crc_l 0x001609F4U
#define Adr_xmac1_xmac_tx_crc_l 0x001619F4U
#define Adr_xmac2_xmac_tx_crc_l 0x001629F4U
#define Adr_xmac3_xmac_tx_crc_l 0x001639F4U

#define MSK_xmac_tx_crc_l_TX_CRC_L 0x0000ffffU // [15:0]
#define SRT_xmac_tx_crc_l_TX_CRC_L 0           

enum {
	BFW_xmac_tx_crc_l_TX_CRC_L  = 16, // [15:0]
	BFW_xmac_tx_crc_l_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TX_CRC_L_BIT_Ttag {
	unsigned int TX_CRC_L  : BFW_xmac_tx_crc_l_TX_CRC_L;  // lower bits of TX-CRC 
	unsigned int reserved1 : BFW_xmac_tx_crc_l_reserved1; // reserved
} XMAC_TX_CRC_L_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_TX_CRC_L_BIT_T bf;
} XMAC_TX_CRC_L_T;

// ---------------------------------------------------------------------
// Register xmac_tx_crc_h
// => xMAC TX CRC upper part
//    This register has a write pipeline delay of 1 clock cycle
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx_crc_h   0x000009F8U
#define Adr_xmac0_xmac_tx_crc_h 0x001609F8U
#define Adr_xmac1_xmac_tx_crc_h 0x001619F8U
#define Adr_xmac2_xmac_tx_crc_h 0x001629F8U
#define Adr_xmac3_xmac_tx_crc_h 0x001639F8U

#define MSK_xmac_tx_crc_h_TX_CRC_H 0x0000ffffU // [15:0]
#define SRT_xmac_tx_crc_h_TX_CRC_H 0           

enum {
	BFW_xmac_tx_crc_h_TX_CRC_H  = 16, // [15:0]
	BFW_xmac_tx_crc_h_reserved1 = 16  // [31:16]
};

typedef struct XMAC_TX_CRC_H_BIT_Ttag {
	unsigned int TX_CRC_H  : BFW_xmac_tx_crc_h_TX_CRC_H;  // upper bits of TX-CRC 
	unsigned int reserved1 : BFW_xmac_tx_crc_h_reserved1; // reserved
} XMAC_TX_CRC_H_BIT_T;

typedef union {
	unsigned int        val;
	XMAC_TX_CRC_H_BIT_T bf;
} XMAC_TX_CRC_H_T;

// ---------------------------------------------------------------------
// Register xmac_tx_crc_cfg
// => xMAC TX CRC Config Register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xmac_tx_crc_cfg   0x000009FCU
#define Adr_xmac0_xmac_tx_crc_cfg 0x001609FCU
#define Adr_xmac1_xmac_tx_crc_cfg 0x001619FCU
#define Adr_xmac2_xmac_tx_crc_cfg 0x001629FCU
#define Adr_xmac3_xmac_tx_crc_cfg 0x001639FCU

#define MSK_xmac_tx_crc_cfg_tx_crc_shift_right 0x00000001U // [0]
#define SRT_xmac_tx_crc_cfg_tx_crc_shift_right 0           
#define MSK_xmac_tx_crc_cfg_tx_crc_zero        0x00000002U // [1]
#define SRT_xmac_tx_crc_cfg_tx_crc_zero        1           
#define MSK_xmac_tx_crc_cfg_tx_crc_invert      0x00000004U // [2]
#define SRT_xmac_tx_crc_cfg_tx_crc_invert      2           
#define MSK_xmac_tx_crc_cfg_tx_crc_len         0x000000f8U // [7:3]
#define SRT_xmac_tx_crc_cfg_tx_crc_len         3           
#define MSK_xmac_tx_crc_cfg_tx_crc_nof_bits    0x00000300U // [9:8]
#define SRT_xmac_tx_crc_cfg_tx_crc_nof_bits    8           
#define MSK_xmac_tx_crc_cfg_rx_crc_direct_div  0x00000400U // [10]
#define SRT_xmac_tx_crc_cfg_rx_crc_direct_div  10          

enum {
	BFW_xmac_tx_crc_cfg_tx_crc_shift_right = 1,  // [0]
	BFW_xmac_tx_crc_cfg_tx_crc_zero        = 1,  // [1]
	BFW_xmac_tx_crc_cfg_tx_crc_invert      = 1,  // [2]
	BFW_xmac_tx_crc_cfg_tx_crc_len         = 5,  // [7:3]
	BFW_xmac_tx_crc_cfg_tx_crc_nof_bits    = 2,  // [9:8]
	BFW_xmac_tx_crc_cfg_rx_crc_direct_div  = 1,  // [10]
	BFW_xmac_tx_crc_cfg_reserved1          = 21  // [31:11]
};

typedef struct XMAC_TX_CRC_CFG_BIT_Ttag {
	unsigned int tx_crc_shift_right : BFW_xmac_tx_crc_cfg_tx_crc_shift_right; // Shift TX CRC from left to right 
	unsigned int tx_crc_zero        : BFW_xmac_tx_crc_cfg_tx_crc_zero;        // Set input of TX CRC to zero (before invert) 
	unsigned int tx_crc_invert      : BFW_xmac_tx_crc_cfg_tx_crc_invert;      // Invert input of TX CRC 
	unsigned int tx_crc_len         : BFW_xmac_tx_crc_cfg_tx_crc_len;         // Length of TX_CRC minus 1 (0-31) 
	unsigned int tx_crc_nof_bits    : BFW_xmac_tx_crc_cfg_tx_crc_nof_bits;    // 1(0),2(1),4(2),8(3) Bits from tx_register to be executed in parallel 
	unsigned int rx_crc_direct_div  : BFW_xmac_tx_crc_cfg_rx_crc_direct_div;  // calculate direct polynolial division without n zeros after frame 
	unsigned int reserved1          : BFW_xmac_tx_crc_cfg_reserved1;          // reserved
} XMAC_TX_CRC_CFG_BIT_T;

typedef union {
	unsigned int          val;
	XMAC_TX_CRC_CFG_BIT_T bf;
} XMAC_TX_CRC_CFG_T;


// =====================================================================
//
// Area of pointer_fifo
//
// =====================================================================

#define Addr_pointer_fifo	0x00164000U

// ---------------------------------------------------------------------
// Register pfifo_base
// => Pointer FIFO table.
//    Each of the following 32 addresses accesses a FIFO
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_pfifo_base 0x00000000U
#define Adr_pfifo_base     0x00164000U

#define MSK_pfifo_base_fifo_data 0xffffffffU // [31:0]
#define SRT_pfifo_base_fifo_data 0           

enum {
	BFW_pfifo_base_fifo_data = 32  // [31:0]
};

typedef struct PFIFO_BASE_BIT_Ttag {
	unsigned int fifo_data : BFW_pfifo_base_fifo_data; // write access: write data to FIFO, read access: read data from FIFO 
} PFIFO_BASE_BIT_T;

typedef union {
	unsigned int     val;
	PFIFO_BASE_BIT_T bf;
} PFIFO_BASE_T;

// ---------------------------------------------------------------------
// Register pfifo_border_base
// => Pointer FIFO Upper Borders table.
//    Each of the following 32 addresses access the upper border of the apropriate FIFO in a 2048x32 bit RAM.
//    All upper borders should be rising with number of FIFO.
//    If a border between two FIFOs is moved, the adjacent FIFOs should be reset first.
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_pfifo_border_base 0x00000080U
#define Adr_pfifo_border_base     0x00164080U

#define MSK_pfifo_border_base_border 0x000007ffU // [10:0]
#define SRT_pfifo_border_base_border 0           

enum {
	BFW_pfifo_border_base_border    = 11, // [10:0]
	BFW_pfifo_border_base_reserved1 = 21  // [31:11]
};

typedef struct PFIFO_BORDER_BASE_BIT_Ttag {
	unsigned int border    : BFW_pfifo_border_base_border;    // last address of RAM used by appropriate FIFO, = (first address - 1) of next FIFO 
	                                                        // FIFO 0 default depth     : 1024
	                                                        // FIFO 1..30 default depth : 32
	                                                        // FIFO 31 default depth    : 64
	unsigned int reserved1 : BFW_pfifo_border_base_reserved1; // reserved
} PFIFO_BORDER_BASE_BIT_T;

typedef union {
	unsigned int            val;
	PFIFO_BORDER_BASE_BIT_T bf;
} PFIFO_BORDER_BASE_T;

// ---------------------------------------------------------------------
// Register pfifo_reset
// => Pointer FIFO reset vector.
//    Allows to reset each of 32 FIFOs,
//    i.e. set read and write pointer to lower border of FIFO, reset full, overflow, underrun and set empty flag.
//    Reset flag of adjacent FIFOs should be set before resizing the FIFO.
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_pfifo_reset 0x00000100U
#define Adr_pfifo_reset     0x00164100U

#define MSK_pfifo_reset_reset_fifo 0xffffffffU // [31:0]
#define SRT_pfifo_reset_reset_fifo 0           

enum {
	BFW_pfifo_reset_reset_fifo = 32  // [31:0]
};

typedef struct PFIFO_RESET_BIT_Ttag {
	unsigned int reset_fifo : BFW_pfifo_reset_reset_fifo; // Reset Vector, 1 bit per FIFO: 1: reset FIFO, 0: normal work mode 
} PFIFO_RESET_BIT_T;

typedef union {
	unsigned int      val;
	PFIFO_RESET_BIT_T bf;
} PFIFO_RESET_T;

// ---------------------------------------------------------------------
// Register pfifo_full
// => Pointer FIFO full vector.
//    Shows the fifo_full flag of each FIFO.
//    Resetvalue : 0x00000000
// => Mode: Mode (ro)
// ---------------------------------------------------------------------

#define REL_Adr_pfifo_full 0x00000104U
#define Adr_pfifo_full     0x00164104U

#define MSK_pfifo_full_fifo_full 0xffffffffU // [31:0]
#define SRT_pfifo_full_fifo_full 0           

enum {
	BFW_pfifo_full_fifo_full = 32  // [31:0]
};

typedef struct PFIFO_FULL_BIT_Ttag {
	unsigned int fifo_full : BFW_pfifo_full_fifo_full; // FIFO full vector, 1 bit per FIFO 
} PFIFO_FULL_BIT_T;

typedef union {
	unsigned int     val;
	PFIFO_FULL_BIT_T bf;
} PFIFO_FULL_T;

// ---------------------------------------------------------------------
// Register pfifo_empty
// => Pointer FIFO empty vector.
//    Shows the fifo_empty flag of each FIFO.
//    Resetvalue : 0xffffffff
// => Mode: Mode (ro)
// ---------------------------------------------------------------------

#define REL_Adr_pfifo_empty 0x00000108U
#define Adr_pfifo_empty     0x00164108U

#define MSK_pfifo_empty_fifo_empty 0xffffffffU // [31:0]
#define SRT_pfifo_empty_fifo_empty 0           

enum {
	BFW_pfifo_empty_fifo_empty = 32  // [31:0]
};

typedef struct PFIFO_EMPTY_BIT_Ttag {
	unsigned int fifo_empty : BFW_pfifo_empty_fifo_empty; // FIFO empty vector, 1 bit per FIFO 
} PFIFO_EMPTY_BIT_T;

typedef union {
	unsigned int      val;
	PFIFO_EMPTY_BIT_T bf;
} PFIFO_EMPTY_T;

// ---------------------------------------------------------------------
// Register pfifo_overflow
// => Pointer FIFO overflow vector.
//    Shows the fifo_overflow flag of each FIFO.
//    If the FIFO had an overflow, it should be reset.
//    Resetvalue : 0x00000000
// => Mode: Mode (ro)
// ---------------------------------------------------------------------

#define REL_Adr_pfifo_overflow 0x0000010CU
#define Adr_pfifo_overflow     0x0016410CU

#define MSK_pfifo_overflow_fifo_overflow 0xffffffffU // [31:0]
#define SRT_pfifo_overflow_fifo_overflow 0           

enum {
	BFW_pfifo_overflow_fifo_overflow = 32  // [31:0]
};

typedef struct PFIFO_OVERFLOW_BIT_Ttag {
	unsigned int fifo_overflow : BFW_pfifo_overflow_fifo_overflow; // FIFO overflow vector, 1 bit per FIFO 
} PFIFO_OVERFLOW_BIT_T;

typedef union {
	unsigned int         val;
	PFIFO_OVERFLOW_BIT_T bf;
} PFIFO_OVERFLOW_T;

// ---------------------------------------------------------------------
// Register pfifo_underrun
// => Pointer FIFO underrun vector.
//    Shows the fifo_underrun flag of each FIFO.
//    If the FIFO had an underrun, it should be reset.
//    Resetvalue : 0x00000000
// => Mode: Mode (ro)
// ---------------------------------------------------------------------

#define REL_Adr_pfifo_underrun 0x00000110U
#define Adr_pfifo_underrun     0x00164110U

#define MSK_pfifo_underrun_fifo_underrun 0xffffffffU // [31:0]
#define SRT_pfifo_underrun_fifo_underrun 0           

enum {
	BFW_pfifo_underrun_fifo_underrun = 32  // [31:0]
};

typedef struct PFIFO_UNDERRUN_BIT_Ttag {
	unsigned int fifo_underrun : BFW_pfifo_underrun_fifo_underrun; // FIFO underrun vector, 1 bit per FIFO 
} PFIFO_UNDERRUN_BIT_T;

typedef union {
	unsigned int         val;
	PFIFO_UNDERRUN_BIT_T bf;
} PFIFO_UNDERRUN_T;

// ---------------------------------------------------------------------
// Register pfifo_fill_level_base
// => Pointer FIFO fill-level table.
//    Each of the following 32 addresses reads the fill-level of the appropriate FIFO.
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_pfifo_fill_level_base 0x00000180U
#define Adr_pfifo_fill_level_base     0x00164180U

#define MSK_pfifo_fill_level_base_fill_level 0x000007ffU // [10:0]
#define SRT_pfifo_fill_level_base_fill_level 0           

enum {
	BFW_pfifo_fill_level_base_fill_level = 11, // [10:0]
	BFW_pfifo_fill_level_base_reserved1  = 21  // [31:11]
};

typedef struct PFIFO_FILL_LEVEL_BASE_BIT_Ttag {
	unsigned int fill_level : BFW_pfifo_fill_level_base_fill_level; // actual number of words in appropriate FIFO (not valid, if FIFO had an overflow or underflow) 
	unsigned int reserved1  : BFW_pfifo_fill_level_base_reserved1;  // reserved
} PFIFO_FILL_LEVEL_BASE_BIT_T;

typedef union {
	unsigned int                val;
	PFIFO_FILL_LEVEL_BASE_BIT_T bf;
} PFIFO_FILL_LEVEL_BASE_T;


// =====================================================================
//
// Area of xpec_irq_registers
//
// =====================================================================

#define Addr_xpec_irq_registers	0x00164400U

// ---------------------------------------------------------------------
// Register irq_xpec0
// => IRQ_XPEC 0
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_irq_xpec0 0x00000000U
#define Adr_irq_xpec0     0x00164400U

#define MSK_irq_xpec0_xpec_irq 0x0000ffffU // [15:0]
#define SRT_irq_xpec0_xpec_irq 0           
#define MSK_irq_xpec0_arm_irq  0xffff0000U // [31:16]
#define SRT_irq_xpec0_arm_irq  16          

enum {
	BFW_irq_xpec0_xpec_irq = 16, // [15:0]
	BFW_irq_xpec0_arm_irq  = 16  // [31:16]
};

typedef struct IRQ_XPEC0_BIT_Ttag {
	unsigned int xpec_irq : BFW_irq_xpec0_xpec_irq; // set by xpec ; reset by arm  
	unsigned int arm_irq  : BFW_irq_xpec0_arm_irq;  // set by arm  ; reset by xpec 
} IRQ_XPEC0_BIT_T;

typedef union {
	unsigned int    val;
	IRQ_XPEC0_BIT_T bf;
} IRQ_XPEC0_T;

// ---------------------------------------------------------------------
// Register irq_xpec1
// => IRQ_XPEC 1
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_irq_xpec1 0x00000004U
#define Adr_irq_xpec1     0x00164404U

#define MSK_irq_xpec1_xpec_irq 0x0000ffffU // [15:0]
#define SRT_irq_xpec1_xpec_irq 0           
#define MSK_irq_xpec1_arm_irq  0xffff0000U // [31:16]
#define SRT_irq_xpec1_arm_irq  16          

enum {
	BFW_irq_xpec1_xpec_irq = 16, // [15:0]
	BFW_irq_xpec1_arm_irq  = 16  // [31:16]
};

typedef struct IRQ_XPEC1_BIT_Ttag {
	unsigned int xpec_irq : BFW_irq_xpec1_xpec_irq; // set by xpec ; reset by arm  
	unsigned int arm_irq  : BFW_irq_xpec1_arm_irq;  // set by arm  ; reset by xpec 
} IRQ_XPEC1_BIT_T;

typedef union {
	unsigned int    val;
	IRQ_XPEC1_BIT_T bf;
} IRQ_XPEC1_T;

// ---------------------------------------------------------------------
// Register irq_xpec2
// => IRQ_XPEC 2
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_irq_xpec2 0x00000008U
#define Adr_irq_xpec2     0x00164408U

#define MSK_irq_xpec2_xpec_irq 0x0000ffffU // [15:0]
#define SRT_irq_xpec2_xpec_irq 0           
#define MSK_irq_xpec2_arm_irq  0xffff0000U // [31:16]
#define SRT_irq_xpec2_arm_irq  16          

enum {
	BFW_irq_xpec2_xpec_irq = 16, // [15:0]
	BFW_irq_xpec2_arm_irq  = 16  // [31:16]
};

typedef struct IRQ_XPEC2_BIT_Ttag {
	unsigned int xpec_irq : BFW_irq_xpec2_xpec_irq; // set by xpec ; reset by arm  
	unsigned int arm_irq  : BFW_irq_xpec2_arm_irq;  // set by arm  ; reset by xpec 
} IRQ_XPEC2_BIT_T;

typedef union {
	unsigned int    val;
	IRQ_XPEC2_BIT_T bf;
} IRQ_XPEC2_T;

// ---------------------------------------------------------------------
// Register irq_xpec3
// => IRQ_XPEC 3
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_irq_xpec3 0x0000000CU
#define Adr_irq_xpec3     0x0016440CU

#define MSK_irq_xpec3_xpec_irq 0x0000ffffU // [15:0]
#define SRT_irq_xpec3_xpec_irq 0           
#define MSK_irq_xpec3_arm_irq  0xffff0000U // [31:16]
#define SRT_irq_xpec3_arm_irq  16          

enum {
	BFW_irq_xpec3_xpec_irq = 16, // [15:0]
	BFW_irq_xpec3_arm_irq  = 16  // [31:16]
};

typedef struct IRQ_XPEC3_BIT_Ttag {
	unsigned int xpec_irq : BFW_irq_xpec3_xpec_irq; // set by xpec ; reset by arm  
	unsigned int arm_irq  : BFW_irq_xpec3_arm_irq;  // set by arm  ; reset by xpec 
} IRQ_XPEC3_BIT_T;

typedef union {
	unsigned int    val;
	IRQ_XPEC3_BIT_T bf;
} IRQ_XPEC3_T;


// =====================================================================
//
// Area of xc_mem_prot
//
// =====================================================================

#define Addr_xc_mem_prot	0x00164800U

// ---------------------------------------------------------------------
// Register xpec0_ram_low
// => not protected memory area (lower border)
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec0_ram_low 0x00000000U
#define Adr_xpec0_ram_low     0x00164800U

#define MSK_xpec0_ram_low_xpec0_ram_low 0x00001fffU // [12:0]
#define SRT_xpec0_ram_low_xpec0_ram_low 0           

enum {
	BFW_xpec0_ram_low_xpec0_ram_low = 13, // [12:0]
	BFW_xpec0_ram_low_reserved1     = 19  // [31:13]
};

typedef struct XPEC0_RAM_LOW_BIT_Ttag {
	unsigned int xpec0_ram_low : BFW_xpec0_ram_low_xpec0_ram_low; //  lower border (include) of not protected memory area 
	unsigned int reserved1     : BFW_xpec0_ram_low_reserved1;     // reserved
} XPEC0_RAM_LOW_BIT_T;

typedef union {
	unsigned int        val;
	XPEC0_RAM_LOW_BIT_T bf;
} XPEC0_RAM_LOW_T;

// ---------------------------------------------------------------------
// Register xpec1_ram_low
// => not protected memory area (lower border)
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec1_ram_low 0x00000004U
#define Adr_xpec1_ram_low     0x00164804U

#define MSK_xpec1_ram_low_xpec1_ram_low 0x00001fffU // [12:0]
#define SRT_xpec1_ram_low_xpec1_ram_low 0           

enum {
	BFW_xpec1_ram_low_xpec1_ram_low = 13, // [12:0]
	BFW_xpec1_ram_low_reserved1     = 19  // [31:13]
};

typedef struct XPEC1_RAM_LOW_BIT_Ttag {
	unsigned int xpec1_ram_low : BFW_xpec1_ram_low_xpec1_ram_low; //  lower border (include) of not protected memory area 
	unsigned int reserved1     : BFW_xpec1_ram_low_reserved1;     // reserved
} XPEC1_RAM_LOW_BIT_T;

typedef union {
	unsigned int        val;
	XPEC1_RAM_LOW_BIT_T bf;
} XPEC1_RAM_LOW_T;

// ---------------------------------------------------------------------
// Register xpec2_ram_low
// => not protected memory area (lower border)
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec2_ram_low 0x00000008U
#define Adr_xpec2_ram_low     0x00164808U

#define MSK_xpec2_ram_low_xpec2_ram_low 0x00001fffU // [12:0]
#define SRT_xpec2_ram_low_xpec2_ram_low 0           

enum {
	BFW_xpec2_ram_low_xpec2_ram_low = 13, // [12:0]
	BFW_xpec2_ram_low_reserved1     = 19  // [31:13]
};

typedef struct XPEC2_RAM_LOW_BIT_Ttag {
	unsigned int xpec2_ram_low : BFW_xpec2_ram_low_xpec2_ram_low; //  lower border (include) of not protected memory area 
	unsigned int reserved1     : BFW_xpec2_ram_low_reserved1;     // reserved
} XPEC2_RAM_LOW_BIT_T;

typedef union {
	unsigned int        val;
	XPEC2_RAM_LOW_BIT_T bf;
} XPEC2_RAM_LOW_T;

// ---------------------------------------------------------------------
// Register xpec3_ram_low
// => not protected memory area (lower border)
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec3_ram_low 0x0000000CU
#define Adr_xpec3_ram_low     0x0016480CU

#define MSK_xpec3_ram_low_xpec3_ram_low 0x00001fffU // [12:0]
#define SRT_xpec3_ram_low_xpec3_ram_low 0           

enum {
	BFW_xpec3_ram_low_xpec3_ram_low = 13, // [12:0]
	BFW_xpec3_ram_low_reserved1     = 19  // [31:13]
};

typedef struct XPEC3_RAM_LOW_BIT_Ttag {
	unsigned int xpec3_ram_low : BFW_xpec3_ram_low_xpec3_ram_low; //  lower border (include) of not protected memory area 
	unsigned int reserved1     : BFW_xpec3_ram_low_reserved1;     // reserved
} XPEC3_RAM_LOW_BIT_T;

typedef union {
	unsigned int        val;
	XPEC3_RAM_LOW_BIT_T bf;
} XPEC3_RAM_LOW_T;

// ---------------------------------------------------------------------
// Register xpec0_ram_high
// => not protected memory area (higher border)
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec0_ram_high 0x00000010U
#define Adr_xpec0_ram_high     0x00164810U

#define MSK_xpec0_ram_high_xpec0_ram_high 0x00001fffU // [12:0]
#define SRT_xpec0_ram_high_xpec0_ram_high 0           

enum {
	BFW_xpec0_ram_high_xpec0_ram_high = 13, // [12:0]
	BFW_xpec0_ram_high_reserved1      = 19  // [31:13]
};

typedef struct XPEC0_RAM_HIGH_BIT_Ttag {
	unsigned int xpec0_ram_high : BFW_xpec0_ram_high_xpec0_ram_high; //  higher border(include) of not protected memory area 
	unsigned int reserved1      : BFW_xpec0_ram_high_reserved1;      // reserved
} XPEC0_RAM_HIGH_BIT_T;

typedef union {
	unsigned int         val;
	XPEC0_RAM_HIGH_BIT_T bf;
} XPEC0_RAM_HIGH_T;

// ---------------------------------------------------------------------
// Register xpec1_ram_high
// => not protected memory area (higher border)
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec1_ram_high 0x00000014U
#define Adr_xpec1_ram_high     0x00164814U

#define MSK_xpec1_ram_high_xpec1_ram_high 0x00001fffU // [12:0]
#define SRT_xpec1_ram_high_xpec1_ram_high 0           

enum {
	BFW_xpec1_ram_high_xpec1_ram_high = 13, // [12:0]
	BFW_xpec1_ram_high_reserved1      = 19  // [31:13]
};

typedef struct XPEC1_RAM_HIGH_BIT_Ttag {
	unsigned int xpec1_ram_high : BFW_xpec1_ram_high_xpec1_ram_high; //  higher border(include) of not protected memory area 
	unsigned int reserved1      : BFW_xpec1_ram_high_reserved1;      // reserved
} XPEC1_RAM_HIGH_BIT_T;

typedef union {
	unsigned int         val;
	XPEC1_RAM_HIGH_BIT_T bf;
} XPEC1_RAM_HIGH_T;

// ---------------------------------------------------------------------
// Register xpec2_ram_high
// => not protected memory area (higher border)
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec2_ram_high 0x00000018U
#define Adr_xpec2_ram_high     0x00164818U

#define MSK_xpec2_ram_high_xpec2_ram_high 0x00001fffU // [12:0]
#define SRT_xpec2_ram_high_xpec2_ram_high 0           

enum {
	BFW_xpec2_ram_high_xpec2_ram_high = 13, // [12:0]
	BFW_xpec2_ram_high_reserved1      = 19  // [31:13]
};

typedef struct XPEC2_RAM_HIGH_BIT_Ttag {
	unsigned int xpec2_ram_high : BFW_xpec2_ram_high_xpec2_ram_high; //  higher border(include) of not protected memory area 
	unsigned int reserved1      : BFW_xpec2_ram_high_reserved1;      // reserved
} XPEC2_RAM_HIGH_BIT_T;

typedef union {
	unsigned int         val;
	XPEC2_RAM_HIGH_BIT_T bf;
} XPEC2_RAM_HIGH_T;

// ---------------------------------------------------------------------
// Register xpec3_ram_high
// => not protected memory area (higher border)
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec3_ram_high 0x0000001CU
#define Adr_xpec3_ram_high     0x0016481CU

#define MSK_xpec3_ram_high_xpec3_ram_high 0x00001fffU // [12:0]
#define SRT_xpec3_ram_high_xpec3_ram_high 0           

enum {
	BFW_xpec3_ram_high_xpec3_ram_high = 13, // [12:0]
	BFW_xpec3_ram_high_reserved1      = 19  // [31:13]
};

typedef struct XPEC3_RAM_HIGH_BIT_Ttag {
	unsigned int xpec3_ram_high : BFW_xpec3_ram_high_xpec3_ram_high; //  higher border(include) of not protected memory area 
	unsigned int reserved1      : BFW_xpec3_ram_high_reserved1;      // reserved
} XPEC3_RAM_HIGH_BIT_T;

typedef union {
	unsigned int         val;
	XPEC3_RAM_HIGH_BIT_T bf;
} XPEC3_RAM_HIGH_T;

// ---------------------------------------------------------------------
// Register prot_key_enable
// => protection key enable
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_prot_key_enable 0x00000100U
#define Adr_prot_key_enable     0x00164900U

#define MSK_prot_key_enable_prot_key_enable 0xffffffffU // [31:0]
#define SRT_prot_key_enable_prot_key_enable 0           

enum {
	BFW_prot_key_enable_prot_key_enable = 32  // [31:0]
};

typedef struct PROT_KEY_ENABLE_BIT_Ttag {
	unsigned int prot_key_enable : BFW_prot_key_enable_prot_key_enable; //  1. Read out the access key from this register. 2. Write back this access key to this register. 3. Memory protection is enable. 
} PROT_KEY_ENABLE_BIT_T;

typedef union {
	unsigned int          val;
	PROT_KEY_ENABLE_BIT_T bf;
} PROT_KEY_ENABLE_T;

// ---------------------------------------------------------------------
// Register prot_key_disable
// => protection key disable
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_prot_key_disable 0x00000104U
#define Adr_prot_key_disable     0x00164904U

#define MSK_prot_key_disable_prot_key_disable 0xffffffffU // [31:0]
#define SRT_prot_key_disable_prot_key_disable 0           

enum {
	BFW_prot_key_disable_prot_key_disable = 32  // [31:0]
};

typedef struct PROT_KEY_DISABLE_BIT_Ttag {
	unsigned int prot_key_disable : BFW_prot_key_disable_prot_key_disable; //  1. Read out the access key from this register. 2. Write back this access key to this register. 3. Memory protection is disable. 
} PROT_KEY_DISABLE_BIT_T;

typedef union {
	unsigned int           val;
	PROT_KEY_DISABLE_BIT_T bf;
} PROT_KEY_DISABLE_T;

// ---------------------------------------------------------------------
// Register prot_status
// => protection status
//    Resetvalue : 0x00000000
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_prot_status 0x00000108U
#define Adr_prot_status     0x00164908U

#define MSK_prot_status_prot_stauts 0x00000001U // [0]
#define SRT_prot_status_prot_stauts 0           

enum {
	BFW_prot_status_prot_stauts = 1,  // [0]
	BFW_prot_status_reserved1   = 31  // [31:1]
};

typedef struct PROT_STATUS_BIT_Ttag {
	unsigned int prot_stauts : BFW_prot_status_prot_stauts; //  Protection Status (read only) 1: protection mode 0: not protected 
	unsigned int reserved1   : BFW_prot_status_reserved1;   // reserved
} PROT_STATUS_BIT_T;

typedef union {
	unsigned int      val;
	PROT_STATUS_BIT_T bf;
} PROT_STATUS_T;


// =====================================================================
//
// Area of xc_debug
//
// =====================================================================

#define Addr_xc_debug	0x00164C00U

// ---------------------------------------------------------------------
// Register xc_debug_config
// => config XC debug module
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xc_debug_config 0x00000000U
#define Adr_xc_debug_config     0x00164C00U

#define MSK_xc_debug_config_select_xpec  0x00000003U // [1:0]
#define SRT_xc_debug_config_select_xpec  0           
#define MSK_xc_debug_config_debug_enable 0x80000000U // [31]
#define SRT_xc_debug_config_debug_enable 31          

enum {
	BFW_xc_debug_config_select_xpec  = 2,  // [1:0]
	BFW_xc_debug_config_reserved1    = 29, // [30:2]
	BFW_xc_debug_config_debug_enable = 1   // [31]
};

typedef struct XC_DEBUG_CONFIG_BIT_Ttag {
	unsigned int select_xpec  : BFW_xc_debug_config_select_xpec;  //  (00 = xpec0, 01 = xpec1, 10 = xpec2, 11 = xpec3) default 0x0
	unsigned int reserved1    : BFW_xc_debug_config_reserved1;    // reserved
	unsigned int debug_enable : BFW_xc_debug_config_debug_enable; // default 0x0
} XC_DEBUG_CONFIG_BIT_T;

typedef union {
	unsigned int          val;
	XC_DEBUG_CONFIG_BIT_T bf;
} XC_DEBUG_CONFIG_T;


// =====================================================================
//
// Area of xpec0, xpec1, xpec2, xpec3
//
// =====================================================================

#define Addr_xpec0	0x00170000U
#define Addr_xpec1	0x00174000U
#define Addr_xpec2	0x00178000U
#define Addr_xpec3	0x0017C000U

// ---------------------------------------------------------------------
// Register ram_start
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ram_start   0x00002000U
#define Adr_xpec0_ram_start 0x00172000U
#define Adr_xpec1_ram_start 0x00176000U
#define Adr_xpec2_ram_start 0x0017A000U
#define Adr_xpec3_ram_start 0x0017E000U

// ---------------------------------------------------------------------
// Register xpu_hold_pc
// => xPEC hold_pc register
//    Resetvalue : 0x00000001
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpu_hold_pc   0x00000100U
#define Adr_xpec0_xpu_hold_pc 0x00170100U
#define Adr_xpec1_xpu_hold_pc 0x00174100U
#define Adr_xpec2_xpu_hold_pc 0x00178100U
#define Adr_xpec3_xpu_hold_pc 0x0017C100U

#define MSK_xpu_hold_pc_hold 0x00000001U // [0]
#define SRT_xpu_hold_pc_hold 0           

enum {
	BFW_xpu_hold_pc_hold      = 1,  // [0]
	BFW_xpu_hold_pc_reserved1 = 31  // [31:1]
};

typedef struct XPU_HOLD_PC_BIT_Ttag {
	unsigned int hold      : BFW_xpu_hold_pc_hold;      // 0: start XPU, 1: hold XPU 
	                                                        // only accessible by the ARM
	unsigned int reserved1 : BFW_xpu_hold_pc_reserved1; // reserved
} XPU_HOLD_PC_BIT_T;

typedef union {
	unsigned int      val;
	XPU_HOLD_PC_BIT_T bf;
} XPU_HOLD_PC_T;

// ---------------------------------------------------------------------
// Register xpec_r0
// => xPEC work register for indirect addressing
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_r0   0x00000000U
#define Adr_xpec0_xpec_r0 0x00170000U
#define Adr_xpec1_xpec_r0 0x00174000U
#define Adr_xpec2_xpec_r0 0x00178000U
#define Adr_xpec3_xpec_r0 0x0017C000U

#define MSK_xpec_r0_r0 0xffffffffU // [31:0]
#define SRT_xpec_r0_r0 0           

enum {
	BFW_xpec_r0_r0 = 32  // [31:0]
};

typedef struct XPEC_R0_BIT_Ttag {
	unsigned int r0 : BFW_xpec_r0_r0; // Work Register 0 
} XPEC_R0_BIT_T;

typedef union {
	unsigned int  val;
	XPEC_R0_BIT_T bf;
} XPEC_R0_T;

// ---------------------------------------------------------------------
// Register xpec_r1
// => xPEC work register for indirect addressing
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_r1   0x00000004U
#define Adr_xpec0_xpec_r1 0x00170004U
#define Adr_xpec1_xpec_r1 0x00174004U
#define Adr_xpec2_xpec_r1 0x00178004U
#define Adr_xpec3_xpec_r1 0x0017C004U

#define MSK_xpec_r1_r1 0xffffffffU // [31:0]
#define SRT_xpec_r1_r1 0           

enum {
	BFW_xpec_r1_r1 = 32  // [31:0]
};

typedef struct XPEC_R1_BIT_Ttag {
	unsigned int r1 : BFW_xpec_r1_r1; // Work Register 1 
} XPEC_R1_BIT_T;

typedef union {
	unsigned int  val;
	XPEC_R1_BIT_T bf;
} XPEC_R1_T;

// ---------------------------------------------------------------------
// Register xpec_r2
// => xPEC work register for indirect addressing
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_r2   0x00000008U
#define Adr_xpec0_xpec_r2 0x00170008U
#define Adr_xpec1_xpec_r2 0x00174008U
#define Adr_xpec2_xpec_r2 0x00178008U
#define Adr_xpec3_xpec_r2 0x0017C008U

#define MSK_xpec_r2_r2 0xffffffffU // [31:0]
#define SRT_xpec_r2_r2 0           

enum {
	BFW_xpec_r2_r2 = 32  // [31:0]
};

typedef struct XPEC_R2_BIT_Ttag {
	unsigned int r2 : BFW_xpec_r2_r2; // Work Register 2 
} XPEC_R2_BIT_T;

typedef union {
	unsigned int  val;
	XPEC_R2_BIT_T bf;
} XPEC_R2_T;

// ---------------------------------------------------------------------
// Register xpec_r3
// => xPEC work register for indirect addressing
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_r3   0x0000000CU
#define Adr_xpec0_xpec_r3 0x0017000CU
#define Adr_xpec1_xpec_r3 0x0017400CU
#define Adr_xpec2_xpec_r3 0x0017800CU
#define Adr_xpec3_xpec_r3 0x0017C00CU

#define MSK_xpec_r3_r3 0xffffffffU // [31:0]
#define SRT_xpec_r3_r3 0           

enum {
	BFW_xpec_r3_r3 = 32  // [31:0]
};

typedef struct XPEC_R3_BIT_Ttag {
	unsigned int r3 : BFW_xpec_r3_r3; // Work Register 3 
} XPEC_R3_BIT_T;

typedef union {
	unsigned int  val;
	XPEC_R3_BIT_T bf;
} XPEC_R3_T;

// ---------------------------------------------------------------------
// Register xpec_r4
// => xPEC work register for indirect addressing
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_r4   0x00000010U
#define Adr_xpec0_xpec_r4 0x00170010U
#define Adr_xpec1_xpec_r4 0x00174010U
#define Adr_xpec2_xpec_r4 0x00178010U
#define Adr_xpec3_xpec_r4 0x0017C010U

#define MSK_xpec_r4_r4 0xffffffffU // [31:0]
#define SRT_xpec_r4_r4 0           

enum {
	BFW_xpec_r4_r4 = 32  // [31:0]
};

typedef struct XPEC_R4_BIT_Ttag {
	unsigned int r4 : BFW_xpec_r4_r4; // Work Register 4 
} XPEC_R4_BIT_T;

typedef union {
	unsigned int  val;
	XPEC_R4_BIT_T bf;
} XPEC_R4_T;

// ---------------------------------------------------------------------
// Register xpec_r5
// => xPEC work register for indirect addressing
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_r5   0x00000014U
#define Adr_xpec0_xpec_r5 0x00170014U
#define Adr_xpec1_xpec_r5 0x00174014U
#define Adr_xpec2_xpec_r5 0x00178014U
#define Adr_xpec3_xpec_r5 0x0017C014U

#define MSK_xpec_r5_r5 0xffffffffU // [31:0]
#define SRT_xpec_r5_r5 0           

enum {
	BFW_xpec_r5_r5 = 32  // [31:0]
};

typedef struct XPEC_R5_BIT_Ttag {
	unsigned int r5 : BFW_xpec_r5_r5; // Work Register 5 
} XPEC_R5_BIT_T;

typedef union {
	unsigned int  val;
	XPEC_R5_BIT_T bf;
} XPEC_R5_T;

// ---------------------------------------------------------------------
// Register xpec_r6
// => xPEC work register for indirect addressing
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_r6   0x00000018U
#define Adr_xpec0_xpec_r6 0x00170018U
#define Adr_xpec1_xpec_r6 0x00174018U
#define Adr_xpec2_xpec_r6 0x00178018U
#define Adr_xpec3_xpec_r6 0x0017C018U

#define MSK_xpec_r6_r6 0xffffffffU // [31:0]
#define SRT_xpec_r6_r6 0           

enum {
	BFW_xpec_r6_r6 = 32  // [31:0]
};

typedef struct XPEC_R6_BIT_Ttag {
	unsigned int r6 : BFW_xpec_r6_r6; // Work Register 6 
} XPEC_R6_BIT_T;

typedef union {
	unsigned int  val;
	XPEC_R6_BIT_T bf;
} XPEC_R6_T;

// ---------------------------------------------------------------------
// Register xpec_r7
// => xPEC work register for indirect addressing
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_r7   0x0000001CU
#define Adr_xpec0_xpec_r7 0x0017001CU
#define Adr_xpec1_xpec_r7 0x0017401CU
#define Adr_xpec2_xpec_r7 0x0017801CU
#define Adr_xpec3_xpec_r7 0x0017C01CU

#define MSK_xpec_r7_r7 0xffffffffU // [31:0]
#define SRT_xpec_r7_r7 0           

enum {
	BFW_xpec_r7_r7 = 32  // [31:0]
};

typedef struct XPEC_R7_BIT_Ttag {
	unsigned int r7 : BFW_xpec_r7_r7; // Work Register 7 
} XPEC_R7_BIT_T;

typedef union {
	unsigned int  val;
	XPEC_R7_BIT_T bf;
} XPEC_R7_T;

// ---------------------------------------------------------------------
// Register range01
// => xPEC Overflow Underflow register to limit stack and fifo buffer.
//    Generates range bits inside xPEC status register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_range01   0x00000020U
#define Adr_xpec0_range01 0x00170020U
#define Adr_xpec1_range01 0x00174020U
#define Adr_xpec2_range01 0x00178020U
#define Adr_xpec3_range01 0x0017C020U

#define MSK_range01_range0  0x00001fffU // [12:0]
#define SRT_range01_range0  0           
#define MSK_range01_bigger0 0x00002000U // [13]
#define SRT_range01_bigger0 13          
#define MSK_range01_range1  0x1fff0000U // [28:16]
#define SRT_range01_range1  16          
#define MSK_range01_bigger1 0x20000000U // [29]
#define SRT_range01_bigger1 29          

enum {
	BFW_range01_range0    = 13, // [12:0]
	BFW_range01_bigger0   = 1,  // [13]
	BFW_range01_reserved1 = 2,  // [15:14]
	BFW_range01_range1    = 13, // [28:16]
	BFW_range01_bigger1   = 1,  // [29]
	BFW_range01_reserved2 = 2   // [31:30]
};

typedef struct RANGE01_BIT_Ttag {
	unsigned int range0    : BFW_range01_range0;    // border for xpec_r0 
	unsigned int bigger0   : BFW_range01_bigger0;   // 0: generate range status bit, if r0 < range0; 1: generate range status bit, if r0 >= range0 
	unsigned int reserved1 : BFW_range01_reserved1; // reserved
	unsigned int range1    : BFW_range01_range1;    // border for xpec_r1 
	unsigned int bigger1   : BFW_range01_bigger1;   // 0: generate range status bit, if r1 < range1; 1: generate range status bit, if r1 >= range1 
	unsigned int reserved2 : BFW_range01_reserved2; // reserved
} RANGE01_BIT_T;

typedef union {
	unsigned int  val;
	RANGE01_BIT_T bf;
} RANGE01_T;

// ---------------------------------------------------------------------
// Register range23
// => xPEC Overflow Underflow register to limit stack and fifo buffer.
//    Generates range bits inside xPEC status register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_range23   0x00000024U
#define Adr_xpec0_range23 0x00170024U
#define Adr_xpec1_range23 0x00174024U
#define Adr_xpec2_range23 0x00178024U
#define Adr_xpec3_range23 0x0017C024U

#define MSK_range23_range2  0x00001fffU // [12:0]
#define SRT_range23_range2  0           
#define MSK_range23_bigger2 0x00002000U // [13]
#define SRT_range23_bigger2 13          
#define MSK_range23_range3  0x1fff0000U // [28:16]
#define SRT_range23_range3  16          
#define MSK_range23_bigger3 0x20000000U // [29]
#define SRT_range23_bigger3 29          

enum {
	BFW_range23_range2    = 13, // [12:0]
	BFW_range23_bigger2   = 1,  // [13]
	BFW_range23_reserved1 = 2,  // [15:14]
	BFW_range23_range3    = 13, // [28:16]
	BFW_range23_bigger3   = 1,  // [29]
	BFW_range23_reserved2 = 2   // [31:30]
};

typedef struct RANGE23_BIT_Ttag {
	unsigned int range2    : BFW_range23_range2;    // border for xpec_r2 
	unsigned int bigger2   : BFW_range23_bigger2;   // 0: generate range status bit, if r2 < range2; 1: generate range status bit, if r2 >= range2 
	unsigned int reserved1 : BFW_range23_reserved1; // reserved
	unsigned int range3    : BFW_range23_range3;    // border for xpec_r3 
	unsigned int bigger3   : BFW_range23_bigger3;   // 0: generate range status bit, if r3 < range3; 1: generate range status bit, if r3 >= range3 
	unsigned int reserved2 : BFW_range23_reserved2; // reserved
} RANGE23_BIT_T;

typedef union {
	unsigned int  val;
	RANGE23_BIT_T bf;
} RANGE23_T;

// ---------------------------------------------------------------------
// Register range45
// => xPEC Overflow Underflow register to limit stack and fifo buffer.
//    Generates range bits inside xPEC status register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_range45   0x00000028U
#define Adr_xpec0_range45 0x00170028U
#define Adr_xpec1_range45 0x00174028U
#define Adr_xpec2_range45 0x00178028U
#define Adr_xpec3_range45 0x0017C028U

#define MSK_range45_range4  0x00001fffU // [12:0]
#define SRT_range45_range4  0           
#define MSK_range45_bigger4 0x00002000U // [13]
#define SRT_range45_bigger4 13          
#define MSK_range45_range5  0x1fff0000U // [28:16]
#define SRT_range45_range5  16          
#define MSK_range45_bigger5 0x20000000U // [29]
#define SRT_range45_bigger5 29          

enum {
	BFW_range45_range4    = 13, // [12:0]
	BFW_range45_bigger4   = 1,  // [13]
	BFW_range45_reserved1 = 2,  // [15:14]
	BFW_range45_range5    = 13, // [28:16]
	BFW_range45_bigger5   = 1,  // [29]
	BFW_range45_reserved2 = 2   // [31:30]
};

typedef struct RANGE45_BIT_Ttag {
	unsigned int range4    : BFW_range45_range4;    // border for xpec_r4 
	unsigned int bigger4   : BFW_range45_bigger4;   // 0: generate range status bit, if r4 < range4; 1: generate range status bit, if r4 >= range4 
	unsigned int reserved1 : BFW_range45_reserved1; // reserved
	unsigned int range5    : BFW_range45_range5;    // border for xpec_r5 
	unsigned int bigger5   : BFW_range45_bigger5;   // 0: generate range status bit, if r5 < range5; 1: generate range status bit, if r5 >= range5 
	unsigned int reserved2 : BFW_range45_reserved2; // reserved
} RANGE45_BIT_T;

typedef union {
	unsigned int  val;
	RANGE45_BIT_T bf;
} RANGE45_T;

// ---------------------------------------------------------------------
// Register range67
// => xPEC Overflow Underflow register to limit stack and fifo buffer.
//    Generates range bits inside xPEC status register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_range67   0x0000002CU
#define Adr_xpec0_range67 0x0017002CU
#define Adr_xpec1_range67 0x0017402CU
#define Adr_xpec2_range67 0x0017802CU
#define Adr_xpec3_range67 0x0017C02CU

#define MSK_range67_range6  0x00001fffU // [12:0]
#define SRT_range67_range6  0           
#define MSK_range67_bigger6 0x00002000U // [13]
#define SRT_range67_bigger6 13          
#define MSK_range67_range7  0x1fff0000U // [28:16]
#define SRT_range67_range7  16          
#define MSK_range67_bigger7 0x20000000U // [29]
#define SRT_range67_bigger7 29          

enum {
	BFW_range67_range6    = 13, // [12:0]
	BFW_range67_bigger6   = 1,  // [13]
	BFW_range67_reserved1 = 2,  // [15:14]
	BFW_range67_range7    = 13, // [28:16]
	BFW_range67_bigger7   = 1,  // [29]
	BFW_range67_reserved2 = 2   // [31:30]
};

typedef struct RANGE67_BIT_Ttag {
	unsigned int range6    : BFW_range67_range6;    // border for xpec_r6 
	unsigned int bigger6   : BFW_range67_bigger6;   // 0: generate range status bit, if r6 < range6; 1: generate range status bit, if r6 >= range6 
	unsigned int reserved1 : BFW_range67_reserved1; // reserved
	unsigned int range7    : BFW_range67_range7;    // border for xpec_r7 
	unsigned int bigger7   : BFW_range67_bigger7;   // 0: generate range status bit, if r7 < range7; 1: generate range status bit, if r7 >= range7 
	unsigned int reserved2 : BFW_range67_reserved2; // reserved
} RANGE67_BIT_T;

typedef union {
	unsigned int  val;
	RANGE67_BIT_T bf;
} RANGE67_T;

// ---------------------------------------------------------------------
// Register timer0
// => xPEC Timer 0
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_timer0   0x00000030U
#define Adr_xpec0_timer0 0x00170030U
#define Adr_xpec1_timer0 0x00174030U
#define Adr_xpec2_timer0 0x00178030U
#define Adr_xpec3_timer0 0x0017C030U

#define MSK_timer0_preload0 0xffffffffU // [31:0]
#define SRT_timer0_preload0 0           

enum {
	BFW_timer0_preload0 = 32  // [31:0]
};

typedef struct TIMER0_BIT_Ttag {
	unsigned int preload0 : BFW_timer0_preload0; // read: actual value of timer, write: timer and preload value 
} TIMER0_BIT_T;

typedef union {
	unsigned int val;
	TIMER0_BIT_T bf;
} TIMER0_T;

// ---------------------------------------------------------------------
// Register timer1
// => xPEC Timer 1
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_timer1   0x00000034U
#define Adr_xpec0_timer1 0x00170034U
#define Adr_xpec1_timer1 0x00174034U
#define Adr_xpec2_timer1 0x00178034U
#define Adr_xpec3_timer1 0x0017C034U

#define MSK_timer1_preload1 0xffffffffU // [31:0]
#define SRT_timer1_preload1 0           

enum {
	BFW_timer1_preload1 = 32  // [31:0]
};

typedef struct TIMER1_BIT_Ttag {
	unsigned int preload1 : BFW_timer1_preload1; // read: actual value of timer, write: timer and preload value 
} TIMER1_BIT_T;

typedef union {
	unsigned int val;
	TIMER1_BIT_T bf;
} TIMER1_T;

// ---------------------------------------------------------------------
// Register timer2
// => xPEC Timer 2
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_timer2   0x00000038U
#define Adr_xpec0_timer2 0x00170038U
#define Adr_xpec1_timer2 0x00174038U
#define Adr_xpec2_timer2 0x00178038U
#define Adr_xpec3_timer2 0x0017C038U

#define MSK_timer2_preload2 0xffffffffU // [31:0]
#define SRT_timer2_preload2 0           

enum {
	BFW_timer2_preload2 = 32  // [31:0]
};

typedef struct TIMER2_BIT_Ttag {
	unsigned int preload2 : BFW_timer2_preload2; // read: actual value of timer, write: timer and preload value 
} TIMER2_BIT_T;

typedef union {
	unsigned int val;
	TIMER2_BIT_T bf;
} TIMER2_T;

// ---------------------------------------------------------------------
// Register timer3
// => xPEC Timer 3
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_timer3   0x0000003CU
#define Adr_xpec0_timer3 0x0017003CU
#define Adr_xpec1_timer3 0x0017403CU
#define Adr_xpec2_timer3 0x0017803CU
#define Adr_xpec3_timer3 0x0017C03CU

#define MSK_timer3_preload3 0xffffffffU // [31:0]
#define SRT_timer3_preload3 0           

enum {
	BFW_timer3_preload3 = 32  // [31:0]
};

typedef struct TIMER3_BIT_Ttag {
	unsigned int preload3 : BFW_timer3_preload3; // read: actual value of timer, write: timer and preload value 
} TIMER3_BIT_T;

typedef union {
	unsigned int val;
	TIMER3_BIT_T bf;
} TIMER3_T;

// ---------------------------------------------------------------------
// Register timer4
// => xPEC Timer 4
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_timer4   0x00000084U
#define Adr_xpec0_timer4 0x00170084U
#define Adr_xpec1_timer4 0x00174084U
#define Adr_xpec2_timer4 0x00178084U
#define Adr_xpec3_timer4 0x0017C084U

#define MSK_timer4_preload2 0xffffffffU // [31:0]
#define SRT_timer4_preload2 0           

enum {
	BFW_timer4_preload2 = 32  // [31:0]
};

typedef struct TIMER4_BIT_Ttag {
	unsigned int preload2 : BFW_timer4_preload2; // read: actual value of timer, write: timer and preload value 
} TIMER4_BIT_T;

typedef union {
	unsigned int val;
	TIMER4_BIT_T bf;
} TIMER4_T;

// ---------------------------------------------------------------------
// Register timer5
// => xPEC Timer 5
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_timer5   0x00000088U
#define Adr_xpec0_timer5 0x00170088U
#define Adr_xpec1_timer5 0x00174088U
#define Adr_xpec2_timer5 0x00178088U
#define Adr_xpec3_timer5 0x0017C088U

#define MSK_timer5_preload3 0xffffffffU // [31:0]
#define SRT_timer5_preload3 0           

enum {
	BFW_timer5_preload3 = 32  // [31:0]
};

typedef struct TIMER5_BIT_Ttag {
	unsigned int preload3 : BFW_timer5_preload3; // read: actual value of timer, write: timer and preload value 
} TIMER5_BIT_T;

typedef union {
	unsigned int val;
	TIMER5_BIT_T bf;
} TIMER5_T;

// ---------------------------------------------------------------------
// Register irq
// => xPEC IRQ Register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_irq   0x0000008CU
#define Adr_xpec0_irq 0x0017008CU
#define Adr_xpec1_irq 0x0017408CU
#define Adr_xpec2_irq 0x0017808CU
#define Adr_xpec3_irq 0x0017C08CU

#define MSK_irq_xpec_irq 0x0000ffffU // [15:0]
#define SRT_irq_xpec_irq 0           
#define MSK_irq_arm_irq  0xffff0000U // [31:16]
#define SRT_irq_arm_irq  16          

enum {
	BFW_irq_xpec_irq = 16, // [15:0]
	BFW_irq_arm_irq  = 16  // [31:16]
};

typedef struct IRQ_BIT_Ttag {
	unsigned int xpec_irq : BFW_irq_xpec_irq; // set by xpec ; reset by arm  
	unsigned int arm_irq  : BFW_irq_arm_irq;  // set by arm  ; reset by xpec 
} IRQ_BIT_T;

typedef union {
	unsigned int val;
	IRQ_BIT_T    bf;
} IRQ_T;

// ---------------------------------------------------------------------
// Register xpec_systime_ns
// => xPEC System time
//    Resetvalue : 0x00000000
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_systime_ns   0x00000090U
#define Adr_xpec0_xpec_systime_ns 0x00170090U
#define Adr_xpec1_xpec_systime_ns 0x00174090U
#define Adr_xpec2_xpec_systime_ns 0x00178090U
#define Adr_xpec3_xpec_systime_ns 0x0017C090U

#define MSK_xpec_systime_ns_systime_ns 0xffffffffU // [31:0]
#define SRT_xpec_systime_ns_systime_ns 0           

enum {
	BFW_xpec_systime_ns_systime_ns = 32  // [31:0]
};

typedef struct XPEC_SYSTIME_NS_BIT_Ttag {
	unsigned int systime_ns : BFW_xpec_systime_ns_systime_ns; // read: 32 - Bit System Time (ns)
} XPEC_SYSTIME_NS_BIT_T;

typedef union {
	unsigned int          val;
	XPEC_SYSTIME_NS_BIT_T bf;
} XPEC_SYSTIME_NS_T;

// ---------------------------------------------------------------------
// Register fifo_data
// => xPEC fifo_data
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_fifo_data   0x00000094U
#define Adr_xpec0_fifo_data 0x00170094U
#define Adr_xpec1_fifo_data 0x00174094U
#define Adr_xpec2_fifo_data 0x00178094U
#define Adr_xpec3_fifo_data 0x0017C094U

#define MSK_fifo_data_fifo_data 0xffffffffU // [31:0]
#define SRT_fifo_data_fifo_data 0           

enum {
	BFW_fifo_data_fifo_data = 32  // [31:0]
};

typedef struct FIFO_DATA_BIT_Ttag {
	unsigned int fifo_data : BFW_fifo_data_fifo_data; // default 0x0000
} FIFO_DATA_BIT_T;

typedef union {
	unsigned int    val;
	FIFO_DATA_BIT_T bf;
} FIFO_DATA_T;

// ---------------------------------------------------------------------
// Register xpec_systime_s
// => xPEC System time
//    Resetvalue : 0x00000000
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_systime_s   0x00000098U
#define Adr_xpec0_xpec_systime_s 0x00170098U
#define Adr_xpec1_xpec_systime_s 0x00174098U
#define Adr_xpec2_xpec_systime_s 0x00178098U
#define Adr_xpec3_xpec_systime_s 0x0017C098U

#define MSK_xpec_systime_s_systime_s 0xffffffffU // [31:0]
#define SRT_xpec_systime_s_systime_s 0           

enum {
	BFW_xpec_systime_s_systime_s = 32  // [31:0]
};

typedef struct XPEC_SYSTIME_S_BIT_Ttag {
	unsigned int systime_s : BFW_xpec_systime_s_systime_s; // read: 32 - Bit System Time (s)
} XPEC_SYSTIME_S_BIT_T;

typedef union {
	unsigned int         val;
	XPEC_SYSTIME_S_BIT_T bf;
} XPEC_SYSTIME_S_T;

// ---------------------------------------------------------------------
// Register xpec_adc
// => ADC Register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_adc   0x0000009CU
#define Adr_xpec0_xpec_adc 0x0017009CU
#define Adr_xpec1_xpec_adc 0x0017409CU
#define Adr_xpec2_xpec_adc 0x0017809CU
#define Adr_xpec3_xpec_adc 0x0017C09CU

#define MSK_xpec_adc_bits 0xffffffffU // [31:0]
#define SRT_xpec_adc_bits 0           

enum {
	BFW_xpec_adc_bits = 32  // [31:0]
};

typedef struct XPEC_ADC_BIT_Ttag {
	unsigned int bits : BFW_xpec_adc_bits; // config - status ADC 
	                                                        // see ADC Specification
	                                                        //------------------------------------------
	                                                        //  read 9 - 0: adc0_D[9:0]
	                                                        //  read 10: adc0_data_busy
	                                                        //  read 15 - 11: reserved
	                                                        //  read 25 - 16: adc1_D[9:0]
	                                                        //  read 26: adc1_data_busy
	                                                        //  read 31 - 27: reserved
	                                                        //------------------------------------------
	                                                        //  write 0: adc0_pdb
	                                                        //  write 1: adc0_start
	                                                        //  write 4 - 2: adc0_sel[2:0]
	                                                        //  write 14 - 5: reserved
	                                                        //  write 15: dont write adc0
	                                                        //  write 16: adc1_pdb
	                                                        //  write 17:adc1_start
	                                                        //  write 20 - 18: adc1_sel[2:0]
	                                                        //  write 30 - 21: reserved
	                                                        //  write 31: dont write adc1
} XPEC_ADC_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_ADC_BIT_T bf;
} XPEC_ADC_T;

// ---------------------------------------------------------------------
// Register urx_count
// => xPEC urx counter
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_urx_count   0x00000040U
#define Adr_xpec0_urx_count 0x00170040U
#define Adr_xpec1_urx_count 0x00174040U
#define Adr_xpec2_urx_count 0x00178040U
#define Adr_xpec3_urx_count 0x0017C040U

#define MSK_urx_count_urx_count 0xffffffffU // [31:0]
#define SRT_urx_count_urx_count 0           

enum {
	BFW_urx_count_urx_count = 32  // [31:0]
};

typedef struct URX_COUNT_BIT_Ttag {
	unsigned int urx_count : BFW_urx_count_urx_count; // counts up received bytes (accesses of xPEC to any URX FIFO) 
} URX_COUNT_BIT_T;

typedef union {
	unsigned int    val;
	URX_COUNT_BIT_T bf;
} URX_COUNT_T;

// ---------------------------------------------------------------------
// Register utx_count
// => xPEC utx counter
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_utx_count   0x00000044U
#define Adr_xpec0_utx_count 0x00170044U
#define Adr_xpec1_utx_count 0x00174044U
#define Adr_xpec2_utx_count 0x00178044U
#define Adr_xpec3_utx_count 0x0017C044U

#define MSK_utx_count_utx_count 0xffffffffU // [31:0]
#define SRT_utx_count_utx_count 0           

enum {
	BFW_utx_count_utx_count = 32  // [31:0]
};

typedef struct UTX_COUNT_BIT_Ttag {
	unsigned int utx_count : BFW_utx_count_utx_count; // counts up transmitted bytes (accesses of xPEC to any UTX FIFO) 
} UTX_COUNT_BIT_T;

typedef union {
	unsigned int    val;
	UTX_COUNT_BIT_T bf;
} UTX_COUNT_T;

// ---------------------------------------------------------------------
// Register xpec_pc
// => xPEC Program Counter
//    Resetvalue : 0x000007ff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_pc   0x00000048U
#define Adr_xpec0_xpec_pc 0x00170048U
#define Adr_xpec1_xpec_pc 0x00174048U
#define Adr_xpec2_xpec_pc 0x00178048U
#define Adr_xpec3_xpec_pc 0x0017C048U

#define MSK_xpec_pc_pc 0x000007ffU // [10:0]
#define SRT_xpec_pc_pc 0           

enum {
	BFW_xpec_pc_pc        = 11, // [10:0]
	BFW_xpec_pc_reserved1 = 21  // [31:11]
};

typedef struct XPEC_PC_BIT_Ttag {
	unsigned int pc        : BFW_xpec_pc_pc;        // Program Counter (dword address inside DPRAM) 
	unsigned int reserved1 : BFW_xpec_pc_reserved1; // reserved
} XPEC_PC_BIT_T;

typedef union {
	unsigned int  val;
	XPEC_PC_BIT_T bf;
} XPEC_PC_T;

// ---------------------------------------------------------------------
// Register zero
// => Zero Register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_zero   0x0000004CU
#define Adr_xpec0_zero 0x0017004CU
#define Adr_xpec1_zero 0x0017404CU
#define Adr_xpec2_zero 0x0017804CU
#define Adr_xpec3_zero 0x0017C04CU

#define MSK_zero_zero 0xffffffffU // [31:0]
#define SRT_zero_zero 0           

enum {
	BFW_zero_zero = 32  // [31:0]
};

typedef struct ZERO_BIT_Ttag {
	unsigned int zero : BFW_zero_zero; // Always Zero 
} ZERO_BIT_T;

typedef union {
	unsigned int val;
	ZERO_BIT_T   bf;
} ZERO_T;

// ---------------------------------------------------------------------
// Register xpec_statcfg
// => xPEC Config register
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_statcfg   0x00000050U
#define Adr_xpec0_xpec_statcfg 0x00170050U
#define Adr_xpec1_xpec_statcfg 0x00174050U
#define Adr_xpec2_xpec_statcfg 0x00178050U
#define Adr_xpec3_xpec_statcfg 0x0017C050U

#define MSK_xpec_statcfg_timer0             0x00000003U // [1:0]
#define SRT_xpec_statcfg_timer0             0           
#define MSK_xpec_statcfg_timer1             0x0000000cU // [3:2]
#define SRT_xpec_statcfg_timer1             2           
#define MSK_xpec_statcfg_timer2             0x00000030U // [5:4]
#define SRT_xpec_statcfg_timer2             4           
#define MSK_xpec_statcfg_timer3             0x000000c0U // [7:6]
#define SRT_xpec_statcfg_timer3             6           
#define MSK_xpec_statcfg_timer4             0x00000300U // [9:8]
#define SRT_xpec_statcfg_timer4             8           
#define MSK_xpec_statcfg_timer5             0x00000c00U // [11:10]
#define SRT_xpec_statcfg_timer5             10          
#define MSK_xpec_statcfg_reset_req          0x00001000U // [12]
#define SRT_xpec_statcfg_reset_req          12          
#define MSK_xpec_statcfg_reset_dis          0x00002000U // [13]
#define SRT_xpec_statcfg_reset_dis          13          
#define MSK_xpec_statcfg_debug_mode         0x00004000U // [14]
#define SRT_xpec_statcfg_debug_mode         14          
#define MSK_xpec_statcfg_run_dma_controller 0x80000000U // [31]
#define SRT_xpec_statcfg_run_dma_controller 31          

enum {
	BFW_xpec_statcfg_timer0             = 2,  // [1:0]
	BFW_xpec_statcfg_timer1             = 2,  // [3:2]
	BFW_xpec_statcfg_timer2             = 2,  // [5:4]
	BFW_xpec_statcfg_timer3             = 2,  // [7:6]
	BFW_xpec_statcfg_timer4             = 2,  // [9:8]
	BFW_xpec_statcfg_timer5             = 2,  // [11:10]
	BFW_xpec_statcfg_reset_req          = 1,  // [12]
	BFW_xpec_statcfg_reset_dis          = 1,  // [13]
	BFW_xpec_statcfg_debug_mode         = 1,  // [14]
	BFW_xpec_statcfg_reserved1          = 16, // [30:15]
	BFW_xpec_statcfg_run_dma_controller = 1   // [31]
};

typedef struct XPEC_STATCFG_BIT_Ttag {
	unsigned int timer0             : BFW_xpec_statcfg_timer0;             // Timer0
	                                                        //       2'b00 : Timer stops at 0
	                                                        //       2'b01 : Timer is preload with value from preload register at 0
	                                                        //       2'b10 : Timer (value) compare with systime
	                                                        //       2'b11 : Timer is workregister
	unsigned int timer1             : BFW_xpec_statcfg_timer1;             // Timer1
	unsigned int timer2             : BFW_xpec_statcfg_timer2;             // Timer2
	unsigned int timer3             : BFW_xpec_statcfg_timer3;             // Timer3
	unsigned int timer4             : BFW_xpec_statcfg_timer4;             // Timer4
	unsigned int timer5             : BFW_xpec_statcfg_timer5;             // Timer5
	unsigned int reset_req          : BFW_xpec_statcfg_reset_req;          // System Reset
	unsigned int reset_dis          : BFW_xpec_statcfg_reset_dis;          // disable own Reset
	unsigned int debug_mode         : BFW_xpec_statcfg_debug_mode;         // in this mode XPEC gets debug data form sr14 and sr15
	unsigned int reserved1          : BFW_xpec_statcfg_reserved1;          // reserved
	unsigned int run_dma_controller : BFW_xpec_statcfg_run_dma_controller; // 0: stop dma_controller, 1: start dma_controller
	                                                        // stop / start the polling
} XPEC_STATCFG_BIT_T;

typedef union {
	unsigned int       val;
	XPEC_STATCFG_BIT_T bf;
} XPEC_STATCFG_T;

// ---------------------------------------------------------------------
// Register ec_maska
// => JMP-Mask a
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_maska   0x00000054U
#define Adr_xpec0_ec_maska 0x00170054U
#define Adr_xpec1_ec_maska 0x00174054U
#define Adr_xpec2_ec_maska 0x00178054U
#define Adr_xpec3_ec_maska 0x0017C054U

#define MSK_ec_maska_sel0              0x000000ffU // [7:0]
#define SRT_ec_maska_sel0              0           
#define MSK_ec_maska_sel1              0x0000ff00U // [15:8]
#define SRT_ec_maska_sel1              8           
#define MSK_ec_maska_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_maska_jmp_adr           16          
#define MSK_ec_maska_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_maska_level_edge_event0 27          
#define MSK_ec_maska_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_maska_level_edge_event1 29          
#define MSK_ec_maska_and_or            0x80000000U // [31]
#define SRT_ec_maska_and_or            31          

enum {
	BFW_ec_maska_sel0              = 8,  // [7:0]
	BFW_ec_maska_sel1              = 8,  // [15:8]
	BFW_ec_maska_jmp_adr           = 11, // [26:16]
	BFW_ec_maska_level_edge_event0 = 2,  // [28:27]
	BFW_ec_maska_level_edge_event1 = 2,  // [30:29]
	BFW_ec_maska_and_or            = 1   // [31]
};

typedef struct EC_MASKA_BIT_Ttag {
	unsigned int sel0              : BFW_ec_maska_sel0;              // Select of event 0: 
	                                                        //     0-15    : XMAC status reg 0 (statcfg0 16:31)
	                                                        //     16-31   : XMAC status reg 1 (statcfg1 16:31)
	                                                        //     32-47   : XMAC status reg 2 (statcfg2 16:31)
	                                                        //     48-63   : XMAC status reg 3 (statcfg3 16:31)
	                                                        //     64-67   : Timer interrupt 0:3
	                                                        //     68-71   : Shared Register sr_0[12:15]
	                                                        //     72-75   : Shared Register sr_1[12:15]
	                                                        //     76-79   : Shared Register sr_2[12:15]
	                                                        //     80-83   : Shared Register sr_3[12:15]
	                                                        //     84-87   : Shared Register sr_4[12:15]
	                                                        //     88-91   : Shared Register sr_5[12:15]
	                                                        //     92-95   : Shared Register sr_6[12:15]
	                                                        //     96-99   : Shared Register sr_7[12:15]
	                                                        //     100-103 : Shared Register sr_8[12:15]
	                                                        //     104-107 : Shared Register sr_9[12:15]
	                                                        //     108-111 : Shared Register sr_10[12:15]
	                                                        //     112-115 : Shared Register sr_11[12:15]
	                                                        //     116-119 : Shared Register sr_12[12:15]
	                                                        //     120-123 : Shared Register sr_13[12:15]
	                                                        //     124-127 : Shared Register sr_14[12:15]
	                                                        //     128-131 : Shared Register sr_15[12:15]
	                                                        //     132-139 : xPEC_0(DMA_finish[0:7])
	                                                        //               132 : DMA_finish_0
	                                                        //               133 : DMA_finish_1
	                                                        //               134 : DMA_finish_2
	                                                        //               135 : DMA_finish_3
	                                                        //               136 : DMA_finish_4
	                                                        //               137 : DMA_finish_5
	                                                        //               138 : DMA_finish_6
	                                                        //               139 : DMA_finish_7
	                                                        //     140-147 : xPEC_1(DMA_finish[0:7])
	                                                        //               140 : DMA_finish_0
	                                                        //               141 : DMA_finish_1
	                                                        //               142 : DMA_finish_2
	                                                        //               143 : DMA_finish_3
	                                                        //               144 : DMA_finish_4
	                                                        //               145 : DMA_finish_5
	                                                        //               146 : DMA_finish_6
	                                                        //               147 : DMA_finish_7
	                                                        //     148-155 : xPEC_2(DMA_finish[0:7])
	                                                        //               148 : DMA_finish_0
	                                                        //               149 : DMA_finish_1
	                                                        //               150 : DMA_finish_2
	                                                        //               151 : DMA_finish_3
	                                                        //               152 : DMA_finish_4
	                                                        //               153 : DMA_finish_5
	                                                        //               154 : DMA_finish_6
	                                                        //               155 : DMA_finish_7
	                                                        //     156-163 : xPEC_1(DMA_finish[0:7])
	                                                        //               156 : DMA_finish_0
	                                                        //               157 : DMA_finish_1
	                                                        //               158 : DMA_finish_2
	                                                        //               159 : DMA_finish_3
	                                                        //               160 : DMA_finish_4
	                                                        //               161 : DMA_finish_5
	                                                        //               162 : DMA_finish_6
	                                                        //               163 : DMA_finish_7
	                                                        //     164-165   : Timer interrupt 4:5
	                                                        //     166-173 : range_w0 - range_w7 smaller as w0 - w7
	                                                        //               166 : range_w0 < w0
	                                                        //               167 : range_w1 < w1
	                                                        //               168 : range_w2 < w2
	                                                        //               169 : range_w3 < w3
	                                                        //               170 : range_w4 < w4
	                                                        //               171 : range_w5 < w5
	                                                        //               172 : range_w6 < w6
	                                                        //               173 : range_w7 < w7
	                                                        //     174-181 : range_w0 - range_w7 2 smaller as w0 - w7
	                                                        //               174 : range_w0 2< w0
	                                                        //               175 : range_w1 2< w1
	                                                        //               176 : range_w2 2< w2
	                                                        //               177 : range_w3 2< w3
	                                                        //               178 : range_w4 2< w4
	                                                        //               179 : range_w5 2< w5
	                                                        //               180 : range_w6 2< w6
	                                                        //               181 : range_w7 2< w7
	                                                        //         182 : rx_rdy_asyn_xmac0
	                                                        //         183 : rx_rdy_asyn_xmac1
	                                                        //         184 : rx_rdy_asyn_xmac2
	                                                        //         185 : rx_rdy_asyn_xmac3
	                                                        //         186 : tx_nxt2_asyn_xmac0
	                                                        //         187 : tx_nxt2_asyn_xmac1
	                                                        //         188 : tx_nxt2_asyn_xmac2
	                                                        //         189 : tx_nxt2_asyn_xmac3
	                                                        //     190-221 : fifo_empty [0:31]
	                                                        //         222 : adc0_data_busy
	                                                        //         223 : adc1_data_busy
	                                                        //     224-239 : arm_irq [0:15] (from irq_reg[16:31])
	                                                        //         240 : debug_event
	                                                        //       255 : reserved # default value
	unsigned int sel1              : BFW_ec_maska_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_maska_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_maska_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_maska_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_maska_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASKA_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASKA_BIT_T bf;
} EC_MASKA_T;

// ---------------------------------------------------------------------
// Register ec_maskb
// => JMP-Mask b
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_maskb   0x00000058U
#define Adr_xpec0_ec_maskb 0x00170058U
#define Adr_xpec1_ec_maskb 0x00174058U
#define Adr_xpec2_ec_maskb 0x00178058U
#define Adr_xpec3_ec_maskb 0x0017C058U

#define MSK_ec_maskb_sel0              0x000000ffU // [7:0]
#define SRT_ec_maskb_sel0              0           
#define MSK_ec_maskb_sel1              0x0000ff00U // [15:8]
#define SRT_ec_maskb_sel1              8           
#define MSK_ec_maskb_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_maskb_jmp_adr           16          
#define MSK_ec_maskb_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_maskb_level_edge_event0 27          
#define MSK_ec_maskb_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_maskb_level_edge_event1 29          
#define MSK_ec_maskb_and_or            0x80000000U // [31]
#define SRT_ec_maskb_and_or            31          

enum {
	BFW_ec_maskb_sel0              = 8,  // [7:0]
	BFW_ec_maskb_sel1              = 8,  // [15:8]
	BFW_ec_maskb_jmp_adr           = 11, // [26:16]
	BFW_ec_maskb_level_edge_event0 = 2,  // [28:27]
	BFW_ec_maskb_level_edge_event1 = 2,  // [30:29]
	BFW_ec_maskb_and_or            = 1   // [31]
};

typedef struct EC_MASKB_BIT_Ttag {
	unsigned int sel0              : BFW_ec_maskb_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_maskb_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_maskb_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_maskb_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_maskb_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_maskb_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASKB_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASKB_BIT_T bf;
} EC_MASKB_T;

// ---------------------------------------------------------------------
// Register ec_mask8
// => JMP-Mask 8
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask8   0x0000007CU
#define Adr_xpec0_ec_mask8 0x0017007CU
#define Adr_xpec1_ec_mask8 0x0017407CU
#define Adr_xpec2_ec_mask8 0x0017807CU
#define Adr_xpec3_ec_mask8 0x0017C07CU

#define MSK_ec_mask8_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask8_sel0              0           
#define MSK_ec_mask8_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask8_sel1              8           
#define MSK_ec_mask8_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask8_jmp_adr           16          
#define MSK_ec_mask8_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask8_level_edge_event0 27          
#define MSK_ec_mask8_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask8_level_edge_event1 29          
#define MSK_ec_mask8_and_or            0x80000000U // [31]
#define SRT_ec_mask8_and_or            31          

enum {
	BFW_ec_mask8_sel0              = 8,  // [7:0]
	BFW_ec_mask8_sel1              = 8,  // [15:8]
	BFW_ec_mask8_jmp_adr           = 11, // [26:16]
	BFW_ec_mask8_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask8_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask8_and_or            = 1   // [31]
};

typedef struct EC_MASK8_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask8_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask8_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask8_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask8_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask8_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask8_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK8_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK8_BIT_T bf;
} EC_MASK8_T;

// ---------------------------------------------------------------------
// Register ec_mask9
// => JMP-Mask 9
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask9   0x00000080U
#define Adr_xpec0_ec_mask9 0x00170080U
#define Adr_xpec1_ec_mask9 0x00174080U
#define Adr_xpec2_ec_mask9 0x00178080U
#define Adr_xpec3_ec_mask9 0x0017C080U

#define MSK_ec_mask9_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask9_sel0              0           
#define MSK_ec_mask9_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask9_sel1              8           
#define MSK_ec_mask9_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask9_jmp_adr           16          
#define MSK_ec_mask9_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask9_level_edge_event0 27          
#define MSK_ec_mask9_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask9_level_edge_event1 29          
#define MSK_ec_mask9_and_or            0x80000000U // [31]
#define SRT_ec_mask9_and_or            31          

enum {
	BFW_ec_mask9_sel0              = 8,  // [7:0]
	BFW_ec_mask9_sel1              = 8,  // [15:8]
	BFW_ec_mask9_jmp_adr           = 11, // [26:16]
	BFW_ec_mask9_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask9_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask9_and_or            = 1   // [31]
};

typedef struct EC_MASK9_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask9_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask9_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask9_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask9_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask9_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask9_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK9_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK9_BIT_T bf;
} EC_MASK9_T;

// ---------------------------------------------------------------------
// Register ec_mask0
// => JMP-Mask 0
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask0   0x0000005CU
#define Adr_xpec0_ec_mask0 0x0017005CU
#define Adr_xpec1_ec_mask0 0x0017405CU
#define Adr_xpec2_ec_mask0 0x0017805CU
#define Adr_xpec3_ec_mask0 0x0017C05CU

#define MSK_ec_mask0_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask0_sel0              0           
#define MSK_ec_mask0_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask0_sel1              8           
#define MSK_ec_mask0_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask0_jmp_adr           16          
#define MSK_ec_mask0_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask0_level_edge_event0 27          
#define MSK_ec_mask0_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask0_level_edge_event1 29          
#define MSK_ec_mask0_and_or            0x80000000U // [31]
#define SRT_ec_mask0_and_or            31          

enum {
	BFW_ec_mask0_sel0              = 8,  // [7:0]
	BFW_ec_mask0_sel1              = 8,  // [15:8]
	BFW_ec_mask0_jmp_adr           = 11, // [26:16]
	BFW_ec_mask0_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask0_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask0_and_or            = 1   // [31]
};

typedef struct EC_MASK0_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask0_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask0_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask0_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask0_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask0_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask0_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK0_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK0_BIT_T bf;
} EC_MASK0_T;

// ---------------------------------------------------------------------
// Register ec_mask1
// => JMP-Mask 1
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask1   0x00000060U
#define Adr_xpec0_ec_mask1 0x00170060U
#define Adr_xpec1_ec_mask1 0x00174060U
#define Adr_xpec2_ec_mask1 0x00178060U
#define Adr_xpec3_ec_mask1 0x0017C060U

#define MSK_ec_mask1_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask1_sel0              0           
#define MSK_ec_mask1_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask1_sel1              8           
#define MSK_ec_mask1_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask1_jmp_adr           16          
#define MSK_ec_mask1_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask1_level_edge_event0 27          
#define MSK_ec_mask1_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask1_level_edge_event1 29          
#define MSK_ec_mask1_and_or            0x80000000U // [31]
#define SRT_ec_mask1_and_or            31          

enum {
	BFW_ec_mask1_sel0              = 8,  // [7:0]
	BFW_ec_mask1_sel1              = 8,  // [15:8]
	BFW_ec_mask1_jmp_adr           = 11, // [26:16]
	BFW_ec_mask1_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask1_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask1_and_or            = 1   // [31]
};

typedef struct EC_MASK1_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask1_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask1_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask1_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask1_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask1_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask1_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK1_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK1_BIT_T bf;
} EC_MASK1_T;

// ---------------------------------------------------------------------
// Register ec_mask2
// => JMP-Mask 2
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask2   0x00000064U
#define Adr_xpec0_ec_mask2 0x00170064U
#define Adr_xpec1_ec_mask2 0x00174064U
#define Adr_xpec2_ec_mask2 0x00178064U
#define Adr_xpec3_ec_mask2 0x0017C064U

#define MSK_ec_mask2_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask2_sel0              0           
#define MSK_ec_mask2_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask2_sel1              8           
#define MSK_ec_mask2_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask2_jmp_adr           16          
#define MSK_ec_mask2_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask2_level_edge_event0 27          
#define MSK_ec_mask2_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask2_level_edge_event1 29          
#define MSK_ec_mask2_and_or            0x80000000U // [31]
#define SRT_ec_mask2_and_or            31          

enum {
	BFW_ec_mask2_sel0              = 8,  // [7:0]
	BFW_ec_mask2_sel1              = 8,  // [15:8]
	BFW_ec_mask2_jmp_adr           = 11, // [26:16]
	BFW_ec_mask2_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask2_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask2_and_or            = 1   // [31]
};

typedef struct EC_MASK2_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask2_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask2_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask2_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask2_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask2_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask2_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK2_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK2_BIT_T bf;
} EC_MASK2_T;

// ---------------------------------------------------------------------
// Register ec_mask3
// => JMP-Mask 3
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask3   0x00000068U
#define Adr_xpec0_ec_mask3 0x00170068U
#define Adr_xpec1_ec_mask3 0x00174068U
#define Adr_xpec2_ec_mask3 0x00178068U
#define Adr_xpec3_ec_mask3 0x0017C068U

#define MSK_ec_mask3_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask3_sel0              0           
#define MSK_ec_mask3_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask3_sel1              8           
#define MSK_ec_mask3_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask3_jmp_adr           16          
#define MSK_ec_mask3_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask3_level_edge_event0 27          
#define MSK_ec_mask3_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask3_level_edge_event1 29          
#define MSK_ec_mask3_and_or            0x80000000U // [31]
#define SRT_ec_mask3_and_or            31          

enum {
	BFW_ec_mask3_sel0              = 8,  // [7:0]
	BFW_ec_mask3_sel1              = 8,  // [15:8]
	BFW_ec_mask3_jmp_adr           = 11, // [26:16]
	BFW_ec_mask3_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask3_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask3_and_or            = 1   // [31]
};

typedef struct EC_MASK3_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask3_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask3_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask3_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask3_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask3_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask3_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK3_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK3_BIT_T bf;
} EC_MASK3_T;

// ---------------------------------------------------------------------
// Register ec_mask4
// => JMP-Mask 4
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask4   0x0000006CU
#define Adr_xpec0_ec_mask4 0x0017006CU
#define Adr_xpec1_ec_mask4 0x0017406CU
#define Adr_xpec2_ec_mask4 0x0017806CU
#define Adr_xpec3_ec_mask4 0x0017C06CU

#define MSK_ec_mask4_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask4_sel0              0           
#define MSK_ec_mask4_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask4_sel1              8           
#define MSK_ec_mask4_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask4_jmp_adr           16          
#define MSK_ec_mask4_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask4_level_edge_event0 27          
#define MSK_ec_mask4_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask4_level_edge_event1 29          
#define MSK_ec_mask4_and_or            0x80000000U // [31]
#define SRT_ec_mask4_and_or            31          

enum {
	BFW_ec_mask4_sel0              = 8,  // [7:0]
	BFW_ec_mask4_sel1              = 8,  // [15:8]
	BFW_ec_mask4_jmp_adr           = 11, // [26:16]
	BFW_ec_mask4_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask4_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask4_and_or            = 1   // [31]
};

typedef struct EC_MASK4_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask4_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask4_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask4_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask4_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask4_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask4_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK4_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK4_BIT_T bf;
} EC_MASK4_T;

// ---------------------------------------------------------------------
// Register ec_mask5
// => JMP-Mask 5
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask5   0x00000070U
#define Adr_xpec0_ec_mask5 0x00170070U
#define Adr_xpec1_ec_mask5 0x00174070U
#define Adr_xpec2_ec_mask5 0x00178070U
#define Adr_xpec3_ec_mask5 0x0017C070U

#define MSK_ec_mask5_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask5_sel0              0           
#define MSK_ec_mask5_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask5_sel1              8           
#define MSK_ec_mask5_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask5_jmp_adr           16          
#define MSK_ec_mask5_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask5_level_edge_event0 27          
#define MSK_ec_mask5_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask5_level_edge_event1 29          
#define MSK_ec_mask5_and_or            0x80000000U // [31]
#define SRT_ec_mask5_and_or            31          

enum {
	BFW_ec_mask5_sel0              = 8,  // [7:0]
	BFW_ec_mask5_sel1              = 8,  // [15:8]
	BFW_ec_mask5_jmp_adr           = 11, // [26:16]
	BFW_ec_mask5_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask5_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask5_and_or            = 1   // [31]
};

typedef struct EC_MASK5_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask5_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask5_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask5_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask5_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask5_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask5_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK5_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK5_BIT_T bf;
} EC_MASK5_T;

// ---------------------------------------------------------------------
// Register ec_mask6
// => JMP-Mask 6
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask6   0x00000074U
#define Adr_xpec0_ec_mask6 0x00170074U
#define Adr_xpec1_ec_mask6 0x00174074U
#define Adr_xpec2_ec_mask6 0x00178074U
#define Adr_xpec3_ec_mask6 0x0017C074U

#define MSK_ec_mask6_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask6_sel0              0           
#define MSK_ec_mask6_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask6_sel1              8           
#define MSK_ec_mask6_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask6_jmp_adr           16          
#define MSK_ec_mask6_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask6_level_edge_event0 27          
#define MSK_ec_mask6_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask6_level_edge_event1 29          
#define MSK_ec_mask6_and_or            0x80000000U // [31]
#define SRT_ec_mask6_and_or            31          

enum {
	BFW_ec_mask6_sel0              = 8,  // [7:0]
	BFW_ec_mask6_sel1              = 8,  // [15:8]
	BFW_ec_mask6_jmp_adr           = 11, // [26:16]
	BFW_ec_mask6_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask6_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask6_and_or            = 1   // [31]
};

typedef struct EC_MASK6_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask6_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask6_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask6_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask6_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask6_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask6_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK6_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK6_BIT_T bf;
} EC_MASK6_T;

// ---------------------------------------------------------------------
// Register ec_mask7
// => JMP-Mask 7
//    Resetvalue : 0x0000ffff
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_ec_mask7   0x00000078U
#define Adr_xpec0_ec_mask7 0x00170078U
#define Adr_xpec1_ec_mask7 0x00174078U
#define Adr_xpec2_ec_mask7 0x00178078U
#define Adr_xpec3_ec_mask7 0x0017C078U

#define MSK_ec_mask7_sel0              0x000000ffU // [7:0]
#define SRT_ec_mask7_sel0              0           
#define MSK_ec_mask7_sel1              0x0000ff00U // [15:8]
#define SRT_ec_mask7_sel1              8           
#define MSK_ec_mask7_jmp_adr           0x07ff0000U // [26:16]
#define SRT_ec_mask7_jmp_adr           16          
#define MSK_ec_mask7_level_edge_event0 0x18000000U // [28:27]
#define SRT_ec_mask7_level_edge_event0 27          
#define MSK_ec_mask7_level_edge_event1 0x60000000U // [30:29]
#define SRT_ec_mask7_level_edge_event1 29          
#define MSK_ec_mask7_and_or            0x80000000U // [31]
#define SRT_ec_mask7_and_or            31          

enum {
	BFW_ec_mask7_sel0              = 8,  // [7:0]
	BFW_ec_mask7_sel1              = 8,  // [15:8]
	BFW_ec_mask7_jmp_adr           = 11, // [26:16]
	BFW_ec_mask7_level_edge_event0 = 2,  // [28:27]
	BFW_ec_mask7_level_edge_event1 = 2,  // [30:29]
	BFW_ec_mask7_and_or            = 1   // [31]
};

typedef struct EC_MASK7_BIT_Ttag {
	unsigned int sel0              : BFW_ec_mask7_sel0;              // Select of event 0 
	unsigned int sel1              : BFW_ec_mask7_sel1;              // Select of event 1 
	unsigned int jmp_adr           : BFW_ec_mask7_jmp_adr;           // jmp address (0-2047) 
	unsigned int level_edge_event0 : BFW_ec_mask7_level_edge_event0; // for event 0 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int level_edge_event1 : BFW_ec_mask7_level_edge_event1; // for event 1 : level / edge sensitive:
	                                                        //               2'b00 sensitve to 1 level
	                                                        //               2'b01 sensitve to 0 level
	                                                        //               2'b10 sensitve to positive edge (low to high)
	                                                        //               2'b11 sensitve to negative edge (high to low)
	unsigned int and_or            : BFW_ec_mask7_and_or;            // and/or bit:
	                                                        // 0 - All bits of mask must fit with events,
	                                                        // 1 - Only one bit of mask must fit with events # default 0
} EC_MASK7_BIT_T;

typedef union {
	unsigned int   val;
	EC_MASK7_BIT_T bf;
} EC_MASK7_T;

// ---------------------------------------------------------------------
// Register xpec_sr0
// => Shared Work Register 0 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr0   0x000000A0U
#define Adr_xpec0_xpec_sr0 0x001700A0U
#define Adr_xpec1_xpec_sr0 0x001740A0U
#define Adr_xpec2_xpec_sr0 0x001780A0U
#define Adr_xpec3_xpec_sr0 0x0017C0A0U

#define MSK_xpec_sr0_SR0    0x0000ffffU // [15:0]
#define SRT_xpec_sr0_SR0    0           
#define MSK_xpec_sr0_SR0_15 0xffff0000U // [31:16]
#define SRT_xpec_sr0_SR0_15 16          

enum {
	BFW_xpec_sr0_SR0    = 16, // [15:0]
	BFW_xpec_sr0_SR0_15 = 16  // [31:16]
};

typedef struct XPEC_SR0_BIT_Ttag {
	unsigned int SR0    : BFW_xpec_sr0_SR0;    // Shared Register 
	unsigned int SR0_15 : BFW_xpec_sr0_SR0_15; // Sign extension 
} XPEC_SR0_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR0_BIT_T bf;
} XPEC_SR0_T;

// ---------------------------------------------------------------------
// Register xpec_sr1
// => Shared Work Register 1 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr1   0x000000A4U
#define Adr_xpec0_xpec_sr1 0x001700A4U
#define Adr_xpec1_xpec_sr1 0x001740A4U
#define Adr_xpec2_xpec_sr1 0x001780A4U
#define Adr_xpec3_xpec_sr1 0x0017C0A4U

#define MSK_xpec_sr1_SR1    0x0000ffffU // [15:0]
#define SRT_xpec_sr1_SR1    0           
#define MSK_xpec_sr1_SR1_15 0xffff0000U // [31:16]
#define SRT_xpec_sr1_SR1_15 16          

enum {
	BFW_xpec_sr1_SR1    = 16, // [15:0]
	BFW_xpec_sr1_SR1_15 = 16  // [31:16]
};

typedef struct XPEC_SR1_BIT_Ttag {
	unsigned int SR1    : BFW_xpec_sr1_SR1;    // Shared Register 
	unsigned int SR1_15 : BFW_xpec_sr1_SR1_15; // Sign extension 
} XPEC_SR1_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR1_BIT_T bf;
} XPEC_SR1_T;

// ---------------------------------------------------------------------
// Register xpec_sr2
// => Shared Work Register 2 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr2   0x000000A8U
#define Adr_xpec0_xpec_sr2 0x001700A8U
#define Adr_xpec1_xpec_sr2 0x001740A8U
#define Adr_xpec2_xpec_sr2 0x001780A8U
#define Adr_xpec3_xpec_sr2 0x0017C0A8U

#define MSK_xpec_sr2_SR2    0x0000ffffU // [15:0]
#define SRT_xpec_sr2_SR2    0           
#define MSK_xpec_sr2_SR2_15 0xffff0000U // [31:16]
#define SRT_xpec_sr2_SR2_15 16          

enum {
	BFW_xpec_sr2_SR2    = 16, // [15:0]
	BFW_xpec_sr2_SR2_15 = 16  // [31:16]
};

typedef struct XPEC_SR2_BIT_Ttag {
	unsigned int SR2    : BFW_xpec_sr2_SR2;    // Shared Register 
	unsigned int SR2_15 : BFW_xpec_sr2_SR2_15; // Sign extension 
} XPEC_SR2_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR2_BIT_T bf;
} XPEC_SR2_T;

// ---------------------------------------------------------------------
// Register xpec_sr3
// => Shared Work Register 3 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr3   0x000000ACU
#define Adr_xpec0_xpec_sr3 0x001700ACU
#define Adr_xpec1_xpec_sr3 0x001740ACU
#define Adr_xpec2_xpec_sr3 0x001780ACU
#define Adr_xpec3_xpec_sr3 0x0017C0ACU

#define MSK_xpec_sr3_SR3    0x0000ffffU // [15:0]
#define SRT_xpec_sr3_SR3    0           
#define MSK_xpec_sr3_SR3_15 0xffff0000U // [31:16]
#define SRT_xpec_sr3_SR3_15 16          

enum {
	BFW_xpec_sr3_SR3    = 16, // [15:0]
	BFW_xpec_sr3_SR3_15 = 16  // [31:16]
};

typedef struct XPEC_SR3_BIT_Ttag {
	unsigned int SR3    : BFW_xpec_sr3_SR3;    // Shared Register 
	unsigned int SR3_15 : BFW_xpec_sr3_SR3_15; // Sign extension 
} XPEC_SR3_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR3_BIT_T bf;
} XPEC_SR3_T;

// ---------------------------------------------------------------------
// Register xpec_sr4
// => Shared Work Register 4 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr4   0x000000B0U
#define Adr_xpec0_xpec_sr4 0x001700B0U
#define Adr_xpec1_xpec_sr4 0x001740B0U
#define Adr_xpec2_xpec_sr4 0x001780B0U
#define Adr_xpec3_xpec_sr4 0x0017C0B0U

#define MSK_xpec_sr4_SR4    0x0000ffffU // [15:0]
#define SRT_xpec_sr4_SR4    0           
#define MSK_xpec_sr4_SR4_15 0xffff0000U // [31:16]
#define SRT_xpec_sr4_SR4_15 16          

enum {
	BFW_xpec_sr4_SR4    = 16, // [15:0]
	BFW_xpec_sr4_SR4_15 = 16  // [31:16]
};

typedef struct XPEC_SR4_BIT_Ttag {
	unsigned int SR4    : BFW_xpec_sr4_SR4;    // Shared Register 
	unsigned int SR4_15 : BFW_xpec_sr4_SR4_15; // Sign extension 
} XPEC_SR4_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR4_BIT_T bf;
} XPEC_SR4_T;

// ---------------------------------------------------------------------
// Register xpec_sr5
// => Shared Work Register 5 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr5   0x000000B4U
#define Adr_xpec0_xpec_sr5 0x001700B4U
#define Adr_xpec1_xpec_sr5 0x001740B4U
#define Adr_xpec2_xpec_sr5 0x001780B4U
#define Adr_xpec3_xpec_sr5 0x0017C0B4U

#define MSK_xpec_sr5_SR5    0x0000ffffU // [15:0]
#define SRT_xpec_sr5_SR5    0           
#define MSK_xpec_sr5_SR5_15 0xffff0000U // [31:16]
#define SRT_xpec_sr5_SR5_15 16          

enum {
	BFW_xpec_sr5_SR5    = 16, // [15:0]
	BFW_xpec_sr5_SR5_15 = 16  // [31:16]
};

typedef struct XPEC_SR5_BIT_Ttag {
	unsigned int SR5    : BFW_xpec_sr5_SR5;    // Shared Register 
	unsigned int SR5_15 : BFW_xpec_sr5_SR5_15; // Sign extension 
} XPEC_SR5_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR5_BIT_T bf;
} XPEC_SR5_T;

// ---------------------------------------------------------------------
// Register xpec_sr6
// => Shared Work Register 6 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr6   0x000000B8U
#define Adr_xpec0_xpec_sr6 0x001700B8U
#define Adr_xpec1_xpec_sr6 0x001740B8U
#define Adr_xpec2_xpec_sr6 0x001780B8U
#define Adr_xpec3_xpec_sr6 0x0017C0B8U

#define MSK_xpec_sr6_SR6    0x0000ffffU // [15:0]
#define SRT_xpec_sr6_SR6    0           
#define MSK_xpec_sr6_SR6_15 0xffff0000U // [31:16]
#define SRT_xpec_sr6_SR6_15 16          

enum {
	BFW_xpec_sr6_SR6    = 16, // [15:0]
	BFW_xpec_sr6_SR6_15 = 16  // [31:16]
};

typedef struct XPEC_SR6_BIT_Ttag {
	unsigned int SR6    : BFW_xpec_sr6_SR6;    // Shared Register 
	unsigned int SR6_15 : BFW_xpec_sr6_SR6_15; // Sign extension 
} XPEC_SR6_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR6_BIT_T bf;
} XPEC_SR6_T;

// ---------------------------------------------------------------------
// Register xpec_sr7
// => Shared Work Register 7 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr7   0x000000BCU
#define Adr_xpec0_xpec_sr7 0x001700BCU
#define Adr_xpec1_xpec_sr7 0x001740BCU
#define Adr_xpec2_xpec_sr7 0x001780BCU
#define Adr_xpec3_xpec_sr7 0x0017C0BCU

#define MSK_xpec_sr7_SR7    0x0000ffffU // [15:0]
#define SRT_xpec_sr7_SR7    0           
#define MSK_xpec_sr7_SR7_15 0xffff0000U // [31:16]
#define SRT_xpec_sr7_SR7_15 16          

enum {
	BFW_xpec_sr7_SR7    = 16, // [15:0]
	BFW_xpec_sr7_SR7_15 = 16  // [31:16]
};

typedef struct XPEC_SR7_BIT_Ttag {
	unsigned int SR7    : BFW_xpec_sr7_SR7;    // Shared Register 
	unsigned int SR7_15 : BFW_xpec_sr7_SR7_15; // Sign extension 
} XPEC_SR7_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR7_BIT_T bf;
} XPEC_SR7_T;

// ---------------------------------------------------------------------
// Register xpec_sr8
// => Shared Work Register 8 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr8   0x000000C0U
#define Adr_xpec0_xpec_sr8 0x001700C0U
#define Adr_xpec1_xpec_sr8 0x001740C0U
#define Adr_xpec2_xpec_sr8 0x001780C0U
#define Adr_xpec3_xpec_sr8 0x0017C0C0U

#define MSK_xpec_sr8_SR8    0x0000ffffU // [15:0]
#define SRT_xpec_sr8_SR8    0           
#define MSK_xpec_sr8_SR8_15 0xffff0000U // [31:16]
#define SRT_xpec_sr8_SR8_15 16          

enum {
	BFW_xpec_sr8_SR8    = 16, // [15:0]
	BFW_xpec_sr8_SR8_15 = 16  // [31:16]
};

typedef struct XPEC_SR8_BIT_Ttag {
	unsigned int SR8    : BFW_xpec_sr8_SR8;    // Shared Register 
	unsigned int SR8_15 : BFW_xpec_sr8_SR8_15; // Sign extension 
} XPEC_SR8_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR8_BIT_T bf;
} XPEC_SR8_T;

// ---------------------------------------------------------------------
// Register xpec_sr9
// => Shared Work Register 9 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr9   0x000000C4U
#define Adr_xpec0_xpec_sr9 0x001700C4U
#define Adr_xpec1_xpec_sr9 0x001740C4U
#define Adr_xpec2_xpec_sr9 0x001780C4U
#define Adr_xpec3_xpec_sr9 0x0017C0C4U

#define MSK_xpec_sr9_SR9    0x0000ffffU // [15:0]
#define SRT_xpec_sr9_SR9    0           
#define MSK_xpec_sr9_SR9_15 0xffff0000U // [31:16]
#define SRT_xpec_sr9_SR9_15 16          

enum {
	BFW_xpec_sr9_SR9    = 16, // [15:0]
	BFW_xpec_sr9_SR9_15 = 16  // [31:16]
};

typedef struct XPEC_SR9_BIT_Ttag {
	unsigned int SR9    : BFW_xpec_sr9_SR9;    // Shared Register 
	unsigned int SR9_15 : BFW_xpec_sr9_SR9_15; // Sign extension 
} XPEC_SR9_BIT_T;

typedef union {
	unsigned int   val;
	XPEC_SR9_BIT_T bf;
} XPEC_SR9_T;

// ---------------------------------------------------------------------
// Register xpec_sr10
// => Shared Work Register 10 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr10   0x000000C8U
#define Adr_xpec0_xpec_sr10 0x001700C8U
#define Adr_xpec1_xpec_sr10 0x001740C8U
#define Adr_xpec2_xpec_sr10 0x001780C8U
#define Adr_xpec3_xpec_sr10 0x0017C0C8U

#define MSK_xpec_sr10_SR10    0x0000ffffU // [15:0]
#define SRT_xpec_sr10_SR10    0           
#define MSK_xpec_sr10_SR10_15 0xffff0000U // [31:16]
#define SRT_xpec_sr10_SR10_15 16          

enum {
	BFW_xpec_sr10_SR10    = 16, // [15:0]
	BFW_xpec_sr10_SR10_15 = 16  // [31:16]
};

typedef struct XPEC_SR10_BIT_Ttag {
	unsigned int SR10    : BFW_xpec_sr10_SR10;    // Shared Register 
	unsigned int SR10_15 : BFW_xpec_sr10_SR10_15; // Sign extension 
} XPEC_SR10_BIT_T;

typedef union {
	unsigned int    val;
	XPEC_SR10_BIT_T bf;
} XPEC_SR10_T;

// ---------------------------------------------------------------------
// Register xpec_sr11
// => Shared Work Register 11 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr11   0x000000CCU
#define Adr_xpec0_xpec_sr11 0x001700CCU
#define Adr_xpec1_xpec_sr11 0x001740CCU
#define Adr_xpec2_xpec_sr11 0x001780CCU
#define Adr_xpec3_xpec_sr11 0x0017C0CCU

#define MSK_xpec_sr11_SR11    0x0000ffffU // [15:0]
#define SRT_xpec_sr11_SR11    0           
#define MSK_xpec_sr11_SR11_15 0xffff0000U // [31:16]
#define SRT_xpec_sr11_SR11_15 16          

enum {
	BFW_xpec_sr11_SR11    = 16, // [15:0]
	BFW_xpec_sr11_SR11_15 = 16  // [31:16]
};

typedef struct XPEC_SR11_BIT_Ttag {
	unsigned int SR11    : BFW_xpec_sr11_SR11;    // Shared Register 
	unsigned int SR11_15 : BFW_xpec_sr11_SR11_15; // Sign extension 
} XPEC_SR11_BIT_T;

typedef union {
	unsigned int    val;
	XPEC_SR11_BIT_T bf;
} XPEC_SR11_T;

// ---------------------------------------------------------------------
// Register xpec_sr12
// => Shared Work Register 12 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr12   0x000000D0U
#define Adr_xpec0_xpec_sr12 0x001700D0U
#define Adr_xpec1_xpec_sr12 0x001740D0U
#define Adr_xpec2_xpec_sr12 0x001780D0U
#define Adr_xpec3_xpec_sr12 0x0017C0D0U

#define MSK_xpec_sr12_SR12    0x0000ffffU // [15:0]
#define SRT_xpec_sr12_SR12    0           
#define MSK_xpec_sr12_SR12_15 0xffff0000U // [31:16]
#define SRT_xpec_sr12_SR12_15 16          

enum {
	BFW_xpec_sr12_SR12    = 16, // [15:0]
	BFW_xpec_sr12_SR12_15 = 16  // [31:16]
};

typedef struct XPEC_SR12_BIT_Ttag {
	unsigned int SR12    : BFW_xpec_sr12_SR12;    // Shared Register 
	unsigned int SR12_15 : BFW_xpec_sr12_SR12_15; // Sign extension 
} XPEC_SR12_BIT_T;

typedef union {
	unsigned int    val;
	XPEC_SR12_BIT_T bf;
} XPEC_SR12_T;

// ---------------------------------------------------------------------
// Register xpec_sr13
// => Shared Work Register 13 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr13   0x000000D4U
#define Adr_xpec0_xpec_sr13 0x001700D4U
#define Adr_xpec1_xpec_sr13 0x001740D4U
#define Adr_xpec2_xpec_sr13 0x001780D4U
#define Adr_xpec3_xpec_sr13 0x0017C0D4U

#define MSK_xpec_sr13_SR13    0x0000ffffU // [15:0]
#define SRT_xpec_sr13_SR13    0           
#define MSK_xpec_sr13_SR13_15 0xffff0000U // [31:16]
#define SRT_xpec_sr13_SR13_15 16          

enum {
	BFW_xpec_sr13_SR13    = 16, // [15:0]
	BFW_xpec_sr13_SR13_15 = 16  // [31:16]
};

typedef struct XPEC_SR13_BIT_Ttag {
	unsigned int SR13    : BFW_xpec_sr13_SR13;    // Shared Register 
	unsigned int SR13_15 : BFW_xpec_sr13_SR13_15; // Sign extension 
} XPEC_SR13_BIT_T;

typedef union {
	unsigned int    val;
	XPEC_SR13_BIT_T bf;
} XPEC_SR13_T;

// ---------------------------------------------------------------------
// Register xpec_sr14
// => Shared Work Register 14 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr14   0x000000D8U
#define Adr_xpec0_xpec_sr14 0x001700D8U
#define Adr_xpec1_xpec_sr14 0x001740D8U
#define Adr_xpec2_xpec_sr14 0x001780D8U
#define Adr_xpec3_xpec_sr14 0x0017C0D8U

#define MSK_xpec_sr14_SR14    0x0000ffffU // [15:0]
#define SRT_xpec_sr14_SR14    0           
#define MSK_xpec_sr14_SR14_15 0xffff0000U // [31:16]
#define SRT_xpec_sr14_SR14_15 16          

enum {
	BFW_xpec_sr14_SR14    = 16, // [15:0]
	BFW_xpec_sr14_SR14_15 = 16  // [31:16]
};

typedef struct XPEC_SR14_BIT_Ttag {
	unsigned int SR14    : BFW_xpec_sr14_SR14;    // Shared Register -- in debug mode (statcfg[14]) read 32 Bit xpec_debug_code 
	unsigned int SR14_15 : BFW_xpec_sr14_SR14_15; // Sign extension 
} XPEC_SR14_BIT_T;

typedef union {
	unsigned int    val;
	XPEC_SR14_BIT_T bf;
} XPEC_SR14_T;

// ---------------------------------------------------------------------
// Register xpec_sr15
// => Shared Work Register 15 accessed by xPEC
//    Resetvalue : 0x00000000
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_xpec_sr15   0x000000DCU
#define Adr_xpec0_xpec_sr15 0x001700DCU
#define Adr_xpec1_xpec_sr15 0x001740DCU
#define Adr_xpec2_xpec_sr15 0x001780DCU
#define Adr_xpec3_xpec_sr15 0x0017C0DCU

#define MSK_xpec_sr15_SR15    0x0000ffffU // [15:0]
#define SRT_xpec_sr15_SR15    0           
#define MSK_xpec_sr15_SR15_15 0xffff0000U // [31:16]
#define SRT_xpec_sr15_SR15_15 16          

enum {
	BFW_xpec_sr15_SR15    = 16, // [15:0]
	BFW_xpec_sr15_SR15_15 = 16  // [31:16]
};

typedef struct XPEC_SR15_BIT_Ttag {
	unsigned int SR15    : BFW_xpec_sr15_SR15;    // Shared Register -- in debug mode (statcfg[14]) read 11 Bit xpec_debug_pc  
	unsigned int SR15_15 : BFW_xpec_sr15_SR15_15; // Sign extension 
} XPEC_SR15_BIT_T;

typedef union {
	unsigned int    val;
	XPEC_SR15_BIT_T bf;
} XPEC_SR15_T;

// ---------------------------------------------------------------------
// Register statcfg0
// => xMAC0 Shared Config/Status Register
//    Resetvalue : 0x00000088
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_statcfg0   0x000000E0U
#define Adr_xpec0_statcfg0 0x001700E0U
#define Adr_xpec1_statcfg0 0x001740E0U
#define Adr_xpec2_statcfg0 0x001780E0U
#define Adr_xpec3_statcfg0 0x0017C0E0U

#define MSK_statcfg0_rx_nof_bits   0x0000000fU // [3:0]
#define SRT_statcfg0_rx_nof_bits   0           
#define MSK_statcfg0_tx_nof_bits   0x000000f0U // [7:4]
#define SRT_statcfg0_tx_nof_bits   4           
#define MSK_statcfg0_rx_shift_lr   0x00000100U // [8]
#define SRT_statcfg0_rx_shift_lr   8           
#define MSK_statcfg0_tx_shift_lr   0x00000200U // [9]
#define SRT_statcfg0_tx_shift_lr   9           
#define MSK_statcfg0_reset_rx_fifo 0x00000400U // [10]
#define SRT_statcfg0_reset_rx_fifo 10          
#define MSK_statcfg0_reset_tx_fifo 0x00000800U // [11]
#define SRT_statcfg0_reset_tx_fifo 11          
#define MSK_statcfg0_gpio0_out     0x00001000U // [12]
#define SRT_statcfg0_gpio0_out     12          
#define MSK_statcfg0_gpio0_oe      0x00002000U // [13]
#define SRT_statcfg0_gpio0_oe      13          
#define MSK_statcfg0_gpio1_out     0x00004000U // [14]
#define SRT_statcfg0_gpio1_out     14          
#define MSK_statcfg0_gpio1_oe      0x00008000U // [15]
#define SRT_statcfg0_gpio1_oe      15          
#define MSK_statcfg0_gpio0_in      0x00010000U // [16]
#define SRT_statcfg0_gpio0_in      16          
#define MSK_statcfg0_gpio1_in      0x00020000U // [17]
#define SRT_statcfg0_gpio1_in      17          
#define MSK_statcfg0_rx_rdy        0x00040000U // [18]
#define SRT_statcfg0_rx_rdy        18          
#define MSK_statcfg0_rx_ovf        0x00080000U // [19]
#define SRT_statcfg0_rx_ovf        19          
#define MSK_statcfg0_tx_nxt        0x00100000U // [20]
#define SRT_statcfg0_tx_nxt        20          
#define MSK_statcfg0_tx_ufl        0x00200000U // [21]
#define SRT_statcfg0_tx_ufl        21          
#define MSK_statcfg0_utx_empty     0x00400000U // [22]
#define SRT_statcfg0_utx_empty     22          
#define MSK_statcfg0_brec          0x00800000U // [23]
#define SRT_statcfg0_brec          23          
#define MSK_statcfg0_btran         0x01000000U // [24]
#define SRT_statcfg0_btran         24          
#define MSK_statcfg0_stat_rpu      0x02000000U // [25]
#define SRT_statcfg0_stat_rpu      25          
#define MSK_statcfg0_stat_tpu      0x04000000U // [26]
#define SRT_statcfg0_stat_tpu      26          
#define MSK_statcfg0_phy_led0      0x10000000U // [28]
#define SRT_statcfg0_phy_led0      28          
#define MSK_statcfg0_phy_led1      0x20000000U // [29]
#define SRT_statcfg0_phy_led1      29          
#define MSK_statcfg0_phy_led2      0x40000000U // [30]
#define SRT_statcfg0_phy_led2      30          
#define MSK_statcfg0_phy_led3      0x80000000U // [31]
#define SRT_statcfg0_phy_led3      31          

enum {
	BFW_statcfg0_rx_nof_bits   = 4, // [3:0]
	BFW_statcfg0_tx_nof_bits   = 4, // [7:4]
	BFW_statcfg0_rx_shift_lr   = 1, // [8]
	BFW_statcfg0_tx_shift_lr   = 1, // [9]
	BFW_statcfg0_reset_rx_fifo = 1, // [10]
	BFW_statcfg0_reset_tx_fifo = 1, // [11]
	BFW_statcfg0_gpio0_out     = 1, // [12]
	BFW_statcfg0_gpio0_oe      = 1, // [13]
	BFW_statcfg0_gpio1_out     = 1, // [14]
	BFW_statcfg0_gpio1_oe      = 1, // [15]
	BFW_statcfg0_gpio0_in      = 1, // [16]
	BFW_statcfg0_gpio1_in      = 1, // [17]
	BFW_statcfg0_rx_rdy        = 1, // [18]
	BFW_statcfg0_rx_ovf        = 1, // [19]
	BFW_statcfg0_tx_nxt        = 1, // [20]
	BFW_statcfg0_tx_ufl        = 1, // [21]
	BFW_statcfg0_utx_empty     = 1, // [22]
	BFW_statcfg0_brec          = 1, // [23]
	BFW_statcfg0_btran         = 1, // [24]
	BFW_statcfg0_stat_rpu      = 1, // [25]
	BFW_statcfg0_stat_tpu      = 1, // [26]
	BFW_statcfg0_reserved1     = 1, // [27]
	BFW_statcfg0_phy_led0      = 1, // [28]
	BFW_statcfg0_phy_led1      = 1, // [29]
	BFW_statcfg0_phy_led2      = 1, // [30]
	BFW_statcfg0_phy_led3      = 1  // [31]
};

typedef struct STATCFG0_BIT_Ttag {
	unsigned int rx_nof_bits   : BFW_statcfg0_rx_nof_bits;   // Number of bits written by SBU to rx-register, only used for rx_hw_count 
	unsigned int tx_nof_bits   : BFW_statcfg0_tx_nof_bits;   // Number of bits read by OBU from tx-register 
	unsigned int rx_shift_lr   : BFW_statcfg0_rx_shift_lr;   // 1: SBU reads incoming bits to position 0 of register rx and shifts rx left, 
	                                                        // 0: SBU reads incoming bits to position 15 of register rx and shifts rx right
	unsigned int tx_shift_lr   : BFW_statcfg0_tx_shift_lr;   // 1: OBU reads outgoing bits from position 15 of register tx and shifts tx left, 
	                                                        // 0: OBU reads outgoing bits from position 0 of register tx and shifts tx right
	unsigned int reset_rx_fifo : BFW_statcfg0_reset_rx_fifo; // reset URX_FIFO and rx_ovf bit inside status_shared register 
	unsigned int reset_tx_fifo : BFW_statcfg0_reset_tx_fifo; // reset UTX_FIFO and tx_ufl bit inside status_shared register 
	unsigned int gpio0_out     : BFW_statcfg0_gpio0_out;     // General Purpose IO 0 output 
	unsigned int gpio0_oe      : BFW_statcfg0_gpio0_oe;      // General Purpose IO 0 output enable 
	unsigned int gpio1_out     : BFW_statcfg0_gpio1_out;     // General Purpose IO 1 output 
	unsigned int gpio1_oe      : BFW_statcfg0_gpio1_oe;      // General Purpose IO 1 output enable 
	unsigned int gpio0_in      : BFW_statcfg0_gpio0_in;      // value at external gpio1 pin
	unsigned int gpio1_in      : BFW_statcfg0_gpio1_in;      // value at external gpio2 pin
	unsigned int rx_rdy        : BFW_statcfg0_rx_rdy;        // received bytes are valid at output of URX_FIFO
	unsigned int rx_ovf        : BFW_statcfg0_rx_ovf;        // receive overflow (too much data in URX_FIFO)
	unsigned int tx_nxt        : BFW_statcfg0_tx_nxt;        // put next tx_word to UTX_FIFO: at least one entry of UTX_FIFO is empty
	unsigned int tx_ufl        : BFW_statcfg0_tx_ufl;        // transmit underflow (not enough data in UTX_FIFO)
	unsigned int utx_empty     : BFW_statcfg0_utx_empty;     // UTX_FIFO is empty
	unsigned int brec          : BFW_statcfg0_brec;          // bit_received (active for 1 cc)
	unsigned int btran         : BFW_statcfg0_btran;         // bit_transmitted (active for 1 cc)
	unsigned int stat_rpu      : BFW_statcfg0_stat_rpu;      // set and reset by RPU command bits
	unsigned int stat_tpu      : BFW_statcfg0_stat_tpu;      // set and reset by TPU command bits
	unsigned int reserved1     : BFW_statcfg0_reserved1;     // reserved
	unsigned int phy_led0      : BFW_statcfg0_phy_led0;      // Internal Phy0 LED0, usually link_status
	unsigned int phy_led1      : BFW_statcfg0_phy_led1;      // Internal Phy0 LED1, usually activity
	unsigned int phy_led2      : BFW_statcfg0_phy_led2;      // Internal Phy0 LED2, usually speed100
	unsigned int phy_led3      : BFW_statcfg0_phy_led3;      // Internal Phy0 LED3, usually full_duplex
} STATCFG0_BIT_T;

typedef union {
	unsigned int   val;
	STATCFG0_BIT_T bf;
} STATCFG0_T;

// ---------------------------------------------------------------------
// Register statcfg1
// => xMAC1 Shared Config/Status Register
//    Resetvalue : 0x00000088
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_statcfg1   0x000000E4U
#define Adr_xpec0_statcfg1 0x001700E4U
#define Adr_xpec1_statcfg1 0x001740E4U
#define Adr_xpec2_statcfg1 0x001780E4U
#define Adr_xpec3_statcfg1 0x0017C0E4U

#define MSK_statcfg1_rx_nof_bits   0x0000000fU // [3:0]
#define SRT_statcfg1_rx_nof_bits   0           
#define MSK_statcfg1_tx_nof_bits   0x000000f0U // [7:4]
#define SRT_statcfg1_tx_nof_bits   4           
#define MSK_statcfg1_rx_shift_lr   0x00000100U // [8]
#define SRT_statcfg1_rx_shift_lr   8           
#define MSK_statcfg1_tx_shift_lr   0x00000200U // [9]
#define SRT_statcfg1_tx_shift_lr   9           
#define MSK_statcfg1_reset_rx_fifo 0x00000400U // [10]
#define SRT_statcfg1_reset_rx_fifo 10          
#define MSK_statcfg1_reset_tx_fifo 0x00000800U // [11]
#define SRT_statcfg1_reset_tx_fifo 11          
#define MSK_statcfg1_gpio0_out     0x00001000U // [12]
#define SRT_statcfg1_gpio0_out     12          
#define MSK_statcfg1_gpio0_oe      0x00002000U // [13]
#define SRT_statcfg1_gpio0_oe      13          
#define MSK_statcfg1_gpio1_out     0x00004000U // [14]
#define SRT_statcfg1_gpio1_out     14          
#define MSK_statcfg1_gpio1_oe      0x00008000U // [15]
#define SRT_statcfg1_gpio1_oe      15          
#define MSK_statcfg1_gpio0_in      0x00010000U // [16]
#define SRT_statcfg1_gpio0_in      16          
#define MSK_statcfg1_gpio1_in      0x00020000U // [17]
#define SRT_statcfg1_gpio1_in      17          
#define MSK_statcfg1_rx_rdy        0x00040000U // [18]
#define SRT_statcfg1_rx_rdy        18          
#define MSK_statcfg1_rx_ovf        0x00080000U // [19]
#define SRT_statcfg1_rx_ovf        19          
#define MSK_statcfg1_tx_nxt        0x00100000U // [20]
#define SRT_statcfg1_tx_nxt        20          
#define MSK_statcfg1_tx_ufl        0x00200000U // [21]
#define SRT_statcfg1_tx_ufl        21          
#define MSK_statcfg1_utx_empty     0x00400000U // [22]
#define SRT_statcfg1_utx_empty     22          
#define MSK_statcfg1_brec          0x00800000U // [23]
#define SRT_statcfg1_brec          23          
#define MSK_statcfg1_btran         0x01000000U // [24]
#define SRT_statcfg1_btran         24          
#define MSK_statcfg1_stat_rpu      0x02000000U // [25]
#define SRT_statcfg1_stat_rpu      25          
#define MSK_statcfg1_stat_tpu      0x04000000U // [26]
#define SRT_statcfg1_stat_tpu      26          
#define MSK_statcfg1_phy_led0      0x10000000U // [28]
#define SRT_statcfg1_phy_led0      28          
#define MSK_statcfg1_phy_led1      0x20000000U // [29]
#define SRT_statcfg1_phy_led1      29          
#define MSK_statcfg1_phy_led2      0x40000000U // [30]
#define SRT_statcfg1_phy_led2      30          
#define MSK_statcfg1_phy_led3      0x80000000U // [31]
#define SRT_statcfg1_phy_led3      31          

enum {
	BFW_statcfg1_rx_nof_bits   = 4, // [3:0]
	BFW_statcfg1_tx_nof_bits   = 4, // [7:4]
	BFW_statcfg1_rx_shift_lr   = 1, // [8]
	BFW_statcfg1_tx_shift_lr   = 1, // [9]
	BFW_statcfg1_reset_rx_fifo = 1, // [10]
	BFW_statcfg1_reset_tx_fifo = 1, // [11]
	BFW_statcfg1_gpio0_out     = 1, // [12]
	BFW_statcfg1_gpio0_oe      = 1, // [13]
	BFW_statcfg1_gpio1_out     = 1, // [14]
	BFW_statcfg1_gpio1_oe      = 1, // [15]
	BFW_statcfg1_gpio0_in      = 1, // [16]
	BFW_statcfg1_gpio1_in      = 1, // [17]
	BFW_statcfg1_rx_rdy        = 1, // [18]
	BFW_statcfg1_rx_ovf        = 1, // [19]
	BFW_statcfg1_tx_nxt        = 1, // [20]
	BFW_statcfg1_tx_ufl        = 1, // [21]
	BFW_statcfg1_utx_empty     = 1, // [22]
	BFW_statcfg1_brec          = 1, // [23]
	BFW_statcfg1_btran         = 1, // [24]
	BFW_statcfg1_stat_rpu      = 1, // [25]
	BFW_statcfg1_stat_tpu      = 1, // [26]
	BFW_statcfg1_reserved1     = 1, // [27]
	BFW_statcfg1_phy_led0      = 1, // [28]
	BFW_statcfg1_phy_led1      = 1, // [29]
	BFW_statcfg1_phy_led2      = 1, // [30]
	BFW_statcfg1_phy_led3      = 1  // [31]
};

typedef struct STATCFG1_BIT_Ttag {
	unsigned int rx_nof_bits   : BFW_statcfg1_rx_nof_bits;   // Number of bits written by SBU to rx-register, only used for rx_hw_count 
	unsigned int tx_nof_bits   : BFW_statcfg1_tx_nof_bits;   // Number of bits read by OBU from tx-register 
	unsigned int rx_shift_lr   : BFW_statcfg1_rx_shift_lr;   // 1: SBU reads incoming bits to position 0 of register rx and shifts rx left, 
	                                                        // 0: SBU reads incoming bits to position 15 of register rx and shifts rx right
	unsigned int tx_shift_lr   : BFW_statcfg1_tx_shift_lr;   // 1: OBU reads outgoing bits from position 15 of register tx and shifts tx left, 
	                                                        // 0: OBU reads outgoing bits from position 0 of register tx and shifts tx right
	unsigned int reset_rx_fifo : BFW_statcfg1_reset_rx_fifo; // reset URX_FIFO and rx_ovf bit inside status_shared register 
	unsigned int reset_tx_fifo : BFW_statcfg1_reset_tx_fifo; // reset UTX_FIFO and tx_ufl bit inside status_shared register 
	unsigned int gpio0_out     : BFW_statcfg1_gpio0_out;     // General Purpose IO 0 output 
	unsigned int gpio0_oe      : BFW_statcfg1_gpio0_oe;      // General Purpose IO 0 output enable 
	unsigned int gpio1_out     : BFW_statcfg1_gpio1_out;     // General Purpose IO 1 output 
	unsigned int gpio1_oe      : BFW_statcfg1_gpio1_oe;      // General Purpose IO 1 output enable 
	unsigned int gpio0_in      : BFW_statcfg1_gpio0_in;      // value at external gpio1 pin
	unsigned int gpio1_in      : BFW_statcfg1_gpio1_in;      // value at external gpio2 pin
	unsigned int rx_rdy        : BFW_statcfg1_rx_rdy;        // received bytes are valid at output of URX_FIFO
	unsigned int rx_ovf        : BFW_statcfg1_rx_ovf;        // receive overflow (too much data in URX_FIFO)
	unsigned int tx_nxt        : BFW_statcfg1_tx_nxt;        // put next tx_word to UTX_FIFO: at least one entry of UTX_FIFO is empty
	unsigned int tx_ufl        : BFW_statcfg1_tx_ufl;        // transmit underflow (not enough data in UTX_FIFO)
	unsigned int utx_empty     : BFW_statcfg1_utx_empty;     // UTX_FIFO is empty
	unsigned int brec          : BFW_statcfg1_brec;          // bit_received (active for 1 cc)
	unsigned int btran         : BFW_statcfg1_btran;         // bit_transmitted (active for 1 cc)
	unsigned int stat_rpu      : BFW_statcfg1_stat_rpu;      // set and reset by RPU command bits
	unsigned int stat_tpu      : BFW_statcfg1_stat_tpu;      // set and reset by TPU command bits
	unsigned int reserved1     : BFW_statcfg1_reserved1;     // reserved
	unsigned int phy_led0      : BFW_statcfg1_phy_led0;      // Internal Phy1 LED0, usually link_status
	unsigned int phy_led1      : BFW_statcfg1_phy_led1;      // Internal Phy1 LED1, usually activity
	unsigned int phy_led2      : BFW_statcfg1_phy_led2;      // Internal Phy1 LED2, usually speed100
	unsigned int phy_led3      : BFW_statcfg1_phy_led3;      // Internal Phy1 LED3, usually full_duplex
} STATCFG1_BIT_T;

typedef union {
	unsigned int   val;
	STATCFG1_BIT_T bf;
} STATCFG1_T;

// ---------------------------------------------------------------------
// Register statcfg2
// => xMAC2 Shared Config/Status Register
//    Resetvalue : 0x00000088
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_statcfg2   0x000000E8U
#define Adr_xpec0_statcfg2 0x001700E8U
#define Adr_xpec1_statcfg2 0x001740E8U
#define Adr_xpec2_statcfg2 0x001780E8U
#define Adr_xpec3_statcfg2 0x0017C0E8U

#define MSK_statcfg2_rx_nof_bits   0x0000000fU // [3:0]
#define SRT_statcfg2_rx_nof_bits   0           
#define MSK_statcfg2_tx_nof_bits   0x000000f0U // [7:4]
#define SRT_statcfg2_tx_nof_bits   4           
#define MSK_statcfg2_rx_shift_lr   0x00000100U // [8]
#define SRT_statcfg2_rx_shift_lr   8           
#define MSK_statcfg2_tx_shift_lr   0x00000200U // [9]
#define SRT_statcfg2_tx_shift_lr   9           
#define MSK_statcfg2_reset_rx_fifo 0x00000400U // [10]
#define SRT_statcfg2_reset_rx_fifo 10          
#define MSK_statcfg2_reset_tx_fifo 0x00000800U // [11]
#define SRT_statcfg2_reset_tx_fifo 11          
#define MSK_statcfg2_gpio0_out     0x00001000U // [12]
#define SRT_statcfg2_gpio0_out     12          
#define MSK_statcfg2_gpio0_oe      0x00002000U // [13]
#define SRT_statcfg2_gpio0_oe      13          
#define MSK_statcfg2_gpio1_out     0x00004000U // [14]
#define SRT_statcfg2_gpio1_out     14          
#define MSK_statcfg2_gpio1_oe      0x00008000U // [15]
#define SRT_statcfg2_gpio1_oe      15          
#define MSK_statcfg2_gpio0_in      0x00010000U // [16]
#define SRT_statcfg2_gpio0_in      16          
#define MSK_statcfg2_gpio1_in      0x00020000U // [17]
#define SRT_statcfg2_gpio1_in      17          
#define MSK_statcfg2_rx_rdy        0x00040000U // [18]
#define SRT_statcfg2_rx_rdy        18          
#define MSK_statcfg2_rx_ovf        0x00080000U // [19]
#define SRT_statcfg2_rx_ovf        19          
#define MSK_statcfg2_tx_nxt        0x00100000U // [20]
#define SRT_statcfg2_tx_nxt        20          
#define MSK_statcfg2_tx_ufl        0x00200000U // [21]
#define SRT_statcfg2_tx_ufl        21          
#define MSK_statcfg2_utx_empty     0x00400000U // [22]
#define SRT_statcfg2_utx_empty     22          
#define MSK_statcfg2_brec          0x00800000U // [23]
#define SRT_statcfg2_brec          23          
#define MSK_statcfg2_btran         0x01000000U // [24]
#define SRT_statcfg2_btran         24          
#define MSK_statcfg2_stat_rpu      0x02000000U // [25]
#define SRT_statcfg2_stat_rpu      25          
#define MSK_statcfg2_stat_tpu      0x04000000U // [26]
#define SRT_statcfg2_stat_tpu      26          
#define MSK_statcfg2_phy_led0      0x10000000U // [28]
#define SRT_statcfg2_phy_led0      28          
#define MSK_statcfg2_phy_led1      0x20000000U // [29]
#define SRT_statcfg2_phy_led1      29          
#define MSK_statcfg2_phy_led2      0x40000000U // [30]
#define SRT_statcfg2_phy_led2      30          
#define MSK_statcfg2_phy_led3      0x80000000U // [31]
#define SRT_statcfg2_phy_led3      31          

enum {
	BFW_statcfg2_rx_nof_bits   = 4, // [3:0]
	BFW_statcfg2_tx_nof_bits   = 4, // [7:4]
	BFW_statcfg2_rx_shift_lr   = 1, // [8]
	BFW_statcfg2_tx_shift_lr   = 1, // [9]
	BFW_statcfg2_reset_rx_fifo = 1, // [10]
	BFW_statcfg2_reset_tx_fifo = 1, // [11]
	BFW_statcfg2_gpio0_out     = 1, // [12]
	BFW_statcfg2_gpio0_oe      = 1, // [13]
	BFW_statcfg2_gpio1_out     = 1, // [14]
	BFW_statcfg2_gpio1_oe      = 1, // [15]
	BFW_statcfg2_gpio0_in      = 1, // [16]
	BFW_statcfg2_gpio1_in      = 1, // [17]
	BFW_statcfg2_rx_rdy        = 1, // [18]
	BFW_statcfg2_rx_ovf        = 1, // [19]
	BFW_statcfg2_tx_nxt        = 1, // [20]
	BFW_statcfg2_tx_ufl        = 1, // [21]
	BFW_statcfg2_utx_empty     = 1, // [22]
	BFW_statcfg2_brec          = 1, // [23]
	BFW_statcfg2_btran         = 1, // [24]
	BFW_statcfg2_stat_rpu      = 1, // [25]
	BFW_statcfg2_stat_tpu      = 1, // [26]
	BFW_statcfg2_reserved1     = 1, // [27]
	BFW_statcfg2_phy_led0      = 1, // [28]
	BFW_statcfg2_phy_led1      = 1, // [29]
	BFW_statcfg2_phy_led2      = 1, // [30]
	BFW_statcfg2_phy_led3      = 1  // [31]
};

typedef struct STATCFG2_BIT_Ttag {
	unsigned int rx_nof_bits   : BFW_statcfg2_rx_nof_bits;   // Number of bits written by SBU to rx-register, only used for rx_hw_count 
	unsigned int tx_nof_bits   : BFW_statcfg2_tx_nof_bits;   // Number of bits read by OBU from tx-register 
	unsigned int rx_shift_lr   : BFW_statcfg2_rx_shift_lr;   // 1: SBU reads incoming bits to position 0 of register rx and shifts rx left, 
	                                                        // 0: SBU reads incoming bits to position 15 of register rx and shifts rx right
	unsigned int tx_shift_lr   : BFW_statcfg2_tx_shift_lr;   // 1: OBU reads outgoing bits from position 15 of register tx and shifts tx left, 
	                                                        // 0: OBU reads outgoing bits from position 0 of register tx and shifts tx right
	unsigned int reset_rx_fifo : BFW_statcfg2_reset_rx_fifo; // reset URX_FIFO and rx_ovf bit inside status_shared register 
	unsigned int reset_tx_fifo : BFW_statcfg2_reset_tx_fifo; // reset UTX_FIFO and tx_ufl bit inside status_shared register 
	unsigned int gpio0_out     : BFW_statcfg2_gpio0_out;     // General Purpose IO 0 output 
	unsigned int gpio0_oe      : BFW_statcfg2_gpio0_oe;      // General Purpose IO 0 output enable 
	unsigned int gpio1_out     : BFW_statcfg2_gpio1_out;     // General Purpose IO 1 output 
	unsigned int gpio1_oe      : BFW_statcfg2_gpio1_oe;      // General Purpose IO 1 output enable 
	unsigned int gpio0_in      : BFW_statcfg2_gpio0_in;      // value at external gpio1 pin
	unsigned int gpio1_in      : BFW_statcfg2_gpio1_in;      // value at external gpio2 pin
	unsigned int rx_rdy        : BFW_statcfg2_rx_rdy;        // received bytes are valid at output of URX_FIFO
	unsigned int rx_ovf        : BFW_statcfg2_rx_ovf;        // receive overflow (too much data in URX_FIFO)
	unsigned int tx_nxt        : BFW_statcfg2_tx_nxt;        // put next tx_word to UTX_FIFO: at least one entry of UTX_FIFO is empty
	unsigned int tx_ufl        : BFW_statcfg2_tx_ufl;        // transmit underflow (not enough data in UTX_FIFO)
	unsigned int utx_empty     : BFW_statcfg2_utx_empty;     // UTX_FIFO is empty
	unsigned int brec          : BFW_statcfg2_brec;          // bit_received (active for 1 cc)
	unsigned int btran         : BFW_statcfg2_btran;         // bit_transmitted (active for 1 cc)
	unsigned int stat_rpu      : BFW_statcfg2_stat_rpu;      // set and reset by RPU command bits
	unsigned int stat_tpu      : BFW_statcfg2_stat_tpu;      // set and reset by TPU command bits
	unsigned int reserved1     : BFW_statcfg2_reserved1;     // reserved
	unsigned int phy_led0      : BFW_statcfg2_phy_led0;      // not connected (zero)
	unsigned int phy_led1      : BFW_statcfg2_phy_led1;      // not connected (zero)
	unsigned int phy_led2      : BFW_statcfg2_phy_led2;      // not connected (zero)
	unsigned int phy_led3      : BFW_statcfg2_phy_led3;      // not connected (zero)
} STATCFG2_BIT_T;

typedef union {
	unsigned int   val;
	STATCFG2_BIT_T bf;
} STATCFG2_T;

// ---------------------------------------------------------------------
// Register statcfg3
// => xMAC3 Shared Config/Status Register
//    Resetvalue : 0x00000088
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_statcfg3   0x000000ECU
#define Adr_xpec0_statcfg3 0x001700ECU
#define Adr_xpec1_statcfg3 0x001740ECU
#define Adr_xpec2_statcfg3 0x001780ECU
#define Adr_xpec3_statcfg3 0x0017C0ECU

#define MSK_statcfg3_rx_nof_bits   0x0000000fU // [3:0]
#define SRT_statcfg3_rx_nof_bits   0           
#define MSK_statcfg3_tx_nof_bits   0x000000f0U // [7:4]
#define SRT_statcfg3_tx_nof_bits   4           
#define MSK_statcfg3_rx_shift_lr   0x00000100U // [8]
#define SRT_statcfg3_rx_shift_lr   8           
#define MSK_statcfg3_tx_shift_lr   0x00000200U // [9]
#define SRT_statcfg3_tx_shift_lr   9           
#define MSK_statcfg3_reset_rx_fifo 0x00000400U // [10]
#define SRT_statcfg3_reset_rx_fifo 10          
#define MSK_statcfg3_reset_tx_fifo 0x00000800U // [11]
#define SRT_statcfg3_reset_tx_fifo 11          
#define MSK_statcfg3_gpio0_out     0x00001000U // [12]
#define SRT_statcfg3_gpio0_out     12          
#define MSK_statcfg3_gpio0_oe      0x00002000U // [13]
#define SRT_statcfg3_gpio0_oe      13          
#define MSK_statcfg3_gpio1_out     0x00004000U // [14]
#define SRT_statcfg3_gpio1_out     14          
#define MSK_statcfg3_gpio1_oe      0x00008000U // [15]
#define SRT_statcfg3_gpio1_oe      15          
#define MSK_statcfg3_gpio0_in      0x00010000U // [16]
#define SRT_statcfg3_gpio0_in      16          
#define MSK_statcfg3_gpio1_in      0x00020000U // [17]
#define SRT_statcfg3_gpio1_in      17          
#define MSK_statcfg3_rx_rdy        0x00040000U // [18]
#define SRT_statcfg3_rx_rdy        18          
#define MSK_statcfg3_rx_ovf        0x00080000U // [19]
#define SRT_statcfg3_rx_ovf        19          
#define MSK_statcfg3_tx_nxt        0x00100000U // [20]
#define SRT_statcfg3_tx_nxt        20          
#define MSK_statcfg3_tx_ufl        0x00200000U // [21]
#define SRT_statcfg3_tx_ufl        21          
#define MSK_statcfg3_utx_empty     0x00400000U // [22]
#define SRT_statcfg3_utx_empty     22          
#define MSK_statcfg3_brec          0x00800000U // [23]
#define SRT_statcfg3_brec          23          
#define MSK_statcfg3_btran         0x01000000U // [24]
#define SRT_statcfg3_btran         24          
#define MSK_statcfg3_stat_rpu      0x02000000U // [25]
#define SRT_statcfg3_stat_rpu      25          
#define MSK_statcfg3_stat_tpu      0x04000000U // [26]
#define SRT_statcfg3_stat_tpu      26          
#define MSK_statcfg3_phy_led0      0x10000000U // [28]
#define SRT_statcfg3_phy_led0      28          
#define MSK_statcfg3_phy_led1      0x20000000U // [29]
#define SRT_statcfg3_phy_led1      29          
#define MSK_statcfg3_phy_led2      0x40000000U // [30]
#define SRT_statcfg3_phy_led2      30          
#define MSK_statcfg3_phy_led3      0x80000000U // [31]
#define SRT_statcfg3_phy_led3      31          

enum {
	BFW_statcfg3_rx_nof_bits   = 4, // [3:0]
	BFW_statcfg3_tx_nof_bits   = 4, // [7:4]
	BFW_statcfg3_rx_shift_lr   = 1, // [8]
	BFW_statcfg3_tx_shift_lr   = 1, // [9]
	BFW_statcfg3_reset_rx_fifo = 1, // [10]
	BFW_statcfg3_reset_tx_fifo = 1, // [11]
	BFW_statcfg3_gpio0_out     = 1, // [12]
	BFW_statcfg3_gpio0_oe      = 1, // [13]
	BFW_statcfg3_gpio1_out     = 1, // [14]
	BFW_statcfg3_gpio1_oe      = 1, // [15]
	BFW_statcfg3_gpio0_in      = 1, // [16]
	BFW_statcfg3_gpio1_in      = 1, // [17]
	BFW_statcfg3_rx_rdy        = 1, // [18]
	BFW_statcfg3_rx_ovf        = 1, // [19]
	BFW_statcfg3_tx_nxt        = 1, // [20]
	BFW_statcfg3_tx_ufl        = 1, // [21]
	BFW_statcfg3_utx_empty     = 1, // [22]
	BFW_statcfg3_brec          = 1, // [23]
	BFW_statcfg3_btran         = 1, // [24]
	BFW_statcfg3_stat_rpu      = 1, // [25]
	BFW_statcfg3_stat_tpu      = 1, // [26]
	BFW_statcfg3_reserved1     = 1, // [27]
	BFW_statcfg3_phy_led0      = 1, // [28]
	BFW_statcfg3_phy_led1      = 1, // [29]
	BFW_statcfg3_phy_led2      = 1, // [30]
	BFW_statcfg3_phy_led3      = 1  // [31]
};

typedef struct STATCFG3_BIT_Ttag {
	unsigned int rx_nof_bits   : BFW_statcfg3_rx_nof_bits;   // Number of bits written by SBU to rx-register, only used for rx_hw_count 
	unsigned int tx_nof_bits   : BFW_statcfg3_tx_nof_bits;   // Number of bits read by OBU from tx-register 
	unsigned int rx_shift_lr   : BFW_statcfg3_rx_shift_lr;   // 1: SBU reads incoming bits to position 0 of register rx and shifts rx left, 
	                                                        // 0: SBU reads incoming bits to position 15 of register rx and shifts rx right
	unsigned int tx_shift_lr   : BFW_statcfg3_tx_shift_lr;   // 1: OBU reads outgoing bits from position 15 of register tx and shifts tx left, 
	                                                        // 0: OBU reads outgoing bits from position 0 of register tx and shifts tx right
	unsigned int reset_rx_fifo : BFW_statcfg3_reset_rx_fifo; // reset URX_FIFO and rx_ovf bit inside status_shared register 
	unsigned int reset_tx_fifo : BFW_statcfg3_reset_tx_fifo; // reset UTX_FIFO and tx_ufl bit inside status_shared register 
	unsigned int gpio0_out     : BFW_statcfg3_gpio0_out;     // General Purpose IO 0 output 
	unsigned int gpio0_oe      : BFW_statcfg3_gpio0_oe;      // General Purpose IO 0 output enable 
	unsigned int gpio1_out     : BFW_statcfg3_gpio1_out;     // General Purpose IO 1 output 
	unsigned int gpio1_oe      : BFW_statcfg3_gpio1_oe;      // General Purpose IO 1 output enable 
	unsigned int gpio0_in      : BFW_statcfg3_gpio0_in;      // value at external gpio1 pin
	unsigned int gpio1_in      : BFW_statcfg3_gpio1_in;      // value at external gpio2 pin
	unsigned int rx_rdy        : BFW_statcfg3_rx_rdy;        // received bytes are valid at output of URX_FIFO
	unsigned int rx_ovf        : BFW_statcfg3_rx_ovf;        // receive overflow (too much data in URX_FIFO)
	unsigned int tx_nxt        : BFW_statcfg3_tx_nxt;        // put next tx_word to UTX_FIFO: at least one entry of UTX_FIFO is empty
	unsigned int tx_ufl        : BFW_statcfg3_tx_ufl;        // transmit underflow (not enough data in UTX_FIFO)
	unsigned int utx_empty     : BFW_statcfg3_utx_empty;     // UTX_FIFO is empty
	unsigned int brec          : BFW_statcfg3_brec;          // bit_received (active for 1 cc)
	unsigned int btran         : BFW_statcfg3_btran;         // bit_transmitted (active for 1 cc)
	unsigned int stat_rpu      : BFW_statcfg3_stat_rpu;      // set and reset by RPU command bits
	unsigned int stat_tpu      : BFW_statcfg3_stat_tpu;      // set and reset by TPU command bits
	unsigned int reserved1     : BFW_statcfg3_reserved1;     // reserved
	unsigned int phy_led0      : BFW_statcfg3_phy_led0;      // not connected (zero)
	unsigned int phy_led1      : BFW_statcfg3_phy_led1;      // not connected (zero)
	unsigned int phy_led2      : BFW_statcfg3_phy_led2;      // not connected (zero)
	unsigned int phy_led3      : BFW_statcfg3_phy_led3;      // not connected (zero)
} STATCFG3_BIT_T;

typedef union {
	unsigned int   val;
	STATCFG3_BIT_T bf;
} STATCFG3_T;

// ---------------------------------------------------------------------
// Register urtx0
// => xMAC0 URX Shared Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_urtx0   0x000000F0U
#define Adr_xpec0_urtx0 0x001700F0U
#define Adr_xpec1_urtx0 0x001740F0U
#define Adr_xpec2_urtx0 0x001780F0U
#define Adr_xpec3_urtx0 0x0017C0F0U

#define MSK_urtx0_urtx_xmac0 0x0000ffffU // [15:0]
#define SRT_urtx0_urtx_xmac0 0           

enum {
	BFW_urtx0_urtx_xmac0 = 16, // [15:0]
	BFW_urtx0_reserved1  = 16  // [31:16]
};

typedef struct URTX0_BIT_Ttag {
	unsigned int urtx_xmac0 : BFW_urtx0_urtx_xmac0; // read access:  Lastly received bits (output of URX_FIFO) 
	                                                        // write access: Bits to be transmitted next (input of UTX_FIFO)
	unsigned int reserved1  : BFW_urtx0_reserved1;  // reserved
} URTX0_BIT_T;

typedef union {
	unsigned int val;
	URTX0_BIT_T  bf;
} URTX0_T;

// ---------------------------------------------------------------------
// Register urtx1
// => xMAC1 URX Shared Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_urtx1   0x000000F4U
#define Adr_xpec0_urtx1 0x001700F4U
#define Adr_xpec1_urtx1 0x001740F4U
#define Adr_xpec2_urtx1 0x001780F4U
#define Adr_xpec3_urtx1 0x0017C0F4U

#define MSK_urtx1_urtx_xmac1 0x0000ffffU // [15:0]
#define SRT_urtx1_urtx_xmac1 0           

enum {
	BFW_urtx1_urtx_xmac1 = 16, // [15:0]
	BFW_urtx1_reserved1  = 16  // [31:16]
};

typedef struct URTX1_BIT_Ttag {
	unsigned int urtx_xmac1 : BFW_urtx1_urtx_xmac1; // read access:  Lastly received bits (output of URX_FIFO) 
	                                                        // write access: Bits to be transmitted next (input of UTX_FIFO)
	unsigned int reserved1  : BFW_urtx1_reserved1;  // reserved
} URTX1_BIT_T;

typedef union {
	unsigned int val;
	URTX1_BIT_T  bf;
} URTX1_T;

// ---------------------------------------------------------------------
// Register urtx2
// => xMAC2 URX Shared Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_urtx2   0x000000F8U
#define Adr_xpec0_urtx2 0x001700F8U
#define Adr_xpec1_urtx2 0x001740F8U
#define Adr_xpec2_urtx2 0x001780F8U
#define Adr_xpec3_urtx2 0x0017C0F8U

#define MSK_urtx2_urtx_xmac2 0x0000ffffU // [15:0]
#define SRT_urtx2_urtx_xmac2 0           

enum {
	BFW_urtx2_urtx_xmac2 = 16, // [15:0]
	BFW_urtx2_reserved1  = 16  // [31:16]
};

typedef struct URTX2_BIT_Ttag {
	unsigned int urtx_xmac2 : BFW_urtx2_urtx_xmac2; // read access:  Lastly received bits (output of URX_FIFO) 
	                                                        // write access: Bits to be transmitted next (input of UTX_FIFO)
	unsigned int reserved1  : BFW_urtx2_reserved1;  // reserved
} URTX2_BIT_T;

typedef union {
	unsigned int val;
	URTX2_BIT_T  bf;
} URTX2_T;

// ---------------------------------------------------------------------
// Register urtx3
// => xMAC3 URX Shared Register
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_urtx3   0x000000FCU
#define Adr_xpec0_urtx3 0x001700FCU
#define Adr_xpec1_urtx3 0x001740FCU
#define Adr_xpec2_urtx3 0x001780FCU
#define Adr_xpec3_urtx3 0x0017C0FCU

#define MSK_urtx3_urtx_xmac3 0x0000ffffU // [15:0]
#define SRT_urtx3_urtx_xmac3 0           

enum {
	BFW_urtx3_urtx_xmac3 = 16, // [15:0]
	BFW_urtx3_reserved1  = 16  // [31:16]
};

typedef struct URTX3_BIT_Ttag {
	unsigned int urtx_xmac3 : BFW_urtx3_urtx_xmac3; // read access:  Lastly received bits (output of URX_FIFO) 
	                                                        // write access: Bits to be transmitted next (input of UTX_FIFO)
	unsigned int reserved1  : BFW_urtx3_reserved1;  // reserved
} URTX3_BIT_T;

typedef union {
	unsigned int val;
	URTX3_BIT_T  bf;
} URTX3_T;


// =====================================================================
//
// Area of dTCM
//
// =====================================================================

#define Addr_dTCM	0x10000000U

// ---------------------------------------------------------------------
// Register dTCM_base
// => ARM data Tightly Coupled Memory start address
//    Area size: 8kB
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_dTCM_base 0x00000000U
#define Adr_dTCM_base     0x10000000U

// ---------------------------------------------------------------------
// Register dTCM_end
// => ARM data Tightly Coupled Memory end address
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_dTCM_end 0x00001FFCU
#define Adr_dTCM_end     0x10001FFCU


// =====================================================================
//
// Area of SIM_MSG
//
// =====================================================================

#define Addr_SIM_MSG	0xD4000000U

// ---------------------------------------------------------------------
// Register SIM_MSG_BASE
// => Message Base Address for auto-generated toplevel testbench file message.v (software simulation)
//    generated by perl-script mk_mess.pl
//    $MSG_BASE_ADR in mk_mess.pl mus have the same value like this registers full address
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_SIM_MSG_BASE 0x00100000U
#define Adr_SIM_MSG_BASE     0xD4100000U

#define MSK_SIM_MSG_BASE_nothing 0xffffffffU // [31:0]
#define SRT_SIM_MSG_BASE_nothing 0           

enum {
	BFW_SIM_MSG_BASE_nothing = 32  // [31:0]
};

typedef struct SIM_MSG_BASE_BIT_Ttag {
	unsigned int nothing : BFW_SIM_MSG_BASE_nothing; // dummy register for simulation only 
} SIM_MSG_BASE_BIT_T;

typedef union {
	unsigned int       val;
	SIM_MSG_BASE_BIT_T bf;
} SIM_MSG_BASE_T;


// =====================================================================
//
// Area of pci_ahbls6
//
// =====================================================================

#define Addr_pci_ahbls6	0x20000000U

// ---------------------------------------------------------------------
// Register pci_ahbls6_BASE
// => Base Address of AHLB Slave 6
//    Memory area of PCI/Host-Bus Interface
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_pci_ahbls6_BASE 0x00000000U
#define Adr_pci_ahbls6_BASE     0x20000000U


// =====================================================================
//
// Area of sdram
//
// =====================================================================

#define Addr_sdram	0x80000000U

// ---------------------------------------------------------------------
// Register sdram_base
// => external SDRAM chipselect start address
//    Area size: 1024MB
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_sdram_base 0x00000000U
#define Adr_sdram_base     0x80000000U

// ---------------------------------------------------------------------
// Register sdram_end
// => external SDRAM chipselect end address
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_sdram_end 0x3FFFFFFCU
#define Adr_sdram_end     0xBFFFFFFCU


// =====================================================================
//
// Area of extsram0
//
// =====================================================================

#define Addr_extsram0	0xC0000000U

// ---------------------------------------------------------------------
// Register extsram0_base
// => external SRAM/Flash/NVRAM,... chipselect start address
//    Area size: 128MB
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_extsram0_base 0x00000000U
#define Adr_extsram0_base     0xC0000000U

// ---------------------------------------------------------------------
// Register extsram0_end
// => external SRAM/Flash/NVRAM,... chipselect end address
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_extsram0_end 0x07FFFFFCU
#define Adr_extsram0_end     0xC7FFFFFCU


// =====================================================================
//
// Area of extsram1
//
// =====================================================================

#define Addr_extsram1	0xC8000000U

// ---------------------------------------------------------------------
// Register extsram1_base
// => external SRAM/Flash/NVRAM,... chipselect start address
//    Area size: 128MB
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_extsram1_base 0x00000000U
#define Adr_extsram1_base     0xC8000000U

// ---------------------------------------------------------------------
// Register extsram1_end
// => external SRAM/Flash/NVRAM,... chipselect end address
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_extsram1_end 0x07FFFFFCU
#define Adr_extsram1_end     0xCFFFFFFCU


// =====================================================================
//
// Area of extsram2
//
// =====================================================================

#define Addr_extsram2	0xD0000000U

// ---------------------------------------------------------------------
// Register extsram2_base
// => external SRAM/Flash/NVRAM,... chipselect start address
//    Area size: 128MB
// => Mode: Mode (r/w)
// ---------------------------------------------------------------------

#define REL_Adr_extsram2_base 0x00000000U
#define Adr_extsram2_base     0xD0000000U

// ---------------------------------------------------------------------
// Register extsram2_end
// => external SRAM/Flash/NVRAM,... chipselect end address
// => Mode: Mode (r)
// ---------------------------------------------------------------------

#define REL_Adr_extsram2_end 0x07FFFFFCU
#define Adr_extsram2_end     0xD7FFFFFCU



#endif
