# Function: savecontext
# Address: 0x0042a7c4 - 0x0042a7e4
# Size: 0x20 (32 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a7c4 <savecontext>:
  42a7c4:	3c1c0fbf 	lui	gp,0xfbf
  42a7c8:	279c336c 	addiu	gp,gp,13164
  42a7cc:	0399e021 	addu	gp,gp,t9
  42a7d0:	8f8e898c 	lw	t6,-30324(gp)
  42a7d4:	8f81806c 	lw	at,-32660(gp)
  42a7d8:	8dce0000 	lw	t6,0(t6)
  42a7dc:	03e00008 	jr	ra
  42a7e0:	ac2e6e00 	sw	t6,28160(at)
