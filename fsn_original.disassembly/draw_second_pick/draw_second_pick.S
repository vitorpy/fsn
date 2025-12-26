# Function: draw_second_pick
# Address: 0x00425ed8 - 0x00426244
# Size: 0x36c (876 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00425ed8 <draw_second_pick>:
  425ed8:	3c1c0fbf 	lui	gp,0xfbf
  425edc:	279c7c58 	addiu	gp,gp,31832
  425ee0:	0399e021 	addu	gp,gp,t9
  425ee4:	27bdff90 	addiu	sp,sp,-112
  425ee8:	afbf004c 	sw	ra,76(sp)
  425eec:	afbc0048 	sw	gp,72(sp)
  425ef0:	afb00044 	sw	s0,68(sp)
  425ef4:	8c8e0074 	lw	t6,116(a0)
  425ef8:	00808025 	move	s0,a0
  425efc:	000ec0c0 	sll	t8,t6,0x3
  425f00:	070100cd 	bgez	t8,426238 <draw_second_pick+0x360>
  425f04:	8fbf004c 	lw	ra,76(sp)
  425f08:	8f9981e4 	lw	t9,-32284(gp)
  425f0c:	24040002 	li	a0,2
  425f10:	0320f809 	jalr	t9
  425f14:	00000000 	nop
  425f18:	8fbc0048 	lw	gp,72(sp)
  425f1c:	8604005e 	lh	a0,94(s0)
  425f20:	8f998250 	lw	t9,-32176(gp)
  425f24:	00000000 	nop
  425f28:	0320f809 	jalr	t9
  425f2c:	00000000 	nop
  425f30:	86080076 	lh	t0,118(s0)
  425f34:	8fbc0048 	lw	gp,72(sp)
  425f38:	0501002f 	bgez	t0,425ff8 <draw_second_pick+0x120>
  425f3c:	3c014010 	lui	at,0x4010
  425f40:	44810800 	mtc1	at,$f1
  425f44:	8f818a38 	lw	at,-30152(gp)
  425f48:	44800000 	mtc1	zero,$f0
  425f4c:	c4240000 	lwc1	$f4,0(at)
  425f50:	8f818a30 	lw	at,-30160(gp)
  425f54:	460021a1 	cvt.d.s	$f6,$f4
  425f58:	c4280000 	lwc1	$f8,0(at)
  425f5c:	8f818a2c 	lw	at,-30164(gp)
  425f60:	460042a1 	cvt.d.s	$f10,$f8
  425f64:	c4300000 	lwc1	$f16,0(at)
  425f68:	46203382 	mul.d	$f14,$f6,$f0
  425f6c:	460084a1 	cvt.d.s	$f18,$f16
  425f70:	46325101 	sub.d	$f4,$f10,$f18
  425f74:	3c014000 	lui	at,0x4000
  425f78:	44814800 	mtc1	at,$f9
  425f7c:	46202183 	div.d	$f6,$f4,$f0
  425f80:	8f8a8a24 	lw	t2,-30172(gp)
  425f84:	8f998708 	lw	t9,-30968(gp)
  425f88:	8d4a0188 	lw	t2,392(t2)
  425f8c:	44806800 	mtc1	zero,$f13
  425f90:	44806000 	mtc1	zero,$f12
  425f94:	24090001 	li	t1,1
  425f98:	e7a60014 	swc1	$f6,20(sp)
  425f9c:	e7a70010 	swc1	$f7,16(sp)
  425fa0:	c6080034 	lwc1	$f8,52(s0)
  425fa4:	00000000 	nop
  425fa8:	46004421 	cvt.d.s	$f16,$f8
  425fac:	e7b0001c 	swc1	$f16,28(sp)
  425fb0:	e7b10018 	swc1	$f17,24(sp)
  425fb4:	c60a0038 	lwc1	$f10,56(s0)
  425fb8:	afa00028 	sw	zero,40(sp)
  425fbc:	460054a1 	cvt.d.s	$f18,$f10
  425fc0:	e7b20024 	swc1	$f18,36(sp)
  425fc4:	e7b30020 	swc1	$f19,32(sp)
  425fc8:	c604003c 	lwc1	$f4,60(s0)
  425fcc:	44804000 	mtc1	zero,$f8
  425fd0:	460021a1 	cvt.d.s	$f6,$f4
  425fd4:	00000000 	nop
  425fd8:	46283403 	div.d	$f16,$f6,$f8
  425fdc:	afa90038 	sw	t1,56(sp)
  425fe0:	afaa003c 	sw	t2,60(sp)
  425fe4:	e7b00034 	swc1	$f16,52(sp)
  425fe8:	0320f809 	jalr	t9
  425fec:	e7b10030 	swc1	$f17,48(sp)
  425ff0:	8fbc0048 	lw	gp,72(sp)
  425ff4:	00000000 	nop
  425ff8:	8f9984b8 	lw	t9,-31560(gp)
  425ffc:	00000000 	nop
  426000:	0320f809 	jalr	t9
  426004:	00000000 	nop
  426008:	8fbc0048 	lw	gp,72(sp)
  42600c:	c60c0034 	lwc1	$f12,52(s0)
  426010:	8f9984a0 	lw	t9,-31584(gp)
  426014:	c60e0038 	lwc1	$f14,56(s0)
  426018:	0320f809 	jalr	t9
  42601c:	24060000 	li	a2,0
  426020:	8fbc0048 	lw	gp,72(sp)
  426024:	3c013f80 	lui	at,0x3f80
  426028:	44817000 	mtc1	at,$f14
  42602c:	8f998494 	lw	t9,-31596(gp)
  426030:	c60c0058 	lwc1	$f12,88(s0)
  426034:	44067000 	mfc1	a2,$f14
  426038:	0320f809 	jalr	t9
  42603c:	00000000 	nop
  426040:	8fbc0048 	lw	gp,72(sp)
  426044:	00000000 	nop
  426048:	8f9984b8 	lw	t9,-31560(gp)
  42604c:	00000000 	nop
  426050:	0320f809 	jalr	t9
  426054:	00000000 	nop
  426058:	8fbc0048 	lw	gp,72(sp)
  42605c:	c60c003c 	lwc1	$f12,60(s0)
  426060:	8f998494 	lw	t9,-31596(gp)
  426064:	8e060024 	lw	a2,36(s0)
  426068:	0320f809 	jalr	t9
  42606c:	46006386 	mov.s	$f14,$f12
  426070:	8fbc0048 	lw	gp,72(sp)
  426074:	00002025 	move	a0,zero
  426078:	8f9986b4 	lw	t9,-31052(gp)
  42607c:	00002825 	move	a1,zero
  426080:	0320f809 	jalr	t9
  426084:	2406001f 	li	a2,31
  426088:	8fbc0048 	lw	gp,72(sp)
  42608c:	00000000 	nop
  426090:	8f9984d8 	lw	t9,-31528(gp)
  426094:	00000000 	nop
  426098:	0320f809 	jalr	t9
  42609c:	00000000 	nop
  4260a0:	8fbc0048 	lw	gp,72(sp)
  4260a4:	44806000 	mtc1	zero,$f12
  4260a8:	8f9984a0 	lw	t9,-31584(gp)
  4260ac:	8e060024 	lw	a2,36(s0)
  4260b0:	0320f809 	jalr	t9
  4260b4:	46006386 	mov.s	$f14,$f12
  4260b8:	8fbc0048 	lw	gp,72(sp)
  4260bc:	02002025 	move	a0,s0
  4260c0:	8f9986c0 	lw	t9,-31040(gp)
  4260c4:	24050001 	li	a1,1
  4260c8:	24060007 	li	a2,7
  4260cc:	0320f809 	jalr	t9
  4260d0:	2407001f 	li	a3,31
  4260d4:	8fbc0048 	lw	gp,72(sp)
  4260d8:	00000000 	nop
  4260dc:	8f998218 	lw	t9,-32232(gp)
  4260e0:	00000000 	nop
  4260e4:	0320f809 	jalr	t9
  4260e8:	00000000 	nop
  4260ec:	8fbc0048 	lw	gp,72(sp)
  4260f0:	00000000 	nop
  4260f4:	8f9984d8 	lw	t9,-31528(gp)
  4260f8:	00000000 	nop
  4260fc:	0320f809 	jalr	t9
  426100:	00000000 	nop
  426104:	8e0b0028 	lw	t3,40(s0)
  426108:	8fbc0048 	lw	gp,72(sp)
  42610c:	1160004a 	beqz	t3,426238 <draw_second_pick+0x360>
  426110:	8fbf004c 	lw	ra,76(sp)
  426114:	8f9981e4 	lw	t9,-32284(gp)
  426118:	24040001 	li	a0,1
  42611c:	0320f809 	jalr	t9
  426120:	00000000 	nop
  426124:	8fbc0048 	lw	gp,72(sp)
  426128:	8604005e 	lh	a0,94(s0)
  42612c:	8f998250 	lw	t9,-32176(gp)
  426130:	00000000 	nop
  426134:	0320f809 	jalr	t9
  426138:	00000000 	nop
  42613c:	8e020028 	lw	v0,40(s0)
  426140:	c604004c 	lwc1	$f4,76(s0)
  426144:	c44a0034 	lwc1	$f10,52(v0)
  426148:	460021a1 	cvt.d.s	$f6,$f4
  42614c:	460054a1 	cvt.d.s	$f18,$f10
  426150:	46269200 	add.d	$f8,$f18,$f6
  426154:	8fbc0048 	lw	gp,72(sp)
  426158:	46204420 	cvt.s.d	$f16,$f8
  42615c:	8f81805c 	lw	at,-32676(gp)
  426160:	e7b00064 	swc1	$f16,100(sp)
  426164:	c6120050 	lwc1	$f18,80(s0)
  426168:	c44a0038 	lwc1	$f10,56(v0)
  42616c:	460091a1 	cvt.d.s	$f6,$f18
  426170:	46005121 	cvt.d.s	$f4,$f10
  426174:	46262200 	add.d	$f8,$f4,$f6
  426178:	c420bb80 	lwc1	$f0,-17536(at)
  42617c:	46204420 	cvt.s.d	$f16,$f8
  426180:	e7a0006c 	swc1	$f0,108(sp)
  426184:	e7b00068 	swc1	$f16,104(sp)
  426188:	c60a0034 	lwc1	$f10,52(s0)
  42618c:	3c014000 	lui	at,0x4000
  426190:	e7aa0058 	swc1	$f10,88(sp)
  426194:	c612003c 	lwc1	$f18,60(s0)
  426198:	44813800 	mtc1	at,$f7
  42619c:	44803000 	mtc1	zero,$f6
  4261a0:	46009121 	cvt.d.s	$f4,$f18
  4261a4:	00000000 	nop
  4261a8:	46262203 	div.d	$f8,$f4,$f6
  4261ac:	c6100038 	lwc1	$f16,56(s0)
  4261b0:	8f998484 	lw	t9,-31612(gp)
  4261b4:	460082a1 	cvt.d.s	$f10,$f16
  4261b8:	e7a00060 	swc1	$f0,96(sp)
  4261bc:	46285481 	sub.d	$f18,$f10,$f8
  4261c0:	46209120 	cvt.s.d	$f4,$f18
  4261c4:	0320f809 	jalr	t9
  4261c8:	e7a4005c 	swc1	$f4,92(sp)
  4261cc:	8fbc0048 	lw	gp,72(sp)
  4261d0:	27a40064 	addiu	a0,sp,100
  4261d4:	8f998240 	lw	t9,-32192(gp)
  4261d8:	00000000 	nop
  4261dc:	0320f809 	jalr	t9
  4261e0:	00000000 	nop
  4261e4:	8fbc0048 	lw	gp,72(sp)
  4261e8:	27a40058 	addiu	a0,sp,88
  4261ec:	8f998240 	lw	t9,-32192(gp)
  4261f0:	00000000 	nop
  4261f4:	0320f809 	jalr	t9
  4261f8:	00000000 	nop
  4261fc:	8fbc0048 	lw	gp,72(sp)
  426200:	00000000 	nop
  426204:	8f99846c 	lw	t9,-31636(gp)
  426208:	00000000 	nop
  42620c:	0320f809 	jalr	t9
  426210:	00000000 	nop
  426214:	8fbc0048 	lw	gp,72(sp)
  426218:	00000000 	nop
  42621c:	8f998218 	lw	t9,-32232(gp)
  426220:	00000000 	nop
  426224:	0320f809 	jalr	t9
  426228:	00000000 	nop
  42622c:	8fbc0048 	lw	gp,72(sp)
  426230:	00000000 	nop
  426234:	8fbf004c 	lw	ra,76(sp)
  426238:	8fb00044 	lw	s0,68(sp)
  42623c:	03e00008 	jr	ra
  426240:	27bd0070 	addiu	sp,sp,112
