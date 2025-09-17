/**
 * @file    TIM6.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Basic timer
 *
 * This header file provides register definitions and bitfield access
 * for the TIM6 peripheral of the STM32F103.
 */

#ifndef _TIM6_H
#define _TIM6_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CEN : 1; // bit 0 Counter enable
    volatile uint32_t UDIS : 1; // bit 1 Update disable
    volatile uint32_t URS : 1; // bit 2 Update request source
    volatile uint32_t OPM : 1; // bit 3 One-pulse mode
    volatile uint32_t RESERVED0 : 1; // bit 4
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t ARPE : 1; // bit 7 Auto-reload preload enable
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
} TIM6_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t MMS : 3; // bit 4 Master mode selection
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
} TIM6_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIE : 1; // bit 0 Update interrupt enable
    volatile uint32_t RESERVED0 : 1; // bit 1
    volatile uint32_t RESERVED1 : 1; // bit 2
    volatile uint32_t RESERVED2 : 1; // bit 3
    volatile uint32_t RESERVED3 : 1; // bit 4
    volatile uint32_t RESERVED4 : 1; // bit 5
    volatile uint32_t RESERVED5 : 1; // bit 6
    volatile uint32_t RESERVED6 : 1; // bit 7
    volatile uint32_t UDE : 1; // bit 8 Update DMA request enable
    volatile uint32_t RESERVED7 : 1; // bit 9
    volatile uint32_t RESERVED8 : 1; // bit 10
    volatile uint32_t RESERVED9 : 1; // bit 11
    volatile uint32_t RESERVED10 : 1; // bit 12
    volatile uint32_t RESERVED11 : 1; // bit 13
    volatile uint32_t RESERVED12 : 1; // bit 14
    volatile uint32_t RESERVED13 : 1; // bit 15
    volatile uint32_t RESERVED14 : 1; // bit 16
    volatile uint32_t RESERVED15 : 1; // bit 17
    volatile uint32_t RESERVED16 : 1; // bit 18
    volatile uint32_t RESERVED17 : 1; // bit 19
    volatile uint32_t RESERVED18 : 1; // bit 20
    volatile uint32_t RESERVED19 : 1; // bit 21
    volatile uint32_t RESERVED20 : 1; // bit 22
    volatile uint32_t RESERVED21 : 1; // bit 23
    volatile uint32_t RESERVED22 : 1; // bit 24
    volatile uint32_t RESERVED23 : 1; // bit 25
    volatile uint32_t RESERVED24 : 1; // bit 26
    volatile uint32_t RESERVED25 : 1; // bit 27
    volatile uint32_t RESERVED26 : 1; // bit 28
    volatile uint32_t RESERVED27 : 1; // bit 29
    volatile uint32_t RESERVED28 : 1; // bit 30
    volatile uint32_t RESERVED29 : 1; // bit 31
  } BITS;
} TIM6_DIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIF : 1; // bit 0 Update interrupt flag
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
} TIM6_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UG : 1; // bit 0 Update generation
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
} TIM6_EGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CNT : 16; // bit 0 Low counter value
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
} TIM6_CNT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PSC : 16; // bit 0 Prescaler value
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
} TIM6_PSC_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ARR : 16; // bit 0 Low Auto-reload value
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
} TIM6_ARR_t;

typedef struct {
  TIM6_CR1_t CR1;
  TIM6_CR2_t CR2;
  TIM6_DIER_t DIER;
  TIM6_SR_t SR;
  TIM6_EGR_t EGR;
  TIM6_CNT_t CNT;
  TIM6_PSC_t PSC;
  TIM6_ARR_t ARR;
} TIM6_t;

#define TIM6_BASE (0x40001000UL)
#define TIM6 ((TIM6_t *)TIM6_BASE)

#define TIM6_CR1bits (TIM6->CR1.BITS)
#define TIM6_CR2bits (TIM6->CR2.BITS)
#define TIM6_DIERbits (TIM6->DIER.BITS)
#define TIM6_SRbits (TIM6->SR.BITS)
#define TIM6_EGRbits (TIM6->EGR.BITS)
#define TIM6_CNTbits (TIM6->CNT.BITS)
#define TIM6_PSCbits (TIM6->PSC.BITS)
#define TIM6_ARRbits (TIM6->ARR.BITS)

#endif // _TIM6_H