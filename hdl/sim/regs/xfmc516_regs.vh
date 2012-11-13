`define ADDR_FMC516_FMC_CTL            6'h0
`define FMC516_FMC_CTL_TEST_DATA_EN_OFFSET 0
`define FMC516_FMC_CTL_TEST_DATA_EN 32'h00000001
`define FMC516_FMC_CTL_LED_0_OFFSET 1
`define FMC516_FMC_CTL_LED_0 32'h00000002
`define FMC516_FMC_CTL_LED_1_OFFSET 2
`define FMC516_FMC_CTL_LED_1 32'h00000004
`define FMC516_FMC_CTL_CLK_SEL_OFFSET 3
`define FMC516_FMC_CTL_CLK_SEL 32'h00000008
`define FMC516_FMC_CTL_RESERVED_OFFSET 4
`define FMC516_FMC_CTL_RESERVED 32'hfffffff0
`define ADDR_FMC516_FMC_STA            6'h4
`define FMC516_FMC_STA_MMCM_LOCKED_OFFSET 0
`define FMC516_FMC_STA_MMCM_LOCKED 32'h00000001
`define FMC516_FMC_STA_PWR_GOOD_OFFSET 1
`define FMC516_FMC_STA_PWR_GOOD 32'h00000002
`define FMC516_FMC_STA_PRST_OFFSET 2
`define FMC516_FMC_STA_PRST 32'h00000004
`define FMC516_FMC_STA_RESERVED_OFFSET 3
`define FMC516_FMC_STA_RESERVED 32'hfffffff8
`define ADDR_FMC516_TRIG_CFG           6'h8
`define FMC516_TRIG_CFG_HW_TRIG_POL_OFFSET 0
`define FMC516_TRIG_CFG_HW_TRIG_POL 32'h00000001
`define FMC516_TRIG_CFG_HW_TRIG_EN_OFFSET 1
`define FMC516_TRIG_CFG_HW_TRIG_EN 32'h00000002
`define FMC516_TRIG_CFG_RESERVED_OFFSET 2
`define FMC516_TRIG_CFG_RESERVED 32'hfffffffc
`define ADDR_FMC516_ADC_STA            6'hc
`define FMC516_ADC_STA_CLK_CHAINS_OFFSET 0
`define FMC516_ADC_STA_CLK_CHAINS 32'h0000000f
`define FMC516_ADC_STA_DATA_CHAINS_OFFSET 8
`define FMC516_ADC_STA_DATA_CHAINS 32'h00000f00
`define FMC516_ADC_STA_ADC_PKT_SIZE_OFFSET 16
`define FMC516_ADC_STA_ADC_PKT_SIZE 32'hffff0000
`define ADDR_FMC516_ADC_CTL            6'h10
`define FMC516_ADC_CTL_UPDATE_DLY_OFFSET 0
`define FMC516_ADC_CTL_UPDATE_DLY 32'h00000001
`define FMC516_ADC_CTL_RESERVED_OFFSET 1
`define FMC516_ADC_CTL_RESERVED 32'hfffffffe
`define ADDR_FMC516_CH0_STA            6'h14
`define FMC516_CH0_STA_VAL_OFFSET 0
`define FMC516_CH0_STA_VAL 32'h0000ffff
`define FMC516_CH0_STA_RESERVED_OFFSET 16
`define FMC516_CH0_STA_RESERVED 32'hffff0000
`define ADDR_FMC516_CH0_CTL            6'h18
`define FMC516_CH0_CTL_CLK_CHAIN_DLY_OFFSET 0
`define FMC516_CH0_CTL_CLK_CHAIN_DLY 32'h0000001f
`define FMC516_CH0_CTL_DATA_CHAIN_DLY_OFFSET 8
`define FMC516_CH0_CTL_DATA_CHAIN_DLY 32'h00001f00
`define FMC516_CH0_CTL_RESERVED_OFFSET 16
`define FMC516_CH0_CTL_RESERVED 32'hffff0000
`define ADDR_FMC516_CH1_STA            6'h1c
`define FMC516_CH1_STA_VAL_OFFSET 0
`define FMC516_CH1_STA_VAL 32'h0000ffff
`define FMC516_CH1_STA_RESERVED_OFFSET 16
`define FMC516_CH1_STA_RESERVED 32'hffff0000
`define ADDR_FMC516_CH1_CTL            6'h20
`define FMC516_CH1_CTL_CLK_CHAIN_DLY_OFFSET 0
`define FMC516_CH1_CTL_CLK_CHAIN_DLY 32'h0000001f
`define FMC516_CH1_CTL_DATA_CHAIN_DLY_OFFSET 8
`define FMC516_CH1_CTL_DATA_CHAIN_DLY 32'h00001f00
`define FMC516_CH1_CTL_RESERVED_OFFSET 16
`define FMC516_CH1_CTL_RESERVED 32'hffff0000
`define ADDR_FMC516_CH2_STA            6'h24
`define FMC516_CH2_STA_VAL_OFFSET 0
`define FMC516_CH2_STA_VAL 32'h0000ffff
`define FMC516_CH2_STA_RESERVED_OFFSET 16
`define FMC516_CH2_STA_RESERVED 32'hffff0000
`define ADDR_FMC516_CH2_CTL            6'h28
`define FMC516_CH2_CTL_CLK_CHAIN_DLY_OFFSET 0
`define FMC516_CH2_CTL_CLK_CHAIN_DLY 32'h0000001f
`define FMC516_CH2_CTL_DATA_CHAIN_DLY_OFFSET 8
`define FMC516_CH2_CTL_DATA_CHAIN_DLY 32'h00001f00
`define FMC516_CH2_CTL_RESERVED_OFFSET 16
`define FMC516_CH2_CTL_RESERVED 32'hffff0000
`define ADDR_FMC516_CH3_STA            6'h2c
`define FMC516_CH3_STA_VAL_OFFSET 0
`define FMC516_CH3_STA_VAL 32'h0000ffff
`define FMC516_CH3_STA_RESERVED_OFFSET 16
`define FMC516_CH3_STA_RESERVED 32'hffff0000
`define ADDR_FMC516_CH3_CTL            6'h30
`define FMC516_CH3_CTL_CLK_CHAIN_DLY_OFFSET 0
`define FMC516_CH3_CTL_CLK_CHAIN_DLY 32'h0000001f
`define FMC516_CH3_CTL_DATA_CHAIN_DLY_OFFSET 8
`define FMC516_CH3_CTL_DATA_CHAIN_DLY 32'h00001f00
`define FMC516_CH3_CTL_RESERVED_OFFSET 16
`define FMC516_CH3_CTL_RESERVED 32'hffff0000
