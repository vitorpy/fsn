# Function: FUN_0042f4b4
# Address: 0x0042f4b4 - 0x0042f4d8
# Size: 0x24 (36 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042f4b4 <createMarkControls+0x23c>:
  42f4b4:	3c1c0fbf 	lui	gp,0xfbf
  42f4b8:	279ce67c 	addiu	gp,gp,-6532
  42f4bc:	0399e021 	addu	gp,gp,t9
  42f4c0:	8f81806c 	lw	at,-32660(gp)
  42f4c4:	afa40000 	sw	a0,0(sp)
  42f4c8:	afa50004 	sw	a1,4(sp)
  42f4cc:	afa60008 	sw	a2,8(sp)
  42f4d0:	03e00008 	jr	ra
  42f4d4:	ac206ec8 	sw	zero,28360(at)
