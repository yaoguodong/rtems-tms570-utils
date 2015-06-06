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
#ifndef LIBBSP_ARM_tms570_PBIST
#define LIBBSP_ARM_tms570_PBIST

#include <bsp/utility.h>

typedef struct{
  uint32_t DNW[88];           /*Reserved DO NOT WRITE*/
  uint32_t RAMT;              /*RAM Configuration Register*/
  uint32_t DLR;               /*Datalogger Register*/
  uint8_t reserved1 [24];
  uint32_t PACT;              /*PBIST Activate/ROM Clock Enable Register*/
  uint32_t PBISTID;           /*PBIST ID Register*/
  uint32_t OVER;              /*Override Register*/
  uint8_t reserved2 [4];
  uint32_t FSRF0;             /*Fail Status Fail Register 0*/
  uint8_t reserved3 [4];
  uint32_t FSRC0;             /*Fail Status Count Register 0*/
  uint32_t FSRC1;             /*Fail Status Count Register 1*/
  uint32_t FSRA0;             /*Fail Status Address 0 Register*/
  uint32_t FSRA1;             /*Fail Status Address 1 Register*/
  uint32_t FSRDL0;            /*Fail Status Data Register 0*/
  uint8_t reserved4 [4];
  uint32_t FSRDL1;            /*Fail Status Data Register 1*/
  uint8_t reserved5 [12];
  uint32_t ROM;               /*ROM Mask Register*/
  uint32_t ALGO;              /*ROM Algorithm Mask Register*/
  uint32_t RINFOL;            /*RAM Info Mask Lower Register*/
  uint32_t RINFOUL;           /*RAM Info Mask Lower Register*/
} tms570_pbist_t;


/*----------------------TMS570_PBISTDNW----------------------*/
/* field: Reserved - Do not write */
#define TMS570_PBIST_DNW_Reserved(val) BSP_FLD32(val,0, 31)
#define TMS570_PBIST_DNW_Reserved_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PBIST_DNW_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_PBISTRAMT----------------------*/
/* field: RGS - Ram Group Select. Refer Table 2-5 for information on the RGS value for each memory. */
#define TMS570_PBIST_RAMT_RGS(val) BSP_FLD32(val,24, 31)
#define TMS570_PBIST_RAMT_RGS_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_PBIST_RAMT_RGS_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: RDS - Return Data Select. Refer Table 2-5 for information on the RDS values for each memory. */
#define TMS570_PBIST_RAMT_RDS(val) BSP_FLD32(val,16, 23)
#define TMS570_PBIST_RAMT_RDS_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_PBIST_RAMT_RDS_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: DWR - Data Width Register */
#define TMS570_PBIST_RAMT_DWR(val) BSP_FLD32(val,8, 15)
#define TMS570_PBIST_RAMT_DWR_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_PBIST_RAMT_DWR_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: SMS - Sense Margin Select Register */
#define TMS570_PBIST_RAMT_SMS(val) BSP_FLD32(val,6, 7)
#define TMS570_PBIST_RAMT_SMS_GET(reg) BSP_FLD32GET(reg,6, 7)
#define TMS570_PBIST_RAMT_SMS_SET(reg,val) BSP_FLD32SET(reg, val,6, 7)

/* field: PLS - Pipeline Latency Select */
#define TMS570_PBIST_RAMT_PLS(val) BSP_FLD32(val,2, 5)
#define TMS570_PBIST_RAMT_PLS_GET(reg) BSP_FLD32GET(reg,2, 5)
#define TMS570_PBIST_RAMT_PLS_SET(reg,val) BSP_FLD32SET(reg, val,2, 5)

/* field: RLS - RAM Latency Select */
#define TMS570_PBIST_RAMT_RLS(val) BSP_FLD32(val,0, 1)
#define TMS570_PBIST_RAMT_RLS_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_PBIST_RAMT_RLS_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*----------------------TMS570_PBISTDLR----------------------*/
/* field: DLR4 - Config access: setting this bit allows the host processor to configure the PBIST controller registers */
#define TMS570_PBIST_DLR_DLR4 BSP_FLD32(4)

/* field: DLR2 - ROM-based testing: setting this bit enables the PBIST controller to execute test algorithms that are */
#define TMS570_PBIST_DLR_DLR2 BSP_FLD32(2)


/*----------------------TMS570_PBISTPACT----------------------*/
/* field: PACT1 - PBIST Activate */
#define TMS570_PBIST_PACT_PACT1 BSP_FLD32(1)

/* field: PACT0 - ROM Clock Enable Register */
#define TMS570_PBIST_PACT_PACT0 BSP_FLD32(0)


