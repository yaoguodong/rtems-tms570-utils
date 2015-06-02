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
#ifndef LIBBSP_ARM_tms570_FLASH
#define LIBBSP_ARM_tms570_FLASH

#include <bsp/utility.h>

typedef struct{
  uint32_t FRDCNTL;           /*Flash Option Control Register*/
  uint8_t reserved1 [4];
  uint32_t FEDACTRL1;         /*Flash Error Detection and Correction Control Register 1*/
  uint32_t FEDACTRL2;         /*Flash Error Detection and Correction Control Register 2*/
  uint32_t FCOR_ERR_CNT;      /*Flash Correctable Error Count Register*/
  uint32_t FCOR_ERR_ADD;      /*Flash Correctable Error Address Register*/
  uint32_t FCOR_ERR_POS;      /*Flash Correctable Error Position Register*/
  uint32_t FEDACSTATUS;       /*Flash Error Detection and Correction Status Register*/
  uint32_t FUNC_ERR_ADD;      /*Flash Un-Correctable Error Address Register*/
  uint32_t FEDACSDIS;         /*Flash Error Detection and Correction Sector Disable Register*/
  uint32_t FPRIM_ADD_TAG;     /*Flash Primary Address Tag Register*/
  uint32_t FDUP_ADD_TAG;      /*Flash Duplicate Address Tag Register*/
  uint32_t FBPROT;            /*Flash Bank Protection Register*/
  uint32_t FBSE;              /*Flash Bank Sector Enable Register*/
  uint32_t FBBUSY;            /*Flash Bank Busy Register*/
  uint32_t FBAC;              /*Flash Bank Access Control Register*/
  uint32_t FBFALLBACK;        /*Flash Bank Fallback Power Register*/
  uint32_t FBPRDY;            /*Flash Bank/Pump Ready Register*/
  uint32_t FPAC1;             /*Flash Pump Access Control Register 1*/
  uint32_t FPAC2;             /*Flash Pump Access Control Register 2*/
  uint32_t FMAC;              /*Flash Module Access Control Register*/
  uint32_t FMSTAT;            /*Flash Module Status Register*/
  uint32_t FEMU_DMSW;         /*EEPROM Emulation Data MSW Register*/
  uint32_t FEMU_DLSW;         /*EEPROM Emulation Data LSW Register*/
  uint32_t FEMU_ECC;          /*EEPROM Emulation ECC Register*/
  uint8_t reserved2 [4];
  uint32_t FEMU_ADDR;         /*EEPROM Emulation Address Register*/
  uint32_t FDIAGCTRL;         /*Diagnostic Control Register*/
  uint32_t FRAW_DATAH;        /*Uncorrected Raw Data High Register*/
  uint32_t FRAW_DATAL;        /*Uncorrected Raw Data Low Register*/
  uint32_t FRAW_ECC;          /*Uncorrected Raw ECC Register*/
  uint32_t FPAR_OVR;          /*Parity Override Register*/
  uint8_t reserved3 [64];
  uint32_t FEDACSDIS2;        /*Flash Error Detection and Correction Sector Disable Register 2*/
  uint8_t reserved4 [452];
  uint32_t FSM_WR_ENA;        /*FSM Register Write Enable*/
  uint8_t reserved5 [24];
  uint32_t FSM_SECTOR;        /*FSM Sector Register*/
  uint8_t reserved6 [16];
  uint32_t EEPROM_CONFIG;     /*EEPROM Emulation Configuration Register*/
  uint8_t reserved7 [76];
  uint32_t EE_CTRL1;          /*EEPROM Emulation Error Detection and Correction Control Register 1*/
  uint32_t EE_CTRL2;          /*EEPROM Emulation Error Detection and Correction Control Register 2*/
  uint32_t EE_COR_ERR_CNT;    /*EEPROM Emulation Correctable Error Count Register*/
  uint32_t EE_COR_ERR_ADD;    /*EEPROM Emulation Correctable Error Address Register*/
  uint32_t EE_COR_ERR_POS;    /*EEPROM Emulation Correctable Error Bit Position Register*/
  uint32_t EE_STATUS;         /*EEPROM Emulation Error Status Register*/
  uint32_t EE_UNC_ERR_ADD;    /*EEPROM Emulation Un-Correctable Error Address Register*/
  uint8_t reserved8 [220];
  uint32_t FCFG_BANK;         /*Flash Bank Configuration Register*/
} tms570_flash_t;

/*-----------------------TMS570_FRDCNTL-----------------------*/
/* field: RWAIT - Random/data Read Wait State */
#define TMS570_FRDCNTL_RWAIT(val) BSP_FLD32(val,8, 11)
#define TMS570_FRDCNTL_RWAIT_GET(reg) BSP_FLD32GET(reg,8, 11)
#define TMS570_FRDCNTL_RWAIT_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: ASWSTEN - Address Setup Wait State Enable */
#define TMS570_FRDCNTL_ASWSTEN BSP_FLD32(4)

/* field: ENPIPE - Enable Pipeline Mode */
#define TMS570_FRDCNTL_ENPIPE BSP_FLD32(0)


