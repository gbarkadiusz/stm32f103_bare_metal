/**
 * @file    OTG_FS_HOST.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   USB on the go full speed
 *
 * This header file provides register definitions and bitfield access
 * for the OTG_FS_HOST peripheral of the STM32F103.
 */

#ifndef _OTG_FS_HOST_H
#define _OTG_FS_HOST_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FSLSPCS : 2; // bit 0 FS/LS PHY clock select
    volatile uint32_t FSLSS : 1; // bit 2 FS- and LS-only support
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t RESERVED3 : 1; // bit 6
    volatile uint32_t RESERVED4 : 1; // bit 7
    volatile uint32_t RESERVED5 : 1; // bit 8
    volatile uint32_t RESERVED6 : 1; // bit 9
    volatile uint32_t RESERVED7 : 1; // bit 10
    volatile uint32_t RESERVED8 : 1; // bit 11
    volatile uint32_t RESERVED9 : 1; // bit 12
    volatile uint32_t RESERVED10 : 1; // bit 13
    volatile uint32_t RESERVED11 : 1; // bit 14
    volatile uint32_t RESERVED12 : 1; // bit 15
    volatile uint32_t RESERVED13 : 1; // bit 16
    volatile uint32_t RESERVED14 : 1; // bit 17
    volatile uint32_t RESERVED15 : 1; // bit 18
    volatile uint32_t RESERVED16 : 1; // bit 19
    volatile uint32_t RESERVED17 : 1; // bit 20
    volatile uint32_t RESERVED18 : 1; // bit 21
    volatile uint32_t RESERVED19 : 1; // bit 22
    volatile uint32_t RESERVED20 : 1; // bit 23
    volatile uint32_t RESERVED21 : 1; // bit 24
    volatile uint32_t RESERVED22 : 1; // bit 25
    volatile uint32_t RESERVED23 : 1; // bit 26
    volatile uint32_t RESERVED24 : 1; // bit 27
    volatile uint32_t RESERVED25 : 1; // bit 28
    volatile uint32_t RESERVED26 : 1; // bit 29
    volatile uint32_t RESERVED27 : 1; // bit 30
    volatile uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HCFG_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FRIVL : 16; // bit 0 Frame interval
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t RESERVED8 : 1; // bit 24
    volatile uint32_t RESERVED9 : 1; // bit 25
    volatile uint32_t RESERVED10 : 1; // bit 26
    volatile uint32_t RESERVED11 : 1; // bit 27
    volatile uint32_t RESERVED12 : 1; // bit 28
    volatile uint32_t RESERVED13 : 1; // bit 29
    volatile uint32_t RESERVED14 : 1; // bit 30
    volatile uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_HFIR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t FRNUM : 16; // bit 0 Frame number
    volatile uint32_t FTREM : 16; // bit 16 Frame time remaining
  } BITS;
} OTG_FS_HOST_FS_HFNUM_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PTXFSAVL : 16; // bit 0 Periodic transmit data FIFO space available
    volatile uint32_t PTXQSAV : 8; // bit 16 Periodic transmit request queue space available
    volatile uint32_t PTXQTOP : 8; // bit 24 Top of the periodic transmit request queue
  } BITS;
} OTG_FS_HOST_FS_HPTXSTS_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t HAINT : 16; // bit 0 Channel interrupts
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t RESERVED8 : 1; // bit 24
    volatile uint32_t RESERVED9 : 1; // bit 25
    volatile uint32_t RESERVED10 : 1; // bit 26
    volatile uint32_t RESERVED11 : 1; // bit 27
    volatile uint32_t RESERVED12 : 1; // bit 28
    volatile uint32_t RESERVED13 : 1; // bit 29
    volatile uint32_t RESERVED14 : 1; // bit 30
    volatile uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_HAINT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t HAINTM : 16; // bit 0 Channel interrupt mask
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t RESERVED1 : 1; // bit 17
    volatile uint32_t RESERVED2 : 1; // bit 18
    volatile uint32_t RESERVED3 : 1; // bit 19
    volatile uint32_t RESERVED4 : 1; // bit 20
    volatile uint32_t RESERVED5 : 1; // bit 21
    volatile uint32_t RESERVED6 : 1; // bit 22
    volatile uint32_t RESERVED7 : 1; // bit 23
    volatile uint32_t RESERVED8 : 1; // bit 24
    volatile uint32_t RESERVED9 : 1; // bit 25
    volatile uint32_t RESERVED10 : 1; // bit 26
    volatile uint32_t RESERVED11 : 1; // bit 27
    volatile uint32_t RESERVED12 : 1; // bit 28
    volatile uint32_t RESERVED13 : 1; // bit 29
    volatile uint32_t RESERVED14 : 1; // bit 30
    volatile uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_HAINTMSK_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PCSTS : 1; // bit 0 Port connect status
    volatile uint32_t PCDET : 1; // bit 1 Port connect detected
    volatile uint32_t PENA : 1; // bit 2 Port enable
    volatile uint32_t PENCHNG : 1; // bit 3 Port enable/disable change
    volatile uint32_t POCA : 1; // bit 4 Port overcurrent active
    volatile uint32_t POCCHNG : 1; // bit 5 Port overcurrent change
    volatile uint32_t PRES : 1; // bit 6 Port resume
    volatile uint32_t PSUSP : 1; // bit 7 Port suspend
    volatile uint32_t PRST : 1; // bit 8 Port reset
    volatile uint32_t RESERVED0 : 1; // bit 9
    volatile uint32_t PLSTS : 2; // bit 10 Port line status
    volatile uint32_t PPWR : 1; // bit 12 Port power
    volatile uint32_t PTCTL : 4; // bit 13 Port test control
    volatile uint32_t PSPD : 2; // bit 17 Port speed
    volatile uint32_t RESERVED1 : 1; // bit 19
    volatile uint32_t RESERVED2 : 1; // bit 20
    volatile uint32_t RESERVED3 : 1; // bit 21
    volatile uint32_t RESERVED4 : 1; // bit 22
    volatile uint32_t RESERVED5 : 1; // bit 23
    volatile uint32_t RESERVED6 : 1; // bit 24
    volatile uint32_t RESERVED7 : 1; // bit 25
    volatile uint32_t RESERVED8 : 1; // bit 26
    volatile uint32_t RESERVED9 : 1; // bit 27
    volatile uint32_t RESERVED10 : 1; // bit 28
    volatile uint32_t RESERVED11 : 1; // bit 29
    volatile uint32_t RESERVED12 : 1; // bit 30
    volatile uint32_t RESERVED13 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HPRT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MPSIZ : 11; // bit 0 Maximum packet size
    volatile uint32_t EPNUM : 4; // bit 11 Endpoint number
    volatile uint32_t EPDIR : 1; // bit 15 Endpoint direction
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t LSDEV : 1; // bit 17 Low-speed device
    volatile uint32_t EPTYP : 2; // bit 18 Endpoint type
    volatile uint32_t MCNT : 2; // bit 20 Multicount
    volatile uint32_t DAD : 7; // bit 22 Device address
    volatile uint32_t ODDFRM : 1; // bit 29 Odd frame
    volatile uint32_t CHDIS : 1; // bit 30 Channel disable
    volatile uint32_t CHENA : 1; // bit 31 Channel enable
  } BITS;
} OTG_FS_HOST_FS_HCCHAR0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MPSIZ : 11; // bit 0 Maximum packet size
    volatile uint32_t EPNUM : 4; // bit 11 Endpoint number
    volatile uint32_t EPDIR : 1; // bit 15 Endpoint direction
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t LSDEV : 1; // bit 17 Low-speed device
    volatile uint32_t EPTYP : 2; // bit 18 Endpoint type
    volatile uint32_t MCNT : 2; // bit 20 Multicount
    volatile uint32_t DAD : 7; // bit 22 Device address
    volatile uint32_t ODDFRM : 1; // bit 29 Odd frame
    volatile uint32_t CHDIS : 1; // bit 30 Channel disable
    volatile uint32_t CHENA : 1; // bit 31 Channel enable
  } BITS;
} OTG_FS_HOST_FS_HCCHAR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MPSIZ : 11; // bit 0 Maximum packet size
    volatile uint32_t EPNUM : 4; // bit 11 Endpoint number
    volatile uint32_t EPDIR : 1; // bit 15 Endpoint direction
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t LSDEV : 1; // bit 17 Low-speed device
    volatile uint32_t EPTYP : 2; // bit 18 Endpoint type
    volatile uint32_t MCNT : 2; // bit 20 Multicount
    volatile uint32_t DAD : 7; // bit 22 Device address
    volatile uint32_t ODDFRM : 1; // bit 29 Odd frame
    volatile uint32_t CHDIS : 1; // bit 30 Channel disable
    volatile uint32_t CHENA : 1; // bit 31 Channel enable
  } BITS;
} OTG_FS_HOST_FS_HCCHAR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MPSIZ : 11; // bit 0 Maximum packet size
    volatile uint32_t EPNUM : 4; // bit 11 Endpoint number
    volatile uint32_t EPDIR : 1; // bit 15 Endpoint direction
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t LSDEV : 1; // bit 17 Low-speed device
    volatile uint32_t EPTYP : 2; // bit 18 Endpoint type
    volatile uint32_t MCNT : 2; // bit 20 Multicount
    volatile uint32_t DAD : 7; // bit 22 Device address
    volatile uint32_t ODDFRM : 1; // bit 29 Odd frame
    volatile uint32_t CHDIS : 1; // bit 30 Channel disable
    volatile uint32_t CHENA : 1; // bit 31 Channel enable
  } BITS;
} OTG_FS_HOST_FS_HCCHAR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MPSIZ : 11; // bit 0 Maximum packet size
    volatile uint32_t EPNUM : 4; // bit 11 Endpoint number
    volatile uint32_t EPDIR : 1; // bit 15 Endpoint direction
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t LSDEV : 1; // bit 17 Low-speed device
    volatile uint32_t EPTYP : 2; // bit 18 Endpoint type
    volatile uint32_t MCNT : 2; // bit 20 Multicount
    volatile uint32_t DAD : 7; // bit 22 Device address
    volatile uint32_t ODDFRM : 1; // bit 29 Odd frame
    volatile uint32_t CHDIS : 1; // bit 30 Channel disable
    volatile uint32_t CHENA : 1; // bit 31 Channel enable
  } BITS;
} OTG_FS_HOST_FS_HCCHAR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MPSIZ : 11; // bit 0 Maximum packet size
    volatile uint32_t EPNUM : 4; // bit 11 Endpoint number
    volatile uint32_t EPDIR : 1; // bit 15 Endpoint direction
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t LSDEV : 1; // bit 17 Low-speed device
    volatile uint32_t EPTYP : 2; // bit 18 Endpoint type
    volatile uint32_t MCNT : 2; // bit 20 Multicount
    volatile uint32_t DAD : 7; // bit 22 Device address
    volatile uint32_t ODDFRM : 1; // bit 29 Odd frame
    volatile uint32_t CHDIS : 1; // bit 30 Channel disable
    volatile uint32_t CHENA : 1; // bit 31 Channel enable
  } BITS;
} OTG_FS_HOST_FS_HCCHAR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MPSIZ : 11; // bit 0 Maximum packet size
    volatile uint32_t EPNUM : 4; // bit 11 Endpoint number
    volatile uint32_t EPDIR : 1; // bit 15 Endpoint direction
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t LSDEV : 1; // bit 17 Low-speed device
    volatile uint32_t EPTYP : 2; // bit 18 Endpoint type
    volatile uint32_t MCNT : 2; // bit 20 Multicount
    volatile uint32_t DAD : 7; // bit 22 Device address
    volatile uint32_t ODDFRM : 1; // bit 29 Odd frame
    volatile uint32_t CHDIS : 1; // bit 30 Channel disable
    volatile uint32_t CHENA : 1; // bit 31 Channel enable
  } BITS;
} OTG_FS_HOST_FS_HCCHAR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MPSIZ : 11; // bit 0 Maximum packet size
    volatile uint32_t EPNUM : 4; // bit 11 Endpoint number
    volatile uint32_t EPDIR : 1; // bit 15 Endpoint direction
    volatile uint32_t RESERVED0 : 1; // bit 16
    volatile uint32_t LSDEV : 1; // bit 17 Low-speed device
    volatile uint32_t EPTYP : 2; // bit 18 Endpoint type
    volatile uint32_t MCNT : 2; // bit 20 Multicount
    volatile uint32_t DAD : 7; // bit 22 Device address
    volatile uint32_t ODDFRM : 1; // bit 29 Odd frame
    volatile uint32_t CHDIS : 1; // bit 30 Channel disable
    volatile uint32_t CHENA : 1; // bit 31 Channel enable
  } BITS;
} OTG_FS_HOST_FS_HCCHAR7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRC : 1; // bit 0 Transfer completed
    volatile uint32_t CHH : 1; // bit 1 Channel halted
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALL : 1; // bit 3 STALL response received interrupt
    volatile uint32_t NAK : 1; // bit 4 NAK response received interrupt
    volatile uint32_t ACK : 1; // bit 5 ACK response received/transmitted interrupt
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t TXERR : 1; // bit 7 Transaction error
    volatile uint32_t BBERR : 1; // bit 8 Babble error
    volatile uint32_t FRMOR : 1; // bit 9 Frame overrun
    volatile uint32_t DTERR : 1; // bit 10 Data toggle error
    volatile uint32_t RESERVED2 : 1; // bit 11
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
} OTG_FS_HOST_FS_HCINT0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRC : 1; // bit 0 Transfer completed
    volatile uint32_t CHH : 1; // bit 1 Channel halted
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALL : 1; // bit 3 STALL response received interrupt
    volatile uint32_t NAK : 1; // bit 4 NAK response received interrupt
    volatile uint32_t ACK : 1; // bit 5 ACK response received/transmitted interrupt
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t TXERR : 1; // bit 7 Transaction error
    volatile uint32_t BBERR : 1; // bit 8 Babble error
    volatile uint32_t FRMOR : 1; // bit 9 Frame overrun
    volatile uint32_t DTERR : 1; // bit 10 Data toggle error
    volatile uint32_t RESERVED2 : 1; // bit 11
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
} OTG_FS_HOST_FS_HCINT1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRC : 1; // bit 0 Transfer completed
    volatile uint32_t CHH : 1; // bit 1 Channel halted
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALL : 1; // bit 3 STALL response received interrupt
    volatile uint32_t NAK : 1; // bit 4 NAK response received interrupt
    volatile uint32_t ACK : 1; // bit 5 ACK response received/transmitted interrupt
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t TXERR : 1; // bit 7 Transaction error
    volatile uint32_t BBERR : 1; // bit 8 Babble error
    volatile uint32_t FRMOR : 1; // bit 9 Frame overrun
    volatile uint32_t DTERR : 1; // bit 10 Data toggle error
    volatile uint32_t RESERVED2 : 1; // bit 11
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
} OTG_FS_HOST_FS_HCINT2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRC : 1; // bit 0 Transfer completed
    volatile uint32_t CHH : 1; // bit 1 Channel halted
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALL : 1; // bit 3 STALL response received interrupt
    volatile uint32_t NAK : 1; // bit 4 NAK response received interrupt
    volatile uint32_t ACK : 1; // bit 5 ACK response received/transmitted interrupt
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t TXERR : 1; // bit 7 Transaction error
    volatile uint32_t BBERR : 1; // bit 8 Babble error
    volatile uint32_t FRMOR : 1; // bit 9 Frame overrun
    volatile uint32_t DTERR : 1; // bit 10 Data toggle error
    volatile uint32_t RESERVED2 : 1; // bit 11
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
} OTG_FS_HOST_FS_HCINT3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRC : 1; // bit 0 Transfer completed
    volatile uint32_t CHH : 1; // bit 1 Channel halted
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALL : 1; // bit 3 STALL response received interrupt
    volatile uint32_t NAK : 1; // bit 4 NAK response received interrupt
    volatile uint32_t ACK : 1; // bit 5 ACK response received/transmitted interrupt
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t TXERR : 1; // bit 7 Transaction error
    volatile uint32_t BBERR : 1; // bit 8 Babble error
    volatile uint32_t FRMOR : 1; // bit 9 Frame overrun
    volatile uint32_t DTERR : 1; // bit 10 Data toggle error
    volatile uint32_t RESERVED2 : 1; // bit 11
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
} OTG_FS_HOST_FS_HCINT4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRC : 1; // bit 0 Transfer completed
    volatile uint32_t CHH : 1; // bit 1 Channel halted
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALL : 1; // bit 3 STALL response received interrupt
    volatile uint32_t NAK : 1; // bit 4 NAK response received interrupt
    volatile uint32_t ACK : 1; // bit 5 ACK response received/transmitted interrupt
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t TXERR : 1; // bit 7 Transaction error
    volatile uint32_t BBERR : 1; // bit 8 Babble error
    volatile uint32_t FRMOR : 1; // bit 9 Frame overrun
    volatile uint32_t DTERR : 1; // bit 10 Data toggle error
    volatile uint32_t RESERVED2 : 1; // bit 11
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
} OTG_FS_HOST_FS_HCINT5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRC : 1; // bit 0 Transfer completed
    volatile uint32_t CHH : 1; // bit 1 Channel halted
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALL : 1; // bit 3 STALL response received interrupt
    volatile uint32_t NAK : 1; // bit 4 NAK response received interrupt
    volatile uint32_t ACK : 1; // bit 5 ACK response received/transmitted interrupt
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t TXERR : 1; // bit 7 Transaction error
    volatile uint32_t BBERR : 1; // bit 8 Babble error
    volatile uint32_t FRMOR : 1; // bit 9 Frame overrun
    volatile uint32_t DTERR : 1; // bit 10 Data toggle error
    volatile uint32_t RESERVED2 : 1; // bit 11
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
} OTG_FS_HOST_FS_HCINT6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRC : 1; // bit 0 Transfer completed
    volatile uint32_t CHH : 1; // bit 1 Channel halted
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALL : 1; // bit 3 STALL response received interrupt
    volatile uint32_t NAK : 1; // bit 4 NAK response received interrupt
    volatile uint32_t ACK : 1; // bit 5 ACK response received/transmitted interrupt
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t TXERR : 1; // bit 7 Transaction error
    volatile uint32_t BBERR : 1; // bit 8 Babble error
    volatile uint32_t FRMOR : 1; // bit 9 Frame overrun
    volatile uint32_t DTERR : 1; // bit 10 Data toggle error
    volatile uint32_t RESERVED2 : 1; // bit 11
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
} OTG_FS_HOST_FS_HCINT7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRCM : 1; // bit 0 Transfer completed mask
    volatile uint32_t CHHM : 1; // bit 1 Channel halted mask
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALLM : 1; // bit 3 STALL response received interrupt mask
    volatile uint32_t NAKM : 1; // bit 4 NAK response received interrupt mask
    volatile uint32_t ACKM : 1; // bit 5 ACK response received/transmitted interrupt mask
    volatile uint32_t NYET : 1; // bit 6 response received interrupt mask
    volatile uint32_t TXERRM : 1; // bit 7 Transaction error mask
    volatile uint32_t BBERRM : 1; // bit 8 Babble error mask
    volatile uint32_t FRMORM : 1; // bit 9 Frame overrun mask
    volatile uint32_t DTERRM : 1; // bit 10 Data toggle error mask
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
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
} OTG_FS_HOST_FS_HCINTMSK0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRCM : 1; // bit 0 Transfer completed mask
    volatile uint32_t CHHM : 1; // bit 1 Channel halted mask
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALLM : 1; // bit 3 STALL response received interrupt mask
    volatile uint32_t NAKM : 1; // bit 4 NAK response received interrupt mask
    volatile uint32_t ACKM : 1; // bit 5 ACK response received/transmitted interrupt mask
    volatile uint32_t NYET : 1; // bit 6 response received interrupt mask
    volatile uint32_t TXERRM : 1; // bit 7 Transaction error mask
    volatile uint32_t BBERRM : 1; // bit 8 Babble error mask
    volatile uint32_t FRMORM : 1; // bit 9 Frame overrun mask
    volatile uint32_t DTERRM : 1; // bit 10 Data toggle error mask
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
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
} OTG_FS_HOST_FS_HCINTMSK1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRCM : 1; // bit 0 Transfer completed mask
    volatile uint32_t CHHM : 1; // bit 1 Channel halted mask
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALLM : 1; // bit 3 STALL response received interrupt mask
    volatile uint32_t NAKM : 1; // bit 4 NAK response received interrupt mask
    volatile uint32_t ACKM : 1; // bit 5 ACK response received/transmitted interrupt mask
    volatile uint32_t NYET : 1; // bit 6 response received interrupt mask
    volatile uint32_t TXERRM : 1; // bit 7 Transaction error mask
    volatile uint32_t BBERRM : 1; // bit 8 Babble error mask
    volatile uint32_t FRMORM : 1; // bit 9 Frame overrun mask
    volatile uint32_t DTERRM : 1; // bit 10 Data toggle error mask
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
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
} OTG_FS_HOST_FS_HCINTMSK2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRCM : 1; // bit 0 Transfer completed mask
    volatile uint32_t CHHM : 1; // bit 1 Channel halted mask
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALLM : 1; // bit 3 STALL response received interrupt mask
    volatile uint32_t NAKM : 1; // bit 4 NAK response received interrupt mask
    volatile uint32_t ACKM : 1; // bit 5 ACK response received/transmitted interrupt mask
    volatile uint32_t NYET : 1; // bit 6 response received interrupt mask
    volatile uint32_t TXERRM : 1; // bit 7 Transaction error mask
    volatile uint32_t BBERRM : 1; // bit 8 Babble error mask
    volatile uint32_t FRMORM : 1; // bit 9 Frame overrun mask
    volatile uint32_t DTERRM : 1; // bit 10 Data toggle error mask
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
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
} OTG_FS_HOST_FS_HCINTMSK3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRCM : 1; // bit 0 Transfer completed mask
    volatile uint32_t CHHM : 1; // bit 1 Channel halted mask
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALLM : 1; // bit 3 STALL response received interrupt mask
    volatile uint32_t NAKM : 1; // bit 4 NAK response received interrupt mask
    volatile uint32_t ACKM : 1; // bit 5 ACK response received/transmitted interrupt mask
    volatile uint32_t NYET : 1; // bit 6 response received interrupt mask
    volatile uint32_t TXERRM : 1; // bit 7 Transaction error mask
    volatile uint32_t BBERRM : 1; // bit 8 Babble error mask
    volatile uint32_t FRMORM : 1; // bit 9 Frame overrun mask
    volatile uint32_t DTERRM : 1; // bit 10 Data toggle error mask
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
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
} OTG_FS_HOST_FS_HCINTMSK4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRCM : 1; // bit 0 Transfer completed mask
    volatile uint32_t CHHM : 1; // bit 1 Channel halted mask
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALLM : 1; // bit 3 STALL response received interrupt mask
    volatile uint32_t NAKM : 1; // bit 4 NAK response received interrupt mask
    volatile uint32_t ACKM : 1; // bit 5 ACK response received/transmitted interrupt mask
    volatile uint32_t NYET : 1; // bit 6 response received interrupt mask
    volatile uint32_t TXERRM : 1; // bit 7 Transaction error mask
    volatile uint32_t BBERRM : 1; // bit 8 Babble error mask
    volatile uint32_t FRMORM : 1; // bit 9 Frame overrun mask
    volatile uint32_t DTERRM : 1; // bit 10 Data toggle error mask
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
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
} OTG_FS_HOST_FS_HCINTMSK5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRCM : 1; // bit 0 Transfer completed mask
    volatile uint32_t CHHM : 1; // bit 1 Channel halted mask
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALLM : 1; // bit 3 STALL response received interrupt mask
    volatile uint32_t NAKM : 1; // bit 4 NAK response received interrupt mask
    volatile uint32_t ACKM : 1; // bit 5 ACK response received/transmitted interrupt mask
    volatile uint32_t NYET : 1; // bit 6 response received interrupt mask
    volatile uint32_t TXERRM : 1; // bit 7 Transaction error mask
    volatile uint32_t BBERRM : 1; // bit 8 Babble error mask
    volatile uint32_t FRMORM : 1; // bit 9 Frame overrun mask
    volatile uint32_t DTERRM : 1; // bit 10 Data toggle error mask
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
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
} OTG_FS_HOST_FS_HCINTMSK6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRCM : 1; // bit 0 Transfer completed mask
    volatile uint32_t CHHM : 1; // bit 1 Channel halted mask
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t STALLM : 1; // bit 3 STALL response received interrupt mask
    volatile uint32_t NAKM : 1; // bit 4 NAK response received interrupt mask
    volatile uint32_t ACKM : 1; // bit 5 ACK response received/transmitted interrupt mask
    volatile uint32_t NYET : 1; // bit 6 response received interrupt mask
    volatile uint32_t TXERRM : 1; // bit 7 Transaction error mask
    volatile uint32_t BBERRM : 1; // bit 8 Babble error mask
    volatile uint32_t FRMORM : 1; // bit 9 Frame overrun mask
    volatile uint32_t DTERRM : 1; // bit 10 Data toggle error mask
    volatile uint32_t RESERVED1 : 1; // bit 11
    volatile uint32_t RESERVED2 : 1; // bit 12
    volatile uint32_t RESERVED3 : 1; // bit 13
    volatile uint32_t RESERVED4 : 1; // bit 14
    volatile uint32_t RESERVED5 : 1; // bit 15
    volatile uint32_t RESERVED6 : 1; // bit 16
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
} OTG_FS_HOST_FS_HCINTMSK7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRSIZ : 19; // bit 0 Transfer size
    volatile uint32_t PKTCNT : 10; // bit 19 Packet count
    volatile uint32_t DPID : 2; // bit 29 Data PID
    volatile uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HCTSIZ0_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRSIZ : 19; // bit 0 Transfer size
    volatile uint32_t PKTCNT : 10; // bit 19 Packet count
    volatile uint32_t DPID : 2; // bit 29 Data PID
    volatile uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HCTSIZ1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRSIZ : 19; // bit 0 Transfer size
    volatile uint32_t PKTCNT : 10; // bit 19 Packet count
    volatile uint32_t DPID : 2; // bit 29 Data PID
    volatile uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HCTSIZ2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRSIZ : 19; // bit 0 Transfer size
    volatile uint32_t PKTCNT : 10; // bit 19 Packet count
    volatile uint32_t DPID : 2; // bit 29 Data PID
    volatile uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HCTSIZ3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRSIZ : 19; // bit 0 Transfer size
    volatile uint32_t PKTCNT : 10; // bit 19 Packet count
    volatile uint32_t DPID : 2; // bit 29 Data PID
    volatile uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HCTSIZ4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRSIZ : 19; // bit 0 Transfer size
    volatile uint32_t PKTCNT : 10; // bit 19 Packet count
    volatile uint32_t DPID : 2; // bit 29 Data PID
    volatile uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HCTSIZ5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRSIZ : 19; // bit 0 Transfer size
    volatile uint32_t PKTCNT : 10; // bit 19 Packet count
    volatile uint32_t DPID : 2; // bit 29 Data PID
    volatile uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HCTSIZ6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t XFRSIZ : 19; // bit 0 Transfer size
    volatile uint32_t PKTCNT : 10; // bit 19 Packet count
    volatile uint32_t DPID : 2; // bit 29 Data PID
    volatile uint32_t RESERVED0 : 1; // bit 31
  } BITS;
} OTG_FS_HOST_FS_HCTSIZ7_t;

