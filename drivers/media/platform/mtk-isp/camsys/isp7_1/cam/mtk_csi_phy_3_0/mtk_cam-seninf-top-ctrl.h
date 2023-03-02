/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __SENINF_TOP_H__
#define __SENINF_TOP_H__

#define SENINF_TOP_CTRL 0x0000
#define SENINF_TOP_SW_RST_SHIFT 0
#define SENINF_TOP_SW_RST_MASK (0x1 << 0)
#define SENINF_TOP_N3D_SW_RST_SHIFT 4
#define SENINF_TOP_N3D_SW_RST_MASK (0x1 << 4)
#define RG_SENINF1_PCAM_PCLK_SEL_SHIFT 8
#define RG_SENINF1_PCAM_PCLK_SEL_MASK (0x1 << 8)
#define RG_SENINF2_PCAM_PCLK_SEL_SHIFT 9
#define RG_SENINF2_PCAM_PCLK_SEL_MASK (0x1 << 9)
#define RG_SENINF1_PCAM_PCLK_EN_SHIFT 12
#define RG_SENINF1_PCAM_PCLK_EN_MASK (0x1 << 12)
#define RG_SENINF2_PCAM_PCLK_EN_SHIFT 13
#define RG_SENINF2_PCAM_PCLK_EN_MASK (0x1 << 13)
#define RG_SLICE_FIFO_FULL_OPT_SHIFT 16
#define RG_SLICE_FIFO_FULL_OPT_MASK (0x1 << 16)

#define SENINF_TOP_DBG_CTRL 0x0008
#define RG_SENINF_TOP_DBG_SEL_SHIFT 0
#define RG_SENINF_TOP_DBG_SEL_MASK (0x1f << 0)
#define RG_SENINF_TOP_DBG_BYTE0_SEL_SHIFT 16
#define RG_SENINF_TOP_DBG_BYTE0_SEL_MASK (0x3 << 16)
#define RG_SENINF_TOP_DBG_BYTE1_SEL_SHIFT 20
#define RG_SENINF_TOP_DBG_BYTE1_SEL_MASK (0x3 << 20)
#define RG_SENINF_TOP_DBG_BYTE2_SEL_SHIFT 24
#define RG_SENINF_TOP_DBG_BYTE2_SEL_MASK (0x3 << 24)
#define RG_SENINF_TOP_DBG_BYTE3_SEL_SHIFT 28
#define RG_SENINF_TOP_DBG_BYTE3_SEL_MASK (0x3 << 28)

#define SENINF_TOP_MUX_CTRL_0 0x0010
#define RG_SENINF_MUX1_SRC_SEL_SHIFT 0
#define RG_SENINF_MUX1_SRC_SEL_MASK (0x1f << 0)
#define RG_SENINF_MUX2_SRC_SEL_SHIFT 8
#define RG_SENINF_MUX2_SRC_SEL_MASK (0x1f << 8)
#define RG_SENINF_MUX3_SRC_SEL_SHIFT 16
#define RG_SENINF_MUX3_SRC_SEL_MASK (0x1f << 16)
#define RG_SENINF_MUX4_SRC_SEL_SHIFT 24
#define RG_SENINF_MUX4_SRC_SEL_MASK (0x1f << 24)

#define SENINF_TOP_MUX_CTRL_1 0x0014
#define RG_SENINF_MUX5_SRC_SEL_SHIFT 0
#define RG_SENINF_MUX5_SRC_SEL_MASK (0x1f << 0)
#define RG_SENINF_MUX6_SRC_SEL_SHIFT 8
#define RG_SENINF_MUX6_SRC_SEL_MASK (0x1f << 8)
#define RG_SENINF_MUX7_SRC_SEL_SHIFT 16
#define RG_SENINF_MUX7_SRC_SEL_MASK (0x1f << 16)
#define RG_SENINF_MUX8_SRC_SEL_SHIFT 24
#define RG_SENINF_MUX8_SRC_SEL_MASK (0x1f << 24)

#define SENINF_TOP_MUX_CTRL_2 0x0018
#define RG_SENINF_MUX9_SRC_SEL_SHIFT 0
#define RG_SENINF_MUX9_SRC_SEL_MASK (0x1f << 0)
#define RG_SENINF_MUX10_SRC_SEL_SHIFT 8
#define RG_SENINF_MUX10_SRC_SEL_MASK (0x1f << 8)
#define RG_SENINF_MUX11_SRC_SEL_SHIFT 16
#define RG_SENINF_MUX11_SRC_SEL_MASK (0x1f << 16)
#define RG_SENINF_MUX12_SRC_SEL_SHIFT 24
#define RG_SENINF_MUX12_SRC_SEL_MASK (0x1f << 24)