/*----------------------TMS570_FEDACTRL1----------------------*/
/* field: SUSP_IGNR - Suspend Ignore. */
#define TMS570_FEDACTRL1_SUSP_IGNR BSP_FLD32(24)

/* field: EDACMODE - Error Correction Mode. */
#define TMS570_FEDACTRL1_EDACMODE(val) BSP_FLD32(val,16, 19)
#define TMS570_FEDACTRL1_EDACMODE_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_FEDACTRL1_EDACMODE_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: EOFEN - Event on Ones Fail Enable */
#define TMS570_FEDACTRL1_EOFEN BSP_FLD32(10)

/* field: EZFEN - Event on Zeros Fail Enable */
#define TMS570_FEDACTRL1_EZFEN BSP_FLD32(9)

/* field: EPEN - Error Profiling Enable. */
#define TMS570_FEDACTRL1_EPEN BSP_FLD32(8)

/* field: EDACEN - Error Detection and Correction Enable */
#define TMS570_FEDACTRL1_EDACEN(val) BSP_FLD32(val,0, 3)
#define TMS570_FEDACTRL1_EDACEN_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_FEDACTRL1_EDACEN_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------------TMS570_FEDACTRL2----------------------*/
/* field: SEC_THRESHOLD - Single Error Correction Threshold */
#define TMS570_FEDACTRL2_SEC_THRESHOLD(val) BSP_FLD32(val,0, 15)
#define TMS570_FEDACTRL2_SEC_THRESHOLD_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_FEDACTRL2_SEC_THRESHOLD_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------TMS570_FCOR_ERR_CNT--------------------*/
/* field: FERRCNT - Single Error Correction Count */
#define TMS570_FCOR_ERR_CNT_FERRCNT(val) BSP_FLD32(val,0, 15)
#define TMS570_FCOR_ERR_CNT_FERRCNT_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_FCOR_ERR_CNT_FERRCNT_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*--------------------TMS570_FCOR_ERR_ADD--------------------*/
/* field: COR_ERR_ADD - Correctable Error Address */
#define TMS570_FCOR_ERR_ADD_COR_ERR_ADD(val) BSP_FLD32(val,3, 31)
#define TMS570_FCOR_ERR_ADD_COR_ERR_ADD_GET(reg) BSP_FLD32GET(reg,3, 31)
#define TMS570_FCOR_ERR_ADD_COR_ERR_ADD_SET(reg,val) BSP_FLD32SET(reg, val,3, 31)

/* field: B_OFF - Byte Offset */
#define TMS570_FCOR_ERR_ADD_B_OFF(val) BSP_FLD32(val,0, 2)
#define TMS570_FCOR_ERR_ADD_B_OFF_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_FCOR_ERR_ADD_B_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*--------------------TMS570_FCOR_ERR_POS--------------------*/
/* field: BUS2 - Bus 2 Error */
#define TMS570_FCOR_ERR_POS_BUS2 BSP_FLD32(9)

/* field: TYPE - ErrorType */
#define TMS570_FCOR_ERR_POS_TYPE BSP_FLD32(8)

/* field: ERR_POS - The bit address of the single bit error */
#define TMS570_FCOR_ERR_POS_ERR_POS(val) BSP_FLD32(val,0, 7)
#define TMS570_FCOR_ERR_POS_ERR_POS_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_FCOR_ERR_POS_ERR_POS_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_FEDACSTATUS---------------------*/
/* field: Reserved - Read returns 0. Writes have no effect. */
#define TMS570_FEDACSTATUS_Reserved(val) BSP_FLD32(val,26, 31)
#define TMS570_FEDACSTATUS_Reserved_GET(reg) BSP_FLD32GET(reg,26, 31)
#define TMS570_FEDACSTATUS_Reserved_SET(reg,val) BSP_FLD32SET(reg, val,26, 31)

/* field: FSM_DONE - Flash State Machine Done */
#define TMS570_FEDACSTATUS_FSM_DONE BSP_FLD32(24)

/* field: COMB2_MAL_G - Bus 2 Compare Malfunction Flag. */
#define TMS570_FEDACSTATUS_COMB2_MAL_G BSP_FLD32(19)

/* field: ECC_B2_MAL_ - Bus 2 ECC Malfunction Error Flag */
#define TMS570_FEDACSTATUS_ECC_B2_MAL_ BSP_FLD32(18)

/* field: B2_UNC_ERR - Bus 2 uncorrectable error */
#define TMS570_FEDACSTATUS_B2_UNC_ERR BSP_FLD32(17)

/* field: B2_COR_ERR - Bus 2 Correctable Error */
#define TMS570_FEDACSTATUS_B2_COR_ERR BSP_FLD32(16)

/* field: D_UNC_ERR - Diagnostic Uncorrectable Error */
#define TMS570_FEDACSTATUS_D_UNC_ERR BSP_FLD32(12)

/* field: ADD_TAG_ERR - Address Tag Register Error Flag */
#define TMS570_FEDACSTATUS_ADD_TAG_ERR BSP_FLD32(11)

