# Disassembly of zoomto
# Address: 0x00410258
# End: 0x00410644
# Size: 0x3ec (1004 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
# See docs/DECOMPILATION_PROCEDURE.md for analysis workflow.
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00410258 <zoomto>:
  410258:	3c1c0fc1 	lui	gp,0xfc1
  41025c:	279cd8d8 	addiu	gp,gp,-10024
  410260:	0399e021 	addu	gp,gp,t9
  410264:	27bdffd0 	addiu	sp,sp,-48
  410268:	8f998018 	lw	t9,-32744(gp)  # FUN_00410000
  41026c:	afbf002c 	sw	ra,44(sp)
  410270:	e7b70020 	swc1	$f23,32(sp)
  410274:	e7b60024 	swc1	$f22,36(sp)
  410278:	e7b50018 	swc1	$f21,24(sp)
  41027c:	e7b4001c 	swc1	$f20,28(sp)
  410280:	2739f150 	addiu	t9,t9,-3760
  410284:	46207506 	mov.d	$f20,$f14
  410288:	46206586 	mov.d	$f22,$f12
  41028c:	afbc0028 	sw	gp,40(sp)
  410290:	00002025 	move	a0,zero
  410294:	0320f809 	jalr	t9  # call FUN_00410000
  410298:	00002825 	move	a1,zero
  41029c:	8fbc0028 	lw	gp,40(sp)
  4102a0:	00000000 	nop
  4102a4:	8f99851c 	lw	t9,-31460(gp)  # FUN_0040bbe0
  4102a8:	00000000 	nop
  4102ac:	0320f809 	jalr	t9  # call FUN_0040bbe0
  4102b0:	00000000 	nop
  4102b4:	8fbc0028 	lw	gp,40(sp)
  4102b8:	8fa40050 	lw	a0,80(sp)
  4102bc:	8f83897c 	lw	v1,-30340(gp)  # curcontext
  4102c0:	00000000 	nop
  4102c4:	8c620000 	lw	v0,0(v1)
  4102c8:	00000000 	nop
  4102cc:	8c4e003c 	lw	t6,60(v0)
  4102d0:	00000000 	nop
  4102d4:	108e0042 	beq	a0,t6,4103e0 <zoomto+0x188>
  4102d8:	00000000 	nop
  4102dc:	8f8f8a24 	lw	t7,-30172(gp)  # fsn_resources
  4102e0:	00000000 	nop
  4102e4:	91ef0002 	lbu	t7,2(t7)
  4102e8:	00000000 	nop
  4102ec:	11e0000b 	beqz	t7,41031c <zoomto+0xc4>
  4102f0:	00000000 	nop
  4102f4:	8f998554 	lw	t9,-31404(gp)  # FUN_004101e4
  4102f8:	00000000 	nop
  4102fc:	0320f809 	jalr	t9  # call FUN_004101e4
  410300:	00000000 	nop
  410304:	8fbc0028 	lw	gp,40(sp)
  410308:	8fa40050 	lw	a0,80(sp)
  41030c:	8f83897c 	lw	v1,-30340(gp)  # curcontext
  410310:	00000000 	nop
  410314:	8c620000 	lw	v0,0(v1)
  410318:	00000000 	nop
  41031c:	10800009 	beqz	a0,410344 <zoomto+0xec>
  410320:	ac44003c 	sw	a0,60(v0)
  410324:	8f99863c 	lw	t9,-31172(gp)  # FUN_0041d69c
  410328:	00000000 	nop
  41032c:	0320f809 	jalr	t9  # call FUN_0041d69c
  410330:	00000000 	nop
  410334:	8fbc0028 	lw	gp,40(sp)
  410338:	00000000 	nop
  41033c:	8f83897c 	lw	v1,-30340(gp)  # curcontext
  410340:	00000000 	nop
  410344:	4620b120 	cvt.s.d	$f4,$f22
  410348:	8c780000 	lw	t8,0(v1)
  41034c:	87a5004a 	lh	a1,74(sp)
  410350:	e7040000 	swc1	$f4,0(t8)
  410354:	8c790000 	lw	t9,0(v1)
  410358:	4620a1a0 	cvt.s.d	$f6,$f20
  41035c:	e7260004 	swc1	$f6,4(t9)
  410360:	c7a80044 	lwc1	$f8,68(sp)
  410364:	c7a90040 	lwc1	$f9,64(sp)
  410368:	8c680000 	lw	t0,0(v1)
  41036c:	462042a0 	cvt.s.d	$f10,$f8
  410370:	e50a0008 	swc1	$f10,8(t0)
  410374:	8c690000 	lw	t1,0(v1)
  410378:	00000000 	nop
  41037c:	a525000c 	sh	a1,12(t1)
  410380:	8f998528 	lw	t9,-31448(gp)  # FUN_0040bfec
  410384:	00000000 	nop
  410388:	0320f809 	jalr	t9  # call FUN_0040bfec
  41038c:	00000000 	nop
  410390:	8fbc0028 	lw	gp,40(sp)
  410394:	87a6004e 	lh	a2,78(sp)
  410398:	8f83897c 	lw	v1,-30340(gp)  # curcontext
  41039c:	00000000 	nop
  4103a0:	8c6a0000 	lw	t2,0(v1)
  4103a4:	00000000 	nop
  4103a8:	a546000e 	sh	a2,14(t2)
  4103ac:	8f99852c 	lw	t9,-31444(gp)  # FUN_0040c0cc
  4103b0:	00000000 	nop
  4103b4:	0320f809 	jalr	t9  # call FUN_0040c0cc
  4103b8:	00000000 	nop
  4103bc:	8fbc0028 	lw	gp,40(sp)
  4103c0:	00000000 	nop
  4103c4:	8f998534 	lw	t9,-31436(gp)  # FUN_0040cad0
  4103c8:	00000000 	nop
  4103cc:	0320f809 	jalr	t9  # call FUN_0040cad0
  4103d0:	00000000 	nop
  4103d4:	8fbc0028 	lw	gp,40(sp)
  4103d8:	10000094 	b	41062c <zoomto+0x3d4>
  4103dc:	8fbf002c 	lw	ra,44(sp)
  4103e0:	4620b020 	cvt.s.d	$f0,$f22
  4103e4:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  4103e8:	4620a0a0 	cvt.s.d	$f2,$f20
  4103ec:	e42065f0 	swc1	$f0,26096(at)
  4103f0:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  4103f4:	c7b10040 	lwc1	$f17,64(sp)
  4103f8:	c7b00044 	lwc1	$f16,68(sp)
  4103fc:	e42265f4 	swc1	$f2,26100(at)
  410400:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410404:	462084a0 	cvt.s.d	$f18,$f16
  410408:	87a5004a 	lh	a1,74(sp)
  41040c:	e43265f8 	swc1	$f18,26104(at)
  410410:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410414:	87a6004e 	lh	a2,78(sp)
  410418:	a4256608 	sh	a1,26120(at)
  41041c:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410420:	00000000 	nop
  410424:	a426660a 	sh	a2,26122(at)
  410428:	844b000c 	lh	t3,12(v0)
  41042c:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410430:	00ab6026 	xor	t4,a1,t3
  410434:	000c602b 	sltu	t4,zero,t4
  410438:	a02c660c 	sb	t4,26124(at)
  41043c:	844d000e 	lh	t5,14(v0)
  410440:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410444:	00cd7026 	xor	t6,a2,t5
  410448:	000e702b 	sltu	t6,zero,t6
  41044c:	1480005a 	bnez	a0,4105b8 <zoomto+0x360>
  410450:	a02e660d 	sb	t6,26125(at)
  410454:	c4440004 	lwc1	$f4,4(v0)
  410458:	00000000 	nop
  41045c:	460021a1 	cvt.d.s	$f6,$f4
  410460:	4626a032 	c.eq.d	$f20,$f6
  410464:	00000000 	nop
  410468:	45000004 	bc1f	41047c <zoomto+0x224>
  41046c:	00000000 	nop
  410470:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410474:	10000053 	b	4105c4 <zoomto+0x36c>
  410478:	a020660e 	sb	zero,26126(at)
  41047c:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410480:	240f0001 	li	t7,1
  410484:	a02f660e 	sb	t7,26126(at)
  410488:	c4480004 	lwc1	$f8,4(v0)
  41048c:	00000000 	nop
  410490:	460042a1 	cvt.d.s	$f10,$f8
  410494:	4634503c 	c.lt.d	$f10,$f20
  410498:	00000000 	nop
  41049c:	45000023 	bc1f	41052c <zoomto+0x2d4>
  4104a0:	00000000 	nop
  4104a4:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  4104a8:	8f99849c 	lw	t9,-31588(gp)
  4104ac:	e42065fc 	swc1	$f0,26108(at)
  4104b0:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  4104b4:	00000000 	nop
  4104b8:	e4226600 	swc1	$f2,26112(at)
  4104bc:	8f818a24 	lw	at,-30172(gp)  # fsn_resources
  4104c0:	c4500004 	lwc1	$f16,4(v0)
  4104c4:	c4240108 	lwc1	$f4,264(at)
  4104c8:	460084a1 	cvt.d.s	$f18,$f16
  4104cc:	460021a1 	cvt.d.s	$f6,$f4
  4104d0:	00000000 	nop
  4104d4:	46269203 	div.d	$f8,$f18,$f6
  4104d8:	c42c0104 	lwc1	$f12,260(at)
  4104dc:	0320f809 	jalr	t9
  4104e0:	462043a0 	cvt.s.d	$f14,$f8
  4104e4:	8fbc0028 	lw	gp,40(sp)
  4104e8:	460002a1 	cvt.d.s	$f10,$f0
  4104ec:	8f83897c 	lw	v1,-30340(gp)  # curcontext
  4104f0:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  4104f4:	8c620000 	lw	v0,0(v1)
  4104f8:	00000000 	nop
  4104fc:	c4500000 	lwc1	$f16,0(v0)
  410500:	c4480004 	lwc1	$f8,4(v0)
  410504:	46008121 	cvt.d.s	$f4,$f16
  410508:	4624b481 	sub.d	$f18,$f22,$f4
  41050c:	46325182 	mul.d	$f6,$f10,$f18
  410510:	46004421 	cvt.d.s	$f16,$f8
  410514:	4630a101 	sub.d	$f4,$f20,$f16
  410518:	00000000 	nop
  41051c:	46243283 	div.d	$f10,$f6,$f4
  410520:	462054a0 	cvt.s.d	$f18,$f10
  410524:	10000027 	b	4105c4 <zoomto+0x36c>
  410528:	e4326604 	swc1	$f18,26116(at)
  41052c:	c4480000 	lwc1	$f8,0(v0)
  410530:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410534:	8f99849c 	lw	t9,-31588(gp)
  410538:	e42865fc 	swc1	$f8,26108(at)
  41053c:	c4500004 	lwc1	$f16,4(v0)
  410540:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410544:	00000000 	nop
  410548:	e4306600 	swc1	$f16,26112(at)
  41054c:	8f818a24 	lw	at,-30172(gp)  # fsn_resources
  410550:	00000000 	nop
  410554:	c4260108 	lwc1	$f6,264(at)
  410558:	c42c0104 	lwc1	$f12,260(at)
  41055c:	46003121 	cvt.d.s	$f4,$f6
  410560:	00000000 	nop
  410564:	4624a283 	div.d	$f10,$f20,$f4
  410568:	0320f809 	jalr	t9
  41056c:	462053a0 	cvt.s.d	$f14,$f10
  410570:	8fbc0028 	lw	gp,40(sp)
  410574:	460004a1 	cvt.d.s	$f18,$f0
  410578:	8f83897c 	lw	v1,-30340(gp)  # curcontext
  41057c:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410580:	8c620000 	lw	v0,0(v1)
  410584:	00000000 	nop
  410588:	c4480000 	lwc1	$f8,0(v0)
  41058c:	c44a0004 	lwc1	$f10,4(v0)
  410590:	46004421 	cvt.d.s	$f16,$f8
  410594:	46368181 	sub.d	$f6,$f16,$f22
  410598:	46269102 	mul.d	$f4,$f18,$f6
  41059c:	46005221 	cvt.d.s	$f8,$f10
  4105a0:	46344401 	sub.d	$f16,$f8,$f20
  4105a4:	00000000 	nop
  4105a8:	46302483 	div.d	$f18,$f4,$f16
  4105ac:	462091a0 	cvt.s.d	$f6,$f18
  4105b0:	10000004 	b	4105c4 <zoomto+0x36c>
  4105b4:	e4266604 	swc1	$f6,26116(at)
  4105b8:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  4105bc:	00000000 	nop
  4105c0:	a020660e 	sb	zero,26126(at)
  4105c4:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  4105c8:	8f9984d4 	lw	t9,-31532(gp)
  4105cc:	00002825 	move	a1,zero
  4105d0:	0320f809 	jalr	t9
  4105d4:	24846610 	addiu	a0,a0,26128
  4105d8:	8fbc0028 	lw	gp,40(sp)
  4105dc:	8fb80054 	lw	t8,84(sp)
  4105e0:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  4105e4:	8fb90058 	lw	t9,88(sp)
  4105e8:	ac38661c 	sw	t8,26140(at)
  4105ec:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  4105f0:	8f888a24 	lw	t0,-30172(gp)  # fsn_resources
  4105f4:	ac396620 	sw	t9,26144(at)
  4105f8:	8f998018 	lw	t9,-32744(gp)  # FUN_00410000
  4105fc:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  410600:	8f848018 	lw	a0,-32744(gp)  # FUN_00410000
  410604:	8f85806c 	lw	a1,-32660(gp)  # DAT_10010000
  410608:	8d080058 	lw	t0,88(t0)
  41060c:	2739f150 	addiu	t9,t9,-3760
  410610:	2484fbb0 	addiu	a0,a0,-1104
  410614:	24a565f0 	addiu	a1,a1,26096
  410618:	0320f809 	jalr	t9  # call FUN_00410000
  41061c:	ac286618 	sw	t0,26136(at)
  410620:	8fbc0028 	lw	gp,40(sp)
  410624:	00000000 	nop
  410628:	8fbf002c 	lw	ra,44(sp)
  41062c:	c7b50018 	lwc1	$f21,24(sp)
  410630:	c7b4001c 	lwc1	$f20,28(sp)
  410634:	c7b70020 	lwc1	$f23,32(sp)
  410638:	c7b60024 	lwc1	$f22,36(sp)
  41063c:	03e00008 	jr	ra
  410640:	27bd0030 	addiu	sp,sp,48


======================================================================
ANALYSIS SUMMARY: zoomto
======================================================================

FUNCTION CALLS:
----------------------------------------
  FUN_0040bbe0
  FUN_0040bfec
  FUN_0040c0cc
  FUN_0040cad0
  FUN_00410000 (2x)
  FUN_004101e4
  FUN_0041d69c

GP SYMBOL REFERENCES:
----------------------------------------
  DAT_10010000
  FUN_0040bbe0
  FUN_0040bfec
  FUN_0040c0cc
  FUN_0040cad0
  FUN_00410000
  FUN_004101e4
  FUN_0041d69c
  curcontext
  fsn_resources

======================================================================