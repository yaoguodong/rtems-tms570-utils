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
#ifndef LIBBSP_ARM_tms570_SPI
#define LIBBSP_ARM_tms570_SPI

#include <bsp/utility.h>

typedef struct{
  uint32_t SPIGCR0;           /*SPI Global Control Register 0*/
  uint32_t SPIGCR1;           /*SPI Global Control Register 1*/
  uint32_t SPIINT0;           /*SPI Interrupt Register*/
  uint32_t SPILVL;            /*SPI Interrupt Level Register*/
  uint32_t SPIFLG;            /*SPI Flag Register*/
  uint32_t SPIPC0;            /*SPI Pin Control Register 0*/
  uint32_t SPIPC1;            /*SPI Pin Control Register 1*/
  uint32_t SPIPC2;            /*SPI Pin Control Register 2*/
  uint32_t SPIPC3;            /*SPI Pin Control Register 3*/
  uint32_t SPIPC4;            /*SPI Pin Control Register 4*/
  uint32_t SPIPC5;            /*SPI Pin Control Register 5*/
  uint32_t SPIPC6;            /*SPI Pin Control Register 6*/
  uint32_t SPIPC7;            /*SPI Pin Control Register 7*/
  uint32_t SPIPC8;            /*SPI Pin Control Register 8*/
  uint32_t SPIDAT0;           /*SPI Transmit Data Register 0*/
  uint32_t SPIDAT1;           /*SPI Transmit Data Register 1*/
  uint32_t SPIBUF;            /*SPI Receive Buffer Register*/
  uint32_t SPIEMU;            /*SPI Emulation Register*/
  uint32_t SPIDELAY;          /*SPI Delay Register*/
  uint32_t SPIDEF;            /*SPI Default Chip Select Register*/
  uint32_t SPIFMT[4];         /*SPI Data Format Registers*/
  uint32_t INTVECT0;          /*Interrupt Vector 0*/
  uint32_t INTVECT1;          /*Interrupt Vector 1*/
  uint8_t reserved1 [4];
  uint32_t SPIPMCTRL;         /*Parallel/Modulo Mode Control Register*/
  uint32_t MIBSPIE;           /*Multi-buffer Mode Enable Register*/
  uint32_t TGITENST;          /*TG Interrupt Enable Set Register*/
  uint32_t TGITENCR;          /*TG Interrupt Enable Clear Register*/
  uint32_t TGITLVST;          /*Transfer Group Interrupt Level Set Register*/
  uint32_t TGITLVCR;          /*Transfer Group Interrupt Level Clear Register*/
  uint32_t TGINTFLG;          /*Transfer Group Interrupt Flag Register*/
  uint8_t reserved2 [8];
  uint32_t TICKCNT;           /*Tick Count Register*/
  uint32_t LTGPEND;           /*Last TG End Pointer*/
  uint32_t TG0CTRL;           /*TG0 Control Registers*/
  uint8_t reserved3 [60];
  uint32_t DMA0CTRL;          /*DMA Channel Control Register*/
  uint8_t reserved4 [28];
  uint32_t ICOUNT0;           /*DMA0COUNT Register*/
  uint8_t reserved5 [28];
  uint32_t DMACNTLEN;         /*DMA Large Count*/
  uint8_t reserved6 [4];
  uint32_t UERRCTRL;          /*Multi-buffer RAM Uncorrectable Parity Error Control Register*/
  uint32_t UERRSTAT;          /*Multi-buffer RAM Uncorrectable Parity Error Status Register*/
  uint32_t UERRADDR1;         /*RXRAM Uncorrectable Parity Error Address Register*/
  uint32_t UERRADDR0;         /*TXRAM Uncorrectable Parity Error Address Register*/
  uint32_t RXOVRN_BUF_ADDR;   /*RXRAM Overrun Buffer Address Register*/
  uint32_t IOLPBKTSTCR;       /*I/O Loopback Test Control Register*/
  uint32_t EXTENDED_PRESCALE1;/*SPI Extended Prescale Register 1*/
  uint32_t EXTENDED_PRESCALE2;/*SPI Extended Prescale Register 2*/
} tms570_spi_t;

/*-----------------------TMS570_SPIGCR0-----------------------*/
/* field: nRESET - This is the local reset control for the module. */
#define TMS570_SPIGCR0_nRESET BSP_FLD32(0)


/*-----------------------TMS570_SPIGCR1-----------------------*/
/* field: SPIEN - SPI enable. This bit enables SPI transfers. */
#define TMS570_SPIGCR1_SPIEN BSP_FLD32(24)

/* field: LOOPBACK - Internal loop-back test mode. The internal self-test option can be enabled by setting this bit. */
#define TMS570_SPIGCR1_LOOPBACK BSP_FLD32(16)

/* field: POWERDOWN - When active, the SPI state machine enters a power-down state. */
#define TMS570_SPIGCR1_POWERDOWN BSP_FLD32(8)

/* field: CLKMOD - Clock mode. This bit selects either an internal or external clock source. */
#define TMS570_SPIGCR1_CLKMOD BSP_FLD32(1)

/* field: MASTER - SPISIMO/SPISOMI pin direction determination. */
#define TMS570_SPIGCR1_MASTER BSP_FLD32(0)


/*-----------------------TMS570_SPIINT0-----------------------*/
/* field: ENABLEHIGHZ - SPIENA pin high-impedance enable. */
#define TMS570_SPIINT0_ENABLEHIGHZ BSP_FLD32(24)

/* field: DMAREQEN - DMA request enable. */
#define TMS570_SPIINT0_DMAREQEN BSP_FLD32(16)


/*-----------------------TMS570_SPILVL-----------------------*/
/* field: TXINTLVL - Transmit interrupt level. */
#define TMS570_SPILVL_TXINTLVL BSP_FLD32(9)

/* field: RXINTLVL - Receive interrupt level. */
#define TMS570_SPILVL_RXINTLVL BSP_FLD32(8)

/* field: RXOVRNINTLVL - Receive overrun interrupt level. */
#define TMS570_SPILVL_RXOVRNINTLVL BSP_FLD32(6)

/* field: BITERRLVL - Bit error interrupt level. */
#define TMS570_SPILVL_BITERRLVL BSP_FLD32(4)

/* field: DESYNCLVL - Desynchronized slave interrupt level. (master mode only). */
#define TMS570_SPILVL_DESYNCLVL BSP_FLD32(3)

