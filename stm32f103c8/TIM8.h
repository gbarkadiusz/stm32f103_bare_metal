/**
 * @file    TIM8.h
 * @author  Adam Cholewinski
 * @date    2025-09-17
 * @brief   Advanced timer
 *
 * This header file provides register definitions and bitfield access
 * for the TIM8 peripheral of the STM32F103.
 */

#ifndef _TIM8_H
#define _TIM8_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CEN : 1; // bit 0 Counter enable
    uint32_t UDIS : 1; // bit 1 Update disable
    uint32_t URS : 1; // bit 2 Update request source
    uint32_t OPM : 1; // bit 3 One-pulse mode
    uint32_t DIR : 1; // bit 4 Direction
    uint32_t CMS : 2; // bit 5 Center-aligned mode selection
    uint32_t ARPE : 1; // bit 7 Auto-reload preload enable
    uint32_t CKD : 2; // bit 8 Clock division
    uint32_t RESERVED0 : 1; // bit 10
    uint32_t RESERVED1 : 1; // bit 11
    uint32_t RESERVED2 : 1; // bit 12
    uint32_t RESERVED3 : 1; // bit 13
    uint32_t RESERVED4 : 1; // bit 14
    uint32_t RESERVED5 : 1; // bit 15
    uint32_t RESERVED6 : 1; // bit 16
    uint32_t RESERVED7 : 1; // bit 17
    uint32_t RESERVED8 : 1; // bit 18
    uint32_t RESERVED9 : 1; // bit 19
    uint32_t RESERVED10 : 1; // bit 20
    uint32_t RESERVED11 : 1; // bit 21
    uint32_t RESERVED12 : 1; // bit 22
    uint32_t RESERVED13 : 1; // bit 23
    uint32_t RESERVED14 : 1; // bit 24
    uint32_t RESERVED15 : 1; // bit 25
    uint32_t RESERVED16 : 1; // bit 26
    uint32_t RESERVED17 : 1; // bit 27
    uint32_t RESERVED18 : 1; // bit 28
    uint32_t RESERVED19 : 1; // bit 29
    uint32_t RESERVED20 : 1; // bit 30
    uint32_t RESERVED21 : 1; // bit 31
  } BITS;
} TIM8_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCPC : 1; // bit 0 Capture/compare preloaded control
    uint32_t RESERVED0 : 1; // bit 1
    uint32_t CCUS : 1; // bit 2 Capture/compare control update selection
    uint32_t CCDS : 1; // bit 3 Capture/compare DMA selection
    uint32_t MMS : 3; // bit 4 Master mode selection
    uint32_t TI1S : 1; // bit 7 TI1 selection
    uint32_t OIS1 : 1; // bit 8 Output Idle state 1
    uint32_t OIS1N : 1; // bit 9 Output Idle state 1
    uint32_t OIS2 : 1; // bit 10 Output Idle state 2
    uint32_t OIS2N : 1; // bit 11 Output Idle state 2
    uint32_t OIS3 : 1; // bit 12 Output Idle state 3
    uint32_t OIS3N : 1; // bit 13 Output Idle state 3
    uint32_t OIS4 : 1; // bit 14 Output Idle state 4
    uint32_t RESERVED1 : 1; // bit 15
    uint32_t RESERVED2 : 1; // bit 16
    uint32_t RESERVED3 : 1; // bit 17
    uint32_t RESERVED4 : 1; // bit 18
    uint32_t RESERVED5 : 1; // bit 19
    uint32_t RESERVED6 : 1; // bit 20
    uint32_t RESERVED7 : 1; // bit 21
    uint32_t RESERVED8 : 1; // bit 22
    uint32_t RESERVED9 : 1; // bit 23
    uint32_t RESERVED10 : 1; // bit 24
    uint32_t RESERVED11 : 1; // bit 25
    uint32_t RESERVED12 : 1; // bit 26
    uint32_t RESERVED13 : 1; // bit 27
    uint32_t RESERVED14 : 1; // bit 28
    uint32_t RESERVED15 : 1; // bit 29
    uint32_t RESERVED16 : 1; // bit 30
    uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} TIM8_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t SMS : 3; // bit 0 Slave mode selection
    uint32_t RESERVED0 : 1; // bit 3
    uint32_t TS : 3; // bit 4 Trigger selection
    uint32_t MSM : 1; // bit 7 Master/Slave mode
    uint32_t ETF : 4; // bit 8 External trigger filter
    uint32_t ETPS : 2; // bit 12 External trigger prescaler
    uint32_t ECE : 1; // bit 14 External clock enable
    uint32_t ETP : 1; // bit 15 External trigger polarity
    uint32_t RESERVED1 : 1; // bit 16
    uint32_t RESERVED2 : 1; // bit 17
    uint32_t RESERVED3 : 1; // bit 18
    uint32_t RESERVED4 : 1; // bit 19
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
} TIM8_SMCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t UIE : 1; // bit 0 Update interrupt enable
    uint32_t CC1IE : 1; // bit 1 Capture/Compare 1 interrupt enable
    uint32_t CC2IE : 1; // bit 2 Capture/Compare 2 interrupt enable
    uint32_t CC3IE : 1; // bit 3 Capture/Compare 3 interrupt enable
    uint32_t CC4IE : 1; // bit 4 Capture/Compare 4 interrupt enable
    uint32_t COMIE : 1; // bit 5 COM interrupt enable
    uint32_t TIE : 1; // bit 6 Trigger interrupt enable
    uint32_t BIE : 1; // bit 7 Break interrupt enable
    uint32_t UDE : 1; // bit 8 Update DMA request enable
    uint32_t CC1DE : 1; // bit 9 Capture/Compare 1 DMA request enable
    uint32_t CC2DE : 1; // bit 10 Capture/Compare 2 DMA request enable
    uint32_t CC3DE : 1; // bit 11 Capture/Compare 3 DMA request enable
    uint32_t CC4DE : 1; // bit 12 Capture/Compare 4 DMA request enable
    uint32_t COMDE : 1; // bit 13 COM DMA request enable
    uint32_t TDE : 1; // bit 14 Trigger DMA request enable
    uint32_t RESERVED0 : 1; // bit 15
    uint32_t RESERVED1 : 1; // bit 16
    uint32_t RESERVED2 : 1; // bit 17
    uint32_t RESERVED3 : 1; // bit 18
    uint32_t RESERVED4 : 1; // bit 19
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
} TIM8_DIER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t UIF : 1; // bit 0 Update interrupt flag
    uint32_t CC1IF : 1; // bit 1 Capture/compare 1 interrupt flag
    uint32_t CC2IF : 1; // bit 2 Capture/Compare 2 interrupt flag
    uint32_t CC3IF : 1; // bit 3 Capture/Compare 3 interrupt flag
    uint32_t CC4IF : 1; // bit 4 Capture/Compare 4 interrupt flag
    uint32_t COMIF : 1; // bit 5 COM interrupt flag
    uint32_t TIF : 1; // bit 6 Trigger interrupt flag
    uint32_t BIF : 1; // bit 7 Break interrupt flag
    uint32_t RESERVED0 : 1; // bit 8
    uint32_t CC1OF : 1; // bit 9 Capture/Compare 1 overcapture flag
    uint32_t CC2OF : 1; // bit 10 Capture/compare 2 overcapture flag
    uint32_t CC3OF : 1; // bit 11 Capture/Compare 3 overcapture flag
    uint32_t CC4OF : 1; // bit 12 Capture/Compare 4 overcapture flag
    uint32_t RESERVED1 : 1; // bit 13
    uint32_t RESERVED2 : 1; // bit 14
    uint32_t RESERVED3 : 1; // bit 15
    uint32_t RESERVED4 : 1; // bit 16
    uint32_t RESERVED5 : 1; // bit 17
    uint32_t RESERVED6 : 1; // bit 18
    uint32_t RESERVED7 : 1; // bit 19
    uint32_t RESERVED8 : 1; // bit 20
    uint32_t RESERVED9 : 1; // bit 21
    uint32_t RESERVED10 : 1; // bit 22
    uint32_t RESERVED11 : 1; // bit 23
    uint32_t RESERVED12 : 1; // bit 24
    uint32_t RESERVED13 : 1; // bit 25
    uint32_t RESERVED14 : 1; // bit 26
    uint32_t RESERVED15 : 1; // bit 27
    uint32_t RESERVED16 : 1; // bit 28
    uint32_t RESERVED17 : 1; // bit 29
    uint32_t RESERVED18 : 1; // bit 30
    uint32_t RESERVED19 : 1; // bit 31
  } BITS;
} TIM8_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t UG : 1; // bit 0 Update generation
    uint32_t CC1G : 1; // bit 1 Capture/compare 1 generation
    uint32_t CC2G : 1; // bit 2 Capture/compare 2 generation
    uint32_t CC3G : 1; // bit 3 Capture/compare 3 generation
    uint32_t CC4G : 1; // bit 4 Capture/compare 4 generation
    uint32_t COMG : 1; // bit 5 Capture/Compare control update generation
    uint32_t TG : 1; // bit 6 Trigger generation
    uint32_t BG : 1; // bit 7 Break generation
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
} TIM8_EGR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    uint32_t OC1FE : 1; // bit 2 Output Compare 1 fast enable
    uint32_t OC1PE : 1; // bit 3 Output Compare 1 preload enable
    uint32_t OC1M : 3; // bit 4 Output Compare 1 mode
    uint32_t OC1CE : 1; // bit 7 Output Compare 1 clear enable
    uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    uint32_t OC2FE : 1; // bit 10 Output Compare 2 fast enable
    uint32_t OC2PE : 1; // bit 11 Output Compare 2 preload enable
    uint32_t OC2M : 3; // bit 12 Output Compare 2 mode
    uint32_t OC2CE : 1; // bit 15 Output Compare 2 clear enable
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_CCMR1_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC1S : 2; // bit 0 Capture/Compare 1 selection
    uint32_t ICPCS : 2; // bit 2 Input capture 1 prescaler
    uint32_t IC1F : 4; // bit 4 Input capture 1 filter
    uint32_t CC2S : 2; // bit 8 Capture/Compare 2 selection
    uint32_t IC2PCS : 2; // bit 10 Input capture 2 prescaler
    uint32_t IC2F : 4; // bit 12 Input capture 2 filter
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_CCMR1_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC3S : 2; // bit 0 Capture/Compare 3 selection
    uint32_t OC3FE : 1; // bit 2 Output compare 3 fast enable
    uint32_t OC3PE : 1; // bit 3 Output compare 3 preload enable
    uint32_t OC3M : 3; // bit 4 Output compare 3 mode
    uint32_t OC3CE : 1; // bit 7 Output compare 3 clear enable
    uint32_t CC4S : 2; // bit 8 Capture/Compare 4 selection
    uint32_t OC4FE : 1; // bit 10 Output compare 4 fast enable
    uint32_t OC4PE : 1; // bit 11 Output compare 4 preload enable
    uint32_t OC4M : 3; // bit 12 Output compare 4 mode
    uint32_t OC4CE : 1; // bit 15 Output compare 4 clear enable
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_CCMR2_Output_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC3S : 2; // bit 0 Capture/compare 3 selection
    uint32_t IC3PSC : 2; // bit 2 Input capture 3 prescaler
    uint32_t IC3F : 4; // bit 4 Input capture 3 filter
    uint32_t CC4S : 2; // bit 8 Capture/Compare 4 selection
    uint32_t IC4PSC : 2; // bit 10 Input capture 4 prescaler
    uint32_t IC4F : 4; // bit 12 Input capture 4 filter
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_CCMR2_Input_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CC1E : 1; // bit 0 Capture/Compare 1 output enable
    uint32_t CC1P : 1; // bit 1 Capture/Compare 1 output Polarity
    uint32_t CC1NE : 1; // bit 2 Capture/Compare 1 complementary output enable
    uint32_t CC1NP : 1; // bit 3 Capture/Compare 1 output Polarity
    uint32_t CC2E : 1; // bit 4 Capture/Compare 2 output enable
    uint32_t CC2P : 1; // bit 5 Capture/Compare 2 output Polarity
    uint32_t CC2NE : 1; // bit 6 Capture/Compare 2 complementary output enable
    uint32_t CC2NP : 1; // bit 7 Capture/Compare 2 output Polarity
    uint32_t CC3E : 1; // bit 8 Capture/Compare 3 output enable
    uint32_t CC3P : 1; // bit 9 Capture/Compare 3 output Polarity
    uint32_t CC3NE : 1; // bit 10 Capture/Compare 3 complementary output enable
    uint32_t CC3NP : 1; // bit 11 Capture/Compare 3 output Polarity
    uint32_t CC4E : 1; // bit 12 Capture/Compare 4 output enable
    uint32_t CC4P : 1; // bit 13 Capture/Compare 3 output Polarity
    uint32_t RESERVED0 : 1; // bit 14
    uint32_t RESERVED1 : 1; // bit 15
    uint32_t RESERVED2 : 1; // bit 16
    uint32_t RESERVED3 : 1; // bit 17
    uint32_t RESERVED4 : 1; // bit 18
    uint32_t RESERVED5 : 1; // bit 19
    uint32_t RESERVED6 : 1; // bit 20
    uint32_t RESERVED7 : 1; // bit 21
    uint32_t RESERVED8 : 1; // bit 22
    uint32_t RESERVED9 : 1; // bit 23
    uint32_t RESERVED10 : 1; // bit 24
    uint32_t RESERVED11 : 1; // bit 25
    uint32_t RESERVED12 : 1; // bit 26
    uint32_t RESERVED13 : 1; // bit 27
    uint32_t RESERVED14 : 1; // bit 28
    uint32_t RESERVED15 : 1; // bit 29
    uint32_t RESERVED16 : 1; // bit 30
    uint32_t RESERVED17 : 1; // bit 31
  } BITS;
} TIM8_CCER_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CNT : 16; // bit 0 counter value
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_CNT_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t PSC : 16; // bit 0 Prescaler value
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_PSC_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t ARR : 16; // bit 0 Auto-reload value
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_ARR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCR1 : 16; // bit 0 Capture/Compare 1 value
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_CCR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCR2 : 16; // bit 0 Capture/Compare 2 value
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_CCR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCR3 : 16; // bit 0 Capture/Compare value
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_CCR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t CCR4 : 16; // bit 0 Capture/Compare value
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_CCR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DBA : 5; // bit 0 DMA base address
    uint32_t RESERVED0 : 1; // bit 5
    uint32_t RESERVED1 : 1; // bit 6
    uint32_t RESERVED2 : 1; // bit 7
    uint32_t DBL : 5; // bit 8 DMA burst length
    uint32_t RESERVED3 : 1; // bit 13
    uint32_t RESERVED4 : 1; // bit 14
    uint32_t RESERVED5 : 1; // bit 15
    uint32_t RESERVED6 : 1; // bit 16
    uint32_t RESERVED7 : 1; // bit 17
    uint32_t RESERVED8 : 1; // bit 18
    uint32_t RESERVED9 : 1; // bit 19
    uint32_t RESERVED10 : 1; // bit 20
    uint32_t RESERVED11 : 1; // bit 21
    uint32_t RESERVED12 : 1; // bit 22
    uint32_t RESERVED13 : 1; // bit 23
    uint32_t RESERVED14 : 1; // bit 24
    uint32_t RESERVED15 : 1; // bit 25
    uint32_t RESERVED16 : 1; // bit 26
    uint32_t RESERVED17 : 1; // bit 27
    uint32_t RESERVED18 : 1; // bit 28
    uint32_t RESERVED19 : 1; // bit 29
    uint32_t RESERVED20 : 1; // bit 30
    uint32_t RESERVED21 : 1; // bit 31
  } BITS;
} TIM8_DCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DMAB : 16; // bit 0 DMA register for burst accesses
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_DMAR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t REP : 8; // bit 0 Repetition counter value
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
} TIM8_RCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    uint32_t DTG : 8; // bit 0 Dead-time generator setup
    uint32_t LOCK : 2; // bit 8 Lock configuration
    uint32_t OSSI : 1; // bit 10 Off-state selection for Idle mode
    uint32_t OSSR : 1; // bit 11 Off-state selection for Run mode
    uint32_t BKE : 1; // bit 12 Break enable
    uint32_t BKP : 1; // bit 13 Break polarity
    uint32_t AOE : 1; // bit 14 Automatic output enable
    uint32_t MOE : 1; // bit 15 Main output enable
    uint32_t RESERVED0 : 1; // bit 16
    uint32_t RESERVED1 : 1; // bit 17
    uint32_t RESERVED2 : 1; // bit 18
    uint32_t RESERVED3 : 1; // bit 19
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
} TIM8_BDTR_t;

