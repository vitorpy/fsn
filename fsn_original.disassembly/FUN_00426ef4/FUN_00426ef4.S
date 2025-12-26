# Function: FUN_00426ef4
# Address: 0x00426ef4 - 0x00427280
# Size: 0x38c (908 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00426ef4 <highlightDirLandscape+0xc>:
  426ef4:	8f8e897c 	lw	t6,-30340(gp)
  426ef8:	27bdff90 	addiu	sp,sp,-112
  426efc:	8dce0000 	lw	t6,0(t6)
  426f00:	afbf001c 	sw	ra,28(sp)
  426f04:	afbc0018 	sw	gp,24(sp)
  426f08:	afb00014 	sw	s0,20(sp)
  426f0c:	8dcf0044 	lw	t7,68(t6)
  426f10:	00808025 	move	s0,a0
  426f14:	108f00d7 	beq	a0,t7,427274 <highlightDirLandscape+0x38c>
  426f18:	8fbf001c 	lw	ra,28(sp)
  426f1c:	8f9984b8 	lw	t9,-31560(gp)
  426f20:	afa00050 	sw	zero,80(sp)
  426f24:	0320f809 	jalr	t9
  426f28:	00000000 	nop
  426f2c:	8fbc0018 	lw	gp,24(sp)
  426f30:	c60c0034 	lwc1	$f12,52(s0)
  426f34:	8f9984a0 	lw	t9,-31584(gp)
  426f38:	c60e0038 	lwc1	$f14,56(s0)
  426f3c:	0320f809 	jalr	t9
  426f40:	24060000 	li	a2,0
  426f44:	8fbc0018 	lw	gp,24(sp)
  426f48:	3c013f80 	lui	at,0x3f80
  426f4c:	44817000 	mtc1	at,$f14
  426f50:	8f998494 	lw	t9,-31596(gp)
  426f54:	c60c0058 	lwc1	$f12,88(s0)
  426f58:	44067000 	mfc1	a2,$f14
  426f5c:	0320f809 	jalr	t9
  426f60:	00000000 	nop
  426f64:	8e180074 	lw	t8,116(s0)
  426f68:	8fbc0018 	lw	gp,24(sp)
  426f6c:	8fa70050 	lw	a3,80(sp)
  426f70:	00184340 	sll	t0,t8,0xd
  426f74:	05010014 	bgez	t0,426fc8 <highlightDirLandscape+0xe0>
  426f78:	3c014000 	lui	at,0x4000
  426f7c:	c600003c 	lwc1	$f0,60(s0)
  426f80:	44818800 	mtc1	at,$f17
  426f84:	44808000 	mtc1	zero,$f16
  426f88:	460002a1 	cvt.d.s	$f10,$f0
  426f8c:	00000000 	nop
  426f90:	46305483 	div.d	$f18,$f10,$f16
  426f94:	46000107 	neg.s	$f4,$f0
  426f98:	460021a1 	cvt.d.s	$f6,$f4
  426f9c:	8f998210 	lw	t9,-32240(gp)
  426fa0:	46303203 	div.d	$f8,$f6,$f16
  426fa4:	462090a0 	cvt.s.d	$f2,$f18
  426fa8:	44061000 	mfc1	a2,$f2
  426fac:	44071000 	mfc1	a3,$f2
  426fb0:	46204320 	cvt.s.d	$f12,$f8
  426fb4:	0320f809 	jalr	t9
  426fb8:	46006386 	mov.s	$f14,$f12
  426fbc:	8fbc0018 	lw	gp,24(sp)
  426fc0:	10000043 	b	4270d0 <highlightDirLandscape+0x1e8>
  426fc4:	00000000 	nop
  426fc8:	c60c003c 	lwc1	$f12,60(s0)
  426fcc:	8f998494 	lw	t9,-31596(gp)
  426fd0:	8e060024 	lw	a2,36(s0)
  426fd4:	afa70050 	sw	a3,80(sp)
  426fd8:	0320f809 	jalr	t9
  426fdc:	46006386 	mov.s	$f14,$f12
  426fe0:	8fbc0018 	lw	gp,24(sp)
  426fe4:	c6080024 	lwc1	$f8,36(s0)
  426fe8:	8f82897c 	lw	v0,-30340(gp)
  426fec:	460042a1 	cvt.d.s	$f10,$f8
  426ff0:	8c420000 	lw	v0,0(v0)
  426ff4:	3c014000 	lui	at,0x4000
  426ff8:	c4440008 	lwc1	$f4,8(v0)
  426ffc:	8fa70050 	lw	a3,80(sp)
  427000:	460021a1 	cvt.d.s	$f6,$f4
  427004:	4626503e 	c.le.d	$f10,$f6
  427008:	44813800 	mtc1	at,$f7
  42700c:	45000002 	bc1f	427018 <highlightDirLandscape+0x130>
  427010:	00002025 	move	a0,zero
  427014:	24070010 	li	a3,16
  427018:	c604003c 	lwc1	$f4,60(s0)
  42701c:	44803000 	mtc1	zero,$f6
  427020:	46002221 	cvt.d.s	$f8,$f4
  427024:	00000000 	nop
  427028:	46264383 	div.d	$f14,$f8,$f6
  42702c:	c6120034 	lwc1	$f18,52(s0)
  427030:	c60a0058 	lwc1	$f10,88(s0)
  427034:	46009021 	cvt.d.s	$f0,$f18
  427038:	460054a1 	cvt.d.s	$f18,$f10
  42703c:	c4440000 	lwc1	$f4,0(v0)
  427040:	34e90002 	ori	t1,a3,0x2
  427044:	46002321 	cvt.d.s	$f12,$f4
  427048:	46327082 	mul.d	$f2,$f14,$f18
  42704c:	46220201 	sub.d	$f8,$f0,$f2
  427050:	4628603e 	c.le.d	$f12,$f8
  427054:	46220180 	add.d	$f6,$f0,$f2
  427058:	45000002 	bc1f	427064 <highlightDirLandscape+0x17c>
  42705c:	00000000 	nop
  427060:	01203825 	move	a3,t1
  427064:	462c303e 	c.le.d	$f6,$f12
  427068:	34ea0004 	ori	t2,a3,0x4
  42706c:	45000002 	bc1f	427078 <highlightDirLandscape+0x190>
  427070:	00000000 	nop
  427074:	01403825 	move	a3,t2
  427078:	c60a0038 	lwc1	$f10,56(s0)
  42707c:	c4520004 	lwc1	$f18,4(v0)
  427080:	46005021 	cvt.d.s	$f0,$f10
  427084:	462e0101 	sub.d	$f4,$f0,$f14
  427088:	34eb0001 	ori	t3,a3,0x1
  42708c:	460090a1 	cvt.d.s	$f2,$f18
  427090:	4624103e 	c.le.d	$f2,$f4
  427094:	462e0200 	add.d	$f8,$f0,$f14
  427098:	45000002 	bc1f	4270a4 <highlightDirLandscape+0x1bc>
  42709c:	00000000 	nop
  4270a0:	01603825 	move	a3,t3
  4270a4:	4622403e 	c.le.d	$f8,$f2
  4270a8:	34ec0008 	ori	t4,a3,0x8
  4270ac:	45000002 	bc1f	4270b8 <highlightDirLandscape+0x1d0>
  4270b0:	00000000 	nop
  4270b4:	01803825 	move	a3,t4
  4270b8:	8f9986b4 	lw	t9,-31052(gp)
  4270bc:	24050001 	li	a1,1
  4270c0:	0320f809 	jalr	t9
  4270c4:	00e03025 	move	a2,a3
  4270c8:	8fbc0018 	lw	gp,24(sp)
  4270cc:	00000000 	nop
  4270d0:	8f9984d8 	lw	t9,-31528(gp)
  4270d4:	00000000 	nop
  4270d8:	0320f809 	jalr	t9
  4270dc:	00000000 	nop
  4270e0:	8e030028 	lw	v1,40(s0)
  4270e4:	8fbc0018 	lw	gp,24(sp)
  4270e8:	10600062 	beqz	v1,427274 <highlightDirLandscape+0x38c>
  4270ec:	8fbf001c 	lw	ra,28(sp)
  4270f0:	c4660034 	lwc1	$f6,52(v1)
  4270f4:	c612004c 	lwc1	$f18,76(s0)
  4270f8:	460032a1 	cvt.d.s	$f10,$f6
  4270fc:	46009121 	cvt.d.s	$f4,$f18
  427100:	46245200 	add.d	$f8,$f10,$f4
  427104:	8f81805c 	lw	at,-32676(gp)
  427108:	462041a0 	cvt.s.d	$f6,$f8
  42710c:	c420bb84 	lwc1	$f0,-17532(at)
  427110:	e7a60064 	swc1	$f6,100(sp)
  427114:	c6040050 	lwc1	$f4,80(s0)
  427118:	c4720038 	lwc1	$f18,56(v1)
  42711c:	46002221 	cvt.d.s	$f8,$f4
  427120:	460092a1 	cvt.d.s	$f10,$f18
  427124:	46285180 	add.d	$f6,$f10,$f8
  427128:	e7a0006c 	swc1	$f0,108(sp)
  42712c:	462034a0 	cvt.s.d	$f18,$f6
  427130:	3c014000 	lui	at,0x4000
  427134:	e7b20068 	swc1	$f18,104(sp)
  427138:	c6040034 	lwc1	$f4,52(s0)
  42713c:	44813800 	mtc1	at,$f7
  427140:	e7a40058 	swc1	$f4,88(sp)
  427144:	c60a003c 	lwc1	$f10,60(s0)
  427148:	44803000 	mtc1	zero,$f6
  42714c:	46005221 	cvt.d.s	$f8,$f10
  427150:	00000000 	nop
  427154:	46264483 	div.d	$f18,$f8,$f6
  427158:	c6040038 	lwc1	$f4,56(s0)
  42715c:	8f998484 	lw	t9,-31612(gp)
  427160:	460022a1 	cvt.d.s	$f10,$f4
  427164:	afa30054 	sw	v1,84(sp)
  427168:	e7a00060 	swc1	$f0,96(sp)
  42716c:	46325201 	sub.d	$f8,$f10,$f18
  427170:	462041a0 	cvt.s.d	$f6,$f8
  427174:	0320f809 	jalr	t9
  427178:	e7a6005c 	swc1	$f6,92(sp)
  42717c:	8fbc0018 	lw	gp,24(sp)
  427180:	8fb00054 	lw	s0,84(sp)
  427184:	8f998240 	lw	t9,-32192(gp)
  427188:	27a40064 	addiu	a0,sp,100
  42718c:	0320f809 	jalr	t9
  427190:	00000000 	nop
  427194:	8fbc0018 	lw	gp,24(sp)
  427198:	27a40058 	addiu	a0,sp,88
  42719c:	8f998240 	lw	t9,-32192(gp)
  4271a0:	00000000 	nop
  4271a4:	0320f809 	jalr	t9
  4271a8:	00000000 	nop
  4271ac:	8fbc0018 	lw	gp,24(sp)
  4271b0:	00000000 	nop
  4271b4:	8f99846c 	lw	t9,-31636(gp)
  4271b8:	00000000 	nop
  4271bc:	0320f809 	jalr	t9
  4271c0:	00000000 	nop
  4271c4:	8fbc0018 	lw	gp,24(sp)
  4271c8:	00002025 	move	a0,zero
  4271cc:	8f998304 	lw	t9,-31996(gp)
  4271d0:	00000000 	nop
  4271d4:	0320f809 	jalr	t9
  4271d8:	00000000 	nop
  4271dc:	8fbc0018 	lw	gp,24(sp)
  4271e0:	00000000 	nop
  4271e4:	8f9984b8 	lw	t9,-31560(gp)
  4271e8:	00000000 	nop
  4271ec:	0320f809 	jalr	t9
  4271f0:	00000000 	nop
  4271f4:	8fbc0018 	lw	gp,24(sp)
  4271f8:	c60c0034 	lwc1	$f12,52(s0)
  4271fc:	8f9984a0 	lw	t9,-31584(gp)
  427200:	c60e0038 	lwc1	$f14,56(s0)
  427204:	0320f809 	jalr	t9
  427208:	24060000 	li	a2,0
  42720c:	c60e003c 	lwc1	$f14,60(s0)
  427210:	c60a0058 	lwc1	$f10,88(s0)
  427214:	46007121 	cvt.d.s	$f4,$f14
  427218:	460054a1 	cvt.d.s	$f18,$f10
  42721c:	46322202 	mul.d	$f8,$f4,$f18
  427220:	8fbc0018 	lw	gp,24(sp)
  427224:	8e060024 	lw	a2,36(s0)
  427228:	8f998494 	lw	t9,-31596(gp)
  42722c:	00000000 	nop
  427230:	0320f809 	jalr	t9
  427234:	46204320 	cvt.s.d	$f12,$f8
  427238:	8fbc0018 	lw	gp,24(sp)
  42723c:	00002025 	move	a0,zero
  427240:	8f9986b4 	lw	t9,-31052(gp)
  427244:	00002825 	move	a1,zero
  427248:	0320f809 	jalr	t9
  42724c:	2406001f 	li	a2,31
  427250:	8fbc0018 	lw	gp,24(sp)
  427254:	00000000 	nop
  427258:	8f9984d8 	lw	t9,-31528(gp)
  42725c:	00000000 	nop
  427260:	0320f809 	jalr	t9
  427264:	00000000 	nop
  427268:	8fbc0018 	lw	gp,24(sp)
  42726c:	00000000 	nop
  427270:	8fbf001c 	lw	ra,28(sp)
  427274:	8fb00014 	lw	s0,20(sp)
  427278:	03e00008 	jr	ra
  42727c:	27bd0070 	addiu	sp,sp,112
