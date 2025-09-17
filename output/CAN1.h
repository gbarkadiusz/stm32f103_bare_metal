/**
 * @file    CAN1.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Controller area network
 *
 * This header file provides register definitions and bitfield access
 * for the CAN1 peripheral of the STM32F103.
 */

#ifndef _CAN1_H
#define _CAN1_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t INRQ : 1; // bit 0 INRQ
    volatile uint32_t SLEEP : 1; // bit 1 SLEEP
    volatile uint32_t TXFP : 1; // bit 2 TXFP
    volatile uint32_t RFLM : 1; // bit 3 RFLM
    volatile uint32_t NART : 1; // bit 4 NART
    volatile uint32_t AWUM : 1; // bit 5 AWUM
    volatile uint32_t ABOM : 1; // bit 6 ABOM
    volatile uint32_t TTCM : 1; // bit 7 TTCM
    volatile uint32_t RESERVED0 : 1; // bit 8
    volatile uint32_t RESERVED1 : 1; // bit 9
    volatile uint32_t RESERVED2 : 1; // bit 10
    volatile uint32_t RESERVED3 : 1; // bit 11
    volatile uint32_t RESERVED4 : 1; // bit 12
    volatile uint32_t RESERVED5 : 1; // bit 13
    volatile uint32_t RESERVED6 : 1; // bit 14
    volatile uint32_t RESET : 1; // bit 15 RESET
    volatile uint32_t DBF : 1; // bit 16 DBF
    volatile uint32_t RESERVED7 : 1; // bit 17
    volatile uint32_t RESERVED8 : 1; // bit 18
    volatile uint32_t RESERVED9 : 1; // bit 19
    volatile uint32_t RESERVED10 : 1; // bit 20
    volatile uint32_t RESERVED11 : 1; // bit 21
    volatile uint32_t RESERVED12 : 1; // bit 22
    volatile uint32_t RESERVED13 : 1; // bit 23
    volatile uint32_t RESERVED14 : 1; // bit 24
    volatile uint32_t RESERVED15 : 1; // bit 25
    volatile uint32_t RESERVED16 : 1; // bit 26
    volatile uint32_t RESERVED17 : 1; // bit 27
    volatile uint32_t RESERVED18 : 1; // bit 28
    volatile uint32_t RESERVED19 : 1; // bit 29
    volatile uint32_t RESERVED20 : 1; // bit 30
    volatile uint32_t RESERVED21 : 1; // bit 31
  } BITS;
} CAN1_CAN_MCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t INAK : 1; // bit 0 INAK
    volatile uint32_t SLAK : 1; // bit 1 SLAK
    volatile uint32_t ERRI : 1; // bit 2 ERRI
    volatile uint32_t WKUI : 1; // bit 3 WKUI
    volatile uint32_t SLAKI : 1; // bit 4 SLAKI
    volatile uint32_t RESERVED0 : 1; // bit 5
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t RESERVED2 : 1; // bit 7
    volatile uint32_t TXM : 1; // bit 8 TXM
    volatile uint32_t RXM : 1; // bit 9 RXM
    volatile uint32_t SAMP : 1; // bit 10 SAMP
    volatile uint32_t RX : 1; // bit 11 RX
    volatile uint32_t RESERVED3 : 1; // bit 12
    volatile uint32_t RESERVED4 : 1; // bit 13
    volatile uint32_t RESERVED5 : 1; // bit 14
    volatile uint32_t RESERVED6 : 1; // bit 15
    volatile uint32_t RESERVED7 : 1; // bit 16
    volatile uint32_t RESERVED8 : 1; // bit 17
    volatile uint32_t RESERVED9 : 1; // bit 18
    volatile uint32_t RESERVED10 : 1; // bit 19
    volatile uint32_t RESERVED11 : 1; // bit 20
    volatile uint32_t RESERVED12 : 1; // bit 21
    volatile uint32_t RESERVED13 : 1; // bit 22
    volatile uint32_t RESERVED14 : 1; // bit 23
    volatile uint32_t RESERVED15 : 1; // bit 24
    volatile uint32_t RESERVED16 : 1; // bit 25
    volatile uint32_t RESERVED17 : 1; // bit 26
    volatile uint32_t RESERVED18 : 1; // bit 27
    volatile uint32_t RESERVED19 : 1; // bit 28
    volatile uint32_t RESERVED20 : 1; // bit 29
    volatile uint32_t RESERVED21 : 1; // bit 30
    volatile uint32_t RESERVED22 : 1; // bit 31
  } BITS;
} CAN1_CAN_MSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RQCP0 : 1; // bit 0 RQCP0
    volatile uint32_t TXOK0 : 1; // bit 1 TXOK0
    volatile uint32_t ALST0 : 1; // bit 2 ALST0
    volatile uint32_t TERR0 : 1; // bit 3 TERR0
    volatile uint32_t RESERVED0 : 1; // bit 4
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t ABRQ0 : 1; // bit 7 ABRQ0
    volatile uint32_t RQCP1 : 1; // bit 8 RQCP1
    volatile uint32_t TXOK1 : 1; // bit 9 TXOK1
    volatile uint32_t ALST1 : 1; // bit 10 ALST1
    volatile uint32_t TERR1 : 1; // bit 11 TERR1
    volatile uint32_t RESERVED3 : 1; // bit 12
    volatile uint32_t RESERVED4 : 1; // bit 13
    volatile uint32_t RESERVED5 : 1; // bit 14
    volatile uint32_t ABRQ1 : 1; // bit 15 ABRQ1
    volatile uint32_t RQCP2 : 1; // bit 16 RQCP2
    volatile uint32_t TXOK2 : 1; // bit 17 TXOK2
    volatile uint32_t ALST2 : 1; // bit 18 ALST2
    volatile uint32_t TERR2 : 1; // bit 19 TERR2
    volatile uint32_t RESERVED6 : 1; // bit 20
    volatile uint32_t RESERVED7 : 1; // bit 21
    volatile uint32_t RESERVED8 : 1; // bit 22
    volatile uint32_t ABRQ2 : 1; // bit 23 ABRQ2
    volatile uint32_t CODE : 2; // bit 24 CODE
    volatile uint32_t TME0 : 1; // bit 26 Lowest priority flag for mailbox 0
    volatile uint32_t TME1 : 1; // bit 27 Lowest priority flag for mailbox 1
    volatile uint32_t TME2 : 1; // bit 28 Lowest priority flag for mailbox 2
    volatile uint32_t LOW0 : 1; // bit 29 Lowest priority flag for mailbox 0
    volatile uint32_t LOW1 : 1; // bit 30 Lowest priority flag for mailbox 1
    volatile uint32_t LOW2 : 1; // bit 31 Lowest priority flag for mailbox 2
  } BITS;
} CAN1_CAN_TSR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FMP0 : 2; // bit 0 FMP0
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t FULL0 : 1; // bit 3 FULL0
    volatile uint32_t FOVR0 : 1; // bit 4 FOVR0
    volatile uint32_t RFOM0 : 1; // bit 5 RFOM0
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t RESERVED2 : 1; // bit 7
    volatile uint32_t RESERVED3 : 1; // bit 8
    volatile uint32_t RESERVED4 : 1; // bit 9
    volatile uint32_t RESERVED5 : 1; // bit 10
    volatile uint32_t RESERVED6 : 1; // bit 11
    volatile uint32_t RESERVED7 : 1; // bit 12
    volatile uint32_t RESERVED8 : 1; // bit 13
    volatile uint32_t RESERVED9 : 1; // bit 14
    volatile uint32_t RESERVED10 : 1; // bit 15
    volatile uint32_t RESERVED11 : 1; // bit 16
    volatile uint32_t RESERVED12 : 1; // bit 17
    volatile uint32_t RESERVED13 : 1; // bit 18
    volatile uint32_t RESERVED14 : 1; // bit 19
    volatile uint32_t RESERVED15 : 1; // bit 20
    volatile uint32_t RESERVED16 : 1; // bit 21
    volatile uint32_t RESERVED17 : 1; // bit 22
    volatile uint32_t RESERVED18 : 1; // bit 23
    volatile uint32_t RESERVED19 : 1; // bit 24
    volatile uint32_t RESERVED20 : 1; // bit 25
    volatile uint32_t RESERVED21 : 1; // bit 26
    volatile uint32_t RESERVED22 : 1; // bit 27
    volatile uint32_t RESERVED23 : 1; // bit 28
    volatile uint32_t RESERVED24 : 1; // bit 29
    volatile uint32_t RESERVED25 : 1; // bit 30
    volatile uint32_t RESERVED26 : 1; // bit 31
  } BITS;
} CAN1_CAN_RF0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FMP1 : 2; // bit 0 FMP1
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t FULL1 : 1; // bit 3 FULL1
    volatile uint32_t FOVR1 : 1; // bit 4 FOVR1
    volatile uint32_t RFOM1 : 1; // bit 5 RFOM1
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t RESERVED2 : 1; // bit 7
    volatile uint32_t RESERVED3 : 1; // bit 8
    volatile uint32_t RESERVED4 : 1; // bit 9
    volatile uint32_t RESERVED5 : 1; // bit 10
    volatile uint32_t RESERVED6 : 1; // bit 11
    volatile uint32_t RESERVED7 : 1; // bit 12
    volatile uint32_t RESERVED8 : 1; // bit 13
    volatile uint32_t RESERVED9 : 1; // bit 14
    volatile uint32_t RESERVED10 : 1; // bit 15
    volatile uint32_t RESERVED11 : 1; // bit 16
    volatile uint32_t RESERVED12 : 1; // bit 17
    volatile uint32_t RESERVED13 : 1; // bit 18
    volatile uint32_t RESERVED14 : 1; // bit 19
    volatile uint32_t RESERVED15 : 1; // bit 20
    volatile uint32_t RESERVED16 : 1; // bit 21
    volatile uint32_t RESERVED17 : 1; // bit 22
    volatile uint32_t RESERVED18 : 1; // bit 23
    volatile uint32_t RESERVED19 : 1; // bit 24
    volatile uint32_t RESERVED20 : 1; // bit 25
    volatile uint32_t RESERVED21 : 1; // bit 26
    volatile uint32_t RESERVED22 : 1; // bit 27
    volatile uint32_t RESERVED23 : 1; // bit 28
    volatile uint32_t RESERVED24 : 1; // bit 29
    volatile uint32_t RESERVED25 : 1; // bit 30
    volatile uint32_t RESERVED26 : 1; // bit 31
  } BITS;
} CAN1_CAN_RF1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TMEIE : 1; // bit 0 TMEIE
    volatile uint32_t FMPIE0 : 1; // bit 1 FMPIE0
    volatile uint32_t FFIE0 : 1; // bit 2 FFIE0
    volatile uint32_t FOVIE0 : 1; // bit 3 FOVIE0
    volatile uint32_t FMPIE1 : 1; // bit 4 FMPIE1
    volatile uint32_t FFIE1 : 1; // bit 5 FFIE1
    volatile uint32_t FOVIE1 : 1; // bit 6 FOVIE1
    volatile uint32_t RESERVED0 : 1; // bit 7
    volatile uint32_t EWGIE : 1; // bit 8 EWGIE
    volatile uint32_t EPVIE : 1; // bit 9 EPVIE
    volatile uint32_t BOFIE : 1; // bit 10 BOFIE
    volatile uint32_t LECIE : 1; // bit 11 LECIE
    volatile uint32_t RESERVED1 : 1; // bit 12
    volatile uint32_t RESERVED2 : 1; // bit 13
    volatile uint32_t RESERVED3 : 1; // bit 14
    volatile uint32_t ERRIE : 1; // bit 15 ERRIE
    volatile uint32_t WKUIE : 1; // bit 16 WKUIE
    volatile uint32_t SLKIE : 1; // bit 17 SLKIE
    volatile uint32_t RESERVED4 : 1; // bit 18
    volatile uint32_t RESERVED5 : 1; // bit 19
    volatile uint32_t RESERVED6 : 1; // bit 20
    volatile uint32_t RESERVED7 : 1; // bit 21
    volatile uint32_t RESERVED8 : 1; // bit 22
    volatile uint32_t RESERVED9 : 1; // bit 23
    volatile uint32_t RESERVED10 : 1; // bit 24
    volatile uint32_t RESERVED11 : 1; // bit 25
    volatile uint32_t RESERVED12 : 1; // bit 26
    volatile uint32_t RESERVED13 : 1; // bit 27
    volatile uint32_t RESERVED14 : 1; // bit 28
    volatile uint32_t RESERVED15 : 1; // bit 29
    volatile uint32_t RESERVED16 : 1; // bit 30
    volatile uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} CAN1_CAN_IER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EWGF : 1; // bit 0 EWGF
    volatile uint32_t EPVF : 1; // bit 1 EPVF
    volatile uint32_t BOFF : 1; // bit 2 BOFF
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t LEC : 3; // bit 4 LEC
    volatile uint32_t RESERVED1 : 1; // bit 7
    volatile uint32_t RESERVED2 : 1; // bit 8
    volatile uint32_t RESERVED3 : 1; // bit 9
    volatile uint32_t RESERVED4 : 1; // bit 10
    volatile uint32_t RESERVED5 : 1; // bit 11
    volatile uint32_t RESERVED6 : 1; // bit 12
    volatile uint32_t RESERVED7 : 1; // bit 13
    volatile uint32_t RESERVED8 : 1; // bit 14
    volatile uint32_t RESERVED9 : 1; // bit 15
    volatile uint32_t TEC : 8; // bit 16 TEC
    volatile uint32_t REC : 8; // bit 24 REC
  } BITS;
} CAN1_CAN_ESR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t BRP : 10; // bit 0 BRP
    volatile uint32_t RESERVED0 : 1; // bit 10
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t TS1 : 4; // bit 16 TS1
    volatile uint32_t TS2 : 3; // bit 20 TS2
    volatile uint32_t RESERVED6 : 1; // bit 23
    volatile uint32_t SJW : 2; // bit 24 SJW
    volatile uint32_t RESERVED7 : 1; // bit 26
    volatile uint32_t RESERVED8 : 1; // bit 27
    volatile uint32_t RESERVED9 : 1; // bit 28
    volatile uint32_t RESERVED10 : 1; // bit 29
    volatile uint32_t LBKM : 1; // bit 30 LBKM
    volatile uint32_t SILM : 1; // bit 31 SILM
  } BITS;
} CAN1_CAN_BTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TXRQ : 1; // bit 0 TXRQ
    volatile uint32_t RTR : 1; // bit 1 RTR
    volatile uint32_t IDE : 1; // bit 2 IDE
    volatile uint32_t EXID : 18; // bit 3 EXID
    volatile uint32_t STID : 11; // bit 21 STID
  } BITS;
} CAN1_CAN_TI0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DLC : 4; // bit 0 DLC
    volatile uint32_t RESERVED0 : 1; // bit 4
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t TGT : 1; // bit 8 TGT
    volatile uint32_t RESERVED4 : 1; // bit 9
    volatile uint32_t RESERVED5 : 1; // bit 10
    volatile uint32_t RESERVED6 : 1; // bit 11
    volatile uint32_t RESERVED7 : 1; // bit 12
    volatile uint32_t RESERVED8 : 1; // bit 13
    volatile uint32_t RESERVED9 : 1; // bit 14
    volatile uint32_t RESERVED10 : 1; // bit 15
    volatile uint32_t TIME : 16; // bit 16 TIME
  } BITS;
} CAN1_CAN_TDT0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA0 : 8; // bit 0 DATA0
    volatile uint32_t DATA1 : 8; // bit 8 DATA1
    volatile uint32_t DATA2 : 8; // bit 16 DATA2
    volatile uint32_t DATA3 : 8; // bit 24 DATA3
  } BITS;
} CAN1_CAN_TDL0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA4 : 8; // bit 0 DATA4
    volatile uint32_t DATA5 : 8; // bit 8 DATA5
    volatile uint32_t DATA6 : 8; // bit 16 DATA6
    volatile uint32_t DATA7 : 8; // bit 24 DATA7
  } BITS;
} CAN1_CAN_TDH0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TXRQ : 1; // bit 0 TXRQ
    volatile uint32_t RTR : 1; // bit 1 RTR
    volatile uint32_t IDE : 1; // bit 2 IDE
    volatile uint32_t EXID : 18; // bit 3 EXID
    volatile uint32_t STID : 11; // bit 21 STID
  } BITS;
} CAN1_CAN_TI1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DLC : 4; // bit 0 DLC
    volatile uint32_t RESERVED0 : 1; // bit 4
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t TGT : 1; // bit 8 TGT
    volatile uint32_t RESERVED4 : 1; // bit 9
    volatile uint32_t RESERVED5 : 1; // bit 10
    volatile uint32_t RESERVED6 : 1; // bit 11
    volatile uint32_t RESERVED7 : 1; // bit 12
    volatile uint32_t RESERVED8 : 1; // bit 13
    volatile uint32_t RESERVED9 : 1; // bit 14
    volatile uint32_t RESERVED10 : 1; // bit 15
    volatile uint32_t TIME : 16; // bit 16 TIME
  } BITS;
} CAN1_CAN_TDT1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA0 : 8; // bit 0 DATA0
    volatile uint32_t DATA1 : 8; // bit 8 DATA1
    volatile uint32_t DATA2 : 8; // bit 16 DATA2
    volatile uint32_t DATA3 : 8; // bit 24 DATA3
  } BITS;
} CAN1_CAN_TDL1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA4 : 8; // bit 0 DATA4
    volatile uint32_t DATA5 : 8; // bit 8 DATA5
    volatile uint32_t DATA6 : 8; // bit 16 DATA6
    volatile uint32_t DATA7 : 8; // bit 24 DATA7
  } BITS;
} CAN1_CAN_TDH1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t TXRQ : 1; // bit 0 TXRQ
    volatile uint32_t RTR : 1; // bit 1 RTR
    volatile uint32_t IDE : 1; // bit 2 IDE
    volatile uint32_t EXID : 18; // bit 3 EXID
    volatile uint32_t STID : 11; // bit 21 STID
  } BITS;
} CAN1_CAN_TI2R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DLC : 4; // bit 0 DLC
    volatile uint32_t RESERVED0 : 1; // bit 4
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t TGT : 1; // bit 8 TGT
    volatile uint32_t RESERVED4 : 1; // bit 9
    volatile uint32_t RESERVED5 : 1; // bit 10
    volatile uint32_t RESERVED6 : 1; // bit 11
    volatile uint32_t RESERVED7 : 1; // bit 12
    volatile uint32_t RESERVED8 : 1; // bit 13
    volatile uint32_t RESERVED9 : 1; // bit 14
    volatile uint32_t RESERVED10 : 1; // bit 15
    volatile uint32_t TIME : 16; // bit 16 TIME
  } BITS;
} CAN1_CAN_TDT2R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA0 : 8; // bit 0 DATA0
    volatile uint32_t DATA1 : 8; // bit 8 DATA1
    volatile uint32_t DATA2 : 8; // bit 16 DATA2
    volatile uint32_t DATA3 : 8; // bit 24 DATA3
  } BITS;
} CAN1_CAN_TDL2R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA4 : 8; // bit 0 DATA4
    volatile uint32_t DATA5 : 8; // bit 8 DATA5
    volatile uint32_t DATA6 : 8; // bit 16 DATA6
    volatile uint32_t DATA7 : 8; // bit 24 DATA7
  } BITS;
} CAN1_CAN_TDH2R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RTR : 1; // bit 1 RTR
    volatile uint32_t IDE : 1; // bit 2 IDE
    volatile uint32_t EXID : 18; // bit 3 EXID
    volatile uint32_t STID : 11; // bit 21 STID
  } BITS;
} CAN1_CAN_RI0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DLC : 4; // bit 0 DLC
    volatile uint32_t RESERVED0 : 1; // bit 4
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t FMI : 8; // bit 8 FMI
    volatile uint32_t TIME : 16; // bit 16 TIME
  } BITS;
} CAN1_CAN_RDT0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA0 : 8; // bit 0 DATA0
    volatile uint32_t DATA1 : 8; // bit 8 DATA1
    volatile uint32_t DATA2 : 8; // bit 16 DATA2
    volatile uint32_t DATA3 : 8; // bit 24 DATA3
  } BITS;
} CAN1_CAN_RDL0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA4 : 8; // bit 0 DATA4
    volatile uint32_t DATA5 : 8; // bit 8 DATA5
    volatile uint32_t DATA6 : 8; // bit 16 DATA6
    volatile uint32_t DATA7 : 8; // bit 24 DATA7
  } BITS;
} CAN1_CAN_RDH0R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RTR : 1; // bit 1 RTR
    volatile uint32_t IDE : 1; // bit 2 IDE
    volatile uint32_t EXID : 18; // bit 3 EXID
    volatile uint32_t STID : 11; // bit 21 STID
  } BITS;
} CAN1_CAN_RI1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DLC : 4; // bit 0 DLC
    volatile uint32_t RESERVED0 : 1; // bit 4
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t FMI : 8; // bit 8 FMI
    volatile uint32_t TIME : 16; // bit 16 TIME
  } BITS;
} CAN1_CAN_RDT1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA0 : 8; // bit 0 DATA0
    volatile uint32_t DATA1 : 8; // bit 8 DATA1
    volatile uint32_t DATA2 : 8; // bit 16 DATA2
    volatile uint32_t DATA3 : 8; // bit 24 DATA3
  } BITS;
} CAN1_CAN_RDL1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA4 : 8; // bit 0 DATA4
    volatile uint32_t DATA5 : 8; // bit 8 DATA5
    volatile uint32_t DATA6 : 8; // bit 16 DATA6
    volatile uint32_t DATA7 : 8; // bit 24 DATA7
  } BITS;
} CAN1_CAN_RDH1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FINIT : 1; // bit 0 FINIT
    volatile uint32_t RESERVED0 : 1; // bit 1
    volatile uint32_t RESERVED1 : 1; // bit 2
    volatile uint32_t RESERVED2 : 1; // bit 3
    volatile uint32_t RESERVED3 : 1; // bit 4
    volatile uint32_t RESERVED4 : 1; // bit 5
    volatile uint32_t RESERVED5 : 1; // bit 6
    volatile uint32_t RESERVED6 : 1; // bit 7
    volatile uint32_t RESERVED7 : 1; // bit 8
    volatile uint32_t RESERVED8 : 1; // bit 9
    volatile uint32_t RESERVED9 : 1; // bit 10
    volatile uint32_t RESERVED10 : 1; // bit 11
    volatile uint32_t RESERVED11 : 1; // bit 12
    volatile uint32_t RESERVED12 : 1; // bit 13
    volatile uint32_t RESERVED13 : 1; // bit 14
    volatile uint32_t RESERVED14 : 1; // bit 15
    volatile uint32_t RESERVED15 : 1; // bit 16
    volatile uint32_t RESERVED16 : 1; // bit 17
    volatile uint32_t RESERVED17 : 1; // bit 18
    volatile uint32_t RESERVED18 : 1; // bit 19
    volatile uint32_t RESERVED19 : 1; // bit 20
    volatile uint32_t RESERVED20 : 1; // bit 21
    volatile uint32_t RESERVED21 : 1; // bit 22
    volatile uint32_t RESERVED22 : 1; // bit 23
    volatile uint32_t RESERVED23 : 1; // bit 24
    volatile uint32_t RESERVED24 : 1; // bit 25
    volatile uint32_t RESERVED25 : 1; // bit 26
    volatile uint32_t RESERVED26 : 1; // bit 27
    volatile uint32_t RESERVED27 : 1; // bit 28
    volatile uint32_t RESERVED28 : 1; // bit 29
    volatile uint32_t RESERVED29 : 1; // bit 30
    volatile uint32_t RESERVED30 : 1; // bit 31
  } BITS;
} CAN1_CAN_FMR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FBM0 : 1; // bit 0 Filter mode
    volatile uint32_t FBM1 : 1; // bit 1 Filter mode
    volatile uint32_t FBM2 : 1; // bit 2 Filter mode
    volatile uint32_t FBM3 : 1; // bit 3 Filter mode
    volatile uint32_t FBM4 : 1; // bit 4 Filter mode
    volatile uint32_t FBM5 : 1; // bit 5 Filter mode
    volatile uint32_t FBM6 : 1; // bit 6 Filter mode
    volatile uint32_t FBM7 : 1; // bit 7 Filter mode
    volatile uint32_t FBM8 : 1; // bit 8 Filter mode
    volatile uint32_t FBM9 : 1; // bit 9 Filter mode
    volatile uint32_t FBM10 : 1; // bit 10 Filter mode
    volatile uint32_t FBM11 : 1; // bit 11 Filter mode
    volatile uint32_t FBM12 : 1; // bit 12 Filter mode
    volatile uint32_t FBM13 : 1; // bit 13 Filter mode
    volatile uint32_t RESERVED0 : 1; // bit 14
    volatile uint32_t RESERVED1 : 1; // bit 15
    volatile uint32_t RESERVED2 : 1; // bit 16
    volatile uint32_t RESERVED3 : 1; // bit 17
    volatile uint32_t RESERVED4 : 1; // bit 18
    volatile uint32_t RESERVED5 : 1; // bit 19
    volatile uint32_t RESERVED6 : 1; // bit 20
    volatile uint32_t RESERVED7 : 1; // bit 21
    volatile uint32_t RESERVED8 : 1; // bit 22
    volatile uint32_t RESERVED9 : 1; // bit 23
    volatile uint32_t RESERVED10 : 1; // bit 24
    volatile uint32_t RESERVED11 : 1; // bit 25
    volatile uint32_t RESERVED12 : 1; // bit 26
    volatile uint32_t RESERVED13 : 1; // bit 27
    volatile uint32_t RESERVED14 : 1; // bit 28
    volatile uint32_t RESERVED15 : 1; // bit 29
    volatile uint32_t RESERVED16 : 1; // bit 30
    volatile uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} CAN1_CAN_FM1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FSC0 : 1; // bit 0 Filter scale configuration
    volatile uint32_t FSC1 : 1; // bit 1 Filter scale configuration
    volatile uint32_t FSC2 : 1; // bit 2 Filter scale configuration
    volatile uint32_t FSC3 : 1; // bit 3 Filter scale configuration
    volatile uint32_t FSC4 : 1; // bit 4 Filter scale configuration
    volatile uint32_t FSC5 : 1; // bit 5 Filter scale configuration
    volatile uint32_t FSC6 : 1; // bit 6 Filter scale configuration
    volatile uint32_t FSC7 : 1; // bit 7 Filter scale configuration
    volatile uint32_t FSC8 : 1; // bit 8 Filter scale configuration
    volatile uint32_t FSC9 : 1; // bit 9 Filter scale configuration
    volatile uint32_t FSC10 : 1; // bit 10 Filter scale configuration
    volatile uint32_t FSC11 : 1; // bit 11 Filter scale configuration
    volatile uint32_t FSC12 : 1; // bit 12 Filter scale configuration
    volatile uint32_t FSC13 : 1; // bit 13 Filter scale configuration
    volatile uint32_t RESERVED0 : 1; // bit 14
    volatile uint32_t RESERVED1 : 1; // bit 15
    volatile uint32_t RESERVED2 : 1; // bit 16
    volatile uint32_t RESERVED3 : 1; // bit 17
    volatile uint32_t RESERVED4 : 1; // bit 18
    volatile uint32_t RESERVED5 : 1; // bit 19
    volatile uint32_t RESERVED6 : 1; // bit 20
    volatile uint32_t RESERVED7 : 1; // bit 21
    volatile uint32_t RESERVED8 : 1; // bit 22
    volatile uint32_t RESERVED9 : 1; // bit 23
    volatile uint32_t RESERVED10 : 1; // bit 24
    volatile uint32_t RESERVED11 : 1; // bit 25
    volatile uint32_t RESERVED12 : 1; // bit 26
    volatile uint32_t RESERVED13 : 1; // bit 27
    volatile uint32_t RESERVED14 : 1; // bit 28
    volatile uint32_t RESERVED15 : 1; // bit 29
    volatile uint32_t RESERVED16 : 1; // bit 30
    volatile uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} CAN1_CAN_FS1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FFA0 : 1; // bit 0 Filter FIFO assignment for filter 0
    volatile uint32_t FFA1 : 1; // bit 1 Filter FIFO assignment for filter 1
    volatile uint32_t FFA2 : 1; // bit 2 Filter FIFO assignment for filter 2
    volatile uint32_t FFA3 : 1; // bit 3 Filter FIFO assignment for filter 3
    volatile uint32_t FFA4 : 1; // bit 4 Filter FIFO assignment for filter 4
    volatile uint32_t FFA5 : 1; // bit 5 Filter FIFO assignment for filter 5
    volatile uint32_t FFA6 : 1; // bit 6 Filter FIFO assignment for filter 6
    volatile uint32_t FFA7 : 1; // bit 7 Filter FIFO assignment for filter 7
    volatile uint32_t FFA8 : 1; // bit 8 Filter FIFO assignment for filter 8
    volatile uint32_t FFA9 : 1; // bit 9 Filter FIFO assignment for filter 9
    volatile uint32_t FFA10 : 1; // bit 10 Filter FIFO assignment for filter 10
    volatile uint32_t FFA11 : 1; // bit 11 Filter FIFO assignment for filter 11
    volatile uint32_t FFA12 : 1; // bit 12 Filter FIFO assignment for filter 12
    volatile uint32_t FFA13 : 1; // bit 13 Filter FIFO assignment for filter 13
    volatile uint32_t RESERVED0 : 1; // bit 14
    volatile uint32_t RESERVED1 : 1; // bit 15
    volatile uint32_t RESERVED2 : 1; // bit 16
    volatile uint32_t RESERVED3 : 1; // bit 17
    volatile uint32_t RESERVED4 : 1; // bit 18
    volatile uint32_t RESERVED5 : 1; // bit 19
    volatile uint32_t RESERVED6 : 1; // bit 20
    volatile uint32_t RESERVED7 : 1; // bit 21
    volatile uint32_t RESERVED8 : 1; // bit 22
    volatile uint32_t RESERVED9 : 1; // bit 23
    volatile uint32_t RESERVED10 : 1; // bit 24
    volatile uint32_t RESERVED11 : 1; // bit 25
    volatile uint32_t RESERVED12 : 1; // bit 26
    volatile uint32_t RESERVED13 : 1; // bit 27
    volatile uint32_t RESERVED14 : 1; // bit 28
    volatile uint32_t RESERVED15 : 1; // bit 29
    volatile uint32_t RESERVED16 : 1; // bit 30
    volatile uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} CAN1_CAN_FFA1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FACT0 : 1; // bit 0 Filter active
    volatile uint32_t FACT1 : 1; // bit 1 Filter active
    volatile uint32_t FACT2 : 1; // bit 2 Filter active
    volatile uint32_t FACT3 : 1; // bit 3 Filter active
    volatile uint32_t FACT4 : 1; // bit 4 Filter active
    volatile uint32_t FACT5 : 1; // bit 5 Filter active
    volatile uint32_t FACT6 : 1; // bit 6 Filter active
    volatile uint32_t FACT7 : 1; // bit 7 Filter active
    volatile uint32_t FACT8 : 1; // bit 8 Filter active
    volatile uint32_t FACT9 : 1; // bit 9 Filter active
    volatile uint32_t FACT10 : 1; // bit 10 Filter active
    volatile uint32_t FACT11 : 1; // bit 11 Filter active
    volatile uint32_t FACT12 : 1; // bit 12 Filter active
    volatile uint32_t FACT13 : 1; // bit 13 Filter active
    volatile uint32_t RESERVED0 : 1; // bit 14
    volatile uint32_t RESERVED1 : 1; // bit 15
    volatile uint32_t RESERVED2 : 1; // bit 16
    volatile uint32_t RESERVED3 : 1; // bit 17
    volatile uint32_t RESERVED4 : 1; // bit 18
    volatile uint32_t RESERVED5 : 1; // bit 19
    volatile uint32_t RESERVED6 : 1; // bit 20
    volatile uint32_t RESERVED7 : 1; // bit 21
    volatile uint32_t RESERVED8 : 1; // bit 22
    volatile uint32_t RESERVED9 : 1; // bit 23
    volatile uint32_t RESERVED10 : 1; // bit 24
    volatile uint32_t RESERVED11 : 1; // bit 25
    volatile uint32_t RESERVED12 : 1; // bit 26
    volatile uint32_t RESERVED13 : 1; // bit 27
    volatile uint32_t RESERVED14 : 1; // bit 28
    volatile uint32_t RESERVED15 : 1; // bit 29
    volatile uint32_t RESERVED16 : 1; // bit 30
    volatile uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} CAN1_CAN_FA1R_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F0R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F0R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F1R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F1R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F2R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F2R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F3R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F3R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F4R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F4R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F5R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F5R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F6R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F6R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F7R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F7R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F8R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F8R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F9R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F9R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F10R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F10R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F11R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F11R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F12R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F12R2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F13R1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FB0 : 1; // bit 0 Filter bits
    volatile uint32_t FB1 : 1; // bit 1 Filter bits
    volatile uint32_t FB2 : 1; // bit 2 Filter bits
    volatile uint32_t FB3 : 1; // bit 3 Filter bits
    volatile uint32_t FB4 : 1; // bit 4 Filter bits
    volatile uint32_t FB5 : 1; // bit 5 Filter bits
    volatile uint32_t FB6 : 1; // bit 6 Filter bits
    volatile uint32_t FB7 : 1; // bit 7 Filter bits
    volatile uint32_t FB8 : 1; // bit 8 Filter bits
    volatile uint32_t FB9 : 1; // bit 9 Filter bits
    volatile uint32_t FB10 : 1; // bit 10 Filter bits
    volatile uint32_t FB11 : 1; // bit 11 Filter bits
    volatile uint32_t FB12 : 1; // bit 12 Filter bits
    volatile uint32_t FB13 : 1; // bit 13 Filter bits
    volatile uint32_t FB14 : 1; // bit 14 Filter bits
    volatile uint32_t FB15 : 1; // bit 15 Filter bits
    volatile uint32_t FB16 : 1; // bit 16 Filter bits
    volatile uint32_t FB17 : 1; // bit 17 Filter bits
    volatile uint32_t FB18 : 1; // bit 18 Filter bits
    volatile uint32_t FB19 : 1; // bit 19 Filter bits
    volatile uint32_t FB20 : 1; // bit 20 Filter bits
    volatile uint32_t FB21 : 1; // bit 21 Filter bits
    volatile uint32_t FB22 : 1; // bit 22 Filter bits
    volatile uint32_t FB23 : 1; // bit 23 Filter bits
    volatile uint32_t FB24 : 1; // bit 24 Filter bits
    volatile uint32_t FB25 : 1; // bit 25 Filter bits
    volatile uint32_t FB26 : 1; // bit 26 Filter bits
    volatile uint32_t FB27 : 1; // bit 27 Filter bits
    volatile uint32_t FB28 : 1; // bit 28 Filter bits
    volatile uint32_t FB29 : 1; // bit 29 Filter bits
    volatile uint32_t FB30 : 1; // bit 30 Filter bits
    volatile uint32_t FB31 : 1; // bit 31 Filter bits
  } BITS;
} CAN1_F13R2_t;

