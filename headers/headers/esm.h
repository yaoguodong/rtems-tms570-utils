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
#ifndef LIBBSP_ARM_tms570_ESM
#define LIBBSP_ARM_tms570_ESM

#include <bsp/utility.h>

typedef struct{
  uint32_t EEPAPR1;           /*ESM Enable ERROR Pin Action/Response Register 1*/
  uint32_t DEPAPR1;           /*ESM Disable ERROR Pin Action/Response Register 1*/
  uint32_t IESR1;             /*ESM Interrupt Enable Set/Status Register 1*/
  uint32_t IECR1;             /*ESM Interrupt Enable Clear/Status Register 1*/
  uint32_t ILSR1;             /*Interrupt Level Set/Status Register 1*/
  uint32_t ILCR1;             /*Interrupt Level Clear/Status Register 1*/
  uint32_t SR1[3];            /*ESM Status Register 1*/
  uint32_t EPSR;              /*ESM ERROR Pin Status Register*/
  uint32_t IOFFHR;            /*ESM Interrupt Offset High Register*/
  uint32_t IOFFLR;            /*ESM Interrupt Offset Low Register*/
  uint32_t LTCR;              /*ESM Low-Time Counter Register*/
  uint32_t LTCPR;             /*ESM Low-Time Counter Preload Register*/
  uint32_t EKR;               /*ESM Error Key Register*/
  uint32_t SSR2;              /*ESM Status Shadow Register 2*/
  uint32_t IEPSR4;            /*ESM Influence ERROR Pin Set/Status Register 4*/
  uint32_t IEPCR4;            /*ESM Influence ERROR Pin Clear/Status Register 4*/
  uint32_t IESR4;             /*ESM Interrupt Enable Set/Status Register 4*/
  uint32_t IECR4;             /*ESM Interrupt Enable Clear/Status Register 4*/
  uint32_t ILSR4;             /*Interrupt Level Set/Status Register 4*/
  uint32_t ILCR4;             /*Interrupt Level Clear/Status Register 4*/
  uint32_t SR4;               /*ESM Status Register 4*/
} tms570_esm_t;


/*---------------------TMS570_ESMEEPAPR1---------------------*/
/* field: IEPSET - Enable ERROR Pin Action/Response on Group 1. */
#define TMS570_ESM_EEPAPR1_IEPSET(val) BSP_FLD32(val,0, 31)
#define TMS570_ESM_EEPAPR1_IEPSET_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_ESM_EEPAPR1_IEPSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_ESMDEPAPR1---------------------*/
/* field: IEPCLR - Disable ERROR Pin Action/Response on Group 1. */
#define TMS570_ESM_DEPAPR1_IEPCLR(val) BSP_FLD32(val,0, 31)
#define TMS570_ESM_DEPAPR1_IEPCLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_ESM_DEPAPR1_IEPCLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_ESMIESR1----------------------*/
/* field: INTENSET - Set interrupt Enable */
#define TMS570_ESM_IESR1_INTENSET(val) BSP_FLD32(val,0, 31)
#define TMS570_ESM_IESR1_INTENSET_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_ESM_IESR1_INTENSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_ESMIECR1----------------------*/
/* field: INTENCLR - Clear Interrupt Enable */
#define TMS570_ESM_IECR1_INTENCLR(val) BSP_FLD32(val,0, 31)
#define TMS570_ESM_IECR1_INTENCLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_ESM_IECR1_INTENCLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_ESMILSR1----------------------*/
/* field: INTLVLSET - Set Interrupt Priority */
#define TMS570_ESM_ILSR1_INTLVLSET(val) BSP_FLD32(val,0, 31)
#define TMS570_ESM_ILSR1_INTLVLSET_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_ESM_ILSR1_INTLVLSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_ESMILCR1----------------------*/
/* field: INTLVLCLR - Clear Interrupt Priority. */
#define TMS570_ESM_ILCR1_INTLVLCLR(val) BSP_FLD32(val,0, 31)
#define TMS570_ESM_ILCR1_INTLVLCLR_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_ESM_ILCR1_INTLVLCLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_ESMSR1-----------------------*/
/* field: ESF - Error Status Flag. Provides status information on a pending error. */
#define TMS570_ESM_SR1_ESF(val) BSP_FLD32(val,0, 31)
#define TMS570_ESM_SR1_ESF_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_ESM_SR1_ESF_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*-----------------------TMS570_ESMEPSR-----------------------*/
/* field: EPSF - ERROR Pin Status Flag. Provides status information for the ERROR Pin. */
#define TMS570_ESM_EPSR_EPSF BSP_FLD32(0)


