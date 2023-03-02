/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 MediaTek Inc.
 * Author: Yunfei Wang <yf.wang@mediatek.com>
 */

#ifndef _DTS_IOMMU_PORT_MT6895_H_
#define _DTS_IOMMU_PORT_MT6895_H_

#include <dt-bindings/memory/mtk-memory-port.h>

/* table id must be the same as mtk_iommu.h */
#define MM_TAB					(0)
#define APU_TAB					(1)

/* iova region definition */
#define NORMAL_DOM				(0)
#define VDEC_DOM				(1)
#define LK_RESV_DOM				(2)
#define CCU0_DOM				(3)
#define CCU1_DOM				(4)
#define VDO_REGION1				(5)
#define VDO_REGION2				(6)
#define VDO_REGION3				(7)
#define VDO_REGION4				(8)

#define APU_DATA_DOM				(0)
#define APU_SEC_DOM				(1)
#define APU_CODE_DOM				(2)

/* larb0 */
#define M4U_LARB0_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 0)
#define M4U_LARB0_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 1)
#define M4U_LARB0_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 2)
#define M4U_LARB0_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 3)
#define M4U_LARB0_PORT4				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 4)
#define M4U_LARB0_PORT5				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 5)
#define M4U_LARB0_PORT6				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 6)
#define M4U_LARB0_PORT7				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 7)
#define M4U_LARB0_PORT8				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 8)
#define M4U_LARB0_PORT9				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 9)
#define M4U_LARB0_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 10)
#define M4U_LARB0_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 11)
#define M4U_LARB0_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 12)
#define M4U_LARB0_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 13)
#define M4U_LARB0_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 14)
#define M4U_LARB0_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 0, 15)

/* larb1 */
#define M4U_LARB1_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 1, 0)
#define M4U_LARB1_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 1, 1)
#define M4U_LARB1_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 1, 2)
#define M4U_LARB1_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 1, 3)
#define M4U_LARB1_PORT4				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 1, 4)
#define M4U_LARB1_PORT5				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 1, 5)
#define M4U_LARB1_PORT6				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 1, 6)
#define M4U_LARB1_PORT7				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 1, 7)

/* larb2 */
#define M4U_LARB2_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 2, 0)
#define M4U_LARB2_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 2, 1)
#define M4U_LARB2_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 2, 2)
#define M4U_LARB2_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 2, 3)
#define M4U_LARB2_PORT4				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 2, 4)
#define M4U_LARB2_PORT5				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 2, 5)
#define M4U_LARB2_PORT6				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 2, 6)
#define M4U_LARB2_PORT7				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 2, 7)
#define M4U_LARB2_PORT8				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 2, 8)

/* larb3 */
#define M4U_LARB3_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 3, 0)
#define M4U_LARB3_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 3, 1)
#define M4U_LARB3_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 3, 2)
#define M4U_LARB3_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 3, 3)
#define M4U_LARB3_PORT4				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 3, 4)
#define M4U_LARB3_PORT5				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 3, 5)
#define M4U_LARB3_PORT6				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 3, 6)
#define M4U_LARB3_PORT7				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 3, 7)
#define M4U_LARB3_PORT8				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 3, 8)

/* larb4 */
#define M4U_LARB4_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 4, 0)
#define M4U_LARB4_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 4, 1)
#define M4U_LARB4_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 4, 2)
#define M4U_LARB4_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 4, 3)
#define M4U_LARB4_PORT4				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 4, 4)
#define M4U_LARB4_PORT5				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 4, 5)
#define M4U_LARB4_PORT6				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 4, 6)
#define M4U_LARB4_PORT7				MTK_M4U_PORT_ID(MM_TAB, VDEC_DOM, 4, 7)
#define M4U_LARB4_PORT8				MTK_M4U_PORT_ID(MM_TAB, VDEC_DOM, 4, 8)
#define M4U_LARB4_PORT9				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 4, 9)
#define M4U_LARB4_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 4, 10)

/* larb5 */
#define M4U_LARB5_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 5, 0)
#define M4U_LARB5_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 5, 1)
#define M4U_LARB5_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 5, 2)
#define M4U_LARB5_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 5, 3)
#define M4U_LARB5_PORT4				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 5, 4)
#define M4U_LARB5_PORT5				MTK_M4U_PORT_ID(MM_TAB, VDEC_DOM, 5, 5)
#define M4U_LARB5_PORT6				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 5, 6)
#define M4U_LARB5_PORT7				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 5, 7)
#define M4U_LARB5_PORT8				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 5, 8)