typedef struct {
  CAN1_CAN_MCR_t CAN_MCR;
  CAN1_CAN_MSR_t CAN_MSR;
  CAN1_CAN_TSR_t CAN_TSR;
  CAN1_CAN_RF0R_t CAN_RF0R;
  CAN1_CAN_RF1R_t CAN_RF1R;
  CAN1_CAN_IER_t CAN_IER;
  CAN1_CAN_ESR_t CAN_ESR;
  CAN1_CAN_BTR_t CAN_BTR;
  CAN1_CAN_TI0R_t CAN_TI0R;
  CAN1_CAN_TDT0R_t CAN_TDT0R;
  CAN1_CAN_TDL0R_t CAN_TDL0R;
  CAN1_CAN_TDH0R_t CAN_TDH0R;
  CAN1_CAN_TI1R_t CAN_TI1R;
  CAN1_CAN_TDT1R_t CAN_TDT1R;
  CAN1_CAN_TDL1R_t CAN_TDL1R;
  CAN1_CAN_TDH1R_t CAN_TDH1R;
  CAN1_CAN_TI2R_t CAN_TI2R;
  CAN1_CAN_TDT2R_t CAN_TDT2R;
  CAN1_CAN_TDL2R_t CAN_TDL2R;
  CAN1_CAN_TDH2R_t CAN_TDH2R;
  CAN1_CAN_RI0R_t CAN_RI0R;
  CAN1_CAN_RDT0R_t CAN_RDT0R;
  CAN1_CAN_RDL0R_t CAN_RDL0R;
  CAN1_CAN_RDH0R_t CAN_RDH0R;
  CAN1_CAN_RI1R_t CAN_RI1R;
  CAN1_CAN_RDT1R_t CAN_RDT1R;
  CAN1_CAN_RDL1R_t CAN_RDL1R;
  CAN1_CAN_RDH1R_t CAN_RDH1R;
  CAN1_CAN_FMR_t CAN_FMR;
  CAN1_CAN_FM1R_t CAN_FM1R;
  CAN1_CAN_FS1R_t CAN_FS1R;
  CAN1_CAN_FFA1R_t CAN_FFA1R;
  CAN1_CAN_FA1R_t CAN_FA1R;
  CAN1_F0R1_t F0R1;
  CAN1_F0R2_t F0R2;
  CAN1_F1R1_t F1R1;
  CAN1_F1R2_t F1R2;
  CAN1_F2R1_t F2R1;
  CAN1_F2R2_t F2R2;
  CAN1_F3R1_t F3R1;
  CAN1_F3R2_t F3R2;
  CAN1_F4R1_t F4R1;
  CAN1_F4R2_t F4R2;
  CAN1_F5R1_t F5R1;
  CAN1_F5R2_t F5R2;
  CAN1_F6R1_t F6R1;
  CAN1_F6R2_t F6R2;
  CAN1_F7R1_t F7R1;
  CAN1_F7R2_t F7R2;
  CAN1_F8R1_t F8R1;
  CAN1_F8R2_t F8R2;
  CAN1_F9R1_t F9R1;
  CAN1_F9R2_t F9R2;
  CAN1_F10R1_t F10R1;
  CAN1_F10R2_t F10R2;
  CAN1_F11R1_t F11R1;
  CAN1_F11R2_t F11R2;
  CAN1_F12R1_t F12R1;
  CAN1_F12R2_t F12R2;
  CAN1_F13R1_t F13R1;
  CAN1_F13R2_t F13R2;
} CAN1_t;

