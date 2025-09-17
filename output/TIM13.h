/**
 * @file    TIM13.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   General purpose timer
 *
 * This header file provides register definitions and bitfield access
 * for the TIM13 peripheral of the STM32F103.
 */

#ifndef _TIM13_H
#define _TIM13_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CEN : 1; // bit 0 Counter enable
    volatile uint32_t UDIS : 1; // bit 1 Update disable
    volatile uint32_t URS : 1; // bit 2 Update request source
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t RESERVED2 : 1; // bit 5
    volatile uint32_t RESERVED3 : 1; // bit 6
    volatile uint32_t ARPE : 1; // bit 7 Auto-reload preload enable
    volatile uint32_t CKD : 2; // bit 8 Clock division
    volatile uint32_t RESERVED4 : 1; // bit 10
    volatile uint32_t RESERVED5 : 1; // bit 11
    volatile uint32_t RESERVED6 : 1; // bit 12
    volatile uint32_t RESERVED7 : 1; // bit 13
    volatile uint32_t RESERVED8 : 1; // bit 14
    volatile uint32_t RESERVED9 : 1; // bit 15
    volatile uint32_t RESERVED10 : 1; // bit 16
    volatile uint32_t RESERVED11 : 1; // bit 17
    volatile uint32_t RESERVED12 : 1; // bit 18
    volatile uint32_t RESERVED13 : 1; // bit 19
    volatile uint32_t RESERVED14 : 1; // bit 20
    volatile uint32_t RESERVED15 : 1; // bit 21
    volatile uint32_t RESERVED16 : 1; // bit 22
    volatile uint32_t RESERVED17 : 1; // bit 23
    volatile uint32_t RESERVED18 : 1; // bit 24
    volatile uint32_t RESERVED19 : 1; // bit 25
    volatile uint32_t RESERVED20 : 1; // bit 26
    volatile uint32_t RESERVED21 : 1; // bit 27
    volatile uint32_t RESERVED22 : 1; // bit 28
    volatile uint32_t RESERVED23 : 1; // bit 29
    volatile uint32_t RESERVED24 : 1; // bit 30
    volatile uint32_t RESERVED25 : 1; // bit 31
  } BITS;
} TIM13_CR1_t;

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
} TIM13_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIE : 1; // bit 0 Update interrupt enable
    volatile uint32_t CC1IE : 1; // bit 1 Capture/Compare 1 interrupt enable
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t RESERVED1 : 1; // bit 3
    volatile uint32_t RESERVED2 : 1; // bit 4
    volatile uint32_t RESERVED3 : 1; // bit 5
    volatile uint32_t RESERVED4 : 1; // bit 6
    volatile uint32_t RESERVED5 : 1; // bit 7
    volatile uint32_t RESERVED6 : 1; // bit 8
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
} TIM13_DIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIF : 1; // bit 0 Update interrupt flag
    volatile uint32_t CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t RESERVED1 : 1; // bit 3
    volatile uint32_t RESERVED2 : 1; // bit 4
    volatile uint32_t RESERVED3 : 1; // bit 5
    volatile uint32_t RESERVED4 : 1; // bit 6
    volatile uint32_t RESERVED5 : 1; // bit 7
    volatile uint32_t RESERVED6 : 1; // bit 8
    volatile uint32_t CC1OF : 1; // bit 9 Capture/Compare 1 overcapture flag
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
} TIM13_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UG : 1; // bit 0 Update generation
    volatile uint32_t CC1G : 1; // bit 1 Capture/compare 1 generation
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t RESERVED1 : 1; // bit 3
    volatile uint32_t RESERVED2 : 1; // bit 4
    volatile uint32_t RESERVED3 : 1; // bit 5
    volatile uint32_t RESERVED4 : 1; // bit 6
    volatile uint32_t RESERVED5 : 1; // bit 7
    volatile uint32_t RESERVED6 : 1; // bit 8
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
} TIM13_EGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t OC1PE : 1; // bit 3 Output Compare 1 preload enable
    volatile uint32_t OC1M : 3; // bit 4 Output Compare 1 mode
    volatile uint32_t RESERVED1 : 1; // bit 7
    volatile uint32_t RESERVED2 : 1; // bit 8
    volatile uint32_t RESERVED3 : 1; // bit 9
    volatile uint32_t RESERVED4 : 1; // bit 10
    volatile uint32_t RESERVED5 : 1; // bit 11
    volatile uint32_t RESERVED6 : 1; // bit 12
    volatile uint32_t RESERVED7 : 1; // bit 13
    volatile uint32_t RESERVED8 : 1; // bit 14
    volatile uint32_t RESERVED9 : 1; // bit 15
    volatile uint32_t RESERVED10 : 1; // bit 16
    volatile uint32_t RESERVED11 : 1; // bit 17
    volatile uint32_t RESERVED12 : 1; // bit 18
    volatile uint32_t RESERVED13 : 1; // bit 19
    volatile uint32_t RESERVED14 : 1; // bit 20
    volatile uint32_t RESERVED15 : 1; // bit 21
    volatile uint32_t RESERVED16 : 1; // bit 22
    volatile uint32_t RESERVED17 : 1; // bit 23
    volatile uint32_t RESERVED18 : 1; // bit 24
    volatile uint32_t RESERVED19 : 1; // bit 25
    volatile uint32_t RESERVED20 : 1; // bit 26
    volatile uint32_t RESERVED21 : 1; // bit 27
    volatile uint32_t RESERVED22 : 1; // bit 28
    volatile uint32_t RESERVED23 : 1; // bit 29
    volatile uint32_t RESERVED24 : 1; // bit 30
    volatile uint32_t RESERVED25 : 1; // bit 31
  } BITS;
} TIM13_CCMR1_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    volatile uint32_t IC1PSC : 2; // bit 2 Input capture 1 prescaler
    volatile uint32_t IC1F : 4; // bit 4 Input capture 1 filter
    volatile uint32_t RESERVED0 : 1; // bit 8
    volatile uint32_t RESERVED1 : 1; // bit 9
    volatile uint32_t RESERVED2 : 1; // bit 10
    volatile uint32_t RESERVED3 : 1; // bit 11
    volatile uint32_t RESERVED4 : 1; // bit 12
    volatile uint32_t RESERVED5 : 1; // bit 13
    volatile uint32_t RESERVED6 : 1; // bit 14
    volatile uint32_t RESERVED7 : 1; // bit 15
    volatile uint32_t RESERVED8 : 1; // bit 16
    volatile uint32_t RESERVED9 : 1; // bit 17
    volatile uint32_t RESERVED10 : 1; // bit 18
    volatile uint32_t RESERVED11 : 1; // bit 19
    volatile uint32_t RESERVED12 : 1; // bit 20
    volatile uint32_t RESERVED13 : 1; // bit 21
    volatile uint32_t RESERVED14 : 1; // bit 22
    volatile uint32_t RESERVED15 : 1; // bit 23
    volatile uint32_t RESERVED16 : 1; // bit 24
    volatile uint32_t RESERVED17 : 1; // bit 25
    volatile uint32_t RESERVED18 : 1; // bit 26
    volatile uint32_t RESERVED19 : 1; // bit 27
    volatile uint32_t RESERVED20 : 1; // bit 28
    volatile uint32_t RESERVED21 : 1; // bit 29
    volatile uint32_t RESERVED22 : 1; // bit 30
    volatile uint32_t RESERVED23 : 1; // bit 31
  } BITS;
} TIM13_CCMR1_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1E : 1; // bit 0 Capture/Compare 1 output enable
    volatile uint32_t CC1P : 1; // bit 1 Capture/Compare 1 output Polarity
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t CC1NP : 1; // bit 3 Capture/Compare 1 output Polarity
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
} TIM13_CCER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CNT : 16; // bit 0 counter value
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
} TIM13_CNT_t;

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
} TIM13_PSC_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ARR : 16; // bit 0 Auto-reload value
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
} TIM13_ARR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CCR1 : 16; // bit 0 Capture/Compare 1 value
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
} TIM13_CCR1_t;

