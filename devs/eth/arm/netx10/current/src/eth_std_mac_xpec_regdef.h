/*********************************************************************/
/* from regdef.v by regdef2h auto-generated C-header file            */
/* please see the regdef.html file for detailed register description */
/*********************************************************************/

#ifndef __ethmac_regdef_h
#define __ethmac_regdef_h


/* ===================================================================== */

/* Area of ETHMACBASE */

/* ===================================================================== */


/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_XPEC_PROGRAM */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_XPEC_PROGRAM        0x00000000U

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_TXAREABASE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_TXAREABASE        0x00000004U

/* --------------------------------------------------------------------- */
/* Register ETHMAC_TX_BYTES_LEFT_FOR_UTX */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_TX_BYTES_LEFT_FOR_UTX        0x00000004U

#define MSK_ETHMAC_TX_BYTES_LEFT_FOR_UTX_VAL 0xffffffffU
#define SRT_ETHMAC_TX_BYTES_LEFT_FOR_UTX_VAL 0

enum {
	BFW_ETHMAC_TX_BYTES_LEFT_FOR_UTX_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_TX_BYTES_LEFT_FOR_UTX_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_BYTES_LEFT_FOR_UTX_VAL; /* number of bytes left to transmit to utx fifo */
} ETHMAC_TX_BYTES_LEFT_FOR_UTX_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_TX_BYTES_LEFT_FOR_UTX_BIT_T bf;
} ETHMAC_TX_BYTES_LEFT_FOR_UTX_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_TX_BYTES_LEFT_FOR_DMA */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_TX_BYTES_LEFT_FOR_DMA        0x00000008U

#define MSK_ETHMAC_TX_BYTES_LEFT_FOR_DMA_VAL 0xffffffffU
#define SRT_ETHMAC_TX_BYTES_LEFT_FOR_DMA_VAL 0

enum {
	BFW_ETHMAC_TX_BYTES_LEFT_FOR_DMA_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_TX_BYTES_LEFT_FOR_DMA_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_BYTES_LEFT_FOR_DMA_VAL; /* number of bytes left for DMA */
} ETHMAC_TX_BYTES_LEFT_FOR_DMA_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_TX_BYTES_LEFT_FOR_DMA_BIT_T bf;
} ETHMAC_TX_BYTES_LEFT_FOR_DMA_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_TX_RETRY */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_TX_RETRY        0x0000000CU

#define MSK_ETHMAC_TX_RETRY_CNT 0xffffffffU
#define SRT_ETHMAC_TX_RETRY_CNT 0

enum {
	BFW_ETHMAC_TX_RETRY_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_TX_RETRY_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_TX_RETRY_CNT; /* retry counter for transmission attempts */
} ETHMAC_TX_RETRY_BIT_T;

typedef union {
	unsigned int          val;
	ETHMAC_TX_RETRY_BIT_T bf;
} ETHMAC_TX_RETRY_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_TX_TIMESTAMP_NS */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_TX_TIMESTAMP_NS        0x00000010U

#define MSK_ETHMAC_TX_TIMESTAMP_NS_VAL 0xffffffffU
#define SRT_ETHMAC_TX_TIMESTAMP_NS_VAL 0

enum {
	BFW_ETHMAC_TX_TIMESTAMP_NS_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_TX_TIMESTAMP_NS_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_TIMESTAMP_NS_VAL; /* transmit timestamp ns of outgoing packet */
} ETHMAC_TX_TIMESTAMP_NS_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_TX_TIMESTAMP_NS_BIT_T bf;
} ETHMAC_TX_TIMESTAMP_NS_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_TX_TIMESTAMP_S */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_TX_TIMESTAMP_S        0x00000014U

#define MSK_ETHMAC_TX_TIMESTAMP_S_VAL 0xffffffffU
#define SRT_ETHMAC_TX_TIMESTAMP_S_VAL 0

enum {
	BFW_ETHMAC_TX_TIMESTAMP_S_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_TX_TIMESTAMP_S_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_TX_TIMESTAMP_S_VAL; /* transmit timestamp s of outgoing packet */
} ETHMAC_TX_TIMESTAMP_S_BIT_T;

typedef union {
	unsigned int                val;
	ETHMAC_TX_TIMESTAMP_S_BIT_T bf;
} ETHMAC_TX_TIMESTAMP_S_T;

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_RXAREABASE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_RXAREABASE        0x00000018U

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_DST_MAC_ADDRESS_LO */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_LO        0x00000018U

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  0x00000001U
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  0
#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR 0x00000002U
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR 1
#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_LO_MAC_ADDR_LO                  0xfffffffcU
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_LO_MAC_ADDR_LO                  2

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  = 1,  /* [0] */
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR = 1,  /* [1] */
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_MAC_ADDR_LO                  = 30  /* [31:2] */
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_LO_BIT_Ttag {
	unsigned int INDIVIDUAL_OR_GROUP_ADDRESS  : BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS;  /* individual or group address              */
	unsigned int GLOBALLY_OR_LOCALLY_ADM_ADDR : BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR; /* globally or locally administered address */
	unsigned int MAC_ADDR_LO                  : BFW_ETHMAC_RX_DST_MAC_ADDRESS_LO_MAC_ADDR_LO;                  /* MAC address bits 31..2                   */
} ETHMAC_RX_DST_MAC_ADDRESS_LO_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_RX_DST_MAC_ADDRESS_LO_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_LO_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_DST_MAC_ADDRESS_HI */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_HI        0x0000001CU

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HI_MAC_ADDR_HI 0x0000ffffU
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HI_MAC_ADDR_HI 0
#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HI_RES1        0xffff0000U
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HI_RES1        16

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HI_MAC_ADDR_HI = 16, /* [15:0] */
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HI_RES1        = 16  /* [31:16] */
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_HI_BIT_Ttag {
	unsigned int MAC_ADDR_HI : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HI_MAC_ADDR_HI; /* MAC address bits 47..32 */
	unsigned int RES1        : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HI_RES1;        /* Reserved                */
} ETHMAC_RX_DST_MAC_ADDRESS_HI_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_RX_DST_MAC_ADDRESS_HI_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_HI_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_SRC_MAC_ADDRESS_LO */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_LO        0x00000020U

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  0x00000001U
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  0
#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR 0x00000002U
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR 1
#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_LO_MAC_ADDR_LO                  0xfffffffcU
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_LO_MAC_ADDR_LO                  2

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS  = 1,  /* [0] */
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR = 1,  /* [1] */
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_MAC_ADDR_LO                  = 30  /* [31:2] */
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_LO_BIT_Ttag {
	unsigned int INDIVIDUAL_OR_GROUP_ADDRESS  : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_INDIVIDUAL_OR_GROUP_ADDRESS;  /* individual or group address              */
	unsigned int GLOBALLY_OR_LOCALLY_ADM_ADDR : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_GLOBALLY_OR_LOCALLY_ADM_ADDR; /* globally or locally administered address */
	unsigned int MAC_ADDR_LO                  : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_LO_MAC_ADDR_LO;                  /* MAC address bits 31..2                   */
} ETHMAC_RX_SRC_MAC_ADDRESS_LO_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_RX_SRC_MAC_ADDRESS_LO_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_LO_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_SRC_MAC_ADDRESS_HI */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_HI        0x00000024U

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HI_MAC_ADDR_HI 0x0000ffffU
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HI_MAC_ADDR_HI 0
#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HI_RES1        0xffff0000U
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HI_RES1        16

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HI_MAC_ADDR_HI = 16, /* [15:0] */
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HI_RES1        = 16  /* [31:16] */
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_HI_BIT_Ttag {
	unsigned int MAC_ADDR_HI : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HI_MAC_ADDR_HI; /* MAC address bits 47..32 */
	unsigned int RES1        : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HI_RES1;        /* Reserved                */
} ETHMAC_RX_SRC_MAC_ADDRESS_HI_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_RX_SRC_MAC_ADDRESS_HI_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_HI_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_ETH_TYPE_LEN */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_ETH_TYPE_LEN        0x00000028U

#define MSK_ETHMAC_RX_ETH_TYPE_LEN_VAL  0x0000ffffU
#define SRT_ETHMAC_RX_ETH_TYPE_LEN_VAL  0
#define MSK_ETHMAC_RX_ETH_TYPE_LEN_RES1 0xffff0000U
#define SRT_ETHMAC_RX_ETH_TYPE_LEN_RES1 16

enum {
	BFW_ETHMAC_RX_ETH_TYPE_LEN_VAL  = 16, /* [15:0] */
	BFW_ETHMAC_RX_ETH_TYPE_LEN_RES1 = 16  /* [31:16] */
};

typedef struct ETHMAC_RX_ETH_TYPE_LEN_BIT_Ttag {
	unsigned int VAL  : BFW_ETHMAC_RX_ETH_TYPE_LEN_VAL;  /* received Ethernet type/len field */
	unsigned int RES1 : BFW_ETHMAC_RX_ETH_TYPE_LEN_RES1; /* Reserved                         */
} ETHMAC_RX_ETH_TYPE_LEN_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_RX_ETH_TYPE_LEN_BIT_T bf;
} ETHMAC_RX_ETH_TYPE_LEN_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_TAGGED_FIELD */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_TAGGED_FIELD        0x0000002CU

#define MSK_ETHMAC_RX_TAGGED_FIELD_ETHTYPE_VLAN             0x0000ffffU
#define SRT_ETHMAC_RX_TAGGED_FIELD_ETHTYPE_VLAN             0
#define MSK_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_11_8             0x000f0000U
#define SRT_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_11_8             16
#define MSK_ETHMAC_RX_TAGGED_FIELD_CANONICAL_FORM_INDICATOR 0x00100000U
#define SRT_ETHMAC_RX_TAGGED_FIELD_CANONICAL_FORM_INDICATOR 20
#define MSK_ETHMAC_RX_TAGGED_FIELD_PRIORITY                 0x00e00000U
#define SRT_ETHMAC_RX_TAGGED_FIELD_PRIORITY                 21
#define MSK_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_7_0              0xff000000U
#define SRT_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_7_0              24

enum {
	BFW_ETHMAC_RX_TAGGED_FIELD_ETHTYPE_VLAN             = 16, /* [15:0] */
	BFW_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_11_8             = 4,  /* [19:16] */
	BFW_ETHMAC_RX_TAGGED_FIELD_CANONICAL_FORM_INDICATOR = 1,  /* [20] */
	BFW_ETHMAC_RX_TAGGED_FIELD_PRIORITY                 = 3,  /* [23:21] */
	BFW_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_7_0              = 8   /* [31:24] */
};

typedef struct ETHMAC_RX_TAGGED_FIELD_BIT_Ttag {
	unsigned int ETHTYPE_VLAN             : BFW_ETHMAC_RX_TAGGED_FIELD_ETHTYPE_VLAN;             /* 0x0081: frame is VLAN-tagged and VLAN-Tag is valid */
	unsigned int VLAN_ID_11_8             : BFW_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_11_8;             /* VLAN identifier bits                               */
	unsigned int CANONICAL_FORM_INDICATOR : BFW_ETHMAC_RX_TAGGED_FIELD_CANONICAL_FORM_INDICATOR; /* Canonical form indicator                           */
	unsigned int PRIORITY                 : BFW_ETHMAC_RX_TAGGED_FIELD_PRIORITY;                 /* VLAN priority                                      */
	unsigned int VLAN_ID_7_0              : BFW_ETHMAC_RX_TAGGED_FIELD_VLAN_ID_7_0;              /* VLAN identifier bits                               */
} ETHMAC_RX_TAGGED_FIELD_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_RX_TAGGED_FIELD_BIT_T bf;
} ETHMAC_RX_TAGGED_FIELD_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_WORKING */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_WORKING        0x00000030U

