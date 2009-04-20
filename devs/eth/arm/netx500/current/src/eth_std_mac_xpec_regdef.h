// ******************************************************************
// from regdef.v by regdef2h auto-generated C-header file            
// please see the regdef.html file for detailed register description 
// ******************************************************************

#ifndef __ethmac_regdef_h
#define __ethmac_regdef_h


// =====================================================================
//
// Area of ETHMACBASE
//
// =====================================================================


// ---------------------------------------------------------------------
// Register AREA_ETHMAC_XPEC_PROGRAM
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_XPEC_PROGRAM        0x00000000U

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_TXAREABASE
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_TXAREABASE        0x00001400U

// ---------------------------------------------------------------------
// Register ETHMAC_TX_POINTER_START
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_TX_POINTER_START        0x00001400U

#define MSK_ETHMAC_TX_POINTER_START_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_TX_POINTER_START_VAL 0

enum {
	BFW_ETHMAC_TX_POINTER_START_VAL = 32  // [31:0]
};

typedef struct ETHMAC_TX_POINTER_START_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_POINTER_START_VAL; // start pointer to ethernet data to transmit
} ETHMAC_TX_POINTER_START_BIT_T;

typedef union {
	unsigned int                  val;
	ETHMAC_TX_POINTER_START_BIT_T bf;
} ETHMAC_TX_POINTER_START_T;

// ---------------------------------------------------------------------
// Register ETHMAC_TX_POINTER_ACTUAL
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_TX_POINTER_ACTUAL        0x00001404U

#define MSK_ETHMAC_TX_POINTER_ACTUAL_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_TX_POINTER_ACTUAL_VAL 0

enum {
	BFW_ETHMAC_TX_POINTER_ACTUAL_VAL = 32  // [31:0]
};

typedef struct ETHMAC_TX_POINTER_ACTUAL_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_POINTER_ACTUAL_VAL; // actual pointer to ethernet data to transmit
} ETHMAC_TX_POINTER_ACTUAL_BIT_T;

typedef union {
	unsigned int                   val;
	ETHMAC_TX_POINTER_ACTUAL_BIT_T bf;
} ETHMAC_TX_POINTER_ACTUAL_T;

// ---------------------------------------------------------------------
// Register ETHMAC_TX_BYTES_LEFT_FOR_UTX
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_TX_BYTES_LEFT_FOR_UTX        0x00001408U

#define MSK_ETHMAC_TX_BYTES_LEFT_FOR_UTX_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_TX_BYTES_LEFT_FOR_UTX_VAL 0

enum {
	BFW_ETHMAC_TX_BYTES_LEFT_FOR_UTX_VAL = 32  // [31:0]
};

typedef struct ETHMAC_TX_BYTES_LEFT_FOR_UTX_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_BYTES_LEFT_FOR_UTX_VAL; // number of bytes left to transmit to utx fifo
} ETHMAC_TX_BYTES_LEFT_FOR_UTX_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_TX_BYTES_LEFT_FOR_UTX_BIT_T bf;
} ETHMAC_TX_BYTES_LEFT_FOR_UTX_T;

// ---------------------------------------------------------------------
// Register ETHMAC_TX_BYTES_LEFT_FOR_DMA
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_TX_BYTES_LEFT_FOR_DMA        0x0000140CU

#define MSK_ETHMAC_TX_BYTES_LEFT_FOR_DMA_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_TX_BYTES_LEFT_FOR_DMA_VAL 0

enum {
	BFW_ETHMAC_TX_BYTES_LEFT_FOR_DMA_VAL = 32  // [31:0]
};

typedef struct ETHMAC_TX_BYTES_LEFT_FOR_DMA_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_BYTES_LEFT_FOR_DMA_VAL; // number of bytes left for DMA
} ETHMAC_TX_BYTES_LEFT_FOR_DMA_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_TX_BYTES_LEFT_FOR_DMA_BIT_T bf;
} ETHMAC_TX_BYTES_LEFT_FOR_DMA_T;

// ---------------------------------------------------------------------
// Register ETHMAC_TX_RETRY
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_TX_RETRY        0x00001410U

#define MSK_ETHMAC_TX_RETRY_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_TX_RETRY_CNT 0

enum {
	BFW_ETHMAC_TX_RETRY_CNT = 32  // [31:0]
};

typedef struct ETHMAC_TX_RETRY_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_TX_RETRY_CNT; // retry counter for transmission attempts
} ETHMAC_TX_RETRY_BIT_T;

typedef union {
	unsigned int          val;
	ETHMAC_TX_RETRY_BIT_T bf;
} ETHMAC_TX_RETRY_T;

// ---------------------------------------------------------------------
// Register ETHMAC_TX_BACKOFF_DELAY
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_TX_BACKOFF_DELAY        0x00001414U

#define MSK_ETHMAC_TX_BACKOFF_DELAY_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_TX_BACKOFF_DELAY_VAL 0

enum {
	BFW_ETHMAC_TX_BACKOFF_DELAY_VAL = 32  // [31:0]
};

typedef struct ETHMAC_TX_BACKOFF_DELAY_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_BACKOFF_DELAY_VAL; // calculated back-off-delay
} ETHMAC_TX_BACKOFF_DELAY_BIT_T;

typedef union {
	unsigned int                  val;
	ETHMAC_TX_BACKOFF_DELAY_BIT_T bf;
} ETHMAC_TX_BACKOFF_DELAY_T;

// ---------------------------------------------------------------------
// Register ETHMAC_TX_TIMESTAMP_NS
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_TX_TIMESTAMP_NS        0x00001418U

#define MSK_ETHMAC_TX_TIMESTAMP_NS_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_TX_TIMESTAMP_NS_VAL 0

enum {
	BFW_ETHMAC_TX_TIMESTAMP_NS_VAL = 32  // [31:0]
};

typedef struct ETHMAC_TX_TIMESTAMP_NS_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_TIMESTAMP_NS_VAL; // transmit timestamp ns of outgoing packet
} ETHMAC_TX_TIMESTAMP_NS_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_TX_TIMESTAMP_NS_BIT_T bf;
} ETHMAC_TX_TIMESTAMP_NS_T;

// ---------------------------------------------------------------------
// Register ETHMAC_TX_TIMESTAMP_S
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_TX_TIMESTAMP_S        0x0000141CU

#define MSK_ETHMAC_TX_TIMESTAMP_S_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_TX_TIMESTAMP_S_VAL 0

enum {
	BFW_ETHMAC_TX_TIMESTAMP_S_VAL = 32  // [31:0]
};

typedef struct ETHMAC_TX_TIMESTAMP_S_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_TIMESTAMP_S_VAL; // transmit timestamp s of outgoing packet
} ETHMAC_TX_TIMESTAMP_S_BIT_T;

typedef union {
	unsigned int                val;
	ETHMAC_TX_TIMESTAMP_S_BIT_T bf;
} ETHMAC_TX_TIMESTAMP_S_T;

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_TX_TPU_ERROR_CODE_JUMP_TABLE_BASE
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_TX_TPU_ERROR_CODE_JUMP_TABLE_BASE        0x00001420U

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_TXBUF1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_TXBUF1        0x00001460U

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_TXBUF2
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_TXBUF2        0x00001480U

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_RXAREABASE
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_RXAREABASE        0x000014A0U