/* field: PARERRLVL - Parity error interrupt level. */
#define TMS570_SPILVL_PARERRLVL BSP_FLD32(2)

/* field: TIMEOUTLVL - SPIENA pin time-out interrupt level. */
#define TMS570_SPILVL_TIMEOUTLVL BSP_FLD32(1)

/* field: DLENERRLVL - Data length error interrupt level (line) select. */
#define TMS570_SPILVL_DLENERRLVL BSP_FLD32(0)


/*-----------------------TMS570_SPIFLG-----------------------*/
/* field: BUFINITACTIVE - Indicates the status of multi-buffer initialization process. */
#define TMS570_SPIFLG_BUFINITACTIVE BSP_FLD32(24)

/* field: TXINTFLG - Transmitter-empty interrupt flag. */
#define TMS570_SPIFLG_TXINTFLG BSP_FLD32(9)

/* field: RXINTFLG - Receiver-full interrupt flag. */
#define TMS570_SPIFLG_RXINTFLG BSP_FLD32(8)

/* field: RXOVRNINTFLG - Receiver overrun flag. */
#define TMS570_SPIFLG_RXOVRNINTFLG BSP_FLD32(6)

/* field: BITERRFLG - Mismatch of internal transmit data and transmitted data. */
#define TMS570_SPIFLG_BITERRFLG BSP_FLD32(4)

/* field: DESYNCFLG - Desynchronization of slave device. */
#define TMS570_SPIFLG_DESYNCFLG BSP_FLD32(3)

/* field: PARITYERRFLG - Calculated parity differs from received parity bit. */
#define TMS570_SPIFLG_PARITYERRFLG BSP_FLD32(2)

/* field: TIMEOUTFLG - Time-out caused by nonactivation of ENA signal. */
#define TMS570_SPIFLG_TIMEOUTFLG BSP_FLD32(1)

/* field: DLENERRFLG - Data-length error flag. */
#define TMS570_SPIFLG_DLENERRFLG BSP_FLD32(0)


/*-----------------------TMS570_SPIPC0-----------------------*/
/* field: SOMIFUN - Slave out, master in function. */
#define TMS570_SPIPC0_SOMIFUN(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIPC0_SOMIFUN_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIPC0_SOMIFUN_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: SIMOFUN - Slave in, master out function. */
#define TMS570_SPIPC0_SIMOFUN(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIPC0_SIMOFUN_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIPC0_SIMOFUN_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: SOMIFUN0 - SOMIFUN0 */
#define TMS570_SPIPC0_SOMIFUN0 BSP_FLD32(11)

/* field: SIMOFUN0 - Slave in, master out function. */
#define TMS570_SPIPC0_SIMOFUN0 BSP_FLD32(10)

/* field: CLKFUN - CLKFUN */
#define TMS570_SPIPC0_CLKFUN BSP_FLD32(9)

/* field: ENAFUN - SPIENA function. */
#define TMS570_SPIPC0_ENAFUN BSP_FLD32(8)

/* field: SCSFUN - SPISCSx function. */
#define TMS570_SPIPC0_SCSFUN(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIPC0_SCSFUN_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIPC0_SCSFUN_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIPC1-----------------------*/
/* field: SOMIDIR - SPISOMIx direction. Controls the direction of SPISOMIx when used for general-purpose I/O. */
#define TMS570_SPIPC1_SOMIDIR(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIPC1_SOMIDIR_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIPC1_SOMIDIR_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: SIMODIR - SPISIMOx direction. Controls the direction of SPISIMOx when used for general-purpose I/O. */
#define TMS570_SPIPC1_SIMODIR(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIPC1_SIMODIR_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIPC1_SIMODIR_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: SOMIDIR0 - PISOMI0 direction. */
#define TMS570_SPIPC1_SOMIDIR0 BSP_FLD32(11)

/* field: SIMODIR0 - SPISIMO0 direction. */
#define TMS570_SPIPC1_SIMODIR0 BSP_FLD32(10)

/* field: CLKDIR - SPICLK direction. */
#define TMS570_SPIPC1_CLKDIR BSP_FLD32(9)

/* field: ENADIR - SPIENA direction. */
#define TMS570_SPIPC1_ENADIR BSP_FLD32(8)

/* field: SCSDIR - SPISCSx direction. */
#define TMS570_SPIPC1_SCSDIR(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIPC1_SCSDIR_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIPC1_SCSDIR_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIPC2-----------------------*/
/* field: SOMIDIN - SPISOMIx data in. The value of the SPISOMIx pins. */
#define TMS570_SPIPC2_SOMIDIN(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIPC2_SOMIDIN_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIPC2_SOMIDIN_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: SIMODIN - SPISIMOx data in. The value of the SPISIMOx pins. */
#define TMS570_SPIPC2_SIMODIN(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIPC2_SIMODIN_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIPC2_SIMODIN_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: SOMIDIN0 - SPISOMI0 data in. The value of the SPISOMI0 pin. */
#define TMS570_SPIPC2_SOMIDIN0 BSP_FLD32(11)

/* field: SIMODIN0 - SPISIMO0 data in. The value of the SPISIMO0 pin. */
#define TMS570_SPIPC2_SIMODIN0 BSP_FLD32(10)

/* field: CLKDIN - Clock data in. The value of the SPICLK pin. pin. */
#define TMS570_SPIPC2_CLKDIN BSP_FLD32(9)

/* field: ENADIN - SPIENA data in. The the value of the SPIENA pin. */
#define TMS570_SPIPC2_ENADIN BSP_FLD32(8)

/* field: SCSDIN - SPISCSx data in. The value of the SPISCSx pin. */
#define TMS570_SPIPC2_SCSDIN(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIPC2_SCSDIN_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIPC2_SCSDIN_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIPC3-----------------------*/
/* field: SOMIDOUT - SPISOMIx data out write. */
#define TMS570_SPIPC3_SOMIDOUT(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIPC3_SOMIDOUT_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIPC3_SOMIDOUT_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: SIMODOUT - SPISIMOx data out write. */
#define TMS570_SPIPC3_SIMODOUT(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIPC3_SIMODOUT_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIPC3_SIMODOUT_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: SOMIDOUT0 - SPISOMI0 data out write. */
#define TMS570_SPIPC3_SOMIDOUT0 BSP_FLD32(11)

