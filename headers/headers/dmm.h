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
#ifndef LIBBSP_ARM_tms570_DMM
#define LIBBSP_ARM_tms570_DMM

#include <bsp/utility.h>

typedef struct{
  uint32_t GLBCTRL;           /*DMM Global Control Register*/
  uint32_t INTSET;            /*DMM Interrupt Set Register*/
  uint32_t INTCLR;            /*DMM Interrupt Clear Register*/
  uint32_t INTLVL;            /*DMM Interrupt Level Register*/
  uint32_t INTFLG;            /*DMM Interrupt Flag Register*/
  uint32_t OFF1;              /*DMM Interrupt Offset 1 Register*/
  uint32_t OFF2;              /*DMM Interrupt Offset 2 Register*/
  uint32_t DDMDEST;           /*DMM Direct Data Mode Destination Register*/
  uint32_t DDMBL;             /*DMM Direct Data Mode Blocksize Register*/
  uint32_t DDMPT;             /*DMM Direct Data Mode Pointer Register*/
  uint32_t INTPT;             /*DMM Direct Data Mode Interrupt Pointer Register*/
  uint32_t DEST0REG1;         /*DMM Destination 0 Region 1*/
  uint32_t DEST0BL1;          /*DMM Destination 0 Blocksize 1*/
  uint32_t DEST0REG2;         /*DMM Destination 0 Region 2*/
  uint32_t DEST0BL2;          /*DMM Destination 0 Blocksize 2*/
  uint32_t DEST1REG1;         /*DMM Destination 1 Region 1*/
  uint32_t DEST1BL1;          /*DMM Destination 1 Blocksize 1*/
  uint32_t DEST1REG2;         /*DMM Destination 1 Region 2*/
  uint32_t DEST1BL2;          /*DMM Destination 1 Blocksize 2*/
  uint32_t DEST2REG1;         /*DMM Destination 2 Region 1*/
  uint32_t DEST2BL1;          /*DMM Destination 2 Blocksize 1*/
  uint32_t DEST2REG2;         /*DMM Destination 2 Region 2*/
  uint32_t DEST2BL2;          /*DMM Destination 2 Blocksize 2*/
  uint32_t DEST3REG1;         /*DMM Destination 3 Region 1*/
  uint32_t DEST3BL1;          /*DMM Destination 3 Blocksize 1*/
  uint32_t DEST3REG2;         /*DMM Destination 3 Region 2*/
  uint32_t DEST3BL2;          /*DMM Destination 3 Blocksize 2*/
  uint32_t PC0;               /*DMM Pin Control 0*/
  uint32_t PC1;               /*DMM Pin Control 1*/
  uint32_t PC2;               /*DMM Pin Control 2*/
  uint32_t PC3;               /*DMM Pin Control 3*/
  uint32_t PC4;               /*DMM Pin Control 4*/
  uint32_t PC5;               /*DMM Pin Control 5*/
  uint32_t PC6;               /*DMM Pin Control 6*/
  uint32_t PC7;               /*DMM Pin Control 7*/
  uint32_t PC8;               /*DMM Pin Control 8*/
} tms570_dmm_t;


/*---------------------TMS570_DMMGLBCTRL---------------------*/
/* field: BUSY - Busy indicator. */
#define TMS570_DMM_GLBCTRL_BUSY BSP_FLD32(24)

/* field: CONTCLK - Continuous DMMCLK input. */
#define TMS570_DMM_GLBCTRL_CONTCLK BSP_FLD32(18)

/* field: COS - Continue on suspend. Influences behavior of module while in debug mode. */
#define TMS570_DMM_GLBCTRL_COS BSP_FLD32(17)

/* field: RESET - Reset. */
#define TMS570_DMM_GLBCTRL_RESET BSP_FLD32(16)

/* field: DDM_WIDTH - Packet Width in direct data mode. */
#define TMS570_DMM_GLBCTRL_DDM_WIDTH(val) BSP_FLD32(val,9, 10)
#define TMS570_DMM_GLBCTRL_DDM_WIDTH_GET(reg) BSP_FLD32GET(reg,9, 10)
#define TMS570_DMM_GLBCTRL_DDM_WIDTH_SET(reg,val) BSP_FLD32SET(reg, val,9, 10)

