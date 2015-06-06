/*
 * Copyright (c) 2014-2015, Premysl Houdek <kom541000@gmail.com>
 *
 * Czech Technical University in Prague
 * Zikova 1903/4
 * 166 36 Praha 6
 * Czech Republic
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the FreeBSD Project.
*/
#ifndef LIBBSP_ARM_tms570_IOMM
#define LIBBSP_ARM_tms570_IOMM

#include <bsp/utility.h>

typedef struct{
  uint32_t PINMMR0;           /*Pin Multiplexing Control Register 0*/
  uint32_t PINMMR1;           /*Pin Multiplexing Control Register 1*/
  uint32_t PINMMR2;           /*Pin Multiplexing Control Register 2*/
  uint32_t PINMMR3;           /*Pin Multiplexing Control Register 3*/
  uint32_t PINMMR4;           /*Pin Multiplexing Control Register 4*/
  uint32_t PINMMR5;           /*Pin Multiplexing Control Register 5*/
  uint32_t PINMMR6;           /*Pin Multiplexing Control Register 6*/
  uint32_t PINMMR7;           /*Pin Multiplexing Control Register 7*/
  uint32_t PINMMR8;           /*Pin Multiplexing Control Register 8*/
  uint32_t PINMMR9;           /*Pin Multiplexing Control Register 9*/
  uint32_t PINMMR10;          /*Pin Multiplexing Control Register 10*/
  uint32_t PINMMR11;          /*Pin Multiplexing Control Register 11*/
  uint32_t PINMMR12;          /*Pin Multiplexing Control Register 12*/
  uint32_t PINMMR13;          /*Pin Multiplexing Control Register 13*/
  uint32_t PINMMR14;          /*Pin Multiplexing Control Register 14*/
  uint32_t PINMMR15;          /*Pin Multiplexing Control Register 15*/
  uint32_t PINMMR16;          /*Pin Multiplexing Control Register 16*/
  uint32_t PINMMR17;          /*Pin Multiplexing Control Register 17*/
  uint32_t PINMMR18;          /*Pin Multiplexing Control Register 18*/
  uint32_t PINMMR19;          /*Pin Multiplexing Control Register 19*/
  uint32_t PINMMR20;          /*Pin Multiplexing Control Register 20*/
  uint32_t PINMMR21;          /*Pin Multiplexing Control Register 21*/
  uint32_t PINMMR22;          /*Pin Multiplexing Control Register 22*/
  uint32_t PINMMR23;          /*Pin Multiplexing Control Register 23*/
  uint32_t PINMMR24;          /*Pin Multiplexing Control Register 24*/
  uint32_t PINMMR25;          /*Pin Multiplexing Control Register 25*/
  uint32_t PINMMR26;          /*Pin Multiplexing Control Register 26*/
  uint32_t PINMMR27;          /*Pin Multiplexing Control Register 27*/
  uint32_t PINMMR28;          /*Pin Multiplexing Control Register 28*/
  uint32_t PINMMR29;          /*Pin Multiplexing Control Register 29*/
  uint32_t PINMMR30;          /*Pin Multiplexing Control Register 30*/
} tms570_pinmux_t;

typedef struct{
  uint32_t REVISION_REG;      /*Revision Register*/
  uint8_t reserved1 [28];
  uint32_t ENDIAN_REG;        /*Device Endianness Register*/
  uint8_t reserved2 [20];
  uint32_t KICK_REG0;         /*Kicker Register 0*/
  uint32_t KICK_REG1;         /*Kicker Register 1*/
  uint8_t reserved3 [160];
  uint32_t ERR_RAW_STATUS_REG;/*Error Raw Status / Set Register*/
  uint32_t ERR_ENABLED_STATUS_REG;/*Error Enabled Status / Clear Register*/
  uint32_t ERR_ENABLE_REG;    /*Error Signaling Enable Register*/
  uint32_t ERR_ENABLE_CLR_REG;/*Error Signaling Enable Clear Register*/
  uint8_t reserved4 [4];
  uint32_t FAULT_ADDRESS_REG; /*Fault Address Register*/
  uint32_t FAULT_STATUS_REG;  /*Fault Status Register*/
  uint32_t FAULT_CLEAR_REG;   /*Fault Clear Register*/
  uint8_t reserved5 [16];
  tms570_pinmux_t PINMUX;     /*Pin Multiplexing Control Registers*/
} tms570_iomm_t;