/* field: SIMODOUT0 - SPISIMO0 data out write. */
#define TMS570_SPIPC3_SIMODOUT0 BSP_FLD32(10)

/* field: CLKDOUT - SPICLK data out write. */
#define TMS570_SPIPC3_CLKDOUT BSP_FLD32(9)

/* field: ENADOUT - SPIENA data out write. */
#define TMS570_SPIPC3_ENADOUT BSP_FLD32(8)

/* field: SCSDOUT - SPISCSx data out write. */
#define TMS570_SPIPC3_SCSDOUT(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIPC3_SCSDOUT_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIPC3_SCSDOUT_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIPC4-----------------------*/
/* field: SOMISET - SPISOMIx data out set. */
#define TMS570_SPIPC4_SOMISET(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIPC4_SOMISET_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIPC4_SOMISET_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: SIMOSET - SPISIMOx data out set. */
#define TMS570_SPIPC4_SIMOSET(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIPC4_SIMOSET_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIPC4_SIMOSET_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: SOMISET0 - SPISOMI0 data out set. */
#define TMS570_SPIPC4_SOMISET0 BSP_FLD32(11)

/* field: SIMOSET0 - purpose */
#define TMS570_SPIPC4_SIMOSET0 BSP_FLD32(10)

/* field: CLKSET - SPICLK data out set. */
#define TMS570_SPIPC4_CLKSET BSP_FLD32(9)

/* field: ENASET - SPIENA data out set. */
#define TMS570_SPIPC4_ENASET BSP_FLD32(8)

/* field: SCSSET - SPISCSx data out set. */
#define TMS570_SPIPC4_SCSSET(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIPC4_SCSSET_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIPC4_SCSSET_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIPC5-----------------------*/
/* field: SOMICLR - SPISOMIx data out clear. */
#define TMS570_SPIPC5_SOMICLR(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIPC5_SOMICLR_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIPC5_SOMICLR_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: SIMOCLR - SPISIMOx data out clear. */
#define TMS570_SPIPC5_SIMOCLR(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIPC5_SIMOCLR_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIPC5_SIMOCLR_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: SOMICLR0 - SPISOMI0 data out cleart. */
#define TMS570_SPIPC5_SOMICLR0 BSP_FLD32(11)

/* field: SIMOCLR0 - SPISIMO0 data out clear. */
#define TMS570_SPIPC5_SIMOCLR0 BSP_FLD32(10)

/* field: CLKCLR - SPICLK data out clear. */
#define TMS570_SPIPC5_CLKCLR BSP_FLD32(9)

/* field: ENACLR - SPIENA data out clear. */
#define TMS570_SPIPC5_ENACLR BSP_FLD32(8)

/* field: SCSCLR - SPISCSx data out clear. */
#define TMS570_SPIPC5_SCSCLR(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIPC5_SCSCLR_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIPC5_SCSCLR_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIPC6-----------------------*/
/* field: SOMIPDR - SPISOMIx open drain enable. */
#define TMS570_SPIPC6_SOMIPDR(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIPC6_SOMIPDR_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIPC6_SOMIPDR_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: SIMOPDR - SPISIMOx open drain enable. */
#define TMS570_SPIPC6_SIMOPDR(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIPC6_SIMOPDR_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIPC6_SIMOPDR_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: SOMIPDR0 - SOMI0 open-drain enable. */
#define TMS570_SPIPC6_SOMIPDR0 BSP_FLD32(11)

/* field: SIMOPDR0 - SPISIMO0 open-drain enable. */
#define TMS570_SPIPC6_SIMOPDR0 BSP_FLD32(10)

/* field: CLKPDR - CLK open drain enable. */
#define TMS570_SPIPC6_CLKPDR BSP_FLD32(9)

/* field: ENAPDR - SPIENA pin open drain enable. */
#define TMS570_SPIPC6_ENAPDR BSP_FLD32(8)

/* field: SCSPDR - SPISCSx open drain enable. */
#define TMS570_SPIPC6_SCSPDR(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIPC6_SCSPDR_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIPC6_SCSPDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIPC7-----------------------*/
/* field: SOMIDIS - SOMIx pull control enable/disable. */
#define TMS570_SPIPC7_SOMIDIS(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIPC7_SOMIDIS_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIPC7_SOMIDIS_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: SIMODIS - SIMOx pull control enable/disable. */
#define TMS570_SPIPC7_SIMODIS(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIPC7_SIMODIS_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIPC7_SIMODIS_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: SOMIPDIS0 - SPISOMI0 pull control enable/disable. */
#define TMS570_SPIPC7_SOMIPDIS0 BSP_FLD32(11)

/* field: SIMOPDIS0 - SPISIMO0 pull control enable/disable. */
#define TMS570_SPIPC7_SIMOPDIS0 BSP_FLD32(10)

/* field: CLKPDIS - CLK pull control enable/disable. */
#define TMS570_SPIPC7_CLKPDIS BSP_FLD32(9)

/* field: ENAPDIS - ENAPDIS ENABLE pull control enable/disable. */
#define TMS570_SPIPC7_ENAPDIS BSP_FLD32(8)

/* field: SCSPDIS - SCSx pull control enable/disable. */
#define TMS570_SPIPC7_SCSPDIS(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIPC7_SCSPDIS_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIPC7_SCSPDIS_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIPC8-----------------------*/
/* field: SOMIPSEL - SPISOMIx pull select. This bit selects the type of pull logic at the SOMIx pin. */
#define TMS570_SPIPC8_SOMIPSEL(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIPC8_SOMIPSEL_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIPC8_SOMIPSEL_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: SIMOPSEL - SIMOPSEL SPISIMOx pull select. This bit selects the type of pull logic at the SPISIMOx pin. */
#define TMS570_SPIPC8_SIMOPSEL(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIPC8_SIMOPSEL_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIPC8_SIMOPSEL_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: SOMIPSEL0 - SOMI pull select. This bit selects the type of pull logic at the SOMI pin. */
#define TMS570_SPIPC8_SOMIPSEL0 BSP_FLD32(11)

/* field: SIMOPSEL0 - SPISIMO pull select. This bit selects the type of pull logic at the SPISIMO pin. */
#define TMS570_SPIPC8_SIMOPSEL0 BSP_FLD32(10)

/* field: CLKPSEL - CLK pull select. This bit selects the type of pull logic at the CLK pin. */
#define TMS570_SPIPC8_CLKPSEL BSP_FLD32(9)