/* field: TM_DMM - Packet Format. */
#define TMS570_DMM_GLBCTRL_TM_DMM BSP_FLD32(8)

/* field: ON_OFF - Switch module on or off */
#define TMS570_DMM_GLBCTRL_ON_OFF(val) BSP_FLD32(val,0, 3)
#define TMS570_DMM_GLBCTRL_ON_OFF_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_DMM_GLBCTRL_ON_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------------TMS570_DMMINTSET----------------------*/
/* field: PROG_BUFF - Programmable Buffer Interrupt Set. */
#define TMS570_DMM_INTSET_PROG_BUFF BSP_FLD32(17)

/* field: EO_BUFF - EO_BUFF */
#define TMS570_DMM_INTSET_EO_BUFF BSP_FLD32(16)

/* field: DEST3REG2 - Destination 3 Region 2 Interrupt Set. */
#define TMS570_DMM_INTSET_DEST3REG2 BSP_FLD32(15)

/* field: DEST3REG1 - Destination 3 Region 1 Interrupt Set. */
#define TMS570_DMM_INTSET_DEST3REG1 BSP_FLD32(14)

/* field: DEST2REG2 - Destination 2 Region 2 Interrupt Set. */
#define TMS570_DMM_INTSET_DEST2REG2 BSP_FLD32(13)

/* field: DEST2REG1 - Destination 2 Region 1 Interrupt Set. */
#define TMS570_DMM_INTSET_DEST2REG1 BSP_FLD32(12)

/* field: DEST1REG2 - Destination 1 Region 2 Interrupt Set. */
#define TMS570_DMM_INTSET_DEST1REG2 BSP_FLD32(11)

/* field: DEST1REG1 - DEST1REG1 */
#define TMS570_DMM_INTSET_DEST1REG1 BSP_FLD32(10)

/* field: DEST0REG2 - Destination 0 Region 2 Interrupt Set. */
#define TMS570_DMM_INTSET_DEST0REG2 BSP_FLD32(9)

/* field: DEST0REG1 - Destination 0 Region 1 Interrupt Set. */
#define TMS570_DMM_INTSET_DEST0REG1 BSP_FLD32(8)

/* field: BUSERROR - Bus Error Response for errors generated when doing internal bus transfers. */
#define TMS570_DMM_INTSET_BUSERROR BSP_FLD32(7)

/* field: BUFF_OVF - Buffer Overflow. */
#define TMS570_DMM_INTSET_BUFF_OVF BSP_FLD32(6)

/* field: SRC_OVF - Source Overflow. */
#define TMS570_DMM_INTSET_SRC_OVF BSP_FLD32(5)

/* field: DEST3_ERR - Destination 3 Error. */
#define TMS570_DMM_INTSET_DEST3_ERR BSP_FLD32(4)

/* field: DEST2_ERR - Destination 2 Error Interrupt Set. */
#define TMS570_DMM_INTSET_DEST2_ERR BSP_FLD32(3)

/* field: DEST1_ERR - Destination 1 Error Interrupt Set. */
#define TMS570_DMM_INTSET_DEST1_ERR BSP_FLD32(2)

/* field: DEST0_ERR - Destination 0 Error Interrupt Set. */
#define TMS570_DMM_INTSET_DEST0_ERR BSP_FLD32(1)

/* field: PACKET_ERR_INT - Packet Error. */
#define TMS570_DMM_INTSET_PACKET_ERR_INT BSP_FLD32(0)


/*----------------------TMS570_DMMINTCLR----------------------*/
/* field: PROG_BUFF - Programmable Buffer Interrupt Set. */
#define TMS570_DMM_INTCLR_PROG_BUFF BSP_FLD32(17)

/* field: EO_BUFF - End of Buffer Interrupt Set. */
#define TMS570_DMM_INTCLR_EO_BUFF BSP_FLD32(16)

/* field: DEST3REG2 - was accessed at the startaddress of Destination 3 Region 2. */
#define TMS570_DMM_INTCLR_DEST3REG2 BSP_FLD32(15)