// ---------------------------------------------------------------------
// Register ETHMAC_RX_DST_MAC_ADDRESS_LO
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_LO        0x000014A0U

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  0x00000001U // [0]
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  0
#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR 0x00000002U // [1]
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR 1
#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_LO_MAC_ADDR_LO                  0xfffffffcU // [31:2]
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_LO_MAC_ADDR_LO                  2

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  = 1,  // [0]
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR = 1,  // [1]
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_MAC_ADDR_LO                  = 30  // [31:2]
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_LO_BIT_Ttag {
	unsigned int INDIVIDUAL_OR_GROUP_ADDRESS  : BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS;  // individual or group address
	unsigned int GLOBALLY_OR_LOCALLY_ADM_ADDR : BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR; // globally or locally administered address
	unsigned int MAC_ADDR_LO                  : BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_MAC_ADDR_LO;                  // MAC address bits 31..2
} ETHMAC_RX_DST_MAC_ADDRESS_LO_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_RX_DST_MAC_ADDRESS_LO_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_LO_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_DST_MAC_ADDRESS_HI
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_HI        0x000014A4U

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HI_MAC_ADDR_HI 0x0000ffffU // [15:0]
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HI_MAC_ADDR_HI 0
#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HI_RES1        0xffff0000U // [31:16]
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HI_RES1        16

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HI_MAC_ADDR_HI = 16, // [15:0]
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HI_RES1        = 16  // [31:16]
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_HI_BIT_Ttag {
	unsigned int MAC_ADDR_HI : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HI_MAC_ADDR_HI; // MAC address bits 47..32
	unsigned int RES1        : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HI_RES1;        // Reserved
} ETHMAC_RX_DST_MAC_ADDRESS_HI_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_RX_DST_MAC_ADDRESS_HI_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_HI_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_SRC_MAC_ADDRESS_LO
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_LO        0x000014A8U

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  0x00000001U // [0]
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  0
#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR 0x00000002U // [1]
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR 1
#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_LO_MAC_ADDR_LO                  0xfffffffcU // [31:2]
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_LO_MAC_ADDR_LO                  2

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  = 1,  // [0]
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR = 1,  // [1]
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_MAC_ADDR_LO                  = 30  // [31:2]
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_LO_BIT_Ttag {
	unsigned int INDIVIDUAL_OR_GROUP_ADDRESS  : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS;  // individual or group address
	unsigned int GLOBALLY_OR_LOCALLY_ADM_ADDR : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR; // globally or locally administered address
	unsigned int MAC_ADDR_LO                  : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_MAC_ADDR_LO;                  // MAC address bits 31..2
} ETHMAC_RX_SRC_MAC_ADDRESS_LO_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_RX_SRC_MAC_ADDRESS_LO_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_LO_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_SRC_MAC_ADDRESS_HI
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_HI        0x000014ACU

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HI_MAC_ADDR_HI 0x0000ffffU // [15:0]
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HI_MAC_ADDR_HI 0
#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HI_RES1        0xffff0000U // [31:16]
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HI_RES1        16

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HI_MAC_ADDR_HI = 16, // [15:0]
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HI_RES1        = 16  // [31:16]
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_HI_BIT_Ttag {
	unsigned int MAC_ADDR_HI : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HI_MAC_ADDR_HI; // MAC address bits 47..32
	unsigned int RES1        : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HI_RES1;        // Reserved
} ETHMAC_RX_SRC_MAC_ADDRESS_HI_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_RX_SRC_MAC_ADDRESS_HI_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_HI_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_ETH_TYPE_LEN
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_ETH_TYPE_LEN        0x000014B0U

#define MSK_ETHMAC_RX_ETH_TYPE_LEN_VAL  0x0000ffffU // [15:0]
#define SRT_ETHMAC_RX_ETH_TYPE_LEN_VAL  0
#define MSK_ETHMAC_RX_ETH_TYPE_LEN_RES1 0xffff0000U // [31:16]
#define SRT_ETHMAC_RX_ETH_TYPE_LEN_RES1 16

enum {
	BFW_ETHMAC_RX_ETH_TYPE_LEN_VAL  = 16, // [15:0]
	BFW_ETHMAC_RX_ETH_TYPE_LEN_RES1 = 16  // [31:16]
};

typedef struct ETHMAC_RX_ETH_TYPE_LEN_BIT_Ttag {
	unsigned int VAL  : BFW_ETHMAC_RX_ETH_TYPE_LEN_VAL;  // received Ethernet type/len field
	unsigned int RES1 : BFW_ETHMAC_RX_ETH_TYPE_LEN_RES1; // Reserved
} ETHMAC_RX_ETH_TYPE_LEN_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_RX_ETH_TYPE_LEN_BIT_T bf;
} ETHMAC_RX_ETH_TYPE_LEN_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_TAGGED_FIELD
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_TAGGED_FIELD        0x000014B4U

#define MSK_ETHMAC_RX_TAGGED_FIELD_ETHTYPE_VLAN             0x0000ffffU // [15:0]
#define SRT_ETHMAC_RX_TAGGED_FIELD_ETHTYPE_VLAN             0
#define MSK_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_11_8             0x000f0000U // [19:16]
#define SRT_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_11_8             16
#define MSK_ETHMAC_RX_TAGGED_FIELD_CANONICAL_FORM_INDICATOR 0x00100000U // [20]
#define SRT_ETHMAC_RX_TAGGED_FIELD_CANONICAL_FORM_INDICATOR 20
#define MSK_ETHMAC_RX_TAGGED_FIELD_PRIORITY                 0x00e00000U // [23:21]
#define SRT_ETHMAC_RX_TAGGED_FIELD_PRIORITY                 21
#define MSK_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_7_0              0xff000000U // [31:24]
#define SRT_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_7_0              24

enum {
	BFW_ETHMAC_RX_TAGGED_FIELD_ETHTYPE_VLAN             = 16, // [15:0]
	BFW_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_11_8             = 4,  // [19:16]
	BFW_ETHMAC_RX_TAGGED_FIELD_CANONICAL_FORM_INDICATOR = 1,  // [20]
	BFW_ETHMAC_RX_TAGGED_FIELD_PRIORITY                 = 3,  // [23:21]
	BFW_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_7_0              = 8   // [31:24]
};

typedef struct ETHMAC_RX_TAGGED_FIELD_BIT_Ttag {
	unsigned int ETHTYPE_VLAN             : BFW_ETHMAC_RX_TAGGED_FIELD_ETHTYPE_VLAN;             // 0x0081: frame is VLAN-tagged and VLAN-Tag is valid
	unsigned int VLAN_ID_11_8             : BFW_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_11_8;             // VLAN identifier bits
	unsigned int CANONICAL_FORM_INDICATOR : BFW_ETHMAC_RX_TAGGED_FIELD_CANONICAL_FORM_INDICATOR; // Canonical form indicator
	unsigned int PRIORITY                 : BFW_ETHMAC_RX_TAGGED_FIELD_PRIORITY;                 // VLAN priority
	unsigned int VLAN_ID_7_0              : BFW_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_7_0;              // VLAN identifier bits
} ETHMAC_RX_TAGGED_FIELD_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_RX_TAGGED_FIELD_BIT_T bf;
} ETHMAC_RX_TAGGED_FIELD_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_POINTER_ACTUAL
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_POINTER_ACTUAL        0x000014B8U

#define MSK_ETHMAC_RX_POINTER_ACTUAL_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_POINTER_ACTUAL_VAL 0

enum {
	BFW_ETHMAC_RX_POINTER_ACTUAL_VAL = 32  // [31:0]
};

typedef struct ETHMAC_RX_POINTER_ACTUAL_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_POINTER_ACTUAL_VAL; // data buffer run pointer of actual received ethernet packet
} ETHMAC_RX_POINTER_ACTUAL_BIT_T;

typedef union {
	unsigned int                   val;
	ETHMAC_RX_POINTER_ACTUAL_BIT_T bf;
} ETHMAC_RX_POINTER_ACTUAL_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_WORKING
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_WORKING        0x000014BCU

#define MSK_ETHMAC_RX_WORKING_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_WORKING_VAL 0

enum {
	BFW_ETHMAC_RX_WORKING_VAL = 32  // [31:0]
};

typedef struct ETHMAC_RX_WORKING_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_WORKING_VAL; // receive help working variable
} ETHMAC_RX_WORKING_BIT_T;

typedef union {
	unsigned int            val;
	ETHMAC_RX_WORKING_BIT_T bf;
} ETHMAC_RX_WORKING_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_TIMESTAMP_NS
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_TIMESTAMP_NS        0x000014C0U

#define MSK_ETHMAC_RX_TIMESTAMP_NS_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_TIMESTAMP_NS_VAL 0

enum {
	BFW_ETHMAC_RX_TIMESTAMP_NS_VAL = 32  // [31:0]
};

typedef struct ETHMAC_RX_TIMESTAMP_NS_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_TIMESTAMP_NS_VAL; // receive timestamp ns of incoming packet
} ETHMAC_RX_TIMESTAMP_NS_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_RX_TIMESTAMP_NS_BIT_T bf;
} ETHMAC_RX_TIMESTAMP_NS_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_TIMESTAMP_S
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_TIMESTAMP_S        0x000014C4U

#define MSK_ETHMAC_RX_TIMESTAMP_S_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_TIMESTAMP_S_VAL 0

enum {
	BFW_ETHMAC_RX_TIMESTAMP_S_VAL = 32  // [31:0]
};

typedef struct ETHMAC_RX_TIMESTAMP_S_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_TIMESTAMP_S_VAL; // receive timestamp s of incoming packet
} ETHMAC_RX_TIMESTAMP_S_BIT_T;

