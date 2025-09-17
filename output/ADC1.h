/**
 * @file    ADC1.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Analog to digital converter
 *
 * This header file provides register definitions and bitfield access
 * for the ADC1 peripheral of the STM32F103.
 */

#ifndef _ADC1_H
#define _ADC1_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t AWD : 1; // bit 0 Analog watchdog flag
    volatile uint32_t EOC : 1; // bit 1 Regular channel end of conversion
    volatile uint32_t JEOC : 1; // bit 2 Injected channel end of conversion
    volatile uint32_t JSTRT : 1; // bit 3 Injected channel start flag
    volatile uint32_t STRT : 1; // bit 4 Regular channel start flag
    volatile uint32_t RESERVED0 : 1; // bit 5
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
} ADC1_SR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t AWDCH : 5; // bit 0 Analog watchdog channel select bits
    volatile uint32_t EOCIE : 1; // bit 5 Interrupt enable for EOC
    volatile uint32_t AWDIE : 1; // bit 6 Analog watchdog interrupt enable
    volatile uint32_t JEOCIE : 1; // bit 7 Interrupt enable for injected channels
    volatile uint32_t SCAN : 1; // bit 8 Scan mode
    volatile uint32_t AWDSGL : 1; // bit 9 Enable the watchdog on a single channel in scan mode
    volatile uint32_t JAUTO : 1; // bit 10 Automatic injected group conversion
    volatile uint32_t DISCEN : 1; // bit 11 Discontinuous mode on regular channels
    volatile uint32_t JDISCEN : 1; // bit 12 Discontinuous mode on injected channels
    volatile uint32_t DISCNUM : 3; // bit 13 Discontinuous mode channel count
    volatile uint32_t DUALMOD : 4; // bit 16 Dual mode selection
    volatile uint32_t RESERVED0 : 1; // bit 20
    volatile uint32_t RESERVED1 : 1; // bit 21
    volatile uint32_t JAWDEN : 1; // bit 22 Analog watchdog enable on injected channels
    volatile uint32_t AWDEN : 1; // bit 23 Analog watchdog enable on regular channels
    volatile uint32_t RESERVED2 : 1; // bit 24
    volatile uint32_t RESERVED3 : 1; // bit 25
    volatile uint32_t RESERVED4 : 1; // bit 26
    volatile uint32_t RESERVED5 : 1; // bit 27
    volatile uint32_t RESERVED6 : 1; // bit 28
    volatile uint32_t RESERVED7 : 1; // bit 29
    volatile uint32_t RESERVED8 : 1; // bit 30
    volatile uint32_t RESERVED9 : 1; // bit 31
  } BITS;
} ADC1_CR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t ADON : 1; // bit 0 A/D converter ON / OFF
    volatile uint32_t CONT : 1; // bit 1 Continuous conversion
    volatile uint32_t CAL : 1; // bit 2 A/D calibration
    volatile uint32_t RSTCAL : 1; // bit 3 Reset calibration
    volatile uint32_t RESERVED0 : 1; // bit 4
    volatile uint32_t RESERVED1 : 1; // bit 5
    volatile uint32_t RESERVED2 : 1; // bit 6
    volatile uint32_t RESERVED3 : 1; // bit 7
    volatile uint32_t DMA : 1; // bit 8 Direct memory access mode
    volatile uint32_t RESERVED4 : 1; // bit 9
    volatile uint32_t RESERVED5 : 1; // bit 10
    volatile uint32_t ALIGN : 1; // bit 11 Data alignment
    volatile uint32_t JEXTSEL : 3; // bit 12 External event select for injected group
    volatile uint32_t JEXTTRIG : 1; // bit 15 External trigger conversion mode for injected channels
    volatile uint32_t RESERVED6 : 1; // bit 16
    volatile uint32_t EXTSEL : 3; // bit 17 External event select for regular group
    volatile uint32_t EXTTRIG : 1; // bit 20 External trigger conversion mode for regular channels
    volatile uint32_t JSWSTART : 1; // bit 21 Start conversion of injected channels
    volatile uint32_t SWSTART : 1; // bit 22 Start conversion of regular channels
    volatile uint32_t TSVREFE : 1; // bit 23 Temperature sensor and VREFINT enable
    volatile uint32_t RESERVED7 : 1; // bit 24
    volatile uint32_t RESERVED8 : 1; // bit 25
    volatile uint32_t RESERVED9 : 1; // bit 26
    volatile uint32_t RESERVED10 : 1; // bit 27
    volatile uint32_t RESERVED11 : 1; // bit 28
    volatile uint32_t RESERVED12 : 1; // bit 29
    volatile uint32_t RESERVED13 : 1; // bit 30
    volatile uint32_t RESERVED14 : 1; // bit 31
  } BITS;
} ADC1_CR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SMP10 : 3; // bit 0 Channel 10 sample time selection
    volatile uint32_t SMP11 : 3; // bit 3 Channel 11 sample time selection
    volatile uint32_t SMP12 : 3; // bit 6 Channel 12 sample time selection
    volatile uint32_t SMP13 : 3; // bit 9 Channel 13 sample time selection
    volatile uint32_t SMP14 : 3; // bit 12 Channel 14 sample time selection
    volatile uint32_t SMP15 : 3; // bit 15 Channel 15 sample time selection
    volatile uint32_t SMP16 : 3; // bit 18 Channel 16 sample time selection
    volatile uint32_t SMP17 : 3; // bit 21 Channel 17 sample time selection
    volatile uint32_t RESERVED0 : 1; // bit 24
    volatile uint32_t RESERVED1 : 1; // bit 25
    volatile uint32_t RESERVED2 : 1; // bit 26
    volatile uint32_t RESERVED3 : 1; // bit 27
    volatile uint32_t RESERVED4 : 1; // bit 28
    volatile uint32_t RESERVED5 : 1; // bit 29
    volatile uint32_t RESERVED6 : 1; // bit 30
    volatile uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} ADC1_SMPR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SMP0 : 3; // bit 0 Channel 0 sample time selection
    volatile uint32_t SMP1 : 3; // bit 3 Channel 1 sample time selection
    volatile uint32_t SMP2 : 3; // bit 6 Channel 2 sample time selection
    volatile uint32_t SMP3 : 3; // bit 9 Channel 3 sample time selection
    volatile uint32_t SMP4 : 3; // bit 12 Channel 4 sample time selection
    volatile uint32_t SMP5 : 3; // bit 15 Channel 5 sample time selection
    volatile uint32_t SMP6 : 3; // bit 18 Channel 6 sample time selection
    volatile uint32_t SMP7 : 3; // bit 21 Channel 7 sample time selection
    volatile uint32_t SMP8 : 3; // bit 24 Channel 8 sample time selection
    volatile uint32_t SMP9 : 3; // bit 27 Channel 9 sample time selection
    volatile uint32_t RESERVED0 : 1; // bit 30
    volatile uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} ADC1_SMPR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t JOFFSET1 : 12; // bit 0 Data offset for injected channel x
    volatile uint32_t RESERVED0 : 1; // bit 12
    volatile uint32_t RESERVED1 : 1; // bit 13
    volatile uint32_t RESERVED2 : 1; // bit 14
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
} ADC1_JOFR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t JOFFSET2 : 12; // bit 0 Data offset for injected channel x
    volatile uint32_t RESERVED0 : 1; // bit 12
    volatile uint32_t RESERVED1 : 1; // bit 13
    volatile uint32_t RESERVED2 : 1; // bit 14
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
} ADC1_JOFR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t JOFFSET3 : 12; // bit 0 Data offset for injected channel x
    volatile uint32_t RESERVED0 : 1; // bit 12
    volatile uint32_t RESERVED1 : 1; // bit 13
    volatile uint32_t RESERVED2 : 1; // bit 14
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
} ADC1_JOFR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t JOFFSET4 : 12; // bit 0 Data offset for injected channel x
    volatile uint32_t RESERVED0 : 1; // bit 12
    volatile uint32_t RESERVED1 : 1; // bit 13
    volatile uint32_t RESERVED2 : 1; // bit 14
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
} ADC1_JOFR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t HT : 12; // bit 0 Analog watchdog higher threshold
    volatile uint32_t RESERVED0 : 1; // bit 12
    volatile uint32_t RESERVED1 : 1; // bit 13
    volatile uint32_t RESERVED2 : 1; // bit 14
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
} ADC1_HTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t LT : 12; // bit 0 Analog watchdog lower threshold
    volatile uint32_t RESERVED0 : 1; // bit 12
    volatile uint32_t RESERVED1 : 1; // bit 13
    volatile uint32_t RESERVED2 : 1; // bit 14
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
} ADC1_LTR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SQ13 : 5; // bit 0 13th conversion in regular sequence
    volatile uint32_t SQ14 : 5; // bit 5 14th conversion in regular sequence
    volatile uint32_t SQ15 : 5; // bit 10 15th conversion in regular sequence
    volatile uint32_t SQ16 : 5; // bit 15 16th conversion in regular sequence
    volatile uint32_t L : 4; // bit 20 Regular channel sequence length
    volatile uint32_t RESERVED0 : 1; // bit 24
    volatile uint32_t RESERVED1 : 1; // bit 25
    volatile uint32_t RESERVED2 : 1; // bit 26
    volatile uint32_t RESERVED3 : 1; // bit 27
    volatile uint32_t RESERVED4 : 1; // bit 28
    volatile uint32_t RESERVED5 : 1; // bit 29
    volatile uint32_t RESERVED6 : 1; // bit 30
    volatile uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} ADC1_SQR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SQ7 : 5; // bit 0 7th conversion in regular sequence
    volatile uint32_t SQ8 : 5; // bit 5 8th conversion in regular sequence
    volatile uint32_t SQ9 : 5; // bit 10 9th conversion in regular sequence
    volatile uint32_t SQ10 : 5; // bit 15 10th conversion in regular sequence
    volatile uint32_t SQ11 : 5; // bit 20 11th conversion in regular sequence
    volatile uint32_t SQ12 : 5; // bit 25 12th conversion in regular sequence
    volatile uint32_t RESERVED0 : 1; // bit 30
    volatile uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} ADC1_SQR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SQ1 : 5; // bit 0 1st conversion in regular sequence
    volatile uint32_t SQ2 : 5; // bit 5 2nd conversion in regular sequence
    volatile uint32_t SQ3 : 5; // bit 10 3rd conversion in regular sequence
    volatile uint32_t SQ4 : 5; // bit 15 4th conversion in regular sequence
    volatile uint32_t SQ5 : 5; // bit 20 5th conversion in regular sequence
    volatile uint32_t SQ6 : 5; // bit 25 6th conversion in regular sequence
    volatile uint32_t RESERVED0 : 1; // bit 30
    volatile uint32_t RESERVED1 : 1; // bit 31
  } BITS;
} ADC1_SQR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t JSQ1 : 5; // bit 0 1st conversion in injected sequence
    volatile uint32_t JSQ2 : 5; // bit 5 2nd conversion in injected sequence
    volatile uint32_t JSQ3 : 5; // bit 10 3rd conversion in injected sequence
    volatile uint32_t JSQ4 : 5; // bit 15 4th conversion in injected sequence
    volatile uint32_t JL : 2; // bit 20 Injected sequence length
    volatile uint32_t RESERVED0 : 1; // bit 22
    volatile uint32_t RESERVED1 : 1; // bit 23
    volatile uint32_t RESERVED2 : 1; // bit 24
    volatile uint32_t RESERVED3 : 1; // bit 25
    volatile uint32_t RESERVED4 : 1; // bit 26
    volatile uint32_t RESERVED5 : 1; // bit 27
    volatile uint32_t RESERVED6 : 1; // bit 28
    volatile uint32_t RESERVED7 : 1; // bit 29
    volatile uint32_t RESERVED8 : 1; // bit 30
    volatile uint32_t RESERVED9 : 1; // bit 31
  } BITS;
} ADC1_JSQR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t JDATA : 16; // bit 0 Injected data
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
} ADC1_JDR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t JDATA : 16; // bit 0 Injected data
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
} ADC1_JDR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t JDATA : 16; // bit 0 Injected data
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
} ADC1_JDR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t JDATA : 16; // bit 0 Injected data
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
} ADC1_JDR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DATA : 16; // bit 0 Regular data
    volatile uint32_t ADC2DATA : 16; // bit 16 ADC2 data
  } BITS;
} ADC1_DR_t;