/* field: DEST3REG1 - Destination 3 Region 1 Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST3REG1 BSP_FLD32(14)

/* field: DEST2REG2 - Destination 2 Region 2 Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST2REG2 BSP_FLD32(13)

/* field: DEST2REG1 - Destination 2 Region 1 Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST2REG1 BSP_FLD32(12)

/* field: DEST1REG2 - Destination 1 Region 2 Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST1REG2 BSP_FLD32(11)

/* field: DEST1REG1 - Destination 1 Region 1 Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST1REG1 BSP_FLD32(10)

/* field: DEST0REG2 - Destination 0 Region 2 Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST0REG2 BSP_FLD32(9)

/* field: DEST0REG1 - Destination 0 Region 1 Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST0REG1 BSP_FLD32(8)

/* field: BUSERROR - Bus Error Response for errors generated when doing internal bus transfers. */
#define TMS570_DMM_INTCLR_BUSERROR BSP_FLD32(7)

/* field: BUFF_OVF - Buffer Overflow. */
#define TMS570_DMM_INTCLR_BUFF_OVF BSP_FLD32(6)

/* field: SRC_OVF - Source Overflow. */
#define TMS570_DMM_INTCLR_SRC_OVF BSP_FLD32(5)

/* field: DEST3_ERR - Destination 3 Error. */
#define TMS570_DMM_INTCLR_DEST3_ERR BSP_FLD32(4)

/* field: DEST2_ERR - Destination 2 Error Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST2_ERR BSP_FLD32(3)

/* field: DEST1_ERR - Destination 1 Error Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST1_ERR BSP_FLD32(2)

/* field: DEST0_ERR - Destination 0 Error Interrupt Set. */
#define TMS570_DMM_INTCLR_DEST0_ERR BSP_FLD32(1)

/* field: PACKET_ERR_INT - Packet Error. */
#define TMS570_DMM_INTCLR_PACKET_ERR_INT BSP_FLD32(0)


/*----------------------TMS570_DMMINTLVL----------------------*/
/* field: PROG_BUFF - Programmable Buffer Interrupt Level */
#define TMS570_DMM_INTLVL_PROG_BUFF BSP_FLD32(17)

/* field: EO_BUFF - End of Buffer Interrupt Level */
#define TMS570_DMM_INTLVL_EO_BUFF BSP_FLD32(16)

/* field: DEST3REG2 - Destination 3 Region 2 Interrupt Level */
#define TMS570_DMM_INTLVL_DEST3REG2 BSP_FLD32(15)

/* field: DEST3REG1 - Destination 3 Region 1 Interrupt Level */
#define TMS570_DMM_INTLVL_DEST3REG1 BSP_FLD32(14)

/* field: DEST2REG2 - Destination 2 Region 2 Interrupt Level */
#define TMS570_DMM_INTLVL_DEST2REG2 BSP_FLD32(13)

/* field: DEST2REG1 - Destination 2 Region 1 Interrupt Level */
#define TMS570_DMM_INTLVL_DEST2REG1 BSP_FLD32(12)

/* field: DEST1REG2 - Destination 1 Region 2 Interrupt Level */
#define TMS570_DMM_INTLVL_DEST1REG2 BSP_FLD32(11)

/* field: DEST1REG1 - Destination 1 Region 1 Interrupt Level */
#define TMS570_DMM_INTLVL_DEST1REG1 BSP_FLD32(10)

/* field: DEST0REG2 - Destination 0 Region 2 Interrupt Level */
#define TMS570_DMM_INTLVL_DEST0REG2 BSP_FLD32(9)

/* field: DEST0REG1 - Destination 0 Region 1 Interrupt Level */
#define TMS570_DMM_INTLVL_DEST0REG1 BSP_FLD32(8)

/* field: BUSERROR - BMM Bus Error Response */
#define TMS570_DMM_INTLVL_BUSERROR BSP_FLD32(7)

/* field: BUFF_OVF - Write Buffer Overflow Interrupt Level */
#define TMS570_DMM_INTLVL_BUFF_OVF BSP_FLD32(6)