/* field: ADD_PAR_ERR - Address Parity Error Flag */
#define TMS570_FEDACSTATUS_ADD_PAR_ERR BSP_FLD32(10)

/* field: B1_UNC_ERR - Bus 1 Uncorrectable Error Flag */
#define TMS570_FEDACSTATUS_B1_UNC_ERR BSP_FLD32(8)

/* field: D_CORR_ERR - Diagnostic Correctable Error Status Flag */
#define TMS570_FEDACSTATUS_D_CORR_ERR BSP_FLD32(3)

/* field: ERR_ONE_FLG - Error on One Fail Status Flag */
#define TMS570_FEDACSTATUS_ERR_ONE_FLG BSP_FLD32(2)

/* field: ERR_ZERO__FLG - Error on Zero Fail Status Flag */
#define TMS570_FEDACSTATUS_ERR_ZERO__FLG BSP_FLD32(1)

/* field: ERR_PRF_FLG - Error Profiling Status Flag */
#define TMS570_FEDACSTATUS_ERR_PRF_FLG BSP_FLD32(0)


/*--------------------TMS570_FUNC_ERR_ADD--------------------*/
/* field: UNC_ERR_ADD - Un-correctable Error Address */
#define TMS570_FUNC_ERR_ADD_UNC_ERR_ADD(val) BSP_FLD32(val,3, 31)
#define TMS570_FUNC_ERR_ADD_UNC_ERR_ADD_GET(reg) BSP_FLD32GET(reg,3, 31)
#define TMS570_FUNC_ERR_ADD_UNC_ERR_ADD_SET(reg,val) BSP_FLD32SET(reg, val,3, 31)

/* field: B_OFF - Byte offset */
#define TMS570_FUNC_ERR_ADD_B_OFF(val) BSP_FLD32(val,0, 2)
#define TMS570_FUNC_ERR_ADD_B_OFF_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_FUNC_ERR_ADD_B_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*----------------------TMS570_FEDACSDIS----------------------*/
/* field: BankID1_Inverse - The bank ID inverse bits are used with the bank ID bits to select the bank for which a sector */
#define TMS570_FEDACSDIS_BankID1_Inverse(val) BSP_FLD32(val,29, 31)
#define TMS570_FEDACSDIS_BankID1_Inverse_GET(reg) BSP_FLD32GET(reg,29, 31)
#define TMS570_FEDACSDIS_BankID1_Inverse_SET(reg,val) BSP_FLD32SET(reg, val,29, 31)

/* field: SectorID1_inverse - The sector ID inverse bits are used with the sector ID bits to determine which sector is */
#define TMS570_FEDACSDIS_SectorID1_inverse(val) BSP_FLD32(val,24, 27)
#define TMS570_FEDACSDIS_SectorID1_inverse_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_FEDACSDIS_SectorID1_inverse_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: BankID1 - The bank ID bits are used with the bank ID inverse bits to select the bank for which a sector */
#define TMS570_FEDACSDIS_BankID1(val) BSP_FLD32(val,21, 23)
#define TMS570_FEDACSDIS_BankID1_GET(reg) BSP_FLD32GET(reg,21, 23)
#define TMS570_FEDACSDIS_BankID1_SET(reg,val) BSP_FLD32SET(reg, val,21, 23)

/* field: SectorID1 - The sector ID bits are used with the sector ID inverse bits to determine which sector is */
#define TMS570_FEDACSDIS_SectorID1(val) BSP_FLD32(val,16, 19)
#define TMS570_FEDACSDIS_SectorID1_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_FEDACSDIS_SectorID1_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: BankID0_Inverse - The bank ID inverse bits are used with the bank ID bits to select the bank for which a sector */
#define TMS570_FEDACSDIS_BankID0_Inverse(val) BSP_FLD32(val,13, 15)
#define TMS570_FEDACSDIS_BankID0_Inverse_GET(reg) BSP_FLD32GET(reg,13, 15)
#define TMS570_FEDACSDIS_BankID0_Inverse_SET(reg,val) BSP_FLD32SET(reg, val,13, 15)

/* field: SectorID0_inverse - The sector ID inverse bits are used with the sector ID bits to determine which sector is */
#define TMS570_FEDACSDIS_SectorID0_inverse(val) BSP_FLD32(val,8, 11)
#define TMS570_FEDACSDIS_SectorID0_inverse_GET(reg) BSP_FLD32GET(reg,8, 11)
#define TMS570_FEDACSDIS_SectorID0_inverse_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: BankID0 - The bank ID bits are used with the bank ID inverse bits to select the bank for which a sector */
#define TMS570_FEDACSDIS_BankID0(val) BSP_FLD32(val,5, 7)
#define TMS570_FEDACSDIS_BankID0_GET(reg) BSP_FLD32GET(reg,5, 7)
#define TMS570_FEDACSDIS_BankID0_SET(reg,val) BSP_FLD32SET(reg, val,5, 7)

