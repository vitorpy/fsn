
fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040cac4 <draw_scene>:
  40cac4:	3c1c0fc1 	lui	gp,0xfc1
  40cac8:	279c106c 	addiu	gp,gp,4204
  40cacc:	0399e021 	addu	gp,gp,t9
  40cad0:	8f81806c 	lw	at,-32660(gp)  # GP-0x7f94
  40cad4:	8f9984d4 	lw	t9,-31532(gp)  # gettimeofday
  40cad8:	27bdffb0 	addiu	sp,sp,-80
  40cadc:	afbf001c 	sw	ra,28(sp)
  40cae0:	afbc0018 	sw	gp,24(sp)
  40cae4:	27a40048 	addiu	a0,sp,72
  40cae8:	00002825 	move	a1,zero
  40caec:	0320f809 	jalr	t9
  40caf0:	a0206688 	sb	zero,26248(at)
  40caf4:	8fbc0018 	lw	gp,24(sp)
  40caf8:	00000000 	nop
  40cafc:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40cb00:	8f818a2c 	lw	at,-30164(gp)  # GP-0x75d4
  40cb04:	8c420000 	lw	v0,0(v0)
  40cb08:	c4220000 	lwc1	$f2,0(at)
  40cb0c:	c4440000 	lwc1	$f4,0(v0)
  40cb10:	460011a1 	cvt.d.s	$f6,$f2
  40cb14:	46002021 	cvt.d.s	$f0,$f4
  40cb18:	4626003c 	c.lt.d	$f0,$f6
  40cb1c:	44803000 	mtc1	zero,$f6
  40cb20:	45000009 	bc1f	40cb48 <draw_scene+0x84>
  40cb24:	00000000 	nop
  40cb28:	e4420000 	swc1	$f2,0(v0)
  40cb2c:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40cb30:	00000000 	nop
  40cb34:	8c420000 	lw	v0,0(v0)
  40cb38:	00000000 	nop
  40cb3c:	c4480000 	lwc1	$f8,0(v0)
  40cb40:	00000000 	nop
  40cb44:	46004021 	cvt.d.s	$f0,$f8
  40cb48:	8f818a30 	lw	at,-30160(gp)  # GP-0x75d0
  40cb4c:	00000000 	nop
  40cb50:	c4220000 	lwc1	$f2,0(at)
  40cb54:	00000000 	nop
  40cb58:	460012a1 	cvt.d.s	$f10,$f2
  40cb5c:	4620503c 	c.lt.d	$f10,$f0
  40cb60:	00000000 	nop
  40cb64:	45000006 	bc1f	40cb80 <draw_scene+0xbc>
  40cb68:	00000000 	nop
  40cb6c:	e4420000 	swc1	$f2,0(v0)
  40cb70:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40cb74:	00000000 	nop
  40cb78:	8c420000 	lw	v0,0(v0)
  40cb7c:	00000000 	nop
  40cb80:	8f818a34 	lw	at,-30156(gp)  # GP-0x75cc
  40cb84:	c4500004 	lwc1	$f16,4(v0)
  40cb88:	c4320000 	lwc1	$f18,0(at)
  40cb8c:	3c014049 	lui	at,0x4049
  40cb90:	44813800 	mtc1	at,$f7
  40cb94:	46009121 	cvt.d.s	$f4,$f18
  40cb98:	46262081 	sub.d	$f2,$f4,$f6
  40cb9c:	46008021 	cvt.d.s	$f0,$f16
  40cba0:	4622003c 	c.lt.d	$f0,$f2
  40cba4:	00000000 	nop
  40cba8:	4500000a 	bc1f	40cbd4 <draw_scene+0x110>
  40cbac:	00000000 	nop
  40cbb0:	46201220 	cvt.s.d	$f8,$f2
  40cbb4:	e4480004 	swc1	$f8,4(v0)
  40cbb8:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40cbbc:	00000000 	nop
  40cbc0:	8c420000 	lw	v0,0(v0)
  40cbc4:	00000000 	nop
  40cbc8:	c44a0004 	lwc1	$f10,4(v0)
  40cbcc:	00000000 	nop
  40cbd0:	46005021 	cvt.d.s	$f0,$f10
  40cbd4:	8f818a38 	lw	at,-30152(gp)  # GP-0x75c8
  40cbd8:	00000000 	nop
  40cbdc:	c4220000 	lwc1	$f2,0(at)
  40cbe0:	00000000 	nop
  40cbe4:	46001421 	cvt.d.s	$f16,$f2
  40cbe8:	4620803c 	c.lt.d	$f16,$f0
  40cbec:	00000000 	nop
  40cbf0:	45000002 	bc1f	40cbfc <draw_scene+0x138>
  40cbf4:	00000000 	nop
  40cbf8:	e4420004 	swc1	$f2,4(v0)
  40cbfc:	8f998744 	lw	t9,-30908(gp)  # FUN_004294cc (update_camera?)
  40cc00:	00000000 	nop
  40cc04:	0320f809 	jalr	t9
  40cc08:	00000000 	nop
  40cc0c:	8fbc0018 	lw	gp,24(sp)
  40cc10:	00000000 	nop
  40cc14:	8f99851c 	lw	t9,-31460(gp)  # FUN_0040bbe0 (update_visibility?)
  40cc18:	00000000 	nop
  40cc1c:	0320f809 	jalr	t9
  40cc20:	00000000 	nop
  40cc24:	8fbc0018 	lw	gp,24(sp)
  40cc28:	00000000 	nop
  40cc2c:	8f8e897c 	lw	t6,-30340(gp)  # curcontext
  40cc30:	00000000 	nop
  40cc34:	8dce0000 	lw	t6,0(t6)
  40cc38:	00000000 	nop
  40cc3c:	8dcf003c 	lw	t7,60(t6)
  40cc40:	00000000 	nop
  40cc44:	15e00007 	bnez	t7,40cc64 <draw_scene+0x1a0>
  40cc48:	00000000 	nop
  40cc4c:	8f998530 	lw	t9,-31440(gp)  # GP-0x7ad0
  40cc50:	00000000 	nop
  40cc54:	0320f809 	jalr	t9
  40cc58:	00000000 	nop
  40cc5c:	8fbc0018 	lw	gp,24(sp)
  40cc60:	00000000 	nop
  40cc64:	8f828a24 	lw	v0,-30172(gp)  # fsn_resources
  40cc68:	00000000 	nop
  40cc6c:	90580004 	lbu	t8,4(v0)
  40cc70:	00000000 	nop
  40cc74:	1300000a 	beqz	t8,40cca0 <draw_scene+0x1dc>
  40cc78:	00000000 	nop
  40cc7c:	8f85806c 	lw	a1,-32660(gp)  # GP-0x7f94
  40cc80:	8f9984b4 	lw	t9,-31564(gp)  # scale (external)
  40cc84:	8c44015c 	lw	a0,348(v0)
  40cc88:	8ca56638 	lw	a1,26168(a1)
  40cc8c:	0320f809 	jalr	t9
  40cc90:	00000000 	nop
  40cc94:	8fbc0018 	lw	gp,24(sp)
  40cc98:	10000009 	b	40ccc0 <draw_scene+0x1fc>
  40cc9c:	00000000 	nop
  40cca0:	8f85806c 	lw	a1,-32660(gp)  # GP-0x7f94
  40cca4:	8f9984b4 	lw	t9,-31564(gp)  # scale (external)
  40cca8:	8c440154 	lw	a0,340(v0)
  40ccac:	8ca56638 	lw	a1,26168(a1)
  40ccb0:	0320f809 	jalr	t9
  40ccb4:	00000000 	nop
  40ccb8:	8fbc0018 	lw	gp,24(sp)
  40ccbc:	00000000 	nop
  40ccc0:	8f9984b8 	lw	t9,-31560(gp)  # rotate (external)
  40ccc4:	00000000 	nop
  40ccc8:	0320f809 	jalr	t9
  40cccc:	00000000 	nop
  40ccd0:	8fbc0018 	lw	gp,24(sp)
  40ccd4:	3c013f80 	lui	at,0x3f80
  40ccd8:	8f99897c 	lw	t9,-30340(gp)  # curcontext
  40ccdc:	44817000 	mtc1	at,$f14
  40cce0:	8f390000 	lw	t9,0(t9)
  40cce4:	3c013ff0 	lui	at,0x3ff0
  40cce8:	c7240034 	lwc1	$f4,52(t9)
  40ccec:	44819800 	mtc1	at,$f19
  40ccf0:	44809000 	mtc1	zero,$f18
  40ccf4:	460021a1 	cvt.d.s	$f6,$f4
  40ccf8:	00000000 	nop
  40ccfc:	46269203 	div.d	$f8,$f18,$f6
  40cd00:	8f998494 	lw	t9,-31596(gp)  # GP-0x7b6c
  40cd04:	44067000 	mfc1	a2,$f14
  40cd08:	0320f809 	jalr	t9
  40cd0c:	46204320 	cvt.s.d	$f12,$f8
  40cd10:	8fbc0018 	lw	gp,24(sp)
  40cd14:	24050078 	li	a1,120
  40cd18:	8f88897c 	lw	t0,-30340(gp)  # curcontext
  40cd1c:	8f998498 	lw	t9,-31592(gp)  # GP-0x7b68
  40cd20:	8d080000 	lw	t0,0(t0)
  40cd24:	00000000 	nop
  40cd28:	8504000e 	lh	a0,14(t0)
  40cd2c:	0320f809 	jalr	t9
  40cd30:	00000000 	nop
  40cd34:	8fbc0018 	lw	gp,24(sp)
  40cd38:	2405007a 	li	a1,122
  40cd3c:	8f89897c 	lw	t1,-30340(gp)  # curcontext
  40cd40:	8f998498 	lw	t9,-31592(gp)  # GP-0x7b68
  40cd44:	8d290000 	lw	t1,0(t1)
  40cd48:	00000000 	nop
  40cd4c:	8524000c 	lh	a0,12(t1)
  40cd50:	0320f809 	jalr	t9
  40cd54:	00000000 	nop
  40cd58:	8fbc0018 	lw	gp,24(sp)
  40cd5c:	00000000 	nop
  40cd60:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40cd64:	00000000 	nop
  40cd68:	8c420000 	lw	v0,0(v0)
  40cd6c:	00000000 	nop
  40cd70:	8c4a003c 	lw	t2,60(v0)
  40cd74:	00000000 	nop
  40cd78:	15400021 	bnez	t2,40ce00 <draw_scene+0x33c>
  40cd7c:	00000000 	nop
  40cd80:	c44a0018 	lwc1	$f10,24(v0)
  40cd84:	c4440020 	lwc1	$f4,32(v0)
  40cd88:	46005421 	cvt.d.s	$f16,$f10
  40cd8c:	460024a1 	cvt.d.s	$f18,$f4
  40cd90:	46328182 	mul.d	$f6,$f16,$f18
  40cd94:	c4480008 	lwc1	$f8,8(v0)
  40cd98:	c4500004 	lwc1	$f16,4(v0)
  40cd9c:	460042a1 	cvt.d.s	$f10,$f8
  40cda0:	8f818a24 	lw	at,-30172(gp)  # fsn_resources
  40cda4:	462a3102 	mul.d	$f4,$f6,$f10
  40cda8:	c4260108 	lwc1	$f6,264(at)
  40cdac:	460084a1 	cvt.d.s	$f18,$f16
  40cdb0:	460032a1 	cvt.d.s	$f10,$f6
  40cdb4:	8f99849c 	lw	t9,-31588(gp)  # GP-0x7b64
  40cdb8:	46249201 	sub.d	$f8,$f18,$f4
  40cdbc:	c42c0104 	lwc1	$f12,260(at)
  40cdc0:	462a4403 	div.d	$f16,$f8,$f10
  40cdc4:	0320f809 	jalr	t9
  40cdc8:	462083a0 	cvt.s.d	$f14,$f16
  40cdcc:	8fbc0018 	lw	gp,24(sp)
  40cdd0:	3c013f80 	lui	at,0x3f80
  40cdd4:	44817000 	mtc1	at,$f14
  40cdd8:	8f998494 	lw	t9,-31596(gp)  # GP-0x7b6c
  40cddc:	44067000 	mfc1	a2,$f14
  40cde0:	0320f809 	jalr	t9
  40cde4:	46000306 	mov.s	$f12,$f0
  40cde8:	8fbc0018 	lw	gp,24(sp)
  40cdec:	00000000 	nop
  40cdf0:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40cdf4:	00000000 	nop
  40cdf8:	8c420000 	lw	v0,0(v0)
  40cdfc:	00000000 	nop
  40ce00:	c4520008 	lwc1	$f18,8(v0)
  40ce04:	c44c0000 	lwc1	$f12,0(v0)
  40ce08:	c44e0004 	lwc1	$f14,4(v0)
  40ce0c:	8f9984a0 	lw	t9,-31584(gp)  # GP-0x7b60
  40ce10:	46009107 	neg.s	$f4,$f18
  40ce14:	44062000 	mfc1	a2,$f4
  40ce18:	46006307 	neg.s	$f12,$f12
  40ce1c:	0320f809 	jalr	t9
  40ce20:	46007387 	neg.s	$f14,$f14
  40ce24:	8fbc0018 	lw	gp,24(sp)
  40ce28:	00002025 	move	a0,zero
  40ce2c:	8f9986c8 	lw	t9,-31032(gp)  # GP-0x7938
  40ce30:	00000000 	nop
  40ce34:	0320f809 	jalr	t9
  40ce38:	00000000 	nop
  40ce3c:	8fbc0018 	lw	gp,24(sp)
  40ce40:	00000000 	nop
  40ce44:	8f9984d8 	lw	t9,-31528(gp)  # popmatrix (external)
  40ce48:	00000000 	nop
  40ce4c:	0320f809 	jalr	t9
  40ce50:	00000000 	nop
  40ce54:	8fbc0018 	lw	gp,24(sp)
  40ce58:	00000000 	nop
  40ce5c:	8f9984ac 	lw	t9,-31572(gp)  # GP-0x7b54
  40ce60:	00000000 	nop
  40ce64:	0320f809 	jalr	t9
  40ce68:	00000000 	nop
  40ce6c:	8fbc0018 	lw	gp,24(sp)
  40ce70:	00000000 	nop
  40ce74:	8f99867c 	lw	t9,-31108(gp)  # FUN_00420b70 (finalize_frame?)
  40ce78:	00000000 	nop
  40ce7c:	0320f809 	jalr	t9
  40ce80:	00000000 	nop
  40ce84:	8fbc0018 	lw	gp,24(sp)
  40ce88:	00000000 	nop
  40ce8c:	8f998544 	lw	t9,-31420(gp)  # FUN_0040d804 (update_timing?)
  40ce90:	00000000 	nop
  40ce94:	0320f809 	jalr	t9
  40ce98:	00000000 	nop
  40ce9c:	8fbc0018 	lw	gp,24(sp)
  40cea0:	00000000 	nop
  40cea4:	8f998330 	lw	t9,-31952(gp)  # GP-0x7cd0
  40cea8:	00000000 	nop
  40ceac:	0320f809 	jalr	t9
  40ceb0:	00000000 	nop
  40ceb4:	8fbc0018 	lw	gp,24(sp)
  40ceb8:	27a40040 	addiu	a0,sp,64
  40cebc:	8f9984d4 	lw	t9,-31532(gp)  # gettimeofday
  40cec0:	00002825 	move	a1,zero
  40cec4:	0320f809 	jalr	t9
  40cec8:	00000000 	nop
  40cecc:	8fae0040 	lw	t6,64(sp)
  40ced0:	8faf0048 	lw	t7,72(sp)
  40ced4:	3c03000f 	lui	v1,0xf
  40ced8:	34634240 	ori	v1,v1,0x4240
  40cedc:	01cfc023 	subu	t8,t6,t7
  40cee0:	03030019 	multu	t8,v1
  40cee4:	8fbc0018 	lw	gp,24(sp)
  40cee8:	8fab0044 	lw	t3,68(sp)
  40ceec:	8fac004c 	lw	t4,76(sp)
  40cef0:	8f89897c 	lw	t1,-30340(gp)  # curcontext
  40cef4:	016c6823 	subu	t5,t3,t4
  40cef8:	8d290000 	lw	t1,0(t1)
  40cefc:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40cf00:	3c01000f 	lui	at,0xf
  40cf04:	34214241 	ori	at,at,0x4241
  40cf08:	0000c812 	mflo	t9
  40cf0c:	01b94021 	addu	t0,t5,t9
  40cf10:	ad280c4c 	sw	t0,3148(t1)
  40cf14:	8c420000 	lw	v0,0(v0)
  40cf18:	00000000 	nop
  40cf1c:	8c4a0c4c 	lw	t2,3148(v0)
  40cf20:	00000000 	nop
  40cf24:	0141082a 	slt	at,t2,at
  40cf28:	14200003 	bnez	at,40cf38 <draw_scene+0x474>
  40cf2c:	8fbf001c 	lw	ra,28(sp)
  40cf30:	ac430c4c 	sw	v1,3148(v0)
  40cf34:	8fbf001c 	lw	ra,28(sp)
  40cf38:	27bd0050 	addiu	sp,sp,80
  40cf3c:	03e00008 	jr	ra
  40cf40:	00000000 	nop
