/**
 * @file    DMA1.h
 * @author  Adam Cholewinski
 * @date    2025-09-19
 * @brief   DMA controller
 *
 * This header file provides register definitions and bitfield access
 * for the DMA1 peripheral of the STM32F103.
 */

#ifndef _DMA1_H
#define _DMA1_H

#include <stdint.h>

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t GIF1 : 1; // bit 0 Channel 1 Global interrupt flag
    volatile uint32_t TCIF1 : 1; // bit 1 Channel 1 Transfer Complete flag
    volatile uint32_t HTIF1 : 1; // bit 2 Channel 1 Half Transfer Complete flag
    volatile uint32_t TEIF1 : 1; // bit 3 Channel 1 Transfer Error flag
    volatile uint32_t GIF2 : 1; // bit 4 Channel 2 Global interrupt flag
    volatile uint32_t TCIF2 : 1; // bit 5 Channel 2 Transfer Complete flag
    volatile uint32_t HTIF2 : 1; // bit 6 Channel 2 Half Transfer Complete flag
    volatile uint32_t TEIF2 : 1; // bit 7 Channel 2 Transfer Error flag
    volatile uint32_t GIF3 : 1; // bit 8 Channel 3 Global interrupt flag
    volatile uint32_t TCIF3 : 1; // bit 9 Channel 3 Transfer Complete flag
    volatile uint32_t HTIF3 : 1; // bit 10 Channel 3 Half Transfer Complete flag
    volatile uint32_t TEIF3 : 1; // bit 11 Channel 3 Transfer Error flag
    volatile uint32_t GIF4 : 1; // bit 12 Channel 4 Global interrupt flag
    volatile uint32_t TCIF4 : 1; // bit 13 Channel 4 Transfer Complete flag
    volatile uint32_t HTIF4 : 1; // bit 14 Channel 4 Half Transfer Complete flag
    volatile uint32_t TEIF4 : 1; // bit 15 Channel 4 Transfer Error flag
    volatile uint32_t GIF5 : 1; // bit 16 Channel 5 Global interrupt flag
    volatile uint32_t TCIF5 : 1; // bit 17 Channel 5 Transfer Complete flag
    volatile uint32_t HTIF5 : 1; // bit 18 Channel 5 Half Transfer Complete flag
    volatile uint32_t TEIF5 : 1; // bit 19 Channel 5 Transfer Error flag
    volatile uint32_t GIF6 : 1; // bit 20 Channel 6 Global interrupt flag
    volatile uint32_t TCIF6 : 1; // bit 21 Channel 6 Transfer Complete flag
    volatile uint32_t HTIF6 : 1; // bit 22 Channel 6 Half Transfer Complete flag
    volatile uint32_t TEIF6 : 1; // bit 23 Channel 6 Transfer Error flag
    volatile uint32_t GIF7 : 1; // bit 24 Channel 7 Global interrupt flag
    volatile uint32_t TCIF7 : 1; // bit 25 Channel 7 Transfer Complete flag
    volatile uint32_t HTIF7 : 1; // bit 26 Channel 7 Half Transfer Complete flag
    volatile uint32_t TEIF7 : 1; // bit 27 Channel 7 Transfer Error flag
    volatile uint32_t RESERVED0 : 1; // bit 28
    volatile uint32_t RESERVED1 : 1; // bit 29
    volatile uint32_t RESERVED2 : 1; // bit 30
    volatile uint32_t RESERVED3 : 1; // bit 31
  } BITS;
} DMA1_ISR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t CGIF1 : 1; // bit 0 Channel 1 Global interrupt clear
    volatile uint32_t CTCIF1 : 1; // bit 1 Channel 1 Transfer Complete clear
    volatile uint32_t CHTIF1 : 1; // bit 2 Channel 1 Half Transfer clear
    volatile uint32_t CTEIF1 : 1; // bit 3 Channel 1 Transfer Error clear
    volatile uint32_t CGIF2 : 1; // bit 4 Channel 2 Global interrupt clear
    volatile uint32_t CTCIF2 : 1; // bit 5 Channel 2 Transfer Complete clear
    volatile uint32_t CHTIF2 : 1; // bit 6 Channel 2 Half Transfer clear
    volatile uint32_t CTEIF2 : 1; // bit 7 Channel 2 Transfer Error clear
    volatile uint32_t CGIF3 : 1; // bit 8 Channel 3 Global interrupt clear
    volatile uint32_t CTCIF3 : 1; // bit 9 Channel 3 Transfer Complete clear
    volatile uint32_t CHTIF3 : 1; // bit 10 Channel 3 Half Transfer clear
    volatile uint32_t CTEIF3 : 1; // bit 11 Channel 3 Transfer Error clear
    volatile uint32_t CGIF4 : 1; // bit 12 Channel 4 Global interrupt clear
    volatile uint32_t CTCIF4 : 1; // bit 13 Channel 4 Transfer Complete clear
    volatile uint32_t CHTIF4 : 1; // bit 14 Channel 4 Half Transfer clear
    volatile uint32_t CTEIF4 : 1; // bit 15 Channel 4 Transfer Error clear
    volatile uint32_t CGIF5 : 1; // bit 16 Channel 5 Global interrupt clear
    volatile uint32_t CTCIF5 : 1; // bit 17 Channel 5 Transfer Complete clear
    volatile uint32_t CHTIF5 : 1; // bit 18 Channel 5 Half Transfer clear
    volatile uint32_t CTEIF5 : 1; // bit 19 Channel 5 Transfer Error clear
    volatile uint32_t CGIF6 : 1; // bit 20 Channel 6 Global interrupt clear
    volatile uint32_t CTCIF6 : 1; // bit 21 Channel 6 Transfer Complete clear
    volatile uint32_t CHTIF6 : 1; // bit 22 Channel 6 Half Transfer clear
    volatile uint32_t CTEIF6 : 1; // bit 23 Channel 6 Transfer Error clear
    volatile uint32_t CGIF7 : 1; // bit 24 Channel 7 Global interrupt clear
    volatile uint32_t CTCIF7 : 1; // bit 25 Channel 7 Transfer Complete clear
    volatile uint32_t CHTIF7 : 1; // bit 26 Channel 7 Half Transfer clear
    volatile uint32_t CTEIF7 : 1; // bit 27 Channel 7 Transfer Error clear
    volatile uint32_t RESERVED0 : 1; // bit 28
    volatile uint32_t RESERVED1 : 1; // bit 29
    volatile uint32_t RESERVED2 : 1; // bit 30
    volatile uint32_t RESERVED3 : 1; // bit 31
  } BITS;
} DMA1_IFCR_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EN : 1; // bit 0 Channel enable
    volatile uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    volatile uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    volatile uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    volatile uint32_t DIR : 1; // bit 4 Data transfer direction
    volatile uint32_t CIRC : 1; // bit 5 Circular mode
    volatile uint32_t PINC : 1; // bit 6 Peripheral increment mode
    volatile uint32_t MINC : 1; // bit 7 Memory increment mode
    volatile uint32_t PSIZE : 2; // bit 8 Peripheral size
    volatile uint32_t MSIZE : 2; // bit 10 Memory size
    volatile uint32_t PL : 2; // bit 12 Channel Priority level
    volatile uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    volatile uint32_t RESERVED0 : 1; // bit 15
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
} DMA1_CCR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA1_CNDTR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA1_CPAR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA1_CMAR1_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EN : 1; // bit 0 Channel enable
    volatile uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    volatile uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    volatile uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    volatile uint32_t DIR : 1; // bit 4 Data transfer direction
    volatile uint32_t CIRC : 1; // bit 5 Circular mode
    volatile uint32_t PINC : 1; // bit 6 Peripheral increment mode
    volatile uint32_t MINC : 1; // bit 7 Memory increment mode
    volatile uint32_t PSIZE : 2; // bit 8 Peripheral size
    volatile uint32_t MSIZE : 2; // bit 10 Memory size
    volatile uint32_t PL : 2; // bit 12 Channel Priority level
    volatile uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    volatile uint32_t RESERVED0 : 1; // bit 15
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
} DMA1_CCR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA1_CNDTR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA1_CPAR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA1_CMAR2_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EN : 1; // bit 0 Channel enable
    volatile uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    volatile uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    volatile uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    volatile uint32_t DIR : 1; // bit 4 Data transfer direction
    volatile uint32_t CIRC : 1; // bit 5 Circular mode
    volatile uint32_t PINC : 1; // bit 6 Peripheral increment mode
    volatile uint32_t MINC : 1; // bit 7 Memory increment mode
    volatile uint32_t PSIZE : 2; // bit 8 Peripheral size
    volatile uint32_t MSIZE : 2; // bit 10 Memory size
    volatile uint32_t PL : 2; // bit 12 Channel Priority level
    volatile uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    volatile uint32_t RESERVED0 : 1; // bit 15
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
} DMA1_CCR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA1_CNDTR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA1_CPAR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA1_CMAR3_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EN : 1; // bit 0 Channel enable
    volatile uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    volatile uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    volatile uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    volatile uint32_t DIR : 1; // bit 4 Data transfer direction
    volatile uint32_t CIRC : 1; // bit 5 Circular mode
    volatile uint32_t PINC : 1; // bit 6 Peripheral increment mode
    volatile uint32_t MINC : 1; // bit 7 Memory increment mode
    volatile uint32_t PSIZE : 2; // bit 8 Peripheral size
    volatile uint32_t MSIZE : 2; // bit 10 Memory size
    volatile uint32_t PL : 2; // bit 12 Channel Priority level
    volatile uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    volatile uint32_t RESERVED0 : 1; // bit 15
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
} DMA1_CCR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA1_CNDTR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA1_CPAR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA1_CMAR4_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EN : 1; // bit 0 Channel enable
    volatile uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    volatile uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    volatile uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    volatile uint32_t DIR : 1; // bit 4 Data transfer direction
    volatile uint32_t CIRC : 1; // bit 5 Circular mode
    volatile uint32_t PINC : 1; // bit 6 Peripheral increment mode
    volatile uint32_t MINC : 1; // bit 7 Memory increment mode
    volatile uint32_t PSIZE : 2; // bit 8 Peripheral size
    volatile uint32_t MSIZE : 2; // bit 10 Memory size
    volatile uint32_t PL : 2; // bit 12 Channel Priority level
    volatile uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    volatile uint32_t RESERVED0 : 1; // bit 15
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
} DMA1_CCR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA1_CNDTR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA1_CPAR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA1_CMAR5_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EN : 1; // bit 0 Channel enable
    volatile uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    volatile uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    volatile uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    volatile uint32_t DIR : 1; // bit 4 Data transfer direction
    volatile uint32_t CIRC : 1; // bit 5 Circular mode
    volatile uint32_t PINC : 1; // bit 6 Peripheral increment mode
    volatile uint32_t MINC : 1; // bit 7 Memory increment mode
    volatile uint32_t PSIZE : 2; // bit 8 Peripheral size
    volatile uint32_t MSIZE : 2; // bit 10 Memory size
    volatile uint32_t PL : 2; // bit 12 Channel Priority level
    volatile uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    volatile uint32_t RESERVED0 : 1; // bit 15
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
} DMA1_CCR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA1_CNDTR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA1_CPAR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA1_CMAR6_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t EN : 1; // bit 0 Channel enable
    volatile uint32_t TCIE : 1; // bit 1 Transfer complete interrupt enable
    volatile uint32_t HTIE : 1; // bit 2 Half Transfer interrupt enable
    volatile uint32_t TEIE : 1; // bit 3 Transfer error interrupt enable
    volatile uint32_t DIR : 1; // bit 4 Data transfer direction
    volatile uint32_t CIRC : 1; // bit 5 Circular mode
    volatile uint32_t PINC : 1; // bit 6 Peripheral increment mode
    volatile uint32_t MINC : 1; // bit 7 Memory increment mode
    volatile uint32_t PSIZE : 2; // bit 8 Peripheral size
    volatile uint32_t MSIZE : 2; // bit 10 Memory size
    volatile uint32_t PL : 2; // bit 12 Channel Priority level
    volatile uint32_t MEM2MEM : 1; // bit 14 Memory to memory mode
    volatile uint32_t RESERVED0 : 1; // bit 15
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
} DMA1_CCR7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t NDT : 16; // bit 0 Number of data to transfer
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
} DMA1_CNDTR7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t PA : 32; // bit 0 Peripheral address
  } BITS;
} DMA1_CPAR7_t;

