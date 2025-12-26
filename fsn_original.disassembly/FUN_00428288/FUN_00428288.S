# Function: FUN_00428288
# Address: 0x00428288 - 0x004283b8
# Size: 0x130 (304 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00428288 <dirfamUnmonitor+0x2b4>:
  428288:	3c1c0fbf 	lui	gp,0xfbf
  42828c:	279c58a8 	addiu	gp,gp,22696
  428290:	0399e021 	addu	gp,gp,t9
  428294:	8f9983fc 	lw	t9,-31748(gp)
  428298:	27bdffc0 	addiu	sp,sp,-64
  42829c:	afbf001c 	sw	ra,28(sp)
  4282a0:	afbc0018 	sw	gp,24(sp)
  4282a4:	0320f809 	jalr	t9
  4282a8:	afa40040 	sw	a0,64(sp)
  4282ac:	8fbc0018 	lw	gp,24(sp)
  4282b0:	00402025 	move	a0,v0
  4282b4:	8f85805c 	lw	a1,-32676(gp)
  4282b8:	8f9980f4 	lw	t9,-32524(gp)
  4282bc:	24060001 	li	a2,1
  4282c0:	0320f809 	jalr	t9
  4282c4:	24a5e8b0 	addiu	a1,a1,-5968
  4282c8:	8fbc0018 	lw	gp,24(sp)
  4282cc:	10400036 	beqz	v0,4283a8 <dirfamUnmonitor+0x3d4>
  4282d0:	afa2003c 	sw	v0,60(sp)
  4282d4:	8f9983fc 	lw	t9,-31748(gp)
  4282d8:	8fa40040 	lw	a0,64(sp)
  4282dc:	0320f809 	jalr	t9
  4282e0:	00000000 	nop
  4282e4:	8fbc0018 	lw	gp,24(sp)
  4282e8:	8fa40040 	lw	a0,64(sp)
  4282ec:	8f9983fc 	lw	t9,-31748(gp)
  4282f0:	afa20020 	sw	v0,32(sp)
  4282f4:	0320f809 	jalr	t9
  4282f8:	00000000 	nop
  4282fc:	8fbc0018 	lw	gp,24(sp)
  428300:	8fa40040 	lw	a0,64(sp)
  428304:	8f9983fc 	lw	t9,-31748(gp)
  428308:	afa20024 	sw	v0,36(sp)
  42830c:	0320f809 	jalr	t9
  428310:	00000000 	nop
  428314:	8c580084 	lw	t8,132(v0)
  428318:	8fae0024 	lw	t6,36(sp)
  42831c:	0018c880 	sll	t9,t8,0x2
  428320:	8dcf008c 	lw	t7,140(t6)
  428324:	0338c821 	addu	t9,t9,t8
  428328:	8fbc0018 	lw	gp,24(sp)
  42832c:	0019c900 	sll	t9,t9,0x4
  428330:	01f94021 	addu	t0,t7,t9
  428334:	8f998104 	lw	t9,-32508(gp)
  428338:	8d050008 	lw	a1,8(t0)
  42833c:	8fa40020 	lw	a0,32(sp)
  428340:	8fa7003c 	lw	a3,60(sp)
  428344:	0320f809 	jalr	t9
  428348:	27a6002c 	addiu	a2,sp,44
  42834c:	8fbc0018 	lw	gp,24(sp)
  428350:	10400016 	beqz	v0,4283ac <dirfamUnmonitor+0x3d8>
  428354:	8fbf001c 	lw	ra,28(sp)
  428358:	8f9980fc 	lw	t9,-32516(gp)
  42835c:	8fa4002c 	lw	a0,44(sp)
  428360:	0320f809 	jalr	t9
  428364:	00000000 	nop
  428368:	8fbc0018 	lw	gp,24(sp)
  42836c:	46200120 	cvt.s.d	$f4,$f0
  428370:	8f828068 	lw	v0,-32664(gp)
  428374:	44803800 	mtc1	zero,$f7
  428378:	244278fc 	addiu	v0,v0,30972
  42837c:	e4440000 	swc1	$f4,0(v0)
  428380:	c4480000 	lwc1	$f8,0(v0)
  428384:	44803000 	mtc1	zero,$f6
  428388:	460042a1 	cvt.d.s	$f10,$f8
  42838c:	462a3032 	c.eq.d	$f6,$f10
  428390:	00000000 	nop
  428394:	45010005 	bc1t	4283ac <dirfamUnmonitor+0x3d8>
  428398:	8fbf001c 	lw	ra,28(sp)
  42839c:	8f818068 	lw	at,-32664(gp)
  4283a0:	24090001 	li	t1,1
  4283a4:	a0297900 	sb	t1,30976(at)
  4283a8:	8fbf001c 	lw	ra,28(sp)
  4283ac:	27bd0040 	addiu	sp,sp,64
  4283b0:	03e00008 	jr	ra
  4283b4:	00000000 	nop