/* field: ENAPSEL - ENABLE pull select. This bit selects the type of pull logic at the ENABLE pin. */
#define TMS570_SPIPC8_ENAPSEL BSP_FLD32(8)

/* field: SCSPSEL - SCSx pull select. This bit selects the type of pull logic at the SCSx pin. */
#define TMS570_SPIPC8_SCSPSEL(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIPC8_SCSPSEL_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIPC8_SCSPSEL_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIDAT0-----------------------*/
/* field: TXDATA - SPI transmit data. When written, these bits will be copied to the shift register if it is empty. */
#define TMS570_SPIDAT0_TXDATA(val) BSP_FLD32(val,0, 15)
#define TMS570_SPIDAT0_TXDATA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_SPIDAT0_TXDATA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_SPIDAT1-----------------------*/
/* field: CSHOLD - Chip select hold mode. */
#define TMS570_SPIDAT1_CSHOLD BSP_FLD32(28)

/* field: WDEL - Enable the delay counter at the end of the current transaction. */
#define TMS570_SPIDAT1_WDEL BSP_FLD32(26)

/* field: DFSEL - Data word format select */
#define TMS570_SPIDAT1_DFSEL(val) BSP_FLD32(val,24, 25)
#define TMS570_SPIDAT1_DFSEL_GET(reg) BSP_FLD32GET(reg,24, 25)
#define TMS570_SPIDAT1_DFSEL_SET(reg,val) BSP_FLD32SET(reg, val,24, 25)

/* field: CSNR - Chip select number. CSNR defines the chip-select that will be activated during the data transfer. */
#define TMS570_SPIDAT1_CSNR(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIDAT1_CSNR_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIDAT1_CSNR_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: TXDATA - ransfer data.When written, these bits are copied to the shift register if it is empty. */
#define TMS570_SPIDAT1_TXDATA(val) BSP_FLD32(val,0, 15)
#define TMS570_SPIDAT1_TXDATA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_SPIDAT1_TXDATA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_SPIBUF-----------------------*/
/* field: RXEMPTY - Receive data buffer empty. */
#define TMS570_SPIBUF_RXEMPTY BSP_FLD32(31)

/* field: RXOVR - Receive data buffer overrun. */
#define TMS570_SPIBUF_RXOVR BSP_FLD32(30)

/* field: TXFULL - Transmit data buffer full.This flag is a read-only flag. */
#define TMS570_SPIBUF_TXFULL BSP_FLD32(29)

/* field: BITERR - Bit error.There was a mismatch of internal transmit data and transmitted data. */
#define TMS570_SPIBUF_BITERR BSP_FLD32(28)

/* field: DESYNC - Desynchronization of slave device.This bit is valid in master mode only. */
#define TMS570_SPIBUF_DESYNC BSP_FLD32(27)

/* field: PARITYERR - Parity error.The calculated parity differs from the received parity bit. */
#define TMS570_SPIBUF_PARITYERR BSP_FLD32(26)

/* field: TIMEOUT - Time-out because of non-activation of ENA pin. */
#define TMS570_SPIBUF_TIMEOUT BSP_FLD32(25)

/* field: DLENERR - Data length error flag. */
#define TMS570_SPIBUF_DLENERR BSP_FLD32(24)

/* field: LCSNR - control field. It contains the chip select number that was activated during the last word transfer. */
#define TMS570_SPIBUF_LCSNR(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIBUF_LCSNR_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIBUF_LCSNR_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: RXDATA - SPI receive data. */
#define TMS570_SPIBUF_RXDATA(val) BSP_FLD32(val,0, 15)
#define TMS570_SPIBUF_RXDATA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_SPIBUF_RXDATA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_SPIEMU-----------------------*/
/* field: EMU_RXDATA - SPI receive data. The SPI emulation register is a mirror of the SPIBUF register. */
#define TMS570_SPIEMU_EMU_RXDATA(val) BSP_FLD32(val,0, 15)
#define TMS570_SPIEMU_EMU_RXDATA_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_SPIEMU_EMU_RXDATA_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------TMS570_SPIDELAY----------------------*/
/* field: C2TDELAY - Chip-select-active to transmit-start delay. See Figure 25-45 for an example. */
#define TMS570_SPIDELAY_C2TDELAY(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIDELAY_C2TDELAY_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIDELAY_C2TDELAY_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: T2CDELAY - T2CDELAY */
#define TMS570_SPIDELAY_T2CDELAY(val) BSP_FLD32(val,16, 23)
#define TMS570_SPIDELAY_T2CDELAY_GET(reg) BSP_FLD32GET(reg,16, 23)
#define TMS570_SPIDELAY_T2CDELAY_SET(reg,val) BSP_FLD32SET(reg, val,16, 23)

/* field: T2EDELAY - Transmit-data-finished to ENA-pin-inactive time-out. T2EDELAY is used in master mode only. */
#define TMS570_SPIDELAY_T2EDELAY(val) BSP_FLD32(val,8, 15)
#define TMS570_SPIDELAY_T2EDELAY_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_SPIDELAY_T2EDELAY_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: C2EDELAY - Chip-select-active to ENA-signal-active time-out. */
#define TMS570_SPIDELAY_C2EDELAY(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIDELAY_C2EDELAY_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIDELAY_C2EDELAY_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIDEF-----------------------*/
/* field: CDEF - Chip select default pattern. Master-mode only. */
#define TMS570_SPIDEF_CDEF(val) BSP_FLD32(val,0, 7)
#define TMS570_SPIDEF_CDEF_GET(reg) BSP_FLD32GET(reg,0, 7)
#define TMS570_SPIDEF_CDEF_SET(reg,val) BSP_FLD32SET(reg, val,0, 7)


/*-----------------------TMS570_SPIFMT-----------------------*/
/* field: WDELAY - Delay in between transmissions for data format x (x= 0,1,2,3). */
#define TMS570_SPIFMT_WDELAY(val) BSP_FLD32(val,24, 31)
#define TMS570_SPIFMT_WDELAY_GET(reg) BSP_FLD32GET(reg,24, 31)
#define TMS570_SPIFMT_WDELAY_SET(reg,val) BSP_FLD32SET(reg, val,24, 31)

/* field: PARPOL - Parity polarity: even or odd. PARPOLx can be modified in privilege mode only. */
#define TMS570_SPIFMT_PARPOL BSP_FLD32(23)