#define SENINF_TOP_MUX_CTRL_3 0x001c
#define RG_SENINF_MUX13_SRC_SEL_SHIFT 0
#define RG_SENINF_MUX13_SRC_SEL_MASK (0x1f << 0)
#define RG_SENINF_MUX14_SRC_SEL_SHIFT 8
#define RG_SENINF_MUX14_SRC_SEL_MASK (0x1f << 8)
#define RG_SENINF_MUX15_SRC_SEL_SHIFT 16
#define RG_SENINF_MUX15_SRC_SEL_MASK (0x1f << 16)
#define RG_SENINF_MUX16_SRC_SEL_SHIFT 24
#define RG_SENINF_MUX16_SRC_SEL_MASK (0x1f << 24)

#define SENINF_TOP_MUX_CTRL_4 0x0020
#define RG_SENINF_MUX17_SRC_SEL_SHIFT 0
#define RG_SENINF_MUX17_SRC_SEL_MASK (0x1f << 0)
#define RG_SENINF_MUX18_SRC_SEL_SHIFT 8
#define RG_SENINF_MUX18_SRC_SEL_MASK (0x1f << 8)
#define RG_SENINF_MUX19_SRC_SEL_SHIFT 16
#define RG_SENINF_MUX19_SRC_SEL_MASK (0x1f << 16)
#define RG_SENINF_MUX20_SRC_SEL_SHIFT 24
#define RG_SENINF_MUX20_SRC_SEL_MASK (0x1f << 24)

#define SENINF_TOP_MUX_CTRL_5 0x0024
#define RG_SENINF_MUX21_SRC_SEL_SHIFT 0
#define RG_SENINF_MUX21_SRC_SEL_MASK (0x1f << 0)
#define RG_SENINF_MUX22_SRC_SEL_SHIFT 8
#define RG_SENINF_MUX22_SRC_SEL_MASK (0x1f << 8)

#define SENINF_TOP_PHY_CTRL_CSI0 0x0040
#define PHY_SENINF_MUX0_DPHY_EN_SHIFT 0
#define PHY_SENINF_MUX0_DPHY_EN_MASK (0x1 << 0)
#define PHY_SENINF_MUX0_CPHY_EN_SHIFT 1
#define PHY_SENINF_MUX0_CPHY_EN_MASK (0x1 << 1)
#define RG_PHY_SENINF_MUX0_CPHY_MODE_SHIFT 8
#define RG_PHY_SENINF_MUX0_CPHY_MODE_MASK (0x3 << 8)

#define SENINF_TOP_PHY_CTRL_CSI1 0x0044
#define PHY_SENINF_MUX1_DPHY_EN_SHIFT 0
#define PHY_SENINF_MUX1_DPHY_EN_MASK (0x1 << 0)
#define PHY_SENINF_MUX1_CPHY_EN_SHIFT 1
#define PHY_SENINF_MUX1_CPHY_EN_MASK (0x1 << 1)
#define RG_PHY_SENINF_MUX1_CPHY_MODE_SHIFT 8
#define RG_PHY_SENINF_MUX1_CPHY_MODE_MASK (0x3 << 8)

#define SENINF_TOP_PHY_CTRL_CSI2 0x0048
#define PHY_SENINF_MUX2_DPHY_EN_SHIFT 0
#define PHY_SENINF_MUX2_DPHY_EN_MASK (0x1 << 0)
#define PHY_SENINF_MUX2_CPHY_EN_SHIFT 1
#define PHY_SENINF_MUX2_CPHY_EN_MASK (0x1 << 1)
#define RG_PHY_SENINF_MUX2_CPHY_MODE_SHIFT 8
#define RG_PHY_SENINF_MUX2_CPHY_MODE_MASK (0x3 << 8)

