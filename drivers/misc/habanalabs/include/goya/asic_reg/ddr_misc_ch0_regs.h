/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2017 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef ASIC_REG_DDR_MISC_CH0_H_
#define ASIC_REG_DDR_MISC_CH0_H_

/*
 *****************************************
 *   DDR_MISC_CH0 (Prototype: DDR_MISC)
 *****************************************
 */

#define mmDDR_MISC_CH0_PHY_ACCESS                                    0x648100
/* DDR_MISC_CH0_PHY_ACCESS */
#define DDR_MISC_CH0_PHY_ACCESS_BLOCKTYPE_SHIFT                      18
#define DDR_MISC_CH0_PHY_ACCESS_BLOCKTYPE_MASK                       0x3C0000
#define DDR_MISC_CH0_PHY_ACCESS_PSTATE_SHIFT                         22
#define DDR_MISC_CH0_PHY_ACCESS_PSTATE_MASK                          0x1C00000

#define mmDDR_MISC_CH0_AXI_SUPP                                      0x648104
/* DDR_MISC_CH0_AXI_SUPP */
#define DDR_MISC_CH0_AXI_SUPP_ARPOISON_SHIFT                         0
#define DDR_MISC_CH0_AXI_SUPP_ARPOISON_MASK                          0x1
#define DDR_MISC_CH0_AXI_SUPP_ARURGENT_SHIFT                         1
#define DDR_MISC_CH0_AXI_SUPP_ARURGENT_MASK                          0x2
#define DDR_MISC_CH0_AXI_SUPP_AWPOISON_SHIFT                         2
#define DDR_MISC_CH0_AXI_SUPP_AWPOISON_MASK                          0x4
#define DDR_MISC_CH0_AXI_SUPP_AWURGENT_SHIFT                         3
#define DDR_MISC_CH0_AXI_SUPP_AWURGENT_MASK                          0x8

#define mmDDR_MISC_CH0_POWER_SAVE                                    0x648108
/* DDR_MISC_CH0_POWER_SAVE */
#define DDR_MISC_CH0_POWER_SAVE_AXI_LP_REQ_SHIFT                     0
#define DDR_MISC_CH0_POWER_SAVE_AXI_LP_REQ_MASK                      0x1
#define DDR_MISC_CH0_POWER_SAVE_AXI_LP_ACK_SHIFT                     1
#define DDR_MISC_CH0_POWER_SAVE_AXI_LP_ACK_MASK                      0x2
#define DDR_MISC_CH0_POWER_SAVE_AXI_LP_CWAKE_SHIFT                   2
#define DDR_MISC_CH0_POWER_SAVE_AXI_LP_CWAKE_MASK                    0x4
#define DDR_MISC_CH0_POWER_SAVE_CTRL_LP_REQ_SHIFT                    4
#define DDR_MISC_CH0_POWER_SAVE_CTRL_LP_REQ_MASK                     0x10
#define DDR_MISC_CH0_POWER_SAVE_CTRL_LP_ACK_SHIFT                    5
#define DDR_MISC_CH0_POWER_SAVE_CTRL_LP_ACK_MASK                     0x20
#define DDR_MISC_CH0_POWER_SAVE_CTRL_LP_CWAKE_SHIFT                  6
#define DDR_MISC_CH0_POWER_SAVE_CTRL_LP_CWAKE_MASK                   0x40

#define mmDDR_MISC_CH0_PHY_MODES                                     0x64810C
/* DDR_MISC_CH0_PHY_MODES */
#define DDR_MISC_CH0_PHY_MODES_DFI_FREQ_RATIO_SHIFT                  0
#define DDR_MISC_CH0_PHY_MODES_DFI_FREQ_RATIO_MASK                   0x3
#define DDR_MISC_CH0_PHY_MODES_WR_LVL_MODE_SHIFT                     2
#define DDR_MISC_CH0_PHY_MODES_WR_LVL_MODE_MASK                      0xC
#define DDR_MISC_CH0_PHY_MODES_RD_LVL_MODE_SHIFT                     4
#define DDR_MISC_CH0_PHY_MODES_RD_LVL_MODE_MASK                      0x30
#define DDR_MISC_CH0_PHY_MODES_RD_DQS_MODE_SHIFT                     6
#define DDR_MISC_CH0_PHY_MODES_RD_DQS_MODE_MASK                      0xC0

#define mmDDR_MISC_CH0_SCRUB_START                                   0x648110
/* DDR_MISC_CH0_SCRUB_START */
#define DDR_MISC_CH0_SCRUB_START_SBR_START_SHIFT                     0
#define DDR_MISC_CH0_SCRUB_START_SBR_START_MASK                      0xFFFFFFFF

#define mmDDR_MISC_CH0_SCRUB_END                                     0x648114
/* DDR_MISC_CH0_SCRUB_END */
#define DDR_MISC_CH0_SCRUB_END_SBR_END_SHIFT                         0
#define DDR_MISC_CH0_SCRUB_END_SBR_END_MASK                          0xFFFFFFFF

