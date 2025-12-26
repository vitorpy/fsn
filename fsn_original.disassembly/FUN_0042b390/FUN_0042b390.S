# Function: FUN_0042b390
# Address: 0x0042b390 - 0x0042b3f4
# Size: 0x64 (100 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b390 <createHelpMenu+0x2d8>:
  42b390:	3c1c0fbf 	lui	gp,0xfbf
  42b394:	279c27a0 	addiu	gp,gp,10144
  42b398:	0399e021 	addu	gp,gp,t9
  42b39c:	27bdffe0 	addiu	sp,sp,-32
  42b3a0:	8f998138 	lw	t9,-32456(gp)
  42b3a4:	afbf001c 	sw	ra,28(sp)
  42b3a8:	afbc0018 	sw	gp,24(sp)
  42b3ac:	afa40020 	sw	a0,32(sp)
  42b3b0:	afa50024 	sw	a1,36(sp)
  42b3b4:	0320f809 	jalr	t9
  42b3b8:	afa60028 	sw	a2,40(sp)
  42b3bc:	8fbc0018 	lw	gp,24(sp)
  42b3c0:	8fae0020 	lw	t6,32(sp)
  42b3c4:	8f828068 	lw	v0,-32664(gp)
  42b3c8:	00000000 	nop
  42b3cc:	244279c0 	addiu	v0,v0,31168
  42b3d0:	8c4f0000 	lw	t7,0(v0)
  42b3d4:	00000000 	nop
  42b3d8:	15cf0003 	bne	t6,t7,42b3e8 <createHelpMenu+0x330>
  42b3dc:	8fbf001c 	lw	ra,28(sp)
  42b3e0:	ac400000 	sw	zero,0(v0)
  42b3e4:	8fbf001c 	lw	ra,28(sp)
  42b3e8:	27bd0020 	addiu	sp,sp,32
  42b3ec:	03e00008 	jr	ra
  42b3f0:	00000000 	nop
