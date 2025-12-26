# Function: FUN_0040f1f0
# Address: 0x0040f1f0 - 0x0040f20c
# Size: 0x1c (28 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040f1f0 <activeWorkProc+0xc>:
  40f1f0:	8f828068 	lw	v0,-32664(gp)
  40f1f4:	00000000 	nop
  40f1f8:	8c420154 	lw	v0,340(v0)
  40f1fc:	00000000 	nop
  40f200:	0002702b 	sltu	t6,zero,v0
  40f204:	03e00008 	jr	ra
  40f208:	31c200ff 	andi	v0,t6,0xff
