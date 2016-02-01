/*
  Register definitions for slave core: Control and status register for the MLVDS trigger

  * File           : wb_slave_trigger_regs.h
  * Author         : auto-generated by wbgen2 from wb_trigger.wb
  * Created        : Mon Feb  1 12:29:18 2016
  * Standard       : ANSI C

    THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE wb_trigger.wb
    DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!

*/

#ifndef __WBGEN2_REGDEFS_WB_TRIGGER_WB
#define __WBGEN2_REGDEFS_WB_TRIGGER_WB

#include <inttypes.h>

#if defined( __GNUC__)
#define PACKED __attribute__ ((packed))
#else
#error "Unsupported compiler?"
#endif

#ifndef __WBGEN2_MACROS_DEFINED__
#define __WBGEN2_MACROS_DEFINED__
#define WBGEN2_GEN_MASK(offset, size) (((1<<(size))-1) << (offset))
#define WBGEN2_GEN_WRITE(value, offset, size) (((value) & ((1<<(size))-1)) << (offset))
#define WBGEN2_GEN_READ(reg, offset, size) (((reg) >> (offset)) & ((1<<(size))-1))
#define WBGEN2_SIGN_EXTEND(value, bits) (((value) & (1<<bits) ? ~((1<<(bits))-1): 0 ) | (value))
#endif


/* definitions for register: Channel 0 Control */

/* definitions for field: Trigger Direction in reg: Channel 0 Control */
#define WB_TRIG_CH0_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 0 Control */
#define WB_TRIG_CH0_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 0 Control */
#define WB_TRIG_CH0_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 0 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 0 Configuration Parameters */
#define WB_TRIG_CH0_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH0_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH0_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH0_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 0 Configuration Parameters */
#define WB_TRIG_CH0_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH0_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH0_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH0_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 0 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 0 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH0_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH0_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH0_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH0_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 0 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH0_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH0_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH0_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH0_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 1 Control */

/* definitions for field: Trigger Direction in reg: Channel 1 Control */
#define WB_TRIG_CH1_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 1 Control */
#define WB_TRIG_CH1_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 1 Control */
#define WB_TRIG_CH1_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 1 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 1 Configuration Parameters */
#define WB_TRIG_CH1_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH1_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH1_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH1_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 1 Configuration Parameters */
#define WB_TRIG_CH1_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH1_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH1_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH1_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 1 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 1 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH1_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH1_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH1_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH1_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 1 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH1_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH1_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH1_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH1_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 2 Control */

/* definitions for field: Trigger Direction in reg: Channel 2 Control */
#define WB_TRIG_CH2_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 2 Control */
#define WB_TRIG_CH2_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 2 Control */
#define WB_TRIG_CH2_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 2 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 2 Configuration Parameters */
#define WB_TRIG_CH2_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH2_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH2_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH2_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 2 Configuration Parameters */
#define WB_TRIG_CH2_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH2_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH2_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH2_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 2 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 2 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH2_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH2_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH2_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH2_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 2 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH2_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH2_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH2_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH2_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 3 Control */

/* definitions for field: Trigger Direction in reg: Channel 3 Control */
#define WB_TRIG_CH3_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 3 Control */
#define WB_TRIG_CH3_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 3 Control */
#define WB_TRIG_CH3_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 3 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 3 Configuration Parameters */
#define WB_TRIG_CH3_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH3_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH3_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH3_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 3 Configuration Parameters */
#define WB_TRIG_CH3_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH3_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH3_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH3_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 3 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 3 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH3_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH3_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH3_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH3_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 3 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH3_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH3_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH3_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH3_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 4 Control */

/* definitions for field: Trigger Direction in reg: Channel 4 Control */
#define WB_TRIG_CH4_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 4 Control */
#define WB_TRIG_CH4_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 4 Control */
#define WB_TRIG_CH4_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 4 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 4 Configuration Parameters */
#define WB_TRIG_CH4_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH4_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH4_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH4_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 4 Configuration Parameters */
#define WB_TRIG_CH4_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH4_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH4_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH4_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 4 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 4 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH4_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH4_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH4_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH4_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 4 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH4_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH4_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH4_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH4_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 5 Control */

