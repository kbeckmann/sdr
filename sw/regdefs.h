////////////////////////////////////////////////////////////////////////////////
//
// Filename:	./regdefs.h
//
// Project:	SDR, a basic Soft(Gate)ware Defined Radio architecture
//
// DO NOT EDIT THIS FILE!
// Computer Generated: This file is computer generated by AUTOFPGA. DO NOT EDIT.
// DO NOT EDIT THIS FILE!
//
// CmdLine:	autofpga autofpga -d -o . global.txt clock36.txt version.txt hexbus.txt gpio.txt amxmit.txt histogram.txt rfscope.txt samplerate.txt
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2019-2020, Gisselquist Technology, LLC
//
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
// target there if the PDF file isn't present.)  If not, see
// <http://www.gnu.org/licenses/> for a copy.
//
// License:	GPL, v3, as defined and found on www.gnu.org,
//		http://www.gnu.org/licenses/gpl.html
//
//
////////////////////////////////////////////////////////////////////////////////
//
//
#ifndef	REGDEFS_H
#define	REGDEFS_H


//
// The @REGDEFS.H.INCLUDE tag
//
// @REGDEFS.H.INCLUDE for masters
// @REGDEFS.H.INCLUDE for peripherals
// And finally any master REGDEFS.H.INCLUDE tags
// End of definitions from REGDEFS.H.INCLUDE


//
// Register address definitions, from @REGS.#d
//
// rfscope scope
#define	R_RFSCOPE  	0x00000400	// 00000400, wbregs names: RFSCOPE
#define	R_RFSCOPED 	0x00000404	// 00000400, wbregs names: RFSCOPED
#define	R_AMGAIN   	0x00000800	// 00000800, wbregs names: AMGAIN
#define	R_MICDATA  	0x00000800	// 00000800, wbregs names: MICDATA
#define	R_GAINDATA 	0x00000804	// 00000800, wbregs names: GAINDATA
#define	R_RFSAMPLE 	0x00000808	// 00000800, wbregs names: RFSAMPLE
#define	R_BUILDTIME	0x00000c00	// 00000c00, wbregs names: BUILDTIME
#define	R_GPIO     	0x00000c04	// 00000c04, wbregs names: GPIO, GPI, GPO
#define	R_SRATE    	0x00000c08	// 00000c08, wbregs names: SRATE
#define	R_SRATE    	0x00000c08	// 00000c08, wbregs names: SAMPLERATE
#define	R_VERSION  	0x00000c0c	// 00000c0c, wbregs names: VERSION
#define	R_HISTOGRAM	0x00001000	// 00001000, wbregs names: HISTOGRAM


//
// The @REGDEFS.H.DEFNS tag
//
// @REGDEFS.H.DEFNS for masters
#define	BAUDRATE 1000000
#define	CLKFREQHZ	36000000
// @REGDEFS.H.DEFNS for peripherals
// @REGDEFS.H.DEFNS at the top level
// End of definitions from REGDEFS.H.DEFNS
//
// The @REGDEFS.H.INSERT tag
//
// @REGDEFS.H.INSERT for masters
// @REGDEFS.H.INSERT for peripherals
// @REGDEFS.H.INSERT from the top level
typedef	struct {
	unsigned	m_addr;
	const char	*m_name;
} REGNAME;

extern	const	REGNAME	*bregs;
extern	const	int	NREGS;
// #define	NREGS	(sizeof(bregs)/sizeof(bregs[0]))

extern	unsigned	addrdecode(const char *v);
extern	const	char *addrname(const unsigned v);
// End of definitions from REGDEFS.H.INSERT


#endif	// REGDEFS_H
