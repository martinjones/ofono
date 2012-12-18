/*
 *
 *  oFono - Open Source Telephony
 *
 *  Copyright (C) 2011-2012  Intel Corporation. All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#define QMI_BAND_MASK_CLASS_0A		0x0000000000000001
#define QMI_BAND_MASK_CLASS_0B		0x0000000000000002
#define QMI_BAND_MASK_CLASS_1		0x0000000000000004
#define QMI_BAND_MASK_CLASS_2		0x0000000000000008
#define QMI_BAND_MASK_CLASS_3A		0x0000000000000010
#define QMI_BAND_MASK_CLASS_4		0x0000000000000020
#define QMI_BAND_MASK_CLASS_5		0x0000000000000040
#define QMI_BAND_MASK_GSM_DCS		0x0000000000000080
#define QMI_BAND_MASK_GSM_EXTENDED	0x0000000000000100
#define QMI_BAND_MASK_GSM_PRIMARY	0x0000000000000200
#define QMI_BAND_MASK_CLASS_6		0x0000000000000400
#define QMI_BAND_MASK_CLASS_7		0x0000000000000800
#define QMI_BAND_MASK_CLASS_8		0x0000000000001000
#define QMI_BAND_MASK_CLASS_9		0x0000000000002000
#define QMI_BAND_MASK_CLASS_10		0x0000000000004000
#define QMI_BAND_MASK_CLASS_11		0x0000000000008000
#define QMI_BAND_MASK_GSM_450		0x0000000000010000
#define QMI_BAND_MASK_GSM_480		0x0000000000020000
#define QMI_BAND_MASK_GSM_750		0x0000000000040000
#define QMI_BAND_MASK_GSM_850		0x0000000000080000
#define QMI_BAND_MASK_GSM_RAILWAYS	0x0000000000100000
#define QMI_BAND_MASK_GSM_PCS		0x0000000000200000
#define QMI_BAND_MASK_WCDMA_2100	0x0000000000400000
#define QMI_BAND_MASK_WCDMA_PCS		0x0000000000800000
#define QMI_BAND_MASK_WCDMA_DCS		0x0000000001000000
#define QMI_BAND_MASK_WCDMA_1700_US	0x0000000002000000
#define QMI_BAND_MASK_WCDMA_850		0x0000000004000000
#define QMI_BAND_MASK_WCDMA_800		0x0000000008000000
#define QMI_BAND_MASK_CLASS_12		0x0000000010000000
#define QMI_BAND_MASK_CLASS_14		0x0000000020000000
#define QMI_BAND_MASK_CLASS_15		0x0000000080000000
#define QMI_BAND_MASK_WCDMA_2600	0x0001000000000000
#define QMI_BAND_MASK_WCDMA_900		0x0002000000000000
#define QMI_BAND_MASK_WCDMA_1700_JP	0x0004000000000000
#define QMI_BAND_MASK_CLASS_16		0x0100000000000000
#define QMI_BAND_MASK_CLASS_17		0x0200000000000000
#define QMI_BAND_MASK_CLASS_18		0x0400000000000000
#define QMI_BAND_MASK_CLASS_19		0x0800000000000000

#define QMI_LTE_BAND_MASK_EUTRA_1	0x0000000000000001
#define QMI_LTE_BAND_MASK_EUTRA_2	0x0000000000000002
#define QMI_LTE_BAND_MASK_EUTRA_3	0x0000000000000004
#define QMI_LTE_BAND_MASK_EUTRA_4	0x0000000000000008
#define QMI_LTE_BAND_MASK_EUTRA_5	0x0000000000000010
#define QMI_LTE_BAND_MASK_EUTRA_6	0x0000000000000020
#define QMI_LTE_BAND_MASK_EUTRA_7	0x0000000000000040
#define QMI_LTE_BAND_MASK_EUTRA_8	0x0000000000000080
#define QMI_LTE_BAND_MASK_EUTRA_9	0x0000000000000100
#define QMI_LTE_BAND_MASK_EUTRA_10	0x0000000000000200
#define QMI_LTE_BAND_MASK_EUTRA_11	0x0000000000000400
#define QMI_LTE_BAND_MASK_EUTRA_12	0x0000000000000800
#define QMI_LTE_BAND_MASK_EUTRA_13	0x0000000000001000
#define QMI_LTE_BAND_MASK_EUTRA_14	0x0000000000002000
#define QMI_LTE_BAND_MASK_EUTRA_17	0x0000000000010000
#define QMI_LTE_BAND_MASK_EUTRA_18	0x0000000000020000
#define QMI_LTE_BAND_MASK_EUTRA_19	0x0000000000040000
#define QMI_LTE_BAND_MASK_EUTRA_20	0x0000000000080000
#define QMI_LTE_BAND_MASK_EUTRA_21	0x0000000000100000
#define QMI_LTE_BAND_MASK_EUTRA_24	0x0000000000800000
#define QMI_LTE_BAND_MASK_EUTRA_25	0x0000000001000000
#define QMI_LTE_BAND_MASK_EUTRA_33	0x0000000100000000
#define QMI_LTE_BAND_MASK_EUTRA_34	0x0000000200000000
#define QMI_LTE_BAND_MASK_EUTRA_35	0x0000000400000000
#define QMI_LTE_BAND_MASK_EUTRA_36	0x0000000800000000
#define QMI_LTE_BAND_MASK_EUTRA_37	0x0000001000000000
#define QMI_LTE_BAND_MASK_EUTRA_38	0x0000002000000000
#define QMI_LTE_BAND_MASK_EUTRA_39	0x0000004000000000
#define QMI_LTE_BAND_MASK_EUTRA_40	0x0000008000000000
#define QMI_LTE_BAND_MASK_EUTRA_41	0x0000010000000000
#define QMI_LTE_BAND_MASK_EUTRA_42	0x0000020000000000
#define QMI_LTE_BAND_MASK_EUTRA_43	0x0000040000000000