/* field: PARITYENA - Parity enable for data format x. */
#define TMS570_SPIFMT_PARITYENA BSP_FLD32(22)

/* field: WAITENA - The master waits for the ENA signal from slave for data format x. */
#define TMS570_SPIFMT_WAITENA BSP_FLD32(21)

/* field: SHIFTDIR - Shift direction for data format x. */
#define TMS570_SPIFMT_SHIFTDIR BSP_FLD32(20)

/* field: HDUPLEX_ENAx - Half Duplex transfer mode enable for Data Format x. */
#define TMS570_SPIFMT_HDUPLEX_ENAx BSP_FLD32(19)

/* field: DIS_CS_TIMERS - Disable chip-select timers for this format. */
#define TMS570_SPIFMT_DIS_CS_TIMERS BSP_FLD32(18)

/* field: POLARITY - POLARITY */
#define TMS570_SPIFMT_POLARITY BSP_FLD32(17)

/* field: PHASE - SPI data format x clock delay. PHASEx defines the clock delay of data format x. */
#define TMS570_SPIFMT_PHASE BSP_FLD32(16)

/* field: PRESCALE - SPI data format x prescaler. */
#define TMS570_SPIFMT_PRESCALE(val) BSP_FLD32(val,8, 15)
#define TMS570_SPIFMT_PRESCALE_GET(reg) BSP_FLD32GET(reg,8, 15)
#define TMS570_SPIFMT_PRESCALE_SET(reg,val) BSP_FLD32SET(reg, val,8, 15)

/* field: CHARLEN - SPI data format x data-word length. CHARLENx defines the word length of data format x. */
#define TMS570_SPIFMT_CHARLEN(val) BSP_FLD32(val,0, 4)
#define TMS570_SPIFMT_CHARLEN_GET(reg) BSP_FLD32GET(reg,0, 4)
#define TMS570_SPIFMT_CHARLEN_SET(reg,val) BSP_FLD32SET(reg, val,0, 4)


/*----------------------TMS570_INTVECT0----------------------*/
/* field: INTVECT0 - INTVECT0. Interrupt vector for interrupt line INT0. */
#define TMS570_INTVECT0_INTVECT0(val) BSP_FLD32(val,1, 5)
#define TMS570_INTVECT0_INTVECT0_GET(reg) BSP_FLD32GET(reg,1, 5)
#define TMS570_INTVECT0_INTVECT0_SET(reg,val) BSP_FLD32SET(reg, val,1, 5)

/* field: SUSPEND0 - Transfer suspended / Transfer finished interrupt flag. */
#define TMS570_INTVECT0_SUSPEND0 BSP_FLD32(0)


/*----------------------TMS570_INTVECT1----------------------*/
/* field: INTVECT1 - INTVECT1. Interrupt vector for interrupt line INT1. */
#define TMS570_INTVECT1_INTVECT1(val) BSP_FLD32(val,1, 5)
#define TMS570_INTVECT1_INTVECT1_GET(reg) BSP_FLD32GET(reg,1, 5)
#define TMS570_INTVECT1_INTVECT1_SET(reg,val) BSP_FLD32SET(reg, val,1, 5)

/* field: SUSPEND1 - Transfer suspended / Transfer finished interrupt flag. */
#define TMS570_INTVECT1_SUSPEND1 BSP_FLD32(0)


/*----------------------TMS570_SPIPMCTRL----------------------*/
/* field: MOD_CLK_POL_3 - Modulo mode SPICLK polarity. */
#define TMS570_SPIPMCTRL_MOD_CLK_POL_3 BSP_FLD32(29)

/* field: MMODE_3 - These bits determine whether the SPI/MibSPI operates with 1, 2, 4, 5, or 6 data lines (if */
#define TMS570_SPIPMCTRL_MMODE_3(val) BSP_FLD32(val,26, 28)
#define TMS570_SPIPMCTRL_MMODE_3_GET(reg) BSP_FLD32GET(reg,26, 28)
#define TMS570_SPIPMCTRL_MMODE_3_SET(reg,val) BSP_FLD32SET(reg, val,26, 28)

/* field: PMODE_3 - Parallel mode bits determine whether the SPI/MibSPI operates with 1, 2, 4 or 8 data lines. */
#define TMS570_SPIPMCTRL_PMODE_3(val) BSP_FLD32(val,24, 25)
#define TMS570_SPIPMCTRL_PMODE_3_GET(reg) BSP_FLD32GET(reg,24, 25)
#define TMS570_SPIPMCTRL_PMODE_3_SET(reg,val) BSP_FLD32SET(reg, val,24, 25)

/* field: MOD_CLK_POL_2 - Modulo mode SPICLK polarity. */
#define TMS570_SPIPMCTRL_MOD_CLK_POL_2 BSP_FLD32(21)

/* field: MMODE_2 - These bits determine whether the SPI/MibSPI operates with 1, 2, 4, 5, or 6 data lines (if */
#define TMS570_SPIPMCTRL_MMODE_2(val) BSP_FLD32(val,18, 20)
#define TMS570_SPIPMCTRL_MMODE_2_GET(reg) BSP_FLD32GET(reg,18, 20)
#define TMS570_SPIPMCTRL_MMODE_2_SET(reg,val) BSP_FLD32SET(reg, val,18, 20)

/* field: PMODE_2 - Parallel mode bits determine whether the SPI/MibSPI operates with 1, 2, 4 or 8 data lines. */
#define TMS570_SPIPMCTRL_PMODE_2(val) BSP_FLD32(val,16, 17)
#define TMS570_SPIPMCTRL_PMODE_2_GET(reg) BSP_FLD32GET(reg,16, 17)
#define TMS570_SPIPMCTRL_PMODE_2_SET(reg,val) BSP_FLD32SET(reg, val,16, 17)

/* field: MOD_CLK_POL_1 - Modulo mode SPICLK polarity. */
#define TMS570_SPIPMCTRL_MOD_CLK_POL_1 BSP_FLD32(13)

/* field: MMODE_1 - These bits determine whether the SPI/MibSPI operates with 1, 2, 4, 5, or 6 data lines (if */
#define TMS570_SPIPMCTRL_MMODE_1(val) BSP_FLD32(val,10, 12)
#define TMS570_SPIPMCTRL_MMODE_1_GET(reg) BSP_FLD32GET(reg,10, 12)
#define TMS570_SPIPMCTRL_MMODE_1_SET(reg,val) BSP_FLD32SET(reg, val,10, 12)

