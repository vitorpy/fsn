# Function: FUN_0040d9a8
# Address: 0x0040d9a8 - 0x0040da14
# Size: 0x6c (108 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040d9a8 <setScales+0x1b0>:
  40d9a8:	3c1c0fc1 	lui	gp,0xfc1
  40d9ac:	279c0188 	addiu	gp,gp,392
  40d9b0:	0399e021 	addu	gp,gp,t9
  40d9b4:	27bdffe0 	addiu	sp,sp,-32
  40d9b8:	8f8f897c 	lw	t7,-30340(gp)
  40d9bc:	afbf001c 	sw	ra,28(sp)
  40d9c0:	afbc0018 	sw	gp,24(sp)
  40d9c4:	afa40020 	sw	a0,32(sp)
  40d9c8:	afa50024 	sw	a1,36(sp)
  40d9cc:	8cce0008 	lw	t6,8(a2)
  40d9d0:	8def0000 	lw	t7,0(t7)
  40d9d4:	00000000 	nop
  40d9d8:	a5ee000e 	sh	t6,14(t7)
  40d9dc:	8f99852c 	lw	t9,-31444(gp)
  40d9e0:	00000000 	nop
  40d9e4:	0320f809 	jalr	t9
  40d9e8:	00000000 	nop
  40d9ec:	8fbc0018 	lw	gp,24(sp)
  40d9f0:	00000000 	nop
  40d9f4:	8f998534 	lw	t9,-31436(gp)
  40d9f8:	00000000 	nop
  40d9fc:	0320f809 	jalr	t9
  40da00:	00000000 	nop
  40da04:	8fbf001c 	lw	ra,28(sp)
  40da08:	8fbc0018 	lw	gp,24(sp)
  40da0c:	03e00008 	jr	ra
  40da10:	27bd0020 	addiu	sp,sp,32
