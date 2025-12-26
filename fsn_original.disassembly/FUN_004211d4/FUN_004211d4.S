# Function: FUN_004211d4
# Address: 0x004211d4 - 0x004213bc
# Size: 0x1e8 (488 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004211d4 <hideOverview+0xb0>:
  4211d4:	3c1c0fc0 	lui	gp,0xfc0
  4211d8:	279cc95c 	addiu	gp,gp,-13988
  4211dc:	0399e021 	addu	gp,gp,t9
  4211e0:	27bdffb8 	addiu	sp,sp,-72
  4211e4:	8f8e897c 	lw	t6,-30340(gp)
  4211e8:	afbf003c 	sw	ra,60(sp)
  4211ec:	8dce0000 	lw	t6,0(t6)
  4211f0:	afbc0038 	sw	gp,56(sp)
  4211f4:	afa40048 	sw	a0,72(sp)
  4211f8:	afa5004c 	sw	a1,76(sp)
  4211fc:	afa60050 	sw	a2,80(sp)
  421200:	afa70054 	sw	a3,84(sp)
  421204:	8dcf003c 	lw	t7,60(t6)
  421208:	00a03025 	move	a2,a1
  42120c:	15e00068 	bnez	t7,4213b0 <hideOverview+0x28c>
  421210:	8fbf003c 	lw	ra,60(sp)
  421214:	8ca40020 	lw	a0,32(a1)
  421218:	00000000 	nop
  42121c:	04810006 	bgez	a0,421238 <hideOverview+0x114>
  421220:	00000000 	nop
  421224:	8f85806c 	lw	a1,-32660(gp)
  421228:	00002025 	move	a0,zero
  42122c:	8ca56bf8 	lw	a1,27640(a1)
  421230:	10000009 	b	421258 <hideOverview+0x134>
  421234:	00000000 	nop
  421238:	8f85806c 	lw	a1,-32660(gp)
  42123c:	00000000 	nop
  421240:	8ca56bf8 	lw	a1,27640(a1)
  421244:	00000000 	nop
  421248:	0085082a 	slt	at,a0,a1
  42124c:	14200002 	bnez	at,421258 <hideOverview+0x134>
  421250:	00000000 	nop
  421254:	24a4ffff 	addiu	a0,a1,-1
  421258:	8f83806c 	lw	v1,-32660(gp)
  42125c:	8cd80024 	lw	t8,36(a2)
  421260:	8c636bfc 	lw	v1,27644(v1)
  421264:	44843000 	mtc1	a0,$f6
  421268:	00781023 	subu	v0,v1,t8
  42126c:	2442ffff 	addiu	v0,v0,-1
  421270:	04410003 	bgez	v0,421280 <hideOverview+0x15c>
  421274:	46803220 	cvt.s.w	$f8,$f6
  421278:	10000005 	b	421290 <hideOverview+0x16c>
  42127c:	00001025 	move	v0,zero
  421280:	0043082a 	slt	at,v0,v1
  421284:	14200002 	bnez	at,421290 <hideOverview+0x16c>
  421288:	00000000 	nop
  42128c:	2462ffff 	addiu	v0,v1,-1
  421290:	8f818a2c 	lw	at,-30164(gp)
  421294:	44858000 	mtc1	a1,$f16
  421298:	c4240000 	lwc1	$f4,0(at)
  42129c:	468084a1 	cvt.d.w	$f18,$f16
  4212a0:	8f818a30 	lw	at,-30160(gp)
  4212a4:	8f99854c 	lw	t9,-31412(gp)
  4212a8:	460042a1 	cvt.d.s	$f10,$f8
  4212ac:	46002021 	cvt.d.s	$f0,$f4
  4212b0:	00000000 	nop
  4212b4:	46325103 	div.d	$f4,$f10,$f18
  4212b8:	c4260000 	lwc1	$f6,0(at)
  4212bc:	8f818a34 	lw	at,-30156(gp)
  4212c0:	46003221 	cvt.d.s	$f8,$f6
  4212c4:	46204401 	sub.d	$f16,$f8,$f0
  4212c8:	c4280000 	lwc1	$f8,0(at)
  4212cc:	8f818a38 	lw	at,-30152(gp)
  4212d0:	460040a1 	cvt.d.s	$f2,$f8
  4212d4:	46302282 	mul.d	$f10,$f4,$f16
  4212d8:	44822000 	mtc1	v0,$f4
  4212dc:	46205480 	add.d	$f18,$f10,$f0
  4212e0:	462091a0 	cvt.s.d	$f6,$f18
  4212e4:	44839000 	mtc1	v1,$f18
  4212e8:	46802420 	cvt.s.w	$f16,$f4
  4212ec:	e7a60044 	swc1	$f6,68(sp)
  4212f0:	c4240000 	lwc1	$f4,0(at)
  4212f4:	468091a1 	cvt.d.w	$f6,$f18
  4212f8:	460082a1 	cvt.d.s	$f10,$f16
  4212fc:	00000000 	nop
  421300:	46265203 	div.d	$f8,$f10,$f6
  421304:	46002421 	cvt.d.s	$f16,$f4
  421308:	46228481 	sub.d	$f18,$f16,$f2
  42130c:	46324282 	mul.d	$f10,$f8,$f18
  421310:	46225180 	add.d	$f6,$f10,$f2
  421314:	46203120 	cvt.s.d	$f4,$f6
  421318:	0320f809 	jalr	t9
  42131c:	e7a40040 	swc1	$f4,64(sp)
  421320:	8fbc0038 	lw	gp,56(sp)
  421324:	c7b20044 	lwc1	$f18,68(sp)
  421328:	8f82897c 	lw	v0,-30340(gp)
  42132c:	460092a1 	cvt.d.s	$f10,$f18
  421330:	8c420000 	lw	v0,0(v0)
  421334:	c7b20040 	lwc1	$f18,64(sp)
  421338:	c4500020 	lwc1	$f16,32(v0)
  42133c:	c4460014 	lwc1	$f6,20(v0)
  421340:	460080a1 	cvt.d.s	$f2,$f16
  421344:	46003121 	cvt.d.s	$f4,$f6
  421348:	46222402 	mul.d	$f16,$f4,$f2
  42134c:	c4480008 	lwc1	$f8,8(v0)
  421350:	c4440018 	lwc1	$f4,24(v0)
  421354:	46004021 	cvt.d.s	$f0,$f8
  421358:	e7a00014 	swc1	$f0,20(sp)
  42135c:	46208202 	mul.d	$f8,$f16,$f0
  421360:	e7a10010 	swc1	$f1,16(sp)
  421364:	46002421 	cvt.d.s	$f16,$f4
  421368:	8459000c 	lh	t9,12(v0)
  42136c:	46285300 	add.d	$f12,$f10,$f8
  421370:	afb90018 	sw	t9,24(sp)
  421374:	46228282 	mul.d	$f10,$f16,$f2
  421378:	8448000e 	lh	t0,14(v0)
  42137c:	8f998558 	lw	t9,-31400(gp)
  421380:	afa8001c 	sw	t0,28(sp)
  421384:	8c49003c 	lw	t1,60(v0)
  421388:	46205202 	mul.d	$f8,$f10,$f0
  42138c:	460091a1 	cvt.d.s	$f6,$f18
  421390:	afa00028 	sw	zero,40(sp)
  421394:	afa00024 	sw	zero,36(sp)
  421398:	afa90020 	sw	t1,32(sp)
  42139c:	0320f809 	jalr	t9
  4213a0:	46283380 	add.d	$f14,$f6,$f8
  4213a4:	8fbc0038 	lw	gp,56(sp)
  4213a8:	00000000 	nop
  4213ac:	8fbf003c 	lw	ra,60(sp)
  4213b0:	27bd0048 	addiu	sp,sp,72
  4213b4:	03e00008 	jr	ra
  4213b8:	00000000 	nop