/* larb6 */
#define M4U_LARB6_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 6, 0)
#define M4U_LARB6_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 6, 1)
#define M4U_LARB6_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 6, 2)
#define M4U_LARB6_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 6, 3)

/* larb7 */
#define M4U_LARB7_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 0)
#define M4U_LARB7_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 1)
#define M4U_LARB7_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 2)
#define M4U_LARB7_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 3)
#define M4U_LARB7_PORT4				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 4)
#define M4U_LARB7_PORT5				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 5)
#define M4U_LARB7_PORT6				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 6)
#define M4U_LARB7_PORT7				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 7)
#define M4U_LARB7_PORT8				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 8)
#define M4U_LARB7_PORT9				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 9)
#define M4U_LARB7_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 10)
#define M4U_LARB7_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 11)
#define M4U_LARB7_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 12)
#define M4U_LARB7_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 13)
#define M4U_LARB7_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 14)
#define M4U_LARB7_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 15)
#define M4U_LARB7_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 16)
#define M4U_LARB7_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 17)
#define M4U_LARB7_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 18)
#define M4U_LARB7_PORT19			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 19)
#define M4U_LARB7_PORT20			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 20)
#define M4U_LARB7_PORT21			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 21)
#define M4U_LARB7_PORT22			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 22)
#define M4U_LARB7_PORT23			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 23)
#define M4U_LARB7_PORT24			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 24)
#define M4U_LARB7_PORT25			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 25)
#define M4U_LARB7_PORT26			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 26)
#define M4U_LARB7_PORT27			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 27)
#define M4U_LARB7_PORT28			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 28)
#define M4U_LARB7_PORT29			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 29)
#define M4U_LARB7_PORT30			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 7, 30)

/* larb8 */
#define M4U_LARB8_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 0)
#define M4U_LARB8_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 1)
#define M4U_LARB8_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 2)
#define M4U_LARB8_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 3)
#define M4U_LARB8_PORT4				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 4)
#define M4U_LARB8_PORT5				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 5)
#define M4U_LARB8_PORT6				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 6)
#define M4U_LARB8_PORT7				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 7)
#define M4U_LARB8_PORT8				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 8)
#define M4U_LARB8_PORT9				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 9)
#define M4U_LARB8_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 10)
#define M4U_LARB8_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 11)
#define M4U_LARB8_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 12)
#define M4U_LARB8_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 13)
#define M4U_LARB8_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 14)
#define M4U_LARB8_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 15)
#define M4U_LARB8_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 16)
#define M4U_LARB8_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 17)
#define M4U_LARB8_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 18)
#define M4U_LARB8_PORT19			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 19)
#define M4U_LARB8_PORT20			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 20)
#define M4U_LARB8_PORT21			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 21)
#define M4U_LARB8_PORT22			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 22)
#define M4U_LARB8_PORT23			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 23)
#define M4U_LARB8_PORT24			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 24)
#define M4U_LARB8_PORT25			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 25)
#define M4U_LARB8_PORT26			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 26)
#define M4U_LARB8_PORT27			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 27)
#define M4U_LARB8_PORT28			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 28)
#define M4U_LARB8_PORT29			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 29)
#define M4U_LARB8_PORT30			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 8, 30)

/* larb9 */
#define M4U_LARB9_PORT0				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 0)
#define M4U_LARB9_PORT1				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 1)
#define M4U_LARB9_PORT2				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 2)
#define M4U_LARB9_PORT3				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 3)
#define M4U_LARB9_PORT4				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 4)
#define M4U_LARB9_PORT5				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 5)
#define M4U_LARB9_PORT6				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 6)
#define M4U_LARB9_PORT7				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 7)
#define M4U_LARB9_PORT8				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 8)
#define M4U_LARB9_PORT9				MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 9)
#define M4U_LARB9_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 10)
#define M4U_LARB9_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 11)
#define M4U_LARB9_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 12)
#define M4U_LARB9_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 13)
#define M4U_LARB9_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 14)
#define M4U_LARB9_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 15)
#define M4U_LARB9_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 16)
#define M4U_LARB9_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 17)
#define M4U_LARB9_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 18)
#define M4U_LARB9_PORT19			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 19)
#define M4U_LARB9_PORT20			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 20)
#define M4U_LARB9_PORT21			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 21)
#define M4U_LARB9_PORT22			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 22)
#define M4U_LARB9_PORT23			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 23)
#define M4U_LARB9_PORT24			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 9, 24)