typedef union {
	unsigned int                val;
	ETHMAC_RX_TIMESTAMP_S_BIT_T bf;
} ETHMAC_RX_TIMESTAMP_S_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_DST_MAC_ADDRESS_HASH
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_HASH        0x000014C8U

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HASH_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HASH_VAL 0

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_VAL = 32  // [31:0]
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_HASH_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_VAL; // Hash value of destination MAC address
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_BIT_T;

typedef union {
	unsigned int                         val;
	ETHMAC_RX_DST_MAC_ADDRESS_HASH_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET        0x000014CCU

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_ADDR 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_ADDR 0

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_ADDR = 32  // [31:0]
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_BIT_Ttag {
	unsigned int ADDR : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_ADDR; // Offset address within hash table
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_BIT_T;

typedef union {
	unsigned int                                val;
	ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK        0x000014D0U

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_ADDR 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_ADDR 0

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_ADDR = 32  // [31:0]
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_BIT_Ttag {
	unsigned int ADDR : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_ADDR; // Mask for byte within hash table
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_BIT_T;

typedef union {
	unsigned int                              val;
	ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_SRC_MAC_ADDRESS_HASH
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_HASH        0x000014D4U

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_VAL 0

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_VAL = 32  // [31:0]
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_HASH_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_VAL; // Hash value of source MAC address
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_BIT_T;

typedef union {
	unsigned int                         val;
	ETHMAC_RX_SRC_MAC_ADDRESS_HASH_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET        0x000014D8U

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_ADDR 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_ADDR 0

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_ADDR = 32  // [31:0]
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_BIT_Ttag {
	unsigned int ADDR : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_ADDR; // Offset address within hash table
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_BIT_T;

typedef union {
	unsigned int                                val;
	ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK        0x000014DCU

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_ADDR 0xffffffffU // [31:0]
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_ADDR 0

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_ADDR = 32  // [31:0]
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_BIT_Ttag {
	unsigned int ADDR : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_ADDR; // Mask for byte within hash table
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_BIT_T;

typedef union {
	unsigned int                              val;
	ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_T;

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_RX_RPU_ERROR_CODE_JUMP_TABLE_BASE
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_RX_RPU_ERROR_CODE_JUMP_TABLE_BASE        0x000014E0U

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_RXBUF1
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_RXBUF1        0x00001520U

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_RXBUF2
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_RXBUF2        0x00001540U

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_MANAGEMENT_AREA_BASE
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_MANAGEMENT_AREA_BASE        0x00001560U

// ---------------------------------------------------------------------
// Register ETHMAC_LOCAL_MAC_CONFIG
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_LOCAL_MAC_CONFIG        0x00001560U

#define MSK_ETHMAC_LOCAL_MAC_CONFIG_MONITORING_MODE           0x00000001U // [0]
#define SRT_ETHMAC_LOCAL_MAC_CONFIG_MONITORING_MODE           0
#define MSK_ETHMAC_LOCAL_MAC_CONFIG_RES1                      0x0000fffeU // [15:1]
#define SRT_ETHMAC_LOCAL_MAC_CONFIG_RES1                      1
#define MSK_ETHMAC_LOCAL_MAC_CONFIG_TRAFFIC_CLASS_ARRANGEMENT 0x000f0000U // [19:16]
#define SRT_ETHMAC_LOCAL_MAC_CONFIG_TRAFFIC_CLASS_ARRANGEMENT 16
#define MSK_ETHMAC_LOCAL_MAC_CONFIG_RES2                      0xfff00000U // [31:20]
#define SRT_ETHMAC_LOCAL_MAC_CONFIG_RES2                      20

enum {
	BFW_ETHMAC_LOCAL_MAC_CONFIG_MONITORING_MODE           = 1,  // [0]
	BFW_ETHMAC_LOCAL_MAC_CONFIG_RES1                      = 15, // [15:1]
	BFW_ETHMAC_LOCAL_MAC_CONFIG_TRAFFIC_CLASS_ARRANGEMENT = 4,  // [19:16]
	BFW_ETHMAC_LOCAL_MAC_CONFIG_RES2                      = 12  // [31:20]
};

typedef struct ETHMAC_LOCAL_MAC_CONFIG_BIT_Ttag {
	unsigned int MONITORING_MODE           : BFW_ETHMAC_LOCAL_MAC_CONFIG_MONITORING_MODE;           // 1: Forwarding of all received ethernet frames to local port
	                                                        // 0: Forwarding of broadcast ethernet frames to local port
	                                                        //    Forwarding of multicast ethernet frames to local port if hash match in multicast table
	                                                        //    Forwarding of unicast ethernet frames to local port if destination MAC address matches local ethernet MAC address
	unsigned int RES1                      : BFW_ETHMAC_LOCAL_MAC_CONFIG_RES1;                      // reserved
	unsigned int TRAFFIC_CLASS_ARRANGEMENT : BFW_ETHMAC_LOCAL_MAC_CONFIG_TRAFFIC_CLASS_ARRANGEMENT; // Traffic Class arrangement
	                                                        //     0: HI: vlan priority 7..0, LO: untagged frame
	                                                        //     1: HI: vlan priority 7..1, LO: vlan priority 0, untagged frame
	                                                        //     2: HI: vlan priority 7..2, LO: vlan priority 1..0, untagged frame
	                                                        //     3: HI: vlan priority 7..3, LO: vlan priority 2..0, untagged frame
	                                                        //     4: HI: vlan priority 7..4, LO: vlan priority 3..0, untagged frame (802.1Q Recommendation)
	                                                        //     5: HI: vlan priority 7..5, LO: vlan priority 4..0, untagged frame
	                                                        //     6: HI: vlan priority 7..6, LO: vlan priority 5..0, untagged frame
	                                                        //     7: HI: vlan priority 7,    LO: vlan priority 6..0, untagged frame
	                                                        //     8: HI: -,                  LO: vlan priority 7..0, untagged frame
	unsigned int RES2                      : BFW_ETHMAC_LOCAL_MAC_CONFIG_RES2;                      // reserved
} ETHMAC_LOCAL_MAC_CONFIG_BIT_T;

typedef union {
	unsigned int                  val;
	ETHMAC_LOCAL_MAC_CONFIG_BIT_T bf;
} ETHMAC_LOCAL_MAC_CONFIG_T;

// ---------------------------------------------------------------------
// Register ETHMAC_INTERRUPTS_ENABLE
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE        0x00001564U

#define MSK_ETHMAC_INTERRUPTS_ENABLE_IND_HI               0x00000001U // [0]
#define SRT_ETHMAC_INTERRUPTS_ENABLE_IND_HI               0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_IND_LO               0x00000002U // [1]
#define SRT_ETHMAC_INTERRUPTS_ENABLE_IND_LO               1
#define MSK_ETHMAC_INTERRUPTS_ENABLE_CON_HI               0x00000004U // [2]
#define SRT_ETHMAC_INTERRUPTS_ENABLE_CON_HI               2
#define MSK_ETHMAC_INTERRUPTS_ENABLE_CON_LO               0x00000008U // [3]
#define SRT_ETHMAC_INTERRUPTS_ENABLE_CON_LO               3
#define MSK_ETHMAC_INTERRUPTS_ENABLE_LINK_STA_CHANGED_IRQ 0x00000010U // [4]
#define SRT_ETHMAC_INTERRUPTS_ENABLE_LINK_STA_CHANGED_IRQ 4
#define MSK_ETHMAC_INTERRUPTS_ENABLE_COL                  0x00000020U // [5]
#define SRT_ETHMAC_INTERRUPTS_ENABLE_COL                  5
#define MSK_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV            0x00000040U // [6]
#define SRT_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV            6
#define MSK_ETHMAC_INTERRUPTS_ENABLE_RX_ERR               0x00000080U // [7]
#define SRT_ETHMAC_INTERRUPTS_ENABLE_RX_ERR               7
#define MSK_ETHMAC_INTERRUPTS_ENABLE_RES1                 0xffffff00U // [31:8]
#define SRT_ETHMAC_INTERRUPTS_ENABLE_RES1                 8

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_IND_HI               = 1,  // [0]
	BFW_ETHMAC_INTERRUPTS_ENABLE_IND_LO               = 1,  // [1]
	BFW_ETHMAC_INTERRUPTS_ENABLE_CON_HI               = 1,  // [2]
	BFW_ETHMAC_INTERRUPTS_ENABLE_CON_LO               = 1,  // [3]
	BFW_ETHMAC_INTERRUPTS_ENABLE_LINK_STA_CHANGED_IRQ = 1,  // [4]
	BFW_ETHMAC_INTERRUPTS_ENABLE_COL                  = 1,  // [5]
	BFW_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV            = 1,  // [6]
	BFW_ETHMAC_INTERRUPTS_ENABLE_RX_ERR               = 1,  // [7]
	BFW_ETHMAC_INTERRUPTS_ENABLE_RES1                 = 24  // [31:8]
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_BIT_Ttag {
	unsigned int IND_HI               : BFW_ETHMAC_INTERRUPTS_ENABLE_IND_HI;               // enable indication hi event
	unsigned int IND_LO               : BFW_ETHMAC_INTERRUPTS_ENABLE_IND_LO;               // enable indication lo event
	unsigned int CON_HI               : BFW_ETHMAC_INTERRUPTS_ENABLE_CON_HI;               // enable confirmation hi event
	unsigned int CON_LO               : BFW_ETHMAC_INTERRUPTS_ENABLE_CON_LO;               // enable confirmation lo event
	unsigned int LINK_STA_CHANGED_IRQ : BFW_ETHMAC_INTERRUPTS_ENABLE_LINK_STA_CHANGED_IRQ; // enable link status changed event
	unsigned int COL                  : BFW_ETHMAC_INTERRUPTS_ENABLE_COL;                  // enable collision event
	unsigned int EARLY_RCV            : BFW_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV;            // enable event for destination address received and empty_ptr_got and !frame_filtered_out
	unsigned int RX_ERR               : BFW_ETHMAC_INTERRUPTS_ENABLE_RX_ERR;               // enable event for rx_error (ARM must check management counters for error type)
	unsigned int RES1                 : BFW_ETHMAC_INTERRUPTS_ENABLE_RES1;                 // res
} ETHMAC_INTERRUPTS_ENABLE_BIT_T;

typedef union {
	unsigned int                   val;
	ETHMAC_INTERRUPTS_ENABLE_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_T;

// ---------------------------------------------------------------------
// Register ETHMAC_LOCAL_MAC_ADDRESS_LO
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_LO        0x00001568U

#define MSK_ETHMAC_LOCAL_MAC_ADDRESS_LO_BYTES_4321 0xffffffffU // [31:0]
#define SRT_ETHMAC_LOCAL_MAC_ADDRESS_LO_BYTES_4321 0

enum {
	BFW_ETHMAC_LOCAL_MAC_ADDRESS_LO_BYTES_4321 = 32  // [31:0]
};

typedef struct ETHMAC_LOCAL_MAC_ADDRESS_LO_BIT_Ttag {
	unsigned int BYTES_4321 : BFW_ETHMAC_LOCAL_MAC_ADDRESS_LO_BYTES_4321; // MAC address bytes 4,3,2 and 1
} ETHMAC_LOCAL_MAC_ADDRESS_LO_BIT_T;

typedef union {
	unsigned int                      val;
	ETHMAC_LOCAL_MAC_ADDRESS_LO_BIT_T bf;
} ETHMAC_LOCAL_MAC_ADDRESS_LO_T;

// ---------------------------------------------------------------------
// Register ETHMAC_LOCAL_MAC_ADDRESS_HI
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_HI        0x0000156CU

#define MSK_ETHMAC_LOCAL_MAC_ADDRESS_HI_BYTES_65 0x0000ffffU // [15:0]
#define SRT_ETHMAC_LOCAL_MAC_ADDRESS_HI_BYTES_65 0
#define MSK_ETHMAC_LOCAL_MAC_ADDRESS_HI_RES1     0xffff0000U // [31:16]
#define SRT_ETHMAC_LOCAL_MAC_ADDRESS_HI_RES1     16

enum {
	BFW_ETHMAC_LOCAL_MAC_ADDRESS_HI_BYTES_65 = 16, // [15:0]
	BFW_ETHMAC_LOCAL_MAC_ADDRESS_HI_RES1     = 16  // [31:16]
};

typedef struct ETHMAC_LOCAL_MAC_ADDRESS_HI_BIT_Ttag {
	unsigned int BYTES_65 : BFW_ETHMAC_LOCAL_MAC_ADDRESS_HI_BYTES_65; // MAC address bytes 6 and 5
	unsigned int RES1     : BFW_ETHMAC_LOCAL_MAC_ADDRESS_HI_RES1;     // 0x0000: MAC address is valid else: MAC address is invalid
} ETHMAC_LOCAL_MAC_ADDRESS_HI_BIT_T;

typedef union {
	unsigned int                      val;
	ETHMAC_LOCAL_MAC_ADDRESS_HI_BIT_T bf;
} ETHMAC_LOCAL_MAC_ADDRESS_HI_T;

// ---------------------------------------------------------------------
// Register ETHMAC_FRAMES_TRANSMITTED_OK
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_FRAMES_TRANSMITTED_OK        0x00001570U

#define MSK_ETHMAC_FRAMES_TRANSMITTED_OK_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_FRAMES_TRANSMITTED_OK_CNT 0

enum {
	BFW_ETHMAC_FRAMES_TRANSMITTED_OK_CNT = 32  // [31:0]
};

typedef struct ETHMAC_FRAMES_TRANSMITTED_OK_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAMES_TRANSMITTED_OK_CNT; // count of frames that are successfully transmitted
} ETHMAC_FRAMES_TRANSMITTED_OK_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_FRAMES_TRANSMITTED_OK_BIT_T bf;
} ETHMAC_FRAMES_TRANSMITTED_OK_T;

// ---------------------------------------------------------------------
// Register ETHMAC_SINGLE_COLLISION_FRAMES
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_SINGLE_COLLISION_FRAMES        0x00001574U

#define MSK_ETHMAC_SINGLE_COLLISION_FRAMES_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_SINGLE_COLLISION_FRAMES_CNT 0

enum {
	BFW_ETHMAC_SINGLE_COLLISION_FRAMES_CNT = 32  // [31:0]
};

typedef struct ETHMAC_SINGLE_COLLISION_FRAMES_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_SINGLE_COLLISION_FRAMES_CNT; // count of frames that are involved into a single collision
} ETHMAC_SINGLE_COLLISION_FRAMES_BIT_T;

typedef union {
	unsigned int                         val;
	ETHMAC_SINGLE_COLLISION_FRAMES_BIT_T bf;
} ETHMAC_SINGLE_COLLISION_FRAMES_T;

// ---------------------------------------------------------------------
// Register ETHMAC_MULTIPLE_COLLISION_FRAMES
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_MULTIPLE_COLLISION_FRAMES        0x00001578U

#define MSK_ETHMAC_MULTIPLE_COLLISION_FRAMES_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_MULTIPLE_COLLISION_FRAMES_CNT 0

enum {
	BFW_ETHMAC_MULTIPLE_COLLISION_FRAMES_CNT = 32  // [31:0]
};

typedef struct ETHMAC_MULTIPLE_COLLISION_FRAMES_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_MULTIPLE_COLLISION_FRAMES_CNT; // count of frames that are involved into more that one collisions
} ETHMAC_MULTIPLE_COLLISION_FRAMES_BIT_T;

typedef union {
	unsigned int                           val;
	ETHMAC_MULTIPLE_COLLISION_FRAMES_BIT_T bf;
} ETHMAC_MULTIPLE_COLLISION_FRAMES_T;

// ---------------------------------------------------------------------
// Register ETHMAC_LATE_COLLISIONS
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_LATE_COLLISIONS        0x0000157CU

#define MSK_ETHMAC_LATE_COLLISIONS_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_LATE_COLLISIONS_CNT 0

enum {
	BFW_ETHMAC_LATE_COLLISIONS_CNT = 32  // [31:0]
};

typedef struct ETHMAC_LATE_COLLISIONS_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_LATE_COLLISIONS_CNT; // count of the times that a collision has been detected later than 512 bit times into the transmitted packet
} ETHMAC_LATE_COLLISIONS_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_LATE_COLLISIONS_BIT_T bf;
} ETHMAC_LATE_COLLISIONS_T;

// ---------------------------------------------------------------------
// Register ETHMAC_LINK_DOWN_DURING_TRANSMISSION
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_LINK_DOWN_DURING_TRANSMISSION        0x00001580U

#define MSK_ETHMAC_LINK_DOWN_DURING_TRANSMISSION_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_LINK_DOWN_DURING_TRANSMISSION_CNT 0

enum {
	BFW_ETHMAC_LINK_DOWN_DURING_TRANSMISSION_CNT = 32  // [31:0]
};

typedef struct ETHMAC_LINK_DOWN_DURING_TRANSMISSION_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_LINK_DOWN_DURING_TRANSMISSION_CNT; // count of the times that a frame was transmitted during link down
} ETHMAC_LINK_DOWN_DURING_TRANSMISSION_BIT_T;

typedef union {
	unsigned int                               val;
	ETHMAC_LINK_DOWN_DURING_TRANSMISSION_BIT_T bf;
} ETHMAC_LINK_DOWN_DURING_TRANSMISSION_T;

// ---------------------------------------------------------------------
// Register ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION        0x00001584U

#define MSK_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_CNT 0

enum {
	BFW_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_CNT = 32  // [31:0]
};

typedef struct ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_CNT; // utx fifo underflow at transmission time
} ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_BIT_T;

typedef union {
	unsigned int                                   val;
	ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_BIT_T bf;
} ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_T;

// ---------------------------------------------------------------------
// Register ETHMAC_FRAMES_RECEIVED_OK
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_FRAMES_RECEIVED_OK        0x00001588U

#define MSK_ETHMAC_FRAMES_RECEIVED_OK_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_FRAMES_RECEIVED_OK_CNT 0

enum {
	BFW_ETHMAC_FRAMES_RECEIVED_OK_CNT = 32  // [31:0]
};

typedef struct ETHMAC_FRAMES_RECEIVED_OK_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAMES_RECEIVED_OK_CNT; // count of frames that are successfully received
} ETHMAC_FRAMES_RECEIVED_OK_BIT_T;

typedef union {
	unsigned int                    val;
	ETHMAC_FRAMES_RECEIVED_OK_BIT_T bf;
} ETHMAC_FRAMES_RECEIVED_OK_T;

// ---------------------------------------------------------------------
// Register ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS        0x0000158CU

#define MSK_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_CNT 0

enum {
	BFW_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_CNT = 32  // [31:0]
};

typedef struct ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_CNT; // count of frames that are an integral number of octets in length and do not pass the FCS check
} ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_BIT_T;

typedef union {
	unsigned int                             val;
	ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_BIT_T bf;
} ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_T;

// ---------------------------------------------------------------------
// Register ETHMAC_ALIGNMENT_ERRORS
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_ALIGNMENT_ERRORS        0x00001590U

#define MSK_ETHMAC_ALIGNMENT_ERRORS_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_ALIGNMENT_ERRORS_CNT 0

enum {
	BFW_ETHMAC_ALIGNMENT_ERRORS_CNT = 32  // [31:0]
};

typedef struct ETHMAC_ALIGNMENT_ERRORS_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_ALIGNMENT_ERRORS_CNT; // count of frames that are not an integral number of octets in length and do not pass the FCS check
} ETHMAC_ALIGNMENT_ERRORS_BIT_T;