/* field: PMODE_1 - Parallel mode bits determine whether the SPI/MibSPI operates with 1, 2, 4 or 8 data lines. */
#define TMS570_SPIPMCTRL_PMODE_1(val) BSP_FLD32(val,8, 9)
#define TMS570_SPIPMCTRL_PMODE_1_GET(reg) BSP_FLD32GET(reg,8, 9)
#define TMS570_SPIPMCTRL_PMODE_1_SET(reg,val) BSP_FLD32SET(reg, val,8, 9)

/* field: MOD_CLK_POL_0 - Modulo mode SPICLK polarity. */
#define TMS570_SPIPMCTRL_MOD_CLK_POL_0 BSP_FLD32(5)

/* field: MMODE_0 - These bits determine whether the SPI/MibSPI operates with 1, 2, 4, 5, or 6 data lines (if */
#define TMS570_SPIPMCTRL_MMODE_0(val) BSP_FLD32(val,2, 4)
#define TMS570_SPIPMCTRL_MMODE_0_GET(reg) BSP_FLD32GET(reg,2, 4)
#define TMS570_SPIPMCTRL_MMODE_0_SET(reg,val) BSP_FLD32SET(reg, val,2, 4)

/* field: PMODE_0 - Parallel mode bits determine whether the SPI/MibSPI operates with 1, 2, 4 or 8 data lines. */
#define TMS570_SPIPMCTRL_PMODE_0(val) BSP_FLD32(val,0, 1)
#define TMS570_SPIPMCTRL_PMODE_0_GET(reg) BSP_FLD32GET(reg,0, 1)
#define TMS570_SPIPMCTRL_PMODE_0_SET(reg,val) BSP_FLD32SET(reg, val,0, 1)


/*-----------------------TMS570_MIBSPIE-----------------------*/
/* field: RXRAM_ACCESS - Receive-RAM access control. */
#define TMS570_MIBSPIE_RXRAM_ACCESS BSP_FLD32(16)

/* field: MSPIENA - Multi-buffer mode enable. */
#define TMS570_MIBSPIE_MSPIENA BSP_FLD32(0)


/*----------------------TMS570_TGITENST----------------------*/
/* field: SET_INTENRDY - TG interrupt set (enable) when transfer finished. */
#define TMS570_TGITENST_SET_INTENRDY(val) BSP_FLD32(val,16, 31)
#define TMS570_TGITENST_SET_INTENRDY_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_TGITENST_SET_INTENRDY_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: SET_INTENSUS - TG interrupt set (enabled) when transfer suspended */
#define TMS570_TGITENST_SET_INTENSUS(val) BSP_FLD32(val,0, 15)
#define TMS570_TGITENST_SET_INTENSUS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_TGITENST_SET_INTENSUS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------TMS570_TGITENCR----------------------*/
/* field: CLR_INTENRDY - TG interrupt clear (disabled) when transfer finished. */
#define TMS570_TGITENCR_CLR_INTENRDY(val) BSP_FLD32(val,16, 31)
#define TMS570_TGITENCR_CLR_INTENRDY_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_TGITENCR_CLR_INTENRDY_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: CLR_INTENSUS - CLR INTENSUS */
#define TMS570_TGITENCR_CLR_INTENSUS(val) BSP_FLD32(val,0, 15)
#define TMS570_TGITENCR_CLR_INTENSUS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_TGITENCR_CLR_INTENSUS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------TMS570_TGITLVST----------------------*/
/* field: SET_INTLVLRDY - Transfer-group completed interrupt level set. */
#define TMS570_TGITLVST_SET_INTLVLRDY(val) BSP_FLD32(val,16, 31)
#define TMS570_TGITLVST_SET_INTLVLRDY_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_TGITLVST_SET_INTLVLRDY_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: SET_INTLVLSUS - Transfer-group suspended interrupt level set. */
#define TMS570_TGITLVST_SET_INTLVLSUS(val) BSP_FLD32(val,0, 15)
#define TMS570_TGITLVST_SET_INTLVLSUS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_TGITLVST_SET_INTLVLSUS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------TMS570_TGITLVCR----------------------*/
/* field: CLR_INTLVLRDY - Transfer-group completed interrupt level clear. */
#define TMS570_TGITLVCR_CLR_INTLVLRDY(val) BSP_FLD32(val,16, 31)
#define TMS570_TGITLVCR_CLR_INTLVLRDY_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_TGITLVCR_CLR_INTLVLRDY_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: CLR_INTLVLSUS - Transfer group suspended interrupt level clear. */
#define TMS570_TGITLVCR_CLR_INTLVLSUS(val) BSP_FLD32(val,0, 15)
#define TMS570_TGITLVCR_CLR_INTLVLSUS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_TGITLVCR_CLR_INTLVLSUS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------TMS570_TGINTFLG----------------------*/
/* field: INTFLGRDY - Transfer-group interrupt flag for a transfer-completed interrupt. */
#define TMS570_TGINTFLG_INTFLGRDY(val) BSP_FLD32(val,16, 31)
#define TMS570_TGINTFLG_INTFLGRDY_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_TGINTFLG_INTFLGRDY_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: INTFLGSUS - ransfer-group interrupt flag for a transfer-suspend interrupt. */
#define TMS570_TGINTFLG_INTFLGSUS(val) BSP_FLD32(val,0, 15)
#define TMS570_TGINTFLG_INTFLGSUS_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_TGINTFLG_INTFLGSUS_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_TICKCNT-----------------------*/
/* field: TICKENA - Tick counter enable. */
#define TMS570_TICKCNT_TICKENA BSP_FLD32(31)

/* field: RELOAD - Pre-load the tick counter. */
#define TMS570_TICKCNT_RELOAD BSP_FLD32(30)

/* field: CLKCTRL - Tick counter clock source control. */
#define TMS570_TICKCNT_CLKCTRL(val) BSP_FLD32(val,28, 29)
#define TMS570_TICKCNT_CLKCTRL_GET(reg) BSP_FLD32GET(reg,28, 29)
#define TMS570_TICKCNT_CLKCTRL_SET(reg,val) BSP_FLD32SET(reg, val,28, 29)