/* larb10 */
#define M4U_LARB10_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 0)
#define M4U_LARB10_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 1)
#define M4U_LARB10_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 2)
#define M4U_LARB10_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 3)
#define M4U_LARB10_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 4)
#define M4U_LARB10_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 5)
#define M4U_LARB10_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 6)
#define M4U_LARB10_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 7)
#define M4U_LARB10_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 8)
#define M4U_LARB10_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 9)
#define M4U_LARB10_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 10)
#define M4U_LARB10_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 11)
#define M4U_LARB10_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 12)
#define M4U_LARB10_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 13)
#define M4U_LARB10_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 14)
#define M4U_LARB10_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 15)
#define M4U_LARB10_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 16)
#define M4U_LARB10_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 17)
#define M4U_LARB10_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 18)
#define M4U_LARB10_PORT19			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 10, 19)

/* larb11--Larb11A */
#define M4U_LARB11_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 0)
#define M4U_LARB11_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 1)
#define M4U_LARB11_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 2)
#define M4U_LARB11_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 3)
#define M4U_LARB11_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 4)
#define M4U_LARB11_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 5)
#define M4U_LARB11_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 6)
#define M4U_LARB11_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 7)
#define M4U_LARB11_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 8)
#define M4U_LARB11_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 9)
#define M4U_LARB11_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 10)
#define M4U_LARB11_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 11)
#define M4U_LARB11_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 12)
#define M4U_LARB11_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 13)
#define M4U_LARB11_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 14)
#define M4U_LARB11_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 15)
#define M4U_LARB11_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 16)
#define M4U_LARB11_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 17)
#define M4U_LARB11_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 18)
#define M4U_LARB11_PORT19			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 19)
#define M4U_LARB11_PORT20			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 20)
#define M4U_LARB11_PORT21			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 21)
#define M4U_LARB11_PORT22			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 22)
#define M4U_LARB11_PORT23			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 23)
#define M4U_LARB11_PORT24			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 24)
#define M4U_LARB11_PORT25			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 25)
#define M4U_LARB11_PORT26			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 26)
#define M4U_LARB11_PORT27			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 27)
#define M4U_LARB11_PORT28			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 28)
#define M4U_LARB11_PORT29			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 11, 29)

/* larb12 */
#define M4U_LARB12_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 0)
#define M4U_LARB12_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 1)
#define M4U_LARB12_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 2)
#define M4U_LARB12_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 3)
#define M4U_LARB12_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 4)
#define M4U_LARB12_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 5)
#define M4U_LARB12_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 6)
#define M4U_LARB12_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 7)
#define M4U_LARB12_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 8)
#define M4U_LARB12_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 9)
#define M4U_LARB12_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 10)
#define M4U_LARB12_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 11)
#define M4U_LARB12_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 12)
#define M4U_LARB12_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 13)
#define M4U_LARB12_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 14)
#define M4U_LARB12_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 12, 15)

/* larb13 */
#define M4U_LARB13_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 0)
#define M4U_LARB13_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 1)
#define M4U_LARB13_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 2)
#define M4U_LARB13_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 3)
#define M4U_LARB13_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 4)
#define M4U_LARB13_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 5)
#define M4U_LARB13_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 6)
#define M4U_LARB13_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 7)
#define M4U_LARB13_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 8)
#define M4U_LARB13_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 9)
#define M4U_LARB13_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 10)
#define M4U_LARB13_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 11)
#define M4U_LARB13_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 12)
#define M4U_LARB13_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 13)
#define M4U_LARB13_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 14)
#define M4U_LARB13_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 15)
#define M4U_LARB13_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 16)
#define M4U_LARB13_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 17)
#define M4U_LARB13_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 18)
#define M4U_LARB13_PORT19			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 19)
#define M4U_LARB13_PORT20			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 20)
#define M4U_LARB13_PORT21			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 21)
#define M4U_LARB13_PORT22			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 22)
#define M4U_LARB13_PORT23			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 13, 23)