/* field: SectorID0 - The sector ID bits are used with the sector ID inverse bits to determine which sector is */
#define TMS570_FEDACSDIS_SectorID0(val) BSP_FLD32(val,0, 3)
#define TMS570_FEDACSDIS_SectorID0_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_FEDACSDIS_SectorID0_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------TMS570_FPRIM_ADD_TAG--------------------*/
/* field: PRIM_ADD_TAG - Primary Address Tag Register */
#define TMS570_FPRIM_ADD_TAG_PRIM_ADD_TAG(val) BSP_FLD32(val,4, 31)
#define TMS570_FPRIM_ADD_TAG_PRIM_ADD_TAG_GET(reg) BSP_FLD32GET(reg,4, 31)
#define TMS570_FPRIM_ADD_TAG_PRIM_ADD_TAG_SET(reg,val) BSP_FLD32SET(reg, val,4, 31)

/* field: 0 - Always 0000 */
#define TMS570_FPRIM_ADD_TAG_0(val) BSP_FLD32(val,0, 3)
#define TMS570_FPRIM_ADD_TAG_0_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_FPRIM_ADD_TAG_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*--------------------TMS570_FDUP_ADD_TAG--------------------*/
/* field: DUP_ADD_TAG - Primary Address Tag Register */
#define TMS570_FDUP_ADD_TAG_DUP_ADD_TAG(val) BSP_FLD32(val,4, 31)
#define TMS570_FDUP_ADD_TAG_DUP_ADD_TAG_GET(reg) BSP_FLD32GET(reg,4, 31)
#define TMS570_FDUP_ADD_TAG_DUP_ADD_TAG_SET(reg,val) BSP_FLD32SET(reg, val,4, 31)


/*-----------------------TMS570_FBPROT-----------------------*/
/* field: PROTL1DIS - PROTL1DIS: Level 1 Protection Disabled */
#define TMS570_FBPROT_PROTL1DIS BSP_FLD32(0)


/*------------------------TMS570_FBSE------------------------*/
/* field: BSE - Bank Sector Enable */
#define TMS570_FBSE_BSE(val) BSP_FLD32(val,0, 15)
#define TMS570_FBSE_BSE_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_FBSE_BSE_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_FBBUSY-----------------------*/
/* field: BUSY - Bank Busy */
#define TMS570_FBBUSY_BUSY(val) BSP_FLD32(val,0, 7)
#define TMS570_FBBUSY_BUSY_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_FBBUSY_BUSY_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*------------------------TMS570_FBAC------------------------*/
/* field: OTPPROTDIS - OTP Sector Protection Disable. */
#define TMS570_FBAC_OTPPROTDIS(val) BSP_FLD32(val,16, 23)
#define TMS570_FBAC_OTPPROTDIS_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_FBAC_OTPPROTDIS_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: 15_8 - BAGP 0-FFh Bank Active Grace Period. */
#define TMS570_FBAC_15_8(val) BSP_FLD32(val,8, 15)
#define TMS570_FBAC_15_8_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_FBAC_15_8_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: VREADST - VREAD Setup. */
#define TMS570_FBAC_VREADST(val) BSP_FLD32(val,0, 7)
#define TMS570_FBAC_VREADST_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_FBAC_VREADST_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_FBFALLBACK---------------------*/
/* field: BANKPWR7 - Bank 7 Fallback Power Mode */
#define TMS570_FBFALLBACK_BANKPWR7(val) BSP_FLD32(val,14, 15)
#define TMS570_FBFALLBACK_BANKPWR7_GET(reg) BSP_FLD32GET(reg,14, 15)
#define TMS570_FBFALLBACK_BANKPWR7_SET(reg,val) BSP_FLD32SET(reg, val,14, 15)

/* field: BANKPWR1 - Bank 1 Fallback Power Mode */
#define TMS570_FBFALLBACK_BANKPWR1(val) BSP_FLD32(val,2, 3)
#define TMS570_FBFALLBACK_BANKPWR1_GET(reg) BSP_FLD32GET(reg,2, 3)
#define TMS570_FBFALLBACK_BANKPWR1_SET(reg,val) BSP_FLD32SET(reg, val,2, 3)

/* field: BANKPWR0 - Bank 0 Fallback Power Mode */
#define TMS570_FBFALLBACK_BANKPWR0(val) BSP_FLD32(val,0, 1)
#define TMS570_FBFALLBACK_BANKPWR0_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_FBFALLBACK_BANKPWR0_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-----------------------TMS570_FBPRDY-----------------------*/
/* field: BANKBUSY - Bank busy bits (one bit for each bank) */
#define TMS570_FBPRDY_BANKBUSY(val) BSP_FLD32(val,16, 23)
#define TMS570_FBPRDY_BANKBUSY_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_FBPRDY_BANKBUSY_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: PUMPRDY - Flash pump ready flag */
#define TMS570_FBPRDY_PUMPRDY BSP_FLD32(15)