/* definitions for field: Trigger Direction in reg: Channel 5 Control */
#define WB_TRIG_CH5_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 5 Control */
#define WB_TRIG_CH5_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 5 Control */
#define WB_TRIG_CH5_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 5 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 5 Configuration Parameters */
#define WB_TRIG_CH5_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH5_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH5_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH5_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 5 Configuration Parameters */
#define WB_TRIG_CH5_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH5_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH5_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH5_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 5 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 5 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH5_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH5_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH5_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH5_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 5 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH5_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH5_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH5_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH5_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 6 Control */

/* definitions for field: Trigger Direction in reg: Channel 6 Control */
#define WB_TRIG_CH6_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 6 Control */
#define WB_TRIG_CH6_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 6 Control */
#define WB_TRIG_CH6_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 6 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 6 Configuration Parameters */
#define WB_TRIG_CH6_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH6_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH6_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH6_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 6 Configuration Parameters */
#define WB_TRIG_CH6_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH6_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH6_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH6_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 6 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 6 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH6_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH6_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH6_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH6_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 6 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH6_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH6_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH6_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH6_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 7 Control */

/* definitions for field: Trigger Direction in reg: Channel 7 Control */
#define WB_TRIG_CH7_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 7 Control */
#define WB_TRIG_CH7_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 7 Control */
#define WB_TRIG_CH7_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 7 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 7 Configuration Parameters */
#define WB_TRIG_CH7_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH7_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH7_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH7_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 7 Configuration Parameters */
#define WB_TRIG_CH7_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH7_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH7_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH7_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 7 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 7 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH7_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH7_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH7_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH7_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 7 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH7_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH7_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH7_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH7_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 8 Control */

/* definitions for field: Trigger Direction in reg: Channel 8 Control */
#define WB_TRIG_CH8_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 8 Control */
#define WB_TRIG_CH8_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 8 Control */
#define WB_TRIG_CH8_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 8 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 8 Configuration Parameters */
#define WB_TRIG_CH8_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH8_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH8_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH8_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 8 Configuration Parameters */
#define WB_TRIG_CH8_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH8_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH8_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH8_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 8 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 8 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH8_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH8_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH8_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH8_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 8 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH8_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH8_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH8_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH8_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 9 Control */

/* definitions for field: Trigger Direction in reg: Channel 9 Control */
#define WB_TRIG_CH9_CTL_DIR                   WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 9 Control */
#define WB_TRIG_CH9_CTL_RCV_COUNT_RST         WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 9 Control */
#define WB_TRIG_CH9_CTL_TRANSM_COUNT_RST      WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 9 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 9 Configuration Parameters */
#define WB_TRIG_CH9_CFG_RCV_LEN_MASK          WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH9_CFG_RCV_LEN_SHIFT         0
#define WB_TRIG_CH9_CFG_RCV_LEN_W(value)      WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH9_CFG_RCV_LEN_R(reg)        WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 9 Configuration Parameters */
#define WB_TRIG_CH9_CFG_TRANSM_LEN_MASK       WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH9_CFG_TRANSM_LEN_SHIFT      8
#define WB_TRIG_CH9_CFG_TRANSM_LEN_W(value)   WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH9_CFG_TRANSM_LEN_R(reg)     WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 9 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 9 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH9_COUNT_RCV_MASK            WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH9_COUNT_RCV_SHIFT           0
#define WB_TRIG_CH9_COUNT_RCV_W(value)        WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH9_COUNT_RCV_R(reg)          WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 9 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH9_COUNT_TRANSM_MASK         WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH9_COUNT_TRANSM_SHIFT        16
#define WB_TRIG_CH9_COUNT_TRANSM_W(value)     WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH9_COUNT_TRANSM_R(reg)       WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 10 Control */

