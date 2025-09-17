/**
 * @file    TIM3.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   General purpose timer
 *
 * This header file provides register definitions and bitfield access
 * for the TIM3 peripheral of the STM32F103.
 */

#ifndef _TIM3_H
#define _TIM3_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CEN : 1; // bit 0 Counter enable
    volatile uint32_t UDIS : 1; // bit 1 Update disable
    volatile uint32_t URS : 1; // bit 2 Update request source
    volatile uint32_t OPM : 1; // bit 3 One-pulse mode
    volatile uint32_t DIR : 1; // bit 4 Direction
    volatile uint32_t CMS : 2; // bit 5 Center-aligned mode selection
    volatile uint32_t ARPE : 1; // bit 7 Auto-reload preload enable
    volatile uint32_t CKD : 2; // bit 8 Clock division
    volatile uint32_t RESERVED0 : 1; // bit 10
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
} TIM3_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t CCDS : 1; // bit 3 Capture/compare DMA selection
    volatile uint32_t MMS : 3; // bit 4 Master mode selection
    volatile uint32_t TI1S : 1; // bit 7 TI1 selection
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
} TIM3_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SMS : 3; // bit 0 Slave mode selection
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t TS : 3; // bit 4 Trigger selection
    volatile uint32_t MSM : 1; // bit 7 Master/Slave mode
    volatile uint32_t ETF : 4; // bit 8 External trigger filter
    volatile uint32_t ETPS : 2; // bit 12 External trigger prescaler
    volatile uint32_t ECE : 1; // bit 14 External clock enable
    volatile uint32_t ETP : 1; // bit 15 External trigger polarity
    volatile uint32_t RESERVED1 : 1; // bit 16
    volatile uint32_t RESERVED2 : 1; // bit 17
    volatile uint32_t RESERVED3 : 1; // bit 18
    volatile uint32_t RESERVED4 : 1; // bit 19
    volatile uint32_t RESERVED5 : 1; // bit 20
    volatile uint32_t RESERVED6 : 1; // bit 21
    volatile uint32_t RESERVED7 : 1; // bit 22
    volatile uint32_t RESERVED8 : 1; // bit 23
    volatile uint32_t RESERVED9 : 1; // bit 24
    volatile uint32_t RESERVED10 : 1; // bit 25
    volatile uint32_t RESERVED11 : 1; // bit 26
    volatile uint32_t RESERVED12 : 1; // bit 27
    volatile uint32_t RESERVED13 : 1; // bit 28
    volatile uint32_t RESERVED14 : 1; // bit 29
    volatile uint32_t RESERVED15 : 1; // bit 30
    volatile uint32_t RESERVED16 : 1; // bit 31
  } BITS;
} TIM3_SMCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIE : 1; // bit 0 Update interrupt enable
    volatile uint32_t CC1IE : 1; // bit 1 Capture/Compare 1 interrupt enable
    volatile uint32_t CC2IE : 1; // bit 2 Capture/Compare 2 interrupt enable
    volatile uint32_t CC3IE : 1; // bit 3 Capture/Compare 3 interrupt enable
    volatile uint32_t CC4IE : 1; // bit 4 Capture/Compare 4 interrupt enable
    volatile uint32_t RESERVED0 : 1; // bit 5
    volatile uint32_t TIE : 1; // bit 6 Trigger interrupt enable
    volatile uint32_t RESERVED1 : 1; // bit 7
    volatile uint32_t UDE : 1; // bit 8 Update DMA request enable
    volatile uint32_t CC1DE : 1; // bit 9 Capture/Compare 1 DMA request enable
    volatile uint32_t CC2DE : 1; // bit 10 Capture/Compare 2 DMA request enable
    volatile uint32_t CC3DE : 1; // bit 11 Capture/Compare 3 DMA request enable
    volatile uint32_t CC4DE : 1; // bit 12 Capture/Compare 4 DMA request enable
    volatile uint32_t RESERVED2 : 1; // bit 13
    volatile uint32_t TDE : 1; // bit 14 Trigger DMA request enable
    volatile uint32_t RESERVED3 : 1; // bit 15
    volatile uint32_t RESERVED4 : 1; // bit 16
    volatile uint32_t RESERVED5 : 1; // bit 17
    volatile uint32_t RESERVED6 : 1; // bit 18
    volatile uint32_t RESERVED7 : 1; // bit 19
    volatile uint32_t RESERVED8 : 1; // bit 20
    volatile uint32_t RESERVED9 : 1; // bit 21
    volatile uint32_t RESERVED10 : 1; // bit 22
    volatile uint32_t RESERVED11 : 1; // bit 23
    volatile uint32_t RESERVED12 : 1; // bit 24
    volatile uint32_t RESERVED13 : 1; // bit 25
    volatile uint32_t RESERVED14 : 1; // bit 26
    volatile uint32_t RESERVED15 : 1; // bit 27
    volatile uint32_t RESERVED16 : 1; // bit 28
    volatile uint32_t RESERVED17 : 1; // bit 29
    volatile uint32_t RESERVED18 : 1; // bit 30
    volatile uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} TIM3_DIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UIF : 1; // bit 0 Update interrupt flag
    volatile uint32_t CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
    volatile uint32_t CC2IF : 1; // bit 2 Capture/Compare 2 interrupt flag
    volatile uint32_t CC3IF : 1; // bit 3 Capture/Compare 3 interrupt flag
    volatile uint32_t CC4IF : 1; // bit 4 Capture/Compare 4 interrupt flag
    volatile uint32_t RESERVED0 : 1; // bit 5
    volatile uint32_t TIF : 1; // bit 6 Trigger interrupt flag
    volatile uint32_t RESERVED1 : 1; // bit 7
    volatile uint32_t RESERVED2 : 1; // bit 8
    volatile uint32_t CC1OF : 1; // bit 9 Capture/Compare 1 overcapture flag
    volatile uint32_t CC2OF : 1; // bit 10 Capture/compare 2 overcapture flag
    volatile uint32_t CC3OF : 1; // bit 11 Capture/Compare 3 overcapture flag
    volatile uint32_t CC4OF : 1; // bit 12 Capture/Compare 4 overcapture flag
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
} TIM3_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t UG : 1; // bit 0 Update generation
    volatile uint32_t CC1G : 1; // bit 1 Capture/compare 1 generation
    volatile uint32_t CC2G : 1; // bit 2 Capture/compare 2 generation
    volatile uint32_t CC3G : 1; // bit 3 Capture/compare 3 generation
    volatile uint32_t CC4G : 1; // bit 4 Capture/compare 4 generation
    volatile uint32_t RESERVED0 : 1; // bit 5
    volatile uint32_t TG : 1; // bit 6 Trigger generation
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
} TIM3_EGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    volatile uint32_t OC1FE : 1; // bit 2 Output compare 1 fast enable
    volatile uint32_t OC1PE : 1; // bit 3 Output compare 1 preload enable
    volatile uint32_t OC1M : 3; // bit 4 Output compare 1 mode
    volatile uint32_t OC1CE : 1; // bit 7 Output compare 1 clear enable
    volatile uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    volatile uint32_t OC2FE : 1; // bit 10 Output compare 2 fast enable
    volatile uint32_t OC2PE : 1; // bit 11 Output compare 2 preload enable
    volatile uint32_t OC2M : 3; // bit 12 Output compare 2 mode
    volatile uint32_t OC2CE : 1; // bit 15 Output compare 2 clear enable
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
} TIM3_CCMR1_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    volatile uint32_t IC1PSC : 2; // bit 2 Input capture 1 prescaler
    volatile uint32_t IC1F : 4; // bit 4 Input capture 1 filter
    volatile uint32_t CC2S : 2; // bit 8 Capture/compare 2 selection
    volatile uint32_t IC2PSC : 2; // bit 10 Input capture 2 prescaler
    volatile uint32_t IC2F : 4; // bit 12 Input capture 2 filter
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
} TIM3_CCMR1_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC3S : 2; // bit 0 Capture/Compare 3 selection
    volatile uint32_t OC3FE : 1; // bit 2 Output compare 3 fast enable
    volatile uint32_t OC3PE : 1; // bit 3 Output compare 3 preload enable
    volatile uint32_t OC3M : 3; // bit 4 Output compare 3 mode
    volatile uint32_t OC3CE : 1; // bit 7 Output compare 3 clear enable
    volatile uint32_t CC4S : 2; // bit 8 Capture/Compare 4 selection
    volatile uint32_t OC4FE : 1; // bit 10 Output compare 4 fast enable
    volatile uint32_t OC4PE : 1; // bit 11 Output compare 4 preload enable
    volatile uint32_t OC4M : 3; // bit 12 Output compare 4 mode
    volatile uint32_t O24CE : 1; // bit 15 Output compare 4 clear enable
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
} TIM3_CCMR2_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC3S : 2; // bit 0 Capture/Compare 3 selection
    volatile uint32_t IC3PSC : 2; // bit 2 Input capture 3 prescaler
    volatile uint32_t IC3F : 4; // bit 4 Input capture 3 filter
    volatile uint32_t CC4S : 2; // bit 8 Capture/Compare 4 selection
    volatile uint32_t IC4PSC : 2; // bit 10 Input capture 4 prescaler
    volatile uint32_t IC4F : 4; // bit 12 Input capture 4 filter
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
} TIM3_CCMR2_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CC1E : 1; // bit 0 Capture/Compare 1 output enable
    volatile uint32_t CC1P : 1; // bit 1 Capture/Compare 1 output Polarity
    volatile uint32_t RESERVED0 : 1; // bit 2
    volatile uint32_t RESERVED1 : 1; // bit 3
    volatile uint32_t CC2E : 1; // bit 4 Capture/Compare 2 output enable
    volatile uint32_t CC2P : 1; // bit 5 Capture/Compare 2 output Polarity
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t CC3E : 1; // bit 8 Capture/Compare 3 output enable
    volatile uint32_t CC3P : 1; // bit 9 Capture/Compare 3 output Polarity
    volatile uint32_t RESERVED4 : 1; // bit 10
    volatile uint32_t RESERVED5 : 1; // bit 11
    volatile uint32_t CC4E : 1; // bit 12 Capture/Compare 4 output enable
    volatile uint32_t CC4P : 1; // bit 13 Capture/Compare 3 output Polarity
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
} TIM3_CCER_t;

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
} TIM3_CNT_t;

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
} TIM3_PSC_t;

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
} TIM3_ARR_t;

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
} TIM3_CCR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CCR2 : 16; // bit 0 Capture/Compare 2 value
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
} TIM3_CCR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CCR3 : 16; // bit 0 Capture/Compare value
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
} TIM3_CCR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CCR4 : 16; // bit 0 Capture/Compare value
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
} TIM3_CCR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DBA : 5; // bit 0 DMA base address
    volatile uint32_t RESERVED0 : 1; // bit 5
    volatile uint32_t RESERVED1 : 1; // bit 6
    volatile uint32_t RESERVED2 : 1; // bit 7
    volatile uint32_t DBL : 5; // bit 8 DMA burst length
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
} TIM3_DCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DMAB : 16; // bit 0 DMA register for burst accesses
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
} TIM3_DMAR_t;