typedef union {
  volatile uint32_t REG;
  struct {
    volatile uint32_t MA : 32; // bit 0 Memory address
  } BITS;
} DMA1_CMAR7_t;

typedef struct {
  DMA1_ISR_t ISR;
  DMA1_IFCR_t IFCR;
  DMA1_CCR1_t CCR1;
  DMA1_CNDTR1_t CNDTR1;
  DMA1_CPAR1_t CPAR1;
  DMA1_CMAR1_t CMAR1;
  DMA1_CCR2_t CCR2;
  DMA1_CNDTR2_t CNDTR2;
  DMA1_CPAR2_t CPAR2;
  DMA1_CMAR2_t CMAR2;
  DMA1_CCR3_t CCR3;
  DMA1_CNDTR3_t CNDTR3;
  DMA1_CPAR3_t CPAR3;
  DMA1_CMAR3_t CMAR3;
  DMA1_CCR4_t CCR4;
  DMA1_CNDTR4_t CNDTR4;
  DMA1_CPAR4_t CPAR4;
  DMA1_CMAR4_t CMAR4;
  DMA1_CCR5_t CCR5;
  DMA1_CNDTR5_t CNDTR5;
  DMA1_CPAR5_t CPAR5;
  DMA1_CMAR5_t CMAR5;
  DMA1_CCR6_t CCR6;
  DMA1_CNDTR6_t CNDTR6;
  DMA1_CPAR6_t CPAR6;
  DMA1_CMAR6_t CMAR6;
  DMA1_CCR7_t CCR7;
  DMA1_CNDTR7_t CNDTR7;
  DMA1_CPAR7_t CPAR7;
  DMA1_CMAR7_t CMAR7;
} DMA1_t;