/* definitions for field: Trigger Direction in reg: Channel 10 Control */
#define WB_TRIG_CH10_CTL_DIR                  WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 10 Control */
#define WB_TRIG_CH10_CTL_RCV_COUNT_RST        WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 10 Control */
#define WB_TRIG_CH10_CTL_TRANSM_COUNT_RST     WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 10 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 10 Configuration Parameters */
#define WB_TRIG_CH10_CFG_RCV_LEN_MASK         WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH10_CFG_RCV_LEN_SHIFT        0
#define WB_TRIG_CH10_CFG_RCV_LEN_W(value)     WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH10_CFG_RCV_LEN_R(reg)       WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 10 Configuration Parameters */
#define WB_TRIG_CH10_CFG_TRANSM_LEN_MASK      WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH10_CFG_TRANSM_LEN_SHIFT     8
#define WB_TRIG_CH10_CFG_TRANSM_LEN_W(value)  WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH10_CFG_TRANSM_LEN_R(reg)    WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 10 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 10 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH10_COUNT_RCV_MASK           WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH10_COUNT_RCV_SHIFT          0
#define WB_TRIG_CH10_COUNT_RCV_W(value)       WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH10_COUNT_RCV_R(reg)         WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 10 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH10_COUNT_TRANSM_MASK        WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH10_COUNT_TRANSM_SHIFT       16
#define WB_TRIG_CH10_COUNT_TRANSM_W(value)    WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH10_COUNT_TRANSM_R(reg)      WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 11 Control */

/* definitions for field: Trigger Direction in reg: Channel 11 Control */
#define WB_TRIG_CH11_CTL_DIR                  WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 11 Control */
#define WB_TRIG_CH11_CTL_RCV_COUNT_RST        WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 11 Control */
#define WB_TRIG_CH11_CTL_TRANSM_COUNT_RST     WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 11 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 11 Configuration Parameters */
#define WB_TRIG_CH11_CFG_RCV_LEN_MASK         WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH11_CFG_RCV_LEN_SHIFT        0
#define WB_TRIG_CH11_CFG_RCV_LEN_W(value)     WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH11_CFG_RCV_LEN_R(reg)       WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 11 Configuration Parameters */
#define WB_TRIG_CH11_CFG_TRANSM_LEN_MASK      WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH11_CFG_TRANSM_LEN_SHIFT     8
#define WB_TRIG_CH11_CFG_TRANSM_LEN_W(value)  WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH11_CFG_TRANSM_LEN_R(reg)    WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 11 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 11 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH11_COUNT_RCV_MASK           WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH11_COUNT_RCV_SHIFT          0
#define WB_TRIG_CH11_COUNT_RCV_W(value)       WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH11_COUNT_RCV_R(reg)         WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 11 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH11_COUNT_TRANSM_MASK        WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH11_COUNT_TRANSM_SHIFT       16
#define WB_TRIG_CH11_COUNT_TRANSM_W(value)    WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH11_COUNT_TRANSM_R(reg)      WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 12 Control */

/* definitions for field: Trigger Direction in reg: Channel 12 Control */
#define WB_TRIG_CH12_CTL_DIR                  WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 12 Control */
#define WB_TRIG_CH12_CTL_RCV_COUNT_RST        WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 12 Control */
#define WB_TRIG_CH12_CTL_TRANSM_COUNT_RST     WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 12 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 12 Configuration Parameters */
#define WB_TRIG_CH12_CFG_RCV_LEN_MASK         WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH12_CFG_RCV_LEN_SHIFT        0
#define WB_TRIG_CH12_CFG_RCV_LEN_W(value)     WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH12_CFG_RCV_LEN_R(reg)       WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 12 Configuration Parameters */
#define WB_TRIG_CH12_CFG_TRANSM_LEN_MASK      WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH12_CFG_TRANSM_LEN_SHIFT     8
#define WB_TRIG_CH12_CFG_TRANSM_LEN_W(value)  WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH12_CFG_TRANSM_LEN_R(reg)    WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 12 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 12 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH12_COUNT_RCV_MASK           WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH12_COUNT_RCV_SHIFT          0
#define WB_TRIG_CH12_COUNT_RCV_W(value)       WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH12_COUNT_RCV_R(reg)         WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 12 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH12_COUNT_TRANSM_MASK        WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH12_COUNT_TRANSM_SHIFT       16
#define WB_TRIG_CH12_COUNT_TRANSM_W(value)    WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH12_COUNT_TRANSM_R(reg)      WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 13 Control */

