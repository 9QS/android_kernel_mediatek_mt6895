/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 *
 */

#ifndef _DT_BINDINGS_GCE_MT6885_H
#define _DT_BINDINGS_GCE_MT6885_H

/* assign timeout 0 also means default */
#define CMDQ_NO_TIMEOUT		0xffffffff
#define CMDQ_TIMEOUT_DEFAULT	1000

/* GCE thread priority */
#define CMDQ_THR_PRIO_LOWEST	0
#define CMDQ_THR_PRIO_1		1
#define CMDQ_THR_PRIO_2		2
#define CMDQ_THR_PRIO_3		3
#define CMDQ_THR_PRIO_4		4
#define CMDQ_THR_PRIO_5		5
#define CMDQ_THR_PRIO_6		6
#define CMDQ_THR_PRIO_HIGHEST	7

/* CPR count in 32bit register */
#define GCE_CPR_COUNT		1312

/* GCE subsys table */
#define SUBSYS_1300XXXX		0
#define SUBSYS_1400XXXX		1
#define SUBSYS_1401XXXX		2
#define SUBSYS_1402XXXX		3
#define SUBSYS_1502XXXX		4
#define SUBSYS_1880XXXX		5
#define SUBSYS_1881XXXX		6
#define SUBSYS_1882XXXX		7
#define SUBSYS_1883XXXX		8
#define SUBSYS_1884XXXX		9
#define SUBSYS_1000XXXX		10
#define SUBSYS_1001XXXX		11
#define SUBSYS_1002XXXX		12
#define SUBSYS_1003XXXX		13
#define SUBSYS_1004XXXX		14
#define SUBSYS_1005XXXX		15
#define SUBSYS_1020XXXX		16
#define SUBSYS_1028XXXX		17
#define SUBSYS_1700XXXX		18
#define SUBSYS_1701XXXX		19
#define SUBSYS_1702XXXX		20
#define SUBSYS_1703XXXX		21
#define SUBSYS_1800XXXX		22
#define SUBSYS_1801XXXX		23
#define SUBSYS_1802XXXX		24
#define SUBSYS_1804XXXX		25
#define SUBSYS_1805XXXX		26
#define SUBSYS_1808XXXX		27
#define SUBSYS_180aXXXX		28
#define SUBSYS_180bXXXX		29
#define SUBSYS_NO_SUPPORT	99

/* GCE General Purpose Register (GPR) support
 * Leave note for scenario usage here
 */
/* GCE: write mask */
#define GCE_GPR_R00		0x00
#define GCE_GPR_R01		0x01
/* MDP: P1: JPEG dest */
#define GCE_GPR_R02		0x02
#define GCE_GPR_R03		0x03
/* MDP: PQ color */
#define GCE_GPR_R04		0x04
/* MDP: 2D sharpness */
#define GCE_GPR_R05		0x05
/* DISP: poll esd */
#define GCE_GPR_R06		0x06
#define GCE_GPR_R07		0x07
/* MDP: P4: 2D sharpness dst */
#define GCE_GPR_R08		0x08
#define GCE_GPR_R09		0x09
/* VCU: poll with timeout for GPR timer */
#define GCE_GPR_R10		0x0A
#define GCE_GPR_R11		0x0B
/* CMDQ: debug */
#define GCE_GPR_R12		0x0C
#define GCE_GPR_R13		0x0D
/* CMDQ: P7: debug */
#define GCE_GPR_R14		0x0E
#define GCE_GPR_R15		0x0F