typedef union {
	unsigned int                  val;
	ETHMAC_ALIGNMENT_ERRORS_BIT_T bf;
} ETHMAC_ALIGNMENT_ERRORS_T;

// ---------------------------------------------------------------------
// Register ETHMAC_FRAME_TOO_LONG_ERRORS
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_FRAME_TOO_LONG_ERRORS        0x00001594U

#define MSK_ETHMAC_FRAME_TOO_LONG_ERRORS_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_FRAME_TOO_LONG_ERRORS_CNT 0

enum {
	BFW_ETHMAC_FRAME_TOO_LONG_ERRORS_CNT = 32  // [31:0]
};

typedef struct ETHMAC_FRAME_TOO_LONG_ERRORS_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAME_TOO_LONG_ERRORS_CNT; // count of frames that are received and exceed the maximum permitted frame size
} ETHMAC_FRAME_TOO_LONG_ERRORS_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_FRAME_TOO_LONG_ERRORS_BIT_T bf;
} ETHMAC_FRAME_TOO_LONG_ERRORS_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RUNT_FRAMES_RECEIVED
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RUNT_FRAMES_RECEIVED        0x00001598U

#define MSK_ETHMAC_RUNT_FRAMES_RECEIVED_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_RUNT_FRAMES_RECEIVED_CNT 0