typedef struct {
  TIM3_CR1_t CR1;
  TIM3_CR2_t CR2;
  TIM3_SMCR_t SMCR;
  TIM3_DIER_t DIER;
  TIM3_SR_t SR;
  TIM3_EGR_t EGR;
  TIM3_CCMR1_Output_t CCMR1_Output;
  TIM3_CCMR1_Input_t CCMR1_Input;
  TIM3_CCMR2_Output_t CCMR2_Output;
  TIM3_CCMR2_Input_t CCMR2_Input;
  TIM3_CCER_t CCER;
  TIM3_CNT_t CNT;
  TIM3_PSC_t PSC;
  TIM3_ARR_t ARR;
  TIM3_CCR1_t CCR1;
  TIM3_CCR2_t CCR2;
  TIM3_CCR3_t CCR3;
  TIM3_CCR4_t CCR4;
  TIM3_DCR_t DCR;
  TIM3_DMAR_t DMAR;
} TIM3_t;

#define TIM3_BASE (0x40000400UL)
#define TIM3 ((TIM3_t *)TIM3_BASE)

#define TIM3_CR1bits (TIM3->CR1.BITS)
#define TIM3_CR2bits (TIM3->CR2.BITS)
#define TIM3_SMCRbits (TIM3->SMCR.BITS)
#define TIM3_DIERbits (TIM3->DIER.BITS)
#define TIM3_SRbits (TIM3->SR.BITS)
#define TIM3_EGRbits (TIM3->EGR.BITS)
#define TIM3_CCMR1_Outputbits (TIM3->CCMR1_Output.BITS)
#define TIM3_CCMR1_Inputbits (TIM3->CCMR1_Input.BITS)
#define TIM3_CCMR2_Outputbits (TIM3->CCMR2_Output.BITS)
#define TIM3_CCMR2_Inputbits (TIM3->CCMR2_Input.BITS)
#define TIM3_CCERbits (TIM3->CCER.BITS)
#define TIM3_CNTbits (TIM3->CNT.BITS)
#define TIM3_PSCbits (TIM3->PSC.BITS)
#define TIM3_ARRbits (TIM3->ARR.BITS)
#define TIM3_CCR1bits (TIM3->CCR1.BITS)
#define TIM3_CCR2bits (TIM3->CCR2.BITS)
#define TIM3_CCR3bits (TIM3->CCR3.BITS)
#define TIM3_CCR4bits (TIM3->CCR4.BITS)
#define TIM3_DCRbits (TIM3->DCR.BITS)
#define TIM3_DMARbits (TIM3->DMAR.BITS)

#endif // _TIM3_H