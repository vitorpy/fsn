# Function: FUN_00427870
# Address: 0x00427870 - 0x00427a30
# Size: 0x1c0 (448 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00427870 <landscapeZoomToFile+0xc>:
  427870:	27bdffc0 	addiu	sp,sp,-64
  427874:	afbf003c 	sw	ra,60(sp)
  427878:	afbc0038 	sw	gp,56(sp)
  42787c:	10800068 	beqz	a0,427a20 <landscapeZoomToFile+0x1bc>
  427880:	00a03025 	move	a2,a1
  427884:	10a0003e 	beqz	a1,427980 <landscapeZoomToFile+0x11c>
  427888:	3c014000 	lui	at,0x4000
  42788c:	8f838a24 	lw	v1,-30172(gp)
  427890:	00002825 	move	a1,zero
  427894:	90620005 	lbu	v0,5(v1)
  427898:	00000000 	nop
  42789c:	10400004 	beqz	v0,4278b0 <landscapeZoomToFile+0x4c>
  4278a0:	00000000 	nop
  4278a4:	c4640080 	lwc1	$f4,128(v1)
  4278a8:	10000004 	b	4278bc <landscapeZoomToFile+0x58>
  4278ac:	460020a1 	cvt.d.s	$f2,$f4
  4278b0:	c4c6001c 	lwc1	$f6,28(a2)
  4278b4:	00000000 	nop
  4278b8:	460030a1 	cvt.d.s	$f2,$f6
  4278bc:	10400004 	beqz	v0,4278d0 <landscapeZoomToFile+0x6c>
  4278c0:	00000000 	nop
  4278c4:	8f858560 	lw	a1,-31392(gp)
  4278c8:	10000002 	b	4278d4 <landscapeZoomToFile+0x70>
  4278cc:	c4ca0014 	lwc1	$f10,20(a2)
  4278d0:	c4ca0014 	lwc1	$f10,20(a2)
  4278d4:	c4920058 	lwc1	$f18,88(a0)
  4278d8:	8f82897c 	lw	v0,-30340(gp)
  4278dc:	c4680094 	lwc1	$f8,148(v1)
  4278e0:	46005421 	cvt.d.s	$f16,$f10
  4278e4:	46009121 	cvt.d.s	$f4,$f18
  4278e8:	46248182 	mul.d	$f6,$f16,$f4
  4278ec:	8c420000 	lw	v0,0(v0)
  4278f0:	46004021 	cvt.d.s	$f0,$f8
  4278f4:	c4880034 	lwc1	$f8,52(a0)
  4278f8:	c4500014 	lwc1	$f16,20(v0)
  4278fc:	460042a1 	cvt.d.s	$f10,$f8
  427900:	46008121 	cvt.d.s	$f4,$f16
  427904:	46202202 	mul.d	$f8,$f4,$f0
  427908:	46265480 	add.d	$f18,$f10,$f6
  42790c:	c48a0038 	lwc1	$f10,56(a0)
  427910:	c4d00018 	lwc1	$f16,24(a2)
  427914:	8c6e0098 	lw	t6,152(v1)
  427918:	46289301 	sub.d	$f12,$f18,$f8
  42791c:	c4480018 	lwc1	$f8,24(v0)
  427920:	460051a1 	cvt.d.s	$f6,$f10
  427924:	46008121 	cvt.d.s	$f4,$f16
  427928:	460042a1 	cvt.d.s	$f10,$f8
  42792c:	46205402 	mul.d	$f16,$f10,$f0
  427930:	c4880024 	lwc1	$f8,36(a0)
  427934:	46243480 	add.d	$f18,$f6,$f4
  427938:	c4660090 	lwc1	$f6,144(v1)
  42793c:	8f998558 	lw	t9,-31400(gp)
  427940:	46309381 	sub.d	$f14,$f18,$f16
  427944:	afa00028 	sw	zero,40(sp)
  427948:	460042a1 	cvt.d.s	$f10,$f8
  42794c:	46003121 	cvt.d.s	$f4,$f6
  427950:	462a2480 	add.d	$f18,$f4,$f10
  427954:	afa50024 	sw	a1,36(sp)
  427958:	46321400 	add.d	$f16,$f2,$f18
  42795c:	afa00020 	sw	zero,32(sp)
  427960:	e7b00014 	swc1	$f16,20(sp)
  427964:	e7b10010 	swc1	$f17,16(sp)
  427968:	afa00018 	sw	zero,24(sp)
  42796c:	0320f809 	jalr	t9
  427970:	afae001c 	sw	t6,28(sp)
  427974:	8fbc0038 	lw	gp,56(sp)
  427978:	1000002a 	b	427a24 <landscapeZoomToFile+0x1c0>
  42797c:	8fbf003c 	lw	ra,60(sp)
  427980:	c486003c 	lwc1	$f6,60(a0)
  427984:	44812800 	mtc1	at,$f5
  427988:	44802000 	mtc1	zero,$f4
  42798c:	46003221 	cvt.d.s	$f8,$f6
  427990:	00000000 	nop
  427994:	46244283 	div.d	$f10,$f8,$f4
  427998:	8f838a24 	lw	v1,-30172(gp)
  42799c:	8f82897c 	lw	v0,-30340(gp)
  4279a0:	c4720088 	lwc1	$f18,136(v1)
  4279a4:	8c420000 	lw	v0,0(v0)
  4279a8:	46009421 	cvt.d.s	$f16,$f18
  4279ac:	c4440014 	lwc1	$f4,20(v0)
  4279b0:	c4860034 	lwc1	$f6,52(a0)
  4279b4:	460024a1 	cvt.d.s	$f18,$f4
  4279b8:	c4440018 	lwc1	$f4,24(v0)
  4279bc:	46003221 	cvt.d.s	$f8,$f6
  4279c0:	8f998558 	lw	t9,-31400(gp)
  4279c4:	8c6f008c 	lw	t7,140(v1)
  4279c8:	46305000 	add.d	$f0,$f10,$f16
  4279cc:	c4900038 	lwc1	$f16,56(a0)
  4279d0:	46209282 	mul.d	$f10,$f18,$f0
  4279d4:	460024a1 	cvt.d.s	$f18,$f4
  4279d8:	c4840024 	lwc1	$f4,36(a0)
  4279dc:	460081a1 	cvt.d.s	$f6,$f16
  4279e0:	afa00024 	sw	zero,36(sp)
  4279e4:	462a4301 	sub.d	$f12,$f8,$f10
  4279e8:	c46a0084 	lwc1	$f10,132(v1)
  4279ec:	46209202 	mul.d	$f8,$f18,$f0
  4279f0:	460024a1 	cvt.d.s	$f18,$f4
  4279f4:	46005421 	cvt.d.s	$f16,$f10
  4279f8:	afa00020 	sw	zero,32(sp)
  4279fc:	afa00018 	sw	zero,24(sp)
  427a00:	46283381 	sub.d	$f14,$f6,$f8
  427a04:	afaf001c 	sw	t7,28(sp)
  427a08:	46328180 	add.d	$f6,$f16,$f18
  427a0c:	e7a60014 	swc1	$f6,20(sp)
  427a10:	0320f809 	jalr	t9
  427a14:	e7a70010 	swc1	$f7,16(sp)
  427a18:	8fbc0038 	lw	gp,56(sp)
  427a1c:	00000000 	nop
  427a20:	8fbf003c 	lw	ra,60(sp)
  427a24:	27bd0040 	addiu	sp,sp,64
  427a28:	03e00008 	jr	ra
  427a2c:	00000000 	nop