/*--------------------TMS570_PBISTPBISTID--------------------*/
/* field: PBIST_ID - This is a unique ID assigned to each PBIST controller in a device with multiple PBIST controllers. */
#define TMS570_PBIST_PBISTID_PBIST_ID(val) BSP_FLD32(val,0, 7)
#define TMS570_PBIST_PBISTID_PBIST_ID_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_PBIST_PBISTID_PBIST_ID_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_PBISTOVER----------------------*/
/* field: OVER0 - RINFO Override Bit */
#define TMS570_PBIST_OVER_OVER0 BSP_FLD32(0)


/*---------------------TMS570_PBISTFSRF0---------------------*/
/* field: FSRF0 - Fail Status 0. */
#define TMS570_PBIST_FSRF0_FSRF0 BSP_FLD32(0)


/*---------------------TMS570_PBISTFSRC0---------------------*/
/* field: FSRC0 - Fail Status Count 0. Indicates the number of failures on port 0. */
#define TMS570_PBIST_FSRC0_FSRC0(val) BSP_FLD32(val,0, 7)
#define TMS570_PBIST_FSRC0_FSRC0_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_PBIST_FSRC0_FSRC0_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_PBISTFSRC1---------------------*/
/* field: FSRC1 - Fail Status Count 1. Indicates the number of failures on port 1. */
#define TMS570_PBIST_FSRC1_FSRC1(val) BSP_FLD32(val,0, 7)
#define TMS570_PBIST_FSRC1_FSRC1_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_PBIST_FSRC1_FSRC1_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_PBISTFSRA0---------------------*/
/* field: FSRA0 - Fail Status Address 0. Contains the address of the first failure. */
#define TMS570_PBIST_FSRA0_FSRA0(val) BSP_FLD32(val,0, 15)
#define TMS570_PBIST_FSRA0_FSRA0_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_PBIST_FSRA0_FSRA0_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------TMS570_PBISTFSRA1---------------------*/
/* field: FSRA1 - Fail Status Address 1. Contains the address of the first failure. */
#define TMS570_PBIST_FSRA1_FSRA1(val) BSP_FLD32(val,0, 15)
#define TMS570_PBIST_FSRA1_FSRA1_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_PBIST_FSRA1_FSRA1_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*---------------------TMS570_PBISTFSRDL0---------------------*/
/* field: FSRDL1 - Failure data on port 1 */
#define TMS570_PBIST_FSRDL0_FSRDL1(val) BSP_FLD32(val,0, 31)
#define TMS570_PBIST_FSRDL0_FSRDL1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PBIST_FSRDL0_FSRDL1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_PBISTFSRDL1---------------------*/
/* field: FSRDL1 - Failure data on port 1 */
#define TMS570_PBIST_FSRDL1_FSRDL1(val) BSP_FLD32(val,0, 31)
#define TMS570_PBIST_FSRDL1_FSRDL1_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PBIST_FSRDL1_FSRDL1_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_PBISTROM----------------------*/
/* field: ROM - ROM Mask */
#define TMS570_PBIST_ROM_ROM(val) BSP_FLD32(val,0, 1)
#define TMS570_PBIST_ROM_ROM_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_PBIST_ROM_ROM_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*----------------------TMS570_PBISTALGO----------------------*/
/* field: ROM_ALG_MASK - Each bit corresponds to a specific algorithm */
#define TMS570_PBIST_ALGO_ROM_ALG_MASK(val) BSP_FLD32(val,0, 31)
#define TMS570_PBIST_ALGO_ROM_ALG_MASK_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PBIST_ALGO_ROM_ALG_MASK_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_PBISTRINFOL---------------------*/
/* field: RAM_ALG_MASK_LOW - Each bit corresponds to a specific algorithm */
#define TMS570_PBIST_RINFOL_RAM_ALG_MASK_LOW(val) BSP_FLD32(val,0, 31)
#define TMS570_PBIST_RINFOL_RAM_ALG_MASK_LOW_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PBIST_RINFOL_RAM_ALG_MASK_LOW_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*--------------------TMS570_PBISTRINFOUL--------------------*/
/* field: RAM_ALG_MASK_UP - Each bit corresponds to a specific algorithm */
#define TMS570_PBIST_RINFOUL_RAM_ALG_MASK_UP(val) BSP_FLD32(val,0, 31)
#define TMS570_PBIST_RINFOUL_RAM_ALG_MASK_UP_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_PBIST_RINFOUL_RAM_ALG_MASK_UP_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)



#endif /* LIBBSP_ARM_tms570_PBIST */
