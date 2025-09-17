/**
 * @file    AFIO.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Alternate function I/O
 *
 * This header file provides register definitions and bitfield access
 * for the AFIO peripheral of the STM32F103.
 */

#ifndef _AFIO_H
#define _AFIO_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PIN : 4; // bit 0 Pin selection
    volatile uint32_t PORT : 3; // bit 4 Port selection
    volatile uint32_t EVOE : 1; // bit 7 Event Output Enable
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
} AFIO_EVCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t SPI1_REMAP : 1; // bit 0 SPI1 remapping
    volatile uint32_t I2C1_REMAP : 1; // bit 1 I2C1 remapping
    volatile uint32_t USART1_REMAP : 1; // bit 2 USART1 remapping
    volatile uint32_t USART2_REMAP : 1; // bit 3 USART2 remapping
    volatile uint32_t USART3_REMAP : 2; // bit 4 USART3 remapping
    volatile uint32_t TIM1_REMAP : 2; // bit 6 TIM1 remapping
    volatile uint32_t TIM2_REMAP : 2; // bit 8 TIM2 remapping
    volatile uint32_t TIM3_REMAP : 2; // bit 10 TIM3 remapping
    volatile uint32_t TIM4_REMAP : 1; // bit 12 TIM4 remapping
    volatile uint32_t CAN_REMAP : 2; // bit 13 CAN1 remapping
    volatile uint32_t PD01_REMAP : 1; // bit 15 Port D0/Port D1 mapping on OSCIN/OSCOUT
    volatile uint32_t TIM5CH4_IREMAP : 1; // bit 16 Set and cleared by software
    volatile uint32_t ADC1_ETRGINJ_REMAP : 1; // bit 17 ADC 1 External trigger injected conversion remapping
    volatile uint32_t ADC1_ETRGREG_REMAP : 1; // bit 18 ADC 1 external trigger regular conversion remapping
    volatile uint32_t ADC2_ETRGINJ_REMAP : 1; // bit 19 ADC 2 external trigger injected conversion remapping
    volatile uint32_t ADC2_ETRGREG_REMAP : 1; // bit 20 ADC 2 external trigger regular conversion remapping
    volatile uint32_t RESERVED0 : 1; // bit 21
    volatile uint32_t RESERVED1 : 1; // bit 22
    volatile uint32_t RESERVED2 : 1; // bit 23
    volatile uint32_t SWJ_CFG : 3; // bit 24 Serial wire JTAG configuration
    volatile uint32_t RESERVED3 : 1; // bit 27
    volatile uint32_t RESERVED4 : 1; // bit 28
    volatile uint32_t RESERVED5 : 1; // bit 29
    volatile uint32_t RESERVED6 : 1; // bit 30
    volatile uint32_t RESERVED7 : 1; // bit 31
  } BITS;
} AFIO_MAPR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EXTI0 : 4; // bit 0 EXTI0 configuration
    volatile uint32_t EXTI1 : 4; // bit 4 EXTI1 configuration
    volatile uint32_t EXTI2 : 4; // bit 8 EXTI2 configuration
    volatile uint32_t EXTI3 : 4; // bit 12 EXTI3 configuration
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
} AFIO_EXTICR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EXTI4 : 4; // bit 0 EXTI4 configuration
    volatile uint32_t EXTI5 : 4; // bit 4 EXTI5 configuration
    volatile uint32_t EXTI6 : 4; // bit 8 EXTI6 configuration
    volatile uint32_t EXTI7 : 4; // bit 12 EXTI7 configuration
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
} AFIO_EXTICR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EXTI8 : 4; // bit 0 EXTI8 configuration
    volatile uint32_t EXTI9 : 4; // bit 4 EXTI9 configuration
    volatile uint32_t EXTI10 : 4; // bit 8 EXTI10 configuration
    volatile uint32_t EXTI11 : 4; // bit 12 EXTI11 configuration
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
} AFIO_EXTICR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EXTI12 : 4; // bit 0 EXTI12 configuration
    volatile uint32_t EXTI13 : 4; // bit 4 EXTI13 configuration
    volatile uint32_t EXTI14 : 4; // bit 8 EXTI14 configuration
    volatile uint32_t EXTI15 : 4; // bit 12 EXTI15 configuration
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
} AFIO_EXTICR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t RESERVED0 : 1; // bit 0
    volatile uint32_t RESERVED1 : 1; // bit 1
    volatile uint32_t RESERVED2 : 1; // bit 2
    volatile uint32_t RESERVED3 : 1; // bit 3
    volatile uint32_t RESERVED4 : 1; // bit 4
    volatile uint32_t TIM9_REMAP : 1; // bit 5 TIM9 remapping
    volatile uint32_t TIM10_REMAP : 1; // bit 6 TIM10 remapping
    volatile uint32_t TIM11_REMAP : 1; // bit 7 TIM11 remapping
    volatile uint32_t TIM13_REMAP : 1; // bit 8 TIM13 remapping
    volatile uint32_t TIM14_REMAP : 1; // bit 9 TIM14 remapping
    volatile uint32_t FSMC_NADV : 1; // bit 10 NADV connect/disconnect
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
} AFIO_MAPR2_t;

typedef struct {
  AFIO_EVCR_t EVCR;
  AFIO_MAPR_t MAPR;
  AFIO_EXTICR1_t EXTICR1;
  AFIO_EXTICR2_t EXTICR2;
  AFIO_EXTICR3_t EXTICR3;
  AFIO_EXTICR4_t EXTICR4;
  AFIO_MAPR2_t MAPR2;
} AFIO_t;

#define AFIO_BASE (0x40010000UL)
#define AFIO ((AFIO_t *)AFIO_BASE)

#define AFIO_EVCRbits (AFIO->EVCR.BITS)
#define AFIO_MAPRbits (AFIO->MAPR.BITS)
#define AFIO_EXTICR1bits (AFIO->EXTICR1.BITS)
#define AFIO_EXTICR2bits (AFIO->EXTICR2.BITS)
#define AFIO_EXTICR3bits (AFIO->EXTICR3.BITS)
#define AFIO_EXTICR4bits (AFIO->EXTICR4.BITS)
#define AFIO_MAPR2bits (AFIO->MAPR2.BITS)

#endif // _AFIO_H