/* definitions for field: Trigger Direction in reg: Channel 13 Control */
#define WB_TRIG_CH13_CTL_DIR                  WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 13 Control */
#define WB_TRIG_CH13_CTL_RCV_COUNT_RST        WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 13 Control */
#define WB_TRIG_CH13_CTL_TRANSM_COUNT_RST     WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 13 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 13 Configuration Parameters */
#define WB_TRIG_CH13_CFG_RCV_LEN_MASK         WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH13_CFG_RCV_LEN_SHIFT        0
#define WB_TRIG_CH13_CFG_RCV_LEN_W(value)     WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH13_CFG_RCV_LEN_R(reg)       WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 13 Configuration Parameters */
#define WB_TRIG_CH13_CFG_TRANSM_LEN_MASK      WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH13_CFG_TRANSM_LEN_SHIFT     8
#define WB_TRIG_CH13_CFG_TRANSM_LEN_W(value)  WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH13_CFG_TRANSM_LEN_R(reg)    WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 13 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 13 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH13_COUNT_RCV_MASK           WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH13_COUNT_RCV_SHIFT          0
#define WB_TRIG_CH13_COUNT_RCV_W(value)       WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH13_COUNT_RCV_R(reg)         WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 13 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH13_COUNT_TRANSM_MASK        WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH13_COUNT_TRANSM_SHIFT       16
#define WB_TRIG_CH13_COUNT_TRANSM_W(value)    WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH13_COUNT_TRANSM_R(reg)      WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 14 Control */

/* definitions for field: Trigger Direction in reg: Channel 14 Control */
#define WB_TRIG_CH14_CTL_DIR                  WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 14 Control */
#define WB_TRIG_CH14_CTL_RCV_COUNT_RST        WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 14 Control */
#define WB_TRIG_CH14_CTL_TRANSM_COUNT_RST     WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 14 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 14 Configuration Parameters */
#define WB_TRIG_CH14_CFG_RCV_LEN_MASK         WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH14_CFG_RCV_LEN_SHIFT        0
#define WB_TRIG_CH14_CFG_RCV_LEN_W(value)     WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH14_CFG_RCV_LEN_R(reg)       WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 14 Configuration Parameters */
#define WB_TRIG_CH14_CFG_TRANSM_LEN_MASK      WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH14_CFG_TRANSM_LEN_SHIFT     8
#define WB_TRIG_CH14_CFG_TRANSM_LEN_W(value)  WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH14_CFG_TRANSM_LEN_R(reg)    WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 14 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 14 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH14_COUNT_RCV_MASK           WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH14_COUNT_RCV_SHIFT          0
#define WB_TRIG_CH14_COUNT_RCV_W(value)       WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH14_COUNT_RCV_R(reg)         WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 14 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH14_COUNT_TRANSM_MASK        WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH14_COUNT_TRANSM_SHIFT       16
#define WB_TRIG_CH14_COUNT_TRANSM_W(value)    WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH14_COUNT_TRANSM_R(reg)      WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 15 Control */

/* definitions for field: Trigger Direction in reg: Channel 15 Control */
#define WB_TRIG_CH15_CTL_DIR                  WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Receiver Pulse Counter Reset in reg: Channel 15 Control */
#define WB_TRIG_CH15_CTL_RCV_COUNT_RST        WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Transmitter Pulse Counter Reset in reg: Channel 15 Control */
#define WB_TRIG_CH15_CTL_TRANSM_COUNT_RST     WBGEN2_GEN_MASK(2, 1)