/* field: SRC_OVF - Source Overflow Interrupt Level */
#define TMS570_DMM_INTLVL_SRC_OVF BSP_FLD32(5)

/* field: DEST3_ERR - Destination 3 Error Interrupt Level */
#define TMS570_DMM_INTLVL_DEST3_ERR BSP_FLD32(4)

/* field: DEST2_ERR - Destination 2 Error Interrupt Level */
#define TMS570_DMM_INTLVL_DEST2_ERR BSP_FLD32(3)

/* field: DEST1_ERR - Destination 1 Error Interrupt Level */
#define TMS570_DMM_INTLVL_DEST1_ERR BSP_FLD32(2)

/* field: DEST0_ERR - Destination 0 Error Interrupt Level */
#define TMS570_DMM_INTLVL_DEST0_ERR BSP_FLD32(1)

/* field: PACKET_ERR_INT - Packet Error Interrupt Level */
#define TMS570_DMM_INTLVL_PACKET_ERR_INT BSP_FLD32(0)


/*----------------------TMS570_DMMINTFLG----------------------*/
/* field: PROG_BUFF - Programmable Buffer Interrupt Flag */
#define TMS570_DMM_INTFLG_PROG_BUFF BSP_FLD32(17)

/* field: EO_BUFF - End of Buffer Interrupt Flag */
#define TMS570_DMM_INTFLG_EO_BUFF BSP_FLD32(16)

/* field: DEST3REG2 - Destination 3 Region 2 Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST3REG2 BSP_FLD32(15)

/* field: DEST3REG1 - Destination 3 Region 1 Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST3REG1 BSP_FLD32(14)

/* field: DEST2REG2 - Destination 2 Region 2 Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST2REG2 BSP_FLD32(13)

/* field: DEST2REG1 - Destination 2 Region 1 Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST2REG1 BSP_FLD32(12)

/* field: DEST1REG2 - Destination 1 Region 2 Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST1REG2 BSP_FLD32(11)

/* field: DEST1REG1 - Destination 1 Region 1 Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST1REG1 BSP_FLD32(10)

/* field: DEST0REG2 - Destination 0 Region 2 Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST0REG2 BSP_FLD32(9)

/* field: DEST0REG1 - Destination 0 Region 1 Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST0REG1 BSP_FLD32(8)

/* field: BUSERROR - BMM Bus Error Response. */
#define TMS570_DMM_INTFLG_BUSERROR BSP_FLD32(7)

/* field: BUFF_OVF - Write Buffer Overflow Interrupt Flag */
#define TMS570_DMM_INTFLG_BUFF_OVF BSP_FLD32(6)

/* field: SRC_OVF - Source Overflow Interrupt Flag */
#define TMS570_DMM_INTFLG_SRC_OVF BSP_FLD32(5)

/* field: DEST3_ERR - Destination 3 Error Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST3_ERR BSP_FLD32(4)

/* field: DEST2_ERR - Destination 2 Error Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST2_ERR BSP_FLD32(3)

/* field: DEST1_ERR - Destination 1 Error Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST1_ERR BSP_FLD32(2)

/* field: DEST0_ERR - Destination 0 Error Interrupt Flag */
#define TMS570_DMM_INTFLG_DEST0_ERR BSP_FLD32(1)

/* field: PACKET_ERR_INT - Packet Error Interrupt Flag */
#define TMS570_DMM_INTFLG_PACKET_ERR_INT BSP_FLD32(0)