#define SENINF_TOP_PHY_CTRL_CSI3 0x004c
#define PHY_SENINF_MUX3_DPHY_EN_SHIFT 0
#define PHY_SENINF_MUX3_DPHY_EN_MASK (0x1 << 0)
#define PHY_SENINF_MUX3_CPHY_EN_SHIFT 1
#define PHY_SENINF_MUX3_CPHY_EN_MASK (0x1 << 1)
#define RG_PHY_SENINF_MUX3_CPHY_MODE_SHIFT 8
#define RG_PHY_SENINF_MUX3_CPHY_MODE_MASK (0x3 << 8)

#define SENINF_TOP_PHY_CTRL_CSI4 0x0050
#define PHY_SENINF_MUX4_DPHY_EN_SHIFT 0
#define PHY_SENINF_MUX4_DPHY_EN_MASK (0x1 << 0)
#define PHY_SENINF_MUX4_CPHY_EN_SHIFT 1
#define PHY_SENINF_MUX4_CPHY_EN_MASK (0x1 << 1)
#define RG_PHY_SENINF_MUX4_CPHY_MODE_SHIFT 8
#define RG_PHY_SENINF_MUX4_CPHY_MODE_MASK (0x3 << 8)

#define SENINF_TOP_PHY_CTRL_CSI5 0x0054
#define PHY_SENINF_MUX5_DPHY_EN_SHIFT 0
#define PHY_SENINF_MUX5_DPHY_EN_MASK (0x1 << 0)
#define PHY_SENINF_MUX5_CPHY_EN_SHIFT 1
#define PHY_SENINF_MUX5_CPHY_EN_MASK (0x1 << 1)
#define RG_PHY_SENINF_MUX5_CPHY_MODE_SHIFT 8
#define RG_PHY_SENINF_MUX5_CPHY_MODE_MASK (0x3 << 8)

#define SENINF_TOP_N3D_A_CTRL 0x0070
#define RG_N3D_SENINF1_VSYNC_SRC_SEL_A_SHIFT 0
#define RG_N3D_SENINF1_VSYNC_SRC_SEL_A_MASK (0xf << 0)
#define RG_N3D_SENINF2_VSYNC_SRC_SEL_A_SHIFT 8
#define RG_N3D_SENINF2_VSYNC_SRC_SEL_A_MASK (0xf << 8)

#define SENINF_TOP_N3D_B_CTRL 0x0074
#define RG_N3D_SENINF1_VSYNC_SRC_SEL_B_SHIFT 0
#define RG_N3D_SENINF1_VSYNC_SRC_SEL_B_MASK (0xf << 0)
#define RG_N3D_SENINF2_VSYNC_SRC_SEL_B_SHIFT 8
#define RG_N3D_SENINF2_VSYNC_SRC_SEL_B_MASK (0xf << 8)

#define SENINF_TOP_PHY_CHK_EN 0x0090
#define PHY_SENINF_MUX0_PHYD2MAC_DPHY_CHK_EN_SHIFT 0
#define PHY_SENINF_MUX0_PHYD2MAC_DPHY_CHK_EN_MASK (0x1 << 0)
#define PHY_SENINF_MUX1_PHYD2MAC_DPHY_CHK_EN_SHIFT 1
#define PHY_SENINF_MUX1_PHYD2MAC_DPHY_CHK_EN_MASK (0x1 << 1)
#define PHY_SENINF_MUX2_PHYD2MAC_DPHY_CHK_EN_SHIFT 2
#define PHY_SENINF_MUX2_PHYD2MAC_DPHY_CHK_EN_MASK (0x1 << 2)
#define PHY_SENINF_MUX3_PHYD2MAC_DPHY_CHK_EN_SHIFT 3
#define PHY_SENINF_MUX3_PHYD2MAC_DPHY_CHK_EN_MASK (0x1 << 3)
#define PHY_SENINF_MUX4_PHYD2MAC_DPHY_CHK_EN_SHIFT 4
#define PHY_SENINF_MUX4_PHYD2MAC_DPHY_CHK_EN_MASK (0x1 << 4)
#define PHY_SENINF_MUX5_PHYD2MAC_DPHY_CHK_EN_SHIFT 5
#define PHY_SENINF_MUX5_PHYD2MAC_DPHY_CHK_EN_MASK (0x1 << 5)
#define PHY_SENINF_MUX0_PHYD2MAC_CPHY_CHK_EN_SHIFT 8
#define PHY_SENINF_MUX0_PHYD2MAC_CPHY_CHK_EN_MASK (0x1 << 8)
#define PHY_SENINF_MUX1_PHYD2MAC_CPHY_CHK_EN_SHIFT 9
#define PHY_SENINF_MUX1_PHYD2MAC_CPHY_CHK_EN_MASK (0x1 << 9)
#define PHY_SENINF_MUX2_PHYD2MAC_CPHY_CHK_EN_SHIFT 10
#define PHY_SENINF_MUX2_PHYD2MAC_CPHY_CHK_EN_MASK (0x1 << 10)
#define PHY_SENINF_MUX3_PHYD2MAC_CPHY_CHK_EN_SHIFT 11
#define PHY_SENINF_MUX3_PHYD2MAC_CPHY_CHK_EN_MASK (0x1 << 11)
#define PHY_SENINF_MUX4_PHYD2MAC_CPHY_CHK_EN_SHIFT 12
#define PHY_SENINF_MUX4_PHYD2MAC_CPHY_CHK_EN_MASK (0x1 << 12)
#define PHY_SENINF_MUX5_PHYD2MAC_CPHY_CHK_EN_SHIFT 13
#define PHY_SENINF_MUX5_PHYD2MAC_CPHY_CHK_EN_MASK (0x1 << 13)