typedef struct {
  ADC1_SR_t SR;
  ADC1_CR1_t CR1;
  ADC1_CR2_t CR2;
  ADC1_SMPR1_t SMPR1;
  ADC1_SMPR2_t SMPR2;
  ADC1_JOFR1_t JOFR1;
  ADC1_JOFR2_t JOFR2;
  ADC1_JOFR3_t JOFR3;
  ADC1_JOFR4_t JOFR4;
  ADC1_HTR_t HTR;
  ADC1_LTR_t LTR;
  ADC1_SQR1_t SQR1;
  ADC1_SQR2_t SQR2;
  ADC1_SQR3_t SQR3;
  ADC1_JSQR_t JSQR;
  ADC1_JDR1_t JDR1;
  ADC1_JDR2_t JDR2;
  ADC1_JDR3_t JDR3;
  ADC1_JDR4_t JDR4;
  ADC1_DR_t DR;
} ADC1_t;

#define ADC1_BASE (0x40012400UL)
#define ADC1 ((ADC1_t *)ADC1_BASE)

#define ADC1_SRbits (ADC1->SR.BITS)
#define ADC1_CR1bits (ADC1->CR1.BITS)
#define ADC1_CR2bits (ADC1->CR2.BITS)
#define ADC1_SMPR1bits (ADC1->SMPR1.BITS)
#define ADC1_SMPR2bits (ADC1->SMPR2.BITS)
#define ADC1_JOFR1bits (ADC1->JOFR1.BITS)
#define ADC1_JOFR2bits (ADC1->JOFR2.BITS)
#define ADC1_JOFR3bits (ADC1->JOFR3.BITS)
#define ADC1_JOFR4bits (ADC1->JOFR4.BITS)
#define ADC1_HTRbits (ADC1->HTR.BITS)
#define ADC1_LTRbits (ADC1->LTR.BITS)
#define ADC1_SQR1bits (ADC1->SQR1.BITS)
#define ADC1_SQR2bits (ADC1->SQR2.BITS)
#define ADC1_SQR3bits (ADC1->SQR3.BITS)
#define ADC1_JSQRbits (ADC1->JSQR.BITS)
#define ADC1_JDR1bits (ADC1->JDR1.BITS)
#define ADC1_JDR2bits (ADC1->JDR2.BITS)
#define ADC1_JDR3bits (ADC1->JDR3.BITS)
#define ADC1_JDR4bits (ADC1->JDR4.BITS)
#define ADC1_DRbits (ADC1->DR.BITS)

#endif // _ADC1_H