/* field: BANKRDY - Bank ready bits (one bit for each bank) */
#define TMS570_FBPRDY_BANKRDY(val) BSP_FLD32(val,0, 7)
#define TMS570_FBPRDY_BANKRDY_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_FBPRDY_BANKRDY_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*------------------------TMS570_FPAC1------------------------*/
/* field: PSLEEP - Pump Sleep. */
#define TMS570_FPAC1_PSLEEP(val) BSP_FLD32(val,16, 26)
#define TMS570_FPAC1_PSLEEP_GET(reg) BSP_FLD32GET(reg,16, 26)
#define TMS570_FPAC1_PSLEEP_SET(reg,val) BSP_FLD32SET(reg, val,16, 26)

/* field: PUMPPWR - Flash Charge Pump Fallback Power Mode */
#define TMS570_FPAC1_PUMPPWR BSP_FLD32(0)


/*------------------------TMS570_FPAC2------------------------*/
/* field: PAGP - Pump Active Grace Period */
#define TMS570_FPAC2_PAGP(val) BSP_FLD32(val,0, 15)
#define TMS570_FPAC2_PAGP_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_FPAC2_PAGP_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*------------------------TMS570_FMAC------------------------*/
/* field: BANK - Bank Enable. */
#define TMS570_FMAC_BANK(val) BSP_FLD32(val,0, 2)
#define TMS570_FMAC_BANK_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_FMAC_BANK_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-----------------------TMS570_FMSTAT-----------------------*/
/* field: ILA - Illegal Address */
#define TMS570_FMSTAT_ILA BSP_FLD32(14)

/* field: PGV - Program Verify */
#define TMS570_FMSTAT_PGV BSP_FLD32(12)

/* field: EV - Erase Verify */
#define TMS570_FMSTAT_EV BSP_FLD32(10)

/* field: BUSY - Busy */
#define TMS570_FMSTAT_BUSY BSP_FLD32(8)

/* field: ERS - Erase Active */
#define TMS570_FMSTAT_ERS BSP_FLD32(7)

/* field: PGM - Program Active */
#define TMS570_FMSTAT_PGM BSP_FLD32(6)

/* field: INVDAT - Invalid Data */
#define TMS570_FMSTAT_INVDAT BSP_FLD32(5)

/* field: CSTAT - Command Status */
#define TMS570_FMSTAT_CSTAT BSP_FLD32(4)

/* field: VOLTSTAT - Core Voltage Status */
#define TMS570_FMSTAT_VOLTSTAT BSP_FLD32(3)

/* field: ESUSP - Erase Suspended */
#define TMS570_FMSTAT_ESUSP BSP_FLD32(2)

/* field: PSUSP - Program Suspended */
#define TMS570_FMSTAT_PSUSP BSP_FLD32(1)

/* field: SLOCK - Sector Lock Status */
#define TMS570_FMSTAT_SLOCK BSP_FLD32(0)


/*----------------------TMS570_FEMU_DMSW----------------------*/
/* field: EMU_DMSW - EEPROM Emulation Most Significant Data Word */
#define TMS570_FEMU_DMSW_EMU_DMSW(val) BSP_FLD32(val,0, 31)
#define TMS570_FEMU_DMSW_EMU_DMSW_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FEMU_DMSW_EMU_DMSW_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_FEMU_DLSW----------------------*/
/* field: EMU_DLSW - EEPROM Emulation Least Significant Data Word */
#define TMS570_FEMU_DLSW_EMU_DLSW(val) BSP_FLD32(val,0, 31)
#define TMS570_FEMU_DLSW_EMU_DLSW_GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FEMU_DLSW_EMU_DLSW_SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_FEMU_ECC----------------------*/
/* field: EMU_ECC - This register can be written by the CPU in any mode. */
#define TMS570_FEMU_ECC_EMU_ECC(val) BSP_FLD32(val,0, 7)
#define TMS570_FEMU_ECC_EMU_ECC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_FEMU_ECC_EMU_ECC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_FEMU_ADDR----------------------*/
/* field: EMU_ADDR - EEPROM Emulation Address */
#define TMS570_FEMU_ADDR_EMU_ADDR(val) BSP_FLD32(val,3, 21)
#define TMS570_FEMU_ADDR_EMU_ADDR_GET(reg) BSP_FLD32GET(reg,3, 21)
#define TMS570_FEMU_ADDR_EMU_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,3, 21)


/*----------------------TMS570_FDIAGCTRL----------------------*/
/* field: DIAG_TRIG - Diagnostic Trigger */
#define TMS570_FDIAGCTRL_DIAG_TRIG BSP_FLD32(24)

/* field: DIAG_EN_KEY - Diagnostic Enable Key */
#define TMS570_FDIAGCTRL_DIAG_EN_KEY(val) BSP_FLD32(val,16, 19)
#define TMS570_FDIAGCTRL_DIAG_EN_KEY_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_FDIAGCTRL_DIAG_EN_KEY_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: DIAG_ECC_SEL - Diagnostic SECDED Select */
#define TMS570_FDIAGCTRL_DIAG_ECC_SEL(val) BSP_FLD32(val,12, 14)
#define TMS570_FDIAGCTRL_DIAG_ECC_SEL_GET(reg) BSP_FLD32GET(reg,12, 14)
#define TMS570_FDIAGCTRL_DIAG_ECC_SEL_SET(reg,val) BSP_FLD32SET(reg, val,12, 14)