#define SENINF_TOP_PHY_CHK_MODE 0x0094
#define RG_PHY_SENINF_MUX0_PHYD2MAC_DPHY_CHK_MODE_SHIFT 0
#define RG_PHY_SENINF_MUX0_PHYD2MAC_DPHY_CHK_MODE_MASK (0x1 << 0)
#define RG_PHY_SENINF_MUX1_PHYD2MAC_DPHY_CHK_MODE_SHIFT 1
#define RG_PHY_SENINF_MUX1_PHYD2MAC_DPHY_CHK_MODE_MASK (0x1 << 1)
#define RG_PHY_SENINF_MUX2_PHYD2MAC_DPHY_CHK_MODE_SHIFT 2
#define RG_PHY_SENINF_MUX2_PHYD2MAC_DPHY_CHK_MODE_MASK (0x1 << 2)
#define RG_PHY_SENINF_MUX3_PHYD2MAC_DPHY_CHK_MODE_SHIFT 3
#define RG_PHY_SENINF_MUX3_PHYD2MAC_DPHY_CHK_MODE_MASK (0x1 << 3)
#define RG_PHY_SENINF_MUX4_PHYD2MAC_DPHY_CHK_MODE_SHIFT 4
#define RG_PHY_SENINF_MUX4_PHYD2MAC_DPHY_CHK_MODE_MASK (0x1 << 4)
#define RG_PHY_SENINF_MUX5_PHYD2MAC_DPHY_CHK_MODE_SHIFT 5
#define RG_PHY_SENINF_MUX5_PHYD2MAC_DPHY_CHK_MODE_MASK (0x1 << 5)
#define RG_PHY_SENINF_MUX0_PHYD2MAC_CPHY_CHK_MODE_SHIFT 8
#define RG_PHY_SENINF_MUX0_PHYD2MAC_CPHY_CHK_MODE_MASK (0x1 << 8)
#define RG_PHY_SENINF_MUX1_PHYD2MAC_CPHY_CHK_MODE_SHIFT 9
#define RG_PHY_SENINF_MUX1_PHYD2MAC_CPHY_CHK_MODE_MASK (0x1 << 9)
#define RG_PHY_SENINF_MUX2_PHYD2MAC_CPHY_CHK_MODE_SHIFT 10
#define RG_PHY_SENINF_MUX2_PHYD2MAC_CPHY_CHK_MODE_MASK (0x1 << 10)
#define RG_PHY_SENINF_MUX3_PHYD2MAC_CPHY_CHK_MODE_SHIFT 11
#define RG_PHY_SENINF_MUX3_PHYD2MAC_CPHY_CHK_MODE_MASK (0x1 << 11)
#define RG_PHY_SENINF_MUX4_PHYD2MAC_CPHY_CHK_MODE_SHIFT 12
#define RG_PHY_SENINF_MUX4_PHYD2MAC_CPHY_CHK_MODE_MASK (0x1 << 12)
#define RG_PHY_SENINF_MUX5_PHYD2MAC_CPHY_CHK_MODE_SHIFT 13
#define RG_PHY_SENINF_MUX5_PHYD2MAC_CPHY_CHK_MODE_MASK (0x1 << 13)