/* GCE-D hardware events */
#define CMDQ_EVENT_DISP_OVL0_SOF			0
#define CMDQ_EVENT_DISP_OVL0_2L_SOF			1
#define CMDQ_EVENT_DISP_RDMA0_SOF			2
#define CMDQ_EVENT_DISP_WDMA0_SOF			3
#define CMDQ_EVENT_DISP_COLOR0_SOF			4
#define CMDQ_EVENT_DISP_CCORR0_SOF			5
#define CMDQ_EVENT_DISP_AAL0_SOF			6
#define CMDQ_EVENT_DISP_GAMMA0_SOF			7
#define CMDQ_EVENT_DISP_DITHER0_SOF			8
#define CMDQ_EVENT_DSI0_SOF				9
#define CMDQ_EVENT_DISP_RSZ0_SOF			10
#define CMDQ_EVENT_DISP_PWM0_SOF			11
#define CMDQ_EVENT_DISP_OVL1_SOF			12
#define CMDQ_EVENT_DISP_OVL1_2L_SOF			13
#define CMDQ_EVENT_DISP_RDMA1_SOF			14
#define CMDQ_EVENT_DISP_WDMA1_SOF			15
#define CMDQ_EVENT_DISP_COLOR1_SOF			16
#define CMDQ_EVENT_DISP_CCORR1_SOF			17
#define CMDQ_EVENT_DISP_AAL1_SOF			18
#define CMDQ_EVENT_DISP_GAMMA1_SOF			19
#define CMDQ_EVENT_DISP_DITHER1_SOF			20
#define CMDQ_EVENT_DSI1_SOF				21
#define CMDQ_EVENT_DISP_RSZ1_SOF			22
#define CMDQ_EVENT_DISP_OVL2_2L_SOF			23
#define CMDQ_EVENT_DISP_OVL3_2L_SOF			24
#define CMDQ_EVENT_DISP_POSTMASK0_SOF			25
#define CMDQ_EVENT_DISP_POSTMASK1_SOF			26
#define CMDQ_EVENT_DISP_MERGE0_SOF			27
#define CMDQ_EVENT_DISP_MERGE1_SOF			28
#define CMDQ_EVENT_DISP_DSC_WRAP_SOF			29
#define CMDQ_EVENT_DISP_DSC_WRAP_1_SOF			30
#define CMDQ_EVENT_DP_INTF_SOF				31
#define CMDQ_EVENT_MDP_AAL4_SOF				32
#define CMDQ_EVENT_MDP_AAL5_SOF				33
#define CMDQ_EVENT_MDP_RDMA4_SOF			34
#define CMDQ_EVENT_MDP_RDMA5_SOF			35
#define CMDQ_EVENT_MDP_HDR4_SOF				36
#define CMDQ_EVENT_MDP_HDR5_SOF				37
#define CMDQ_EVENT_MDP_RSZ4_SOF				38
#define CMDQ_EVENT_MDP_RSZ5_SOF				39
#define CMDQ_EVENT_MDP_TDSHP4_SOF			40
#define CMDQ_EVENT_MDP_TDSHP5_SOF			41
#define CMDQ_EVENT_DISP_RDMA4_SOF			42
#define CMDQ_EVENT_DISP_RDMA5_SOF			43
#define CMDQ_EVENT_DISP_UFBC_WDMA0_SOF			44
#define CMDQ_EVENT_DISP_UFBC_WDMA1_SOF			45
#define CMDQ_EVENT_MDP_TDSHP5_FRAME_DONE		46
#define CMDQ_EVENT_MDP_TDSHP4_FRAME_DONE		47
#define CMDQ_EVENT_MDP_RSZ5_FRAME_DONE			48
#define CMDQ_EVENT_MDP_RSZ4_FRAME_DONE			49
#define CMDQ_EVENT_MDP_RDMA5_FRAME_DONE			50
#define CMDQ_EVENT_MDP_RDMA4_FRAME_DONE			51
#define CMDQ_EVENT_MDP_HDR5_FRAME_DONE			52
#define CMDQ_EVENT_MDP_HDR4_FRAME_DONE			53
#define CMDQ_EVENT_MDP_AAL5_FRAME_DONE			54
#define CMDQ_EVENT_MDP_AAL4_FRAME_DONE			55
#define CMDQ_EVENT_DSI1_FRAME_DONE			56
#define CMDQ_EVENT_DSI0_FRAME_DONE			57
#define CMDQ_EVENT_DP_INTF_FRAME_DONE_MM		58
#define CMDQ_EVENT_DISP_WDMA1_FRAME_DONE		59
#define CMDQ_EVENT_DISP_WDMA0_FRAME_DONE		60
#define CMDQ_EVENT_DISP_RSZ1_FRAME_DONE			61
#define CMDQ_EVENT_DISP_RSZ0_FRAME_DONE			62
#define CMDQ_EVENT_DISP_RDMA5_FRAME_DONE		63
#define CMDQ_EVENT_DISP_RDMA4_FRAME_DONE		64
#define CMDQ_EVENT_DISP_RDMA3_FRAME_DONE		65
#define CMDQ_EVENT_DISP_RDMA2_FRAME_DONE		66
#define CMDQ_EVENT_DISP_RDMA1_FRAME_DONE		67
#define CMDQ_EVENT_DISP_RDMA0_FRAME_DONE		68
#define CMDQ_EVENT_DISP_POSTMASK1_FRAME_DONE		69
#define CMDQ_EVENT_DISP_POSTMASK0_FRAME_DONE		70
#define CMDQ_EVENT_DISP_OVL3_2L_FRAME_DONE		71
#define CMDQ_EVENT_DISP_OVL2_2L_FRAME_DONE		72
#define CMDQ_EVENT_DISP_OVL1_FRAME_DONE			73
#define CMDQ_EVENT_DISP_OVL1_2L_FRAME_DONE		74
#define CMDQ_EVENT_DISP_OVL0_FRAME_DONE			75
#define CMDQ_EVENT_DISP_OVL0_2L_FRAME_DONE		76
#define CMDQ_EVENT_DISP_GAMMA1_FRAME_DONE		77
#define CMDQ_EVENT_DISP_GAMMA0_FRAME_DONE		78
#define CMDQ_EVENT_DISP_DITHER1_FRAME_DONE		79
#define CMDQ_EVENT_DISP_DITHER0_FRAME_DONE		80
#define CMDQ_EVENT_DISP_COLOR1_FRAME_DONE		81
#define CMDQ_EVENT_DISP_COLOR0_FRAME_DONE		82
#define CMDQ_EVENT_DISP_CCORR1_FRAME_DONE		83
#define CMDQ_EVENT_DISP_CCORR0_FRAME_DONE		84
#define CMDQ_EVENT_DISP_AAL1_FRAME_DONE			85
#define CMDQ_EVENT_DISP_AAL0_FRAME_DONE			86
#define CMDQ_EVENT_DISP_DSC_WRAP_FRAME_DONE_0		87
#define CMDQ_EVENT_DISP_DSC_WRAP_FRAME_DONE_1		88
#define CMDQ_EVENT_DISP_UFBC_WDMA1_FRAME_DONE		89
#define CMDQ_EVENT_DISP_UFBC_WDMA0_FRAME_DONE		90
#define CMDQ_EVENT_DISP_MERGE1_FRAME_DONE		91
#define CMDQ_EVENT_DISP_MERGE0_FRAME_DONE		92
#define CMDQ_EVENT_DISP_STREAM_DONE_0			128
#define CMDQ_EVENT_DISP_STREAM_DONE_1			129
#define CMDQ_EVENT_DISP_STREAM_DONE_2			130
#define CMDQ_EVENT_DISP_STREAM_DONE_3			131
#define CMDQ_EVENT_DISP_STREAM_DONE_4			132
#define CMDQ_EVENT_DISP_STREAM_DONE_5			133
#define CMDQ_EVENT_DISP_STREAM_DONE_6			134
#define CMDQ_EVENT_DISP_STREAM_DONE_7			135
#define CMDQ_EVENT_DISP_STREAM_DONE_8			136
#define CMDQ_EVENT_DISP_STREAM_DONE_9			137
#define CMDQ_EVENT_DISP_STREAM_DONE_10			138
#define CMDQ_EVENT_DISP_STREAM_DONE_11			139
#define CMDQ_EVENT_DISP_STREAM_DONE_12			140
#define CMDQ_EVENT_DISP_STREAM_DONE_13			141
#define CMDQ_EVENT_DISP_STREAM_DONE_14			142
#define CMDQ_EVENT_DISP_STREAM_DONE_15			143
#define CMDQ_EVENT_DSI1_TE				144
#define CMDQ_EVENT_DSI1_IRQ				145
#define CMDQ_EVENT_DSI1_DONE				146
#define CMDQ_EVENT_DSI0_TE				147
#define CMDQ_EVENT_DSI0_IRQ				148
#define CMDQ_EVENT_DSI0_DONE				149
#define CMDQ_EVENT_DISP_WDMA1_SW_RST_DONE		150
#define CMDQ_EVENT_DISP_WDMA0_SW_RST_DONE		151
#define CMDQ_EVENT_DISP_OVL3_2L_RST_DONE		152
#define CMDQ_EVENT_DISP_OVL2_2L_RST_DONE		153
#define CMDQ_EVENT_DISP_OVL1_RST_DONE			154
#define CMDQ_EVENT_DISP_OVL1_2L_RST_DONE		155
#define CMDQ_EVENT_DISP_OVL0_RST_DONE			156
#define CMDQ_EVENT_DISP_OVL0_2L_RST_DONE		157
#define CMDQ_EVENT_BUF_UNDERRUN_0			158
#define CMDQ_EVENT_BUF_UNDERRUN_1			159
#define CMDQ_EVENT_BUF_UNDERRUN_2			160
#define CMDQ_EVENT_BUF_UNDERRUN_3			161
#define CMDQ_EVENT_BUF_UNDERRUN_4			162
#define CMDQ_EVENT_BUF_UNDERRUN_5			163
#define CMDQ_EVENT_BUF_UNDERRUN_6			164
#define CMDQ_EVENT_BUF_UNDERRUN_7			165
#define CMDQ_EVENT_DP_VDE_END				166
#define CMDQ_EVENT_DP_VDE_START				167
#define CMDQ_EVENT_DP_VSYNC_END				168
#define CMDQ_EVENT_DP_VSYNC_START			169
#define CMDQ_EVENT_DP_TARGET_LINE			170
#define CMDQ_EVENT_DISP_POSTMASK1_RST_DONE		171
#define CMDQ_EVENT_DISP_POSTMASK0_RST_DONE		172
#define CMDQ_EVENT_VDEC_LAT_SOF_0			256
#define CMDQ_EVENT_VDEC_LAT_FRAME_DONE_0		257
#define CMDQ_EVENT_VDEC_LAT_FRAME_DONE_1		258
#define CMDQ_EVENT_VDEC_LAT_FRAME_DONE_2		259
#define CMDQ_EVENT_VDEC_LAT_FRAME_DONE_3		260
#define CMDQ_EVENT_VDEC_LAT_FRAME_DONE_4		261
#define CMDQ_EVENT_VDEC_LAT_FRAME_DONE_5		262
#define CMDQ_EVENT_VDEC_LAT_FRAME_DONE_6		263
#define CMDQ_EVENT_VDEC_LAT_0				264
#define CMDQ_EVENT_VDEC_LAT_1				265
#define CMDQ_EVENT_VDEC_LAT_2				266
#define CMDQ_EVENT_VDEC_LAT_3				267
#define CMDQ_EVENT_VDEC_LAT_4				268
#define CMDQ_EVENT_VDEC_LAT_5				269
#define CMDQ_EVENT_VDEC_LAT_6				270
#define CMDQ_EVENT_VDEC_LAT_7				271
#define CMDQ_EVENT_VDEC_SOF_0				288
#define CMDQ_EVENT_VDEC_FRAME_DONE_0			289
#define CMDQ_EVENT_VDEC_FRAME_DONE_1			290
#define CMDQ_EVENT_VDEC_FRAME_DONE_2			291
#define CMDQ_EVENT_VDEC_FRAME_DONE_3			292
#define CMDQ_EVENT_VDEC_FRAME_DONE_4			293
#define CMDQ_EVENT_VDEC_FRAME_DONE_5			294
#define CMDQ_EVENT_VDEC_FRAME_DONE_6			295
#define CMDQ_EVENT_VDEC_0				296
#define CMDQ_EVENT_VDEC_1				297
#define CMDQ_EVENT_VDEC_2				298
#define CMDQ_EVENT_VDEC_3				299
#define CMDQ_EVENT_VDEC_4				300
#define CMDQ_EVENT_VDEC_5				301
#define CMDQ_EVENT_VDEC_6				302
#define CMDQ_EVENT_VDEC_7				303
#define CMDQ_EVENT_VENC_CMDQ_FRAME_DONE_C1		385
#define CMDQ_EVENT_VENC_CMDQ_PAUSE_DONE_C1		386
#define CMDQ_EVENT_JPGENC_CMDQ_DONE_C1			387
#define CMDQ_EVENT_VENC_CMDQ_MB_DONE_C1			388
#define CMDQ_EVENT_VENC_CMDQ_128BYTE_CNT_DONE_C1	389
#define CMDQ_EVENT_JPGDEC_CMDQ_DONE_C1			390
#define CMDQ_EVENT_JPGDEC_C1_CMDQ_DONE_C1		391
#define CMDQ_EVENT_JPGDEC_INSUFF_CMDQ_DONE_C1		392
#define CMDQ_EVENT_JPGDEC_C1_INSUFF_CMDQ_DONE_C1	393
#define CMDQ_EVENT_VENC_C0_CMDQ_WP_2ND_STAGE_DONE_C1	394
#define CMDQ_EVENT_VENC_C0_CMDQ_WP_3RD_STAGE_DONE_C1	395
#define CMDQ_EVENT_VENC_CMDQ_FRAME_DONE			417
#define CMDQ_EVENT_VENC_CMDQ_PAUSE_DONE			418
#define CMDQ_EVENT_JPGENC_CMDQ_DONE			419
#define CMDQ_EVENT_VENC_CMDQ_MB_DONE			420
#define CMDQ_EVENT_VENC_CMDQ_128BYTE_CNT_DONE		421
#define CMDQ_EVENT_JPGDEC_CMDQ_DONE			422
#define CMDQ_EVENT_JPGDEC_C1_CMDQ_DONE			423
#define CMDQ_EVENT_JPGDEC_INSUFF_CMDQ_DONE		424
#define CMDQ_EVENT_JPGDEC_C1_INSUFF_CMDQ_DONE		425
#define CMDQ_EVENT_VENC_C0_CMDQ_WP_2ND_STAGE_DONE	426
#define CMDQ_EVENT_VENC_C0_CMDQ_WP_3RD_STAGE_DONE	427
#define CMDQ_EVENT_VDEC_CORE0_SOF_0			448
#define CMDQ_EVENT_VDEC_CORE0_FRAME_DONE_0		449
#define CMDQ_EVENT_VDEC_CORE0_FRAME_DONE_1		450
#define CMDQ_EVENT_VDEC_CORE0_FRAME_DONE_2		451
#define CMDQ_EVENT_VDEC_CORE0_FRAME_DONE_3		452
#define CMDQ_EVENT_VDEC_CORE0_FRAME_DONE_4		453
#define CMDQ_EVENT_VDEC_CORE0_FRAME_DONE_5		454
#define CMDQ_EVENT_VDEC_CORE0_FRAME_DONE_6		455
#define CMDQ_EVENT_VDEC_CORE0_0				456
#define CMDQ_EVENT_VDEC_CORE0_1				457
#define CMDQ_EVENT_VDEC_CORE0_2				458
#define CMDQ_EVENT_VDEC_CORE0_3				459
#define CMDQ_EVENT_VDEC_CORE0_4				460
#define CMDQ_EVENT_VDEC_CORE0_5				461
#define CMDQ_EVENT_VDEC_CORE0_6				462
#define CMDQ_EVENT_VDEC_CORE0_7				463
#define CMDQ_EVENT_IRQ_OUT_GCE_0			482
#define CMDQ_EVENT_IRQ_OUT_GCE_1			483
#define CMDQ_EVENT_OUT_EVENT_0				898
#define CMDQ_EVENT_OUT_EVENT_1				899