/*-----------------------TMS570_DMMOFF1-----------------------*/
/* field: OFFSET - User and privilege mode (read): */
#define TMS570_DMM_OFF1_OFFSET(val) BSP_FLD32(val,0, 4)
#define TMS570_DMM_OFF1_OFFSET_GET(reg) BSP_FLD32GET(reg,0, 4)
#define TMS570_DMM_OFF1_OFFSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*-----------------------TMS570_DMMOFF2-----------------------*/
/* field: OFFSET - User and privilege mode (read): */
#define TMS570_DMM_OFF2_OFFSET(val) BSP_FLD32(val,0, 4)
#define TMS570_DMM_OFF2_OFFSET_GET(reg) BSP_FLD32GET(reg,0, 4)
#define TMS570_DMM_OFF2_OFFSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*---------------------TMS570_DMMDDMDEST---------------------*/
/* field: STARTADDR - These bits define the starting address of the buffer. */
#define TMS570_DMM_DDMDEST_STARTADDR(val) BSP_FLD32(val,0, 31)
#define TMS570_DMM_DDMDEST_STARTADDR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_DMM_DDMDEST_STARTADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_DMMDDMBL----------------------*/
/* field: BLOCKSIZE - These bits define the size of the buffer region */
#define TMS570_DMM_DDMBL_BLOCKSIZE(val) BSP_FLD32(val,0, 3)
#define TMS570_DMM_DDMBL_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_DMM_DDMBL_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------------TMS570_DMMDDMPT----------------------*/
/* field: POINTER - These bits hold the pointer to the next entry to be written in the buffer. */
#define TMS570_DMM_DDMPT_POINTER(val) BSP_FLD32(val,0, 14)
#define TMS570_DMM_DDMPT_POINTER_GET(reg) BSP_FLD32GET(reg,0, 14)
#define TMS570_DMM_DDMPT_POINTER_SET(reg,val) BSP_FLD32SET(reg, val,0, 14)


/*----------------------TMS570_DMMINTPT----------------------*/
/* field: INTPT - Interrupt Pointer. When the buffer pointer (Section 30.3. */
#define TMS570_DMM_INTPT_INTPT(val) BSP_FLD32(val,0, 14)
#define TMS570_DMM_INTPT_INTPT_GET(reg) BSP_FLD32GET(reg,0, 14)
#define TMS570_DMM_INTPT_INTPT_SET(reg,val) BSP_FLD32SET(reg, val,0, 14)


/*--------------------TMS570_DMMDEST0REG1--------------------*/
/* field: BASEADDR - These bits define the base address of the 256kB region where the buffer is located. */
#define TMS570_DMM_DEST0REG1_BASEADDR(val) BSP_FLD32(val,18, 31)
#define TMS570_DMM_DEST0REG1_BASEADDR_GET(reg) BSP_FLD32GET(reg,18, 31)
#define TMS570_DMM_DEST0REG1_BASEADDR_SET(reg,val) BSP_FLD32SET(reg, val,18, 31)

/* field: BLOCKADDR - These bits define the starting address of the buffer in the 256kB page. */
#define TMS570_DMM_DEST0REG1_BLOCKADDR(val) BSP_FLD32(val,0, 17)
#define TMS570_DMM_DEST0REG1_BLOCKADDR_GET(reg) BSP_FLD32GET(reg,0, 17)
#define TMS570_DMM_DEST0REG1_BLOCKADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 17)


/*---------------------TMS570_DMMDEST0BL1---------------------*/
/* field: BLOCKSIZE - These bits define the length of the buffer region. */
#define TMS570_DMM_DEST0BL1_BLOCKSIZE(val) BSP_FLD32(val,0, 3)
#define TMS570_DMM_DEST0BL1_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_DMM_DEST0BL1_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------TMS570_DMMDEST0REG2--------------------*/
/* field: BASEADDR - These bits define the base address of the 256kB region where the buffer is located. */
#define TMS570_DMM_DEST0REG2_BASEADDR(val) BSP_FLD32(val,18, 31)
#define TMS570_DMM_DEST0REG2_BASEADDR_GET(reg) BSP_FLD32GET(reg,18, 31)
#define TMS570_DMM_DEST0REG2_BASEADDR_SET(reg,val) BSP_FLD32SET(reg, val,18, 31)

/* field: BLOCKADDR - These bits define the starting address of the buffer in the 256kB page. */
#define TMS570_DMM_DEST0REG2_BLOCKADDR(val) BSP_FLD32(val,0, 17)
#define TMS570_DMM_DEST0REG2_BLOCKADDR_GET(reg) BSP_FLD32GET(reg,0, 17)
#define TMS570_DMM_DEST0REG2_BLOCKADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 17)