#define SENINF_TOP_PHY_CHK_RES0 0x00a0
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L0_CHK_DONE_SHIFT 0
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L0_CHK_DONE_MASK (0x1 << 0)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L0_CHK_DONE_SHIFT 1
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L0_CHK_DONE_MASK (0x1 << 1)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L0_CHK_DONE_SHIFT 2
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L0_CHK_DONE_MASK (0x1 << 2)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L0_CHK_DONE_SHIFT 3
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L0_CHK_DONE_MASK (0x1 << 3)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L0_CHK_DONE_SHIFT 4
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L0_CHK_DONE_MASK (0x1 << 4)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L0_CHK_DONE_SHIFT 5
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L0_CHK_DONE_MASK (0x1 << 5)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L1_CHK_DONE_SHIFT 8
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L1_CHK_DONE_MASK (0x1 << 8)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L1_CHK_DONE_SHIFT 9
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L1_CHK_DONE_MASK (0x1 << 9)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L1_CHK_DONE_SHIFT 10
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L1_CHK_DONE_MASK (0x1 << 10)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L1_CHK_DONE_SHIFT 11
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L1_CHK_DONE_MASK (0x1 << 11)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L1_CHK_DONE_SHIFT 12
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L1_CHK_DONE_MASK (0x1 << 12)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L1_CHK_DONE_SHIFT 13
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L1_CHK_DONE_MASK (0x1 << 13)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L2_CHK_DONE_SHIFT 16
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L2_CHK_DONE_MASK (0x1 << 16)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L2_CHK_DONE_SHIFT 17
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L2_CHK_DONE_MASK (0x1 << 17)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L2_CHK_DONE_SHIFT 18
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L2_CHK_DONE_MASK (0x1 << 18)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L2_CHK_DONE_SHIFT 19
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L2_CHK_DONE_MASK (0x1 << 19)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L2_CHK_DONE_SHIFT 20
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L2_CHK_DONE_MASK (0x1 << 20)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L2_CHK_DONE_SHIFT 21
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L2_CHK_DONE_MASK (0x1 << 21)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L3_CHK_DONE_SHIFT 24
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L3_CHK_DONE_MASK (0x1 << 24)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L3_CHK_DONE_SHIFT 25
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L3_CHK_DONE_MASK (0x1 << 25)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L3_CHK_DONE_SHIFT 26
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L3_CHK_DONE_MASK (0x1 << 26)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L3_CHK_DONE_SHIFT 27
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L3_CHK_DONE_MASK (0x1 << 27)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L3_CHK_DONE_SHIFT 28
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L3_CHK_DONE_MASK (0x1 << 28)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L3_CHK_DONE_SHIFT 29
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L3_CHK_DONE_MASK (0x1 << 29)

#define SENINF_TOP_PHY_CHK_RES1 0x00a4
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L0_CHK_FAIL_SHIFT 0
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L0_CHK_FAIL_MASK (0x1 << 0)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L0_CHK_FAIL_SHIFT 1
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L0_CHK_FAIL_MASK (0x1 << 1)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L0_CHK_FAIL_SHIFT 2
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L0_CHK_FAIL_MASK (0x1 << 2)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L0_CHK_FAIL_SHIFT 3
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L0_CHK_FAIL_MASK (0x1 << 3)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L0_CHK_FAIL_SHIFT 4
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L0_CHK_FAIL_MASK (0x1 << 4)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L0_CHK_FAIL_SHIFT 5
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L0_CHK_FAIL_MASK (0x1 << 5)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L1_CHK_FAIL_SHIFT 8
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L1_CHK_FAIL_MASK (0x1 << 8)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L1_CHK_FAIL_SHIFT 9
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L1_CHK_FAIL_MASK (0x1 << 9)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L1_CHK_FAIL_SHIFT 10
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L1_CHK_FAIL_MASK (0x1 << 10)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L1_CHK_FAIL_SHIFT 11
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L1_CHK_FAIL_MASK (0x1 << 11)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L1_CHK_FAIL_SHIFT 12
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L1_CHK_FAIL_MASK (0x1 << 12)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L1_CHK_FAIL_SHIFT 13
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L1_CHK_FAIL_MASK (0x1 << 13)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L2_CHK_FAIL_SHIFT 16
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L2_CHK_FAIL_MASK (0x1 << 16)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L2_CHK_FAIL_SHIFT 17
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L2_CHK_FAIL_MASK (0x1 << 17)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L2_CHK_FAIL_SHIFT 18
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L2_CHK_FAIL_MASK (0x1 << 18)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L2_CHK_FAIL_SHIFT 19
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L2_CHK_FAIL_MASK (0x1 << 19)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L2_CHK_FAIL_SHIFT 20
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L2_CHK_FAIL_MASK (0x1 << 20)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L2_CHK_FAIL_SHIFT 21
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L2_CHK_FAIL_MASK (0x1 << 21)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L3_CHK_FAIL_SHIFT 24
#define RO_PHY_SENINF_MUX0_PHYD2MAC_DPHY_L3_CHK_FAIL_MASK (0x1 << 24)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L3_CHK_FAIL_SHIFT 25
#define RO_PHY_SENINF_MUX1_PHYD2MAC_DPHY_L3_CHK_FAIL_MASK (0x1 << 25)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L3_CHK_FAIL_SHIFT 26
#define RO_PHY_SENINF_MUX2_PHYD2MAC_DPHY_L3_CHK_FAIL_MASK (0x1 << 26)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L3_CHK_FAIL_SHIFT 27
#define RO_PHY_SENINF_MUX3_PHYD2MAC_DPHY_L3_CHK_FAIL_MASK (0x1 << 27)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L3_CHK_FAIL_SHIFT 28
#define RO_PHY_SENINF_MUX4_PHYD2MAC_DPHY_L3_CHK_FAIL_MASK (0x1 << 28)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L3_CHK_FAIL_SHIFT 29
#define RO_PHY_SENINF_MUX5_PHYD2MAC_DPHY_L3_CHK_FAIL_MASK (0x1 << 29)