enum {
	BFW_ETHMAC_RUNT_FRAMES_RECEIVED_CNT = 32  // [31:0]
};

typedef struct ETHMAC_RUNT_FRAMES_RECEIVED_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_RUNT_FRAMES_RECEIVED_CNT; // count of frames that have a length between 42..63 bytes and a valid CRC
} ETHMAC_RUNT_FRAMES_RECEIVED_BIT_T;

typedef union {
	unsigned int                      val;
	ETHMAC_RUNT_FRAMES_RECEIVED_BIT_T bf;
} ETHMAC_RUNT_FRAMES_RECEIVED_T;

// ---------------------------------------------------------------------
// Register ETHMAC_COLLISION_FRAGMENTS_RECEIVED
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_COLLISION_FRAGMENTS_RECEIVED        0x0000159CU

#define MSK_ETHMAC_COLLISION_FRAGMENTS_RECEIVED_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_COLLISION_FRAGMENTS_RECEIVED_CNT 0

enum {
	BFW_ETHMAC_COLLISION_FRAGMENTS_RECEIVED_CNT = 32  // [31:0]
};

typedef struct ETHMAC_COLLISION_FRAGMENTS_RECEIVED_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_COLLISION_FRAGMENTS_RECEIVED_CNT; // count of frames that are smaller that 64 bytes and have a invalid CRC
} ETHMAC_COLLISION_FRAGMENTS_RECEIVED_BIT_T;

typedef union {
	unsigned int                              val;
	ETHMAC_COLLISION_FRAGMENTS_RECEIVED_BIT_T bf;
} ETHMAC_COLLISION_FRAGMENTS_RECEIVED_T;

// ---------------------------------------------------------------------
// Register ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE        0x000015A0U

#define MSK_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_CNT 0

enum {
	BFW_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_CNT = 32  // [31:0]
};

typedef struct ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_CNT; // no empty pointer available at indication time
} ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_BIT_T;

typedef union {
	unsigned int                                 val;
	ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_BIT_T bf;
} ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_T;

// ---------------------------------------------------------------------
// Register ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW        0x000015A4U

#define MSK_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_CNT 0xffffffffU // [31:0]
#define SRT_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_CNT 0

enum {
	BFW_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_CNT = 32  // [31:0]
};

typedef struct ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_CNT; // urx fifo overflow at indication time
} ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_BIT_T;

typedef union {
	unsigned int                                 val;
	ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_BIT_T bf;
} ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_T;

// ---------------------------------------------------------------------
// Register ETHMAC_MACID
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_MACID        0x000015A8U

#define MSK_ETHMAC_MACID_NUMBER 0xffffffffU // [31:0]
#define SRT_ETHMAC_MACID_NUMBER 0

enum {
	BFW_ETHMAC_MACID_NUMBER = 32  // [31:0]
};

typedef struct ETHMAC_MACID_BIT_Ttag {
	unsigned int NUMBER : BFW_ETHMAC_MACID_NUMBER; // MAC Identification number
} ETHMAC_MACID_BIT_T;

typedef union {
	unsigned int       val;
	ETHMAC_MACID_BIT_T bf;
} ETHMAC_MACID_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RESOURCE_TYPE_ID
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RESOURCE_TYPE_ID        0x000015ACU

#define MSK_ETHMAC_RESOURCE_TYPE_ID_NAME 0xffffffffU // [31:0]
#define SRT_ETHMAC_RESOURCE_TYPE_ID_NAME 0

enum {
	BFW_ETHMAC_RESOURCE_TYPE_ID_NAME = 32  // [31:0]
};

typedef struct ETHMAC_RESOURCE_TYPE_ID_BIT_Ttag {
	unsigned int NAME : BFW_ETHMAC_RESOURCE_TYPE_ID_NAME; // Recource type id name
} ETHMAC_RESOURCE_TYPE_ID_BIT_T;

typedef union {
	unsigned int                  val;
	ETHMAC_RESOURCE_TYPE_ID_BIT_T bf;
} ETHMAC_RESOURCE_TYPE_ID_T;

// ---------------------------------------------------------------------
// Register ETHMAC_RESOURCE_INFO
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_RESOURCE_INFO        0x000015B0U

#define MSK_ETHMAC_RESOURCE_INFO_NAME 0xffffffffU // [31:0]
#define SRT_ETHMAC_RESOURCE_INFO_NAME 0

enum {
	BFW_ETHMAC_RESOURCE_INFO_NAME = 32  // [31:0]
};

typedef struct ETHMAC_RESOURCE_INFO_BIT_Ttag {
	unsigned int NAME : BFW_ETHMAC_RESOURCE_INFO_NAME; // Recource info
} ETHMAC_RESOURCE_INFO_BIT_T;

typedef union {
	unsigned int               val;
	ETHMAC_RESOURCE_INFO_BIT_T bf;
} ETHMAC_RESOURCE_INFO_T;