/* GCE-M hardware events */
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_0		1
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_1		2
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_2		3
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_3		4
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_4		5
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_5		6
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_6		7
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_7		8
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_8		9
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_9		10
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_10		11
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_11		12
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_12		13
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_13		14
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_14		15
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_15		16
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_16		17
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_17		18
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_18		19
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_19		20
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_20		21
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_21		22
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_22		23
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_23		24
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_0		33
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_1		34
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_2		35
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_3		36
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_4		37
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_5		38
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_6		39
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_7		40
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_8		41
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_9		42
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_10		43
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_11		44
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_12		45
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_13		46
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_14		47
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_15		48
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_16		49
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_17		50
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_18		51
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_19		52
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_20		53
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_21		54
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_22		55
#define CMDQ_EVENT_IMG1_EVENT_TX_FRAME_DONE_23		56
#define CMDQ_EVENT_IPE_EVENT_TX_FRAME_DONE_0		129
#define CMDQ_EVENT_IPE_EVENT_TX_FRAME_DONE_1		130
#define CMDQ_EVENT_RSC_EOF				131
#define CMDQ_EVENT_IPE_EVENT_TX_FRAME_DONE_3		132
#define CMDQ_EVENT_IPE_EVENT_TX_FRAME_DONE_4		133
#define CMDQ_EVENT_ISP_FRAME_DONE_A			193
#define CMDQ_EVENT_ISP_FRAME_DONE_B			194
#define CMDQ_EVENT_ISP_FRAME_DONE_C			195
#define CMDQ_EVENT_CAMSV0_PASS1_DONE			196
#define CMDQ_EVENT_CAMSV02_PASS1_DONE			197
#define CMDQ_EVENT_CAMSV1_PASS1_DONE			198
#define CMDQ_EVENT_CAMSV2_PASS1_DONE			199
#define CMDQ_EVENT_CAMSV3_PASS1_DONE			200
#define CMDQ_EVENT_MRAW_0_PASS1_DONE			201
#define CMDQ_EVENT_MRAW_1_PASS1_DONE			202
#define CMDQ_EVENT_SENINF_CAM0_FIFO_FULL		203
#define CMDQ_EVENT_SENINF_CAM1_FIFO_FULL		204
#define CMDQ_EVENT_SENINF_CAM2_FIFO_FULL		205
#define CMDQ_EVENT_SENINF_CAM3_FIFO_FULL		206
#define CMDQ_EVENT_SENINF_CAM4_FIFO_FULL		207
#define CMDQ_EVENT_SENINF_CAM5_FIFO_FULL		208
#define CMDQ_EVENT_SENINF_CAM6_FIFO_FULL		209
#define CMDQ_EVENT_SENINF_CAM7_FIFO_FULL		210
#define CMDQ_EVENT_SENINF_CAM8_FIFO_FULL		211
#define CMDQ_EVENT_SENINF_CAM9_FIFO_FULL		212
#define CMDQ_EVENT_SENINF_CAM10_FIFO_FULL		213
#define CMDQ_EVENT_SENINF_CAM11_FIFO_FULL		214
#define CMDQ_EVENT_SENINF_CAM12_FIFO_FULL		215
#define CMDQ_EVENT_TG_OVRUN_A_INT			216
#define CMDQ_EVENT_DMA_R1_ERROR_A_INT			217
#define CMDQ_EVENT_TG_OVRUN_B_INT			218
#define CMDQ_EVENT_DMA_R1_ERROR_B_INT			219
#define CMDQ_EVENT_TG_OVRUN_C_INT			220
#define CMDQ_EVENT_DMA_R1_ERROR_C_INT			221
#define CMDQ_EVENT_TG_OVRUN_M0_INT			222
#define CMDQ_EVENT_DMA_R1_ERROR_M0_INT			223
#define CMDQ_EVENT_MDP_RDMA0_SOF			256
#define CMDQ_EVENT_MDP_RDMA1_SOF			257
#define CMDQ_EVENT_MDP_RDMA2_SOF			258
#define CMDQ_EVENT_MDP_RDMA3_SOF			259
#define CMDQ_EVENT_MDP_FG0_SOF				260
#define CMDQ_EVENT_MDP_FG1_SOF				261
#define CMDQ_EVENT_MDP_AAL0_SOF				262
#define CMDQ_EVENT_MDP_AAL1_SOF				263
#define CMDQ_EVENT_MDP_AAL2_SOF				264
#define CMDQ_EVENT_MDP_AAL3_SOF				265
#define CMDQ_EVENT_MDP_HDR0_SOF				266
#define CMDQ_EVENT_MDP_HDR1_SOF				267
#define CMDQ_EVENT_MDP_RSZ0_SOF				268
#define CMDQ_EVENT_MDP_RSZ1_SOF				269
#define CMDQ_EVENT_MDP_RSZ2_SOF				270
#define CMDQ_EVENT_MDP_RSZ3_SOF				271
#define CMDQ_EVENT_MDP_WROT0_SOF			272
#define CMDQ_EVENT_MDP_WROT1_SOF			273
#define CMDQ_EVENT_MDP_WROT2_SOF			274
#define CMDQ_EVENT_MDP_WROT3_SOF			275
#define CMDQ_EVENT_MDP_TDSHP0_SOF			276
#define CMDQ_EVENT_MDP_TDSHP1_SOF			277
#define CMDQ_EVENT_MDP_TDSHP2_SOF			278
#define CMDQ_EVENT_MDP_TDSHP3_SOF			279
#define CMDQ_EVENT_MDP_TCC0_SOF				280
#define CMDQ_EVENT_MDP_TCC1_SOF				281
#define CMDQ_EVENT_MDP_TCC2_SOF				282
#define CMDQ_EVENT_MDP_TCC3_SOF				283
#define CMDQ_EVENT_IMG_DL_RELAY0_SOF			284
#define CMDQ_EVENT_IMG_DL_RELAY1_SOF			285
#define CMDQ_EVENT_IMG_DL_RELAY2_SOF			286
#define CMDQ_EVENT_IMG_DL_RELAY3_SOF			287
#define CMDQ_EVENT_MDP_WROT3_FRAME_DONE			288
#define CMDQ_EVENT_MDP_WROT2_FRAME_DONE			289
#define CMDQ_EVENT_MDP_WROT1_FRAME_DONE			290
#define CMDQ_EVENT_MDP_WROT0_FRAME_DONE			291
#define CMDQ_EVENT_MDP_TDSHP3_FRAME_DONE		292
#define CMDQ_EVENT_MDP_TDSHP2_FRAME_DONE		293
#define CMDQ_EVENT_MDP_TDSHP1_FRAME_DONE		294
#define CMDQ_EVENT_MDP_TDSHP0_FRAME_DONE		295
#define CMDQ_EVENT_MDP_TCC3_FRAME_DONE			296
#define CMDQ_EVENT_MDP_TCC2_FRAME_DONE			297
#define CMDQ_EVENT_MDP_TCC1_FRAME_DONE			298
#define CMDQ_EVENT_MDP_TCC0_FRAME_DONE			299
#define CMDQ_EVENT_MDP_RSZ3_FRAME_DONE			300
#define CMDQ_EVENT_MDP_RSZ2_FRAME_DONE			301
#define CMDQ_EVENT_MDP_RSZ1_FRAME_DONE			302
#define CMDQ_EVENT_MDP_RSZ0_FRAME_DONE			303
#define CMDQ_EVENT_MDP_RDMA3_FRAME_DONE			304
#define CMDQ_EVENT_MDP_RDMA2_FRAME_DONE			305
#define CMDQ_EVENT_MDP_RDMA1_FRAME_DONE			306
#define CMDQ_EVENT_MDP_RDMA0_FRAME_DONE			307
#define CMDQ_EVENT_MDP_HDR1_FRAME_DONE			308
#define CMDQ_EVENT_MDP_HDR0_FRAME_DONE			309
#define CMDQ_EVENT_MDP_FG1_FRAME_DONE			310
#define CMDQ_EVENT_MDP_FG0_FRAME_DONE			311
#define CMDQ_EVENT_MDP_COLOR1_FRAME_DONE		312
#define CMDQ_EVENT_MDP_COLOR0_FRAME_DONE		313
#define CMDQ_EVENT_MDP_AAL3_FRAME_DONE			314
#define CMDQ_EVENT_MDP_AAL2_FRAME_DONE			315
#define CMDQ_EVENT_MDP_AAL1_FRAME_DONE			316
#define CMDQ_EVENT_MDP_AAL0_FRAME_DONE			317
#define CMDQ_EVENT_MDP_STREAM_DONE_0			320
#define CMDQ_EVENT_MDP_STREAM_DONE_1			321
#define CMDQ_EVENT_MDP_STREAM_DONE_2			322
#define CMDQ_EVENT_MDP_STREAM_DONE_3			323
#define CMDQ_EVENT_MDP_STREAM_DONE_4			324
#define CMDQ_EVENT_MDP_STREAM_DONE_5			325
#define CMDQ_EVENT_MDP_STREAM_DONE_6			326
#define CMDQ_EVENT_MDP_STREAM_DONE_7			327
#define CMDQ_EVENT_MDP_STREAM_DONE_8			328
#define CMDQ_EVENT_MDP_STREAM_DONE_9			329
#define CMDQ_EVENT_MDP_STREAM_DONE_10			330
#define CMDQ_EVENT_MDP_STREAM_DONE_11			331
#define CMDQ_EVENT_MDP_STREAM_DONE_12			332
#define CMDQ_EVENT_MDP_STREAM_DONE_13			333
#define CMDQ_EVENT_MDP_STREAM_DONE_14			334
#define CMDQ_EVENT_MDP_STREAM_DONE_15			335
#define CMDQ_EVENT_MDP_WROT3_SW_RST_DONE		336
#define CMDQ_EVENT_MDP_WROT2_SW_RST_DONE		337
#define CMDQ_EVENT_MDP_WROT1_SW_RST_DONE		338
#define CMDQ_EVENT_MDP_WROT0_SW_RST_DONE		339
#define CMDQ_EVENT_MDP_RDMA3_SW_RST_DONE		340
#define CMDQ_EVENT_MDP_RDMA2_SW_RST_DONE		341
#define CMDQ_EVENT_MDP_RDMA1_SW_RST_DONE		342
#define CMDQ_EVENT_MDP_RDMA0_SW_RST_DONE		343