/*---------------------TMS570_FRAW_DATAH---------------------*/
/* field: RAW_DATA_ - Uncorrected Raw Data */
#define TMS570_FRAW_DATAH_RAW_DATA_(val) BSP_FLD32(val,0, 31)
#define TMS570_FRAW_DATAH_RAW_DATA__GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FRAW_DATAH_RAW_DATA__SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*---------------------TMS570_FRAW_DATAL---------------------*/
/* field: RAW_DATA_ - Uncorrected Raw Data. Same as FRAW_DATAH but stores lower 32 bits. */
#define TMS570_FRAW_DATAL_RAW_DATA_(val) BSP_FLD32(val,0, 31)
#define TMS570_FRAW_DATAL_RAW_DATA__GET(reg) BSP_FLD32GET(reg,0, 31)
#define TMS570_FRAW_DATAL_RAW_DATA__SET(reg,val) BSP_FLD32SET(reg, val,0, 31)


/*----------------------TMS570_FRAW_ECC----------------------*/
/* field: PIPE_BUF - Error came from pipeline buffer hit */
#define TMS570_FRAW_ECC_PIPE_BUF BSP_FLD32(8)

/* field: RAW_ECC - Uncorrected Raw ECC */
#define TMS570_FRAW_ECC_RAW_ECC(val) BSP_FLD32(val,0, 7)
#define TMS570_FRAW_ECC_RAW_ECC_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_FRAW_ECC_RAW_ECC_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_FPAR_OVR----------------------*/
/* field: BNK_INV_PAR - Buffer Invert Parity */
#define TMS570_FPAR_OVR_BNK_INV_PAR BSP_FLD32(16)

/* field: BUS_PAR_DIS - Disable Bus Parity */
#define TMS570_FPAR_OVR_BUS_PAR_DIS(val) BSP_FLD32(val,12, 15)
#define TMS570_FPAR_OVR_BUS_PAR_DIS_GET(reg) BSP_FLD32GET(reg,12, 15)
#define TMS570_FPAR_OVR_BUS_PAR_DIS_SET(reg,val) BSP_FLD32SET(reg, val,12, 15)

/* field: PAR_OVR_KEY - When this value is 101, the selected ADD_INV_PAR and DAT_INV_PAR fields will become active. */
#define TMS570_FPAR_OVR_PAR_OVR_KEY(val) BSP_FLD32(val,9, 11)
#define TMS570_FPAR_OVR_PAR_OVR_KEY_GET(reg) BSP_FLD32GET(reg,9, 11)
#define TMS570_FPAR_OVR_PAR_OVR_KEY_SET(reg,val) BSP_FLD32SET(reg, val,9, 11)

/* field: ADD_INV_PAR - Address Odd Parity */
#define TMS570_FPAR_OVR_ADD_INV_PAR BSP_FLD32(8)

/* field: DAT_INV_PAR - Data Odd Parity */
#define TMS570_FPAR_OVR_DAT_INV_PAR(val) BSP_FLD32(val,0, 7)
#define TMS570_FPAR_OVR_DAT_INV_PAR_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_FPAR_OVR_DAT_INV_PAR_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*---------------------TMS570_FEDACSDIS2---------------------*/
/* field: BankID3_Inverse - The bank ID inverse bits are used with the bank ID bits to select the bank for which a sector */
#define TMS570_FEDACSDIS2_BankID3_Inverse(val) BSP_FLD32(val,29, 31)
#define TMS570_FEDACSDIS2_BankID3_Inverse_GET(reg) BSP_FLD32GET(reg,29, 31)
#define TMS570_FEDACSDIS2_BankID3_Inverse_SET(reg,val) BSP_FLD32SET(reg, val,29, 31)

/* field: SectorID3_inverse - The sector ID inverse bits are used with the sector ID bits to determine which sector is disabled. */
#define TMS570_FEDACSDIS2_SectorID3_inverse(val) BSP_FLD32(val,24, 27)
#define TMS570_FEDACSDIS2_SectorID3_inverse_GET(reg) BSP_FLD32GET(reg,24, 27)
#define TMS570_FEDACSDIS2_SectorID3_inverse_SET(reg,val) BSP_FLD32SET(reg, val,24, 27)

/* field: BankID3 - The bank ID bits are used with the bank ID inverse bits to select the bank for which a sector */
#define TMS570_FEDACSDIS2_BankID3(val) BSP_FLD32(val,21, 23)
#define TMS570_FEDACSDIS2_BankID3_GET(reg) BSP_FLD32GET(reg,21, 23)
#define TMS570_FEDACSDIS2_BankID3_SET(reg,val) BSP_FLD32SET(reg, val,21, 23)