/* field: TICKVALUE - counter is loaded with the contents of TICKVALUE every time an underflow condition occurs and */
#define TMS570_TICKCNT_TICKVALUE(val) BSP_FLD32(val,0, 15)
#define TMS570_TICKCNT_TICKVALUE_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_TICKCNT_TICKVALUE_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*-----------------------TMS570_LTGPEND-----------------------*/
/* field: TG_IN_SERVICE - The TG number currently being serviced by the sequencer. */
#define TMS570_LTGPEND_TG_IN_SERVICE(val) BSP_FLD32(val,24, 28)
#define TMS570_LTGPEND_TG_IN_SERVICE_GET(reg) BSP_FLD32GET(reg,24, 28)
#define TMS570_LTGPEND_TG_IN_SERVICE_SET(reg,val) BSP_FLD32SET(reg, val,24, 28)

/* field: LPEND - Last TG end pointer. */
#define TMS570_LTGPEND_LPEND(val) BSP_FLD32(val,8, 14)
#define TMS570_LTGPEND_LPEND_GET(reg) BSP_FLD32GET(reg,8, 14)
#define TMS570_LTGPEND_LPEND_SET(reg,val) BSP_FLD32SET(reg, val,8, 14)


/*-----------------------TMS570_TG0CTRL-----------------------*/
/* field: TGENA - TGx enable. */
#define TMS570_TG0CTRL_TGENA BSP_FLD32(31)

/* field: ONESHOTx - Single transfer for TGx. */
#define TMS570_TG0CTRL_ONESHOTx BSP_FLD32(30)

/* field: PRSTx - TGx pointer reset mode. Configures the way to resolve trigger events during an ongoing transfer. */
#define TMS570_TG0CTRL_PRSTx BSP_FLD32(29)

/* field: TGTDx - TG triggered. */
#define TMS570_TG0CTRL_TGTDx BSP_FLD32(28)


/*----------------------TMS570_DMA0CTRL----------------------*/
/* field: ONESHOT - Auto-disable of DMA channel after ICOUNT+1 transfers. */
#define TMS570_DMA0CTRL_ONESHOT BSP_FLD32(31)

/* field: BUFIDx - Buffer utilized for DMA transfer. */
#define TMS570_DMA0CTRL_BUFIDx(val) BSP_FLD32(val,24, 30)
#define TMS570_DMA0CTRL_BUFIDx_GET(reg) BSP_FLD32GET(reg,24, 30)
#define TMS570_DMA0CTRL_BUFIDx_SET(reg,val) BSP_FLD32SET(reg, val,24, 30)

/* field: RXDMA_MAPx - Each MibSPI DMA channel can be linked to two physical DMA Request lines of the DMA */
#define TMS570_DMA0CTRL_RXDMA_MAPx(val) BSP_FLD32(val,20, 23)
#define TMS570_DMA0CTRL_RXDMA_MAPx_GET(reg) BSP_FLD32GET(reg,20, 23)
#define TMS570_DMA0CTRL_RXDMA_MAPx_SET(reg,val) BSP_FLD32SET(reg, val,20, 23)

/* field: TXDMA_MAPx - Each MibSPI DMA channel can be linked to two physical DMA Request lines of the DMA */
#define TMS570_DMA0CTRL_TXDMA_MAPx(val) BSP_FLD32(val,16, 19)
#define TMS570_DMA0CTRL_TXDMA_MAPx_GET(reg) BSP_FLD32GET(reg,16, 19)
#define TMS570_DMA0CTRL_TXDMA_MAPx_SET(reg,val) BSP_FLD32SET(reg, val,16, 19)

/* field: RXDMAENAx - Receive data DMA channel enable. */
#define TMS570_DMA0CTRL_RXDMAENAx BSP_FLD32(15)

/* field: TXDAMENAx - Transmit data DMA channel enable. */
#define TMS570_DMA0CTRL_TXDAMENAx BSP_FLD32(14)

/* field: NOBRKx - Non-interleaved DMA block transfer. This bit is available in master mode only. */
#define TMS570_DMA0CTRL_NOBRKx BSP_FLD32(13)

/* field: ICOUNTx - Initial count of DMA transfers. */
#define TMS570_DMA0CTRL_ICOUNTx(val) BSP_FLD32(val,8, 12)
#define TMS570_DMA0CTRL_ICOUNTx_GET(reg) BSP_FLD32GET(reg,8, 12)
#define TMS570_DMA0CTRL_ICOUNTx_SET(reg,val) BSP_FLD32SET(reg, val,8, 12)

/* field: COUNT_BIT17x - The 17th bit of the COUNT field of DMAxCOUNT register. */
#define TMS570_DMA0CTRL_COUNT_BIT17x BSP_FLD32(6)

/* field: COUNTx - Actual number of remaining DMA transfers. */
#define TMS570_DMA0CTRL_COUNTx(val) BSP_FLD32(val,0, 5)
#define TMS570_DMA0CTRL_COUNTx_GET(reg) BSP_FLD32GET(reg,0, 5)
#define TMS570_DMA0CTRL_COUNTx_SET(reg,val) BSP_FLD32SET(reg, val,0, 5)


/*-----------------------TMS570_ICOUNT0-----------------------*/
/* field: ICOUNTx - Every time COUNTx hits zero, it is reloaded with ICOUNTx. */
#define TMS570_ICOUNT0_ICOUNTx(val) BSP_FLD32(val,16, 31)
#define TMS570_ICOUNT0_ICOUNTx_GET(reg) BSP_FLD32GET(reg,16, 31)
#define TMS570_ICOUNT0_ICOUNTx_SET(reg,val) BSP_FLD32SET(reg, val,16, 31)

/* field: COUNTx - The actual number of remaining DMA transfers. */
#define TMS570_ICOUNT0_COUNTx(val) BSP_FLD32(val,0, 15)
#define TMS570_ICOUNT0_COUNTx_GET(reg) BSP_FLD32GET(reg,0, 15)
#define TMS570_ICOUNT0_COUNTx_SET(reg,val) BSP_FLD32SET(reg, val,0, 15)


/*----------------------TMS570_DMACNTLEN----------------------*/
/* field: LARGE_COUNT - Select either the 16-bit DMAxCOUNT counters or the smaller counters in DMAxCTRL. */
#define TMS570_DMACNTLEN_LARGE_COUNT BSP_FLD32(0)


/*----------------------TMS570_UERRCTRL----------------------*/
/* field: PTESTEN - Parity memory test enable. */
#define TMS570_UERRCTRL_PTESTEN BSP_FLD32(8)