typedef struct {
  TIM13_CR1_t CR1;
  TIM13_CR2_t CR2;
  TIM13_DIER_t DIER;
  TIM13_SR_t SR;
  TIM13_EGR_t EGR;
  TIM13_CCMR1_Output_t CCMR1_Output;
  TIM13_CCMR1_Input_t CCMR1_Input;
  TIM13_CCER_t CCER;
  TIM13_CNT_t CNT;
  TIM13_PSC_t PSC;
  TIM13_ARR_t ARR;
  TIM13_CCR1_t CCR1;
} TIM13_t;

#define TIM13_BASE (0x40001C00UL)
#define TIM13 ((TIM13_t *)TIM13_BASE)

#define TIM13_CR1bits (TIM13->CR1.BITS)
#define TIM13_CR2bits (TIM13->CR2.BITS)
#define TIM13_DIERbits (TIM13->DIER.BITS)
#define TIM13_SRbits (TIM13->SR.BITS)
#define TIM13_EGRbits (TIM13->EGR.BITS)
#define TIM13_CCMR1_Outputbits (TIM13->CCMR1_Output.BITS)
#define TIM13_CCMR1_Inputbits (TIM13->CCMR1_Input.BITS)
#define TIM13_CCERbits (TIM13->CCER.BITS)
#define TIM13_CNTbits (TIM13->CNT.BITS)
#define TIM13_PSCbits (TIM13->PSC.BITS)
#define TIM13_ARRbits (TIM13->ARR.BITS)
#define TIM13_CCR1bits (TIM13->CCR1.BITS)

#endif // _TIM13_H