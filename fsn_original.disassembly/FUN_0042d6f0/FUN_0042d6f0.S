# Function: FUN_0042d6f0
# Address: 0x0042d6f0 - 0x0042d8e0
# Size: 0x1f0 (496 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042d6f0 <hidePreferencePanel+0xa9c>:
  42d6f0:	3c1c0fbf 	lui	gp,0xfbf
  42d6f4:	279c0440 	addiu	gp,gp,1088
  42d6f8:	0399e021 	addu	gp,gp,t9
  42d6fc:	8f8e806c 	lw	t6,-32660(gp)
  42d700:	27bdff88 	addiu	sp,sp,-120
  42d704:	8dce94ec 	lw	t6,-27412(t6)
  42d708:	afbf0034 	sw	ra,52(sp)
  42d70c:	afbc0030 	sw	gp,48(sp)
  42d710:	8dcf0004 	lw	t7,4(t6)
  42d714:	8f81805c 	lw	at,-32676(gp)
  42d718:	8de20000 	lw	v0,0(t7)
  42d71c:	c4213af8 	lwc1	$f1,15096(at)
  42d720:	305800ff 	andi	t8,v0,0xff
  42d724:	44982000 	mtc1	t8,$f4
  42d728:	c4203afc 	lwc1	$f0,15100(at)
  42d72c:	468021a0 	cvt.s.w	$f6,$f4
  42d730:	0002ca03 	sra	t9,v0,0x8
  42d734:	332800ff 	andi	t0,t9,0xff
  42d738:	46003221 	cvt.d.s	$f8,$f6
  42d73c:	00000000 	nop
  42d740:	46204283 	div.d	$f10,$f8,$f0
  42d744:	44889000 	mtc1	t0,$f18
  42d748:	00024c03 	sra	t1,v0,0x10
  42d74c:	312a00ff 	andi	t2,t1,0xff
  42d750:	46809120 	cvt.s.w	$f4,$f18
  42d754:	8f9988d0 	lw	t9,-30512(gp)
  42d758:	27ab0044 	addiu	t3,sp,68
  42d75c:	460021a1 	cvt.d.s	$f6,$f4
  42d760:	27ac0040 	addiu	t4,sp,64
  42d764:	27ad003c 	addiu	t5,sp,60
  42d768:	afad0020 	sw	t5,32(sp)
  42d76c:	afac001c 	sw	t4,28(sp)
  42d770:	afab0018 	sw	t3,24(sp)
  42d774:	46205420 	cvt.s.d	$f16,$f10
  42d778:	46008321 	cvt.d.s	$f12,$f16
  42d77c:	448a8000 	mtc1	t2,$f16
  42d780:	46203203 	div.d	$f8,$f6,$f0
  42d784:	468084a0 	cvt.s.w	$f18,$f16
  42d788:	46009121 	cvt.d.s	$f4,$f18
  42d78c:	00000000 	nop
  42d790:	46202183 	div.d	$f6,$f4,$f0
  42d794:	462042a0 	cvt.s.d	$f10,$f8
  42d798:	460053a1 	cvt.d.s	$f14,$f10
  42d79c:	46203220 	cvt.s.d	$f8,$f6
  42d7a0:	460042a1 	cvt.d.s	$f10,$f8
  42d7a4:	e7aa0014 	swc1	$f10,20(sp)
  42d7a8:	0320f809 	jalr	t9
  42d7ac:	e7ab0010 	swc1	$f11,16(sp)
  42d7b0:	8fbc0030 	lw	gp,48(sp)
  42d7b4:	c7b00040 	lwc1	$f16,64(sp)
  42d7b8:	8f81805c 	lw	at,-32676(gp)
  42d7bc:	460084a1 	cvt.d.s	$f18,$f16
  42d7c0:	c4213b00 	lwc1	$f1,15104(at)
  42d7c4:	c4203b04 	lwc1	$f0,15108(at)
  42d7c8:	c7a8003c 	lwc1	$f8,60(sp)
  42d7cc:	46209102 	mul.d	$f4,$f18,$f0
  42d7d0:	8f9880a4 	lw	t8,-32604(gp)
  42d7d4:	8f84806c 	lw	a0,-32660(gp)
  42d7d8:	2718035b 	addiu	t8,t8,859
  42d7dc:	8c846e3c 	lw	a0,28220(a0)
  42d7e0:	444ef800 	cfc1	t6,c1_fcsr
  42d7e4:	afb80070 	sw	t8,112(sp)
  42d7e8:	35c10003 	ori	at,t6,0x3
  42d7ec:	38210002 	xori	at,at,0x2
  42d7f0:	44c1f800 	ctc1	at,c1_fcsr
  42d7f4:	27a50070 	addiu	a1,sp,112
  42d7f8:	462021a4 	cvt.w.d	$f6,$f4
  42d7fc:	c7a40044 	lwc1	$f4,68(sp)
  42d800:	44cef800 	ctc1	t6,c1_fcsr
  42d804:	e7a60058 	swc1	$f6,88(sp)
  42d808:	460042a1 	cvt.d.s	$f10,$f8
  42d80c:	46205402 	mul.d	$f16,$f10,$f0
  42d810:	24060001 	li	a2,1
  42d814:	444ff800 	cfc1	t7,c1_fcsr
  42d818:	00000000 	nop
  42d81c:	35e10003 	ori	at,t7,0x3
  42d820:	38210002 	xori	at,at,0x2
  42d824:	44c1f800 	ctc1	at,c1_fcsr
  42d828:	00000000 	nop
  42d82c:	462084a4 	cvt.w.d	$f18,$f16
  42d830:	44cff800 	ctc1	t7,c1_fcsr
  42d834:	e7b20054 	swc1	$f18,84(sp)
  42d838:	460021a1 	cvt.d.s	$f6,$f4
  42d83c:	46203202 	mul.d	$f8,$f6,$f0
  42d840:	4459f800 	cfc1	t9,c1_fcsr
  42d844:	00000000 	nop
  42d848:	37210003 	ori	at,t9,0x3
  42d84c:	38210002 	xori	at,at,0x2
  42d850:	44c1f800 	ctc1	at,c1_fcsr
  42d854:	00000000 	nop
  42d858:	462042a4 	cvt.w.d	$f10,$f8
  42d85c:	44d9f800 	ctc1	t9,c1_fcsr
  42d860:	8f998340 	lw	t9,-31936(gp)
  42d864:	e7aa0074 	swc1	$f10,116(sp)
  42d868:	0320f809 	jalr	t9
  42d86c:	00000000 	nop
  42d870:	8fbc0030 	lw	gp,48(sp)
  42d874:	8fa90058 	lw	t1,88(sp)
  42d878:	8f8880a4 	lw	t0,-32604(gp)
  42d87c:	8f84806c 	lw	a0,-32660(gp)
  42d880:	8f998340 	lw	t9,-31936(gp)
  42d884:	2508035b 	addiu	t0,t0,859
  42d888:	8c846e40 	lw	a0,28224(a0)
  42d88c:	afa80070 	sw	t0,112(sp)
  42d890:	27a50070 	addiu	a1,sp,112
  42d894:	24060001 	li	a2,1
  42d898:	0320f809 	jalr	t9
  42d89c:	afa90074 	sw	t1,116(sp)
  42d8a0:	8fbc0030 	lw	gp,48(sp)
  42d8a4:	8fab0054 	lw	t3,84(sp)
  42d8a8:	8f8a80a4 	lw	t2,-32604(gp)
  42d8ac:	8f84806c 	lw	a0,-32660(gp)
  42d8b0:	8f998340 	lw	t9,-31936(gp)
  42d8b4:	254a035b 	addiu	t2,t2,859
  42d8b8:	8c846e44 	lw	a0,28228(a0)
  42d8bc:	afaa0070 	sw	t2,112(sp)
  42d8c0:	27a50070 	addiu	a1,sp,112
  42d8c4:	24060001 	li	a2,1
  42d8c8:	0320f809 	jalr	t9
  42d8cc:	afab0074 	sw	t3,116(sp)
  42d8d0:	8fbf0034 	lw	ra,52(sp)
  42d8d4:	8fbc0030 	lw	gp,48(sp)
  42d8d8:	03e00008 	jr	ra
  42d8dc:	27bd0078 	addiu	sp,sp,120