/* larb14 */
#define M4U_LARB14_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 0)
#define M4U_LARB14_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 1)
#define M4U_LARB14_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 2)
#define M4U_LARB14_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 3)
#define M4U_LARB14_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 4)
#define M4U_LARB14_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 5)
#define M4U_LARB14_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 6)
#define M4U_LARB14_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 7)
#define M4U_LARB14_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 8)
#define M4U_LARB14_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 9)
#define M4U_LARB14_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 10)
#define M4U_LARB14_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 11)
#define M4U_LARB14_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 12)
#define M4U_LARB14_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 13)
#define M4U_LARB14_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 14)
#define M4U_LARB14_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 15)
#define M4U_LARB14_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 16)
#define M4U_LARB14_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 17)
#define M4U_LARB14_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 18)
#define M4U_LARB14_PORT19			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 19)
#define M4U_LARB14_PORT20			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 20)
#define M4U_LARB14_PORT21			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 21)
#define M4U_LARB14_PORT22			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 14, 22)

/* larb15 */
#define M4U_LARB15_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 0)
#define M4U_LARB15_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 1)
#define M4U_LARB15_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 2)
#define M4U_LARB15_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 3)
#define M4U_LARB15_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 4)
#define M4U_LARB15_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 5)
#define M4U_LARB15_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 6)
#define M4U_LARB15_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 7)
#define M4U_LARB15_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 8)
#define M4U_LARB15_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 9)
#define M4U_LARB15_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 10)
#define M4U_LARB15_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 11)
#define M4U_LARB15_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 12)
#define M4U_LARB15_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 13)
#define M4U_LARB15_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 14)
#define M4U_LARB15_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 15)
#define M4U_LARB15_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 16)
#define M4U_LARB15_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 17)
#define M4U_LARB15_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 15, 18)

/* larb16--larb16A */
#define M4U_LARB16_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 0)
#define M4U_LARB16_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 1)
#define M4U_LARB16_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 2)
#define M4U_LARB16_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 3)
#define M4U_LARB16_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 4)
#define M4U_LARB16_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 5)
#define M4U_LARB16_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 6)
#define M4U_LARB16_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 7)
#define M4U_LARB16_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 8)
#define M4U_LARB16_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 9)
#define M4U_LARB16_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 10)
#define M4U_LARB16_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 11)
#define M4U_LARB16_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 12)
#define M4U_LARB16_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 13)
#define M4U_LARB16_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 14)
#define M4U_LARB16_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 15)
#define M4U_LARB16_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 16, 16)

/* larb17--larb17A */
#define M4U_LARB17_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 17, 0)
#define M4U_LARB17_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 17, 1)
#define M4U_LARB17_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 17, 2)
#define M4U_LARB17_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 17, 3)
#define M4U_LARB17_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 17, 4)
#define M4U_LARB17_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 17, 5)
#define M4U_LARB17_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 17, 6)

/* larb18 */
#define M4U_LARB18_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 18, 0)
#define M4U_LARB18_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 18, 1)
#define M4U_LARB18_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 18, 2)
#define M4U_LARB18_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 18, 3)
#define M4U_LARB18_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 18, 4)
#define M4U_LARB18_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 18, 5)
#define M4U_LARB18_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 18, 6)
#define M4U_LARB18_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 18, 7)

/* larb19 */
#define M4U_LARB19_PORT0			MTK_M4U_PORT_ID(MM_TAB, CCU0_DOM, 19, 0)
#define M4U_LARB19_PORT1			MTK_M4U_PORT_ID(MM_TAB, CCU0_DOM, 19, 1)
#define M4U_LARB19_PORT2			MTK_M4U_PORT_ID(MM_TAB, CCU1_DOM, 19, 2)
#define M4U_LARB19_PORT3			MTK_M4U_PORT_ID(MM_TAB, CCU1_DOM, 19, 3)

/* larb20 */
#define M4U_LARB20_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 0)
#define M4U_LARB20_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 1)
#define M4U_LARB20_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 2)
#define M4U_LARB20_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 3)
#define M4U_LARB20_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 4)
#define M4U_LARB20_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 5)
#define M4U_LARB20_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 6)
#define M4U_LARB20_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 7)
#define M4U_LARB20_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 8)
#define M4U_LARB20_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 9)
#define M4U_LARB20_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 10)
#define M4U_LARB20_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 11)
#define M4U_LARB20_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 12)
#define M4U_LARB20_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 13)
#define M4U_LARB20_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 14)
#define M4U_LARB20_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 20, 15)