/* definitions for register: Channel 15 Configuration Parameters */

/* definitions for field: Receiver Pulse Length in reg: Channel 15 Configuration Parameters */
#define WB_TRIG_CH15_CFG_RCV_LEN_MASK         WBGEN2_GEN_MASK(0, 8)
#define WB_TRIG_CH15_CFG_RCV_LEN_SHIFT        0
#define WB_TRIG_CH15_CFG_RCV_LEN_W(value)     WBGEN2_GEN_WRITE(value, 0, 8)
#define WB_TRIG_CH15_CFG_RCV_LEN_R(reg)       WBGEN2_GEN_READ(reg, 0, 8)

/* definitions for field: Transmitter Pulse Length in reg: Channel 15 Configuration Parameters */
#define WB_TRIG_CH15_CFG_TRANSM_LEN_MASK      WBGEN2_GEN_MASK(8, 8)
#define WB_TRIG_CH15_CFG_TRANSM_LEN_SHIFT     8
#define WB_TRIG_CH15_CFG_TRANSM_LEN_W(value)  WBGEN2_GEN_WRITE(value, 8, 8)
#define WB_TRIG_CH15_CFG_TRANSM_LEN_R(reg)    WBGEN2_GEN_READ(reg, 8, 8)

/* definitions for register: Channel 15 Transmitter/Receiver Pulses Counter */