/*---------------------TMS570_DMMDEST0BL2---------------------*/
/* field: BLOCKSIZE - These bits define the length of the buffer region. */
#define TMS570_DMM_DEST0BL2_BLOCKSIZE(val) BSP_FLD32(val,0, 3)
#define TMS570_DMM_DEST0BL2_BLOCKSIZE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_DMM_DEST0BL2_BLOCKSIZE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-----------------------TMS570_DMMPC0-----------------------*/
/* field: ENAFUNC - Functional mode of DMMENA pin. */
#define TMS570_DMM_PC0_ENAFUNC BSP_FLD32(18)

/* field: DATAxFUNC - Functional mode of DMMDATA[x] pin. */
#define TMS570_DMM_PC0_DATAxFUNC(val) BSP_FLD32(val,2, 17)
#define TMS570_DMM_PC0_DATAxFUNC_GET(reg) BSP_FLD32GET(reg,2, 17)
#define TMS570_DMM_PC0_DATAxFUNC_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKFUNC - Functional mode of DMMCLK pin. */
#define TMS570_DMM_PC0_CLKFUNC BSP_FLD32(1)

/* field: SYNCFUNC - Functional mode of DMMSYNC pin. */
#define TMS570_DMM_PC0_SYNCFUNC BSP_FLD32(0)


/*-----------------------TMS570_DMMPC1-----------------------*/
/* field: ENADIR - Direction of DMMENA pin. */
#define TMS570_DMM_PC1_ENADIR BSP_FLD32(18)

/* field: DATAxDIR - Direction of DMMDATA[x] pin. */
#define TMS570_DMM_PC1_DATAxDIR(val) BSP_FLD32(val,2, 17)
#define TMS570_DMM_PC1_DATAxDIR_GET(reg) BSP_FLD32GET(reg,2, 17)
#define TMS570_DMM_PC1_DATAxDIR_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKDIR - Direction of DMMCLK pin. */
#define TMS570_DMM_PC1_CLKDIR BSP_FLD32(1)

/* field: SYNCDIR - Direction of DMMSYNC pin. */
#define TMS570_DMM_PC1_SYNCDIR BSP_FLD32(0)


/*-----------------------TMS570_DMMPC2-----------------------*/
/* field: ENAIN - DMMENA input. This bit reflects the state of the pin in all modes. */
#define TMS570_DMM_PC2_ENAIN BSP_FLD32(18)

/* field: DATAxIN - DMMDATA[x] input. This bit reflects the state of the pin in all modes. */
#define TMS570_DMM_PC2_DATAxIN(val) BSP_FLD32(val,2, 17)
#define TMS570_DMM_PC2_DATAxIN_GET(reg) BSP_FLD32GET(reg,2, 17)
#define TMS570_DMM_PC2_DATAxIN_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKIN - DMMCLK input. This bit reflects the state of the pin in all modes. */
#define TMS570_DMM_PC2_CLKIN BSP_FLD32(1)

/* field: SYNCIN - DMMSYNC input. */
#define TMS570_DMM_PC2_SYNCIN BSP_FLD32(0)


/*-----------------------TMS570_DMMPC3-----------------------*/
/* field: ENAOUT - Output state of DMMENA pin. */
#define TMS570_DMM_PC3_ENAOUT BSP_FLD32(18)

/* field: DATAxOUT - Output state of DMMDATA[x] pin. This bit sets the pin to logic low or high level. */
#define TMS570_DMM_PC3_DATAxOUT(val) BSP_FLD32(val,2, 17)
#define TMS570_DMM_PC3_DATAxOUT_GET(reg) BSP_FLD32GET(reg,2, 17)
#define TMS570_DMM_PC3_DATAxOUT_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKOUT - Output state of DMMCLK pin. */
#define TMS570_DMM_PC3_CLKOUT BSP_FLD32(1)

/* field: SYNCOUT - Output state of DMMSYNC pin. This bit sets the pin to logic low or high level. */
#define TMS570_DMM_PC3_SYNCOUT BSP_FLD32(0)


/*-----------------------TMS570_DMMPC4-----------------------*/
/* field: ENASET - control register bit to 1 regardless of the current value in the ENAOUT bit. */
#define TMS570_DMM_PC4_ENASET BSP_FLD32(18)

