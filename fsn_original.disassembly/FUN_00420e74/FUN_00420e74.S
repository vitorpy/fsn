# Function: FUN_00420e74
# Address: 0x00420e74 - 0x00421124
# Size: 0x2b0 (688 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420e74 <drawOverviewOverlay+0x310>:
  420e74:	3c1c0fc0 	lui	gp,0xfc0
  420e78:	279cccbc 	addiu	gp,gp,-13124
  420e7c:	0399e021 	addu	gp,gp,t9
  420e80:	27bdff90 	addiu	sp,sp,-112
  420e84:	8f998338 	lw	t9,-31944(gp)
  420e88:	afbf001c 	sw	ra,28(sp)
  420e8c:	afa40070 	sw	a0,112(sp)
  420e90:	afbc0018 	sw	gp,24(sp)
  420e94:	afa50074 	sw	a1,116(sp)
  420e98:	afa60078 	sw	a2,120(sp)
  420e9c:	0320f809 	jalr	t9
  420ea0:	00002025 	move	a0,zero
  420ea4:	8fbc0018 	lw	gp,24(sp)
  420ea8:	24040001 	li	a0,1
  420eac:	8f99833c 	lw	t9,-31940(gp)
  420eb0:	00000000 	nop
  420eb4:	0320f809 	jalr	t9
  420eb8:	00000000 	nop
  420ebc:	8fbc0018 	lw	gp,24(sp)
  420ec0:	8fa20078 	lw	v0,120(sp)
  420ec4:	8f818a30 	lw	at,-30160(gp)
  420ec8:	944e0010 	lhu	t6,16(v0)
  420ecc:	c4240000 	lwc1	$f4,0(at)
  420ed0:	8f818a2c 	lw	at,-30164(gp)
  420ed4:	448e9000 	mtc1	t6,$f18
  420ed8:	c4280000 	lwc1	$f8,0(at)
  420edc:	460021a1 	cvt.d.s	$f6,$f4
  420ee0:	460042a1 	cvt.d.s	$f10,$f8
  420ee4:	462a3401 	sub.d	$f16,$f6,$f10
  420ee8:	05c10006 	bgez	t6,420f04 <drawOverviewOverlay+0x3a0>
  420eec:	46809121 	cvt.d.w	$f4,$f18
  420ef0:	3c0141f0 	lui	at,0x41f0
  420ef4:	44814800 	mtc1	at,$f9
  420ef8:	44804000 	mtc1	zero,$f8
  420efc:	00000000 	nop
  420f00:	46282100 	add.d	$f4,$f4,$f8
  420f04:	00000000 	nop
  420f08:	46302183 	div.d	$f6,$f4,$f16
  420f0c:	8f81806c 	lw	at,-32660(gp)
  420f10:	462032a0 	cvt.s.d	$f10,$f6
  420f14:	e42a6bf0 	swc1	$f10,27632(at)
  420f18:	8f818a38 	lw	at,-30152(gp)
  420f1c:	944f0012 	lhu	t7,18(v0)
  420f20:	c4320000 	lwc1	$f18,0(at)
  420f24:	8f818a34 	lw	at,-30156(gp)
  420f28:	448f5000 	mtc1	t7,$f10
  420f2c:	c4240000 	lwc1	$f4,0(at)
  420f30:	46009221 	cvt.d.s	$f8,$f18
  420f34:	46002421 	cvt.d.s	$f16,$f4
  420f38:	46304181 	sub.d	$f6,$f8,$f16
  420f3c:	05e10006 	bgez	t7,420f58 <drawOverviewOverlay+0x3f4>
  420f40:	468054a1 	cvt.d.w	$f18,$f10
  420f44:	3c0141f0 	lui	at,0x41f0
  420f48:	44812800 	mtc1	at,$f5
  420f4c:	44802000 	mtc1	zero,$f4
  420f50:	00000000 	nop
  420f54:	46249480 	add.d	$f18,$f18,$f4
  420f58:	00000000 	nop
  420f5c:	46269203 	div.d	$f8,$f18,$f6
  420f60:	8f848068 	lw	a0,-32664(gp)
  420f64:	8f81806c 	lw	at,-32660(gp)
  420f68:	8f998368 	lw	t9,-31896(gp)
  420f6c:	8c846eb4 	lw	a0,28340(a0)
  420f70:	46204420 	cvt.s.d	$f16,$f8
  420f74:	0320f809 	jalr	t9
  420f78:	e4306bf4 	swc1	$f16,27636(at)
  420f7c:	8fbc0018 	lw	gp,24(sp)
  420f80:	00402025 	move	a0,v0
  420f84:	8f83806c 	lw	v1,-32660(gp)
  420f88:	00000000 	nop
  420f8c:	24636c08 	addiu	v1,v1,27656
  420f90:	ac620000 	sw	v0,0(v1)
  420f94:	8f998690 	lw	t9,-31088(gp)
  420f98:	00000000 	nop
  420f9c:	0320f809 	jalr	t9
  420fa0:	00000000 	nop
  420fa4:	8fbc0018 	lw	gp,24(sp)
  420fa8:	8fa40070 	lw	a0,112(sp)
  420fac:	8f998368 	lw	t9,-31896(gp)
  420fb0:	00000000 	nop
  420fb4:	0320f809 	jalr	t9
  420fb8:	00000000 	nop
  420fbc:	8fbc0018 	lw	gp,24(sp)
  420fc0:	00000000 	nop
  420fc4:	8f81806c 	lw	at,-32660(gp)
  420fc8:	8f998660 	lw	t9,-31136(gp)
  420fcc:	ac226c00 	sw	v0,27648(at)
  420fd0:	0320f809 	jalr	t9
  420fd4:	00000000 	nop
  420fd8:	8fbc0018 	lw	gp,24(sp)
  420fdc:	00000000 	nop
  420fe0:	8f818a2c 	lw	at,-30164(gp)
  420fe4:	8f868a34 	lw	a2,-30156(gp)
  420fe8:	c42c0000 	lwc1	$f12,0(at)
  420fec:	8f818a30 	lw	at,-30160(gp)
  420ff0:	8f878a38 	lw	a3,-30152(gp)
  420ff4:	8f998488 	lw	t9,-31608(gp)
  420ff8:	8cc60000 	lw	a2,0(a2)
  420ffc:	c42e0000 	lwc1	$f14,0(at)
  421000:	8ce70000 	lw	a3,0(a3)
  421004:	0320f809 	jalr	t9
  421008:	00000000 	nop
  42100c:	8fbc0018 	lw	gp,24(sp)
  421010:	8fb80078 	lw	t8,120(sp)
  421014:	8f81806c 	lw	at,-32660(gp)
  421018:	97190010 	lhu	t9,16(t8)
  42101c:	00000000 	nop
  421020:	ac396bf8 	sw	t9,27640(at)
  421024:	8f81806c 	lw	at,-32660(gp)
  421028:	8f9986a0 	lw	t9,-31072(gp)
  42102c:	97080012 	lhu	t0,18(t8)
  421030:	0320f809 	jalr	t9
  421034:	ac286bfc 	sw	t0,27644(at)
  421038:	8fbc0018 	lw	gp,24(sp)
  42103c:	10400006 	beqz	v0,421058 <drawOverviewOverlay+0x4f4>
  421040:	27a50020 	addiu	a1,sp,32
  421044:	8f89805c 	lw	t1,-32676(gp)
  421048:	00000000 	nop
  42104c:	2529ba38 	addiu	t1,t1,-17864
  421050:	10000005 	b	421068 <drawOverviewOverlay+0x504>
  421054:	afa90020 	sw	t1,32(sp)
  421058:	8f8a805c 	lw	t2,-32676(gp)
  42105c:	00000000 	nop
  421060:	254aba44 	addiu	t2,t2,-17852
  421064:	afaa0020 	sw	t2,32(sp)
  421068:	8f8b806c 	lw	t3,-32660(gp)
  42106c:	8f998364 	lw	t9,-31900(gp)
  421070:	8fa40070 	lw	a0,112(sp)
  421074:	256b6c04 	addiu	t3,t3,27652
  421078:	afab0024 	sw	t3,36(sp)
  42107c:	0320f809 	jalr	t9
  421080:	24060001 	li	a2,1
  421084:	8fbc0018 	lw	gp,24(sp)
  421088:	00000000 	nop
  42108c:	8f998664 	lw	t9,-31132(gp)
  421090:	00000000 	nop
  421094:	0320f809 	jalr	t9
  421098:	00000000 	nop
  42109c:	8fbc0018 	lw	gp,24(sp)
  4210a0:	8fa40070 	lw	a0,112(sp)
  4210a4:	8f85805c 	lw	a1,-32676(gp)
  4210a8:	8f9986a8 	lw	t9,-31064(gp)
  4210ac:	24a5ba54 	addiu	a1,a1,-17836
  4210b0:	0320f809 	jalr	t9
  4210b4:	00000000 	nop
  4210b8:	8fbc0018 	lw	gp,24(sp)
  4210bc:	8fa40070 	lw	a0,112(sp)
  4210c0:	8f818a5c 	lw	at,-30116(gp)
  4210c4:	8f85805c 	lw	a1,-32676(gp)
  4210c8:	8f9986a8 	lw	t9,-31064(gp)
  4210cc:	ac220030 	sw	v0,48(at)
  4210d0:	0320f809 	jalr	t9
  4210d4:	24a5ba58 	addiu	a1,a1,-17832
  4210d8:	8fbc0018 	lw	gp,24(sp)
  4210dc:	00000000 	nop
  4210e0:	8f818a5c 	lw	at,-30116(gp)
  4210e4:	8f868a34 	lw	a2,-30156(gp)
  4210e8:	ac220068 	sw	v0,104(at)
  4210ec:	8f818a2c 	lw	at,-30164(gp)
  4210f0:	8f878a38 	lw	a3,-30152(gp)
  4210f4:	c42c0000 	lwc1	$f12,0(at)
  4210f8:	8f818a30 	lw	at,-30160(gp)
  4210fc:	8f998488 	lw	t9,-31608(gp)
  421100:	8cc60000 	lw	a2,0(a2)
  421104:	8ce70000 	lw	a3,0(a3)
  421108:	c42e0000 	lwc1	$f14,0(at)
  42110c:	0320f809 	jalr	t9
  421110:	00000000 	nop
  421114:	8fbf001c 	lw	ra,28(sp)
  421118:	8fbc0018 	lw	gp,24(sp)
  42111c:	03e00008 	jr	ra
  421120:	27bd0070 	addiu	sp,sp,112