// ---------------------------------------------------------------------
// Register ETHMAC_PHY_LEDS
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_PHY_LEDS        0x000015B4U

#define MSK_ETHMAC_PHY_LEDS_LINK_UP     0x00000001U // [0]
#define SRT_ETHMAC_PHY_LEDS_LINK_UP     0
#define MSK_ETHMAC_PHY_LEDS_ACTIVITY    0x00000002U // [1]
#define SRT_ETHMAC_PHY_LEDS_ACTIVITY    1
#define MSK_ETHMAC_PHY_LEDS_SPEED_100   0x00000004U // [2]
#define SRT_ETHMAC_PHY_LEDS_SPEED_100   2
#define MSK_ETHMAC_PHY_LEDS_DUPLEX_FULL 0x00000008U // [3]
#define SRT_ETHMAC_PHY_LEDS_DUPLEX_FULL 3
#define MSK_ETHMAC_PHY_LEDS_RES         0xfffffff0U // [31:4]
#define SRT_ETHMAC_PHY_LEDS_RES         4

enum {
	BFW_ETHMAC_PHY_LEDS_LINK_UP     = 1,  // [0]
	BFW_ETHMAC_PHY_LEDS_ACTIVITY    = 1,  // [1]
	BFW_ETHMAC_PHY_LEDS_SPEED_100   = 1,  // [2]
	BFW_ETHMAC_PHY_LEDS_DUPLEX_FULL = 1,  // [3]
	BFW_ETHMAC_PHY_LEDS_RES         = 28  // [31:4]
};

typedef struct ETHMAC_PHY_LEDS_BIT_Ttag {
	unsigned int LINK_UP     : BFW_ETHMAC_PHY_LEDS_LINK_UP;     // 1: link up, 0: link down
	unsigned int ACTIVITY    : BFW_ETHMAC_PHY_LEDS_ACTIVITY;    // 1: activity , 0: no activity
	unsigned int SPEED_100   : BFW_ETHMAC_PHY_LEDS_SPEED_100;   // 1: speed 100 MBit, 0: speed 10 MBit
	unsigned int DUPLEX_FULL : BFW_ETHMAC_PHY_LEDS_DUPLEX_FULL; // 1: full duplex, 0: half duplex
	unsigned int RES         : BFW_ETHMAC_PHY_LEDS_RES;         // res
} ETHMAC_PHY_LEDS_BIT_T;

typedef union {
	unsigned int          val;
	ETHMAC_PHY_LEDS_BIT_T bf;
} ETHMAC_PHY_LEDS_T;

// ---------------------------------------------------------------------
// Register ETHMAC_SYSTIME_BORDER_COPY
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_SYSTIME_BORDER_COPY        0x000015B8U

#define MSK_ETHMAC_SYSTIME_BORDER_COPY_VAL 0xffffffffU // [31:0]
#define SRT_ETHMAC_SYSTIME_BORDER_COPY_VAL 0

enum {
	BFW_ETHMAC_SYSTIME_BORDER_COPY_VAL = 32  // [31:0]
};

typedef struct ETHMAC_SYSTIME_BORDER_COPY_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_SYSTIME_BORDER_COPY_VAL; // wrap-around value of systime_ns, systime_s++
} ETHMAC_SYSTIME_BORDER_COPY_BIT_T;

typedef union {
	unsigned int                     val;
	ETHMAC_SYSTIME_BORDER_COPY_BIT_T bf;
} ETHMAC_SYSTIME_BORDER_COPY_T;

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_MULTICAST_HASH_TABLE
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_MULTICAST_HASH_TABLE        0x000015E0U

// ---------------------------------------------------------------------
// Register AREA_ETHMAC_RESERVED
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_AREA_ETHMAC_RESERVED        0x00001600U

// ---------------------------------------------------------------------
// Register ETHMAC_XPEC2ARM_INTERRUPTS
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_XPEC2ARM_INTERRUPTS        0x00001600U

#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_IND_HI               0x00000001U // [0]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_IND_HI               0
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_IND_LO               0x00000002U // [1]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_IND_LO               1
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_CON_HI               0x00000004U // [2]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_CON_HI               2
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_CON_LO               0x00000008U // [3]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_CON_LO               3
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_LINK_STA_CHANGED_IRQ 0x00000010U // [4]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_LINK_STA_CHANGED_IRQ 4
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_COL                  0x00000020U // [5]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_COL                  5
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_EARLY_RCV            0x00000040U // [6]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_EARLY_RCV            6
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_RX_ERR               0x00000080U // [7]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_RX_ERR               7
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_RES1                 0x0000ff00U // [15:8]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_RES1                 8
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_RES2                 0xffff0000U // [31:16]
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_RES2                 16

enum {
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_IND_HI               = 1,  // [0]
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_IND_LO               = 1,  // [1]
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_CON_HI               = 1,  // [2]
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_CON_LO               = 1,  // [3]
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_LINK_STA_CHANGED_IRQ = 1,  // [4]
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_COL                  = 1,  // [5]
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_EARLY_RCV            = 1,  // [6]
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RX_ERR               = 1,  // [7]
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RES1                 = 8,  // [15:8]
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RES2                 = 16  // [31:16]
};

typedef struct ETHMAC_XPEC2ARM_INTERRUPTS_BIT_Ttag {
	unsigned int IND_HI               : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_IND_HI;               // 1: indication high interrupt
	unsigned int IND_LO               : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_IND_LO;               // 1: indication low interrupt
	unsigned int CON_HI               : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_CON_HI;               // 1: confirmation high interrupt
	unsigned int CON_LO               : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_CON_LO;               // 1: confirmation low interrupt
	unsigned int LINK_STA_CHANGED_IRQ : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_LINK_STA_CHANGED_IRQ; // 1: link status changed interrupt
	unsigned int COL                  : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_COL;                  // 1: collision interrupt
	unsigned int EARLY_RCV            : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_EARLY_RCV;            // 1: destination address received and empty_ptr_got and !frame_filtered_out interrupt
	unsigned int RX_ERR               : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RX_ERR;               // 1: rx_error interrupt (ARM must check management counters for error type)
	unsigned int RES1                 : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RES1;                 // reserved
	unsigned int RES2                 : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RES2;                 // not usable
} ETHMAC_XPEC2ARM_INTERRUPTS_BIT_T;

typedef union {
	unsigned int                     val;
	ETHMAC_XPEC2ARM_INTERRUPTS_BIT_T bf;
} ETHMAC_XPEC2ARM_INTERRUPTS_T;

// ---------------------------------------------------------------------
// Register ETHMAC_FIFO_ELEMENT
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_FIFO_ELEMENT        0x00001604U

#define MSK_ETHMAC_FIFO_ELEMENT_FRAME_LEN           0x000007ffU // [10:0]
#define SRT_ETHMAC_FIFO_ELEMENT_FRAME_LEN           0
#define MSK_ETHMAC_FIFO_ELEMENT_TIME_TRIGGERED      0x00000800U // [11]
#define SRT_ETHMAC_FIFO_ELEMENT_TIME_TRIGGERED      11
#define MSK_ETHMAC_FIFO_ELEMENT_MULTI_REQ           0x00003000U // [13:12]
#define SRT_ETHMAC_FIFO_ELEMENT_MULTI_REQ           12
#define MSK_ETHMAC_FIFO_ELEMENT_ORIGIN              0x00004000U // [14]
#define SRT_ETHMAC_FIFO_ELEMENT_ORIGIN              14
#define MSK_ETHMAC_FIFO_ELEMENT_RES1                0x00008000U // [15]
#define SRT_ETHMAC_FIFO_ELEMENT_RES1                15
#define MSK_ETHMAC_FIFO_ELEMENT_FRAME_BUF_NUM       0x003f0000U // [21:16]
#define SRT_ETHMAC_FIFO_ELEMENT_FRAME_BUF_NUM       16
#define MSK_ETHMAC_FIFO_ELEMENT_INT_RAM_SEGMENT_NUM 0x03c00000U // [25:22]
#define SRT_ETHMAC_FIFO_ELEMENT_INT_RAM_SEGMENT_NUM 22
#define MSK_ETHMAC_FIFO_ELEMENT_RES2                0x0c000000U // [27:26]
#define SRT_ETHMAC_FIFO_ELEMENT_RES2                26
#define MSK_ETHMAC_FIFO_ELEMENT_ERROR_CODE          0xf0000000U // [31:28]
#define SRT_ETHMAC_FIFO_ELEMENT_ERROR_CODE          28

