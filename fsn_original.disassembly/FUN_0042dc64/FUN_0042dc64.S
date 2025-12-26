# Function: FUN_0042dc64
# Address: 0x0042dc64 - 0x0042ddc8
# Size: 0x164 (356 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042dc64 <savePosition+0xc>:
  42dc64:	8f86897c 	lw	a2,-30340(gp)
  42dc68:	00000000 	nop
  42dc6c:	8cce0000 	lw	t6,0(a2)
  42dc70:	00000000 	nop
  42dc74:	85cf000c 	lh	t7,12(t6)
  42dc78:	00000000 	nop
  42dc7c:	a48f0000 	sh	t7,0(a0)
  42dc80:	8cd80000 	lw	t8,0(a2)
  42dc84:	00000000 	nop
  42dc88:	8719000e 	lh	t9,14(t8)
  42dc8c:	00000000 	nop
  42dc90:	a4990002 	sh	t9,2(a0)
  42dc94:	8cc80000 	lw	t0,0(a2)
  42dc98:	00000000 	nop
  42dc9c:	c5040000 	lwc1	$f4,0(t0)
  42dca0:	00000000 	nop
  42dca4:	e4840008 	swc1	$f4,8(a0)
  42dca8:	8cc90000 	lw	t1,0(a2)
  42dcac:	00000000 	nop
  42dcb0:	c5260004 	lwc1	$f6,4(t1)
  42dcb4:	00000000 	nop
  42dcb8:	e486000c 	swc1	$f6,12(a0)
  42dcbc:	8cca0000 	lw	t2,0(a2)
  42dcc0:	00000000 	nop
  42dcc4:	c5480008 	lwc1	$f8,8(t2)
  42dcc8:	00000000 	nop
  42dccc:	e4880010 	swc1	$f8,16(a0)
  42dcd0:	8ccb0000 	lw	t3,0(a2)
  42dcd4:	00000000 	nop
  42dcd8:	8d6c003c 	lw	t4,60(t3)
  42dcdc:	00000000 	nop
  42dce0:	ac8c0004 	sw	t4,4(a0)
  42dce4:	8ccd0000 	lw	t5,0(a2)
  42dce8:	00000000 	nop
  42dcec:	8dae0044 	lw	t6,68(t5)
  42dcf0:	00000000 	nop
  42dcf4:	ac8e0014 	sw	t6,20(a0)
  42dcf8:	8ccf0000 	lw	t7,0(a2)
  42dcfc:	00000000 	nop
  42dd00:	8df80048 	lw	t8,72(t7)
  42dd04:	00000000 	nop
  42dd08:	ac980024 	sw	t8,36(a0)
  42dd0c:	8cd90000 	lw	t9,0(a2)
  42dd10:	00000000 	nop
  42dd14:	93280c50 	lbu	t0,3152(t9)
  42dd18:	00000000 	nop
  42dd1c:	a0880034 	sb	t0,52(a0)
  42dd20:	8cc20000 	lw	v0,0(a2)
  42dd24:	00000000 	nop
  42dd28:	8c430044 	lw	v1,68(v0)
  42dd2c:	00000000 	nop
  42dd30:	10600070 	beqz	v1,42def4 <savePosition+0x29c>
  42dd34:	00000000 	nop
  42dd38:	8c49003c 	lw	t1,60(v0)
  42dd3c:	00000000 	nop
  42dd40:	11200021 	beqz	t1,42ddc8 <savePosition+0x170>
  42dd44:	00000000 	nop
  42dd48:	8c450048 	lw	a1,72(v0)
  42dd4c:	00000000 	nop
  42dd50:	10a00068 	beqz	a1,42def4 <savePosition+0x29c>
  42dd54:	00000000 	nop
  42dd58:	c44a0000 	lwc1	$f10,0(v0)
  42dd5c:	c4b20014 	lwc1	$f18,20(a1)
  42dd60:	46005421 	cvt.d.s	$f16,$f10
  42dd64:	46009121 	cvt.d.s	$f4,$f18
  42dd68:	46248181 	sub.d	$f6,$f16,$f4
  42dd6c:	46203220 	cvt.s.d	$f8,$f6
  42dd70:	e4880028 	swc1	$f8,40(a0)
  42dd74:	8cc20000 	lw	v0,0(a2)
  42dd78:	00000000 	nop
  42dd7c:	8c4a0048 	lw	t2,72(v0)
  42dd80:	c44a0004 	lwc1	$f10,4(v0)
  42dd84:	c5500018 	lwc1	$f16,24(t2)
  42dd88:	460054a1 	cvt.d.s	$f18,$f10
  42dd8c:	46008121 	cvt.d.s	$f4,$f16
  42dd90:	46249181 	sub.d	$f6,$f18,$f4
  42dd94:	46203220 	cvt.s.d	$f8,$f6
  42dd98:	e488002c 	swc1	$f8,44(a0)
  42dd9c:	8cc20000 	lw	v0,0(a2)
  42dda0:	00000000 	nop
  42dda4:	8c4b0048 	lw	t3,72(v0)
  42dda8:	c44a0008 	lwc1	$f10,8(v0)
  42ddac:	c572001c 	lwc1	$f18,28(t3)
  42ddb0:	46005421 	cvt.d.s	$f16,$f10
  42ddb4:	46009121 	cvt.d.s	$f4,$f18
  42ddb8:	46248181 	sub.d	$f6,$f16,$f4
  42ddbc:	46203220 	cvt.s.d	$f8,$f6
  42ddc0:	03e00008 	jr	ra
  42ddc4:	e4880030 	swc1	$f8,48(a0)