/* larb21 */
#define M4U_LARB21_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 21, 0)
#define M4U_LARB21_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 21, 1)
#define M4U_LARB21_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 21, 2)
#define M4U_LARB21_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 21, 3)
#define M4U_LARB21_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 21, 4)
#define M4U_LARB21_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 21, 5)
#define M4U_LARB21_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 21, 6)
#define M4U_LARB21_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 21, 7)

/* larb22--Larb11B */
#define M4U_LARB22_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 0)
#define M4U_LARB22_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 1)
#define M4U_LARB22_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 2)
#define M4U_LARB22_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 3)
#define M4U_LARB22_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 4)
#define M4U_LARB22_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 5)
#define M4U_LARB22_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 6)
#define M4U_LARB22_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 7)
#define M4U_LARB22_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 8)
#define M4U_LARB22_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 9)
#define M4U_LARB22_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 10)
#define M4U_LARB22_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 11)
#define M4U_LARB22_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 12)
#define M4U_LARB22_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 13)
#define M4U_LARB22_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 14)
#define M4U_LARB22_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 15)
#define M4U_LARB22_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 16)
#define M4U_LARB22_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 17)
#define M4U_LARB22_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 18)
#define M4U_LARB22_PORT19			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 19)
#define M4U_LARB22_PORT20			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 20)
#define M4U_LARB22_PORT21			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 21)
#define M4U_LARB22_PORT22			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 22)
#define M4U_LARB22_PORT23			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 23)
#define M4U_LARB22_PORT24			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 24)
#define M4U_LARB22_PORT25			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 25)
#define M4U_LARB22_PORT26			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 26)
#define M4U_LARB22_PORT27			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 27)
#define M4U_LARB22_PORT28			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 28)
#define M4U_LARB22_PORT29			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 22, 29)

/* larb23--Larb11C */
#define M4U_LARB23_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 0)
#define M4U_LARB23_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 1)
#define M4U_LARB23_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 2)
#define M4U_LARB23_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 3)
#define M4U_LARB23_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 4)
#define M4U_LARB23_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 5)
#define M4U_LARB23_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 6)
#define M4U_LARB23_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 7)
#define M4U_LARB23_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 8)
#define M4U_LARB23_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 9)
#define M4U_LARB23_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 10)
#define M4U_LARB23_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 11)
#define M4U_LARB23_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 12)
#define M4U_LARB23_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 13)
#define M4U_LARB23_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 14)
#define M4U_LARB23_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 15)
#define M4U_LARB23_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 16)
#define M4U_LARB23_PORT17			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 17)
#define M4U_LARB23_PORT18			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 18)
#define M4U_LARB23_PORT19			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 19)
#define M4U_LARB23_PORT20			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 20)
#define M4U_LARB23_PORT21			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 21)
#define M4U_LARB23_PORT22			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 22)
#define M4U_LARB23_PORT23			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 23)
#define M4U_LARB23_PORT24			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 24)
#define M4U_LARB23_PORT25			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 25)
#define M4U_LARB23_PORT26			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 26)
#define M4U_LARB23_PORT27			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 27)
#define M4U_LARB23_PORT28			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 28)
#define M4U_LARB23_PORT29			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 23, 29)

/* larb24--dummy */

/* larb25 */
#define M4U_LARB25_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 0)
#define M4U_LARB25_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 1)
#define M4U_LARB25_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 2)
#define M4U_LARB25_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 3)
#define M4U_LARB25_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 4)
#define M4U_LARB25_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 5)
#define M4U_LARB25_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 6)
#define M4U_LARB25_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 7)
#define M4U_LARB25_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 8)
#define M4U_LARB25_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 9)
#define M4U_LARB25_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 10)
#define M4U_LARB25_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 11)
#define M4U_LARB25_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 12)
#define M4U_LARB25_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 25, 13)

/* larb26 */
#define M4U_LARB26_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 0)
#define M4U_LARB26_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 1)
#define M4U_LARB26_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 2)
#define M4U_LARB26_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 3)
#define M4U_LARB26_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 4)
#define M4U_LARB26_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 5)
#define M4U_LARB26_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 6)
#define M4U_LARB26_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 7)
#define M4U_LARB26_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 8)
#define M4U_LARB26_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 9)
#define M4U_LARB26_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 10)
#define M4U_LARB26_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 11)
#define M4U_LARB26_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 12)
#define M4U_LARB26_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 26, 13)