#define DMA1_BASE (0x40020000UL)
#define DMA1 ((DMA1_t *)DMA1_BASE)

#define DMA1_ISRbits (DMA1->ISR.BITS)
#define DMA1_IFCRbits (DMA1->IFCR.BITS)
#define DMA1_CCR1bits (DMA1->CCR1.BITS)
#define DMA1_CNDTR1bits (DMA1->CNDTR1.BITS)
#define DMA1_CPAR1bits (DMA1->CPAR1.BITS)
#define DMA1_CMAR1bits (DMA1->CMAR1.BITS)
#define DMA1_CCR2bits (DMA1->CCR2.BITS)
#define DMA1_CNDTR2bits (DMA1->CNDTR2.BITS)
#define DMA1_CPAR2bits (DMA1->CPAR2.BITS)
#define DMA1_CMAR2bits (DMA1->CMAR2.BITS)
#define DMA1_CCR3bits (DMA1->CCR3.BITS)
#define DMA1_CNDTR3bits (DMA1->CNDTR3.BITS)
#define DMA1_CPAR3bits (DMA1->CPAR3.BITS)
#define DMA1_CMAR3bits (DMA1->CMAR3.BITS)
#define DMA1_CCR4bits (DMA1->CCR4.BITS)
#define DMA1_CNDTR4bits (DMA1->CNDTR4.BITS)
#define DMA1_CPAR4bits (DMA1->CPAR4.BITS)
#define DMA1_CMAR4bits (DMA1->CMAR4.BITS)
#define DMA1_CCR5bits (DMA1->CCR5.BITS)
#define DMA1_CNDTR5bits (DMA1->CNDTR5.BITS)
#define DMA1_CPAR5bits (DMA1->CPAR5.BITS)
#define DMA1_CMAR5bits (DMA1->CMAR5.BITS)
#define DMA1_CCR6bits (DMA1->CCR6.BITS)
#define DMA1_CNDTR6bits (DMA1->CNDTR6.BITS)
#define DMA1_CPAR6bits (DMA1->CPAR6.BITS)
#define DMA1_CMAR6bits (DMA1->CMAR6.BITS)
#define DMA1_CCR7bits (DMA1->CCR7.BITS)
#define DMA1_CNDTR7bits (DMA1->CNDTR7.BITS)
#define DMA1_CPAR7bits (DMA1->CPAR7.BITS)
#define DMA1_CMAR7bits (DMA1->CMAR7.BITS)

#endif // _DMA1_H