typedef struct {
  OTG_FS_HOST_FS_HCFG_t FS_HCFG;
  OTG_FS_HOST_HFIR_t HFIR;
  OTG_FS_HOST_FS_HFNUM_t FS_HFNUM;
  OTG_FS_HOST_FS_HPTXSTS_t FS_HPTXSTS;
  OTG_FS_HOST_HAINT_t HAINT;
  OTG_FS_HOST_HAINTMSK_t HAINTMSK;
  OTG_FS_HOST_FS_HPRT_t FS_HPRT;
  OTG_FS_HOST_FS_HCCHAR0_t FS_HCCHAR0;
  OTG_FS_HOST_FS_HCCHAR1_t FS_HCCHAR1;
  OTG_FS_HOST_FS_HCCHAR2_t FS_HCCHAR2;
  OTG_FS_HOST_FS_HCCHAR3_t FS_HCCHAR3;
  OTG_FS_HOST_FS_HCCHAR4_t FS_HCCHAR4;
  OTG_FS_HOST_FS_HCCHAR5_t FS_HCCHAR5;
  OTG_FS_HOST_FS_HCCHAR6_t FS_HCCHAR6;
  OTG_FS_HOST_FS_HCCHAR7_t FS_HCCHAR7;
  OTG_FS_HOST_FS_HCINT0_t FS_HCINT0;
  OTG_FS_HOST_FS_HCINT1_t FS_HCINT1;
  OTG_FS_HOST_FS_HCINT2_t FS_HCINT2;
  OTG_FS_HOST_FS_HCINT3_t FS_HCINT3;
  OTG_FS_HOST_FS_HCINT4_t FS_HCINT4;
  OTG_FS_HOST_FS_HCINT5_t FS_HCINT5;
  OTG_FS_HOST_FS_HCINT6_t FS_HCINT6;
  OTG_FS_HOST_FS_HCINT7_t FS_HCINT7;
  OTG_FS_HOST_FS_HCINTMSK0_t FS_HCINTMSK0;
  OTG_FS_HOST_FS_HCINTMSK1_t FS_HCINTMSK1;
  OTG_FS_HOST_FS_HCINTMSK2_t FS_HCINTMSK2;
  OTG_FS_HOST_FS_HCINTMSK3_t FS_HCINTMSK3;
  OTG_FS_HOST_FS_HCINTMSK4_t FS_HCINTMSK4;
  OTG_FS_HOST_FS_HCINTMSK5_t FS_HCINTMSK5;
  OTG_FS_HOST_FS_HCINTMSK6_t FS_HCINTMSK6;
  OTG_FS_HOST_FS_HCINTMSK7_t FS_HCINTMSK7;
  OTG_FS_HOST_FS_HCTSIZ0_t FS_HCTSIZ0;
  OTG_FS_HOST_FS_HCTSIZ1_t FS_HCTSIZ1;
  OTG_FS_HOST_FS_HCTSIZ2_t FS_HCTSIZ2;
  OTG_FS_HOST_FS_HCTSIZ3_t FS_HCTSIZ3;
  OTG_FS_HOST_FS_HCTSIZ4_t FS_HCTSIZ4;
  OTG_FS_HOST_FS_HCTSIZ5_t FS_HCTSIZ5;
  OTG_FS_HOST_FS_HCTSIZ6_t FS_HCTSIZ6;
  OTG_FS_HOST_FS_HCTSIZ7_t FS_HCTSIZ7;
} OTG_FS_HOST_t;