typedef struct {
  TIM8_CR1_t CR1;
  TIM8_CR2_t CR2;
  TIM8_SMCR_t SMCR;
  TIM8_DIER_t DIER;
  TIM8_SR_t SR;
  TIM8_EGR_t EGR;
  TIM8_CCMR1_Output_t CCMR1_Output;
  TIM8_CCMR1_Input_t CCMR1_Input;
  TIM8_CCMR2_Output_t CCMR2_Output;
  TIM8_CCMR2_Input_t CCMR2_Input;
  TIM8_CCER_t CCER;
  TIM8_CNT_t CNT;
  TIM8_PSC_t PSC;
  TIM8_ARR_t ARR;
  TIM8_CCR1_t CCR1;
  TIM8_CCR2_t CCR2;
  TIM8_CCR3_t CCR3;
  TIM8_CCR4_t CCR4;
  TIM8_DCR_t DCR;
  TIM8_DMAR_t DMAR;
  TIM8_RCR_t RCR;
  TIM8_BDTR_t BDTR;
} TIM8_t;

#define TIM8_BASE (0x40013400UL)
#define TIM8 ((TIM8_t *)TIM8_BASE)

#define TIM8_CR1bits (TIM8->CR1.BITS)
#define TIM8_CR2bits (TIM8->CR2.BITS)
#define TIM8_SMCRbits (TIM8->SMCR.BITS)
#define TIM8_DIERbits (TIM8->DIER.BITS)
#define TIM8_SRbits (TIM8->SR.BITS)
#define TIM8_EGRbits (TIM8->EGR.BITS)
#define TIM8_CCMR1_Outputbits (TIM8->CCMR1_Output.BITS)
#define TIM8_CCMR1_Inputbits (TIM8->CCMR1_Input.BITS)
#define TIM8_CCMR2_Outputbits (TIM8->CCMR2_Output.BITS)
#define TIM8_CCMR2_Inputbits (TIM8->CCMR2_Input.BITS)
#define TIM8_CCERbits (TIM8->CCER.BITS)
#define TIM8_CNTbits (TIM8->CNT.BITS)
#define TIM8_PSCbits (TIM8->PSC.BITS)
#define TIM8_ARRbits (TIM8->ARR.BITS)
#define TIM8_CCR1bits (TIM8->CCR1.BITS)
#define TIM8_CCR2bits (TIM8->CCR2.BITS)
#define TIM8_CCR3bits (TIM8->CCR3.BITS)
#define TIM8_CCR4bits (TIM8->CCR4.BITS)
#define TIM8_DCRbits (TIM8->DCR.BITS)
#define TIM8_DMARbits (TIM8->DMAR.BITS)
#define TIM8_RCRbits (TIM8->RCR.BITS)
#define TIM8_BDTRbits (TIM8->BDTR.BITS)

#endif // _TIM8_H