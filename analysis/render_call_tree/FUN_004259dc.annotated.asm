# Disassembly of FUN_004259dc
# Address: 0x004259dc
# End: 0x00425bcc
# Size: 0x1f0 (496 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004259dc <draw_visible_directory+0xc>:
  4259dc:	27bdffd8 	addiu	sp,sp,-40
  4259e0:	afbf0024 	sw	ra,36(sp)
  4259e4:	afbc0020 	sw	gp,32(sp)
  4259e8:	afb2001c 	sw	s2,28(sp)
  4259ec:	afb10018 	sw	s1,24(sp)
  4259f0:	afb00014 	sw	s0,20(sp)
  4259f4:	8c820074 	lw	v0,116(a0)
  4259f8:	00809025 	move	s2,a0
  4259fc:	000278c0 	sll	t7,v0,0x3
  425a00:	05e1006c 	bgez	t7,425bb4 <draw_visible_directory+0x1e4>
  425a04:	0002c782 	srl	t8,v0,0x1e
  425a08:	8f998990 	lw	t9,-30320(gp)  # curcontextflag
  425a0c:	908d0074 	lbu	t5,116(a0)
  425a10:	8f390000 	lw	t9,0(t9)
  425a14:	31aeff3f 	andi	t6,t5,0xff3f
  425a18:	03204027 	nor	t0,t9,zero
  425a1c:	03085024 	and	t2,t8,t0
  425a20:	000a6180 	sll	t4,t2,0x6
  425a24:	8f99897c 	lw	t9,-30340(gp)  # curcontext
  425a28:	018e7825 	or	t7,t4,t6
  425a2c:	a08f0074 	sb	t7,116(a0)
  425a30:	8f390000 	lw	t9,0(t9)
  425a34:	c4880038 	lwc1	$f8,56(a0)
  425a38:	c7240004 	lwc1	$f4,4(t9)
  425a3c:	460042a1 	cvt.d.s	$f10,$f8
  425a40:	460021a1 	cvt.d.s	$f6,$f4
  425a44:	462a3401 	sub.d	$f16,$f6,$f10
  425a48:	c484003c 	lwc1	$f4,60(a0)
  425a4c:	46208020 	cvt.s.d	$f0,$f16
  425a50:	8f818a24 	lw	at,-30172(gp)  # fsn_resources
  425a54:	46000005 	abs.s	$f0,$f0
  425a58:	460000a1 	cvt.d.s	$f2,$f0
  425a5c:	46002221 	cvt.d.s	$f8,$f4
  425a60:	00000000 	nop
  425a64:	46281183 	div.d	$f6,$f2,$f8
  425a68:	c4320100 	lwc1	$f18,256(at)
  425a6c:	00000000 	nop
  425a70:	46009321 	cvt.d.s	$f12,$f18
  425a74:	462c303c 	c.lt.d	$f6,$f12
  425a78:	00000000 	nop
  425a7c:	45010011 	bc1t	425ac4 <draw_visible_directory+0xf4>
  425a80:	00000000 	nop
  425a84:	c48a0024 	lwc1	$f10,36(a0)
  425a88:	c4920054 	lwc1	$f18,84(a0)
  425a8c:	46005421 	cvt.d.s	$f16,$f10
  425a90:	46009121 	cvt.d.s	$f4,$f18
  425a94:	46248200 	add.d	$f8,$f16,$f4
  425a98:	00000000 	nop
  425a9c:	46281183 	div.d	$f6,$f2,$f8
  425aa0:	462c303c 	c.lt.d	$f6,$f12
  425aa4:	00000000 	nop
  425aa8:	45010006 	bc1t	425ac4 <draw_visible_directory+0xf4>
  425aac:	00000000 	nop
  425ab0:	94980074 	lhu	t8,116(a0)
  425ab4:	00000000 	nop
  425ab8:	33080001 	andi	t0,t8,0x1
  425abc:	1100002d 	beqz	t0,425b74 <draw_visible_directory+0x1a4>
  425ac0:	00000000 	nop
  425ac4:	8f9981e4 	lw	t9,-32284(gp)
  425ac8:	8644005e 	lh	a0,94(s2)
  425acc:	0320f809 	jalr	t9  # call curcontext
  425ad0:	00000000 	nop
  425ad4:	8fbc0020 	lw	gp,32(sp)
  425ad8:	00000000 	nop
  425adc:	8f9984b8 	lw	t9,-31560(gp)  # pushmatrix
  425ae0:	00000000 	nop
  425ae4:	0320f809 	jalr	t9  # call pushmatrix
  425ae8:	00000000 	nop
  425aec:	8fbc0020 	lw	gp,32(sp)
  425af0:	c64c0034 	lwc1	$f12,52(s2)
  425af4:	8f9984a0 	lw	t9,-31584(gp)  # translate
  425af8:	c64e0038 	lwc1	$f14,56(s2)
  425afc:	0320f809 	jalr	t9  # call translate
  425b00:	24060000 	li	a2,0
  425b04:	8fbc0020 	lw	gp,32(sp)
  425b08:	3c013f80 	lui	at,0x3f80  # 1.0f
  425b0c:	44817000 	mtc1	at,$f14  # $f14 = 1.0f
  425b10:	8f998494 	lw	t9,-31596(gp)  # scale
  425b14:	c64c0058 	lwc1	$f12,88(s2)
  425b18:	44067000 	mfc1	a2,$f14
  425b1c:	0320f809 	jalr	t9  # call scale
  425b20:	00000000 	nop
  425b24:	8fbc0020 	lw	gp,32(sp)
  425b28:	c64c003c 	lwc1	$f12,60(s2)
  425b2c:	8f998494 	lw	t9,-31596(gp)  # scale
  425b30:	8e460024 	lw	a2,36(s2)
  425b34:	0320f809 	jalr	t9  # call scale
  425b38:	46006386 	mov.s	$f14,$f12
  425b3c:	8fbc0020 	lw	gp,32(sp)
  425b40:	00002025 	move	a0,zero
  425b44:	8f9986b4 	lw	t9,-31052(gp)  # FUN_00422284
  425b48:	24050004 	li	a1,4
  425b4c:	0320f809 	jalr	t9  # call FUN_00422284
  425b50:	2406001f 	li	a2,31
  425b54:	8fbc0020 	lw	gp,32(sp)
  425b58:	00000000 	nop
  425b5c:	8f9984d8 	lw	t9,-31528(gp)  # popmatrix
  425b60:	00000000 	nop
  425b64:	0320f809 	jalr	t9  # call popmatrix
  425b68:	00000000 	nop
  425b6c:	8fbc0020 	lw	gp,32(sp)
  425b70:	00000000 	nop
  425b74:	8e490014 	lw	t1,20(s2)
  425b78:	00008025 	move	s0,zero
  425b7c:	1920000d 	blez	t1,425bb4 <draw_visible_directory+0x1e4>
  425b80:	00008825 	move	s1,zero
  425b84:	8e4a0018 	lw	t2,24(s2)
  425b88:	8f9986cc 	lw	t9,-31028(gp)  # FUN_004259dc
  425b8c:	01515821 	addu	t3,t2,s1
  425b90:	8d640000 	lw	a0,0(t3)
  425b94:	0320f809 	jalr	t9  # call FUN_004259dc
  425b98:	00000000 	nop
  425b9c:	8e4d0014 	lw	t5,20(s2)
  425ba0:	26100001 	addiu	s0,s0,1
  425ba4:	8fbc0020 	lw	gp,32(sp)
  425ba8:	020d082a 	slt	at,s0,t5
  425bac:	1420fff5 	bnez	at,425b84 <draw_visible_directory+0x1b4>
  425bb0:	26310004 	addiu	s1,s1,4
  425bb4:	8fbf0024 	lw	ra,36(sp)
  425bb8:	8fb00014 	lw	s0,20(sp)
  425bbc:	8fb10018 	lw	s1,24(sp)
  425bc0:	8fb2001c 	lw	s2,28(sp)
  425bc4:	03e00008 	jr	ra
  425bc8:	27bd0028 	addiu	sp,sp,40


======================================================================
ANALYSIS SUMMARY: FUN_004259dc
======================================================================

FUNCTION CALLS:
----------------------------------------
  FUN_00422284
  FUN_004259dc
  curcontext
  popmatrix
  pushmatrix
  scale (2x)
  translate

IRISGL CALLS (with addresses):
----------------------------------------
  0x00425ae4: pushmatrix
  0x00425afc: translate
  0x00425b1c: scale
  0x00425b34: scale
  0x00425b64: popmatrix

FLOAT CONSTANTS LOADED:
----------------------------------------
  0x3f800000 = 1.0f

GP SYMBOL REFERENCES:
----------------------------------------
  FUN_00422284
  FUN_004259dc
  curcontext
  curcontextflag
  fsn_resources
  popmatrix
  pushmatrix
  scale
  translate

======================================================================