#define OTG_FS_HOST_BASE (0x50000400UL)
#define OTG_FS_HOST ((OTG_FS_HOST_t *)OTG_FS_HOST_BASE)

#define OTG_FS_HOST_FS_HCFGbits (OTG_FS_HOST->FS_HCFG.BITS)
#define OTG_FS_HOST_HFIRbits (OTG_FS_HOST->HFIR.BITS)
#define OTG_FS_HOST_FS_HFNUMbits (OTG_FS_HOST->FS_HFNUM.BITS)
#define OTG_FS_HOST_FS_HPTXSTSbits (OTG_FS_HOST->FS_HPTXSTS.BITS)
#define OTG_FS_HOST_HAINTbits (OTG_FS_HOST->HAINT.BITS)
#define OTG_FS_HOST_HAINTMSKbits (OTG_FS_HOST->HAINTMSK.BITS)
#define OTG_FS_HOST_FS_HPRTbits (OTG_FS_HOST->FS_HPRT.BITS)
#define OTG_FS_HOST_FS_HCCHAR0bits (OTG_FS_HOST->FS_HCCHAR0.BITS)
#define OTG_FS_HOST_FS_HCCHAR1bits (OTG_FS_HOST->FS_HCCHAR1.BITS)
#define OTG_FS_HOST_FS_HCCHAR2bits (OTG_FS_HOST->FS_HCCHAR2.BITS)
#define OTG_FS_HOST_FS_HCCHAR3bits (OTG_FS_HOST->FS_HCCHAR3.BITS)
#define OTG_FS_HOST_FS_HCCHAR4bits (OTG_FS_HOST->FS_HCCHAR4.BITS)
#define OTG_FS_HOST_FS_HCCHAR5bits (OTG_FS_HOST->FS_HCCHAR5.BITS)
#define OTG_FS_HOST_FS_HCCHAR6bits (OTG_FS_HOST->FS_HCCHAR6.BITS)
#define OTG_FS_HOST_FS_HCCHAR7bits (OTG_FS_HOST->FS_HCCHAR7.BITS)
#define OTG_FS_HOST_FS_HCINT0bits (OTG_FS_HOST->FS_HCINT0.BITS)
#define OTG_FS_HOST_FS_HCINT1bits (OTG_FS_HOST->FS_HCINT1.BITS)
#define OTG_FS_HOST_FS_HCINT2bits (OTG_FS_HOST->FS_HCINT2.BITS)
#define OTG_FS_HOST_FS_HCINT3bits (OTG_FS_HOST->FS_HCINT3.BITS)
#define OTG_FS_HOST_FS_HCINT4bits (OTG_FS_HOST->FS_HCINT4.BITS)
#define OTG_FS_HOST_FS_HCINT5bits (OTG_FS_HOST->FS_HCINT5.BITS)
#define OTG_FS_HOST_FS_HCINT6bits (OTG_FS_HOST->FS_HCINT6.BITS)
#define OTG_FS_HOST_FS_HCINT7bits (OTG_FS_HOST->FS_HCINT7.BITS)
#define OTG_FS_HOST_FS_HCINTMSK0bits (OTG_FS_HOST->FS_HCINTMSK0.BITS)
#define OTG_FS_HOST_FS_HCINTMSK1bits (OTG_FS_HOST->FS_HCINTMSK1.BITS)
#define OTG_FS_HOST_FS_HCINTMSK2bits (OTG_FS_HOST->FS_HCINTMSK2.BITS)
#define OTG_FS_HOST_FS_HCINTMSK3bits (OTG_FS_HOST->FS_HCINTMSK3.BITS)
#define OTG_FS_HOST_FS_HCINTMSK4bits (OTG_FS_HOST->FS_HCINTMSK4.BITS)
#define OTG_FS_HOST_FS_HCINTMSK5bits (OTG_FS_HOST->FS_HCINTMSK5.BITS)
#define OTG_FS_HOST_FS_HCINTMSK6bits (OTG_FS_HOST->FS_HCINTMSK6.BITS)
#define OTG_FS_HOST_FS_HCINTMSK7bits (OTG_FS_HOST->FS_HCINTMSK7.BITS)
#define OTG_FS_HOST_FS_HCTSIZ0bits (OTG_FS_HOST->FS_HCTSIZ0.BITS)
#define OTG_FS_HOST_FS_HCTSIZ1bits (OTG_FS_HOST->FS_HCTSIZ1.BITS)
#define OTG_FS_HOST_FS_HCTSIZ2bits (OTG_FS_HOST->FS_HCTSIZ2.BITS)
#define OTG_FS_HOST_FS_HCTSIZ3bits (OTG_FS_HOST->FS_HCTSIZ3.BITS)
#define OTG_FS_HOST_FS_HCTSIZ4bits (OTG_FS_HOST->FS_HCTSIZ4.BITS)
#define OTG_FS_HOST_FS_HCTSIZ5bits (OTG_FS_HOST->FS_HCTSIZ5.BITS)
#define OTG_FS_HOST_FS_HCTSIZ6bits (OTG_FS_HOST->FS_HCTSIZ6.BITS)
#define OTG_FS_HOST_FS_HCTSIZ7bits (OTG_FS_HOST->FS_HCTSIZ7.BITS)

#endif // _OTG_FS_HOST_H