#define SENINF_TOP_PHY_CHK_RES2 0x00a8
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T0_CHK_DONE_SHIFT 0
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T0_CHK_DONE_MASK (0x1 << 0)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T0_CHK_DONE_SHIFT 1
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T0_CHK_DONE_MASK (0x1 << 1)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T0_CHK_DONE_SHIFT 2
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T0_CHK_DONE_MASK (0x1 << 2)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T0_CHK_DONE_SHIFT 3
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T0_CHK_DONE_MASK (0x1 << 3)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T0_CHK_DONE_SHIFT 4
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T0_CHK_DONE_MASK (0x1 << 4)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T0_CHK_DONE_SHIFT 5
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T0_CHK_DONE_MASK (0x1 << 5)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T1_CHK_DONE_SHIFT 8
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T1_CHK_DONE_MASK (0x1 << 8)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T1_CHK_DONE_SHIFT 9
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T1_CHK_DONE_MASK (0x1 << 9)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T1_CHK_DONE_SHIFT 10
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T1_CHK_DONE_MASK (0x1 << 10)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T1_CHK_DONE_SHIFT 11
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T1_CHK_DONE_MASK (0x1 << 11)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T1_CHK_DONE_SHIFT 12
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T1_CHK_DONE_MASK (0x1 << 12)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T1_CHK_DONE_SHIFT 13
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T1_CHK_DONE_MASK (0x1 << 13)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T2_CHK_DONE_SHIFT 16
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T2_CHK_DONE_MASK (0x1 << 16)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T2_CHK_DONE_SHIFT 17
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T2_CHK_DONE_MASK (0x1 << 17)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T2_CHK_DONE_SHIFT 18
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T2_CHK_DONE_MASK (0x1 << 18)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T2_CHK_DONE_SHIFT 19
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T2_CHK_DONE_MASK (0x1 << 19)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T2_CHK_DONE_SHIFT 20
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T2_CHK_DONE_MASK (0x1 << 20)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T2_CHK_DONE_SHIFT 21
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T2_CHK_DONE_MASK (0x1 << 21)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T3_CHK_DONE_SHIFT 24
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T3_CHK_DONE_MASK (0x1 << 24)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T3_CHK_DONE_SHIFT 25
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T3_CHK_DONE_MASK (0x1 << 25)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T3_CHK_DONE_SHIFT 26
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T3_CHK_DONE_MASK (0x1 << 26)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T3_CHK_DONE_SHIFT 27
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T3_CHK_DONE_MASK (0x1 << 27)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T3_CHK_DONE_SHIFT 28
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T3_CHK_DONE_MASK (0x1 << 28)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T3_CHK_DONE_SHIFT 29
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T3_CHK_DONE_MASK (0x1 << 29)

