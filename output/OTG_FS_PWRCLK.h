/**
 * @file    OTG_FS_PWRCLK.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   USB on the go full speed
 *
 * This header file provides register definitions and bitfield access
 * for the OTG_FS_PWRCLK peripheral of the STM32F103.
 */

#ifndef _OTG_FS_PWRCLK_H
#define _OTG_FS_PWRCLK_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t STPPCLK : 1; // bit 0 Stop PHY clock
    volatile uint32_t GATEHCLK : 1; // bit 1 Gate HCLK
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t RESERVED1 : 1; // bit 3
    volatile uint32_t PHYSUSP : 1; // bit 4 PHY Suspended
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
} OTG_FS_PWRCLK_FS_PCGCCTL_t;

typedef struct {
  OTG_FS_PWRCLK_FS_PCGCCTL_t FS_PCGCCTL;
} OTG_FS_PWRCLK_t;

#define OTG_FS_PWRCLK_BASE (0x50000E00UL)
#define OTG_FS_PWRCLK ((OTG_FS_PWRCLK_t *)OTG_FS_PWRCLK_BASE)

#define OTG_FS_PWRCLK_FS_PCGCCTLbits (OTG_FS_PWRCLK->FS_PCGCCTL.BITS)

#endif // _OTG_FS_PWRCLK_H