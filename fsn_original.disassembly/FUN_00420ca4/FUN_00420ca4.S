# Function: FUN_00420ca4
# Address: 0x00420ca4 - 0x00420e74
# Size: 0x1d0 (464 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420ca4 <drawOverviewOverlay+0x140>:
  420ca4:	3c1c0fc0 	lui	gp,0xfc0
  420ca8:	279cce8c 	addiu	gp,gp,-12660
  420cac:	0399e021 	addu	gp,gp,t9
  420cb0:	27bdffe0 	addiu	sp,sp,-32
  420cb4:	afbf001c 	sw	ra,28(sp)
  420cb8:	afbc0018 	sw	gp,24(sp)
  420cbc:	afb00014 	sw	s0,20(sp)
  420cc0:	afa40020 	sw	a0,32(sp)
  420cc4:	afa50024 	sw	a1,36(sp)
  420cc8:	94ce0010 	lhu	t6,16(a2)
  420ccc:	8f81806c 	lw	at,-32660(gp)
  420cd0:	00c08025 	move	s0,a2
  420cd4:	ac2e6bf8 	sw	t6,27640(at)
  420cd8:	94cf0012 	lhu	t7,18(a2)
  420cdc:	8f81806c 	lw	at,-32660(gp)
  420ce0:	00000000 	nop
  420ce4:	ac2f6bfc 	sw	t7,27644(at)
  420ce8:	8f818a30 	lw	at,-30160(gp)
  420cec:	94d80010 	lhu	t8,16(a2)
  420cf0:	c4240000 	lwc1	$f4,0(at)
  420cf4:	8f818a2c 	lw	at,-30164(gp)
  420cf8:	44989000 	mtc1	t8,$f18
  420cfc:	c4280000 	lwc1	$f8,0(at)
  420d00:	460021a1 	cvt.d.s	$f6,$f4
  420d04:	460042a1 	cvt.d.s	$f10,$f8
  420d08:	462a3401 	sub.d	$f16,$f6,$f10
  420d0c:	07010006 	bgez	t8,420d28 <drawOverviewOverlay+0x1c4>
  420d10:	46809121 	cvt.d.w	$f4,$f18
  420d14:	3c0141f0 	lui	at,0x41f0
  420d18:	44814800 	mtc1	at,$f9
  420d1c:	44804000 	mtc1	zero,$f8
  420d20:	00000000 	nop
  420d24:	46282100 	add.d	$f4,$f4,$f8
  420d28:	00000000 	nop
  420d2c:	46302183 	div.d	$f6,$f4,$f16
  420d30:	8f81806c 	lw	at,-32660(gp)
  420d34:	462032a0 	cvt.s.d	$f10,$f6
  420d38:	e42a6bf0 	swc1	$f10,27632(at)
  420d3c:	8f818a38 	lw	at,-30152(gp)
  420d40:	96190012 	lhu	t9,18(s0)
  420d44:	c4320000 	lwc1	$f18,0(at)
  420d48:	8f818a34 	lw	at,-30156(gp)
  420d4c:	44995000 	mtc1	t9,$f10
  420d50:	c4240000 	lwc1	$f4,0(at)
  420d54:	46009221 	cvt.d.s	$f8,$f18
  420d58:	46002421 	cvt.d.s	$f16,$f4
  420d5c:	46304181 	sub.d	$f6,$f8,$f16
  420d60:	07210006 	bgez	t9,420d7c <drawOverviewOverlay+0x218>
  420d64:	468054a1 	cvt.d.w	$f18,$f10
  420d68:	3c0141f0 	lui	at,0x41f0
  420d6c:	44812800 	mtc1	at,$f5
  420d70:	44802000 	mtc1	zero,$f4
  420d74:	00000000 	nop
  420d78:	46249480 	add.d	$f18,$f18,$f4
  420d7c:	00000000 	nop
  420d80:	46269203 	div.d	$f8,$f18,$f6
  420d84:	8f81806c 	lw	at,-32660(gp)
  420d88:	8f998660 	lw	t9,-31136(gp)
  420d8c:	46204420 	cvt.s.d	$f16,$f8
  420d90:	0320f809 	jalr	t9
  420d94:	e4306bf4 	swc1	$f16,27636(at)
  420d98:	8fbc0018 	lw	gp,24(sp)
  420d9c:	86050010 	lh	a1,16(s0)
  420da0:	86070012 	lh	a3,18(s0)
  420da4:	8f998354 	lw	t9,-31916(gp)
  420da8:	24a5ffff 	addiu	a1,a1,-1
  420dac:	24e7ffff 	addiu	a3,a3,-1
  420db0:	00075400 	sll	t2,a3,0x10
  420db4:	00054400 	sll	t0,a1,0x10
  420db8:	00082c03 	sra	a1,t0,0x10
  420dbc:	000a3c03 	sra	a3,t2,0x10
  420dc0:	00002025 	move	a0,zero
  420dc4:	0320f809 	jalr	t9
  420dc8:	00003025 	move	a2,zero
  420dcc:	8fbc0018 	lw	gp,24(sp)
  420dd0:	00000000 	nop
  420dd4:	8f998674 	lw	t9,-31116(gp)
  420dd8:	00000000 	nop
  420ddc:	0320f809 	jalr	t9
  420de0:	00000000 	nop
  420de4:	8fbc0018 	lw	gp,24(sp)
  420de8:	00000000 	nop
  420dec:	8f998664 	lw	t9,-31132(gp)
  420df0:	00000000 	nop
  420df4:	0320f809 	jalr	t9
  420df8:	00000000 	nop
  420dfc:	8fbc0018 	lw	gp,24(sp)
  420e00:	86050010 	lh	a1,16(s0)
  420e04:	86070012 	lh	a3,18(s0)
  420e08:	8f998354 	lw	t9,-31916(gp)
  420e0c:	24a5ffff 	addiu	a1,a1,-1
  420e10:	24e7ffff 	addiu	a3,a3,-1
  420e14:	00077400 	sll	t6,a3,0x10
  420e18:	00056400 	sll	t4,a1,0x10
  420e1c:	000c2c03 	sra	a1,t4,0x10
  420e20:	000e3c03 	sra	a3,t6,0x10
  420e24:	00002025 	move	a0,zero
  420e28:	0320f809 	jalr	t9
  420e2c:	00003025 	move	a2,zero
  420e30:	8fbc0018 	lw	gp,24(sp)
  420e34:	00000000 	nop
  420e38:	8f99867c 	lw	t9,-31108(gp)
  420e3c:	00000000 	nop
  420e40:	0320f809 	jalr	t9
  420e44:	00000000 	nop
  420e48:	8fbc0018 	lw	gp,24(sp)
  420e4c:	00000000 	nop
  420e50:	8f998330 	lw	t9,-31952(gp)
  420e54:	00000000 	nop
  420e58:	0320f809 	jalr	t9
  420e5c:	00000000 	nop
  420e60:	8fbf001c 	lw	ra,28(sp)
  420e64:	8fbc0018 	lw	gp,24(sp)
  420e68:	8fb00014 	lw	s0,20(sp)
  420e6c:	03e00008 	jr	ra
  420e70:	27bd0020 	addiu	sp,sp,32