/* field: DATAxSET - Sets output state of DMMDATA[x] pin to logic high. */
#define TMS570_DMM_PC4_DATAxSET(val) BSP_FLD32(val,2, 17)
#define TMS570_DMM_PC4_DATAxSET_GET(reg) BSP_FLD32GET(reg,2, 17)
#define TMS570_DMM_PC4_DATAxSET_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKSET - Sets output state of DMMCLK pin to logic high. */
#define TMS570_DMM_PC4_CLKSET BSP_FLD32(1)

/* field: SYNCSET - Sets output state of DMMSYNC pin logic high. */
#define TMS570_DMM_PC4_SYNCSET BSP_FLD32(0)


/*-----------------------TMS570_DMMPC5-----------------------*/
/* field: ENACLR - Sets output state of DMMENA pin to logic low. */
#define TMS570_DMM_PC5_ENACLR BSP_FLD32(18)

/* field: DATAxCLR - Sets output state of DMMDATA[x] pin to logic low. */
#define TMS570_DMM_PC5_DATAxCLR(val) BSP_FLD32(val,2, 17)
#define TMS570_DMM_PC5_DATAxCLR_GET(reg) BSP_FLD32GET(reg,2, 17)
#define TMS570_DMM_PC5_DATAxCLR_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKCLR - Sets output state of DMMCLK pin to logic low. */
#define TMS570_DMM_PC5_CLKCLR BSP_FLD32(1)

/* field: SYNCCLR - Sets output state of DMMSYNC pin to logic low. */
#define TMS570_DMM_PC5_SYNCCLR BSP_FLD32(0)


/*-----------------------TMS570_DMMPC6-----------------------*/
/* field: ENAPDR - Open Drain enable. */
#define TMS570_DMM_PC6_ENAPDR BSP_FLD32(18)

/* field: DATAxPDR - Open Drain enable. */
#define TMS570_DMM_PC6_DATAxPDR(val) BSP_FLD32(val,2, 17)
#define TMS570_DMM_PC6_DATAxPDR_GET(reg) BSP_FLD32GET(reg,2, 17)
#define TMS570_DMM_PC6_DATAxPDR_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPDR - Open Drain enable. */
#define TMS570_DMM_PC6_CLKPDR BSP_FLD32(1)

/* field: SYNCPDR - Open Drain enable. */
#define TMS570_DMM_PC6_SYNCPDR BSP_FLD32(0)


/*-----------------------TMS570_DMMPC7-----------------------*/
/* field: ENAPDIS - Pull disable. */
#define TMS570_DMM_PC7_ENAPDIS BSP_FLD32(18)

/* field: DATAxPDIS - Pull disable. */
#define TMS570_DMM_PC7_DATAxPDIS(val) BSP_FLD32(val,2, 17)
#define TMS570_DMM_PC7_DATAxPDIS_GET(reg) BSP_FLD32GET(reg,2, 17)
#define TMS570_DMM_PC7_DATAxPDIS_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPDIS - Pull disable. */
#define TMS570_DMM_PC7_CLKPDIS BSP_FLD32(1)

/* field: SYNCPDIS - Pull disable. */
#define TMS570_DMM_PC7_SYNCPDIS BSP_FLD32(0)


/*-----------------------TMS570_DMMPC8-----------------------*/
/* field: ENAPSEL - Pull disable. */
#define TMS570_DMM_PC8_ENAPSEL BSP_FLD32(18)

/* field: DATAxPSEL - Pull disable. */
#define TMS570_DMM_PC8_DATAxPSEL(val) BSP_FLD32(val,2, 17)
#define TMS570_DMM_PC8_DATAxPSEL_GET(reg) BSP_FLD32GET(reg,2, 17)
#define TMS570_DMM_PC8_DATAxPSEL_SET(reg,val) BSP_FLD32SET(reg, val,2, 17)

/* field: CLKPSEL - Pull disable. */
#define TMS570_DMM_PC8_CLKPSEL BSP_FLD32(1)

/* field: SYNCPSEL - Pull disable. */
#define TMS570_DMM_PC8_SYNCPSEL BSP_FLD32(0)



#endif /* LIBBSP_ARM_tms570_DMM */
