/**
 * @file    MPU.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Memory protection unit
 *
 * This header file provides register definitions and bitfield access
 * for the MPU peripheral of the STM32F103.
 */

#ifndef _MPU_H
#define _MPU_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SEPARATE : 1; // bit 0 Separate flag
    uint32_t RESERVED0 : 1; // bit 1
    uint32_t RESERVED1 : 1; // bit 2
    uint32_t RESERVED2 : 1; // bit 3
    uint32_t RESERVED3 : 1; // bit 4
    uint32_t RESERVED4 : 1; // bit 5
    uint32_t RESERVED5 : 1; // bit 6
    uint32_t RESERVED6 : 1; // bit 7
    uint32_t DREGION : 8; // bit 8 Number of MPU data regions
    uint32_t IREGION : 8; // bit 16 Number of MPU instruction regions
    uint32_t RESERVED7 : 1; // bit 24
    uint32_t RESERVED8 : 1; // bit 25
    uint32_t RESERVED9 : 1; // bit 26
    uint32_t RESERVED10 : 1; // bit 27
    uint32_t RESERVED11 : 1; // bit 28
    uint32_t RESERVED12 : 1; // bit 29
    uint32_t RESERVED13 : 1; // bit 30
    uint32_t RESERVED14 : 1; // bit 31
  } BITS;
} MPU_MPU_TYPER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ENABLE : 1; // bit 0 Enables the MPU
    uint32_t HFNMIENA : 1; // bit 1 Enables the operation of MPU during hard fault
    uint32_t PRIVDEFENA : 1; // bit 2 Enable priviliged software access to default memory map
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t RESERVED1 : 1; // bit 4
    uint32_t RESERVED2 : 1; // bit 5
    uint32_t RESERVED3 : 1; // bit 6
    uint32_t RESERVED4 : 1; // bit 7
    uint32_t RESERVED5 : 1; // bit 8
    uint32_t RESERVED6 : 1; // bit 9
    uint32_t RESERVED7 : 1; // bit 10
    uint32_t RESERVED8 : 1; // bit 11
    uint32_t RESERVED9 : 1; // bit 12
    uint32_t RESERVED10 : 1; // bit 13
    uint32_t RESERVED11 : 1; // bit 14
    uint32_t RESERVED12 : 1; // bit 15
    uint32_t RESERVED13 : 1; // bit 16
    uint32_t RESERVED14 : 1; // bit 17
    uint32_t RESERVED15 : 1; // bit 18
    uint32_t RESERVED16 : 1; // bit 19
    uint32_t RESERVED17 : 1; // bit 20
    uint32_t RESERVED18 : 1; // bit 21
    uint32_t RESERVED19 : 1; // bit 22
    uint32_t RESERVED20 : 1; // bit 23
    uint32_t RESERVED21 : 1; // bit 24
    uint32_t RESERVED22 : 1; // bit 25
    uint32_t RESERVED23 : 1; // bit 26
    uint32_t RESERVED24 : 1; // bit 27
    uint32_t RESERVED25 : 1; // bit 28
    uint32_t RESERVED26 : 1; // bit 29
    uint32_t RESERVED27 : 1; // bit 30
    uint32_t RESERVED28 : 1; // bit 31
  } BITS;
} MPU_MPU_CTRL_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t REGION : 8; // bit 0 MPU region
    uint32_t RESERVED0 : 1; // bit 8
    uint32_t RESERVED1 : 1; // bit 9
    uint32_t RESERVED2 : 1; // bit 10
    uint32_t RESERVED3 : 1; // bit 11
    uint32_t RESERVED4 : 1; // bit 12
    uint32_t RESERVED5 : 1; // bit 13
    uint32_t RESERVED6 : 1; // bit 14
    uint32_t RESERVED7 : 1; // bit 15
    uint32_t RESERVED8 : 1; // bit 16
    uint32_t RESERVED9 : 1; // bit 17
    uint32_t RESERVED10 : 1; // bit 18
    uint32_t RESERVED11 : 1; // bit 19
    uint32_t RESERVED12 : 1; // bit 20
    uint32_t RESERVED13 : 1; // bit 21
    uint32_t RESERVED14 : 1; // bit 22
    uint32_t RESERVED15 : 1; // bit 23
    uint32_t RESERVED16 : 1; // bit 24
    uint32_t RESERVED17 : 1; // bit 25
    uint32_t RESERVED18 : 1; // bit 26
    uint32_t RESERVED19 : 1; // bit 27
    uint32_t RESERVED20 : 1; // bit 28
    uint32_t RESERVED21 : 1; // bit 29
    uint32_t RESERVED22 : 1; // bit 30
    uint32_t RESERVED23 : 1; // bit 31
  } BITS;
} MPU_MPU_RNR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t REGION : 4; // bit 0 MPU region field
    uint32_t VALID : 1; // bit 4 MPU region number valid
    uint32_t ADDR : 27; // bit 5 Region base address field
  } BITS;
} MPU_MPU_RBAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ENABLE : 1; // bit 0 Region enable bit.
    uint32_t SIZE : 5; // bit 1 Size of the MPU protection region
    uint32_t RESERVED0 : 1; // bit 6
    uint32_t RESERVED1 : 1; // bit 7
    uint32_t SRD : 8; // bit 8 Subregion disable bits
    uint32_t B : 1; // bit 16 memory attribute
    uint32_t C : 1; // bit 17 memory attribute
    uint32_t S : 1; // bit 18 Shareable memory attribute
    uint32_t TEX : 3; // bit 19 memory attribute
    uint32_t RESERVED2 : 1; // bit 22
    uint32_t RESERVED3 : 1; // bit 23
    uint32_t AP : 3; // bit 24 Access permission
    uint32_t RESERVED4 : 1; // bit 27
    uint32_t XN : 1; // bit 28 Instruction access disable bit
    uint32_t RESERVED5 : 1; // bit 29
    uint32_t RESERVED6 : 1; // bit 30
    uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} MPU_MPU_RASR_t;

typedef struct {
  MPU_MPU_TYPER_t MPU_TYPER;
  MPU_MPU_CTRL_t MPU_CTRL;
  MPU_MPU_RNR_t MPU_RNR;
  MPU_MPU_RBAR_t MPU_RBAR;
  MPU_MPU_RASR_t MPU_RASR;
} MPU_t;

#define MPU_BASE (0xE000ED90UL)
#define MPU ((MPU_t *)MPU_BASE)

#define MPU_MPU_TYPERbits (MPU->MPU_TYPER.BITS)
#define MPU_MPU_CTRLbits (MPU->MPU_CTRL.BITS)
#define MPU_MPU_RNRbits (MPU->MPU_RNR.BITS)
#define MPU_MPU_RBARbits (MPU->MPU_RBAR.BITS)
#define MPU_MPU_RASRbits (MPU->MPU_RASR.BITS)

#endif // _MPU_H