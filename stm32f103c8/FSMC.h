/**
 * @file    FSMC.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Flexible static memory controller
 *
 * This header file provides register definitions and bitfield access
 * for the FSMC peripheral of the STM32F103.
 */

#ifndef _FSMC_H
#define _FSMC_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MBKEN : 1; // bit 0 MBKEN
    uint32_t MUXEN : 1; // bit 1 MUXEN
    uint32_t MTYP : 2; // bit 2 MTYP
    uint32_t MWID : 2; // bit 4 MWID
    uint32_t FACCEN : 1; // bit 6 FACCEN
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t BURSTEN : 1; // bit 8 BURSTEN
    uint32_t WAITPOL : 1; // bit 9 WAITPOL
    uint32_t RESERVED1 : 1; // bit 10
    uint32_t WAITCFG : 1; // bit 11 WAITCFG
    uint32_t WREN : 1; // bit 12 WREN
    uint32_t WAITEN : 1; // bit 13 WAITEN
    uint32_t EXTMOD : 1; // bit 14 EXTMOD
    uint32_t ASYNCWAIT : 1; // bit 15 ASYNCWAIT
    uint32_t RESERVED2 : 1; // bit 16
    uint32_t RESERVED3 : 1; // bit 17
    uint32_t RESERVED4 : 1; // bit 18
    uint32_t CBURSTRW : 1; // bit 19 CBURSTRW
    uint32_t RESERVED5 : 1; // bit 20
    uint32_t RESERVED6 : 1; // bit 21
    uint32_t RESERVED7 : 1; // bit 22
    uint32_t RESERVED8 : 1; // bit 23
    uint32_t RESERVED9 : 1; // bit 24
    uint32_t RESERVED10 : 1; // bit 25
    uint32_t RESERVED11 : 1; // bit 26
    uint32_t RESERVED12 : 1; // bit 27
    uint32_t RESERVED13 : 1; // bit 28
    uint32_t RESERVED14 : 1; // bit 29
    uint32_t RESERVED15 : 1; // bit 30
    uint32_t RESERVED16 : 1; // bit 31
  } BITS;
} FSMC_BCR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADDSET : 4; // bit 0 ADDSET
    uint32_t ADDHLD : 4; // bit 4 ADDHLD
    uint32_t DATAST : 8; // bit 8 DATAST
    uint32_t BUSTURN : 4; // bit 16 BUSTURN
    uint32_t CLKDIV : 4; // bit 20 CLKDIV
    uint32_t DATLAT : 4; // bit 24 DATLAT
    uint32_t ACCMOD : 2; // bit 28 ACCMOD
    uint32_t RESERVED0 : 1; // bit 30
    uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} FSMC_BTR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MBKEN : 1; // bit 0 MBKEN
    uint32_t MUXEN : 1; // bit 1 MUXEN
    uint32_t MTYP : 2; // bit 2 MTYP
    uint32_t MWID : 2; // bit 4 MWID
    uint32_t FACCEN : 1; // bit 6 FACCEN
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t BURSTEN : 1; // bit 8 BURSTEN
    uint32_t WAITPOL : 1; // bit 9 WAITPOL
    uint32_t WRAPMOD : 1; // bit 10 WRAPMOD
    uint32_t WAITCFG : 1; // bit 11 WAITCFG
    uint32_t WREN : 1; // bit 12 WREN
    uint32_t WAITEN : 1; // bit 13 WAITEN
    uint32_t EXTMOD : 1; // bit 14 EXTMOD
    uint32_t ASYNCWAIT : 1; // bit 15 ASYNCWAIT
    uint32_t RESERVED1 : 1; // bit 16
    uint32_t RESERVED2 : 1; // bit 17
    uint32_t RESERVED3 : 1; // bit 18
    uint32_t CBURSTRW : 1; // bit 19 CBURSTRW
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} FSMC_BCR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADDSET : 4; // bit 0 ADDSET
    uint32_t ADDHLD : 4; // bit 4 ADDHLD
    uint32_t DATAST : 8; // bit 8 DATAST
    uint32_t BUSTURN : 4; // bit 16 BUSTURN
    uint32_t CLKDIV : 4; // bit 20 CLKDIV
    uint32_t DATLAT : 4; // bit 24 DATLAT
    uint32_t ACCMOD : 2; // bit 28 ACCMOD
    uint32_t RESERVED0 : 1; // bit 30
    uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} FSMC_BTR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MBKEN : 1; // bit 0 MBKEN
    uint32_t MUXEN : 1; // bit 1 MUXEN
    uint32_t MTYP : 2; // bit 2 MTYP
    uint32_t MWID : 2; // bit 4 MWID
    uint32_t FACCEN : 1; // bit 6 FACCEN
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t BURSTEN : 1; // bit 8 BURSTEN
    uint32_t WAITPOL : 1; // bit 9 WAITPOL
    uint32_t WRAPMOD : 1; // bit 10 WRAPMOD
    uint32_t WAITCFG : 1; // bit 11 WAITCFG
    uint32_t WREN : 1; // bit 12 WREN
    uint32_t WAITEN : 1; // bit 13 WAITEN
    uint32_t EXTMOD : 1; // bit 14 EXTMOD
    uint32_t ASYNCWAIT : 1; // bit 15 ASYNCWAIT
    uint32_t RESERVED1 : 1; // bit 16
    uint32_t RESERVED2 : 1; // bit 17
    uint32_t RESERVED3 : 1; // bit 18
    uint32_t CBURSTRW : 1; // bit 19 CBURSTRW
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} FSMC_BCR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADDSET : 4; // bit 0 ADDSET
    uint32_t ADDHLD : 4; // bit 4 ADDHLD
    uint32_t DATAST : 8; // bit 8 DATAST
    uint32_t BUSTURN : 4; // bit 16 BUSTURN
    uint32_t CLKDIV : 4; // bit 20 CLKDIV
    uint32_t DATLAT : 4; // bit 24 DATLAT
    uint32_t ACCMOD : 2; // bit 28 ACCMOD
    uint32_t RESERVED0 : 1; // bit 30
    uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} FSMC_BTR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MBKEN : 1; // bit 0 MBKEN
    uint32_t MUXEN : 1; // bit 1 MUXEN
    uint32_t MTYP : 2; // bit 2 MTYP
    uint32_t MWID : 2; // bit 4 MWID
    uint32_t FACCEN : 1; // bit 6 FACCEN
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t BURSTEN : 1; // bit 8 BURSTEN
    uint32_t WAITPOL : 1; // bit 9 WAITPOL
    uint32_t WRAPMOD : 1; // bit 10 WRAPMOD
    uint32_t WAITCFG : 1; // bit 11 WAITCFG
    uint32_t WREN : 1; // bit 12 WREN
    uint32_t WAITEN : 1; // bit 13 WAITEN
    uint32_t EXTMOD : 1; // bit 14 EXTMOD
    uint32_t ASYNCWAIT : 1; // bit 15 ASYNCWAIT
    uint32_t RESERVED1 : 1; // bit 16
    uint32_t RESERVED2 : 1; // bit 17
    uint32_t RESERVED3 : 1; // bit 18
    uint32_t CBURSTRW : 1; // bit 19 CBURSTRW
    uint32_t RESERVED4 : 1; // bit 20
    uint32_t RESERVED5 : 1; // bit 21
    uint32_t RESERVED6 : 1; // bit 22
    uint32_t RESERVED7 : 1; // bit 23
    uint32_t RESERVED8 : 1; // bit 24
    uint32_t RESERVED9 : 1; // bit 25
    uint32_t RESERVED10 : 1; // bit 26
    uint32_t RESERVED11 : 1; // bit 27
    uint32_t RESERVED12 : 1; // bit 28
    uint32_t RESERVED13 : 1; // bit 29
    uint32_t RESERVED14 : 1; // bit 30
    uint32_t RESERVED15 : 1; // bit 31
  } BITS;
} FSMC_BCR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADDSET : 4; // bit 0 ADDSET
    uint32_t ADDHLD : 4; // bit 4 ADDHLD
    uint32_t DATAST : 8; // bit 8 DATAST
    uint32_t BUSTURN : 4; // bit 16 BUSTURN
    uint32_t CLKDIV : 4; // bit 20 CLKDIV
    uint32_t DATLAT : 4; // bit 24 DATLAT
    uint32_t ACCMOD : 2; // bit 28 ACCMOD
    uint32_t RESERVED0 : 1; // bit 30
    uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} FSMC_BTR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t PWAITEN : 1; // bit 1 PWAITEN
    uint32_t PBKEN : 1; // bit 2 PBKEN
    uint32_t PTYP : 1; // bit 3 PTYP
    uint32_t PWID : 2; // bit 4 PWID
    uint32_t ECCEN : 1; // bit 6 ECCEN
    uint32_t RESERVED1 : 1; // bit 7
    uint32_t RESERVED2 : 1; // bit 8
    uint32_t TCLR : 4; // bit 9 TCLR
    uint32_t TAR : 4; // bit 13 TAR
    uint32_t ECCPS : 3; // bit 17 ECCPS
    uint32_t RESERVED3 : 1; // bit 20
    uint32_t RESERVED4 : 1; // bit 21
    uint32_t RESERVED5 : 1; // bit 22
    uint32_t RESERVED6 : 1; // bit 23
    uint32_t RESERVED7 : 1; // bit 24
    uint32_t RESERVED8 : 1; // bit 25
    uint32_t RESERVED9 : 1; // bit 26
    uint32_t RESERVED10 : 1; // bit 27
    uint32_t RESERVED11 : 1; // bit 28
    uint32_t RESERVED12 : 1; // bit 29
    uint32_t RESERVED13 : 1; // bit 30
    uint32_t RESERVED14 : 1; // bit 31
  } BITS;
} FSMC_PCR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t IRS : 1; // bit 0 IRS
    uint32_t ILS : 1; // bit 1 ILS
    uint32_t IFS : 1; // bit 2 IFS
    uint32_t IREN : 1; // bit 3 IREN
    uint32_t ILEN : 1; // bit 4 ILEN
    uint32_t IFEN : 1; // bit 5 IFEN
    uint32_t FEMPT : 1; // bit 6 FEMPT
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t RESERVED1 : 1; // bit 8
    uint32_t RESERVED2 : 1; // bit 9
    uint32_t RESERVED3 : 1; // bit 10
    uint32_t RESERVED4 : 1; // bit 11
    uint32_t RESERVED5 : 1; // bit 12
    uint32_t RESERVED6 : 1; // bit 13
    uint32_t RESERVED7 : 1; // bit 14
    uint32_t RESERVED8 : 1; // bit 15
    uint32_t RESERVED9 : 1; // bit 16
    uint32_t RESERVED10 : 1; // bit 17
    uint32_t RESERVED11 : 1; // bit 18
    uint32_t RESERVED12 : 1; // bit 19
    uint32_t RESERVED13 : 1; // bit 20
    uint32_t RESERVED14 : 1; // bit 21
    uint32_t RESERVED15 : 1; // bit 22
    uint32_t RESERVED16 : 1; // bit 23
    uint32_t RESERVED17 : 1; // bit 24
    uint32_t RESERVED18 : 1; // bit 25
    uint32_t RESERVED19 : 1; // bit 26
    uint32_t RESERVED20 : 1; // bit 27
    uint32_t RESERVED21 : 1; // bit 28
    uint32_t RESERVED22 : 1; // bit 29
    uint32_t RESERVED23 : 1; // bit 30
    uint32_t RESERVED24 : 1; // bit 31
  } BITS;
} FSMC_SR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MEMSETx : 8; // bit 0 MEMSETx
    uint32_t MEMWAITx : 8; // bit 8 MEMWAITx
    uint32_t MEMHOLDx : 8; // bit 16 MEMHOLDx
    uint32_t MEMHIZx : 8; // bit 24 MEMHIZx
  } BITS;
} FSMC_PMEM2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ATTSETx : 8; // bit 0 Attribute memory x setup time
    uint32_t ATTWAITx : 8; // bit 8 Attribute memory x wait time
    uint32_t ATTHOLDx : 8; // bit 16 Attribute memory x hold time
    uint32_t ATTHIZx : 8; // bit 24 Attribute memory x databus HiZ time
  } BITS;
} FSMC_PATT2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ECCx : 32; // bit 0 ECC result
  } BITS;
} FSMC_ECCR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t PWAITEN : 1; // bit 1 PWAITEN
    uint32_t PBKEN : 1; // bit 2 PBKEN
    uint32_t PTYP : 1; // bit 3 PTYP
    uint32_t PWID : 2; // bit 4 PWID
    uint32_t ECCEN : 1; // bit 6 ECCEN
    uint32_t RESERVED1 : 1; // bit 7
    uint32_t RESERVED2 : 1; // bit 8
    uint32_t TCLR : 4; // bit 9 TCLR
    uint32_t TAR : 4; // bit 13 TAR
    uint32_t ECCPS : 3; // bit 17 ECCPS
    uint32_t RESERVED3 : 1; // bit 20
    uint32_t RESERVED4 : 1; // bit 21
    uint32_t RESERVED5 : 1; // bit 22
    uint32_t RESERVED6 : 1; // bit 23
    uint32_t RESERVED7 : 1; // bit 24
    uint32_t RESERVED8 : 1; // bit 25
    uint32_t RESERVED9 : 1; // bit 26
    uint32_t RESERVED10 : 1; // bit 27
    uint32_t RESERVED11 : 1; // bit 28
    uint32_t RESERVED12 : 1; // bit 29
    uint32_t RESERVED13 : 1; // bit 30
    uint32_t RESERVED14 : 1; // bit 31
  } BITS;
} FSMC_PCR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t IRS : 1; // bit 0 IRS
    uint32_t ILS : 1; // bit 1 ILS
    uint32_t IFS : 1; // bit 2 IFS
    uint32_t IREN : 1; // bit 3 IREN
    uint32_t ILEN : 1; // bit 4 ILEN
    uint32_t IFEN : 1; // bit 5 IFEN
    uint32_t FEMPT : 1; // bit 6 FEMPT
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t RESERVED1 : 1; // bit 8
    uint32_t RESERVED2 : 1; // bit 9
    uint32_t RESERVED3 : 1; // bit 10
    uint32_t RESERVED4 : 1; // bit 11
    uint32_t RESERVED5 : 1; // bit 12
    uint32_t RESERVED6 : 1; // bit 13
    uint32_t RESERVED7 : 1; // bit 14
    uint32_t RESERVED8 : 1; // bit 15
    uint32_t RESERVED9 : 1; // bit 16
    uint32_t RESERVED10 : 1; // bit 17
    uint32_t RESERVED11 : 1; // bit 18
    uint32_t RESERVED12 : 1; // bit 19
    uint32_t RESERVED13 : 1; // bit 20
    uint32_t RESERVED14 : 1; // bit 21
    uint32_t RESERVED15 : 1; // bit 22
    uint32_t RESERVED16 : 1; // bit 23
    uint32_t RESERVED17 : 1; // bit 24
    uint32_t RESERVED18 : 1; // bit 25
    uint32_t RESERVED19 : 1; // bit 26
    uint32_t RESERVED20 : 1; // bit 27
    uint32_t RESERVED21 : 1; // bit 28
    uint32_t RESERVED22 : 1; // bit 29
    uint32_t RESERVED23 : 1; // bit 30
    uint32_t RESERVED24 : 1; // bit 31
  } BITS;
} FSMC_SR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MEMSETx : 8; // bit 0 MEMSETx
    uint32_t MEMWAITx : 8; // bit 8 MEMWAITx
    uint32_t MEMHOLDx : 8; // bit 16 MEMHOLDx
    uint32_t MEMHIZx : 8; // bit 24 MEMHIZx
  } BITS;
} FSMC_PMEM3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ATTSETx : 8; // bit 0 ATTSETx
    uint32_t ATTWAITx : 8; // bit 8 ATTWAITx
    uint32_t ATTHOLDx : 8; // bit 16 ATTHOLDx
    uint32_t ATTHIZx : 8; // bit 24 ATTHIZx
  } BITS;
} FSMC_PATT3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ECCx : 32; // bit 0 ECCx
  } BITS;
} FSMC_ECCR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t RESERVED0 : 1; // bit 0
    uint32_t PWAITEN : 1; // bit 1 PWAITEN
    uint32_t PBKEN : 1; // bit 2 PBKEN
    uint32_t PTYP : 1; // bit 3 PTYP
    uint32_t PWID : 2; // bit 4 PWID
    uint32_t ECCEN : 1; // bit 6 ECCEN
    uint32_t RESERVED1 : 1; // bit 7
    uint32_t RESERVED2 : 1; // bit 8
    uint32_t TCLR : 4; // bit 9 TCLR
    uint32_t TAR : 4; // bit 13 TAR
    uint32_t ECCPS : 3; // bit 17 ECCPS
    uint32_t RESERVED3 : 1; // bit 20
    uint32_t RESERVED4 : 1; // bit 21
    uint32_t RESERVED5 : 1; // bit 22
    uint32_t RESERVED6 : 1; // bit 23
    uint32_t RESERVED7 : 1; // bit 24
    uint32_t RESERVED8 : 1; // bit 25
    uint32_t RESERVED9 : 1; // bit 26
    uint32_t RESERVED10 : 1; // bit 27
    uint32_t RESERVED11 : 1; // bit 28
    uint32_t RESERVED12 : 1; // bit 29
    uint32_t RESERVED13 : 1; // bit 30
    uint32_t RESERVED14 : 1; // bit 31
  } BITS;
} FSMC_PCR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t IRS : 1; // bit 0 IRS
    uint32_t ILS : 1; // bit 1 ILS
    uint32_t IFS : 1; // bit 2 IFS
    uint32_t IREN : 1; // bit 3 IREN
    uint32_t ILEN : 1; // bit 4 ILEN
    uint32_t IFEN : 1; // bit 5 IFEN
    uint32_t FEMPT : 1; // bit 6 FEMPT
    uint32_t RESERVED0 : 1; // bit 7
    uint32_t RESERVED1 : 1; // bit 8
    uint32_t RESERVED2 : 1; // bit 9
    uint32_t RESERVED3 : 1; // bit 10
    uint32_t RESERVED4 : 1; // bit 11
    uint32_t RESERVED5 : 1; // bit 12
    uint32_t RESERVED6 : 1; // bit 13
    uint32_t RESERVED7 : 1; // bit 14
    uint32_t RESERVED8 : 1; // bit 15
    uint32_t RESERVED9 : 1; // bit 16
    uint32_t RESERVED10 : 1; // bit 17
    uint32_t RESERVED11 : 1; // bit 18
    uint32_t RESERVED12 : 1; // bit 19
    uint32_t RESERVED13 : 1; // bit 20
    uint32_t RESERVED14 : 1; // bit 21
    uint32_t RESERVED15 : 1; // bit 22
    uint32_t RESERVED16 : 1; // bit 23
    uint32_t RESERVED17 : 1; // bit 24
    uint32_t RESERVED18 : 1; // bit 25
    uint32_t RESERVED19 : 1; // bit 26
    uint32_t RESERVED20 : 1; // bit 27
    uint32_t RESERVED21 : 1; // bit 28
    uint32_t RESERVED22 : 1; // bit 29
    uint32_t RESERVED23 : 1; // bit 30
    uint32_t RESERVED24 : 1; // bit 31
  } BITS;
} FSMC_SR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t MEMSETx : 8; // bit 0 MEMSETx
    uint32_t MEMWAITx : 8; // bit 8 MEMWAITx
    uint32_t MEMHOLDx : 8; // bit 16 MEMHOLDx
    uint32_t MEMHIZx : 8; // bit 24 MEMHIZx
  } BITS;
} FSMC_PMEM4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ATTSETx : 8; // bit 0 ATTSETx
    uint32_t ATTWAITx : 8; // bit 8 ATTWAITx
    uint32_t ATTHOLDx : 8; // bit 16 ATTHOLDx
    uint32_t ATTHIZx : 8; // bit 24 ATTHIZx
  } BITS;
} FSMC_PATT4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t IOSETx : 8; // bit 0 IOSETx
    uint32_t IOWAITx : 8; // bit 8 IOWAITx
    uint32_t IOHOLDx : 8; // bit 16 IOHOLDx
    uint32_t IOHIZx : 8; // bit 24 IOHIZx
  } BITS;
} FSMC_PIO4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADDSET : 4; // bit 0 ADDSET
    uint32_t ADDHLD : 4; // bit 4 ADDHLD
    uint32_t DATAST : 8; // bit 8 DATAST
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t CLKDIV : 4; // bit 20 CLKDIV
    uint32_t DATLAT : 4; // bit 24 DATLAT
    uint32_t ACCMOD : 2; // bit 28 ACCMOD
    uint32_t RESERVED4 : 1; // bit 30
    uint32_t RESERVED5 : 1; // bit 31
  } BITS;
} FSMC_BWTR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADDSET : 4; // bit 0 ADDSET
    uint32_t ADDHLD : 4; // bit 4 ADDHLD
    uint32_t DATAST : 8; // bit 8 DATAST
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t CLKDIV : 4; // bit 20 CLKDIV
    uint32_t DATLAT : 4; // bit 24 DATLAT
    uint32_t ACCMOD : 2; // bit 28 ACCMOD
    uint32_t RESERVED4 : 1; // bit 30
    uint32_t RESERVED5 : 1; // bit 31
  } BITS;
} FSMC_BWTR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADDSET : 4; // bit 0 ADDSET
    uint32_t ADDHLD : 4; // bit 4 ADDHLD
    uint32_t DATAST : 8; // bit 8 DATAST
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t CLKDIV : 4; // bit 20 CLKDIV
    uint32_t DATLAT : 4; // bit 24 DATLAT
    uint32_t ACCMOD : 2; // bit 28 ACCMOD
    uint32_t RESERVED4 : 1; // bit 30
    uint32_t RESERVED5 : 1; // bit 31
  } BITS;
} FSMC_BWTR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ADDSET : 4; // bit 0 ADDSET
    uint32_t ADDHLD : 4; // bit 4 ADDHLD
    uint32_t DATAST : 8; // bit 8 DATAST
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
    uint32_t CLKDIV : 4; // bit 20 CLKDIV
    uint32_t DATLAT : 4; // bit 24 DATLAT
    uint32_t ACCMOD : 2; // bit 28 ACCMOD
    uint32_t RESERVED4 : 1; // bit 30
    uint32_t RESERVED5 : 1; // bit 31
  } BITS;
} FSMC_BWTR4_t;