enum {
	BFW_ETHMAC_FIFO_ELEMENT_FRAME_LEN           = 11, // [10:0]
	BFW_ETHMAC_FIFO_ELEMENT_TIME_TRIGGERED      = 1,  // [11]
	BFW_ETHMAC_FIFO_ELEMENT_MULTI_REQ           = 2,  // [13:12]
	BFW_ETHMAC_FIFO_ELEMENT_ORIGIN              = 1,  // [14]
	BFW_ETHMAC_FIFO_ELEMENT_RES1                = 1,  // [15]
	BFW_ETHMAC_FIFO_ELEMENT_FRAME_BUF_NUM       = 6,  // [21:16]
	BFW_ETHMAC_FIFO_ELEMENT_INT_RAM_SEGMENT_NUM = 4,  // [25:22]
	BFW_ETHMAC_FIFO_ELEMENT_RES2                = 2,  // [27:26]
	BFW_ETHMAC_FIFO_ELEMENT_ERROR_CODE          = 4   // [31:28]
};

typedef struct ETHMAC_FIFO_ELEMENT_BIT_Ttag {
	unsigned int FRAME_LEN           : BFW_ETHMAC_FIFO_ELEMENT_FRAME_LEN;           // frame length
	unsigned int TIME_TRIGGERED      : BFW_ETHMAC_FIFO_ELEMENT_TIME_TRIGGERED;      // 1: frame is to send at a requests system time 0: frame is to send asap
	unsigned int MULTI_REQ           : BFW_ETHMAC_FIFO_ELEMENT_MULTI_REQ;           // 1/0: frame is a multi/single request
	unsigned int ORIGIN              : BFW_ETHMAC_FIFO_ELEMENT_ORIGIN;              // 1/0: frame comes from xc/arm port
	unsigned int RES1                : BFW_ETHMAC_FIFO_ELEMENT_RES1;                // reserved
	unsigned int FRAME_BUF_NUM       : BFW_ETHMAC_FIFO_ELEMENT_FRAME_BUF_NUM;       // frame buffer number
	unsigned int INT_RAM_SEGMENT_NUM : BFW_ETHMAC_FIFO_ELEMENT_INT_RAM_SEGMENT_NUM; // internal Ram segment number
	unsigned int RES2                : BFW_ETHMAC_FIFO_ELEMENT_RES2;                // reserved
	unsigned int ERROR_CODE          : BFW_ETHMAC_FIFO_ELEMENT_ERROR_CODE;          // error code
} ETHMAC_FIFO_ELEMENT_BIT_T;

typedef union {
	unsigned int              val;
	ETHMAC_FIFO_ELEMENT_BIT_T bf;
} ETHMAC_FIFO_ELEMENT_T;

// ---------------------------------------------------------------------
// Register ETHMAC_HELP
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_HELP        0x00001608U

#define MSK_ETHMAC_HELP_RX_BUF_ACTIVE               0x00000001U // [0]
#define SRT_ETHMAC_HELP_RX_BUF_ACTIVE               0
#define MSK_ETHMAC_HELP_RX_ACTUAL_IND_FIFO_PRIO     0x00000002U // [1]
#define SRT_ETHMAC_HELP_RX_ACTUAL_IND_FIFO_PRIO     1
#define MSK_ETHMAC_HELP_RX_DROP_FRAME               0x00000004U // [2]
#define SRT_ETHMAC_HELP_RX_DROP_FRAME               2
#define MSK_ETHMAC_HELP_RES1                        0x00000008U // [3]
#define SRT_ETHMAC_HELP_RES1                        3
#define MSK_ETHMAC_HELP_RX_FRWD_FRAME_TO_LOCAL_PORT 0x00000010U // [4]
#define SRT_ETHMAC_HELP_RX_FRWD_FRAME_TO_LOCAL_PORT 4
#define MSK_ETHMAC_HELP_RES2                        0x000000e0U // [7:5]
#define SRT_ETHMAC_HELP_RES2                        5
#define MSK_ETHMAC_HELP_RX_DST_UNICAST              0x00000100U // [8]
#define SRT_ETHMAC_HELP_RX_DST_UNICAST              8
#define MSK_ETHMAC_HELP_RX_DST_MULTICAST            0x00000200U // [9]
#define SRT_ETHMAC_HELP_RX_DST_MULTICAST            9
#define MSK_ETHMAC_HELP_RX_DST_BROADCAST            0x00000400U // [10]
#define SRT_ETHMAC_HELP_RX_DST_BROADCAST            10
#define MSK_ETHMAC_HELP_RES3                        0x00000800U // [11]
#define SRT_ETHMAC_HELP_RES3                        11
#define MSK_ETHMAC_HELP_RX_SRC_UNICAST              0x00001000U // [12]
#define SRT_ETHMAC_HELP_RX_SRC_UNICAST              12
#define MSK_ETHMAC_HELP_RX_SRC_MULTICAST            0x00002000U // [13]
#define SRT_ETHMAC_HELP_RX_SRC_MULTICAST            13
#define MSK_ETHMAC_HELP_RX_SRC_BROADCAST            0x00004000U // [14]
#define SRT_ETHMAC_HELP_RX_SRC_BROADCAST            14
#define MSK_ETHMAC_HELP_RES4                        0x00008000U // [15]
#define SRT_ETHMAC_HELP_RES4                        15
#define MSK_ETHMAC_HELP_TX_BUF_TRANSFERS_TO_UTX     0x00010000U // [16]
#define SRT_ETHMAC_HELP_TX_BUF_TRANSFERS_TO_UTX     16
#define MSK_ETHMAC_HELP_TX_BUF_FILLED_VIA_DMA       0x00020000U // [17]
#define SRT_ETHMAC_HELP_TX_BUF_FILLED_VIA_DMA       17
#define MSK_ETHMAC_HELP_TX_LAST                     0x00040000U // [18]
#define SRT_ETHMAC_HELP_TX_LAST                     18
#define MSK_ETHMAC_HELP_TX_ACTUAL_REQ_FIFO_PRIO     0x00080000U // [19]
#define SRT_ETHMAC_HELP_TX_ACTUAL_REQ_FIFO_PRIO     19
#define MSK_ETHMAC_HELP_RES5                        0xfff00000U // [31:20]
#define SRT_ETHMAC_HELP_RES5                        20

enum {
	BFW_ETHMAC_HELP_RX_BUF_ACTIVE               = 1,  // [0]
	BFW_ETHMAC_HELP_RX_ACTUAL_IND_FIFO_PRIO     = 1,  // [1]
	BFW_ETHMAC_HELP_RX_DROP_FRAME               = 1,  // [2]
	BFW_ETHMAC_HELP_RES1                        = 1,  // [3]
	BFW_ETHMAC_HELP_RX_FRWD_FRAME_TO_LOCAL_PORT = 1,  // [4]
	BFW_ETHMAC_HELP_RES2                        = 3,  // [7:5]
	BFW_ETHMAC_HELP_RX_DST_UNICAST              = 1,  // [8]
	BFW_ETHMAC_HELP_RX_DST_MULTICAST            = 1,  // [9]
	BFW_ETHMAC_HELP_RX_DST_BROADCAST            = 1,  // [10]
	BFW_ETHMAC_HELP_RES3                        = 1,  // [11]
	BFW_ETHMAC_HELP_RX_SRC_UNICAST              = 1,  // [12]
	BFW_ETHMAC_HELP_RX_SRC_MULTICAST            = 1,  // [13]
	BFW_ETHMAC_HELP_RX_SRC_BROADCAST            = 1,  // [14]
	BFW_ETHMAC_HELP_RES4                        = 1,  // [15]
	BFW_ETHMAC_HELP_TX_BUF_TRANSFERS_TO_UTX     = 1,  // [16]
	BFW_ETHMAC_HELP_TX_BUF_FILLED_VIA_DMA       = 1,  // [17]
	BFW_ETHMAC_HELP_TX_LAST                     = 1,  // [18]
	BFW_ETHMAC_HELP_TX_ACTUAL_REQ_FIFO_PRIO     = 1,  // [19]
	BFW_ETHMAC_HELP_RES5                        = 12  // [31:20]
};

