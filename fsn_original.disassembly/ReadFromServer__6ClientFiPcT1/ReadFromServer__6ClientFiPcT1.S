# Function: ReadFromServer__6ClientFiPcT1
# Address: 0x0043b52c - 0x0043b704
# Size: 0x1d8 (472 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043b52c <ReadFromServer__6ClientFiPcT1>:
  43b52c:	3c1c0fbe 	lui	gp,0xfbe
  43b530:	279c2604 	addiu	gp,gp,9732
  43b534:	0399e021 	addu	gp,gp,t9
  43b538:	27bdffc0 	addiu	sp,sp,-64
  43b53c:	afbf001c 	sw	ra,28(sp)
  43b540:	afbc0018 	sw	gp,24(sp)
  43b544:	afb00014 	sw	s0,20(sp)
  43b548:	afa60048 	sw	a2,72(sp)
  43b54c:	afa7004c 	sw	a3,76(sp)
  43b550:	8c900000 	lw	s0,0(a0)
  43b554:	240f0002 	li	t7,2
  43b558:	12000009 	beqz	s0,43b580 <ReadFromServer__6ClientFiPcT1+0x54>
  43b55c:	2402ffff 	li	v0,-1
  43b560:	8e0e0000 	lw	t6,0(s0)
  43b564:	00000000 	nop
  43b568:	10ae0005 	beq	a1,t6,43b580 <ReadFromServer__6ClientFiPcT1+0x54>
  43b56c:	00000000 	nop
  43b570:	8e100004 	lw	s0,4(s0)
  43b574:	00000000 	nop
  43b578:	1600fff9 	bnez	s0,43b560 <ReadFromServer__6ClientFiPcT1+0x34>
  43b57c:	00000000 	nop
  43b580:	16000004 	bnez	s0,43b594 <ReadFromServer__6ClientFiPcT1+0x68>
  43b584:	00000000 	nop
  43b588:	8f818090 	lw	at,-32624(gp)
  43b58c:	10000059 	b	43b6f4 <ReadFromServer__6ClientFiPcT1+0x1c8>
  43b590:	ac2f0000 	sw	t7,0(at)
  43b594:	8e18000c 	lw	t8,12(s0)
  43b598:	00000000 	nop
  43b59c:	17000007 	bnez	t8,43b5bc <ReadFromServer__6ClientFiPcT1+0x90>
  43b5a0:	00000000 	nop
  43b5a4:	8f998904 	lw	t9,-30460(gp)
  43b5a8:	02002825 	move	a1,s0
  43b5ac:	0320f809 	jalr	t9
  43b5b0:	00000000 	nop
  43b5b4:	8fbc0018 	lw	gp,24(sp)
  43b5b8:	00000000 	nop
  43b5bc:	8e060014 	lw	a2,20(s0)
  43b5c0:	8e190018 	lw	t9,24(s0)
  43b5c4:	00000000 	nop
  43b5c8:	03264023 	subu	t0,t9,a2
  43b5cc:	2d010004 	sltiu	at,t0,4
  43b5d0:	14200008 	bnez	at,43b5f4 <ReadFromServer__6ClientFiPcT1+0xc8>
  43b5d4:	00000000 	nop
  43b5d8:	8f99890c 	lw	t9,-30452(gp)
  43b5dc:	00c02025 	move	a0,a2
  43b5e0:	0320f809 	jalr	t9
  43b5e4:	27a5002c 	addiu	a1,sp,44
  43b5e8:	8fbc0018 	lw	gp,24(sp)
  43b5ec:	10000003 	b	43b5fc <ReadFromServer__6ClientFiPcT1+0xd0>
  43b5f0:	8e060014 	lw	a2,20(s0)
  43b5f4:	afa0002c 	sw	zero,44(sp)
  43b5f8:	8e060014 	lw	a2,20(s0)
  43b5fc:	8e090018 	lw	t1,24(s0)
  43b600:	8fab002c 	lw	t3,44(sp)
  43b604:	01265023 	subu	t2,t1,a2
  43b608:	256c0004 	addiu	t4,t3,4
  43b60c:	014c082b 	sltu	at,t2,t4
  43b610:	10200006 	beqz	at,43b62c <ReadFromServer__6ClientFiPcT1+0x100>
  43b614:	24d80004 	addiu	t8,a2,4
  43b618:	8f818090 	lw	at,-32624(gp)
  43b61c:	240d0043 	li	t5,67
  43b620:	2402ffff 	li	v0,-1
  43b624:	10000033 	b	43b6f4 <ReadFromServer__6ClientFiPcT1+0x1c8>
  43b628:	ac2d0000 	sw	t5,0(at)
  43b62c:	8fae002c 	lw	t6,44(sp)
  43b630:	8faf004c 	lw	t7,76(sp)
  43b634:	8fa3004c 	lw	v1,76(sp)
  43b638:	01cf082a 	slt	at,t6,t7
  43b63c:	10200003 	beqz	at,43b64c <ReadFromServer__6ClientFiPcT1+0x120>
  43b640:	00001025 	move	v0,zero
  43b644:	10000001 	b	43b64c <ReadFromServer__6ClientFiPcT1+0x120>
  43b648:	01c01825 	move	v1,t6
  43b64c:	00602025 	move	a0,v1
  43b650:	1860000b 	blez	v1,43b680 <ReadFromServer__6ClientFiPcT1+0x154>
  43b654:	ae180014 	sw	t8,20(s0)
  43b658:	8fa30048 	lw	v1,72(sp)
  43b65c:	00000000 	nop
  43b660:	8e190014 	lw	t9,20(s0)
  43b664:	24630001 	addiu	v1,v1,1
  43b668:	03224021 	addu	t0,t9,v0
  43b66c:	91090000 	lbu	t1,0(t0)
  43b670:	24420001 	addiu	v0,v0,1
  43b674:	0044082a 	slt	at,v0,a0
  43b678:	1420fff9 	bnez	at,43b660 <ReadFromServer__6ClientFiPcT1+0x134>
  43b67c:	a069ffff 	sb	t1,-1(v1)
  43b680:	8e0b0014 	lw	t3,20(s0)
  43b684:	8faa002c 	lw	t2,44(sp)
  43b688:	8e0d0018 	lw	t5,24(s0)
  43b68c:	016a6021 	addu	t4,t3,t2
  43b690:	01ac7823 	subu	t7,t5,t4
  43b694:	2de10004 	sltiu	at,t7,4
  43b698:	14200012 	bnez	at,43b6e4 <ReadFromServer__6ClientFiPcT1+0x1b8>
  43b69c:	ae0c0014 	sw	t4,20(s0)
  43b6a0:	8f99890c 	lw	t9,-30452(gp)
  43b6a4:	01802025 	move	a0,t4
  43b6a8:	0320f809 	jalr	t9
  43b6ac:	27a50030 	addiu	a1,sp,48
  43b6b0:	8e0e0018 	lw	t6,24(s0)
  43b6b4:	8e180014 	lw	t8,20(s0)
  43b6b8:	8fa80030 	lw	t0,48(sp)
  43b6bc:	01d8c823 	subu	t9,t6,t8
  43b6c0:	25090004 	addiu	t1,t0,4
  43b6c4:	8fbc0018 	lw	gp,24(sp)
  43b6c8:	0329082b 	sltu	at,t9,t1
  43b6cc:	14200003 	bnez	at,43b6dc <ReadFromServer__6ClientFiPcT1+0x1b0>
  43b6d0:	240b0001 	li	t3,1
  43b6d4:	10000004 	b	43b6e8 <ReadFromServer__6ClientFiPcT1+0x1bc>
  43b6d8:	ae0b000c 	sw	t3,12(s0)
  43b6dc:	10000002 	b	43b6e8 <ReadFromServer__6ClientFiPcT1+0x1bc>
  43b6e0:	ae00000c 	sw	zero,12(s0)
  43b6e4:	ae00000c 	sw	zero,12(s0)
  43b6e8:	ae000010 	sw	zero,16(s0)
  43b6ec:	8fa2002c 	lw	v0,44(sp)
  43b6f0:	00000000 	nop
  43b6f4:	8fbf001c 	lw	ra,28(sp)
  43b6f8:	8fb00014 	lw	s0,20(sp)
  43b6fc:	03e00008 	jr	ra
  43b700:	27bd0040 	addiu	sp,sp,64