#define MSK_ETHMAC_RX_WORKING_VAL 0xffffffffU
#define SRT_ETHMAC_RX_WORKING_VAL 0

enum {
	BFW_ETHMAC_RX_WORKING_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_WORKING_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_WORKING_VAL; /* receive help working variable */
} ETHMAC_RX_WORKING_BIT_T;

typedef union {
	unsigned int            val;
	ETHMAC_RX_WORKING_BIT_T bf;
} ETHMAC_RX_WORKING_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_TIMESTAMP_NS */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_TIMESTAMP_NS        0x00000034U

#define MSK_ETHMAC_RX_TIMESTAMP_NS_VAL 0xffffffffU
#define SRT_ETHMAC_RX_TIMESTAMP_NS_VAL 0

enum {
	BFW_ETHMAC_RX_TIMESTAMP_NS_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_TIMESTAMP_NS_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_TIMESTAMP_NS_VAL; /* receive timestamp ns of incoming packet */
} ETHMAC_RX_TIMESTAMP_NS_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_RX_TIMESTAMP_NS_BIT_T bf;
} ETHMAC_RX_TIMESTAMP_NS_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_TIMESTAMP_S */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_TIMESTAMP_S        0x00000038U

#define MSK_ETHMAC_RX_TIMESTAMP_S_VAL 0xffffffffU
#define SRT_ETHMAC_RX_TIMESTAMP_S_VAL 0

enum {
	BFW_ETHMAC_RX_TIMESTAMP_S_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_TIMESTAMP_S_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_TIMESTAMP_S_VAL; /* receive timestamp s of incoming packet */
} ETHMAC_RX_TIMESTAMP_S_BIT_T;

typedef union {
	unsigned int                val;
	ETHMAC_RX_TIMESTAMP_S_BIT_T bf;
} ETHMAC_RX_TIMESTAMP_S_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_DST_MAC_ADDRESS_HASH */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_HASH        0x0000003CU

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HASH_VAL 0xffffffffU
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HASH_VAL 0

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_HASH_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_VAL; /* Hash value of destination MAC address */
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_BIT_T;