/* field: SectorID3 - The sector ID bits are used with the sector ID inverse bits to determine which sector is */
#define TMS570_FEDACSDIS2_SectorID3(val) BSP_FLD32(val,16, 19)
#define TMS570_FEDACSDIS2_SectorID3_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_FEDACSDIS2_SectorID3_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: BankID2_Inverse - is disabled. The only bank that supports sector disable is bank 7. */
#define TMS570_FEDACSDIS2_BankID2_Inverse(val) BSP_FLD32(val,13, 15)
#define TMS570_FEDACSDIS2_BankID2_Inverse_GET(reg) BSP_FLD32GET(reg,13, 15)
#define TMS570_FEDACSDIS2_BankID2_Inverse_SET(reg,val) BSP_FLD32SET(reg, val,13, 15)

/* field: SectorID2_inverse - The sector ID inverse bits are used with the sector ID bits to determine which sector is */
#define TMS570_FEDACSDIS2_SectorID2_inverse(val) BSP_FLD32(val,8, 11)
#define TMS570_FEDACSDIS2_SectorID2_inverse_GET(reg) BSP_FLD32GET(reg,8, 11)
#define TMS570_FEDACSDIS2_SectorID2_inverse_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: BankID2 - The bank ID bits are used with the bank ID inverse bits to select the bank for which a sector */
#define TMS570_FEDACSDIS2_BankID2(val) BSP_FLD32(val,5, 7)
#define TMS570_FEDACSDIS2_BankID2_GET(reg) BSP_FLD32GET(reg,5, 7)
#define TMS570_FEDACSDIS2_BankID2_SET(reg,val) BSP_FLD32SET(reg, val,5, 7)

/* field: SectorID2 - The sector ID bits are used with the sector ID inverse bits to determine which sector is */
#define TMS570_FEDACSDIS2_SectorID2(val) BSP_FLD32(val,0, 3)
#define TMS570_FEDACSDIS2_SectorID2_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_FEDACSDIS2_SectorID2_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*---------------------TMS570_FSM_WR_ENA---------------------*/
/* field: WR_ENA - Flash State Machine Write Enable */
#define TMS570_FSM_WR_ENA_WR_ENA(val) BSP_FLD32(val,0, 2)
#define TMS570_FSM_WR_ENA_WR_ENA_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_FSM_WR_ENA_WR_ENA_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*---------------------TMS570_FSM_SECTOR---------------------*/
/* field: SECT_ERASED - Sectors Erased */
#define TMS570_FSM_SECTOR_SECT_ERASED(val) BSP_FLD32(val,16, 31)
#define TMS570_FSM_SECTOR_SECT_ERASED_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_FSM_SECTOR_SECT_ERASED_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)


/*--------------------TMS570_EEPROM_CONFIG--------------------*/
/* field: EWAIT - EEPROM Wait state Counter */
#define TMS570_EEPROM_CONFIG_EWAIT(val) BSP_FLD32(val,16, 19)
#define TMS570_EEPROM_CONFIG_EWAIT_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_EEPROM_CONFIG_EWAIT_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: AUTOSUSP_EN - Auto Suspend Enable */
#define TMS570_EEPROM_CONFIG_AUTOSUSP_EN BSP_FLD32(8)

/* field: AUTOSTART_GRACE - Auto-suspend Startup Grace Period */
#define TMS570_EEPROM_CONFIG_AUTOSTART_GRACE(val) BSP_FLD32(val,0, 7)
#define TMS570_EEPROM_CONFIG_AUTOSTART_GRACE_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_EEPROM_CONFIG_AUTOSTART_GRACE_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_EE_CTRL1----------------------*/
/* field: EDACMODE - Error Correction Mode. */
#define TMS570_EE_CTRL1_EDACMODE(val) BSP_FLD32(val,16, 19)
#define TMS570_EE_CTRL1_EDACMODE_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_EE_CTRL1_EDACMODE_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: EE_EOFEN - EEPROM Emulation Event on a correctable One's Fail Enable bit */
#define TMS570_EE_CTRL1_EE_EOFEN BSP_FLD32(10)

/* field: EE_EZFEN - EEPROM Emulation Event on a correctable Zero's Fail Enable bit */
#define TMS570_EE_CTRL1_EE_EZFEN BSP_FLD32(9)

/* field: EE_EPEN - EEPROM Emulation Error Profiling Enable. */
#define TMS570_EE_CTRL1_EE_EPEN BSP_FLD32(8)


/*----------------------TMS570_EE_CTRL2----------------------*/
/* field: EE_SEC_THRESHOLD - EEPROM Emulation Single Error Correction Threshold */
#define TMS570_EE_CTRL2_EE_SEC_THRESHOLD(val) BSP_FLD32(val,0, 15)
#define TMS570_EE_CTRL2_EE_SEC_THRESHOLD_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_EE_CTRL2_EE_SEC_THRESHOLD_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------TMS570_EE_COR_ERR_CNT-------------------*/
/* field: EE_ERRCNT - Single Error Correction Count */
#define TMS570_EE_COR_ERR_CNT_EE_ERRCNT(val) BSP_FLD32(val,0, 15)
#define TMS570_EE_COR_ERR_CNT_EE_ERRCNT_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_EE_COR_ERR_CNT_EE_ERRCNT_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-------------------TMS570_EE_COR_ERR_ADD-------------------*/
/* field: COR_ERR_ADD - Correctable Error Address */
#define TMS570_EE_COR_ERR_ADD_COR_ERR_ADD(val) BSP_FLD32(val,3, 31)
#define TMS570_EE_COR_ERR_ADD_COR_ERR_ADD_GET(reg) BSP_FLD32GET(reg,3, 31)
#define TMS570_EE_COR_ERR_ADD_COR_ERR_ADD_SET(reg,val) BSP_FLD32SET(reg, val,3, 31)

