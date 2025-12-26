# Function: FUN_00421780
# Address: 0x00421780 - 0x00421940
# Size: 0x1c0 (448 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421780 <rescaleOverview+0xc>:
  421780:	8f8e893c 	lw	t6,-30404(gp)
  421784:	27bdff88 	addiu	sp,sp,-120
  421788:	91ce0000 	lbu	t6,0(t6)
  42178c:	afbf001c 	sw	ra,28(sp)
  421790:	11c00067 	beqz	t6,421930 <rescaleOverview+0x1bc>
  421794:	afbc0018 	sw	gp,24(sp)
  421798:	8f818a30 	lw	at,-30160(gp)
  42179c:	8f9980a4 	lw	t9,-32604(gp)
  4217a0:	c4240000 	lwc1	$f4,0(at)
  4217a4:	8f818a2c 	lw	at,-30164(gp)
  4217a8:	460021a1 	cvt.d.s	$f6,$f4
  4217ac:	c4280000 	lwc1	$f8,0(at)
  4217b0:	8f81806c 	lw	at,-32660(gp)
  4217b4:	460042a1 	cvt.d.s	$f10,$f8
  4217b8:	c4326bf0 	lwc1	$f18,27632(at)
  4217bc:	462a3401 	sub.d	$f16,$f6,$f10
  4217c0:	273900ea 	addiu	t9,t9,234
  4217c4:	46009121 	cvt.d.s	$f4,$f18
  4217c8:	46248202 	mul.d	$f8,$f16,$f4
  4217cc:	8f8f80a4 	lw	t7,-32604(gp)
  4217d0:	8f84806c 	lw	a0,-32660(gp)
  4217d4:	afb90030 	sw	t9,48(sp)
  4217d8:	8f998340 	lw	t9,-31936(gp)
  4217dc:	4458f800 	cfc1	t8,c1_fcsr
  4217e0:	25ef0368 	addiu	t7,t7,872
  4217e4:	37010003 	ori	at,t8,0x3
  4217e8:	38210002 	xori	at,at,0x2
  4217ec:	44c1f800 	ctc1	at,c1_fcsr
  4217f0:	8f818a38 	lw	at,-30152(gp)
  4217f4:	462041a4 	cvt.w.d	$f6,$f8
  4217f8:	c42a0000 	lwc1	$f10,0(at)
  4217fc:	8f818a34 	lw	at,-30156(gp)
  421800:	44d8f800 	ctc1	t8,c1_fcsr
  421804:	c4300000 	lwc1	$f16,0(at)
  421808:	8f81806c 	lw	at,-32660(gp)
  42180c:	e7a6002c 	swc1	$f6,44(sp)
  421810:	c4266bf4 	lwc1	$f6,27636(at)
  421814:	460054a1 	cvt.d.s	$f18,$f10
  421818:	46008121 	cvt.d.s	$f4,$f16
  42181c:	46249201 	sub.d	$f8,$f18,$f4
  421820:	8c846c0c 	lw	a0,27660(a0)
  421824:	460032a1 	cvt.d.s	$f10,$f6
  421828:	462a4402 	mul.d	$f16,$f8,$f10
  42182c:	afaf0028 	sw	t7,40(sp)
  421830:	27a50028 	addiu	a1,sp,40
  421834:	24060002 	li	a2,2
  421838:	4448f800 	cfc1	t0,c1_fcsr
  42183c:	00000000 	nop
  421840:	35010003 	ori	at,t0,0x3
  421844:	38210002 	xori	at,at,0x2
  421848:	44c1f800 	ctc1	at,c1_fcsr
  42184c:	00000000 	nop
  421850:	462084a4 	cvt.w.d	$f18,$f16
  421854:	44c8f800 	ctc1	t0,c1_fcsr
  421858:	0320f809 	jalr	t9
  42185c:	e7b20034 	swc1	$f18,52(sp)
  421860:	8fbc0018 	lw	gp,24(sp)
  421864:	00000000 	nop
  421868:	8f998660 	lw	t9,-31136(gp)
  42186c:	00000000 	nop
  421870:	0320f809 	jalr	t9
  421874:	00000000 	nop
  421878:	8fbc0018 	lw	gp,24(sp)
  42187c:	00000000 	nop
  421880:	8f818a2c 	lw	at,-30164(gp)
  421884:	8f868a34 	lw	a2,-30156(gp)
  421888:	c42c0000 	lwc1	$f12,0(at)
  42188c:	8f818a30 	lw	at,-30160(gp)
  421890:	8f878a38 	lw	a3,-30152(gp)
  421894:	8f998488 	lw	t9,-31608(gp)
  421898:	8cc60000 	lw	a2,0(a2)
  42189c:	c42e0000 	lwc1	$f14,0(at)
  4218a0:	8ce70000 	lw	a3,0(a3)
  4218a4:	0320f809 	jalr	t9
  4218a8:	00000000 	nop
  4218ac:	8fbc0018 	lw	gp,24(sp)
  4218b0:	00000000 	nop
  4218b4:	8f998674 	lw	t9,-31116(gp)
  4218b8:	00000000 	nop
  4218bc:	0320f809 	jalr	t9
  4218c0:	00000000 	nop
  4218c4:	8fbc0018 	lw	gp,24(sp)
  4218c8:	00000000 	nop
  4218cc:	8f998664 	lw	t9,-31132(gp)
  4218d0:	00000000 	nop
  4218d4:	0320f809 	jalr	t9
  4218d8:	00000000 	nop
  4218dc:	8fbc0018 	lw	gp,24(sp)
  4218e0:	00000000 	nop
  4218e4:	8f818a2c 	lw	at,-30164(gp)
  4218e8:	8f868a34 	lw	a2,-30156(gp)
  4218ec:	c42c0000 	lwc1	$f12,0(at)
  4218f0:	8f818a30 	lw	at,-30160(gp)
  4218f4:	8f878a38 	lw	a3,-30152(gp)
  4218f8:	8f998488 	lw	t9,-31608(gp)
  4218fc:	8cc60000 	lw	a2,0(a2)
  421900:	c42e0000 	lwc1	$f14,0(at)
  421904:	8ce70000 	lw	a3,0(a3)
  421908:	0320f809 	jalr	t9
  42190c:	00000000 	nop
  421910:	8fbc0018 	lw	gp,24(sp)
  421914:	00000000 	nop
  421918:	8f99867c 	lw	t9,-31108(gp)
  42191c:	00000000 	nop
  421920:	0320f809 	jalr	t9
  421924:	00000000 	nop
  421928:	8fbc0018 	lw	gp,24(sp)
  42192c:	00000000 	nop
  421930:	8fbf001c 	lw	ra,28(sp)
  421934:	27bd0078 	addiu	sp,sp,120
  421938:	03e00008 	jr	ra
  42193c:	00000000 	nop