typedef union {
	unsigned int                         val;
	ETHMAC_RX_DST_MAC_ADDRESS_HASH_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET        0x00000040U

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_ADDR 0xffffffffU
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_ADDR 0

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_ADDR = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_BIT_Ttag {
	unsigned int ADDR : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_ADDR; /* Offset address within hash table */
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_BIT_T;

typedef union {
	unsigned int                                val;
	ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK        0x00000044U

#define MSK_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_ADDR 0xffffffffU
#define SRT_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_ADDR 0

enum {
	BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_ADDR = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_BIT_Ttag {
	unsigned int ADDR : BFW_ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_ADDR; /* Mask for byte within hash table */
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_BIT_T;

typedef union {
	unsigned int                              val;
	ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_BIT_T bf;
} ETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_SRC_MAC_ADDRESS_HASH */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_HASH        0x00000048U

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_VAL 0xffffffffU
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_VAL 0

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_HASH_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_VAL; /* Hash value of source MAC address */
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_BIT_T;

typedef union {
	unsigned int                         val;
	ETHMAC_RX_SRC_MAC_ADDRESS_HASH_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET        0x0000004CU

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_ADDR 0xffffffffU
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_ADDR 0

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_ADDR = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_BIT_Ttag {
	unsigned int ADDR : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_ADDR; /* Offset address within hash table */
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_BIT_T;

typedef union {
	unsigned int                                val;
	ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK        0x00000050U

#define MSK_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_ADDR 0xffffffffU
#define SRT_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_ADDR 0

enum {
	BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_ADDR = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_BIT_Ttag {
	unsigned int ADDR : BFW_ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_ADDR; /* Mask for byte within hash table */
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_BIT_T;

typedef union {
	unsigned int                              val;
	ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_BIT_T bf;
} ETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_DMA0_CFG */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_DMA0_CFG        0x00000054U

#define MSK_ETHMAC_DMA0_CFG_VAL 0xffffffffU
#define SRT_ETHMAC_DMA0_CFG_VAL 0

enum {
	BFW_ETHMAC_DMA0_CFG_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_DMA0_CFG_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_DMA0_CFG_VAL; /* dma enable mask for dma0 rx buf1 -> ARM */
} ETHMAC_DMA0_CFG_BIT_T;

typedef union {
	unsigned int          val;
	ETHMAC_DMA0_CFG_BIT_T bf;
} ETHMAC_DMA0_CFG_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_DMA1_CFG */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_DMA1_CFG        0x00000058U

#define MSK_ETHMAC_DMA1_CFG_VAL 0xffffffffU
#define SRT_ETHMAC_DMA1_CFG_VAL 0

enum {
	BFW_ETHMAC_DMA1_CFG_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_DMA1_CFG_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_DMA1_CFG_VAL; /* dma enable mask for dma1 rx buf2 -> ARM */
} ETHMAC_DMA1_CFG_BIT_T;

typedef union {
	unsigned int          val;
	ETHMAC_DMA1_CFG_BIT_T bf;
} ETHMAC_DMA1_CFG_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_PHY_LEDS_TEMP */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_PHY_LEDS_TEMP        0x0000005CU

#define MSK_ETHMAC_PHY_LEDS_TEMP_VAL 0xffffffffU
#define SRT_ETHMAC_PHY_LEDS_TEMP_VAL 0

enum {
	BFW_ETHMAC_PHY_LEDS_TEMP_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_PHY_LEDS_TEMP_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_PHY_LEDS_TEMP_VAL; /* stores last value of leds for blinking in single LED mode */
} ETHMAC_PHY_LEDS_TEMP_BIT_T;

typedef union {
	unsigned int               val;
	ETHMAC_PHY_LEDS_TEMP_BIT_T bf;
} ETHMAC_PHY_LEDS_TEMP_T;

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_CONFIG_AREA_BASE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_CONFIG_AREA_BASE        0x00000060U

/* --------------------------------------------------------------------- */
/* Register ETHMAC_MONITORING_MODE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_MONITORING_MODE        0x00000060U

#define MSK_ETHMAC_MONITORING_MODE_EN   0x00000001U
#define SRT_ETHMAC_MONITORING_MODE_EN   0
#define MSK_ETHMAC_MONITORING_MODE_RES1 0xfffffffeU
#define SRT_ETHMAC_MONITORING_MODE_RES1 1

enum {
	BFW_ETHMAC_MONITORING_MODE_EN   = 1,  /* [0] */
	BFW_ETHMAC_MONITORING_MODE_RES1 = 31  /* [31:1] */
};

typedef struct ETHMAC_MONITORING_MODE_BIT_Ttag {
	unsigned int EN   : BFW_ETHMAC_MONITORING_MODE_EN;   /* 1: Forwarding of all received ethernet frames to local port */
	unsigned int RES1 : BFW_ETHMAC_MONITORING_MODE_RES1; /* reserved, shall be set to zero                              */
} ETHMAC_MONITORING_MODE_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_MONITORING_MODE_BIT_T bf;
} ETHMAC_MONITORING_MODE_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_LED_CONFIG */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_LED_CONFIG        0x00000064U

#define MSK_ETHMAC_LED_CONFIG_LED_CONFIG 0x00000003U
#define SRT_ETHMAC_LED_CONFIG_LED_CONFIG 0
#define MSK_ETHMAC_LED_CONFIG_RES1       0xfffffffcU
#define SRT_ETHMAC_LED_CONFIG_RES1       2

enum {
	BFW_ETHMAC_LED_CONFIG_LED_CONFIG = 2,  /* [1:0] */
	BFW_ETHMAC_LED_CONFIG_RES1       = 30  /* [31:2] */
};

typedef struct ETHMAC_LED_CONFIG_BIT_Ttag {
	unsigned int LED_CONFIG : BFW_ETHMAC_LED_CONFIG_LED_CONFIG; /* 0: two static LEDs, 1: two LEDs and activity is blinking, 2: single combined link/activity LED, 3: no LEDs at all */
	unsigned int RES1       : BFW_ETHMAC_LED_CONFIG_RES1;       /* reserved, shall be set to zero                                                                                    */
} ETHMAC_LED_CONFIG_BIT_T;

typedef union {
	unsigned int            val;
	ETHMAC_LED_CONFIG_BIT_T bf;
} ETHMAC_LED_CONFIG_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_PHY_LEDS_FLASH_PERIOD */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_PHY_LEDS_FLASH_PERIOD        0x00000068U

#define MSK_ETHMAC_PHY_LEDS_FLASH_PERIOD_VAL 0xffffffffU
#define SRT_ETHMAC_PHY_LEDS_FLASH_PERIOD_VAL 0

enum {
	BFW_ETHMAC_PHY_LEDS_FLASH_PERIOD_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_PHY_LEDS_FLASH_PERIOD_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_PHY_LEDS_FLASH_PERIOD_VAL; /* flash period of PHY LEDs in 10ns resolution, default=5000000: 50ms, shall be smaller than 80ms */
} ETHMAC_PHY_LEDS_FLASH_PERIOD_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_PHY_LEDS_FLASH_PERIOD_BIT_T bf;
} ETHMAC_PHY_LEDS_FLASH_PERIOD_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_TRAFFIC_CLASS_ARRANGEMENT */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT        0x0000006CU

#define MSK_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_VAL  0x0000000fU
#define SRT_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_VAL  0
#define MSK_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_RES1 0xfffffff0U
#define SRT_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_RES1 4

enum {
	BFW_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_VAL  = 4,  /* [3:0] */
	BFW_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_RES1 = 28  /* [31:4] */
};

typedef struct ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_BIT_Ttag {
	unsigned int VAL  : BFW_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_VAL;  /* Traffic Class arrangement                                                                     */
	                                                               /*     0: HI: vlan priority 7..0, LO: untagged frame                                             */
	                                                               /*     1: HI: vlan priority 7..1, LO: vlan priority 0, untagged frame                            */
	                                                               /*     2: HI: vlan priority 7..2, LO: vlan priority 1..0, untagged frame                         */
	                                                               /*     3: HI: vlan priority 7..3, LO: vlan priority 2..0, untagged frame                         */
	                                                               /*     4: HI: vlan priority 7..4, LO: vlan priority 3..0, untagged frame (802.1Q Recommendation) */
	                                                               /*     5: HI: vlan priority 7..5, LO: vlan priority 4..0, untagged frame                         */
	                                                               /*     6: HI: vlan priority 7..6, LO: vlan priority 5..0, untagged frame                         */
	                                                               /*     7: HI: vlan priority 7,    LO: vlan priority 6..0, untagged frame                         */
	                                                               /*     8: HI: -,                  LO: vlan priority 7..0, untagged frame                         */
	unsigned int RES1 : BFW_ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_RES1; /* reserved, shall be set to zero                                                                */
} ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_BIT_T;

typedef union {
	unsigned int                           val;
	ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_BIT_T bf;
} ETHMAC_TRAFFIC_CLASS_ARRANGEMENT_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_INTERRUPTS_ENABLE_IND_HI */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE_IND_HI        0x00000070U

#define MSK_ETHMAC_INTERRUPTS_ENABLE_IND_HI_VAL  0x00000001U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_IND_HI_VAL  0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_IND_HI_RES1 0xfffffffeU
#define SRT_ETHMAC_INTERRUPTS_ENABLE_IND_HI_RES1 1

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_IND_HI_VAL  = 1,  /* [0] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_IND_HI_RES1 = 31  /* [31:1] */
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_IND_HI_BIT_Ttag {
	unsigned int VAL  : BFW_ETHMAC_INTERRUPTS_ENABLE_IND_HI_VAL;  /* enable indication hi event     */
	unsigned int RES1 : BFW_ETHMAC_INTERRUPTS_ENABLE_IND_HI_RES1; /* reserved, shall be set to zero */
} ETHMAC_INTERRUPTS_ENABLE_IND_HI_BIT_T;

typedef union {
	unsigned int                          val;
	ETHMAC_INTERRUPTS_ENABLE_IND_HI_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_IND_HI_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_INTERRUPTS_ENABLE_IND_LO */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE_IND_LO        0x00000074U

#define MSK_ETHMAC_INTERRUPTS_ENABLE_IND_LO_RES1 0x00000001U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_IND_LO_RES1 0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_IND_LO_VAL  0x00000002U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_IND_LO_VAL  1
#define MSK_ETHMAC_INTERRUPTS_ENABLE_IND_LO_RES2 0xfffffffcU
#define SRT_ETHMAC_INTERRUPTS_ENABLE_IND_LO_RES2 2

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_IND_LO_RES1 = 1,  /* [0] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_IND_LO_VAL  = 1,  /* [1] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_IND_LO_RES2 = 30  /* [31:2] */
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_IND_LO_BIT_Ttag {
	unsigned int RES1 : BFW_ETHMAC_INTERRUPTS_ENABLE_IND_LO_RES1; /* reserved, shall be set to zero */
	unsigned int VAL  : BFW_ETHMAC_INTERRUPTS_ENABLE_IND_LO_VAL;  /* enable indication lo event     */
	unsigned int RES2 : BFW_ETHMAC_INTERRUPTS_ENABLE_IND_LO_RES2; /* reserved, shall be set to zero */
} ETHMAC_INTERRUPTS_ENABLE_IND_LO_BIT_T;

typedef union {
	unsigned int                          val;
	ETHMAC_INTERRUPTS_ENABLE_IND_LO_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_IND_LO_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_INTERRUPTS_ENABLE_CON_HI */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE_CON_HI        0x00000078U

#define MSK_ETHMAC_INTERRUPTS_ENABLE_CON_HI_RES1 0x00000003U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_CON_HI_RES1 0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_CON_HI_VAL  0x00000004U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_CON_HI_VAL  2
#define MSK_ETHMAC_INTERRUPTS_ENABLE_CON_HI_RES2 0xfffffff8U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_CON_HI_RES2 3

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_CON_HI_RES1 = 2,  /* [1:0] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_CON_HI_VAL  = 1,  /* [2] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_CON_HI_RES2 = 29  /* [31:3] */
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_CON_HI_BIT_Ttag {
	unsigned int RES1 : BFW_ETHMAC_INTERRUPTS_ENABLE_CON_HI_RES1; /* reserved, shall be set to zero */
	unsigned int VAL  : BFW_ETHMAC_INTERRUPTS_ENABLE_CON_HI_VAL;  /* enable confirmation hi event   */
	unsigned int RES2 : BFW_ETHMAC_INTERRUPTS_ENABLE_CON_HI_RES2; /* reserved, shall be set to zero */
} ETHMAC_INTERRUPTS_ENABLE_CON_HI_BIT_T;

typedef union {
	unsigned int                          val;
	ETHMAC_INTERRUPTS_ENABLE_CON_HI_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_CON_HI_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_INTERRUPTS_ENABLE_CON_LO */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE_CON_LO        0x0000007CU

#define MSK_ETHMAC_INTERRUPTS_ENABLE_CON_LO_RES1 0x00000007U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_CON_LO_RES1 0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_CON_LO_VAL  0x00000008U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_CON_LO_VAL  3
#define MSK_ETHMAC_INTERRUPTS_ENABLE_CON_LO_RES2 0xfffffff0U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_CON_LO_RES2 4

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_CON_LO_RES1 = 3,  /* [2:0] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_CON_LO_VAL  = 1,  /* [3] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_CON_LO_RES2 = 28  /* [31:4] */
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_CON_LO_BIT_Ttag {
	unsigned int RES1 : BFW_ETHMAC_INTERRUPTS_ENABLE_CON_LO_RES1; /* reserved, shall be set to zero */
	unsigned int VAL  : BFW_ETHMAC_INTERRUPTS_ENABLE_CON_LO_VAL;  /* enable confirmation lo event   */
	unsigned int RES2 : BFW_ETHMAC_INTERRUPTS_ENABLE_CON_LO_RES2; /* reserved, shall be set to zero */
} ETHMAC_INTERRUPTS_ENABLE_CON_LO_BIT_T;

typedef union {
	unsigned int                          val;
	ETHMAC_INTERRUPTS_ENABLE_CON_LO_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_CON_LO_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED        0x00000080U

#define MSK_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_RES1 0x0000000fU
#define SRT_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_RES1 0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_VAL  0x00000010U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_VAL  4
#define MSK_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_RES2 0xffffffe0U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_RES2 5

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_RES1 = 4,  /* [3:0] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_VAL  = 1,  /* [4] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_RES2 = 27  /* [31:5] */
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_BIT_Ttag {
	unsigned int RES1 : BFW_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_RES1; /* reserved, shall be set to zero   */
	unsigned int VAL  : BFW_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_VAL;  /* enable link status changed event */
	unsigned int RES2 : BFW_ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_RES2; /* reserved, shall be set to zero   */
} ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_BIT_T;

typedef union {
	unsigned int                                val;
	ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_INTERRUPTS_ENABLE_COL */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE_COL        0x00000084U

#define MSK_ETHMAC_INTERRUPTS_ENABLE_COL_RES1 0x0000001fU
#define SRT_ETHMAC_INTERRUPTS_ENABLE_COL_RES1 0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_COL_VAL  0x00000020U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_COL_VAL  5
#define MSK_ETHMAC_INTERRUPTS_ENABLE_COL_RES2 0xffffffc0U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_COL_RES2 6

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_COL_RES1 = 5,  /* [4:0] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_COL_VAL  = 1,  /* [5] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_COL_RES2 = 26  /* [31:6] */
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_COL_BIT_Ttag {
	unsigned int RES1 : BFW_ETHMAC_INTERRUPTS_ENABLE_COL_RES1; /* reserved, shall be set to zero */
	unsigned int VAL  : BFW_ETHMAC_INTERRUPTS_ENABLE_COL_VAL;  /* enable collision event         */
	unsigned int RES2 : BFW_ETHMAC_INTERRUPTS_ENABLE_COL_RES2; /* reserved, shall be set to zero */
} ETHMAC_INTERRUPTS_ENABLE_COL_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_INTERRUPTS_ENABLE_COL_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_COL_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV        0x00000088U

#define MSK_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_RES1 0x0000003fU
#define SRT_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_RES1 0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_VAL  0x00000040U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_VAL  6
#define MSK_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_RES2 0xffffff80U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_RES2 7

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_RES1 = 6,  /* [5:0] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_VAL  = 1,  /* [6] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_RES2 = 25  /* [31:7] */
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_BIT_Ttag {
	unsigned int RES1 : BFW_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_RES1; /* reserved, shall be set to zero                                                          */
	unsigned int VAL  : BFW_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_VAL;  /* enable event for destination address received and empty_ptr_got and !frame_filtered_out */
	unsigned int RES2 : BFW_ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_RES2; /* reserved, shall be set to zero                                                          */
} ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_BIT_T;

typedef union {
	unsigned int                             val;
	ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_EARLY_RCV_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_INTERRUPTS_ENABLE_RX_ERR */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE_RX_ERR        0x0000008CU

#define MSK_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_RES1 0x0000007fU
#define SRT_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_RES1 0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_VAL  0x00000080U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_VAL  7
#define MSK_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_RES2 0xffffff00U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_RES2 8

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_RES1 = 7,  /* [6:0] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_VAL  = 1,  /* [7] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_RES2 = 24  /* [31:8] */
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_RX_ERR_BIT_Ttag {
	unsigned int RES1 : BFW_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_RES1; /* reserved, shall be set to zero                                                                                                                                           */
	unsigned int VAL  : BFW_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_VAL;  /* enable event for rx_error event is set in case of all error cases (ARM must check management counters for error type)(ARM must check management counters for error type) */
	unsigned int RES2 : BFW_ETHMAC_INTERRUPTS_ENABLE_RX_ERR_RES2; /* reserved, shall be set to zero                                                                                                                                           */
} ETHMAC_INTERRUPTS_ENABLE_RX_ERR_BIT_T;

typedef union {
	unsigned int                          val;
	ETHMAC_INTERRUPTS_ENABLE_RX_ERR_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_RX_ERR_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_INTERRUPTS_ENABLE_TX_ERR */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_INTERRUPTS_ENABLE_TX_ERR        0x00000090U

#define MSK_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_RES1 0x000000ffU
#define SRT_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_RES1 0
#define MSK_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_VAL  0x00000100U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_VAL  8
#define MSK_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_RES2 0xfffffe00U
#define SRT_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_RES2 9

enum {
	BFW_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_RES1 = 8,  /* [7:0] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_VAL  = 1,  /* [8] */
	BFW_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_RES2 = 23  /* [31:9] */
};

typedef struct ETHMAC_INTERRUPTS_ENABLE_TX_ERR_BIT_Ttag {
	unsigned int RES1 : BFW_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_RES1; /* reserved, shall be set to zero                                                                                                                                                       */
	unsigned int VAL  : BFW_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_VAL;  /* enable event for tx_error, event is set in case of late_collision, excessive_collision, utx_under_flow_during_tx, tx_fatal_error (ARM must check management counters for error type) */
	unsigned int RES2 : BFW_ETHMAC_INTERRUPTS_ENABLE_TX_ERR_RES2; /* reserved, shall be set to zero                                                                                                                                                       */
} ETHMAC_INTERRUPTS_ENABLE_TX_ERR_BIT_T;

typedef union {
	unsigned int                          val;
	ETHMAC_INTERRUPTS_ENABLE_TX_ERR_BIT_T bf;
} ETHMAC_INTERRUPTS_ENABLE_TX_ERR_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_LOCAL_MAC_ADDRESS_LO */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_LO        0x00000094U

#define MSK_ETHMAC_LOCAL_MAC_ADDRESS_LO_BYTES_4321 0xffffffffU
#define SRT_ETHMAC_LOCAL_MAC_ADDRESS_LO_BYTES_4321 0

enum {
	BFW_ETHMAC_LOCAL_MAC_ADDRESS_LO_BYTES_4321 = 32  /* [31:0] */
};

typedef struct ETHMAC_LOCAL_MAC_ADDRESS_LO_BIT_Ttag {
	unsigned int BYTES_4321 : BFW_ETHMAC_LOCAL_MAC_ADDRESS_LO_BYTES_4321; /* MAC address bytes 4,3,2 and 1 */
} ETHMAC_LOCAL_MAC_ADDRESS_LO_BIT_T;

typedef union {
	unsigned int                      val;
	ETHMAC_LOCAL_MAC_ADDRESS_LO_BIT_T bf;
} ETHMAC_LOCAL_MAC_ADDRESS_LO_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_LOCAL_MAC_ADDRESS_HI */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_LOCAL_MAC_ADDRESS_HI        0x00000098U

#define MSK_ETHMAC_LOCAL_MAC_ADDRESS_HI_BYTES_65 0x0000ffffU
#define SRT_ETHMAC_LOCAL_MAC_ADDRESS_HI_BYTES_65 0
#define MSK_ETHMAC_LOCAL_MAC_ADDRESS_HI_RES1     0xffff0000U
#define SRT_ETHMAC_LOCAL_MAC_ADDRESS_HI_RES1     16

enum {
	BFW_ETHMAC_LOCAL_MAC_ADDRESS_HI_BYTES_65 = 16, /* [15:0] */
	BFW_ETHMAC_LOCAL_MAC_ADDRESS_HI_RES1     = 16  /* [31:16] */
};

typedef struct ETHMAC_LOCAL_MAC_ADDRESS_HI_BIT_Ttag {
	unsigned int BYTES_65 : BFW_ETHMAC_LOCAL_MAC_ADDRESS_HI_BYTES_65; /* MAC address bytes 6 and 5                                 */
	unsigned int RES1     : BFW_ETHMAC_LOCAL_MAC_ADDRESS_HI_RES1;     /* 0x0000: MAC address is valid else: MAC address is invalid */
} ETHMAC_LOCAL_MAC_ADDRESS_HI_BIT_T;

typedef union {
	unsigned int                      val;
	ETHMAC_LOCAL_MAC_ADDRESS_HI_BIT_T bf;
} ETHMAC_LOCAL_MAC_ADDRESS_HI_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_MACID */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_MACID        0x0000009CU

#define MSK_ETHMAC_MACID_NUMBER 0xffffffffU
#define SRT_ETHMAC_MACID_NUMBER 0

enum {
	BFW_ETHMAC_MACID_NUMBER = 32  /* [31:0] */
};

typedef struct ETHMAC_MACID_BIT_Ttag {
	unsigned int NUMBER : BFW_ETHMAC_MACID_NUMBER; /* MAC Identification number */
} ETHMAC_MACID_BIT_T;

typedef union {
	unsigned int       val;
	ETHMAC_MACID_BIT_T bf;
} ETHMAC_MACID_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RESOURCE_TYPE_ID */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RESOURCE_TYPE_ID        0x000000A0U

#define MSK_ETHMAC_RESOURCE_TYPE_ID_NAME 0xffffffffU
#define SRT_ETHMAC_RESOURCE_TYPE_ID_NAME 0

enum {
	BFW_ETHMAC_RESOURCE_TYPE_ID_NAME = 32  /* [31:0] */
};

typedef struct ETHMAC_RESOURCE_TYPE_ID_BIT_Ttag {
	unsigned int NAME : BFW_ETHMAC_RESOURCE_TYPE_ID_NAME; /* Recource type id name */
} ETHMAC_RESOURCE_TYPE_ID_BIT_T;

typedef union {
	unsigned int                  val;
	ETHMAC_RESOURCE_TYPE_ID_BIT_T bf;
} ETHMAC_RESOURCE_TYPE_ID_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RESOURCE_INFO */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RESOURCE_INFO        0x000000A4U

#define MSK_ETHMAC_RESOURCE_INFO_NAME 0xffffffffU
#define SRT_ETHMAC_RESOURCE_INFO_NAME 0

enum {
	BFW_ETHMAC_RESOURCE_INFO_NAME = 32  /* [31:0] */
};

typedef struct ETHMAC_RESOURCE_INFO_BIT_Ttag {
	unsigned int NAME : BFW_ETHMAC_RESOURCE_INFO_NAME; /* Recource info */
} ETHMAC_RESOURCE_INFO_BIT_T;

typedef union {
	unsigned int               val;
	ETHMAC_RESOURCE_INFO_BIT_T bf;
} ETHMAC_RESOURCE_INFO_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_SYSTIME_BORDER_COPY */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_SYSTIME_BORDER_COPY        0x000000A8U

#define MSK_ETHMAC_SYSTIME_BORDER_COPY_VAL 0xffffffffU
#define SRT_ETHMAC_SYSTIME_BORDER_COPY_VAL 0

enum {
	BFW_ETHMAC_SYSTIME_BORDER_COPY_VAL = 32  /* [31:0] */
};

typedef struct ETHMAC_SYSTIME_BORDER_COPY_BIT_Ttag {
	unsigned int VAL : BFW_ETHMAC_SYSTIME_BORDER_COPY_VAL; /* wrap-around value of systime_ns, systime_s++ */
} ETHMAC_SYSTIME_BORDER_COPY_BIT_T;

typedef union {
	unsigned int                     val;
	ETHMAC_SYSTIME_BORDER_COPY_BIT_T bf;
} ETHMAC_SYSTIME_BORDER_COPY_T;

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_STATUS_AREA_BASE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_STATUS_AREA_BASE        0x000000ACU

/* --------------------------------------------------------------------- */
/* Register ETHMAC_FRAMES_TRANSMITTED_OK */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_FRAMES_TRANSMITTED_OK        0x000000ACU

#define MSK_ETHMAC_FRAMES_TRANSMITTED_OK_CNT 0xffffffffU
#define SRT_ETHMAC_FRAMES_TRANSMITTED_OK_CNT 0

enum {
	BFW_ETHMAC_FRAMES_TRANSMITTED_OK_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_FRAMES_TRANSMITTED_OK_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAMES_TRANSMITTED_OK_CNT; /* count of frames that are successfully transmitted */
} ETHMAC_FRAMES_TRANSMITTED_OK_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_FRAMES_TRANSMITTED_OK_BIT_T bf;
} ETHMAC_FRAMES_TRANSMITTED_OK_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_SINGLE_COLLISION_FRAMES */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_SINGLE_COLLISION_FRAMES        0x000000B0U

#define MSK_ETHMAC_SINGLE_COLLISION_FRAMES_CNT 0xffffffffU
#define SRT_ETHMAC_SINGLE_COLLISION_FRAMES_CNT 0

enum {
	BFW_ETHMAC_SINGLE_COLLISION_FRAMES_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_SINGLE_COLLISION_FRAMES_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_SINGLE_COLLISION_FRAMES_CNT; /* count of frames that are involved into a single collision */
} ETHMAC_SINGLE_COLLISION_FRAMES_BIT_T;

typedef union {
	unsigned int                         val;
	ETHMAC_SINGLE_COLLISION_FRAMES_BIT_T bf;
} ETHMAC_SINGLE_COLLISION_FRAMES_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_MULTIPLE_COLLISION_FRAMES */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_MULTIPLE_COLLISION_FRAMES        0x000000B4U

#define MSK_ETHMAC_MULTIPLE_COLLISION_FRAMES_CNT 0xffffffffU
#define SRT_ETHMAC_MULTIPLE_COLLISION_FRAMES_CNT 0

enum {
	BFW_ETHMAC_MULTIPLE_COLLISION_FRAMES_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_MULTIPLE_COLLISION_FRAMES_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_MULTIPLE_COLLISION_FRAMES_CNT; /* count of frames that are involved into more that one collisions */
} ETHMAC_MULTIPLE_COLLISION_FRAMES_BIT_T;

typedef union {
	unsigned int                           val;
	ETHMAC_MULTIPLE_COLLISION_FRAMES_BIT_T bf;
} ETHMAC_MULTIPLE_COLLISION_FRAMES_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_LATE_COLLISIONS */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_LATE_COLLISIONS        0x000000B8U

#define MSK_ETHMAC_LATE_COLLISIONS_CNT 0xffffffffU
#define SRT_ETHMAC_LATE_COLLISIONS_CNT 0

enum {
	BFW_ETHMAC_LATE_COLLISIONS_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_LATE_COLLISIONS_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_LATE_COLLISIONS_CNT; /* count of the times that a collision has been detected later than 512 bit times into the transmitted packet */
} ETHMAC_LATE_COLLISIONS_BIT_T;

typedef union {
	unsigned int                 val;
	ETHMAC_LATE_COLLISIONS_BIT_T bf;
} ETHMAC_LATE_COLLISIONS_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_LINK_DOWN_DURING_TRANSMISSION */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_LINK_DOWN_DURING_TRANSMISSION        0x000000BCU

#define MSK_ETHMAC_LINK_DOWN_DURING_TRANSMISSION_CNT 0xffffffffU
#define SRT_ETHMAC_LINK_DOWN_DURING_TRANSMISSION_CNT 0

enum {
	BFW_ETHMAC_LINK_DOWN_DURING_TRANSMISSION_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_LINK_DOWN_DURING_TRANSMISSION_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_LINK_DOWN_DURING_TRANSMISSION_CNT; /* count of the times that a frame was transmitted during link down */
} ETHMAC_LINK_DOWN_DURING_TRANSMISSION_BIT_T;

typedef union {
	unsigned int                               val;
	ETHMAC_LINK_DOWN_DURING_TRANSMISSION_BIT_T bf;
} ETHMAC_LINK_DOWN_DURING_TRANSMISSION_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION        0x000000C0U

#define MSK_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_CNT 0xffffffffU
#define SRT_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_CNT 0

enum {
	BFW_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_CNT; /* utx fifo underflow at transmission time */
} ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_BIT_T;

typedef union {
	unsigned int                                   val;
	ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_BIT_T bf;
} ETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_FRAMES_RECEIVED_OK */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_FRAMES_RECEIVED_OK        0x000000C4U

#define MSK_ETHMAC_FRAMES_RECEIVED_OK_CNT 0xffffffffU
#define SRT_ETHMAC_FRAMES_RECEIVED_OK_CNT 0

enum {
	BFW_ETHMAC_FRAMES_RECEIVED_OK_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_FRAMES_RECEIVED_OK_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAMES_RECEIVED_OK_CNT; /* count of frames that are successfully received */
} ETHMAC_FRAMES_RECEIVED_OK_BIT_T;

typedef union {
	unsigned int                    val;
	ETHMAC_FRAMES_RECEIVED_OK_BIT_T bf;
} ETHMAC_FRAMES_RECEIVED_OK_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS        0x000000C8U

#define MSK_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_CNT 0xffffffffU
#define SRT_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_CNT 0

enum {
	BFW_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_CNT; /* count of frames that are an integral number of octets in length and do not pass the FCS check */
} ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_BIT_T;

typedef union {
	unsigned int                             val;
	ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_BIT_T bf;
} ETHMAC_FRAME_CHECK_SEQUENCE_ERRORS_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_ALIGNMENT_ERRORS */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_ALIGNMENT_ERRORS        0x000000CCU

#define MSK_ETHMAC_ALIGNMENT_ERRORS_CNT 0xffffffffU
#define SRT_ETHMAC_ALIGNMENT_ERRORS_CNT 0

enum {
	BFW_ETHMAC_ALIGNMENT_ERRORS_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_ALIGNMENT_ERRORS_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_ALIGNMENT_ERRORS_CNT; /* count of frames that are not an integral number of octets in length and do not pass the FCS check */
} ETHMAC_ALIGNMENT_ERRORS_BIT_T;

typedef union {
	unsigned int                  val;
	ETHMAC_ALIGNMENT_ERRORS_BIT_T bf;
} ETHMAC_ALIGNMENT_ERRORS_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_FRAME_TOO_LONG_ERRORS */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_FRAME_TOO_LONG_ERRORS        0x000000D0U

#define MSK_ETHMAC_FRAME_TOO_LONG_ERRORS_CNT 0xffffffffU
#define SRT_ETHMAC_FRAME_TOO_LONG_ERRORS_CNT 0

enum {
	BFW_ETHMAC_FRAME_TOO_LONG_ERRORS_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_FRAME_TOO_LONG_ERRORS_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAME_TOO_LONG_ERRORS_CNT; /* count of frames that are received and exceed the maximum permitted frame size */
} ETHMAC_FRAME_TOO_LONG_ERRORS_BIT_T;

typedef union {
	unsigned int                       val;
	ETHMAC_FRAME_TOO_LONG_ERRORS_BIT_T bf;
} ETHMAC_FRAME_TOO_LONG_ERRORS_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RUNT_FRAMES_RECEIVED */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RUNT_FRAMES_RECEIVED        0x000000D4U

#define MSK_ETHMAC_RUNT_FRAMES_RECEIVED_CNT 0xffffffffU
#define SRT_ETHMAC_RUNT_FRAMES_RECEIVED_CNT 0

enum {
	BFW_ETHMAC_RUNT_FRAMES_RECEIVED_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_RUNT_FRAMES_RECEIVED_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_RUNT_FRAMES_RECEIVED_CNT; /* count of frames that have a length between 42..63 bytes and a valid CRC */
} ETHMAC_RUNT_FRAMES_RECEIVED_BIT_T;

typedef union {
	unsigned int                      val;
	ETHMAC_RUNT_FRAMES_RECEIVED_BIT_T bf;
} ETHMAC_RUNT_FRAMES_RECEIVED_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_COLLISION_FRAGMENTS_RECEIVED */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_COLLISION_FRAGMENTS_RECEIVED        0x000000D8U

#define MSK_ETHMAC_COLLISION_FRAGMENTS_RECEIVED_CNT 0xffffffffU
#define SRT_ETHMAC_COLLISION_FRAGMENTS_RECEIVED_CNT 0

enum {
	BFW_ETHMAC_COLLISION_FRAGMENTS_RECEIVED_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_COLLISION_FRAGMENTS_RECEIVED_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_COLLISION_FRAGMENTS_RECEIVED_CNT; /* count of frames that are smaller that 64 bytes and have a invalid CRC */
} ETHMAC_COLLISION_FRAGMENTS_RECEIVED_BIT_T;

typedef union {
	unsigned int                              val;
	ETHMAC_COLLISION_FRAGMENTS_RECEIVED_BIT_T bf;
} ETHMAC_COLLISION_FRAGMENTS_RECEIVED_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE        0x000000DCU

#define MSK_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_CNT 0xffffffffU
#define SRT_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_CNT 0

enum {
	BFW_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_CNT; /* no empty pointer available at indication time */
} ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_BIT_T;

typedef union {
	unsigned int                                 val;
	ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_BIT_T bf;
} ETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW        0x000000E0U

#define MSK_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_CNT 0xffffffffU
#define SRT_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_CNT 0

enum {
	BFW_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_CNT; /* urx fifo overflow at indication time */
} ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_BIT_T;

typedef union {
	unsigned int                                 val;
	ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_BIT_T bf;
} ETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_TX_FATAL_ERROR */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_TX_FATAL_ERROR        0x000000E4U

#define MSK_ETHMAC_TX_FATAL_ERROR_CNT 0xffffffffU
#define SRT_ETHMAC_TX_FATAL_ERROR_CNT 0

enum {
	BFW_ETHMAC_TX_FATAL_ERROR_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_TX_FATAL_ERROR_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_TX_FATAL_ERROR_CNT; /* counts unknown error numbers from TX xMAC, should never occure */
} ETHMAC_TX_FATAL_ERROR_BIT_T;

typedef union {
	unsigned int                val;
	ETHMAC_TX_FATAL_ERROR_BIT_T bf;
} ETHMAC_TX_FATAL_ERROR_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_RX_FATAL_ERROR */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_RX_FATAL_ERROR        0x000000E8U

#define MSK_ETHMAC_RX_FATAL_ERROR_CNT 0xffffffffU
#define SRT_ETHMAC_RX_FATAL_ERROR_CNT 0

enum {
	BFW_ETHMAC_RX_FATAL_ERROR_CNT = 32  /* [31:0] */
};

typedef struct ETHMAC_RX_FATAL_ERROR_BIT_Ttag {
	unsigned int CNT : BFW_ETHMAC_RX_FATAL_ERROR_CNT; /* counts unknown error numbers from RX xMAC, should never occure */
} ETHMAC_RX_FATAL_ERROR_BIT_T;

typedef union {
	unsigned int                val;
	ETHMAC_RX_FATAL_ERROR_BIT_T bf;
} ETHMAC_RX_FATAL_ERROR_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_PHY_LEDS */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_PHY_LEDS        0x000000ECU

#define MSK_ETHMAC_PHY_LEDS_LINK_UP     0x00000001U
#define SRT_ETHMAC_PHY_LEDS_LINK_UP     0
#define MSK_ETHMAC_PHY_LEDS_ACTIVITY    0x00000002U
#define SRT_ETHMAC_PHY_LEDS_ACTIVITY    1
#define MSK_ETHMAC_PHY_LEDS_SPEED_100   0x00000004U
#define SRT_ETHMAC_PHY_LEDS_SPEED_100   2
#define MSK_ETHMAC_PHY_LEDS_DUPLEX_FULL 0x00000008U
#define SRT_ETHMAC_PHY_LEDS_DUPLEX_FULL 3
#define MSK_ETHMAC_PHY_LEDS_RES         0xfffffff0U
#define SRT_ETHMAC_PHY_LEDS_RES         4

enum {
	BFW_ETHMAC_PHY_LEDS_LINK_UP     = 1,  /* [0] */
	BFW_ETHMAC_PHY_LEDS_ACTIVITY    = 1,  /* [1] */
	BFW_ETHMAC_PHY_LEDS_SPEED_100   = 1,  /* [2] */
	BFW_ETHMAC_PHY_LEDS_DUPLEX_FULL = 1,  /* [3] */
	BFW_ETHMAC_PHY_LEDS_RES         = 28  /* [31:4] */
};

typedef struct ETHMAC_PHY_LEDS_BIT_Ttag {
	unsigned int LINK_UP     : BFW_ETHMAC_PHY_LEDS_LINK_UP;     /* 1: link up, 0: link down            */
	unsigned int ACTIVITY    : BFW_ETHMAC_PHY_LEDS_ACTIVITY;    /* 1: activity , 0: no activity        */
	unsigned int SPEED_100   : BFW_ETHMAC_PHY_LEDS_SPEED_100;   /* 1: speed 100 MBit, 0: speed 10 MBit */
	unsigned int DUPLEX_FULL : BFW_ETHMAC_PHY_LEDS_DUPLEX_FULL; /* 1: full duplex, 0: half duplex      */
	unsigned int RES         : BFW_ETHMAC_PHY_LEDS_RES;         /* res                                 */
} ETHMAC_PHY_LEDS_BIT_T;

typedef union {
	unsigned int          val;
	ETHMAC_PHY_LEDS_BIT_T bf;
} ETHMAC_PHY_LEDS_T;

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_TX_TPU_ERROR_CODE_JUMP_TABLE_BASE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_TX_TPU_ERROR_CODE_JUMP_TABLE_BASE        0x000000F0U

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_TXBUF1 */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_TXBUF1        0x00000100U

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_TXBUF2 */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_TXBUF2        0x00000120U

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_RX_RPU_ERROR_CODE_JUMP_TABLE_BASE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_RX_RPU_ERROR_CODE_JUMP_TABLE_BASE        0x00000140U

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_RXBUF1 */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_RXBUF1        0x00000150U

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_RXBUF2 */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_RXBUF2        0x00000170U

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_MULTICAST_HASH_TABLE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_MULTICAST_HASH_TABLE        0x00000190U

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_PHY_LED_SELECT_JUMP_TABLE */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_PHY_LED_SELECT_JUMP_TABLE        0x000001B0U

/* --------------------------------------------------------------------- */
/* Register AREA_ETHMAC_RESERVED */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_AREA_ETHMAC_RESERVED        0x000001B8U

/* --------------------------------------------------------------------- */
/* Register ETHMAC_XPEC2ARM_INTERRUPTS */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_XPEC2ARM_INTERRUPTS        0x000001B8U

#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_IND_HI       0x00000001U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_IND_HI       0
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_IND_LO       0x00000002U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_IND_LO       1
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_CON_HI       0x00000004U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_CON_HI       2
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_CON_LO       0x00000008U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_CON_LO       3
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_LINK_CHANGED 0x00000010U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_LINK_CHANGED 4
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_COL          0x00000020U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_COL          5
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_EARLY_RCV    0x00000040U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_EARLY_RCV    6
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_RX_ERR       0x00000080U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_RX_ERR       7
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_TX_ERR       0x00000100U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_TX_ERR       8
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_RES1         0x0000fe00U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_RES1         9
#define MSK_ETHMAC_XPEC2ARM_INTERRUPTS_UNUSABLE     0xffff0000U
#define SRT_ETHMAC_XPEC2ARM_INTERRUPTS_UNUSABLE     16

enum {
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_IND_HI       = 1,  /* [0] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_IND_LO       = 1,  /* [1] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_CON_HI       = 1,  /* [2] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_CON_LO       = 1,  /* [3] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_LINK_CHANGED = 1,  /* [4] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_COL          = 1,  /* [5] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_EARLY_RCV    = 1,  /* [6] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RX_ERR       = 1,  /* [7] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_TX_ERR       = 1,  /* [8] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RES1         = 7,  /* [15:9] */
	BFW_ETHMAC_XPEC2ARM_INTERRUPTS_UNUSABLE     = 16  /* [31:16] */
};

typedef struct ETHMAC_XPEC2ARM_INTERRUPTS_BIT_Ttag {
	unsigned int IND_HI       : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_IND_HI;       /* 1: indication high interrupt                                                        */
	unsigned int IND_LO       : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_IND_LO;       /* 1: indication low interrupt                                                         */
	unsigned int CON_HI       : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_CON_HI;       /* 1: confirmation high interrupt                                                      */
	unsigned int CON_LO       : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_CON_LO;       /* 1: confirmation low interrupt                                                       */
	unsigned int LINK_CHANGED : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_LINK_CHANGED; /* 1: link status changed interrupt                                                    */
	unsigned int COL          : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_COL;          /* 1: collision interrupt                                                              */
	unsigned int EARLY_RCV    : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_EARLY_RCV;    /* 1: destination address received and empty_ptr_got and !frame_filtered_out interrupt */
	unsigned int RX_ERR       : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RX_ERR;       /* 1: rx_error interrupt (ARM must check management counters for error type)           */
	unsigned int TX_ERR       : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_TX_ERR;       /* 1: tx_error interrupt (ARM must check management counters for error type)           */
	unsigned int RES1         : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_RES1;         /* reserved                                                                            */
	unsigned int UNUSABLE     : BFW_ETHMAC_XPEC2ARM_INTERRUPTS_UNUSABLE;     /* arm2xpec interrupts                                                                 */
} ETHMAC_XPEC2ARM_INTERRUPTS_BIT_T;

typedef union {
	unsigned int                     val;
	ETHMAC_XPEC2ARM_INTERRUPTS_BIT_T bf;
} ETHMAC_XPEC2ARM_INTERRUPTS_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_FIFO_ELEMENT */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_FIFO_ELEMENT        0x000001BCU

#define MSK_ETHMAC_FIFO_ELEMENT_FRAME_LEN           0x000007ffU
#define SRT_ETHMAC_FIFO_ELEMENT_FRAME_LEN           0
#define MSK_ETHMAC_FIFO_ELEMENT_RES1                0x00000800U
#define SRT_ETHMAC_FIFO_ELEMENT_RES1                11
#define MSK_ETHMAC_FIFO_ELEMENT_MULTI_REQ           0x00003000U
#define SRT_ETHMAC_FIFO_ELEMENT_MULTI_REQ           12
#define MSK_ETHMAC_FIFO_ELEMENT_SUPPRESS_CON        0x00004000U
#define SRT_ETHMAC_FIFO_ELEMENT_SUPPRESS_CON        14
#define MSK_ETHMAC_FIFO_ELEMENT_RES2                0x00008000U
#define SRT_ETHMAC_FIFO_ELEMENT_RES2                15
#define MSK_ETHMAC_FIFO_ELEMENT_FRAME_BUF_NUM       0x003f0000U
#define SRT_ETHMAC_FIFO_ELEMENT_FRAME_BUF_NUM       16
#define MSK_ETHMAC_FIFO_ELEMENT_INT_RAM_SEGMENT_NUM 0x03c00000U
#define SRT_ETHMAC_FIFO_ELEMENT_INT_RAM_SEGMENT_NUM 22
#define MSK_ETHMAC_FIFO_ELEMENT_RES3                0x0c000000U
#define SRT_ETHMAC_FIFO_ELEMENT_RES3                26
#define MSK_ETHMAC_FIFO_ELEMENT_ERROR_CODE          0xf0000000U
#define SRT_ETHMAC_FIFO_ELEMENT_ERROR_CODE          28

enum {
	BFW_ETHMAC_FIFO_ELEMENT_FRAME_LEN           = 11, /* [10:0] */
	BFW_ETHMAC_FIFO_ELEMENT_RES1                = 1,  /* [11] */
	BFW_ETHMAC_FIFO_ELEMENT_MULTI_REQ           = 2,  /* [13:12] */
	BFW_ETHMAC_FIFO_ELEMENT_SUPPRESS_CON        = 1,  /* [14] */
	BFW_ETHMAC_FIFO_ELEMENT_RES2                = 1,  /* [15] */
	BFW_ETHMAC_FIFO_ELEMENT_FRAME_BUF_NUM       = 6,  /* [21:16] */
	BFW_ETHMAC_FIFO_ELEMENT_INT_RAM_SEGMENT_NUM = 4,  /* [25:22] */
	BFW_ETHMAC_FIFO_ELEMENT_RES3                = 2,  /* [27:26] */
	BFW_ETHMAC_FIFO_ELEMENT_ERROR_CODE          = 4   /* [31:28] */
};

typedef struct ETHMAC_FIFO_ELEMENT_BIT_Ttag {
	unsigned int FRAME_LEN           : BFW_ETHMAC_FIFO_ELEMENT_FRAME_LEN;           /* frame length                                                                                                                                                                                    */
	unsigned int RES1                : BFW_ETHMAC_FIFO_ELEMENT_RES1;                /* reserved, shall be set to zero                                                                                                                                                                  */
	unsigned int MULTI_REQ           : BFW_ETHMAC_FIFO_ELEMENT_MULTI_REQ;           /* 1/0: frame is a multi/single request                                                                                                                                                            */
	unsigned int SUPPRESS_CON        : BFW_ETHMAC_FIFO_ELEMENT_SUPPRESS_CON;        /* empty/indication pointer: shall be set to zero, request pointer: suppress confirmation 1/0: do/do not suppress confirmation, request pointer will be put into empty/con fifo after tranmsission */
	unsigned int RES2                : BFW_ETHMAC_FIFO_ELEMENT_RES2;                /* reserved, shall be set to zero                                                                                                                                                                  */
	unsigned int FRAME_BUF_NUM       : BFW_ETHMAC_FIFO_ELEMENT_FRAME_BUF_NUM;       /* frame buffer number                                                                                                                                                                             */
	unsigned int INT_RAM_SEGMENT_NUM : BFW_ETHMAC_FIFO_ELEMENT_INT_RAM_SEGMENT_NUM; /* internal Ram segment number                                                                                                                                                                     */
	unsigned int RES3                : BFW_ETHMAC_FIFO_ELEMENT_RES3;                /* reserved, shall be set to zero                                                                                                                                                                  */
	unsigned int ERROR_CODE          : BFW_ETHMAC_FIFO_ELEMENT_ERROR_CODE;          /* error code                                                                                                                                                                                      */
} ETHMAC_FIFO_ELEMENT_BIT_T;

typedef union {
	unsigned int              val;
	ETHMAC_FIFO_ELEMENT_BIT_T bf;
} ETHMAC_FIFO_ELEMENT_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_HELP */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_HELP        0x000001C0U

#define MSK_ETHMAC_HELP_RX_BUF_ACTIVE               0x00000001U
#define SRT_ETHMAC_HELP_RX_BUF_ACTIVE               0
#define MSK_ETHMAC_HELP_RX_ACTUAL_IND_FIFO_PRIO     0x00000002U
#define SRT_ETHMAC_HELP_RX_ACTUAL_IND_FIFO_PRIO     1
#define MSK_ETHMAC_HELP_RX_DROP_FRAME               0x00000004U
#define SRT_ETHMAC_HELP_RX_DROP_FRAME               2
#define MSK_ETHMAC_HELP_RX_FRWD_FRAME_TO_LOCAL_PORT 0x00000008U
#define SRT_ETHMAC_HELP_RX_FRWD_FRAME_TO_LOCAL_PORT 3
#define MSK_ETHMAC_HELP_RX_DST_UNICAST              0x00000010U
#define SRT_ETHMAC_HELP_RX_DST_UNICAST              4
#define MSK_ETHMAC_HELP_RX_DST_MULTICAST            0x00000020U
#define SRT_ETHMAC_HELP_RX_DST_MULTICAST            5
#define MSK_ETHMAC_HELP_RX_DST_BROADCAST            0x00000040U
#define SRT_ETHMAC_HELP_RX_DST_BROADCAST            6
#define MSK_ETHMAC_HELP_RX_SRC_UNICAST              0x00000080U
#define SRT_ETHMAC_HELP_RX_SRC_UNICAST              7
#define MSK_ETHMAC_HELP_RES1                        0x00000300U
#define SRT_ETHMAC_HELP_RES1                        8
#define MSK_ETHMAC_HELP_TX_BUF_FILLED_VIA_DMA       0x00000400U
#define SRT_ETHMAC_HELP_TX_BUF_FILLED_VIA_DMA       10
#define MSK_ETHMAC_HELP_TX_LAST                     0x00000800U
#define SRT_ETHMAC_HELP_TX_LAST                     11
#define MSK_ETHMAC_HELP_TX_ACTUAL_REQ_FIFO_PRIO     0x00001000U
#define SRT_ETHMAC_HELP_TX_ACTUAL_REQ_FIFO_PRIO     12
#define MSK_ETHMAC_HELP_TX_DMA_YET_FIN              0x00002000U
#define SRT_ETHMAC_HELP_TX_DMA_YET_FIN              13
#define MSK_ETHMAC_HELP_TX_BUF_TRANSFERS_TO_UTX     0x00004000U
#define SRT_ETHMAC_HELP_TX_BUF_TRANSFERS_TO_UTX     14
#define MSK_ETHMAC_HELP_DUPLEX                      0x00008000U
#define SRT_ETHMAC_HELP_DUPLEX                      15
#define MSK_ETHMAC_HELP_RES3                        0xffff0000U
#define SRT_ETHMAC_HELP_RES3                        16

enum {
	BFW_ETHMAC_HELP_RX_BUF_ACTIVE               = 1,  /* [0] */
	BFW_ETHMAC_HELP_RX_ACTUAL_IND_FIFO_PRIO     = 1,  /* [1] */
	BFW_ETHMAC_HELP_RX_DROP_FRAME               = 1,  /* [2] */
	BFW_ETHMAC_HELP_RX_FRWD_FRAME_TO_LOCAL_PORT = 1,  /* [3] */
	BFW_ETHMAC_HELP_RX_DST_UNICAST              = 1,  /* [4] */
	BFW_ETHMAC_HELP_RX_DST_MULTICAST            = 1,  /* [5] */
	BFW_ETHMAC_HELP_RX_DST_BROADCAST            = 1,  /* [6] */
	BFW_ETHMAC_HELP_RX_SRC_UNICAST              = 1,  /* [7] */
	BFW_ETHMAC_HELP_RES1                        = 2,  /* [9:8] */
	BFW_ETHMAC_HELP_TX_BUF_FILLED_VIA_DMA       = 1,  /* [10] */
	BFW_ETHMAC_HELP_TX_LAST                     = 1,  /* [11] */
	BFW_ETHMAC_HELP_TX_ACTUAL_REQ_FIFO_PRIO     = 1,  /* [12] */
	BFW_ETHMAC_HELP_TX_DMA_YET_FIN              = 1,  /* [13] */
	BFW_ETHMAC_HELP_TX_BUF_TRANSFERS_TO_UTX     = 1,  /* [14] */
	BFW_ETHMAC_HELP_DUPLEX                      = 1,  /* [15] */
	BFW_ETHMAC_HELP_RES3                        = 16  /* [31:16] */
};

typedef struct ETHMAC_HELP_BIT_Ttag {
	unsigned int RX_BUF_ACTIVE               : BFW_ETHMAC_HELP_RX_BUF_ACTIVE;               /* 1/0: receive buffer 1/0 is active                                      */
	unsigned int RX_ACTUAL_IND_FIFO_PRIO     : BFW_ETHMAC_HELP_RX_ACTUAL_IND_FIFO_PRIO;     /* 1/0: received frame is in traffic class hi/Lo                          */
	unsigned int RX_DROP_FRAME               : BFW_ETHMAC_HELP_RX_DROP_FRAME;               /* 1/0: received frame shall be dropped/not dropped                       */
	unsigned int RX_FRWD_FRAME_TO_LOCAL_PORT : BFW_ETHMAC_HELP_RX_FRWD_FRAME_TO_LOCAL_PORT; /* 1: frame shall be forwarded to local port                              */
	unsigned int RX_DST_UNICAST              : BFW_ETHMAC_HELP_RX_DST_UNICAST;              /* 1: destination address is unicast                                      */
	unsigned int RX_DST_MULTICAST            : BFW_ETHMAC_HELP_RX_DST_MULTICAST;            /* 1: destination address is multicast                                    */
	unsigned int RX_DST_BROADCAST            : BFW_ETHMAC_HELP_RX_DST_BROADCAST;            /* 1: destination address is broadcast                                    */
	unsigned int RX_SRC_UNICAST              : BFW_ETHMAC_HELP_RX_SRC_UNICAST;              /* 1: source address is unicast, 0: source address is broadcast/multicast */
	unsigned int RES1                        : BFW_ETHMAC_HELP_RES1;                        /* 1: source address is multicast                                         */
	unsigned int TX_BUF_FILLED_VIA_DMA       : BFW_ETHMAC_HELP_TX_BUF_FILLED_VIA_DMA;       /* 1/0: buffer 1/0 is filled via dma                                      */
	unsigned int TX_LAST                     : BFW_ETHMAC_HELP_TX_LAST;                     /* 1/0: transmission to buffers is done/not done                          */
	unsigned int TX_ACTUAL_REQ_FIFO_PRIO     : BFW_ETHMAC_HELP_TX_ACTUAL_REQ_FIFO_PRIO;     /* 1/0: actual request frame is in traffic class hi/Lo                    */
	unsigned int TX_DMA_YET_FIN              : BFW_ETHMAC_HELP_TX_DMA_YET_FIN;              /* 1: next TX DMA has finished                                            */
	unsigned int TX_BUF_TRANSFERS_TO_UTX     : BFW_ETHMAC_HELP_TX_BUF_TRANSFERS_TO_UTX;     /* 1/0: transmit buffer 1/0 transfers to utx                              */
	unsigned int DUPLEX                      : BFW_ETHMAC_HELP_DUPLEX;                      /* 0/1: half/full duplex mode                                             */
	unsigned int RES3                        : BFW_ETHMAC_HELP_RES3;                        /* reserved                                                               */
} ETHMAC_HELP_BIT_T;

typedef union {
	unsigned int      val;
	ETHMAC_HELP_BIT_T bf;
} ETHMAC_HELP_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_SR_CONFIG */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_SR_CONFIG        0x000001C4U

#define MSK_ETHMAC_SR_CONFIG_RES1                    0x000007ffU
#define SRT_ETHMAC_SR_CONFIG_RES1                    0
#define MSK_ETHMAC_SR_CONFIG_ERROR_CODE              0x00003800U
#define SRT_ETHMAC_SR_CONFIG_ERROR_CODE              11
#define MSK_ETHMAC_SR_CONFIG_REAL_SENDING_TIME_VALID 0x00004000U
#define SRT_ETHMAC_SR_CONFIG_REAL_SENDING_TIME_VALID 14
#define MSK_ETHMAC_SR_CONFIG_START_TRANSMIT          0x00008000U
#define SRT_ETHMAC_SR_CONFIG_START_TRANSMIT          15
#define MSK_ETHMAC_SR_CONFIG_RES2                    0xffff0000U
#define SRT_ETHMAC_SR_CONFIG_RES2                    16

enum {
	BFW_ETHMAC_SR_CONFIG_RES1                    = 11, /* [10:0] */
	BFW_ETHMAC_SR_CONFIG_ERROR_CODE              = 3,  /* [13:11] */
	BFW_ETHMAC_SR_CONFIG_REAL_SENDING_TIME_VALID = 1,  /* [14] */
	BFW_ETHMAC_SR_CONFIG_START_TRANSMIT          = 1,  /* [15] */
	BFW_ETHMAC_SR_CONFIG_RES2                    = 16  /* [31:16] */
};

typedef struct ETHMAC_SR_CONFIG_BIT_Ttag {
	unsigned int RES1                    : BFW_ETHMAC_SR_CONFIG_RES1;                    /* res                                           */
	unsigned int ERROR_CODE              : BFW_ETHMAC_SR_CONFIG_ERROR_CODE;              /* error code at transmission                    */
	unsigned int REAL_SENDING_TIME_VALID : BFW_ETHMAC_SR_CONFIG_REAL_SENDING_TIME_VALID; /* 1: real transmit timestamp is valid           */
	unsigned int START_TRANSMIT          : BFW_ETHMAC_SR_CONFIG_START_TRANSMIT;          /* 0->1: start transmit, 1: transmit in progress */
	unsigned int RES2                    : BFW_ETHMAC_SR_CONFIG_RES2;                    /* unusable                                      */
} ETHMAC_SR_CONFIG_BIT_T;

typedef union {
	unsigned int           val;
	ETHMAC_SR_CONFIG_BIT_T bf;
} ETHMAC_SR_CONFIG_T;

/* --------------------------------------------------------------------- */
/* Register ETHMAC_SR_STATUS */
/* =>  */
/* => Mode:  */
/* --------------------------------------------------------------------- */

#define REL_Adr_ETHMAC_SR_STATUS        0x000001C8U

#define MSK_ETHMAC_SR_STATUS_RCVD_LEN   0x000007ffU
#define SRT_ETHMAC_SR_STATUS_RCVD_LEN   0
#define MSK_ETHMAC_SR_STATUS_ERROR_CODE 0x00003800U
#define SRT_ETHMAC_SR_STATUS_ERROR_CODE 11
#define MSK_ETHMAC_SR_STATUS_RES1       0x00004000U
#define SRT_ETHMAC_SR_STATUS_RES1       14
#define MSK_ETHMAC_SR_STATUS_FRAME_FIN  0x00008000U
#define SRT_ETHMAC_SR_STATUS_FRAME_FIN  15
#define MSK_ETHMAC_SR_STATUS_RES2       0xffff0000U
#define SRT_ETHMAC_SR_STATUS_RES2       16

enum {
	BFW_ETHMAC_SR_STATUS_RCVD_LEN   = 11, /* [10:0] */
	BFW_ETHMAC_SR_STATUS_ERROR_CODE = 3,  /* [13:11] */
	BFW_ETHMAC_SR_STATUS_RES1       = 1,  /* [14] */
	BFW_ETHMAC_SR_STATUS_FRAME_FIN  = 1,  /* [15] */
	BFW_ETHMAC_SR_STATUS_RES2       = 16  /* [31:16] */
};

typedef struct ETHMAC_SR_STATUS_BIT_Ttag {
	unsigned int RCVD_LEN   : BFW_ETHMAC_SR_STATUS_RCVD_LEN;   /* received frame length, not used in netX100 */
	unsigned int ERROR_CODE : BFW_ETHMAC_SR_STATUS_ERROR_CODE; /* error code at reception                    */
	unsigned int RES1       : BFW_ETHMAC_SR_STATUS_RES1;       /* res                                        */
	unsigned int FRAME_FIN  : BFW_ETHMAC_SR_STATUS_FRAME_FIN;  /* reception finished                         */
	unsigned int RES2       : BFW_ETHMAC_SR_STATUS_RES2;       /* unusable                                   */
} ETHMAC_SR_STATUS_BIT_T;

typedef union {
	unsigned int           val;
	ETHMAC_SR_STATUS_BIT_T bf;
} ETHMAC_SR_STATUS_T;




/*********************************************************************/
/* area structure definitions                                        */
/*********************************************************************/


typedef struct ETHMACBASE_AREA_Ttag
{
  volatile unsigned long  ulAREA_ETHMAC_XPEC_PROGRAM;
  volatile unsigned long  ulETHMAC_TX_BYTES_LEFT_FOR_UTX;
  volatile unsigned long  ulETHMAC_TX_BYTES_LEFT_FOR_DMA;
  volatile unsigned long  ulETHMAC_TX_RETRY;
  volatile unsigned long  ulETHMAC_TX_TIMESTAMP_NS;
  volatile unsigned long  ulETHMAC_TX_TIMESTAMP_S;
  volatile unsigned long  ulETHMAC_RX_DST_MAC_ADDRESS_LO;
  volatile unsigned long  ulETHMAC_RX_DST_MAC_ADDRESS_HI;
  volatile unsigned long  ulETHMAC_RX_SRC_MAC_ADDRESS_LO;
  volatile unsigned long  ulETHMAC_RX_SRC_MAC_ADDRESS_HI;
  volatile unsigned long  ulETHMAC_RX_ETH_TYPE_LEN;
  volatile unsigned long  ulETHMAC_RX_TAGGED_FIELD;
  volatile unsigned long  ulETHMAC_RX_WORKING;
  volatile unsigned long  ulETHMAC_RX_TIMESTAMP_NS;
  volatile unsigned long  ulETHMAC_RX_TIMESTAMP_S;
  volatile unsigned long  ulETHMAC_RX_DST_MAC_ADDRESS_HASH;
  volatile unsigned long  ulETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET;
  volatile unsigned long  ulETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK;
  volatile unsigned long  ulETHMAC_RX_SRC_MAC_ADDRESS_HASH;
  volatile unsigned long  ulETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET;
  volatile unsigned long  ulETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK;
  volatile unsigned long aulETHMAC_DMA_CFG[2];
  volatile unsigned long  ulETHMAC_PHY_LEDS_TEMP;
  volatile unsigned long  ulETHMAC_MONITORING_MODE;
  volatile unsigned long  ulETHMAC_LED_CONFIG;
  volatile unsigned long  ulETHMAC_PHY_LEDS_FLASH_PERIOD;
  volatile unsigned long  ulETHMAC_TRAFFIC_CLASS_ARRANGEMENT;
  volatile unsigned long  ulETHMAC_INTERRUPTS_ENABLE_IND_HI;
  volatile unsigned long  ulETHMAC_INTERRUPTS_ENABLE_IND_LO;
  volatile unsigned long  ulETHMAC_INTERRUPTS_ENABLE_CON_HI;
  volatile unsigned long  ulETHMAC_INTERRUPTS_ENABLE_CON_LO;
  volatile unsigned long  ulETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED;
  volatile unsigned long  ulETHMAC_INTERRUPTS_ENABLE_COL;
  volatile unsigned long  ulETHMAC_INTERRUPTS_ENABLE_EARLY_RCV;
  volatile unsigned long  ulETHMAC_INTERRUPTS_ENABLE_RX_ERR;
  volatile unsigned long  ulETHMAC_INTERRUPTS_ENABLE_TX_ERR;
  volatile unsigned long  ulETHMAC_LOCAL_MAC_ADDRESS_LO;
  volatile unsigned long  ulETHMAC_LOCAL_MAC_ADDRESS_HI;
  volatile unsigned long  ulETHMAC_MACID;
  volatile unsigned long  ulETHMAC_RESOURCE_TYPE_ID;
  volatile unsigned long  ulETHMAC_RESOURCE_INFO;
  volatile unsigned long  ulETHMAC_SYSTIME_BORDER_COPY;
  volatile unsigned long  ulETHMAC_FRAMES_TRANSMITTED_OK;
  volatile unsigned long  ulETHMAC_SINGLE_COLLISION_FRAMES;
  volatile unsigned long  ulETHMAC_MULTIPLE_COLLISION_FRAMES;
  volatile unsigned long  ulETHMAC_LATE_COLLISIONS;
  volatile unsigned long  ulETHMAC_LINK_DOWN_DURING_TRANSMISSION;
  volatile unsigned long  ulETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION;
  volatile unsigned long  ulETHMAC_FRAMES_RECEIVED_OK;
  volatile unsigned long  ulETHMAC_FRAME_CHECK_SEQUENCE_ERRORS;
  volatile unsigned long  ulETHMAC_ALIGNMENT_ERRORS;
  volatile unsigned long  ulETHMAC_FRAME_TOO_LONG_ERRORS;
  volatile unsigned long  ulETHMAC_RUNT_FRAMES_RECEIVED;
  volatile unsigned long  ulETHMAC_COLLISION_FRAGMENTS_RECEIVED;
  volatile unsigned long  ulETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE;
  volatile unsigned long  ulETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW;
  volatile unsigned long  ulETHMAC_TX_FATAL_ERROR;
  volatile unsigned long  ulETHMAC_RX_FATAL_ERROR;
  volatile unsigned long  ulETHMAC_PHY_LEDS;
  volatile unsigned long  ulAREA_ETHMAC_TX_TPU_ERROR_CODE_JUMP_TABLE_BASE;
  volatile unsigned long aulReserved0[3];
  volatile unsigned long  ulAREA_ETHMAC_TXBUF1;
  volatile unsigned long aulReserved1[7];
  volatile unsigned long  ulAREA_ETHMAC_TXBUF2;
  volatile unsigned long aulReserved2[7];
  volatile unsigned long  ulAREA_ETHMAC_RX_RPU_ERROR_CODE_JUMP_TABLE_BASE;
  volatile unsigned long aulReserved3[3];
  volatile unsigned long  ulAREA_ETHMAC_RXBUF1;
  volatile unsigned long aulReserved4[7];
  volatile unsigned long  ulAREA_ETHMAC_RXBUF2;
  volatile unsigned long aulReserved5[7];
  volatile unsigned long  ulAREA_ETHMAC_MULTICAST_HASH_TABLE;
  volatile unsigned long aulReserved6[7];
  volatile unsigned long  ulAREA_ETHMAC_PHY_LED_SELECT_JUMP_TABLE;
  volatile unsigned long aulReserved7[1];
  volatile unsigned long  ulETHMAC_XPEC2ARM_INTERRUPTS;
  volatile unsigned long  ulETHMAC_FIFO_ELEMENT;
  volatile unsigned long  ulETHMAC_HELP;
  volatile unsigned long  ulETHMAC_SR_CONFIG;
  volatile unsigned long  ulETHMAC_SR_STATUS;
} ETHMACBASE_AREA_T;


#endif

#ifndef __ethmac_struct_h
#define __ethmac_struct_h

typedef struct ETHMAC_XPEC_PROGRAM_Ttag
{
  volatile unsigned long aulDataField[1];
} ETHMAC_XPEC_PROGRAM_T;

typedef struct ETHMAC_TXAREABASE_Ttag
{
  volatile unsigned long ulETHMAC_TX_BYTES_LEFT_FOR_UTX;
  volatile unsigned long ulETHMAC_TX_BYTES_LEFT_FOR_DMA;
  volatile unsigned long ulETHMAC_TX_RETRY;
  volatile unsigned long ulETHMAC_TX_TIMESTAMP_NS;
  volatile unsigned long ulETHMAC_TX_TIMESTAMP_S;
} ETHMAC_TXAREABASE_T;

typedef struct ETHMAC_RXAREABASE_Ttag
{
  volatile unsigned long ulETHMAC_RX_DST_MAC_ADDRESS_LO;
  volatile unsigned long ulETHMAC_RX_DST_MAC_ADDRESS_HI;
  volatile unsigned long ulETHMAC_RX_SRC_MAC_ADDRESS_LO;
  volatile unsigned long ulETHMAC_RX_SRC_MAC_ADDRESS_HI;
  volatile unsigned long ulETHMAC_RX_ETH_TYPE_LEN;
  volatile unsigned long ulETHMAC_RX_TAGGED_FIELD;
  volatile unsigned long ulETHMAC_RX_WORKING;
  volatile unsigned long ulETHMAC_RX_TIMESTAMP_NS;
  volatile unsigned long ulETHMAC_RX_TIMESTAMP_S;
  volatile unsigned long ulETHMAC_RX_DST_MAC_ADDRESS_HASH;
  volatile unsigned long ulETHMAC_RX_DST_MAC_ADDRESS_HASH_OFFSET;
  volatile unsigned long ulETHMAC_RX_DST_MAC_ADDRESS_HASH_MASK;
  volatile unsigned long ulETHMAC_RX_SRC_MAC_ADDRESS_HASH;
  volatile unsigned long ulETHMAC_RX_SRC_MAC_ADDRESS_HASH_OFFSET;
  volatile unsigned long ulETHMAC_RX_SRC_MAC_ADDRESS_HASH_MASK;
  volatile unsigned long ulETHMAC_DMA0_CFG;
  volatile unsigned long ulETHMAC_DMA1_CFG;
  volatile unsigned long ulETHMAC_PHY_LEDS_TEMP;
} ETHMAC_RXAREABASE_T;

typedef struct ETHMAC_CONFIG_AREA_BASE_Ttag
{
  volatile unsigned long ulETHMAC_MONITORING_MODE;
  volatile unsigned long ulETHMAC_LED_CONFIG;
  volatile unsigned long ulETHMAC_PHY_LEDS_FLASH_PERIOD;
  volatile unsigned long ulETHMAC_TRAFFIC_CLASS_ARRANGEMENT;
  volatile unsigned long ulETHMAC_INTERRUPTS_ENABLE_IND_HI;
  volatile unsigned long ulETHMAC_INTERRUPTS_ENABLE_IND_LO;
  volatile unsigned long ulETHMAC_INTERRUPTS_ENABLE_CON_HI;
  volatile unsigned long ulETHMAC_INTERRUPTS_ENABLE_CON_LO;
  volatile unsigned long ulETHMAC_INTERRUPTS_ENABLE_LINK_CHANGED;
  volatile unsigned long ulETHMAC_INTERRUPTS_ENABLE_COL;
  volatile unsigned long ulETHMAC_INTERRUPTS_ENABLE_EARLY_RCV;
  volatile unsigned long ulETHMAC_INTERRUPTS_ENABLE_RX_ERR;
  volatile unsigned long ulETHMAC_INTERRUPTS_ENABLE_TX_ERR;
  volatile unsigned long ulETHMAC_LOCAL_MAC_ADDRESS_LO;
  volatile unsigned long ulETHMAC_LOCAL_MAC_ADDRESS_HI;
  volatile unsigned long ulETHMAC_MACID;
  volatile unsigned long ulETHMAC_RESOURCE_TYPE_ID;
  volatile unsigned long ulETHMAC_RESOURCE_INFO;
  volatile unsigned long ulETHMAC_SYSTIME_BORDER_COPY;
} ETHMAC_CONFIG_AREA_BASE_T;

typedef struct ETHMAC_STATUS_AREA_BASE_Ttag
{
  volatile unsigned long ulETHMAC_FRAMES_TRANSMITTED_OK;
  volatile unsigned long ulETHMAC_SINGLE_COLLISION_FRAMES;
  volatile unsigned long ulETHMAC_MULTIPLE_COLLISION_FRAMES;
  volatile unsigned long ulETHMAC_LATE_COLLISIONS;
  volatile unsigned long ulETHMAC_LINK_DOWN_DURING_TRANSMISSION;
  volatile unsigned long ulETHMAC_UTX_UNDERFLOW_DURING_TRANSMISSION;
  volatile unsigned long ulETHMAC_FRAMES_RECEIVED_OK;
  volatile unsigned long ulETHMAC_FRAME_CHECK_SEQUENCE_ERRORS;
  volatile unsigned long ulETHMAC_ALIGNMENT_ERRORS;
  volatile unsigned long ulETHMAC_FRAME_TOO_LONG_ERRORS;
  volatile unsigned long ulETHMAC_RUNT_FRAMES_RECEIVED;
  volatile unsigned long ulETHMAC_COLLISION_FRAGMENTS_RECEIVED;
  volatile unsigned long ulETHMAC_FRAMES_DROPPED_DUE_LOW_RESOURCE;
  volatile unsigned long ulETHMAC_FRAMES_DROPPED_DUE_URX_OVERFLOW;
  volatile unsigned long ulETHMAC_TX_FATAL_ERROR;
  volatile unsigned long ulETHMAC_RX_FATAL_ERROR;
  volatile unsigned long ulETHMAC_PHY_LEDS;
} ETHMAC_STATUS_AREA_BASE_T;

typedef struct ETHMAC_TX_TPU_ERROR_CODE_JUMP_TABLE_BASE_Ttag
{
  volatile unsigned long aulDataField[4];
} ETHMAC_TX_TPU_ERROR_CODE_JUMP_TABLE_BASE_T;

typedef struct ETHMAC_TXBUF1_Ttag
{
  volatile unsigned long aulDataField[8];
} ETHMAC_TXBUF1_T;

typedef struct ETHMAC_TXBUF2_Ttag
{
  volatile unsigned long aulDataField[8];
} ETHMAC_TXBUF2_T;

typedef struct ETHMAC_RX_RPU_ERROR_CODE_JUMP_TABLE_BASE_Ttag
{
  volatile unsigned long aulDataField[4];
} ETHMAC_RX_RPU_ERROR_CODE_JUMP_TABLE_BASE_T;

typedef struct ETHMAC_RXBUF1_Ttag
{
  volatile unsigned long aulDataField[8];
} ETHMAC_RXBUF1_T;

typedef struct ETHMAC_RXBUF2_Ttag
{
  volatile unsigned long aulDataField[8];
} ETHMAC_RXBUF2_T;

typedef struct ETHMAC_MULTICAST_HASH_TABLE_Ttag
{
  volatile unsigned long aulDataField[8];
} ETHMAC_MULTICAST_HASH_TABLE_T;

typedef struct ETHMAC_PHY_LED_SELECT_JUMP_TABLE_Ttag
{
  volatile unsigned long aulDataField[2];
} ETHMAC_PHY_LED_SELECT_JUMP_TABLE_T;

typedef struct ETHMAC_RESERVED_Ttag
{
  volatile unsigned long ulETHMAC_XPEC2ARM_INTERRUPTS;
  volatile unsigned long ulETHMAC_FIFO_ELEMENT;
  volatile unsigned long ulETHMAC_HELP;
  volatile unsigned long ulETHMAC_SR_CONFIG;
  volatile unsigned long ulETHMAC_SR_STATUS;
} ETHMAC_RESERVED_T;

/* combined 14 structures */
typedef struct ETHMAC_XPEC_DPMtag {
  ETHMAC_XPEC_PROGRAM_T tETHMAC_XPEC_PROGRAM;
  ETHMAC_TXAREABASE_T tETHMAC_TXAREABASE;
  ETHMAC_RXAREABASE_T tETHMAC_RXAREABASE;
  ETHMAC_CONFIG_AREA_BASE_T tETHMAC_CONFIG_AREA_BASE;
  ETHMAC_STATUS_AREA_BASE_T tETHMAC_STATUS_AREA_BASE;
  ETHMAC_TX_TPU_ERROR_CODE_JUMP_TABLE_BASE_T tETHMAC_TX_TPU_ERROR_CODE_JUMP_TABLE_BASE;
  ETHMAC_TXBUF1_T tETHMAC_TXBUF1;
  ETHMAC_TXBUF2_T tETHMAC_TXBUF2;
  ETHMAC_RX_RPU_ERROR_CODE_JUMP_TABLE_BASE_T tETHMAC_RX_RPU_ERROR_CODE_JUMP_TABLE_BASE;
  ETHMAC_RXBUF1_T tETHMAC_RXBUF1;
  ETHMAC_RXBUF2_T tETHMAC_RXBUF2;
  ETHMAC_MULTICAST_HASH_TABLE_T tETHMAC_MULTICAST_HASH_TABLE;
  ETHMAC_PHY_LED_SELECT_JUMP_TABLE_T tETHMAC_PHY_LED_SELECT_JUMP_TABLE;
} ETHMAC_XPEC_DPM;

#endif /* __ethmac_struct_h */