/*---------------------TMS570_IOMMPINMMR0---------------------*/
/* field: PINMMRx24To31 - Each of these byte-fields control the functionality on a given ball/pin. */
#define TMS570_IOMM_PINMMR0_PINMMRx24To31(val) BSP_FLD32(val,24, 31)
#define TMS570_IOMM_PINMMR0_PINMMRx24To31_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_IOMM_PINMMR0_PINMMRx24To31_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: PINMMRx16To23 - Each of these byte-fields control the functionality on a given ball/pin. */
#define TMS570_IOMM_PINMMR0_PINMMRx16To23(val) BSP_FLD32(val,16, 23)
#define TMS570_IOMM_PINMMR0_PINMMRx16To23_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_IOMM_PINMMR0_PINMMRx16To23_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: PINMMRx8To16 - Each of these byte-fields control the functionality on a given ball/pin. */
#define TMS570_IOMM_PINMMR0_PINMMRx8To16(val) BSP_FLD32(val,8, 15)
#define TMS570_IOMM_PINMMR0_PINMMRx8To16_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_IOMM_PINMMR0_PINMMRx8To16_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: PINMMRx0To7 - Each of these byte-fields control the functionality on a given ball/pin. */
#define TMS570_IOMM_PINMMR0_PINMMRx0To7(val) BSP_FLD32(val,0, 7)
#define TMS570_IOMM_PINMMR0_PINMMRx0To7_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_IOMM_PINMMR0_PINMMRx0To7_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*------------------TMS570_IOMMREVISION_REG------------------*/
/* field: REV_SCHEME - Revision Scheme */
#define TMS570_IOMM_REVISION_REG_REV_SCHEME(val) BSP_FLD32(val,30, 31)
#define TMS570_IOMM_REVISION_REG_REV_SCHEME_GET(reg) BSP_FLD32GET(reg,30, 31)
#define TMS570_IOMM_REVISION_REG_REV_SCHEME_SET(reg,val) BSP_FLD32SET(reg, val,30, 31)

/* field: REV_MODULE - Module Id */
#define TMS570_IOMM_REVISION_REG_REV_MODULE(val) BSP_FLD32(val,16, 27)
#define TMS570_IOMM_REVISION_REG_REV_MODULE_GET(reg) BSP_FLD32GET(reg,16, 27)
#define TMS570_IOMM_REVISION_REG_REV_MODULE_SET(reg,val) BSP_FLD32SET(reg, val,16, 27)

/* field: REV_RTL - RTL Revision */
#define TMS570_IOMM_REVISION_REG_REV_RTL(val) BSP_FLD32(val,11, 15)
#define TMS570_IOMM_REVISION_REG_REV_RTL_GET(reg) BSP_FLD32GET(reg,11, 15)
#define TMS570_IOMM_REVISION_REG_REV_RTL_SET(reg,val) BSP_FLD32SET(reg, val,11, 15)

/* field: REV_MAJOR - Major Revision */
#define TMS570_IOMM_REVISION_REG_REV_MAJOR(val) BSP_FLD32(val,8, 10)
#define TMS570_IOMM_REVISION_REG_REV_MAJOR_GET(reg) BSP_FLD32GET(reg,8, 10)
#define TMS570_IOMM_REVISION_REG_REV_MAJOR_SET(reg,val) BSP_FLD32SET(reg, val,8, 10)

/* field: REV_CUSTOM - REV CUSTOM 0 Custom Revision */
#define TMS570_IOMM_REVISION_REG_REV_CUSTOM(val) BSP_FLD32(val,6, 7)
#define TMS570_IOMM_REVISION_REG_REV_CUSTOM_GET(reg) BSP_FLD32GET(reg,6, 7)
#define TMS570_IOMM_REVISION_REG_REV_CUSTOM_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: REV_MINOR - Minor Revision */
#define TMS570_IOMM_REVISION_REG_REV_MINOR(val) BSP_FLD32(val,0, 5)
#define TMS570_IOMM_REVISION_REG_REV_MINOR_GET(reg) BSP_FLD32GET(reg,0, 5)
#define TMS570_IOMM_REVISION_REG_REV_MINOR_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-------------------TMS570_IOMMENDIAN_REG-------------------*/
/* field: ENDIAN - Device endianness */
#define TMS570_IOMM_ENDIAN_REG_ENDIAN BSP_FLD32(0)