#define mmDDR_MISC_CH0_STATUS                                        0x648118
/* DDR_MISC_CH0_STATUS */
#define DDR_MISC_CH0_STATUS_RETRY_STATE_SHIFT                        0
#define DDR_MISC_CH0_STATUS_RETRY_STATE_MASK                         0xF
#define DDR_MISC_CH0_STATUS_DFI_ERROR_INFO_SHIFT                     4
#define DDR_MISC_CH0_STATUS_DFI_ERROR_INFO_MASK                      0xF0
#define DDR_MISC_CH0_STATUS_DFI_ERROR_SHIFT                          8
#define DDR_MISC_CH0_STATUS_DFI_ERROR_MASK                           0x100
#define DDR_MISC_CH0_STATUS_SELFREFRESH_TYPE_SHIFT                   9
#define DDR_MISC_CH0_STATUS_SELFREFRESH_TYPE_MASK                    0x600
#define DDR_MISC_CH0_STATUS_DFI_POISON_SHIFT                         11
#define DDR_MISC_CH0_STATUS_DFI_POISON_MASK                          0x800
#define DDR_MISC_CH0_STATUS_CONTROLLER_IDLE_SHIFT                    12
#define DDR_MISC_CH0_STATUS_CONTROLLER_IDLE_MASK                     0x1000

#define mmDDR_MISC_CH0_MPR_RD_VALID                                  0x64811C
/* DDR_MISC_CH0_MPR_RD_VALID */
#define DDR_MISC_CH0_MPR_RD_VALID_MPR_VALID_SHIFT                    0
#define DDR_MISC_CH0_MPR_RD_VALID_MPR_VALID_MASK                     0x1

#define mmDDR_MISC_CH0_MPR_RD_DATA_C0_0                              0x648120

#define mmDDR_MISC_CH0_MPR_RD_DATA_C0_1                              0x648124

#define mmDDR_MISC_CH0_MPR_RD_DATA_C0_2                              0x648128

#define mmDDR_MISC_CH0_MPR_RD_DATA_C0_3                              0x64812C

#define mmDDR_MISC_CH0_MPR_RD_DATA_C0_4                              0x648130

#define mmDDR_MISC_CH0_MPR_RD_DATA_C0_5                              0x648134

#define mmDDR_MISC_CH0_MPR_RD_DATA_C0_6                              0x648138

#define mmDDR_MISC_CH0_MPR_RD_DATA_C0_7                              0x64813C

#define mmDDR_MISC_CH0_MPR_RD_DATA_C0_8                              0x648140
/* DDR_MISC_CH0_MPR_RD_DATA_C0 */
#define DDR_MISC_CH0_MPR_RD_DATA_C0_MPR_DATA_P0_SHIFT                0
#define DDR_MISC_CH0_MPR_RD_DATA_C0_MPR_DATA_P0_MASK                 0xFF
#define DDR_MISC_CH0_MPR_RD_DATA_C0_MPR_DATA_P1_SHIFT                8
#define DDR_MISC_CH0_MPR_RD_DATA_C0_MPR_DATA_P1_MASK                 0xFF00
#define DDR_MISC_CH0_MPR_RD_DATA_C0_MPR_DATA_P2_SHIFT                16
#define DDR_MISC_CH0_MPR_RD_DATA_C0_MPR_DATA_P2_MASK                 0xFF0000
#define DDR_MISC_CH0_MPR_RD_DATA_C0_MPR_DATA_P3_SHIFT                24
#define DDR_MISC_CH0_MPR_RD_DATA_C0_MPR_DATA_P3_MASK                 0xFF000000

#define mmDDR_MISC_CH0_MPR_RD_DATA_C1_0                              0x648144

#define mmDDR_MISC_CH0_MPR_RD_DATA_C1_1                              0x648148

#define mmDDR_MISC_CH0_MPR_RD_DATA_C1_2                              0x64814C

#define mmDDR_MISC_CH0_MPR_RD_DATA_C1_3                              0x648150

#define mmDDR_MISC_CH0_MPR_RD_DATA_C1_4                              0x648154

#define mmDDR_MISC_CH0_MPR_RD_DATA_C1_5                              0x648158

#define mmDDR_MISC_CH0_MPR_RD_DATA_C1_6                              0x64815C

#define mmDDR_MISC_CH0_MPR_RD_DATA_C1_7                              0x648160

#define mmDDR_MISC_CH0_MPR_RD_DATA_C1_8                              0x648164
/* DDR_MISC_CH0_MPR_RD_DATA_C1 */
#define DDR_MISC_CH0_MPR_RD_DATA_C1_MPR_DATA_P4_SHIFT                0
#define DDR_MISC_CH0_MPR_RD_DATA_C1_MPR_DATA_P4_MASK                 0xFF
#define DDR_MISC_CH0_MPR_RD_DATA_C1_MPR_DATA_P5_SHIFT                8
#define DDR_MISC_CH0_MPR_RD_DATA_C1_MPR_DATA_P5_MASK                 0xFF00
#define DDR_MISC_CH0_MPR_RD_DATA_C1_MPR_DATA_P6_SHIFT                16
#define DDR_MISC_CH0_MPR_RD_DATA_C1_MPR_DATA_P6_MASK                 0xFF0000
#define DDR_MISC_CH0_MPR_RD_DATA_C1_MPR_DATA_P7_SHIFT                24
#define DDR_MISC_CH0_MPR_RD_DATA_C1_MPR_DATA_P7_MASK                 0xFF000000

#define mmDDR_MISC_CH0_CFG_DONE                                      0x648200
/* DDR_MISC_CH0_CFG_DONE */
#define DDR_MISC_CH0_CFG_DONE_CFG_DONE_SHIFT                         0
#define DDR_MISC_CH0_CFG_DONE_CFG_DONE_MASK                          0x1

#endif /* ASIC_REG_DDR_MISC_CH0_H_ */

