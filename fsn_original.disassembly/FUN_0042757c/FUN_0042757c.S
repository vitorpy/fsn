# Function: FUN_0042757c
# Address: 0x0042757c - 0x004277f0
# Size: 0x274 (628 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042757c <highlightFileLandscape+0xc>:
  42757c:	27bdffd8 	addiu	sp,sp,-40
  427580:	8f9984b8 	lw	t9,-31560(gp)
  427584:	afbf0024 	sw	ra,36(sp)
  427588:	afb2001c 	sw	s2,28(sp)
  42758c:	afb10018 	sw	s1,24(sp)
  427590:	afb00014 	sw	s0,20(sp)
  427594:	00808825 	move	s1,a0
  427598:	00a09025 	move	s2,a1
  42759c:	afbc0020 	sw	gp,32(sp)
  4275a0:	0320f809 	jalr	t9
  4275a4:	00008025 	move	s0,zero
  4275a8:	8fbc0020 	lw	gp,32(sp)
  4275ac:	c62c0034 	lwc1	$f12,52(s1)
  4275b0:	8f9984a0 	lw	t9,-31584(gp)
  4275b4:	c62e0038 	lwc1	$f14,56(s1)
  4275b8:	8e260024 	lw	a2,36(s1)
  4275bc:	0320f809 	jalr	t9
  4275c0:	00000000 	nop
  4275c4:	8fbc0020 	lw	gp,32(sp)
  4275c8:	3c013f80 	lui	at,0x3f80
  4275cc:	44817000 	mtc1	at,$f14
  4275d0:	8f998494 	lw	t9,-31596(gp)
  4275d4:	c62c0058 	lwc1	$f12,88(s1)
  4275d8:	44067000 	mfc1	a2,$f14
  4275dc:	0320f809 	jalr	t9
  4275e0:	00000000 	nop
  4275e4:	8fbc0020 	lw	gp,32(sp)
  4275e8:	02402025 	move	a0,s2
  4275ec:	8f9986f8 	lw	t9,-30984(gp)
  4275f0:	00000000 	nop
  4275f4:	0320f809 	jalr	t9
  4275f8:	00000000 	nop
  4275fc:	8fbc0020 	lw	gp,32(sp)
  427600:	c64c0014 	lwc1	$f12,20(s2)
  427604:	8f9984a0 	lw	t9,-31584(gp)
  427608:	c64e0018 	lwc1	$f14,24(s2)
  42760c:	0320f809 	jalr	t9
  427610:	24060000 	li	a2,0
  427614:	8fbc0020 	lw	gp,32(sp)
  427618:	00000000 	nop
  42761c:	8f82897c 	lw	v0,-30340(gp)
  427620:	00000000 	nop
  427624:	8c420000 	lw	v0,0(v0)
  427628:	00000000 	nop
  42762c:	904e0c50 	lbu	t6,3152(v0)
  427630:	00000000 	nop
  427634:	11c00013 	beqz	t6,427684 <highlightFileLandscape+0x114>
  427638:	00000000 	nop
  42763c:	8f838a24 	lw	v1,-30172(gp)
  427640:	00000000 	nop
  427644:	906f0005 	lbu	t7,5(v1)
  427648:	00000000 	nop
  42764c:	11e0000d 	beqz	t7,427684 <highlightFileLandscape+0x114>
  427650:	00000000 	nop
  427654:	8c580044 	lw	t8,68(v0)
  427658:	00000000 	nop
  42765c:	16380009 	bne	s1,t8,427684 <highlightFileLandscape+0x114>
  427660:	00000000 	nop
  427664:	c46c0070 	lwc1	$f12,112(v1)
  427668:	8f998494 	lw	t9,-31596(gp)
  42766c:	8c660080 	lw	a2,128(v1)
  427670:	0320f809 	jalr	t9
  427674:	46006386 	mov.s	$f14,$f12
  427678:	8fbc0020 	lw	gp,32(sp)
  42767c:	10000009 	b	4276a4 <highlightFileLandscape+0x134>
  427680:	00000000 	nop
  427684:	8f838a24 	lw	v1,-30172(gp)
  427688:	8f998494 	lw	t9,-31596(gp)
  42768c:	c46c0070 	lwc1	$f12,112(v1)
  427690:	8e46001c 	lw	a2,28(s2)
  427694:	0320f809 	jalr	t9
  427698:	46006386 	mov.s	$f14,$f12
  42769c:	8fbc0020 	lw	gp,32(sp)
  4276a0:	00000000 	nop
  4276a4:	8f82897c 	lw	v0,-30340(gp)
  4276a8:	c6280024 	lwc1	$f8,36(s1)
  4276ac:	8c420000 	lw	v0,0(v0)
  4276b0:	c652001c 	lwc1	$f18,28(s2)
  4276b4:	c4440008 	lwc1	$f4,8(v0)
  4276b8:	460042a1 	cvt.d.s	$f10,$f8
  4276bc:	460021a1 	cvt.d.s	$f6,$f4
  4276c0:	46009121 	cvt.d.s	$f4,$f18
  4276c4:	46245200 	add.d	$f8,$f10,$f4
  4276c8:	00002025 	move	a0,zero
  4276cc:	4626403e 	c.le.d	$f8,$f6
  4276d0:	00000000 	nop
  4276d4:	45000002 	bc1f	4276e0 <highlightFileLandscape+0x170>
  4276d8:	00000000 	nop
  4276dc:	24100010 	li	s0,16
  4276e0:	8f818a24 	lw	at,-30172(gp)
  4276e4:	44804000 	mtc1	zero,$f8
  4276e8:	c4240070 	lwc1	$f4,112(at)
  4276ec:	3c014000 	lui	at,0x4000
  4276f0:	44814800 	mtc1	at,$f9
  4276f4:	460021a1 	cvt.d.s	$f6,$f4
  4276f8:	00000000 	nop
  4276fc:	46283003 	div.d	$f0,$f6,$f8
  427700:	c6320034 	lwc1	$f18,52(s1)
  427704:	c64a0014 	lwc1	$f10,20(s2)
  427708:	460090a1 	cvt.d.s	$f2,$f18
  42770c:	c6320058 	lwc1	$f18,88(s1)
  427710:	46005321 	cvt.d.s	$f12,$f10
  427714:	460093a1 	cvt.d.s	$f14,$f18
  427718:	c44a0000 	lwc1	$f10,0(v0)
  42771c:	36190002 	ori	t9,s0,0x2
  427720:	46005421 	cvt.d.s	$f16,$f10
  427724:	46206101 	sub.d	$f4,$f12,$f0
  427728:	462e2182 	mul.d	$f6,$f4,$f14
  42772c:	46206480 	add.d	$f18,$f12,$f0
  427730:	462e9282 	mul.d	$f10,$f18,$f14
  427734:	46261200 	add.d	$f8,$f2,$f6
  427738:	4628803e 	c.le.d	$f16,$f8
  42773c:	00000000 	nop
  427740:	45000002 	bc1f	42774c <highlightFileLandscape+0x1dc>
  427744:	462a1100 	add.d	$f4,$f2,$f10
  427748:	03208025 	move	s0,t9
  42774c:	4630203e 	c.le.d	$f4,$f16
  427750:	36080004 	ori	t0,s0,0x4
  427754:	45000002 	bc1f	427760 <highlightFileLandscape+0x1f0>
  427758:	00000000 	nop
  42775c:	01008025 	move	s0,t0
  427760:	c6260038 	lwc1	$f6,56(s1)
  427764:	c6520018 	lwc1	$f18,24(s2)
  427768:	46003221 	cvt.d.s	$f8,$f6
  42776c:	460092a1 	cvt.d.s	$f10,$f18
  427770:	462a4080 	add.d	$f2,$f8,$f10
  427774:	c4440004 	lwc1	$f4,4(v0)
  427778:	46201181 	sub.d	$f6,$f2,$f0
  42777c:	36090001 	ori	t1,s0,0x1
  427780:	46002321 	cvt.d.s	$f12,$f4
  427784:	4626603e 	c.le.d	$f12,$f6
  427788:	46201480 	add.d	$f18,$f2,$f0
  42778c:	45000002 	bc1f	427798 <highlightFileLandscape+0x228>
  427790:	00000000 	nop
  427794:	01208025 	move	s0,t1
  427798:	462c903e 	c.le.d	$f18,$f12
  42779c:	360a0008 	ori	t2,s0,0x8
  4277a0:	45000002 	bc1f	4277ac <highlightFileLandscape+0x23c>
  4277a4:	00000000 	nop
  4277a8:	01408025 	move	s0,t2
  4277ac:	8f9986b4 	lw	t9,-31052(gp)
  4277b0:	24050001 	li	a1,1
  4277b4:	0320f809 	jalr	t9
  4277b8:	02003025 	move	a2,s0
  4277bc:	8fbc0020 	lw	gp,32(sp)
  4277c0:	00000000 	nop
  4277c4:	8f9984d8 	lw	t9,-31528(gp)
  4277c8:	00000000 	nop
  4277cc:	0320f809 	jalr	t9
  4277d0:	00000000 	nop
  4277d4:	8fbf0024 	lw	ra,36(sp)
  4277d8:	8fbc0020 	lw	gp,32(sp)
  4277dc:	8fb00014 	lw	s0,20(sp)
  4277e0:	8fb10018 	lw	s1,24(sp)
  4277e4:	8fb2001c 	lw	s2,28(sp)
  4277e8:	03e00008 	jr	ra
  4277ec:	27bd0028 	addiu	sp,sp,40
