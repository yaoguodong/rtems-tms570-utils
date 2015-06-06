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
#ifndef LIBBSP_ARM_tms570_TCRAM
#define LIBBSP_ARM_tms570_TCRAM

#include <bsp/utility.h>

typedef struct{
  uint32_t RAMCTRL;           /*TCRAM Module Control Register*/
  uint32_t RAMTHRESHOLD;      /*TCRAM Module Single-Bit Error Correction Threshold Register*/
  uint32_t RAMOCCUR;          /*TCRAM Module Single-Bit Error Occurrences Control Register*/
  uint32_t RAMINTCTRL;        /*TCRAM Module Interrupt Control Register*/
  uint32_t RAMERRSTATUS;      /*TCRAM Module Error Status Register*/
  uint32_t RAMSERRADDR;       /*TCRAM Module Single-Bit Error Address Register*/
  uint8_t reserved1 [4];
  uint32_t RAMUERRADDR;       /*TCRAM Module Uncorrectable Error Address Register*/
  uint8_t reserved2 [16];
  uint32_t RAMTEST;           /*TCRAM Module Test Mode Control Register*/
  uint8_t reserved3 [4];
  uint32_t RAMADDRDECVECT;    /*TCRAM Module Test Mode Vector Register*/
  uint32_t RAMPERADDR;        /*TCRAM Module Parity Error Address Register*/
} tms570_tcram_t;


/*--------------------TMS570_TCRAMRAMCTRL--------------------*/
/* field: EMU_TRACE_DIS - Emulation Mode Trace Disable. */
#define TMS570_TCRAM_RAMCTRL_EMU_TRACE_DIS BSP_FLD32(30)

/* field: ADDR_PARITY_OVERRIDE - Address Parity Override. */
#define TMS570_TCRAM_RAMCTRL_ADDR_PARITY_OVERRIDE(val) BSP_FLD32(val,24, 27)
#define TMS570_TCRAM_RAMCTRL_ADDR_PARITY_OVERRIDE_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_TCRAM_RAMCTRL_ADDR_PARITY_OVERRIDE_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: ADDR_PARITY_DISABLE - Address Parity Detect Disable. */
#define TMS570_TCRAM_RAMCTRL_ADDR_PARITY_DISABLE(val) BSP_FLD32(val,16, 19)
#define TMS570_TCRAM_RAMCTRL_ADDR_PARITY_DISABLE_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_TCRAM_RAMCTRL_ADDR_PARITY_DISABLE_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: ECC_WR_EN - ECC Memory Write Enable. */
#define TMS570_TCRAM_RAMCTRL_ECC_WR_EN BSP_FLD32(8)

/* field: ECC_DETECT_EN - ECC Detect Enable. */
#define TMS570_TCRAM_RAMCTRL_ECC_DETECT_EN(val) BSP_FLD32(val,0, 3)
#define TMS570_TCRAM_RAMCTRL_ECC_DETECT_EN_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_TCRAM_RAMCTRL_ECC_DETECT_EN_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*------------------TMS570_TCRAMRAMTHRESHOLD------------------*/
/* field: THRESHOLD - Single-bit Error Threshold Count. */
#define TMS570_TCRAM_RAMTHRESHOLD_THRESHOLD(val) BSP_FLD32(val,0, 15)
#define TMS570_TCRAM_RAMTHRESHOLD_THRESHOLD_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_TCRAM_RAMTHRESHOLD_THRESHOLD_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------TMS570_TCRAMRAMOCCUR--------------------*/
/* field: SINGLE_ERROR - Single-bit Error Correction Occurrences. */
#define TMS570_TCRAM_RAMOCCUR_SINGLE_ERROR(val) BSP_FLD32(val,0, 15)
#define TMS570_TCRAM_RAMOCCUR_SINGLE_ERROR_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_TCRAM_RAMOCCUR_SINGLE_ERROR_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------TMS570_TCRAMRAMINTCTRL-------------------*/
/* field: SERR_EN - Single-bit Error Correction Interrupt Enable. */
#define TMS570_TCRAM_RAMINTCTRL_SERR_EN BSP_FLD32(0)


/*------------------TMS570_TCRAMRAMERRSTATUS------------------*/
/* field: WADDR_PAR_FAIL - This bit indicates a Write Address Parity Failure. */
#define TMS570_TCRAM_RAMERRSTATUS_WADDR_PAR_FAIL BSP_FLD32(9)