/* larb27--larb16B */
#define M4U_LARB27_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 0)
#define M4U_LARB27_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 1)
#define M4U_LARB27_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 2)
#define M4U_LARB27_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 3)
#define M4U_LARB27_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 4)
#define M4U_LARB27_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 5)
#define M4U_LARB27_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 6)
#define M4U_LARB27_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 7)
#define M4U_LARB27_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 8)
#define M4U_LARB27_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 9)
#define M4U_LARB27_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 10)
#define M4U_LARB27_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 11)
#define M4U_LARB27_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 12)
#define M4U_LARB27_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 13)
#define M4U_LARB27_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 14)
#define M4U_LARB27_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 15)
#define M4U_LARB27_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 27, 16)

/* larb28--larb16C */
#define M4U_LARB28_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 0)
#define M4U_LARB28_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 1)
#define M4U_LARB28_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 2)
#define M4U_LARB28_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 3)
#define M4U_LARB28_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 4)
#define M4U_LARB28_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 5)
#define M4U_LARB28_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 6)
#define M4U_LARB28_PORT7			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 7)
#define M4U_LARB28_PORT8			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 8)
#define M4U_LARB28_PORT9			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 9)
#define M4U_LARB28_PORT10			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 10)
#define M4U_LARB28_PORT11			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 11)
#define M4U_LARB28_PORT12			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 12)
#define M4U_LARB28_PORT13			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 13)
#define M4U_LARB28_PORT14			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 14)
#define M4U_LARB28_PORT15			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 15)
#define M4U_LARB28_PORT16			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 28, 16)

/* larb29--larb17B */
#define M4U_LARB29_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 29, 0)
#define M4U_LARB29_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 29, 1)
#define M4U_LARB29_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 29, 2)
#define M4U_LARB29_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 29, 3)
#define M4U_LARB29_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 29, 4)
#define M4U_LARB29_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 29, 5)
#define M4U_LARB29_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 29, 6)

/* larb30--larb17C */
#define M4U_LARB30_PORT0			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 30, 0)
#define M4U_LARB30_PORT1			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 30, 1)
#define M4U_LARB30_PORT2			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 30, 2)
#define M4U_LARB30_PORT3			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 30, 3)
#define M4U_LARB30_PORT4			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 30, 4)
#define M4U_LARB30_PORT5			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 30, 5)
#define M4U_LARB30_PORT6			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 30, 6)

/* fake larb31 */
#define M4U_LARB31_CCU0				MTK_M4U_PORT_ID(MM_TAB, CCU0_DOM, 31, 0)
#define M4U_LARB31_CCU1				MTK_M4U_PORT_ID(MM_TAB, CCU1_DOM, 31, 1)

/* fake larb32 */
#define M4U_LARB32_GCE_DM			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 32, 1)
#define M4U_LARB32_GCE_MM			MTK_M4U_PORT_ID(MM_TAB, NORMAL_DOM, 32, 2)

/* fake larb33 reserved */
#define M4U_LARB33_VIDEO_UP_512MB1		MTK_M4U_PORT_ID(MM_TAB, VDO_REGION1, 33, 0)
#define M4U_LARB33_VIDEO_UP_512MB2		MTK_M4U_PORT_ID(MM_TAB, VDO_REGION2, 33, 1)
#define M4U_LARB33_VIDEO_UP_256MB1		MTK_M4U_PORT_ID(MM_TAB, VDO_REGION3, 33, 2)
#define M4U_LARB33_VIDEO_UP_256MB2		MTK_M4U_PORT_ID(MM_TAB, VDO_REGION4, 33, 3)

/* fake larb34 */
#define M4U_LARB34_APU_SECURE			MTK_M4U_PORT_ID(APU_TAB, APU_SEC_DOM, 34, 0)
#define M4U_LARB34_APU_CODE			MTK_M4U_PORT_ID(APU_TAB, APU_CODE_DOM, 34, 1)
#define M4U_LARB34_APU_DATA			MTK_M4U_PORT_ID(APU_TAB, APU_DATA_DOM, 34, 2)

#endif /* _DTS_IOMMU_PORT_MT6895_H_ */