#define SENINF_TOP_PHY_CHK_RES3 0x00ac
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T0_CHK_FAIL_SHIFT 0
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T0_CHK_FAIL_MASK (0x1 << 0)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T0_CHK_FAIL_SHIFT 1
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T0_CHK_FAIL_MASK (0x1 << 1)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T0_CHK_FAIL_SHIFT 2
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T0_CHK_FAIL_MASK (0x1 << 2)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T0_CHK_FAIL_SHIFT 3
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T0_CHK_FAIL_MASK (0x1 << 3)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T0_CHK_FAIL_SHIFT 4
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T0_CHK_FAIL_MASK (0x1 << 4)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T0_CHK_FAIL_SHIFT 5
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T0_CHK_FAIL_MASK (0x1 << 5)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T1_CHK_FAIL_SHIFT 8
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T1_CHK_FAIL_MASK (0x1 << 8)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T1_CHK_FAIL_SHIFT 9
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T1_CHK_FAIL_MASK (0x1 << 9)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T1_CHK_FAIL_SHIFT 10
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T1_CHK_FAIL_MASK (0x1 << 10)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T1_CHK_FAIL_SHIFT 11
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T1_CHK_FAIL_MASK (0x1 << 11)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T1_CHK_FAIL_SHIFT 12
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T1_CHK_FAIL_MASK (0x1 << 12)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T1_CHK_FAIL_SHIFT 13
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T1_CHK_FAIL_MASK (0x1 << 13)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T2_CHK_FAIL_SHIFT 16
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T2_CHK_FAIL_MASK (0x1 << 16)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T2_CHK_FAIL_SHIFT 17
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T2_CHK_FAIL_MASK (0x1 << 17)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T2_CHK_FAIL_SHIFT 18
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T2_CHK_FAIL_MASK (0x1 << 18)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T2_CHK_FAIL_SHIFT 19
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T2_CHK_FAIL_MASK (0x1 << 19)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T2_CHK_FAIL_SHIFT 20
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T2_CHK_FAIL_MASK (0x1 << 20)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T2_CHK_FAIL_SHIFT 21
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T2_CHK_FAIL_MASK (0x1 << 21)
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T3_CHK_FAIL_SHIFT 24
#define RO_PHY_SENINF_MUX0_PHYD2MAC_CPHY_T3_CHK_FAIL_MASK (0x1 << 24)
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T3_CHK_FAIL_SHIFT 25
#define RO_PHY_SENINF_MUX1_PHYD2MAC_CPHY_T3_CHK_FAIL_MASK (0x1 << 25)
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T3_CHK_FAIL_SHIFT 26
#define RO_PHY_SENINF_MUX2_PHYD2MAC_CPHY_T3_CHK_FAIL_MASK (0x1 << 26)
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T3_CHK_FAIL_SHIFT 27
#define RO_PHY_SENINF_MUX3_PHYD2MAC_CPHY_T3_CHK_FAIL_MASK (0x1 << 27)
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T3_CHK_FAIL_SHIFT 28
#define RO_PHY_SENINF_MUX4_PHYD2MAC_CPHY_T3_CHK_FAIL_MASK (0x1 << 28)
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T3_CHK_FAIL_SHIFT 29
#define RO_PHY_SENINF_MUX5_PHYD2MAC_CPHY_T3_CHK_FAIL_MASK (0x1 << 29)

#define SENINF_TOP_PHY_SENINF_MUX0_DBG_CTRL 0x00c0
#define RG_PHY_SENINF_MUX0_DBG_EN_SHIFT 0
#define RG_PHY_SENINF_MUX0_DBG_EN_MASK (0x1 << 0)
#define RG_PHY_SENINF_MUX0_DBG_SEL_SHIFT 8
#define RG_PHY_SENINF_MUX0_DBG_SEL_MASK (0x1f << 8)

#define SENINF_TOP_PHY_SENINF_MUX0_DBG_OUT 0x00c4
#define RO_PHY_SENINF_MUX0_DBG_OUT_SHIFT 0
#define RO_PHY_SENINF_MUX0_DBG_OUT_MASK (0xffffffff << 0)

#define SENINF_TOP_PHY_SENINF_MUX1_DBG_CTRL 0x00c8
#define RG_PHY_SENINF_MUX1_DBG_EN_SHIFT 0
#define RG_PHY_SENINF_MUX1_DBG_EN_MASK (0x1 << 0)
#define RG_PHY_SENINF_MUX1_DBG_SEL_SHIFT 8
#define RG_PHY_SENINF_MUX1_DBG_SEL_MASK (0x1f << 8)

