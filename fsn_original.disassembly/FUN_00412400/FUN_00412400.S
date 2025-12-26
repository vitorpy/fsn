# Function: FUN_00412400
# Address: 0x00412400 - 0x004125f8
# Size: 0x1f8 (504 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00412400 <calculate_file_view+0xc>:
  412400:	8f998018 	lw	t9,-32744(gp)
  412404:	27bdffe0 	addiu	sp,sp,-32
  412408:	afbf001c 	sw	ra,28(sp)
  41240c:	afb00014 	sw	s0,20(sp)
  412410:	27391804 	addiu	t9,t9,6148
  412414:	00808025 	move	s0,a0
  412418:	0320f809 	jalr	t9
  41241c:	afbc0018 	sw	gp,24(sp)
  412420:	8fbc0018 	lw	gp,24(sp)
  412424:	e600001c 	swc1	$f0,28(s0)
  412428:	8f838a24 	lw	v1,-30172(gp)
  41242c:	46000121 	cvt.d.s	$f4,$f0
  412430:	c46600f8 	lwc1	$f6,248(v1)
  412434:	00007025 	move	t6,zero
  412438:	46003221 	cvt.d.s	$f8,$f6
  41243c:	4628203c 	c.lt.d	$f4,$f8
  412440:	3c010001 	lui	at,0x1
  412444:	45000002 	bc1f	412450 <calculate_file_view+0x5c>
  412448:	00000000 	nop
  41244c:	240e0001 	li	t6,1
  412450:	92080029 	lbu	t0,41(s0)
  412454:	01c07825 	move	t7,t6
  412458:	000fc080 	sll	t8,t7,0x2
  41245c:	33190004 	andi	t9,t8,0x4
  412460:	3109fffb 	andi	t1,t0,0xfffb
  412464:	8f8b806c 	lw	t3,-32660(gp)
  412468:	03295025 	or	t2,t9,t1
  41246c:	a20a0029 	sb	t2,41(s0)
  412470:	8e0c0010 	lw	t4,16(s0)
  412474:	8d6b66ac 	lw	t3,26284(t3)
  412478:	34215180 	ori	at,at,0x5180
  41247c:	016c1023 	subu	v0,t3,t4
  412480:	0041001a 	div	zero,v0,at
  412484:	8c6e01a8 	lw	t6,424(v1)
  412488:	00001012 	mflo	v0
  41248c:	004e082a 	slt	at,v0,t6
  412490:	10200006 	beqz	at,4124ac <calculate_file_view+0xb8>
  412494:	00000000 	nop
  412498:	920f0028 	lbu	t7,40(s0)
  41249c:	00000000 	nop
  4124a0:	31f8ff1f 	andi	t8,t7,0xff1f
  4124a4:	1000003d 	b	41259c <calculate_file_view+0x1a8>
  4124a8:	a2180028 	sb	t8,40(s0)
  4124ac:	8c6801ac 	lw	t0,428(v1)
  4124b0:	00000000 	nop
  4124b4:	0048082a 	slt	at,v0,t0
  4124b8:	10200007 	beqz	at,4124d8 <calculate_file_view+0xe4>
  4124bc:	00000000 	nop
  4124c0:	92190028 	lbu	t9,40(s0)
  4124c4:	00000000 	nop
  4124c8:	3329ff1f 	andi	t1,t9,0xff1f
  4124cc:	352a0020 	ori	t2,t1,0x20
  4124d0:	10000032 	b	41259c <calculate_file_view+0x1a8>
  4124d4:	a20a0028 	sb	t2,40(s0)
  4124d8:	8c6b01b0 	lw	t3,432(v1)
  4124dc:	00000000 	nop
  4124e0:	004b082a 	slt	at,v0,t3
  4124e4:	10200007 	beqz	at,412504 <calculate_file_view+0x110>
  4124e8:	00000000 	nop
  4124ec:	920c0028 	lbu	t4,40(s0)
  4124f0:	00000000 	nop
  4124f4:	318dff1f 	andi	t5,t4,0xff1f
  4124f8:	35ae0040 	ori	t6,t5,0x40
  4124fc:	10000027 	b	41259c <calculate_file_view+0x1a8>
  412500:	a20e0028 	sb	t6,40(s0)
  412504:	8c6f01b4 	lw	t7,436(v1)
  412508:	00000000 	nop
  41250c:	004f082a 	slt	at,v0,t7
  412510:	10200007 	beqz	at,412530 <calculate_file_view+0x13c>
  412514:	00000000 	nop
  412518:	92180028 	lbu	t8,40(s0)
  41251c:	00000000 	nop
  412520:	3308ff1f 	andi	t0,t8,0xff1f
  412524:	35190060 	ori	t9,t0,0x60
  412528:	1000001c 	b	41259c <calculate_file_view+0x1a8>
  41252c:	a2190028 	sb	t9,40(s0)
  412530:	8c6901b8 	lw	t1,440(v1)
  412534:	00000000 	nop
  412538:	0049082a 	slt	at,v0,t1
  41253c:	10200007 	beqz	at,41255c <calculate_file_view+0x168>
  412540:	00000000 	nop
  412544:	920a0028 	lbu	t2,40(s0)
  412548:	00000000 	nop
  41254c:	314bff1f 	andi	t3,t2,0xff1f
  412550:	356c0080 	ori	t4,t3,0x80
  412554:	10000011 	b	41259c <calculate_file_view+0x1a8>
  412558:	a20c0028 	sb	t4,40(s0)
  41255c:	8c6d01bc 	lw	t5,444(v1)
  412560:	00000000 	nop
  412564:	004d082a 	slt	at,v0,t5
  412568:	10200007 	beqz	at,412588 <calculate_file_view+0x194>
  41256c:	00000000 	nop
  412570:	920e0028 	lbu	t6,40(s0)
  412574:	00000000 	nop
  412578:	31cfff1f 	andi	t7,t6,0xff1f
  41257c:	35f800a0 	ori	t8,t7,0xa0
  412580:	10000006 	b	41259c <calculate_file_view+0x1a8>
  412584:	a2180028 	sb	t8,40(s0)
  412588:	92080028 	lbu	t0,40(s0)
  41258c:	00000000 	nop
  412590:	3119ff1f 	andi	t9,t0,0xff1f
  412594:	372900c0 	ori	t1,t9,0xc0
  412598:	a2090028 	sb	t1,40(s0)
  41259c:	8e040020 	lw	a0,32(s0)
  4125a0:	3c03ff00 	lui	v1,0xff00
  4125a4:	10800011 	beqz	a0,4125ec <calculate_file_view+0x1f8>
  4125a8:	8fbf001c 	lw	ra,28(sp)
  4125ac:	8e0a0028 	lw	t2,40(s0)
  4125b0:	8f8d8978 	lw	t5,-30344(gp)
  4125b4:	000a5f42 	srl	t3,t2,0x1d
  4125b8:	000b6080 	sll	t4,t3,0x2
  4125bc:	018d7021 	addu	t6,t4,t5
  4125c0:	8dc20000 	lw	v0,0(t6)
  4125c4:	8f998830 	lw	t9,-30672(gp)
  4125c8:	8c4f0020 	lw	t7,32(v0)
  4125cc:	8c580014 	lw	t8,20(v0)
  4125d0:	01e32825 	or	a1,t7,v1
  4125d4:	00a03825 	move	a3,a1
  4125d8:	0320f809 	jalr	t9
  4125dc:	03033025 	or	a2,t8,v1
  4125e0:	8fbc0018 	lw	gp,24(sp)
  4125e4:	00000000 	nop
  4125e8:	8fbf001c 	lw	ra,28(sp)
  4125ec:	8fb00014 	lw	s0,20(sp)
  4125f0:	03e00008 	jr	ra
  4125f4:	27bd0020 	addiu	sp,sp,32