/* field: RADDR_PAR_FAIL - This bit indicates a Read Address Parity Failure. */
#define TMS570_TCRAM_RAMERRSTATUS_RADDR_PAR_FAIL BSP_FLD32(8)

/* field: DERR - This bit indicates a multi-bit error detected by the Cortex-R4F SECDED logic. */
#define TMS570_TCRAM_RAMERRSTATUS_DERR BSP_FLD32(5)

/* field: ADDR_COMP_LOGIC_FAIL - Address decode logic element failed. */
#define TMS570_TCRAM_RAMERRSTATUS_ADDR_COMP_LOGIC_FAIL BSP_FLD32(4)

/* field: ADDR_DEC_FAIL - Address decode failed. */
#define TMS570_TCRAM_RAMERRSTATUS_ADDR_DEC_FAIL BSP_FLD32(2)

/* field: SERR - Single Error Status. */
#define TMS570_TCRAM_RAMERRSTATUS_SERR BSP_FLD32(0)


/*------------------TMS570_TCRAMRAMSERRADDR------------------*/
/* field: SINGLE_ERROR_ADDRESS - This register captures the bits 17-3 of the address for which the Cortex-R4F CPU */
#define TMS570_TCRAM_RAMSERRADDR_SINGLE_ERROR_ADDRESS(val) BSP_FLD32(val,3, 17)
#define TMS570_TCRAM_RAMSERRADDR_SINGLE_ERROR_ADDRESS_GET(reg) BSP_FLD32GET(reg,3, 17)
#define TMS570_TCRAM_RAMSERRADDR_SINGLE_ERROR_ADDRESS_SET(reg,val) BSP_FLD32SET(reg, val,3, 17)


/*------------------TMS570_TCRAMRAMUERRADDR------------------*/
/* field: UNCORRECTABLE - address parity error. */
#define TMS570_TCRAM_RAMUERRADDR_UNCORRECTABLE(val) BSP_FLD32(val,3, 22)
#define TMS570_TCRAM_RAMUERRADDR_UNCORRECTABLE_GET(reg) BSP_FLD32GET(reg,3, 22)
#define TMS570_TCRAM_RAMUERRADDR_UNCORRECTABLE_SET(reg,val) BSP_FLD32SET(reg, val,3, 22)


/*--------------------TMS570_TCRAMRAMTEST--------------------*/
/* field: TRIGGER - Test Trigger. */
#define TMS570_TCRAM_RAMTEST_TRIGGER BSP_FLD32(8)

/* field: TEST_MODE - Test Mode. This field selects either equality of inequality testing schemes. */
#define TMS570_TCRAM_RAMTEST_TEST_MODE(val) BSP_FLD32(val,6, 7)
#define TMS570_TCRAM_RAMTEST_TEST_MODE_GET(reg) BSP_FLD32GET(reg,6, 7)
#define TMS570_TCRAM_RAMTEST_TEST_MODE_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: TEST_ENABLE - Test Enable. */
#define TMS570_TCRAM_RAMTEST_TEST_ENABLE(val) BSP_FLD32(val,0, 3)
#define TMS570_TCRAM_RAMTEST_TEST_ENABLE_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_TCRAM_RAMTEST_TEST_ENABLE_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-----------------TMS570_TCRAMRAMADDRDECVECT-----------------*/
/* field: ECC_SELECT - ECC Select. */
#define TMS570_TCRAM_RAMADDRDECVECT_ECC_SELECT BSP_FLD32(26)

/* field: RAM_CHIP_SELECT - RAM Chip Select. */
#define TMS570_TCRAM_RAMADDRDECVECT_RAM_CHIP_SELECT(val) BSP_FLD32(val,0, 15)
#define TMS570_TCRAM_RAMADDRDECVECT_RAM_CHIP_SELECT_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_TCRAM_RAMADDRDECVECT_RAM_CHIP_SELECT_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------TMS570_TCRAMRAMPERADDR-------------------*/
/* field: ADDRESS_PARITY - Parity Error Address. */
#define TMS570_TCRAM_RAMPERADDR_ADDRESS_PARITY(val) BSP_FLD32(val,3, 22)
#define TMS570_TCRAM_RAMPERADDR_ADDRESS_PARITY_GET(reg) BSP_FLD32GET(reg,3, 22)
#define TMS570_TCRAM_RAMPERADDR_ADDRESS_PARITY_SET(reg,val) BSP_FLD32SET(reg, val,3, 22)



#endif /* LIBBSP_ARM_tms570_TCRAM */