/* definitions for field: Receiver Counter in reg: Channel 15 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH15_COUNT_RCV_MASK           WBGEN2_GEN_MASK(0, 16)
#define WB_TRIG_CH15_COUNT_RCV_SHIFT          0
#define WB_TRIG_CH15_COUNT_RCV_W(value)       WBGEN2_GEN_WRITE(value, 0, 16)
#define WB_TRIG_CH15_COUNT_RCV_R(reg)         WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Transmitter Counter in reg: Channel 15 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_CH15_COUNT_TRANSM_MASK        WBGEN2_GEN_MASK(16, 16)
#define WB_TRIG_CH15_COUNT_TRANSM_SHIFT       16
#define WB_TRIG_CH15_COUNT_TRANSM_W(value)    WBGEN2_GEN_WRITE(value, 16, 16)
#define WB_TRIG_CH15_COUNT_TRANSM_R(reg)      WBGEN2_GEN_READ(reg, 16, 16)
/* [0x0]: REG Channel 0 Control */
#define WB_TRIG_REG_CH0_CTL 0x00000000
/* [0x4]: REG Channel 0 Configuration Parameters */
#define WB_TRIG_REG_CH0_CFG 0x00000004
/* [0x8]: REG Channel 0 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH0_COUNT 0x00000008
/* [0xc]: REG Channel 1 Control */
#define WB_TRIG_REG_CH1_CTL 0x0000000c
/* [0x10]: REG Channel 1 Configuration Parameters */
#define WB_TRIG_REG_CH1_CFG 0x00000010
/* [0x14]: REG Channel 1 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH1_COUNT 0x00000014
/* [0x18]: REG Channel 2 Control */
#define WB_TRIG_REG_CH2_CTL 0x00000018
/* [0x1c]: REG Channel 2 Configuration Parameters */
#define WB_TRIG_REG_CH2_CFG 0x0000001c
/* [0x20]: REG Channel 2 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH2_COUNT 0x00000020
/* [0x24]: REG Channel 3 Control */
#define WB_TRIG_REG_CH3_CTL 0x00000024
/* [0x28]: REG Channel 3 Configuration Parameters */
#define WB_TRIG_REG_CH3_CFG 0x00000028
/* [0x2c]: REG Channel 3 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH3_COUNT 0x0000002c
/* [0x30]: REG Channel 4 Control */
#define WB_TRIG_REG_CH4_CTL 0x00000030
/* [0x34]: REG Channel 4 Configuration Parameters */
#define WB_TRIG_REG_CH4_CFG 0x00000034
/* [0x38]: REG Channel 4 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH4_COUNT 0x00000038
/* [0x3c]: REG Channel 5 Control */
#define WB_TRIG_REG_CH5_CTL 0x0000003c
/* [0x40]: REG Channel 5 Configuration Parameters */
#define WB_TRIG_REG_CH5_CFG 0x00000040
/* [0x44]: REG Channel 5 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH5_COUNT 0x00000044
/* [0x48]: REG Channel 6 Control */
#define WB_TRIG_REG_CH6_CTL 0x00000048
/* [0x4c]: REG Channel 6 Configuration Parameters */
#define WB_TRIG_REG_CH6_CFG 0x0000004c
/* [0x50]: REG Channel 6 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH6_COUNT 0x00000050
/* [0x54]: REG Channel 7 Control */
#define WB_TRIG_REG_CH7_CTL 0x00000054
/* [0x58]: REG Channel 7 Configuration Parameters */
#define WB_TRIG_REG_CH7_CFG 0x00000058
/* [0x5c]: REG Channel 7 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH7_COUNT 0x0000005c
/* [0x60]: REG Channel 8 Control */
#define WB_TRIG_REG_CH8_CTL 0x00000060
/* [0x64]: REG Channel 8 Configuration Parameters */
#define WB_TRIG_REG_CH8_CFG 0x00000064
/* [0x68]: REG Channel 8 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH8_COUNT 0x00000068
/* [0x6c]: REG Channel 9 Control */
#define WB_TRIG_REG_CH9_CTL 0x0000006c
/* [0x70]: REG Channel 9 Configuration Parameters */
#define WB_TRIG_REG_CH9_CFG 0x00000070
/* [0x74]: REG Channel 9 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH9_COUNT 0x00000074
/* [0x78]: REG Channel 10 Control */
#define WB_TRIG_REG_CH10_CTL 0x00000078
/* [0x7c]: REG Channel 10 Configuration Parameters */
#define WB_TRIG_REG_CH10_CFG 0x0000007c
/* [0x80]: REG Channel 10 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH10_COUNT 0x00000080
/* [0x84]: REG Channel 11 Control */
#define WB_TRIG_REG_CH11_CTL 0x00000084
/* [0x88]: REG Channel 11 Configuration Parameters */
#define WB_TRIG_REG_CH11_CFG 0x00000088
/* [0x8c]: REG Channel 11 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH11_COUNT 0x0000008c
/* [0x90]: REG Channel 12 Control */
#define WB_TRIG_REG_CH12_CTL 0x00000090
/* [0x94]: REG Channel 12 Configuration Parameters */
#define WB_TRIG_REG_CH12_CFG 0x00000094
/* [0x98]: REG Channel 12 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH12_COUNT 0x00000098
/* [0x9c]: REG Channel 13 Control */
#define WB_TRIG_REG_CH13_CTL 0x0000009c
/* [0xa0]: REG Channel 13 Configuration Parameters */
#define WB_TRIG_REG_CH13_CFG 0x000000a0
/* [0xa4]: REG Channel 13 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH13_COUNT 0x000000a4
/* [0xa8]: REG Channel 14 Control */
#define WB_TRIG_REG_CH14_CTL 0x000000a8
/* [0xac]: REG Channel 14 Configuration Parameters */
#define WB_TRIG_REG_CH14_CFG 0x000000ac
/* [0xb0]: REG Channel 14 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH14_COUNT 0x000000b0
/* [0xb4]: REG Channel 15 Control */
#define WB_TRIG_REG_CH15_CTL 0x000000b4
/* [0xb8]: REG Channel 15 Configuration Parameters */
#define WB_TRIG_REG_CH15_CFG 0x000000b8
/* [0xbc]: REG Channel 15 Transmitter/Receiver Pulses Counter */
#define WB_TRIG_REG_CH15_COUNT 0x000000bc
#endif
