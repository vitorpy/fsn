# Function: FUN_0042f4d8
# Address: 0x0042f4d8 - 0x0042f5d0
# Size: 0xf8 (248 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042f4d8 <createMarkControls+0x260>:
  42f4d8:	3c1c0fbf 	lui	gp,0xfbf
  42f4dc:	279ce658 	addiu	gp,gp,-6568
  42f4e0:	0399e021 	addu	gp,gp,t9
  42f4e4:	27bdffd8 	addiu	sp,sp,-40
  42f4e8:	afa40028 	sw	a0,40(sp)
  42f4ec:	8f84806c 	lw	a0,-32660(gp)
  42f4f0:	8f998468 	lw	t9,-31640(gp)
  42f4f4:	afbf001c 	sw	ra,28(sp)
  42f4f8:	afa5002c 	sw	a1,44(sp)
  42f4fc:	afa60030 	sw	a2,48(sp)
  42f500:	8c846ec4 	lw	a0,28356(a0)
  42f504:	afbc0018 	sw	gp,24(sp)
  42f508:	27a60020 	addiu	a2,sp,32
  42f50c:	0320f809 	jalr	t9
  42f510:	27a50024 	addiu	a1,sp,36
  42f514:	8fbc0018 	lw	gp,24(sp)
  42f518:	1040002a 	beqz	v0,42f5c4 <createMarkControls+0x34c>
  42f51c:	8fbf001c 	lw	ra,28(sp)
  42f520:	8fae0020 	lw	t6,32(sp)
  42f524:	00000000 	nop
  42f528:	19c0001f 	blez	t6,42f5a8 <createMarkControls+0x330>
  42f52c:	00000000 	nop
  42f530:	8f99854c 	lw	t9,-31412(gp)
  42f534:	00000000 	nop
  42f538:	0320f809 	jalr	t9
  42f53c:	00000000 	nop
  42f540:	8faf0024 	lw	t7,36(sp)
  42f544:	8fbc0018 	lw	gp,24(sp)
  42f548:	8df80000 	lw	t8,0(t7)
  42f54c:	8f89806c 	lw	t1,-32660(gp)
  42f550:	2719ffff 	addiu	t9,t8,-1
  42f554:	00194180 	sll	t0,t9,0x6
  42f558:	8f9987c8 	lw	t9,-30776(gp)
  42f55c:	8d299520 	lw	t1,-27360(t1)
  42f560:	0320f809 	jalr	t9
  42f564:	01092021 	addu	a0,t0,t1
  42f568:	8fbc0018 	lw	gp,24(sp)
  42f56c:	1440000e 	bnez	v0,42f5a8 <createMarkControls+0x330>
  42f570:	00000000 	nop
  42f574:	8fab0024 	lw	t3,36(sp)
  42f578:	8f8a806c 	lw	t2,-32660(gp)
  42f57c:	8d6c0000 	lw	t4,0(t3)
  42f580:	8d4a9520 	lw	t2,-27360(t2)
  42f584:	000c6980 	sll	t5,t4,0x6
  42f588:	8f84805c 	lw	a0,-32676(gp)
  42f58c:	8f998574 	lw	t9,-31372(gp)
  42f590:	014d7021 	addu	t6,t2,t5
  42f594:	8dc5fff8 	lw	a1,-8(t6)
  42f598:	0320f809 	jalr	t9
  42f59c:	24843c48 	addiu	a0,a0,15432
  42f5a0:	8fbc0018 	lw	gp,24(sp)
  42f5a4:	00000000 	nop
  42f5a8:	8f998174 	lw	t9,-32396(gp)
  42f5ac:	8fa40024 	lw	a0,36(sp)
  42f5b0:	0320f809 	jalr	t9
  42f5b4:	00000000 	nop
  42f5b8:	8fbc0018 	lw	gp,24(sp)
  42f5bc:	00000000 	nop
  42f5c0:	8fbf001c 	lw	ra,28(sp)
  42f5c4:	27bd0028 	addiu	sp,sp,40
  42f5c8:	03e00008 	jr	ra
  42f5cc:	00000000 	nop