typedef struct {
  FSMC_BCR1_t BCR1;
  FSMC_BTR1_t BTR1;
  FSMC_BCR2_t BCR2;
  FSMC_BTR2_t BTR2;
  FSMC_BCR3_t BCR3;
  FSMC_BTR3_t BTR3;
  FSMC_BCR4_t BCR4;
  FSMC_BTR4_t BTR4;
  FSMC_PCR2_t PCR2;
  FSMC_SR2_t SR2;
  FSMC_PMEM2_t PMEM2;
  FSMC_PATT2_t PATT2;
  FSMC_ECCR2_t ECCR2;
  FSMC_PCR3_t PCR3;
  FSMC_SR3_t SR3;
  FSMC_PMEM3_t PMEM3;
  FSMC_PATT3_t PATT3;
  FSMC_ECCR3_t ECCR3;
  FSMC_PCR4_t PCR4;
  FSMC_SR4_t SR4;
  FSMC_PMEM4_t PMEM4;
  FSMC_PATT4_t PATT4;
  FSMC_PIO4_t PIO4;
  FSMC_BWTR1_t BWTR1;
  FSMC_BWTR2_t BWTR2;
  FSMC_BWTR3_t BWTR3;
  FSMC_BWTR4_t BWTR4;
} FSMC_t;

