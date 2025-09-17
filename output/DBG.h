/**
 * @file    DBG.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   Debug support
 *
 * This header file provides register definitions and bitfield access
 * for the DBG peripheral of the STM32F103.
 */

#ifndef _DBG_H
#define _DBG_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DEV_ID : 12; // bit 0 DEV_ID
    volatile uint32_t RESERVED0 : 1; // bit 12
    volatile uint32_t RESERVED1 : 1; // bit 13
    volatile uint32_t RESERVED2 : 1; // bit 14
    volatile uint32_t RESERVED3 : 1; // bit 15
    volatile uint32_t REV_ID : 16; // bit 16 REV_ID
  } BITS;
} DBG_IDCODE_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t DBG_SLEEP : 1; // bit 0 DBG_SLEEP
    volatile uint32_t DBG_STOP : 1; // bit 1 DBG_STOP
    volatile uint32_t DBG_STANDBY : 1; // bit 2 DBG_STANDBY
    volatile uint32_t RESERVED0 : 1; // bit 3
    volatile uint32_t RESERVED1 : 1; // bit 4
    volatile uint32_t TRACE_IOEN : 1; // bit 5 TRACE_IOEN
    volatile uint32_t TRACE_MODE : 2; // bit 6 TRACE_MODE
    volatile uint32_t DBG_IWDG_STOP : 1; // bit 8 DBG_IWDG_STOP
    volatile uint32_t DBG_WWDG_STOP : 1; // bit 9 DBG_WWDG_STOP
    volatile uint32_t DBG_TIM1_STOP : 1; // bit 10 DBG_TIM1_STOP
    volatile uint32_t DBG_TIM2_STOP : 1; // bit 11 DBG_TIM2_STOP
    volatile uint32_t DBG_TIM3_STOP : 1; // bit 12 DBG_TIM3_STOP
    volatile uint32_t DBG_TIM4_STOP : 1; // bit 13 DBG_TIM4_STOP
    volatile uint32_t DBG_CAN1_STOP : 1; // bit 14 DBG_CAN1_STOP
    volatile uint32_t DBG_I2C1_SMBUS_TIMEOUT : 1; // bit 15 DBG_I2C1_SMBUS_TIMEOUT
    volatile uint32_t DBG_I2C2_SMBUS_TIMEOUT : 1; // bit 16 DBG_I2C2_SMBUS_TIMEOUT
    volatile uint32_t DBG_TIM8_STOP : 1; // bit 17 DBG_TIM8_STOP
    volatile uint32_t DBG_TIM5_STOP : 1; // bit 18 DBG_TIM5_STOP
    volatile uint32_t DBG_TIM6_STOP : 1; // bit 19 DBG_TIM6_STOP
    volatile uint32_t DBG_TIM7_STOP : 1; // bit 20 DBG_TIM7_STOP
    volatile uint32_t DBG_CAN2_STOP : 1; // bit 21 DBG_CAN2_STOP
    volatile uint32_t RESERVED2 : 1; // bit 22
    volatile uint32_t RESERVED3 : 1; // bit 23
    volatile uint32_t RESERVED4 : 1; // bit 24
    volatile uint32_t RESERVED5 : 1; // bit 25
    volatile uint32_t RESERVED6 : 1; // bit 26
    volatile uint32_t RESERVED7 : 1; // bit 27
    volatile uint32_t RESERVED8 : 1; // bit 28
    volatile uint32_t RESERVED9 : 1; // bit 29
    volatile uint32_t RESERVED10 : 1; // bit 30
    volatile uint32_t RESERVED11 : 1; // bit 31
  } BITS;
} DBG_CR_t;

typedef struct {
  DBG_IDCODE_t IDCODE;
  DBG_CR_t CR;
} DBG_t;

#define DBG_BASE (0xE0042000UL)
#define DBG ((DBG_t *)DBG_BASE)

#define DBG_IDCODEbits (DBG->IDCODE.BITS)
#define DBG_CRbits (DBG->CR.BITS)

#endif // _DBG_H