#define CAN1_BASE (0x40006400UL)
#define CAN1 ((CAN1_t *)CAN1_BASE)

#define CAN1_CAN_MCRbits (CAN1->CAN_MCR.BITS)
#define CAN1_CAN_MSRbits (CAN1->CAN_MSR.BITS)
#define CAN1_CAN_TSRbits (CAN1->CAN_TSR.BITS)
#define CAN1_CAN_RF0Rbits (CAN1->CAN_RF0R.BITS)
#define CAN1_CAN_RF1Rbits (CAN1->CAN_RF1R.BITS)
#define CAN1_CAN_IERbits (CAN1->CAN_IER.BITS)
#define CAN1_CAN_ESRbits (CAN1->CAN_ESR.BITS)
#define CAN1_CAN_BTRbits (CAN1->CAN_BTR.BITS)
#define CAN1_CAN_TI0Rbits (CAN1->CAN_TI0R.BITS)
#define CAN1_CAN_TDT0Rbits (CAN1->CAN_TDT0R.BITS)
#define CAN1_CAN_TDL0Rbits (CAN1->CAN_TDL0R.BITS)
#define CAN1_CAN_TDH0Rbits (CAN1->CAN_TDH0R.BITS)
#define CAN1_CAN_TI1Rbits (CAN1->CAN_TI1R.BITS)
#define CAN1_CAN_TDT1Rbits (CAN1->CAN_TDT1R.BITS)
#define CAN1_CAN_TDL1Rbits (CAN1->CAN_TDL1R.BITS)
#define CAN1_CAN_TDH1Rbits (CAN1->CAN_TDH1R.BITS)
#define CAN1_CAN_TI2Rbits (CAN1->CAN_TI2R.BITS)
#define CAN1_CAN_TDT2Rbits (CAN1->CAN_TDT2R.BITS)
#define CAN1_CAN_TDL2Rbits (CAN1->CAN_TDL2R.BITS)
#define CAN1_CAN_TDH2Rbits (CAN1->CAN_TDH2R.BITS)
#define CAN1_CAN_RI0Rbits (CAN1->CAN_RI0R.BITS)
#define CAN1_CAN_RDT0Rbits (CAN1->CAN_RDT0R.BITS)
#define CAN1_CAN_RDL0Rbits (CAN1->CAN_RDL0R.BITS)
#define CAN1_CAN_RDH0Rbits (CAN1->CAN_RDH0R.BITS)
#define CAN1_CAN_RI1Rbits (CAN1->CAN_RI1R.BITS)
#define CAN1_CAN_RDT1Rbits (CAN1->CAN_RDT1R.BITS)
#define CAN1_CAN_RDL1Rbits (CAN1->CAN_RDL1R.BITS)
#define CAN1_CAN_RDH1Rbits (CAN1->CAN_RDH1R.BITS)
#define CAN1_CAN_FMRbits (CAN1->CAN_FMR.BITS)
#define CAN1_CAN_FM1Rbits (CAN1->CAN_FM1R.BITS)
#define CAN1_CAN_FS1Rbits (CAN1->CAN_FS1R.BITS)
#define CAN1_CAN_FFA1Rbits (CAN1->CAN_FFA1R.BITS)
#define CAN1_CAN_FA1Rbits (CAN1->CAN_FA1R.BITS)
#define CAN1_F0R1bits (CAN1->F0R1.BITS)
#define CAN1_F0R2bits (CAN1->F0R2.BITS)
#define CAN1_F1R1bits (CAN1->F1R1.BITS)
#define CAN1_F1R2bits (CAN1->F1R2.BITS)
#define CAN1_F2R1bits (CAN1->F2R1.BITS)
#define CAN1_F2R2bits (CAN1->F2R2.BITS)
#define CAN1_F3R1bits (CAN1->F3R1.BITS)
#define CAN1_F3R2bits (CAN1->F3R2.BITS)
#define CAN1_F4R1bits (CAN1->F4R1.BITS)
#define CAN1_F4R2bits (CAN1->F4R2.BITS)
#define CAN1_F5R1bits (CAN1->F5R1.BITS)
#define CAN1_F5R2bits (CAN1->F5R2.BITS)
#define CAN1_F6R1bits (CAN1->F6R1.BITS)
#define CAN1_F6R2bits (CAN1->F6R2.BITS)
#define CAN1_F7R1bits (CAN1->F7R1.BITS)
#define CAN1_F7R2bits (CAN1->F7R2.BITS)
#define CAN1_F8R1bits (CAN1->F8R1.BITS)
#define CAN1_F8R2bits (CAN1->F8R2.BITS)
#define CAN1_F9R1bits (CAN1->F9R1.BITS)
#define CAN1_F9R2bits (CAN1->F9R2.BITS)
#define CAN1_F10R1bits (CAN1->F10R1.BITS)
#define CAN1_F10R2bits (CAN1->F10R2.BITS)
#define CAN1_F11R1bits (CAN1->F11R1.BITS)
#define CAN1_F11R2bits (CAN1->F11R2.BITS)
#define CAN1_F12R1bits (CAN1->F12R1.BITS)
#define CAN1_F12R2bits (CAN1->F12R2.BITS)
#define CAN1_F13R1bits (CAN1->F13R1.BITS)
#define CAN1_F13R2bits (CAN1->F13R2.BITS)

#endif // _CAN1_H