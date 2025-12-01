# Disassembly of FUN_00412604
# Address: 0x00412604
# End: 0x00412988
# Size: 0x384 (900 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
# See docs/DECOMPILATION_PROCEDURE.md for analysis workflow.
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00412604 <first_traversal+0xc>:
  412604:	27bdffa0 	addiu	sp,sp,-96
  412608:	afbf005c 	sw	ra,92(sp)
  41260c:	afbc0058 	sw	gp,88(sp)
  412610:	afb70054 	sw	s7,84(sp)
  412614:	afb60050 	sw	s6,80(sp)
  412618:	afb5004c 	sw	s5,76(sp)
  41261c:	afb40048 	sw	s4,72(sp)
  412620:	afb30044 	sw	s3,68(sp)
  412624:	afb20040 	sw	s2,64(sp)
  412628:	afb1003c 	sw	s1,60(sp)
  41262c:	afb00038 	sw	s0,56(sp)
  412630:	e7bb0030 	swc1	$f27,48(sp)
  412634:	e7ba0034 	swc1	$f26,52(sp)
  412638:	e7b90028 	swc1	$f25,40(sp)
  41263c:	e7b8002c 	swc1	$f24,44(sp)
  412640:	e7b70020 	swc1	$f23,32(sp)
  412644:	e7b60024 	swc1	$f22,36(sp)
  412648:	e7b50018 	swc1	$f21,24(sp)
  41264c:	e7b4001c 	swc1	$f20,28(sp)
  412650:	908f0074 	lbu	t7,116(a0)
  412654:	8c82000c 	lw	v0,12(a0)
  412658:	35f80010 	ori	t8,t7,0x10
  41265c:	00808825 	move	s1,a0
  412660:	0000b025 	move	s6,zero
  412664:	10400012 	beqz	v0,4126b0 <first_traversal+0xb8>
  412668:	a0980074 	sb	t8,116(a0)
  41266c:	2459ffff 	addiu	t9,v0,-1
  412670:	44992000 	mtc1	t9,$f4
  412674:	8f998108 	lw	t9,-32504(gp)
  412678:	46802321 	cvt.d.w	$f12,$f4
  41267c:	0320f809 	jalr	t9
  412680:	00000000 	nop
  412684:	4448f800 	cfc1	t0,c1_fcsr
  412688:	8fbc0058 	lw	gp,88(sp)
  41268c:	35010003 	ori	at,t0,0x3
  412690:	38210002 	xori	at,at,0x2
  412694:	44c1f800 	ctc1	at,c1_fcsr
  412698:	00000000 	nop
  41269c:	462001a4 	cvt.w.d	$f6,$f0
  4126a0:	44173000 	mfc1	s7,$f6
  4126a4:	44c8f800 	ctc1	t0,c1_fcsr
  4126a8:	10000002 	b	4126b4 <first_traversal+0xbc>
  4126ac:	26f70001 	addiu	s7,s7,1
  4126b0:	0000b825 	move	s7,zero
  4126b4:	12e00012 	beqz	s7,412700 <first_traversal+0x108>
  4126b8:	3c014000 	lui	at,0x4000  # 2.0f
  4126bc:	8f948a24 	lw	s4,-30172(gp)  # fsn_resources
  4126c0:	3c014000 	lui	at,0x4000  # 2.0f
  4126c4:	c6900074 	lwc1	$f16,116(s4)
  4126c8:	4481b800 	mtc1	at,$f23  # $f23 = 2.0f
  4126cc:	4480b000 	mtc1	zero,$f22
  4126d0:	c6880070 	lwc1	$f8,112(s4)
  4126d4:	460084a1 	cvt.d.s	$f18,$f16
  4126d8:	4632b102 	mul.d	$f4,$f22,$f18
  4126dc:	460042a1 	cvt.d.s	$f10,$f8
  4126e0:	44974000 	mtc1	s7,$f8
  4126e4:	00000000 	nop
  4126e8:	46804421 	cvt.d.w	$f16,$f8
  4126ec:	46245180 	add.d	$f6,$f10,$f4
  4126f0:	46268482 	mul.d	$f18,$f16,$f6
  4126f4:	462092a0 	cvt.s.d	$f10,$f18
  4126f8:	1000000d 	b	412730 <first_traversal+0x138>
  4126fc:	e62a003c 	swc1	$f10,60(s1)
  412700:	8f948a24 	lw	s4,-30172(gp)  # fsn_resources
  412704:	4481b800 	mtc1	at,$f23  # $f23 = 2.0f
  412708:	c6900074 	lwc1	$f16,116(s4)
  41270c:	4480b000 	mtc1	zero,$f22
  412710:	460081a1 	cvt.d.s	$f6,$f16
  412714:	4626b482 	mul.d	$f18,$f22,$f6
  412718:	c6840070 	lwc1	$f4,112(s4)
  41271c:	00000000 	nop
  412720:	46002221 	cvt.d.s	$f8,$f4
  412724:	46324280 	add.d	$f10,$f8,$f18
  412728:	46205120 	cvt.s.d	$f4,$f10
  41272c:	e624003c 	swc1	$f4,60(s1)
  412730:	c6880074 	lwc1	$f8,116(s4)
  412734:	c6900070 	lwc1	$f16,112(s4)
  412738:	460044a1 	cvt.d.s	$f18,$f8
  41273c:	4632b282 	mul.d	$f10,$f22,$f18
  412740:	24090001 	li	t1,1
  412744:	01375023 	subu	t2,t1,s7
  412748:	460081a1 	cvt.d.s	$f6,$f16
  41274c:	448a8000 	mtc1	t2,$f16
  412750:	462a3100 	add.d	$f4,$f6,$f10
  412754:	3c013fe0 	lui	at,0x3fe0
  412758:	46808221 	cvt.d.w	$f8,$f16
  41275c:	44813800 	mtc1	at,$f7  # $f7 = 1.75f
  412760:	44803000 	mtc1	zero,$f6
  412764:	46244482 	mul.d	$f18,$f8,$f4
  412768:	44808000 	mtc1	zero,$f16
  41276c:	8e2b000c 	lw	t3,12(s1)
  412770:	00009025 	move	s2,zero
  412774:	ae20001c 	sw	zero,28(s1)
  412778:	46269282 	mul.d	$f10,$f18,$f6
  41277c:	0000a825 	move	s5,zero
  412780:	00009825 	move	s3,zero
  412784:	e6300054 	swc1	$f16,84(s1)
  412788:	462056a0 	cvt.s.d	$f26,$f10
  41278c:	4600d506 	mov.s	$f20,$f26
  412790:	19600039 	blez	t3,412878 <first_traversal+0x280>
  412794:	4600d606 	mov.s	$f24,$f26
  412798:	8e2c0010 	lw	t4,16(s1)
  41279c:	26520001 	addiu	s2,s2,1
  4127a0:	01936821 	addu	t5,t4,s3
  4127a4:	8db00000 	lw	s0,0(t5)
  4127a8:	0257082a 	slt	at,s2,s7
  4127ac:	920f0028 	lbu	t7,40(s0)
  4127b0:	8e08000c 	lw	t0,12(s0)
  4127b4:	35f80004 	ori	t8,t7,0x4
  4127b8:	a2180028 	sb	t8,40(s0)
  4127bc:	8e39001c 	lw	t9,28(s1)
  4127c0:	00000000 	nop
  4127c4:	03284821 	addu	t1,t9,t0
  4127c8:	ae29001c 	sw	t1,28(s1)
  4127cc:	e6140014 	swc1	$f20,20(s0)
  4127d0:	1420000d 	bnez	at,412808 <first_traversal+0x210>
  4127d4:	e6180018 	swc1	$f24,24(s0)
  4127d8:	c6920074 	lwc1	$f18,116(s4)
  4127dc:	c6880070 	lwc1	$f8,112(s4)
  4127e0:	460091a1 	cvt.d.s	$f6,$f18
  4127e4:	4626b282 	mul.d	$f10,$f22,$f6
  4127e8:	46004121 	cvt.d.s	$f4,$f8
  4127ec:	4600c221 	cvt.d.s	$f8,$f24
  4127f0:	4600d506 	mov.s	$f20,$f26
  4127f4:	00009025 	move	s2,zero
  4127f8:	462a2400 	add.d	$f16,$f4,$f10
  4127fc:	46304480 	add.d	$f18,$f8,$f16
  412800:	1000000a 	b	41282c <first_traversal+0x234>
  412804:	46209620 	cvt.s.d	$f24,$f18
  412808:	c68a0074 	lwc1	$f10,116(s4)
  41280c:	c6860070 	lwc1	$f6,112(s4)
  412810:	46005221 	cvt.d.s	$f8,$f10
  412814:	4628b402 	mul.d	$f16,$f22,$f8
  412818:	46003121 	cvt.d.s	$f4,$f6
  41281c:	4600a1a1 	cvt.d.s	$f6,$f20
  412820:	46302480 	add.d	$f18,$f4,$f16
  412824:	46323280 	add.d	$f10,$f6,$f18
  412828:	46205520 	cvt.s.d	$f20,$f10
  41282c:	8f99858c 	lw	t9,-31348(gp)  # FUN_00412400
  412830:	02002025 	move	a0,s0
  412834:	0320f809 	jalr	t9  # call FUN_00412400
  412838:	00000000 	nop
  41283c:	c600001c 	lwc1	$f0,28(s0)
  412840:	c6280054 	lwc1	$f8,84(s1)
  412844:	46000421 	cvt.d.s	$f16,$f0
  412848:	46004121 	cvt.d.s	$f4,$f8
  41284c:	4630203c 	c.lt.d	$f4,$f16
  412850:	8fbc0058 	lw	gp,88(sp)
  412854:	45000002 	bc1f	412860 <first_traversal+0x268>
  412858:	00000000 	nop
  41285c:	e6200054 	swc1	$f0,84(s1)
  412860:	8e2a000c 	lw	t2,12(s1)
  412864:	26b50001 	addiu	s5,s5,1
  412868:	02aa082a 	slt	at,s5,t2
  41286c:	1420ffca 	bnez	at,412798 <first_traversal+0x1a0>
  412870:	26730004 	addiu	s3,s3,4
  412874:	0000a825 	move	s5,zero
  412878:	8f998018 	lw	t9,-32744(gp)  # FUN_00410000
  41287c:	8e2b001c 	lw	t3,28(s1)
  412880:	27392234 	addiu	t9,t9,8756
  412884:	02202025 	move	a0,s1
  412888:	0320f809 	jalr	t9  # call FUN_00410000
  41288c:	ae2b0020 	sw	t3,32(s1)
  412890:	8fbc0058 	lw	gp,88(sp)
  412894:	8e22001c 	lw	v0,28(s1)
  412898:	8f838068 	lw	v1,-32664(gp)  # small
  41289c:	44803000 	mtc1	zero,$f6
  4128a0:	2463018c 	addiu	v1,v1,396
  4128a4:	8c6c0000 	lw	t4,0(v1)
  4128a8:	00009825 	move	s3,zero
  4128ac:	0182082a 	slt	at,t4,v0
  4128b0:	10200002 	beqz	at,4128bc <first_traversal+0x2c4>
  4128b4:	00000000 	nop
  4128b8:	ac620000 	sw	v0,0(v1)
  4128bc:	8e2d0014 	lw	t5,20(s1)
  4128c0:	e6260048 	swc1	$f6,72(s1)
  4128c4:	19a0001e 	blez	t5,412940 <first_traversal+0x348>
  4128c8:	8fbf005c 	lw	ra,92(sp)
  4128cc:	8e2e0018 	lw	t6,24(s1)
  4128d0:	8f998590 	lw	t9,-31344(gp)  # FUN_00412604
  4128d4:	01d37821 	addu	t7,t6,s3
  4128d8:	8df00000 	lw	s0,0(t7)
  4128dc:	0320f809 	jalr	t9  # call FUN_00412604
  4128e0:	02002025 	move	a0,s0
  4128e4:	c600003c 	lwc1	$f0,60(s0)
  4128e8:	c6320048 	lwc1	$f18,72(s1)
  4128ec:	46000221 	cvt.d.s	$f8,$f0
  4128f0:	460092a1 	cvt.d.s	$f10,$f18
  4128f4:	4628503c 	c.lt.d	$f10,$f8
  4128f8:	8fbc0058 	lw	gp,88(sp)
  4128fc:	45000002 	bc1f	412908 <first_traversal+0x310>
  412900:	26b50001 	addiu	s5,s5,1
  412904:	e6200048 	swc1	$f0,72(s1)
  412908:	ae16002c 	sw	s6,44(s0)
  41290c:	12c00002 	beqz	s6,412918 <first_traversal+0x320>
  412910:	ae000030 	sw	zero,48(s0)
  412914:	aed00030 	sw	s0,48(s6)
  412918:	8e290014 	lw	t1,20(s1)
  41291c:	8e380020 	lw	t8,32(s1)
  412920:	8e190020 	lw	t9,32(s0)
  412924:	02a9082a 	slt	at,s5,t1
  412928:	03194021 	addu	t0,t8,t9
  41292c:	26730004 	addiu	s3,s3,4
  412930:	0200b025 	move	s6,s0
  412934:	1420ffe5 	bnez	at,4128cc <first_traversal+0x2d4>
  412938:	ae280020 	sw	t0,32(s1)
  41293c:	8fbf005c 	lw	ra,92(sp)
  412940:	c7b50018 	lwc1	$f21,24(sp)
  412944:	c7b4001c 	lwc1	$f20,28(sp)
  412948:	c7b70020 	lwc1	$f23,32(sp)
  41294c:	c7b60024 	lwc1	$f22,36(sp)
  412950:	c7b90028 	lwc1	$f25,40(sp)
  412954:	c7b8002c 	lwc1	$f24,44(sp)
  412958:	c7bb0030 	lwc1	$f27,48(sp)
  41295c:	c7ba0034 	lwc1	$f26,52(sp)
  412960:	8fb00038 	lw	s0,56(sp)
  412964:	8fb1003c 	lw	s1,60(sp)
  412968:	8fb20040 	lw	s2,64(sp)
  41296c:	8fb30044 	lw	s3,68(sp)
  412970:	8fb40048 	lw	s4,72(sp)
  412974:	8fb5004c 	lw	s5,76(sp)
  412978:	8fb60050 	lw	s6,80(sp)
  41297c:	8fb70054 	lw	s7,84(sp)
  412980:	03e00008 	jr	ra
  412984:	27bd0060 	addiu	sp,sp,96


======================================================================
ANALYSIS SUMMARY: FUN_00412604
======================================================================

FUNCTION CALLS:
----------------------------------------
  FUN_00410000
  FUN_00412400
  FUN_00412604

FLOAT CONSTANTS LOADED:
----------------------------------------
  0x40000000 = 2.0f
  0x3fe00000 = 1.75f

GP SYMBOL REFERENCES:
----------------------------------------
  FUN_00410000
  FUN_00412400
  FUN_00412604
  fsn_resources
  small

======================================================================