/* field: EDEN - Error detection enable. These bits enable parity error detection. */
#define TMS570_UERRCTRL_EDEN(val) BSP_FLD32(val,0, 3)
#define TMS570_UERRCTRL_EDEN_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_UERRCTRL_EDEN_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)


/*----------------------TMS570_UERRSTAT----------------------*/
/* field: EDFLG1 - RXRAM. */
#define TMS570_UERRSTAT_EDFLG1 BSP_FLD32(1)

/* field: EDFLG0 - Uncorrectable parity error detection flag. */
#define TMS570_UERRSTAT_EDFLG0 BSP_FLD32(0)


/*----------------------TMS570_UERRADDR1----------------------*/
/* field: OVERADDR1 - Uncorrectable parity error address for RXRAM. */
#define TMS570_UERRADDR1_OVERADDR1(val) BSP_FLD32(val,0, 9)
#define TMS570_UERRADDR1_OVERADDR1_GET(reg) BSP_FLD32GET(reg,0, 9)
#define TMS570_UERRADDR1_OVERADDR1_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)


/*----------------------TMS570_UERRADDR0----------------------*/
/* field: UERRADDR0 - a parity error is generated while reading from TXRAM. */
#define TMS570_UERRADDR0_UERRADDR0(val) BSP_FLD32(val,0, 8)
#define TMS570_UERRADDR0_UERRADDR0_GET(reg) BSP_FLD32GET(reg,0, 8)
#define TMS570_UERRADDR0_UERRADDR0_SET(reg,val) BSP_FLD32SET(reg, val,0, 8)


/*-------------------TMS570_RXOVRN_BUF_ADDR-------------------*/
/* field: RXOVRN_BUF_ADDR - Address in RXRAM at which an overwrite occurred. */
#define TMS570_RXOVRN_BUF_ADDR_RXOVRN_BUF_ADDR(val) BSP_FLD32(val,0, 9)
#define TMS570_RXOVRN_BUF_ADDR_RXOVRN_BUF_ADDR_GET(reg) BSP_FLD32GET(reg,0, 9)
#define TMS570_RXOVRN_BUF_ADDR_RXOVRN_BUF_ADDR_SET(reg,val) BSP_FLD32SET(reg, val,0, 9)


/*---------------------TMS570_IOLPBKTSTCR---------------------*/
/* field: SCS_FAIL_FLG - Bit indicating a failure on SPISCS pin compare during analog loopback. */
#define TMS570_IOLPBKTSTCR_SCS_FAIL_FLG BSP_FLD32(24)

/* field: CTRL_BITERR - Controls inducing of BITERR during I/O loopback test mode. */
#define TMS570_IOLPBKTSTCR_CTRL_BITERR BSP_FLD32(20)

/* field: CTRL_DESYNC - Controls inducing of the desync error during I/O loopback test mode. */
#define TMS570_IOLPBKTSTCR_CTRL_DESYNC BSP_FLD32(19)

/* field: CTRL_PARERR - Controls inducing of the parity errors during I/O loopback test mode. */
#define TMS570_IOLPBKTSTCR_CTRL_PARERR BSP_FLD32(18)

/* field: CTRL_TIMEOUT - Controls inducing of the timeout error during I/O loopback test mode. */
#define TMS570_IOLPBKTSTCR_CTRL_TIMEOUT BSP_FLD32(17)

/* field: CTRL_DLENERR - Controls inducing of the data length error during I/O loopback test mode. */
#define TMS570_IOLPBKTSTCR_CTRL_DLENERR BSP_FLD32(16)

/* field: IOLPBKSTENA - Module I/O loopback test enable key. */
#define TMS570_IOLPBKTSTCR_IOLPBKSTENA(val) BSP_FLD32(val,8, 11)
#define TMS570_IOLPBKTSTCR_IOLPBKSTENA_GET(reg) BSP_FLD32GET(reg,8, 11)
#define TMS570_IOLPBKTSTCR_IOLPBKSTENA_SET(reg,val) BSP_FLD32SET(reg, val,8, 11)

/* field: ERR_SCS_PIN - Inject error on chip-select pin number x. */
#define TMS570_IOLPBKTSTCR_ERR_SCS_PIN(val) BSP_FLD32(val,3, 5)
#define TMS570_IOLPBKTSTCR_ERR_SCS_PIN_GET(reg) BSP_FLD32GET(reg,3, 5)
#define TMS570_IOLPBKTSTCR_ERR_SCS_PIN_SET(reg,val) BSP_FLD32SET(reg, val,3, 5)

/* field: CTRL_SCS_PIN - Enable/disable the injection of an error on the SPISCS[3:0] pins. */
#define TMS570_IOLPBKTSTCR_CTRL_SCS_PIN BSP_FLD32(2)

/* field: LPBK_TYPE - Module I/O loopback type (analog/digital). */
#define TMS570_IOLPBKTSTCR_LPBK_TYPE BSP_FLD32(1)

/* field: RXP_ENA - Enable analog loopback through the receive pin. */
#define TMS570_IOLPBKTSTCR_RXP_ENA BSP_FLD32(0)


/*-----------------TMS570_EXTENDED_PRESCALE1-----------------*/
/* field: EPRESCALE_FMT1 - EPRESCALE_FMT1. Extended Prescale value for SPIFMT1. */
#define TMS570_EXTENDED_PRESCALE1_EPRESCALE_FMT1(val) BSP_FLD32(val,16, 26)
#define TMS570_EXTENDED_PRESCALE1_EPRESCALE_FMT1_GET(reg) BSP_FLD32GET(reg,16, 26)
#define TMS570_EXTENDED_PRESCALE1_EPRESCALE_FMT1_SET(reg,val) BSP_FLD32SET(reg, val,16, 26)


/*-----------------TMS570_EXTENDED_PRESCALE2-----------------*/
/* field: EPRESCALE_FMT3 - EPRESCALE_FMT3. Extended Prescale value for SPIFMT1. */
#define TMS570_EXTENDED_PRESCALE2_EPRESCALE_FMT3(val) BSP_FLD32(val,16, 26)
#define TMS570_EXTENDED_PRESCALE2_EPRESCALE_FMT3_GET(reg) BSP_FLD32GET(reg,16, 26)
#define TMS570_EXTENDED_PRESCALE2_EPRESCALE_FMT3_SET(reg,val) BSP_FLD32SET(reg, val,16, 26)



#endif /* LIBBSP_ARM_tms570_SPI */