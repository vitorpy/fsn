# Function: makeDColorBox
# Address: 0x004286ec - 0x00428b60
# Size: 0x474 (1140 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004286ec <makeDColorBox>:
  4286ec:	3c1c0fbf 	lui	gp,0xfbf
  4286f0:	279c5444 	addiu	gp,gp,21572
  4286f4:	0399e021 	addu	gp,gp,t9
  4286f8:	27bdffa0 	addiu	sp,sp,-96
  4286fc:	0004cc03 	sra	t9,a0,0x10
  428700:	00047a03 	sra	t7,a0,0x8
  428704:	332800ff 	andi	t0,t9,0xff
  428708:	44884000 	mtc1	t0,$f8
  42870c:	308e00ff 	andi	t6,a0,0xff
  428710:	31f800ff 	andi	t8,t7,0xff
  428714:	448e2000 	mtc1	t6,$f4
  428718:	44983000 	mtc1	t8,$f6
  42871c:	46804420 	cvt.s.w	$f16,$f8
  428720:	8f9988d0 	lw	t9,-30512(gp)
  428724:	afbf003c 	sw	ra,60(sp)
  428728:	46802020 	cvt.s.w	$f0,$f4
  42872c:	afb10034 	sw	s1,52(sp)
  428730:	27a90050 	addiu	t1,sp,80
  428734:	468030a0 	cvt.s.w	$f2,$f6
  428738:	27aa004c 	addiu	t2,sp,76
  42873c:	27ab0048 	addiu	t3,sp,72
  428740:	460082a1 	cvt.d.s	$f10,$f16
  428744:	00a08825 	move	s1,a1
  428748:	afbc0038 	sw	gp,56(sp)
  42874c:	afb00030 	sw	s0,48(sp)
  428750:	afa60068 	sw	a2,104(sp)
  428754:	e7aa0014 	swc1	$f10,20(sp)
  428758:	e7ab0010 	swc1	$f11,16(sp)
  42875c:	afab0020 	sw	t3,32(sp)
  428760:	afaa001c 	sw	t2,28(sp)
  428764:	460013a1 	cvt.d.s	$f14,$f2
  428768:	e7a20058 	swc1	$f2,88(sp)
  42876c:	afa90018 	sw	t1,24(sp)
  428770:	46000321 	cvt.d.s	$f12,$f0
  428774:	e7a0005c 	swc1	$f0,92(sp)
  428778:	0320f809 	jalr	t9
  42877c:	e7b00054 	swc1	$f16,84(sp)
  428780:	8fbc0038 	lw	gp,56(sp)
  428784:	c7b2004c 	lwc1	$f18,76(sp)
  428788:	8f908a24 	lw	s0,-30172(gp)
  42878c:	46009121 	cvt.d.s	$f4,$f18
  428790:	c6060138 	lwc1	$f6,312(s0)
  428794:	c7b20048 	lwc1	$f18,72(sp)
  428798:	46003221 	cvt.d.s	$f8,$f6
  42879c:	46282282 	mul.d	$f10,$f4,$f8
  4287a0:	c604013c 	lwc1	$f4,316(s0)
  4287a4:	460091a1 	cvt.d.s	$f6,$f18
  4287a8:	46002221 	cvt.d.s	$f8,$f4
  4287ac:	c7b20050 	lwc1	$f18,80(sp)
  4287b0:	46205020 	cvt.s.d	$f0,$f10
  4287b4:	8f9988bc 	lw	t9,-30532(gp)
  4287b8:	46283282 	mul.d	$f10,$f6,$f8
  4287bc:	27ac005c 	addiu	t4,sp,92
  4287c0:	27ad0058 	addiu	t5,sp,88
  4287c4:	27ae0054 	addiu	t6,sp,84
  4287c8:	afae0020 	sw	t6,32(sp)
  4287cc:	462050a0 	cvt.s.d	$f2,$f10
  4287d0:	afad001c 	sw	t5,28(sp)
  4287d4:	46001121 	cvt.d.s	$f4,$f2
  4287d8:	e7a40014 	swc1	$f4,20(sp)
  4287dc:	e7a50010 	swc1	$f5,16(sp)
  4287e0:	afac0018 	sw	t4,24(sp)
  4287e4:	460003a1 	cvt.d.s	$f14,$f0
  4287e8:	0320f809 	jalr	t9
  4287ec:	46009321 	cvt.d.s	$f12,$f18
  4287f0:	444ff800 	cfc1	t7,c1_fcsr
  4287f4:	c7a0005c 	lwc1	$f0,92(sp)
  4287f8:	35e10003 	ori	at,t7,0x3
  4287fc:	38210002 	xori	at,at,0x2
  428800:	44c1f800 	ctc1	at,c1_fcsr
  428804:	c7a20058 	lwc1	$f2,88(sp)
  428808:	460001a4 	cvt.w.s	$f6,$f0
  42880c:	c7b00054 	lwc1	$f16,84(sp)
  428810:	44cff800 	ctc1	t7,c1_fcsr
  428814:	8fbc0038 	lw	gp,56(sp)
  428818:	44183000 	mfc1	t8,$f6
  42881c:	4459f800 	cfc1	t9,c1_fcsr
  428820:	26250010 	addiu	a1,s1,16
  428824:	37210003 	ori	at,t9,0x3
  428828:	38210002 	xori	at,at,0x2
  42882c:	44c1f800 	ctc1	at,c1_fcsr
  428830:	00000000 	nop
  428834:	46001224 	cvt.w.s	$f8,$f2
  428838:	44d9f800 	ctc1	t9,c1_fcsr
  42883c:	44084000 	mfc1	t0,$f8
  428840:	8f998724 	lw	t9,-30940(gp)
  428844:	444bf800 	cfc1	t3,c1_fcsr
  428848:	00084a00 	sll	t1,t0,0x8
  42884c:	35610003 	ori	at,t3,0x3
  428850:	38210002 	xori	at,at,0x2
  428854:	44c1f800 	ctc1	at,c1_fcsr
  428858:	03095021 	addu	t2,t8,t1
  42885c:	460082a4 	cvt.w.s	$f10,$f16
  428860:	440c5000 	mfc1	t4,$f10
  428864:	44cbf800 	ctc1	t3,c1_fcsr
  428868:	000c6c00 	sll	t5,t4,0x10
  42886c:	0320f809 	jalr	t9
  428870:	014d2021 	addu	a0,t2,t5
  428874:	c7b2004c 	lwc1	$f18,76(sp)
  428878:	c6060130 	lwc1	$f6,304(s0)
  42887c:	46009121 	cvt.d.s	$f4,$f18
  428880:	46003221 	cvt.d.s	$f8,$f6
  428884:	46282282 	mul.d	$f10,$f4,$f8
  428888:	c6040134 	lwc1	$f4,308(s0)
  42888c:	c7b20048 	lwc1	$f18,72(sp)
  428890:	46002221 	cvt.d.s	$f8,$f4
  428894:	8fbc0038 	lw	gp,56(sp)
  428898:	46205020 	cvt.s.d	$f0,$f10
  42889c:	27b90054 	addiu	t9,sp,84
  4288a0:	460091a1 	cvt.d.s	$f6,$f18
  4288a4:	46283282 	mul.d	$f10,$f6,$f8
  4288a8:	afb90020 	sw	t9,32(sp)
  4288ac:	c7b20050 	lwc1	$f18,80(sp)
  4288b0:	8f9988bc 	lw	t9,-30532(gp)
  4288b4:	27ae005c 	addiu	t6,sp,92
  4288b8:	462050a0 	cvt.s.d	$f2,$f10
  4288bc:	27af0058 	addiu	t7,sp,88
  4288c0:	46001121 	cvt.d.s	$f4,$f2
  4288c4:	e7a40014 	swc1	$f4,20(sp)
  4288c8:	e7a50010 	swc1	$f5,16(sp)
  4288cc:	afaf001c 	sw	t7,28(sp)
  4288d0:	afae0018 	sw	t6,24(sp)
  4288d4:	460003a1 	cvt.d.s	$f14,$f0
  4288d8:	0320f809 	jalr	t9
  4288dc:	46009321 	cvt.d.s	$f12,$f18
  4288e0:	4448f800 	cfc1	t0,c1_fcsr
  4288e4:	c7a0005c 	lwc1	$f0,92(sp)
  4288e8:	35010003 	ori	at,t0,0x3
  4288ec:	38210002 	xori	at,at,0x2
  4288f0:	44c1f800 	ctc1	at,c1_fcsr
  4288f4:	c7a20058 	lwc1	$f2,88(sp)
  4288f8:	460001a4 	cvt.w.s	$f6,$f0
  4288fc:	c7b00054 	lwc1	$f16,84(sp)
  428900:	44c8f800 	ctc1	t0,c1_fcsr
  428904:	8fbc0038 	lw	gp,56(sp)
  428908:	44183000 	mfc1	t8,$f6
  42890c:	4449f800 	cfc1	t1,c1_fcsr
  428910:	8f998724 	lw	t9,-30940(gp)
  428914:	35210003 	ori	at,t1,0x3
  428918:	38210002 	xori	at,at,0x2
  42891c:	44c1f800 	ctc1	at,c1_fcsr
  428920:	02202825 	move	a1,s1
  428924:	46001224 	cvt.w.s	$f8,$f2
  428928:	44c9f800 	ctc1	t1,c1_fcsr
  42892c:	440b4000 	mfc1	t3,$f8
  428930:	00000000 	nop
  428934:	444df800 	cfc1	t5,c1_fcsr
  428938:	000b6200 	sll	t4,t3,0x8
  42893c:	35a10003 	ori	at,t5,0x3
  428940:	38210002 	xori	at,at,0x2
  428944:	44c1f800 	ctc1	at,c1_fcsr
  428948:	030c5021 	addu	t2,t8,t4
  42894c:	460082a4 	cvt.w.s	$f10,$f16
  428950:	440e5000 	mfc1	t6,$f10
  428954:	44cdf800 	ctc1	t5,c1_fcsr
  428958:	000e7c00 	sll	t7,t6,0x10
  42895c:	0320f809 	jalr	t9
  428960:	014f2021 	addu	a0,t2,t7
  428964:	c7b2004c 	lwc1	$f18,76(sp)
  428968:	c6060140 	lwc1	$f6,320(s0)
  42896c:	46009121 	cvt.d.s	$f4,$f18
  428970:	46003221 	cvt.d.s	$f8,$f6
  428974:	46282282 	mul.d	$f10,$f4,$f8
  428978:	c6040144 	lwc1	$f4,324(s0)
  42897c:	c7b20048 	lwc1	$f18,72(sp)
  428980:	46002221 	cvt.d.s	$f8,$f4
  428984:	8fbc0038 	lw	gp,56(sp)
  428988:	46205020 	cvt.s.d	$f0,$f10
  42898c:	27b9005c 	addiu	t9,sp,92
  428990:	460091a1 	cvt.d.s	$f6,$f18
  428994:	46283282 	mul.d	$f10,$f6,$f8
  428998:	afb90018 	sw	t9,24(sp)
  42899c:	c7b20050 	lwc1	$f18,80(sp)
  4289a0:	8f9988bc 	lw	t9,-30532(gp)
  4289a4:	27a80058 	addiu	t0,sp,88
  4289a8:	462050a0 	cvt.s.d	$f2,$f10
  4289ac:	27a90054 	addiu	t1,sp,84
  4289b0:	46001121 	cvt.d.s	$f4,$f2
  4289b4:	e7a40014 	swc1	$f4,20(sp)
  4289b8:	e7a50010 	swc1	$f5,16(sp)
  4289bc:	afa90020 	sw	t1,32(sp)
  4289c0:	afa8001c 	sw	t0,28(sp)
  4289c4:	460003a1 	cvt.d.s	$f14,$f0
  4289c8:	0320f809 	jalr	t9
  4289cc:	46009321 	cvt.d.s	$f12,$f18
  4289d0:	444bf800 	cfc1	t3,c1_fcsr
  4289d4:	c7a6005c 	lwc1	$f6,92(sp)
  4289d8:	35610003 	ori	at,t3,0x3
  4289dc:	38210002 	xori	at,at,0x2
  4289e0:	44c1f800 	ctc1	at,c1_fcsr
  4289e4:	c7aa0058 	lwc1	$f10,88(sp)
  4289e8:	46003224 	cvt.w.s	$f8,$f6
  4289ec:	c7a40054 	lwc1	$f4,84(sp)
  4289f0:	44cbf800 	ctc1	t3,c1_fcsr
  4289f4:	44184000 	mfc1	t8,$f8
  4289f8:	8fbc0038 	lw	gp,56(sp)
  4289fc:	444cf800 	cfc1	t4,c1_fcsr
  428a00:	8f8b8974 	lw	t3,-30348(gp)
  428a04:	35810003 	ori	at,t4,0x3
  428a08:	38210002 	xori	at,at,0x2
  428a0c:	44c1f800 	ctc1	at,c1_fcsr
  428a10:	8e230000 	lw	v1,0(s1)
  428a14:	460054a4 	cvt.w.s	$f18,$f10
  428a18:	24040003 	li	a0,3
  428a1c:	44ccf800 	ctc1	t4,c1_fcsr
  428a20:	440d9000 	mfc1	t5,$f18
  428a24:	00000000 	nop
  428a28:	444ff800 	cfc1	t7,c1_fcsr
  428a2c:	000d7200 	sll	t6,t5,0x8
  428a30:	35e10003 	ori	at,t7,0x3
  428a34:	38210002 	xori	at,at,0x2
  428a38:	44c1f800 	ctc1	at,c1_fcsr
  428a3c:	030e5021 	addu	t2,t8,t6
  428a40:	460021a4 	cvt.w.s	$f6,$f4
  428a44:	306d00ff 	andi	t5,v1,0xff
  428a48:	44193000 	mfc1	t9,$f6
  428a4c:	000dc040 	sll	t8,t5,0x1
  428a50:	00194400 	sll	t0,t9,0x10
  428a54:	01484821 	addu	t1,t2,t0
  428a58:	ae290020 	sw	t1,32(s1)
  428a5c:	8d6b0000 	lw	t3,0(t3)
  428a60:	00034203 	sra	t0,v1,0x8
  428a64:	8d620000 	lw	v0,0(t3)
  428a68:	44cff800 	ctc1	t7,c1_fcsr
  428a6c:	304c00ff 	andi	t4,v0,0xff
  428a70:	01987021 	addu	t6,t4,t8
  428a74:	01c4001a 	div	zero,t6,a0
  428a78:	310900ff 	andi	t1,t0,0xff
  428a7c:	0002ca03 	sra	t9,v0,0x8
  428a80:	332a00ff 	andi	t2,t9,0xff
  428a84:	00095840 	sll	t3,t1,0x1
  428a88:	014b6821 	addu	t5,t2,t3
  428a8c:	14800002 	bnez	a0,428a98 <makeDColorBox+0x3ac>
  428a90:	00000000 	nop
  428a94:	0007000d 	break	0x7
  428a98:	2401ffff 	li	at,-1
  428a9c:	14810004 	bne	a0,at,428ab0 <makeDColorBox+0x3c4>
  428aa0:	3c018000 	lui	at,0x8000
  428aa4:	15c10002 	bne	t6,at,428ab0 <makeDColorBox+0x3c4>
  428aa8:	00000000 	nop
  428aac:	0006000d 	break	0x6
  428ab0:	00034c03 	sra	t1,v1,0x10
  428ab4:	312a00ff 	andi	t2,t1,0xff
  428ab8:	0002cc03 	sra	t9,v0,0x10
  428abc:	332800ff 	andi	t0,t9,0xff
  428ac0:	000a5840 	sll	t3,t2,0x1
  428ac4:	00007812 	mflo	t7
	...
  428ad0:	01a4001a 	div	zero,t5,a0
  428ad4:	14800002 	bnez	a0,428ae0 <makeDColorBox+0x3f4>
  428ad8:	00000000 	nop
  428adc:	0007000d 	break	0x7
  428ae0:	2401ffff 	li	at,-1
  428ae4:	14810004 	bne	a0,at,428af8 <makeDColorBox+0x40c>
  428ae8:	3c018000 	lui	at,0x8000
  428aec:	15a10002 	bne	t5,at,428af8 <makeDColorBox+0x40c>
  428af0:	00000000 	nop
  428af4:	0006000d 	break	0x6
  428af8:	010b6821 	addu	t5,t0,t3
  428afc:	00006012 	mflo	t4
  428b00:	000cc200 	sll	t8,t4,0x8
  428b04:	01f87021 	addu	t6,t7,t8
  428b08:	01a4001a 	div	zero,t5,a0
  428b0c:	14800002 	bnez	a0,428b18 <makeDColorBox+0x42c>
  428b10:	00000000 	nop
  428b14:	0007000d 	break	0x7
  428b18:	2401ffff 	li	at,-1
  428b1c:	14810004 	bne	a0,at,428b30 <makeDColorBox+0x444>
  428b20:	3c018000 	lui	at,0x8000
  428b24:	15a10002 	bne	t5,at,428b30 <makeDColorBox+0x444>
  428b28:	00000000 	nop
  428b2c:	0006000d 	break	0x6
  428b30:	00006012 	mflo	t4
  428b34:	000c7c00 	sll	t7,t4,0x10
  428b38:	01cfc021 	addu	t8,t6,t7
  428b3c:	ae380024 	sw	t8,36(s1)
  428b40:	8fb90068 	lw	t9,104(sp)
  428b44:	00000000 	nop
  428b48:	ae390028 	sw	t9,40(s1)
  428b4c:	8fbf003c 	lw	ra,60(sp)
  428b50:	8fb10034 	lw	s1,52(sp)
  428b54:	8fb00030 	lw	s0,48(sp)
  428b58:	03e00008 	jr	ra
  428b5c:	27bd0060 	addiu	sp,sp,96
