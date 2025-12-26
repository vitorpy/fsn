# Function: setOverviewWindow
# Address: 0x0041fd64 - 0x0041fda4
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041fd64 <setOverviewWindow>:
  41fd64:	3c1c0fc0 	lui	gp,0xfc0
  41fd68:	279cddcc 	addiu	gp,gp,-8756
  41fd6c:	0399e021 	addu	gp,gp,t9
  41fd70:	8f848a04 	lw	a0,-30204(gp)
  41fd74:	8f85806c 	lw	a1,-32660(gp)
  41fd78:	8f9982f4 	lw	t9,-32012(gp)
  41fd7c:	27bdffe0 	addiu	sp,sp,-32
  41fd80:	afbf001c 	sw	ra,28(sp)
  41fd84:	8c840000 	lw	a0,0(a0)
  41fd88:	8ca56c00 	lw	a1,27648(a1)
  41fd8c:	0320f809 	jalr	t9
  41fd90:	afbc0018 	sw	gp,24(sp)
  41fd94:	8fbf001c 	lw	ra,28(sp)
  41fd98:	8fbc0018 	lw	gp,24(sp)
  41fd9c:	03e00008 	jr	ra
  41fda0:	27bd0020 	addiu	sp,sp,32