/* field: B_OFF - Byte offset */
#define TMS570_EE_COR_ERR_ADD_B_OFF(val) BSP_FLD32(val,0, 2)
#define TMS570_EE_COR_ERR_ADD_B_OFF_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_EE_COR_ERR_ADD_B_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*-------------------TMS570_EE_COR_ERR_POS-------------------*/
/* field: TYPE - ErrorType */
#define TMS570_EE_COR_ERR_POS_TYPE BSP_FLD32(8)

/* field: EE_ERR_POS - The bit address of the single bit error */
#define TMS570_EE_COR_ERR_POS_EE_ERR_POS(val) BSP_FLD32(val,0, 7)
#define TMS570_EE_COR_ERR_POS_EE_ERR_POS_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_EE_COR_ERR_POS_EE_ERR_POS_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*----------------------TMS570_EE_STATUS----------------------*/
/* field: EE_D_UNC_ERR - Diagnostic Mode Uncorrectable Error Status Flag */
#define TMS570_EE_STATUS_EE_D_UNC_ERR BSP_FLD32(12)

/* field: EE_UNC_ERR - EEPROM Emulation Uncorrectable Error Flag */
#define TMS570_EE_STATUS_EE_UNC_ERR BSP_FLD32(8)

/* field: EE_CMG - EEPROM Emulation Compare Malfunction Good */
#define TMS570_EE_STATUS_EE_CMG BSP_FLD32(6)

/* field: EE_CME - . */
#define TMS570_EE_STATUS_EE_CME BSP_FLD32(4)

/* field: EE_D_COR_ERR - Diagnostic Correctable Error Flag */
#define TMS570_EE_STATUS_EE_D_COR_ERR BSP_FLD32(3)

/* field: EE_ERR_ONE_FLG - Error on One Fail Error Flag */
#define TMS570_EE_STATUS_EE_ERR_ONE_FLG BSP_FLD32(2)

/* field: EE_ERR_ZERO_FLG - Error on Zero Fail Error Flag */
#define TMS570_EE_STATUS_EE_ERR_ZERO_FLG BSP_FLD32(1)

/* field: EE_ERR_PRF_FLG - Error Profiling Error Flag */
#define TMS570_EE_STATUS_EE_ERR_PRF_FLG BSP_FLD32(0)


/*-------------------TMS570_EE_UNC_ERR_ADD-------------------*/
/* field: UNC_ERR_ADD - Un-correctable Error Address */
#define TMS570_EE_UNC_ERR_ADD_UNC_ERR_ADD(val) BSP_FLD32(val,3, 31)
#define TMS570_EE_UNC_ERR_ADD_UNC_ERR_ADD_GET(reg) BSP_FLD32GET(reg,3, 31)
#define TMS570_EE_UNC_ERR_ADD_UNC_ERR_ADD_SET(reg,val) BSP_FLD32SET(reg, val,3, 31)

/* field: B_OFF - Byte offset */
#define TMS570_EE_UNC_ERR_ADD_B_OFF(val) BSP_FLD32(val,0, 2)
#define TMS570_EE_UNC_ERR_ADD_B_OFF_GET(reg) BSP_FLD32GET(reg,0, 2)
#define TMS570_EE_UNC_ERR_ADD_B_OFF_SET(reg,val) BSP_FLD32SET(reg, val,0, 2)


/*----------------------TMS570_FCFG_BANK----------------------*/
/* field: EE_BANK_WIDTH - Bank 7 width (144 bits wide) */
#define TMS570_FCFG_BANK_EE_BANK_WIDTH(val) BSP_FLD32(val,20, 31)
#define TMS570_FCFG_BANK_EE_BANK_WIDTH_GET(reg) BSP_FLD32GET(reg,20, 31)
#define TMS570_FCFG_BANK_EE_BANK_WIDTH_SET(reg,val) BSP_FLD32SET(reg, val,20, 31)

/* field: MAIN_BANK_WIDTH - Width of main flash banks (144 bits wide) */
#define TMS570_FCFG_BANK_MAIN_BANK_WIDTH(val) BSP_FLD32(val,4, 15)
#define TMS570_FCFG_BANK_MAIN_BANK_WIDTH_GET(reg) BSP_FLD32GET(reg,4, 15)
#define TMS570_FCFG_BANK_MAIN_BANK_WIDTH_SET(reg,val) BSP_FLD32SET(reg, val,4, 15)



#endif /* LIBBSP_ARM_tms570_FLASH */