typedef struct ETHMAC_HELP_BIT_Ttag {
	unsigned int RX_BUF_ACTIVE               : BFW_ETHMAC_HELP_RX_BUF_ACTIVE;               // 1/0: receive buffer 1/0 is active
	unsigned int RX_ACTUAL_IND_FIFO_PRIO     : BFW_ETHMAC_HELP_RX_ACTUAL_IND_FIFO_PRIO;     // 1/0: received frame is in traffic class hi/Lo
	unsigned int RX_DROP_FRAME               : BFW_ETHMAC_HELP_RX_DROP_FRAME;               // 1/0: received frame shall be dropped/not dropped
	unsigned int RES1                        : BFW_ETHMAC_HELP_RES1;                        // res
	unsigned int RX_FRWD_FRAME_TO_LOCAL_PORT : BFW_ETHMAC_HELP_RX_FRWD_FRAME_TO_LOCAL_PORT; // 1: frame shall be forwarded to local port
	unsigned int RES2                        : BFW_ETHMAC_HELP_RES2;                        // res
	unsigned int RX_DST_UNICAST              : BFW_ETHMAC_HELP_RX_DST_UNICAST;              // 1: destination address is unicast
	unsigned int RX_DST_MULTICAST            : BFW_ETHMAC_HELP_RX_DST_MULTICAST;            // 1: destination address is multicast
	unsigned int RX_DST_BROADCAST            : BFW_ETHMAC_HELP_RX_DST_BROADCAST;            // 1: destination address is broadcast
	unsigned int RES3                        : BFW_ETHMAC_HELP_RES3;                        // res
	unsigned int RX_SRC_UNICAST              : BFW_ETHMAC_HELP_RX_SRC_UNICAST;              // 1: source address is unicast
	unsigned int RX_SRC_MULTICAST            : BFW_ETHMAC_HELP_RX_SRC_MULTICAST;            // 1: source address is multicast
	unsigned int RX_SRC_BROADCAST            : BFW_ETHMAC_HELP_RX_SRC_BROADCAST;            // 1: source address is broadcast
	unsigned int RES4                        : BFW_ETHMAC_HELP_RES4;                        // res
	unsigned int TX_BUF_TRANSFERS_TO_UTX     : BFW_ETHMAC_HELP_TX_BUF_TRANSFERS_TO_UTX;     // 1/0: transmit buffer 1/0 transfers to utx
	unsigned int TX_BUF_FILLED_VIA_DMA       : BFW_ETHMAC_HELP_TX_BUF_FILLED_VIA_DMA;       // 1/0: buffer 1/0 is filled via dma
	unsigned int TX_LAST                     : BFW_ETHMAC_HELP_TX_LAST;                     // 1/0: transmission to buffers is done/not done
	unsigned int TX_ACTUAL_REQ_FIFO_PRIO     : BFW_ETHMAC_HELP_TX_ACTUAL_REQ_FIFO_PRIO;     // 1/0: actual request frame is in traffic class hi/Lo
	unsigned int RES5                        : BFW_ETHMAC_HELP_RES5;                        // res
} ETHMAC_HELP_BIT_T;

typedef union {
	unsigned int      val;
	ETHMAC_HELP_BIT_T bf;
} ETHMAC_HELP_T;

// ---------------------------------------------------------------------
// Register ETHMAC_SR_CONFIG
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_SR_CONFIG        0x0000160CU

#define MSK_ETHMAC_SR_CONFIG_RES1                    0x000000ffU // [7:0]
#define SRT_ETHMAC_SR_CONFIG_RES1                    0
#define MSK_ETHMAC_SR_CONFIG_ERROR_CODE              0x00000f00U // [11:8]
#define SRT_ETHMAC_SR_CONFIG_ERROR_CODE              8
#define MSK_ETHMAC_SR_CONFIG_RES2                    0x00001000U // [12]
#define SRT_ETHMAC_SR_CONFIG_RES2                    12
#define MSK_ETHMAC_SR_CONFIG_REAL_SENDING_TIME_VALID 0x00002000U // [13]
#define SRT_ETHMAC_SR_CONFIG_REAL_SENDING_TIME_VALID 13
#define MSK_ETHMAC_SR_CONFIG_SYSTIME_MODE            0x00004000U // [14]
#define SRT_ETHMAC_SR_CONFIG_SYSTIME_MODE            14
#define MSK_ETHMAC_SR_CONFIG_START_TRANSMIT          0x00008000U // [15]
#define SRT_ETHMAC_SR_CONFIG_START_TRANSMIT          15
#define MSK_ETHMAC_SR_CONFIG_RES3                    0xffff0000U // [31:16]
#define SRT_ETHMAC_SR_CONFIG_RES3                    16

enum {
	BFW_ETHMAC_SR_CONFIG_RES1                    = 8,  // [7:0]
	BFW_ETHMAC_SR_CONFIG_ERROR_CODE              = 4,  // [11:8]
	BFW_ETHMAC_SR_CONFIG_RES2                    = 1,  // [12]
	BFW_ETHMAC_SR_CONFIG_REAL_SENDING_TIME_VALID = 1,  // [13]
	BFW_ETHMAC_SR_CONFIG_SYSTIME_MODE            = 1,  // [14]
	BFW_ETHMAC_SR_CONFIG_START_TRANSMIT          = 1,  // [15]
	BFW_ETHMAC_SR_CONFIG_RES3                    = 16  // [31:16]
};

typedef struct ETHMAC_SR_CONFIG_BIT_Ttag {
	unsigned int RES1                    : BFW_ETHMAC_SR_CONFIG_RES1;                    // res
	unsigned int ERROR_CODE              : BFW_ETHMAC_SR_CONFIG_ERROR_CODE;              // error code at transmission
	unsigned int RES2                    : BFW_ETHMAC_SR_CONFIG_RES2;                    // res
	unsigned int REAL_SENDING_TIME_VALID : BFW_ETHMAC_SR_CONFIG_REAL_SENDING_TIME_VALID; // 1: real transmit timestamp is valid
	unsigned int SYSTIME_MODE            : BFW_ETHMAC_SR_CONFIG_SYSTIME_MODE;            // 1/0: wait for systime/ipg before start transmission
	unsigned int START_TRANSMIT          : BFW_ETHMAC_SR_CONFIG_START_TRANSMIT;          // 0->1: start transmit, 1: transmit in progress
	unsigned int RES3                    : BFW_ETHMAC_SR_CONFIG_RES3;                    // unusable
} ETHMAC_SR_CONFIG_BIT_T;

typedef union {
	unsigned int           val;
	ETHMAC_SR_CONFIG_BIT_T bf;
} ETHMAC_SR_CONFIG_T;

// ---------------------------------------------------------------------
// Register ETHMAC_SR_STATUS
// => 
// => Mode: 
// ---------------------------------------------------------------------

#define REL_Adr_ETHMAC_SR_STATUS        0x00001610U

#define MSK_ETHMAC_SR_STATUS_RES1       0x000000ffU // [7:0]
#define SRT_ETHMAC_SR_STATUS_RES1       0
#define MSK_ETHMAC_SR_STATUS_ERROR_CODE 0x00000f00U // [11:8]
#define SRT_ETHMAC_SR_STATUS_ERROR_CODE 8
#define MSK_ETHMAC_SR_STATUS_RES2       0x00007000U // [14:12]
#define SRT_ETHMAC_SR_STATUS_RES2       12
#define MSK_ETHMAC_SR_STATUS_FRAME_FIN  0x00008000U // [15]
#define SRT_ETHMAC_SR_STATUS_FRAME_FIN  15
#define MSK_ETHMAC_SR_STATUS_RES3       0xffff0000U // [31:16]
#define SRT_ETHMAC_SR_STATUS_RES3       16

enum {
	BFW_ETHMAC_SR_STATUS_RES1       = 8,  // [7:0]
	BFW_ETHMAC_SR_STATUS_ERROR_CODE = 4,  // [11:8]
	BFW_ETHMAC_SR_STATUS_RES2       = 3,  // [14:12]
	BFW_ETHMAC_SR_STATUS_FRAME_FIN  = 1,  // [15]
	BFW_ETHMAC_SR_STATUS_RES3       = 16  // [31:16]
};

typedef struct ETHMAC_SR_STATUS_BIT_Ttag {
	unsigned int RES1       : BFW_ETHMAC_SR_STATUS_RES1;       // res
	unsigned int ERROR_CODE : BFW_ETHMAC_SR_STATUS_ERROR_CODE; // error code at reception
	unsigned int RES2       : BFW_ETHMAC_SR_STATUS_RES2;       // res
	unsigned int FRAME_FIN  : BFW_ETHMAC_SR_STATUS_FRAME_FIN;  // reception finished
	unsigned int RES3       : BFW_ETHMAC_SR_STATUS_RES3;       // unusable
} ETHMAC_SR_STATUS_BIT_T;

typedef union {
	unsigned int           val;
	ETHMAC_SR_STATUS_BIT_T bf;
} ETHMAC_SR_STATUS_T;



#endif