/*--------------------TMS570_IOMMKICK_REG0--------------------*/
/* field: KICK0 - Kicker 0 Register. */
#define TMS570_IOMM_KICK_REG0_KICK0(val) BSP_FLD32(val,0, 31)
#define TMS570_IOMM_KICK_REG0_KICK0_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_IOMM_KICK_REG0_KICK0_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_IOMMKICK_REG1--------------------*/
/* field: KICK1 - Kicker 1 Register. */
#define TMS570_IOMM_KICK_REG1_KICK1(val) BSP_FLD32(val,0, 31)
#define TMS570_IOMM_KICK_REG1_KICK1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_IOMM_KICK_REG1_KICK1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------TMS570_IOMMERR_RAW_STATUS_REG---------------*/
/* field: ADDR_ERR - Addressing Error Status and Error Signaling Enable. */
#define TMS570_IOMM_ERR_RAW_STATUS_REG_ADDR_ERR BSP_FLD32(1)

/* field: PROT_ERR - register inside the IOMM is written in the CPU's user mode of operation. */
#define TMS570_IOMM_ERR_RAW_STATUS_REG_PROT_ERR BSP_FLD32(0)


/*-------------TMS570_IOMMERR_ENABLED_STATUS_REG-------------*/
/* field: ENABLED_ADDR_ERR - Addressing Error Signaling Enable Status and Status Clear */
#define TMS570_IOMM_ERR_ENABLED_STATUS_REG_ENABLED_ADDR_ERR BSP_FLD32(1)

/* field: ENABLED_PROT_ERR - Protection Error Signaling Enable Status and Status Clear */
#define TMS570_IOMM_ERR_ENABLED_STATUS_REG_ENABLED_PROT_ERR BSP_FLD32(0)


/*-----------------TMS570_IOMMERR_ENABLE_REG-----------------*/
/* field: ADDR_ERR_EN - Addressing Error Signaling Enable */
#define TMS570_IOMM_ERR_ENABLE_REG_ADDR_ERR_EN BSP_FLD32(1)

/* field: PROT_ERR_EN - Protection ErrorSignaling Enable */
#define TMS570_IOMM_ERR_ENABLE_REG_PROT_ERR_EN BSP_FLD32(0)


/*---------------TMS570_IOMMERR_ENABLE_CLR_REG---------------*/
/* field: ADDR_ERR_EN_CLR - Addressing Error Signaling Enable Clear */
#define TMS570_IOMM_ERR_ENABLE_CLR_REG_ADDR_ERR_EN_CLR BSP_FLD32(1)

/* field: PROT_ERR_EN_CLR - Protection Error Signaling Enable Clear */
#define TMS570_IOMM_ERR_ENABLE_CLR_REG_PROT_ERR_EN_CLR BSP_FLD32(0)


/*----------------TMS570_IOMMFAULT_ADDRESS_REG----------------*/
/* field: FAULT_ADDR - Fault Address. */
#define TMS570_IOMM_FAULT_ADDRESS_REG_FAULT_ADDR(val) BSP_FLD32(val,0, 31)
#define TMS570_IOMM_FAULT_ADDRESS_REG_FAULT_ADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_IOMM_FAULT_ADDRESS_REG_FAULT_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------TMS570_IOMMFAULT_STATUS_REG----------------*/
/* field: FAULT_ID - Faulting Transaction ID */
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_ID(val) BSP_FLD32(val,24, 27)
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_ID_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_ID_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: FAULT_MSTID - ID of Master that initiated the faulting transaction */
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_MSTID(val) BSP_FLD32(val,16, 23)
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_MSTID_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_MSTID_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: FAULT_PRIVID - Faulting Privilege ID */
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_PRIVID(val) BSP_FLD32(val,9, 12)
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_PRIVID_GET(reg) BSP_FLD32GET(reg,9, 12)
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_PRIVID_SET(reg,val) BSP_FLD32SET(reg, val,9, 12)

/* field: FAULT_TYPE - Type of fault detected */
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_TYPE(val) BSP_FLD32(val,0, 5)
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_TYPE_GET(reg) BSP_FLD32GET(reg,0, 5)
#define TMS570_IOMM_FAULT_STATUS_REG_FAULT_TYPE_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-----------------TMS570_IOMMFAULT_CLEAR_REG-----------------*/
/* field: FAULT_CLEAR - Fault Clear */
#define TMS570_IOMM_FAULT_CLEAR_REG_FAULT_CLEAR BSP_FLD32(0)


/*---------------------TMS570_IOMMPINMUX---------------------*/
/* field: FAULT_CLEAR - Fault Clear */
#define TMS570_IOMM_PINMUX_FAULT_CLEAR BSP_FLD32(0)



#endif /* LIBBSP_ARM_tms570_IOMM */
