# Function: FUN_0041aeec
# Address: 0x0041aeec - 0x0041b034
# Size: 0x148 (328 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041aeec <warpZoomToFile+0xc>:
  41aeec:	27bdffc0 	addiu	sp,sp,-64
  41aef0:	afbf003c 	sw	ra,60(sp)
  41aef4:	afbc0038 	sw	gp,56(sp)
  41aef8:	1080004a 	beqz	a0,41b024 <warpZoomToFile+0x144>
  41aefc:	00803025 	move	a2,a0
  41af00:	8f8e897c 	lw	t6,-30340(gp)
  41af04:	00000000 	nop
  41af08:	8dce0000 	lw	t6,0(t6)
  41af0c:	00000000 	nop
  41af10:	8dcf003c 	lw	t7,60(t6)
  41af14:	00000000 	nop
  41af18:	108f0009 	beq	a0,t7,41af40 <warpZoomToFile+0x60>
  41af1c:	00000000 	nop
  41af20:	8f99855c 	lw	t9,-31396(gp)
  41af24:	afa50044 	sw	a1,68(sp)
  41af28:	0320f809 	jalr	t9
  41af2c:	afa60040 	sw	a2,64(sp)
  41af30:	8fbc0038 	lw	gp,56(sp)
  41af34:	8fa50044 	lw	a1,68(sp)
  41af38:	8fa60040 	lw	a2,64(sp)
  41af3c:	00000000 	nop
  41af40:	10a00038 	beqz	a1,41b024 <warpZoomToFile+0x144>
  41af44:	3c014000 	lui	at,0x4000
  41af48:	8f83897c 	lw	v1,-30340(gp)
  41af4c:	8f848a24 	lw	a0,-30172(gp)
  41af50:	8c630000 	lw	v1,0(v1)
  41af54:	90820005 	lbu	v0,5(a0)
  41af58:	8c67003c 	lw	a3,60(v1)
  41af5c:	10400004 	beqz	v0,41af70 <warpZoomToFile+0x90>
  41af60:	00000000 	nop
  41af64:	c4840080 	lwc1	$f4,128(a0)
  41af68:	10000004 	b	41af7c <warpZoomToFile+0x9c>
  41af6c:	460020a1 	cvt.d.s	$f2,$f4
  41af70:	c4a6001c 	lwc1	$f6,28(a1)
  41af74:	00000000 	nop
  41af78:	460030a1 	cvt.d.s	$f2,$f6
  41af7c:	10400005 	beqz	v0,41af94 <warpZoomToFile+0xb4>
  41af80:	00001025 	move	v0,zero
  41af84:	8f828560 	lw	v0,-31392(gp)
  41af88:	10000003 	b	41af98 <warpZoomToFile+0xb8>
  41af8c:	c48800a0 	lwc1	$f8,160(a0)
  41af90:	00001025 	move	v0,zero
  41af94:	c48800a0 	lwc1	$f8,160(a0)
  41af98:	c4720014 	lwc1	$f18,20(v1)
  41af9c:	c4aa0014 	lwc1	$f10,20(a1)
  41afa0:	46004021 	cvt.d.s	$f0,$f8
  41afa4:	c4c8003c 	lwc1	$f8,60(a2)
  41afa8:	46009121 	cvt.d.s	$f4,$f18
  41afac:	44809000 	mtc1	zero,$f18
  41afb0:	44819800 	mtc1	at,$f19
  41afb4:	46005421 	cvt.d.s	$f16,$f10
  41afb8:	46202182 	mul.d	$f6,$f4,$f0
  41afbc:	460042a1 	cvt.d.s	$f10,$f8
  41afc0:	00000000 	nop
  41afc4:	46325103 	div.d	$f4,$f10,$f18
  41afc8:	c46a0018 	lwc1	$f10,24(v1)
  41afcc:	8c9800a4 	lw	t8,164(a0)
  41afd0:	46268301 	sub.d	$f12,$f16,$f6
  41afd4:	c4b00018 	lwc1	$f16,24(a1)
  41afd8:	460054a1 	cvt.d.s	$f18,$f10
  41afdc:	460081a1 	cvt.d.s	$f6,$f16
  41afe0:	46209402 	mul.d	$f16,$f18,$f0
  41afe4:	8f998558 	lw	t9,-31400(gp)
  41afe8:	afa00028 	sw	zero,40(sp)
  41afec:	afa20024 	sw	v0,36(sp)
  41aff0:	afa70020 	sw	a3,32(sp)
  41aff4:	afa00018 	sw	zero,24(sp)
  41aff8:	afb8001c 	sw	t8,28(sp)
  41affc:	46243200 	add.d	$f8,$f6,$f4
  41b000:	c4860090 	lwc1	$f6,144(a0)
  41b004:	46304381 	sub.d	$f14,$f8,$f16
  41b008:	46003121 	cvt.d.s	$f4,$f6
  41b00c:	46241280 	add.d	$f10,$f2,$f4
  41b010:	e7aa0014 	swc1	$f10,20(sp)
  41b014:	0320f809 	jalr	t9
  41b018:	e7ab0010 	swc1	$f11,16(sp)
  41b01c:	8fbc0038 	lw	gp,56(sp)
  41b020:	00000000 	nop
  41b024:	8fbf003c 	lw	ra,60(sp)
  41b028:	27bd0040 	addiu	sp,sp,64
  41b02c:	03e00008 	jr	ra
  41b030:	00000000 	nop