#define SENINF_TOP_PHY_SENINF_MUX1_DBG_OUT 0x00cc
#define RO_PHY_SENINF_MUX2_DBG_OUT_SHIFT 0
#define RO_PHY_SENINF_MUX2_DBG_OUT_MASK (0xffffffff << 0)

#define SENINF_TOP_PHY_SENINF_MUX2_DBG_CTRL 0x00d0
#define RG_PHY_SENINF_MUX2_DBG_EN_SHIFT 0
#define RG_PHY_SENINF_MUX2_DBG_EN_MASK (0x1 << 0)
#define RG_PHY_SENINF_MUX2_DBG_SEL_SHIFT 8
#define RG_PHY_SENINF_MUX2_DBG_SEL_MASK (0x1f << 8)

#define SENINF_TOP_PHY_SENINF_MUX2_DBG_OUT 0x00d4
#define RO_PHY_SENINF_MUX2_DBG_OUT_SHIFT 0
#define RO_PHY_SENINF_MUX2_DBG_OUT_MASK (0xffffffff << 0)

#define SENINF_TOP_PHY_SENINF_MUX3_DBG_CTRL 0x00d8
#define RG_PHY_SENINF_MUX3_DBG_EN_SHIFT 0
#define RG_PHY_SENINF_MUX3_DBG_EN_MASK (0x1 << 0)
#define RG_PHY_SENINF_MUX3_DBG_SEL_SHIFT 8
#define RG_PHY_SENINF_MUX3_DBG_SEL_MASK (0x1f << 8)

#define SENINF_TOP_PHY_SENINF_MUX3_DBG_OUT 0x00dc
#define RO_PHY_SENINF_MUX3_DBG_OUT_SHIFT 0
#define RO_PHY_SENINF_MUX3_DBG_OUT_MASK (0xffffffff << 0)

#define SENINF_TOP_PHY_SENINF_MUX4_DBG_CTRL 0x00e0
#define RG_PHY_SENINF_MUX4_DBG_EN_SHIFT 0
#define RG_PHY_SENINF_MUX4_DBG_EN_MASK (0x1 << 0)
#define RG_PHY_SENINF_MUX4_DBG_SEL_SHIFT 8
#define RG_PHY_SENINF_MUX4_DBG_SEL_MASK (0x1f << 8)

#define SENINF_TOP_PHY_SENINF_MUX4_DBG_OUT 0x00e4
#define RO_PHY_SENINF_MUX4_DBG_OUT_SHIFT 0
#define RO_PHY_SENINF_MUX4_DBG_OUT_MASK (0xffffffff << 0)

#define SENINF_TOP_PHY_SENINF_MUX5_DBG_CTRL 0x00e8
#define RG_PHY_SENINF_MUX5_DBG_EN_SHIFT 0
#define RG_PHY_SENINF_MUX5_DBG_EN_MASK (0x1 << 0)
#define RG_PHY_SENINF_MUX5_DBG_SEL_SHIFT 8
#define RG_PHY_SENINF_MUX5_DBG_SEL_MASK (0x1f << 8)

#define SENINF_TOP_PHY_SENINF_MUX5_DBG_OUT 0x00ec
#define RO_PHY_SENINF_MUX5_DBG_OUT_SHIFT 0
#define RO_PHY_SENINF_MUX5_DBG_OUT_MASK (0xffffffff << 0)

#define SENINF_TOP_SPARE 0x00f8
#define RG_SENINF_TOP_SPARE_0_SHIFT 0
#define RG_SENINF_TOP_SPARE_0_MASK (0xff << 0)
#define RG_SENINF_TOP_SPARE_1_SHIFT 16
#define RG_SENINF_TOP_SPARE_1_MASK (0xff << 16)

#define SENINF_TOP_FIFO_THRESH 0x00fc
#define RG_FIFO_ALMOST_FULL_THRESHOLD_SHIFT 0
#define RG_FIFO_ALMOST_FULL_THRESHOLD_MASK (0xffff << 0)
#define RG_FIFO_ALMOST_FULL_PULSE_WIDTH_SHIFT 16
#define RG_FIFO_ALMOST_FULL_PULSE_WIDTH_MASK (0xffff << 16)

#endif
