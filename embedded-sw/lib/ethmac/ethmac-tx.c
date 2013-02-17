//////////////////////////////////////////////////////////////////////
////                                                              ////
////  Interrupt-driven Ethernet MAC transmit test code            ////
////                                                              ////
////  Description                                                 ////
////  Transmits packets, testing both 100mbit and 10mbit modes.   ////
////  Expects testbench to be checking each packet sent.          ////
////  Define, ETH_TX_TEST_LENGTH, set further down, controls how  ////
////  many packets the test will send.                            ////
////                                                              ////
////  Author(s):                                                  ////
////      - jb, jb@orsoc.se, with parts taken from Linux kernel   ////
////        open_eth driver.                                      ////
////                                                              ////
////                                                              ////
//////////////////////////////////////////////////////////////////////
////                                                              ////
//// Copyright (C) 2009 Authors and OPENCORES.ORG                 ////
////                                                              ////
//// This source file may be used and distributed without         ////
//// restriction provided that this copyright statement is not    ////
//// removed from the file and that any derivative work contains  ////
//// the original copyright notice and the associated disclaimer. ////
////                                                              ////
//// This source file is free software; you can redistribute it   ////
//// and/or modify it under the terms of the GNU Lesser General   ////
//// Public License as published by the Free Software Foundation; ////
//// either version 2.1 of the License, or (at your option) any   ////
//// later version.                                               ////
////                                                              ////
//// This source is distributed in the hope that it will be       ////
//// useful, but WITHOUT ANY WARRANTY; without even the implied   ////
//// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR      ////
//// PURPOSE.  See the GNU Lesser General Public License for more ////
//// details.                                                     ////
////                                                              ////
//// You should have received a copy of the GNU Lesser General    ////
//// Public License along with this source; if not, download it   ////
//// from http://www.opencores.org/lgpl.shtml                     ////
////                                                              ////
//////////////////////////////////////////////////////////////////////

#include "cpu-utils.h"
#include "board.h"
#include "int.h"
#include "ethmac.h"
#include "eth-phy-mii.h"

int main ()
{
	/* Initialise handler vector */
	int_init();

	/* Install ethernet interrupt handler, it is enabled here too */
	int_add(ETH0_IRQ, oeth_interrupt, 0);

	ethmac_setup(ETH0_PHY, ETH0_BUF); /* Configure MAC, TX/RX BDs and enable RX and TX in MODER */

	/* clear tx_done, the tx interrupt handler will set it when it's been transmitted */

	while (1) {
		char buf[120];
		memcpy(buf, "Hello world!\n", 12);
		tx_packet(buf, sizeof(buf));
	}

	exit(0x8000000d);

}
