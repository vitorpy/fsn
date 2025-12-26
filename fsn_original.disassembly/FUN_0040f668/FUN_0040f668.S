# Function: FUN_0040f668
# Address: 0x0040f668 - 0x0040f7c8
# Size: 0x160 (352 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040f668 <activeWorkProc+0x484>:
  40f668:	3c1c0fc1 	lui	gp,0xfc1
  40f66c:	279ce4c8 	addiu	gp,gp,-6968
  40f670:	0399e021 	addu	gp,gp,t9
  40f674:	27bdffd0 	addiu	sp,sp,-48
  40f678:	8f998778 	lw	t9,-30856(gp)
  40f67c:	afbf001c 	sw	ra,28(sp)
  40f680:	afa50034 	sw	a1,52(sp)
  40f684:	afbc0018 	sw	gp,24(sp)
  40f688:	afa60038 	sw	a2,56(sp)
  40f68c:	afa7003c 	sw	a3,60(sp)
  40f690:	0320f809 	jalr	t9
  40f694:	00002825 	move	a1,zero
  40f698:	8fbc0018 	lw	gp,24(sp)
  40f69c:	8fa40034 	lw	a0,52(sp)
  40f6a0:	8f998018 	lw	t9,-32744(gp)
  40f6a4:	27a5002c 	addiu	a1,sp,44
  40f6a8:	2739f080 	addiu	t9,t9,-3968
  40f6ac:	0320f809 	jalr	t9
  40f6b0:	27a60028 	addiu	a2,sp,40
  40f6b4:	8fbc0018 	lw	gp,24(sp)
  40f6b8:	c7a4002c 	lwc1	$f4,44(sp)
  40f6bc:	8f818068 	lw	at,-32664(gp)
  40f6c0:	460021a1 	cvt.d.s	$f6,$f4
  40f6c4:	c4280158 	lwc1	$f8,344(at)
  40f6c8:	8f818068 	lw	at,-32664(gp)
  40f6cc:	460042a1 	cvt.d.s	$f10,$f8
  40f6d0:	462a3401 	sub.d	$f16,$f6,$f10
  40f6d4:	c7a40028 	lwc1	$f4,40(sp)
  40f6d8:	c426015c 	lwc1	$f6,348(at)
  40f6dc:	462084a0 	cvt.s.d	$f18,$f16
  40f6e0:	8f818a24 	lw	at,-30172(gp)
  40f6e4:	46002221 	cvt.d.s	$f8,$f4
  40f6e8:	460032a1 	cvt.d.s	$f10,$f6
  40f6ec:	462a4401 	sub.d	$f16,$f8,$f10
  40f6f0:	c4260010 	lwc1	$f6,16(at)
  40f6f4:	46208120 	cvt.s.d	$f4,$f16
  40f6f8:	8f8e897c 	lw	t6,-30340(gp)
  40f6fc:	46002221 	cvt.d.s	$f8,$f4
  40f700:	46003021 	cvt.d.s	$f0,$f6
  40f704:	46204282 	mul.d	$f10,$f8,$f0
  40f708:	8f81806c 	lw	at,-32660(gp)
  40f70c:	8dce0000 	lw	t6,0(t6)
  40f710:	e7b2002c 	swc1	$f18,44(sp)
  40f714:	e7a40028 	swc1	$f4,40(sp)
  40f718:	46205420 	cvt.s.d	$f16,$f10
  40f71c:	e43065b4 	swc1	$f16,26036(at)
  40f720:	91cf0038 	lbu	t7,56(t6)
  40f724:	3c01c059 	lui	at,0xc059
  40f728:	11e00013 	beqz	t7,40f778 <activeWorkProc+0x594>
  40f72c:	00000000 	nop
  40f730:	44812800 	mtc1	at,$f5
  40f734:	44802000 	mtc1	zero,$f4
  40f738:	460091a1 	cvt.d.s	$f6,$f18
  40f73c:	46243202 	mul.d	$f8,$f6,$f4
  40f740:	44808000 	mtc1	zero,$f16
  40f744:	4458f800 	cfc1	t8,c1_fcsr
  40f748:	00000000 	nop
  40f74c:	37010003 	ori	at,t8,0x3
  40f750:	38210002 	xori	at,at,0x2
  40f754:	44c1f800 	ctc1	at,c1_fcsr
  40f758:	8f81806c 	lw	at,-32660(gp)
  40f75c:	462042a4 	cvt.w.d	$f10,$f8
  40f760:	44195000 	mfc1	t9,$f10
  40f764:	44d8f800 	ctc1	t8,c1_fcsr
  40f768:	a43965b8 	sh	t9,26040(at)
  40f76c:	8f81806c 	lw	at,-32660(gp)
  40f770:	1000000a 	b	40f79c <activeWorkProc+0x5b8>
  40f774:	e43065b0 	swc1	$f16,26032(at)
  40f778:	c7b2002c 	lwc1	$f18,44(sp)
  40f77c:	8f81806c 	lw	at,-32660(gp)
  40f780:	460091a1 	cvt.d.s	$f6,$f18
  40f784:	46203102 	mul.d	$f4,$f6,$f0
  40f788:	46202220 	cvt.s.d	$f8,$f4
  40f78c:	e42865b0 	swc1	$f8,26032(at)
  40f790:	8f81806c 	lw	at,-32660(gp)
  40f794:	00000000 	nop
  40f798:	a42065b8 	sh	zero,26040(at)
  40f79c:	8f998018 	lw	t9,-32744(gp)
  40f7a0:	8f848018 	lw	a0,-32744(gp)
  40f7a4:	8f85806c 	lw	a1,-32660(gp)
  40f7a8:	2739f150 	addiu	t9,t9,-3760
  40f7ac:	2484f20c 	addiu	a0,a0,-3572
  40f7b0:	0320f809 	jalr	t9
  40f7b4:	24a565b0 	addiu	a1,a1,26032
  40f7b8:	8fbf001c 	lw	ra,28(sp)
  40f7bc:	8fbc0018 	lw	gp,24(sp)
  40f7c0:	03e00008 	jr	ra
  40f7c4:	27bd0030 	addiu	sp,sp,48