#define FSMC_BASE (0xA0000000UL)
#define FSMC ((FSMC_t *)FSMC_BASE)

#define FSMC_BCR1bits (FSMC->BCR1.BITS)
#define FSMC_BTR1bits (FSMC->BTR1.BITS)
#define FSMC_BCR2bits (FSMC->BCR2.BITS)
#define FSMC_BTR2bits (FSMC->BTR2.BITS)
#define FSMC_BCR3bits (FSMC->BCR3.BITS)
#define FSMC_BTR3bits (FSMC->BTR3.BITS)
#define FSMC_BCR4bits (FSMC->BCR4.BITS)
#define FSMC_BTR4bits (FSMC->BTR4.BITS)
#define FSMC_PCR2bits (FSMC->PCR2.BITS)
#define FSMC_SR2bits (FSMC->SR2.BITS)
#define FSMC_PMEM2bits (FSMC->PMEM2.BITS)
#define FSMC_PATT2bits (FSMC->PATT2.BITS)
#define FSMC_ECCR2bits (FSMC->ECCR2.BITS)
#define FSMC_PCR3bits (FSMC->PCR3.BITS)
#define FSMC_SR3bits (FSMC->SR3.BITS)
#define FSMC_PMEM3bits (FSMC->PMEM3.BITS)
#define FSMC_PATT3bits (FSMC->PATT3.BITS)
#define FSMC_ECCR3bits (FSMC->ECCR3.BITS)
#define FSMC_PCR4bits (FSMC->PCR4.BITS)
#define FSMC_SR4bits (FSMC->SR4.BITS)
#define FSMC_PMEM4bits (FSMC->PMEM4.BITS)
#define FSMC_PATT4bits (FSMC->PATT4.BITS)
#define FSMC_PIO4bits (FSMC->PIO4.BITS)
#define FSMC_BWTR1bits (FSMC->BWTR1.BITS)
#define FSMC_BWTR2bits (FSMC->BWTR2.BITS)
#define FSMC_BWTR3bits (FSMC->BWTR3.BITS)
#define FSMC_BWTR4bits (FSMC->BWTR4.BITS)

#endif // _FSMC_H