/* CMDQ sw tokens
 * Following definitions are gce sw token which may use by clients
 * event operation API.
 * Note that token 512 to 639 may set secure
 */

/* end of hw event and begin of sw token */
#define CMDQ_MAX_HW_EVENT				512

/* Config thread notify trigger thread */
#define CMDQ_SYNC_TOKEN_CONFIG_DIRTY			640
/* Trigger thread notify config thread */
#define CMDQ_SYNC_TOKEN_STREAM_EOF			641
/* Block Trigger thread until the ESD check finishes. */
#define CMDQ_SYNC_TOKEN_ESD_EOF				642
#define CMDQ_SYNC_TOKEN_STREAM_BLOCK			643
/* check CABC setup finish */
#define CMDQ_SYNC_TOKEN_CABC_EOF			644

/*VFP period token for Msync*/
#define CMDQ_SYNC_TOKEN_VFP_PERIOD			645

/* Notify normal CMDQ there are some secure task done
 * MUST NOT CHANGE, this token sync with secure world
 */
#define CMDQ_SYNC_SECURE_THR_EOF			647

/* CMDQ use sw token */
#define CMDQ_SYNC_TOKEN_USER_0				649
#define CMDQ_SYNC_TOKEN_USER_1				650
#define CMDQ_SYNC_TOKEN_POLL_MONITOR			651
#define CMDQ_SYNC_TOKEN_TPR_LOCK			652

