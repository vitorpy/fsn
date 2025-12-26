# Function: FUN_00411578
# Address: 0x00411578 - 0x004115f8
# Size: 0x80 (128 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411578 <fileerror+0x4f0>:
  411578:	3c1c0fc1 	lui	gp,0xfc1
  41157c:	279cc5b8 	addiu	gp,gp,-14920
  411580:	0399e021 	addu	gp,gp,t9
  411584:	8f8e8988 	lw	t6,-30328(gp)
  411588:	27bdffe0 	addiu	sp,sp,-32
  41158c:	8dce0000 	lw	t6,0(t6)
  411590:	8f998490 	lw	t9,-31600(gp)
  411594:	afbf001c 	sw	ra,28(sp)
  411598:	afbc0018 	sw	gp,24(sp)
  41159c:	8dc4000c 	lw	a0,12(t6)
  4115a0:	0320f809 	jalr	t9
  4115a4:	00000000 	nop
  4115a8:	8fbc0018 	lw	gp,24(sp)
  4115ac:	00000000 	nop
  4115b0:	8f8f8984 	lw	t7,-30332(gp)
  4115b4:	8f998490 	lw	t9,-31600(gp)
  4115b8:	8def0000 	lw	t7,0(t7)
  4115bc:	00000000 	nop
  4115c0:	8de40024 	lw	a0,36(t7)
  4115c4:	0320f809 	jalr	t9
  4115c8:	00000000 	nop
  4115cc:	8fbc0018 	lw	gp,24(sp)
  4115d0:	00000000 	nop
  4115d4:	8f988980 	lw	t8,-30336(gp)
  4115d8:	00000000 	nop
  4115dc:	8f180000 	lw	t8,0(t8)
  4115e0:	00000000 	nop
  4115e4:	a3000c51 	sb	zero,3153(t8)
  4115e8:	8fbf001c 	lw	ra,28(sp)
  4115ec:	27bd0020 	addiu	sp,sp,32
  4115f0:	03e00008 	jr	ra
  4115f4:	00000000 	nop
