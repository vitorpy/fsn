# Function: layout_db
# Address: 0x00411e98 - 0x00412234
# Size: 0x39c (924 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411e98 <layout_db>:
  411e98:	3c1c0fc1 	lui	gp,0xfc1
  411e9c:	279cbc98 	addiu	gp,gp,-17256
  411ea0:	0399e021 	addu	gp,gp,t9
  411ea4:	8f9987b8 	lw	t9,-30792(gp)
  411ea8:	27bdffd8 	addiu	sp,sp,-40
  411eac:	afbf0024 	sw	ra,36(sp)
  411eb0:	afbc0020 	sw	gp,32(sp)
  411eb4:	0320f809 	jalr	t9
  411eb8:	afb0001c 	sw	s0,28(sp)
  411ebc:	8fbc0020 	lw	gp,32(sp)
  411ec0:	00000000 	nop
  411ec4:	8f84806c 	lw	a0,-32660(gp)
  411ec8:	8f9980e0 	lw	t9,-32544(gp)
  411ecc:	248466ac 	addiu	a0,a0,26284
  411ed0:	0320f809 	jalr	t9
  411ed4:	00000000 	nop
  411ed8:	8fbc0020 	lw	gp,32(sp)
  411edc:	44802000 	mtc1	zero,$f4
  411ee0:	8f818a34 	lw	at,-30156(gp)
  411ee4:	8f8e8924 	lw	t6,-30428(gp)
  411ee8:	e4240000 	swc1	$f4,0(at)
  411eec:	8f818a38 	lw	at,-30152(gp)
  411ef0:	8dce0000 	lw	t6,0(t6)
  411ef4:	e4240000 	swc1	$f4,0(at)
  411ef8:	8f818a2c 	lw	at,-30164(gp)
  411efc:	00000000 	nop
  411f00:	e4240000 	swc1	$f4,0(at)
  411f04:	8f818a30 	lw	at,-30160(gp)
  411f08:	15c00006 	bnez	t6,411f24 <layout_db+0x8c>
  411f0c:	e4240000 	swc1	$f4,0(at)
  411f10:	3c013f80 	lui	at,0x3f80
  411f14:	44813000 	mtc1	at,$f6
  411f18:	8f81806c 	lw	at,-32660(gp)
  411f1c:	10000012 	b	411f68 <layout_db+0xd0>
  411f20:	e42666b0 	swc1	$f6,26288(at)
  411f24:	8f848068 	lw	a0,-32664(gp)
  411f28:	8f998018 	lw	t9,-32744(gp)
  411f2c:	8c840184 	lw	a0,388(a0)
  411f30:	27391774 	addiu	t9,t9,6004
  411f34:	0320f809 	jalr	t9
  411f38:	00000000 	nop
  411f3c:	8fbc0020 	lw	gp,32(sp)
  411f40:	46000421 	cvt.d.s	$f16,$f0
  411f44:	8f818a24 	lw	at,-30172(gp)
  411f48:	00000000 	nop
  411f4c:	c4280068 	lwc1	$f8,104(at)
  411f50:	8f81806c 	lw	at,-32660(gp)
  411f54:	460042a1 	cvt.d.s	$f10,$f8
  411f58:	00000000 	nop
  411f5c:	46305483 	div.d	$f18,$f10,$f16
  411f60:	46209120 	cvt.s.d	$f4,$f18
  411f64:	e42466b0 	swc1	$f4,26288(at)
  411f68:	8f90892c 	lw	s0,-30420(gp)
  411f6c:	00000000 	nop
  411f70:	8e0f0000 	lw	t7,0(s0)
  411f74:	00000000 	nop
  411f78:	ade0002c 	sw	zero,44(t7)
  411f7c:	8e180000 	lw	t8,0(s0)
  411f80:	00000000 	nop
  411f84:	af000030 	sw	zero,48(t8)
  411f88:	8f998590 	lw	t9,-31344(gp)
  411f8c:	8e040000 	lw	a0,0(s0)
  411f90:	0320f809 	jalr	t9
  411f94:	00000000 	nop
  411f98:	8fbc0020 	lw	gp,32(sp)
  411f9c:	3c013f80 	lui	at,0x3f80
  411fa0:	8f998924 	lw	t9,-30428(gp)
  411fa4:	44810000 	mtc1	at,$f0
  411fa8:	8f390000 	lw	t9,0(t9)
  411fac:	00000000 	nop
  411fb0:	17200004 	bnez	t9,411fc4 <layout_db+0x12c>
  411fb4:	00000000 	nop
  411fb8:	8f81806c 	lw	at,-32660(gp)
  411fbc:	10000033 	b	41208c <layout_db+0x1f4>
  411fc0:	e42066b0 	swc1	$f0,26288(at)
  411fc4:	8f828928 	lw	v0,-30424(gp)
  411fc8:	24010001 	li	at,1
  411fcc:	8c420000 	lw	v0,0(v0)
  411fd0:	00000000 	nop
  411fd4:	10400007 	beqz	v0,411ff4 <layout_db+0x15c>
  411fd8:	00000000 	nop
  411fdc:	10410008 	beq	v0,at,412000 <layout_db+0x168>
  411fe0:	24010002 	li	at,2
  411fe4:	10410018 	beq	v0,at,412048 <layout_db+0x1b0>
  411fe8:	00000000 	nop
  411fec:	10000004 	b	412000 <layout_db+0x168>
  411ff0:	00000000 	nop
  411ff4:	8f81806c 	lw	at,-32660(gp)
  411ff8:	10000024 	b	41208c <layout_db+0x1f4>
  411ffc:	e42066b4 	swc1	$f0,26292(at)
  412000:	8f848068 	lw	a0,-32664(gp)
  412004:	8f998018 	lw	t9,-32744(gp)
  412008:	8c84018c 	lw	a0,396(a0)
  41200c:	27391774 	addiu	t9,t9,6004
  412010:	0320f809 	jalr	t9
  412014:	00000000 	nop
  412018:	8fbc0020 	lw	gp,32(sp)
  41201c:	460002a1 	cvt.d.s	$f10,$f0
  412020:	8f818a24 	lw	at,-30172(gp)
  412024:	00000000 	nop
  412028:	c426006c 	lwc1	$f6,108(at)
  41202c:	8f81806c 	lw	at,-32660(gp)
  412030:	46003221 	cvt.d.s	$f8,$f6
  412034:	00000000 	nop
  412038:	462a4403 	div.d	$f16,$f8,$f10
  41203c:	462084a0 	cvt.s.d	$f18,$f16
  412040:	10000012 	b	41208c <layout_db+0x1f4>
  412044:	e43266b4 	swc1	$f18,26292(at)
  412048:	8e080000 	lw	t0,0(s0)
  41204c:	8f998018 	lw	t9,-32744(gp)
  412050:	8d040020 	lw	a0,32(t0)
  412054:	27391774 	addiu	t9,t9,6004
  412058:	0320f809 	jalr	t9
  41205c:	00000000 	nop
  412060:	8fbc0020 	lw	gp,32(sp)
  412064:	46000221 	cvt.d.s	$f8,$f0
  412068:	8f818a24 	lw	at,-30172(gp)
  41206c:	00000000 	nop
  412070:	c424006c 	lwc1	$f4,108(at)
  412074:	8f81806c 	lw	at,-32660(gp)
  412078:	460021a1 	cvt.d.s	$f6,$f4
  41207c:	00000000 	nop
  412080:	46283283 	div.d	$f10,$f6,$f8
  412084:	46205420 	cvt.s.d	$f16,$f10
  412088:	e43066b4 	swc1	$f16,26292(at)
  41208c:	8e090000 	lw	t1,0(s0)
  412090:	3c014000 	lui	at,0x4000
  412094:	c532003c 	lwc1	$f18,60(t1)
  412098:	44813800 	mtc1	at,$f7
  41209c:	44803000 	mtc1	zero,$f6
  4120a0:	46009121 	cvt.d.s	$f4,$f18
  4120a4:	00000000 	nop
  4120a8:	46262203 	div.d	$f8,$f4,$f6
  4120ac:	8f828a24 	lw	v0,-30172(gp)
  4120b0:	8f99849c 	lw	t9,-31588(gp)
  4120b4:	c44a0108 	lwc1	$f10,264(v0)
  4120b8:	c44c0104 	lwc1	$f12,260(v0)
  4120bc:	46005421 	cvt.d.s	$f16,$f10
  4120c0:	00000000 	nop
  4120c4:	46304483 	div.d	$f18,$f8,$f16
  4120c8:	0320f809 	jalr	t9
  4120cc:	462093a0 	cvt.s.d	$f14,$f18
  4120d0:	3c013ff0 	lui	at,0x3ff0
  4120d4:	44812800 	mtc1	at,$f5
  4120d8:	44802000 	mtc1	zero,$f4
  4120dc:	460001a1 	cvt.d.s	$f6,$f0
  4120e0:	00000000 	nop
  4120e4:	46262283 	div.d	$f10,$f4,$f6
  4120e8:	8fbc0020 	lw	gp,32(sp)
  4120ec:	8e040000 	lw	a0,0(s0)
  4120f0:	8f998594 	lw	t9,-31340(gp)
  4120f4:	24060000 	li	a2,0
  4120f8:	24070000 	li	a3,0
  4120fc:	e7aa0014 	swc1	$f10,20(sp)
  412100:	0320f809 	jalr	t9
  412104:	e7ab0010 	swc1	$f11,16(sp)
  412108:	8fbc0020 	lw	gp,32(sp)
  41210c:	8e040000 	lw	a0,0(s0)
  412110:	8f998598 	lw	t9,-31336(gp)
  412114:	24060000 	li	a2,0
  412118:	0320f809 	jalr	t9
  41211c:	24070000 	li	a3,0
  412120:	8fbc0020 	lw	gp,32(sp)
  412124:	00000000 	nop
  412128:	8f828a24 	lw	v0,-30172(gp)
  41212c:	8f818a38 	lw	at,-30152(gp)
  412130:	c4520108 	lwc1	$f18,264(v0)
  412134:	c4280000 	lwc1	$f8,0(at)
  412138:	46009121 	cvt.d.s	$f4,$f18
  41213c:	46004421 	cvt.d.s	$f16,$f8
  412140:	00000000 	nop
  412144:	46248183 	div.d	$f6,$f16,$f4
  412148:	8f99849c 	lw	t9,-31588(gp)
  41214c:	c44c0104 	lwc1	$f12,260(v0)
  412150:	0320f809 	jalr	t9
  412154:	462033a0 	cvt.s.d	$f14,$f6
  412158:	8fbc0020 	lw	gp,32(sp)
  41215c:	3c014024 	lui	at,0x4024
  412160:	44811800 	mtc1	at,$f3
  412164:	8f818a48 	lw	at,-30136(gp)
  412168:	44801000 	mtc1	zero,$f2
  41216c:	e4200000 	swc1	$f0,0(at)
  412170:	8f818a30 	lw	at,-30160(gp)
  412174:	8f9987c4 	lw	t9,-30780(gp)
  412178:	c42a0000 	lwc1	$f10,0(at)
  41217c:	00000000 	nop
  412180:	46005221 	cvt.d.s	$f8,$f10
  412184:	46224480 	add.d	$f18,$f8,$f2
  412188:	46209420 	cvt.s.d	$f16,$f18
  41218c:	e4300000 	swc1	$f16,0(at)
  412190:	8f818a2c 	lw	at,-30164(gp)
  412194:	00000000 	nop
  412198:	c4240000 	lwc1	$f4,0(at)
  41219c:	00000000 	nop
  4121a0:	460021a1 	cvt.d.s	$f6,$f4
  4121a4:	46223281 	sub.d	$f10,$f6,$f2
  4121a8:	46205220 	cvt.s.d	$f8,$f10
  4121ac:	e4280000 	swc1	$f8,0(at)
  4121b0:	8f818a38 	lw	at,-30152(gp)
  4121b4:	00000000 	nop
  4121b8:	c4320000 	lwc1	$f18,0(at)
  4121bc:	00000000 	nop
  4121c0:	46009421 	cvt.d.s	$f16,$f18
  4121c4:	46228100 	add.d	$f4,$f16,$f2
  4121c8:	44808000 	mtc1	zero,$f16
  4121cc:	462021a0 	cvt.s.d	$f6,$f4
  4121d0:	e4260000 	swc1	$f6,0(at)
  4121d4:	8e0a0000 	lw	t2,0(s0)
  4121d8:	3c014000 	lui	at,0x4000
  4121dc:	c54a003c 	lwc1	$f10,60(t2)
  4121e0:	44818800 	mtc1	at,$f17
  4121e4:	46005207 	neg.s	$f8,$f10
  4121e8:	460044a1 	cvt.d.s	$f18,$f8
  4121ec:	00000000 	nop
  4121f0:	46309103 	div.d	$f4,$f18,$f16
  4121f4:	8f818a34 	lw	at,-30156(gp)
  4121f8:	46222181 	sub.d	$f6,$f4,$f2
  4121fc:	462032a0 	cvt.s.d	$f10,$f6
  412200:	0320f809 	jalr	t9
  412204:	e42a0000 	swc1	$f10,0(at)
  412208:	8fbc0020 	lw	gp,32(sp)
  41220c:	00000000 	nop
  412210:	8f998688 	lw	t9,-31096(gp)
  412214:	00000000 	nop
  412218:	0320f809 	jalr	t9
  41221c:	00000000 	nop
  412220:	8fbf0024 	lw	ra,36(sp)
  412224:	8fbc0020 	lw	gp,32(sp)
  412228:	8fb0001c 	lw	s0,28(sp)
  41222c:	03e00008 	jr	ra
  412230:	27bd0028 	addiu	sp,sp,40