/* ISP sw token */
#define CMDQ_SYNC_TOKEN_MSS				665
#define CMDQ_SYNC_TOKEN_MSF				666

/* GPR access tokens (for HW register backup)
 * There are 15 32-bit GPR, 3 GPR form a set
 * (64-bit for address, 32-bit for value)
 * MUST NOT CHANGE, these tokens sync with MDP
 */
#define CMDQ_SYNC_TOKEN_GPR_SET_0			700
#define CMDQ_SYNC_TOKEN_GPR_SET_1			701
#define CMDQ_SYNC_TOKEN_GPR_SET_2			702
#define CMDQ_SYNC_TOKEN_GPR_SET_3			703
#define CMDQ_SYNC_TOKEN_GPR_SET_4			704

/* Resource lock event to control resource in GCE thread */
#define CMDQ_SYNC_RESOURCE_WROT0			710
#define CMDQ_SYNC_RESOURCE_WROT1			711

/* event for gpr timer, used in sleep and poll with timeout */
#define CMDQ_TOKEN_GPR_TIMER_R0				994
#define CMDQ_TOKEN_GPR_TIMER_R1				995
#define CMDQ_TOKEN_GPR_TIMER_R2				996
#define CMDQ_TOKEN_GPR_TIMER_R3				997
#define CMDQ_TOKEN_GPR_TIMER_R4				998
#define CMDQ_TOKEN_GPR_TIMER_R5				999
#define CMDQ_TOKEN_GPR_TIMER_R6				1000
#define CMDQ_TOKEN_GPR_TIMER_R7				1001
#define CMDQ_TOKEN_GPR_TIMER_R8				1002
#define CMDQ_TOKEN_GPR_TIMER_R9				1003
#define CMDQ_TOKEN_GPR_TIMER_R10			1004
#define CMDQ_TOKEN_GPR_TIMER_R11			1005
#define CMDQ_TOKEN_GPR_TIMER_R12			1006
#define CMDQ_TOKEN_GPR_TIMER_R13			1007
#define CMDQ_TOKEN_GPR_TIMER_R14			1008
#define CMDQ_TOKEN_GPR_TIMER_R15			1009

#define CMDQ_EVENT_MAX					0x3FF
/* CMDQ sw tokens END */


#endif