/*----------------------TMS570_ESMIOFFHR----------------------*/
/* field: INTOFFH - Offset High Level Interrupt. */
#define TMS570_ESM_IOFFHR_INTOFFH(val) BSP_FLD32(val,0, 6)
#define TMS570_ESM_IOFFHR_INTOFFH_GET(reg) BSP_FLD32GET(reg,0, 6)
#define TMS570_ESM_IOFFHR_INTOFFH_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*----------------------TMS570_ESMIOFFLR----------------------*/
/* field: INTOFFL - Offset Low Level Interrupt. */
#define TMS570_ESM_IOFFLR_INTOFFL(val) BSP_FLD32(val,0, 6)
#define TMS570_ESM_IOFFLR_INTOFFL_GET(reg) BSP_FLD32GET(reg,0, 6)
#define TMS570_ESM_IOFFLR_INTOFFL_SET(reg,val) BSP_FLD32SET(reg, val,0, 6)


/*-----------------------TMS570_ESMLTCR-----------------------*/
/* field: LTC - ERROR Pin Low-Time Counter */
#define TMS570_ESM_LTCR_LTC(val) BSP_FLD32(val,0, 15)
#define TMS570_ESM_LTCR_LTC_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_ESM_LTCR_LTC_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------TMS570_ESMLTCPR----------------------*/
/* field: LTCP - ERROR Pin Low-Time Counter Pre-load Value */
#define TMS570_ESM_LTCPR_LTCP(val) BSP_FLD32(val,0, 15)
#define TMS570_ESM_LTCPR_LTCP_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_ESM_LTCPR_LTCP_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_ESMEKR-----------------------*/
/* field: EKEY - Error Key. The key to reset the ERROR pin or to force an error on the ERROR pin. */
#define TMS570_ESM_EKR_EKEY(val) BSP_FLD32(val,0, 3)
#define TMS570_ESM_EKR_EKEY_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_ESM_EKR_EKEY_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*-----------------------TMS570_ESMSSR2-----------------------*/
/* field: ESF - Error Status Flag. Shadow register for status information on pending error. */
#define TMS570_ESM_SSR2_ESF(val) BSP_FLD32(val,0, 31)
#define TMS570_ESM_SSR2_ESF_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_ESM_SSR2_ESF_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_ESMIEPSR4----------------------*/
/* field: IEPSET - Set Influence on ERROR Pin */
#define TMS570_ESM_IEPSR4_IEPSET(val) BSP_FLD32(val,32, 63)
#define TMS570_ESM_IEPSR4_IEPSET_GET(reg) BSP_FLD32GET(reg,32, 63)
#define TMS570_ESM_IEPSR4_IEPSET_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*----------------------TMS570_ESMIEPCR4----------------------*/
/* field: IEPCLR - Clear Influence on ERROR Pin */
#define TMS570_ESM_IEPCR4_IEPCLR(val) BSP_FLD32(val,32, 63)
#define TMS570_ESM_IEPCR4_IEPCLR_GET(reg) BSP_FLD32GET(reg,32, 63)
#define TMS570_ESM_IEPCR4_IEPCLR_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*----------------------TMS570_ESMIESR4----------------------*/
/* field: INTENSET - Set Interrupt Enable */
#define TMS570_ESM_IESR4_INTENSET(val) BSP_FLD32(val,32, 63)
#define TMS570_ESM_IESR4_INTENSET_GET(reg) BSP_FLD32GET(reg,32, 63)
#define TMS570_ESM_IESR4_INTENSET_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*----------------------TMS570_ESMIECR4----------------------*/
/* field: INTENCLR - Clear Interrupt Enable */
#define TMS570_ESM_IECR4_INTENCLR(val) BSP_FLD32(val,32, 63)
#define TMS570_ESM_IECR4_INTENCLR_GET(reg) BSP_FLD32GET(reg,32, 63)
#define TMS570_ESM_IECR4_INTENCLR_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*----------------------TMS570_ESMILSR4----------------------*/
/* field: INTLVLSET - Set Interrupt Level */
#define TMS570_ESM_ILSR4_INTLVLSET(val) BSP_FLD32(val,32, 63)
#define TMS570_ESM_ILSR4_INTLVLSET_GET(reg) BSP_FLD32GET(reg,32, 63)
#define TMS570_ESM_ILSR4_INTLVLSET_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*----------------------TMS570_ESMILCR4----------------------*/
/* field: INTLVLCLR - Clear Interrupt Level */
#define TMS570_ESM_ILCR4_INTLVLCLR(val) BSP_FLD32(val,32, 63)
#define TMS570_ESM_ILCR4_INTLVLCLR_GET(reg) BSP_FLD32GET(reg,32, 63)
#define TMS570_ESM_ILCR4_INTLVLCLR_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)


/*-----------------------TMS570_ESMSR4-----------------------*/
/* field: ESF - Error Status Flag. Provides status information on a pending error. */
#define TMS570_ESM_SR4_ESF(val) BSP_FLD32(val,32, 63)
#define TMS570_ESM_SR4_ESF_GET(reg) BSP_FLD32GET(reg,32, 63)
#define TMS570_ESM_SR4_ESF_SET(reg,val) BSP_FLD32SET(reg, val,32, 63)



#endif /* LIBBSP_ARM_tms570_ESM */
