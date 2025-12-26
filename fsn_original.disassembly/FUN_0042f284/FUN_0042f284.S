# Function: FUN_0042f284
# Address: 0x0042f284 - 0x0042f4b4
# Size: 0x230 (560 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042f284 <createMarkControls+0xc>:
  42f284:	27bdff80 	addiu	sp,sp,-128
  42f288:	8f8e80a4 	lw	t6,-32604(gp)
  42f28c:	8f85805c 	lw	a1,-32676(gp)
  42f290:	8f99845c 	lw	t9,-31652(gp)
  42f294:	afbf001c 	sw	ra,28(sp)
  42f298:	25ce02c7 	addiu	t6,t6,711
  42f29c:	afbc0018 	sw	gp,24(sp)
  42f2a0:	afb00014 	sw	s0,20(sp)
  42f2a4:	afa40080 	sw	a0,128(sp)
  42f2a8:	afae002c 	sw	t6,44(sp)
  42f2ac:	afa00030 	sw	zero,48(sp)
  42f2b0:	27a6002c 	addiu	a2,sp,44
  42f2b4:	24070001 	li	a3,1
  42f2b8:	0320f809 	jalr	t9
  42f2bc:	24a53c30 	addiu	a1,a1,15408
  42f2c0:	8fbc0018 	lw	gp,24(sp)
  42f2c4:	00402025 	move	a0,v0
  42f2c8:	8f90806c 	lw	s0,-32660(gp)
  42f2cc:	24050007 	li	a1,7
  42f2d0:	26106ec0 	addiu	s0,s0,28352
  42f2d4:	ae020000 	sw	v0,0(s0)
  42f2d8:	8f998460 	lw	t9,-31648(gp)
  42f2dc:	00000000 	nop
  42f2e0:	0320f809 	jalr	t9
  42f2e4:	00000000 	nop
  42f2e8:	8fbc0018 	lw	gp,24(sp)
  42f2ec:	00402025 	move	a0,v0
  42f2f0:	8f998490 	lw	t9,-31600(gp)
  42f2f4:	00000000 	nop
  42f2f8:	0320f809 	jalr	t9
  42f2fc:	00000000 	nop
  42f300:	8fbc0018 	lw	gp,24(sp)
  42f304:	8e040000 	lw	a0,0(s0)
  42f308:	8f998460 	lw	t9,-31648(gp)
  42f30c:	2405000d 	li	a1,13
  42f310:	0320f809 	jalr	t9
  42f314:	00000000 	nop
  42f318:	8fbc0018 	lw	gp,24(sp)
  42f31c:	00402025 	move	a0,v0
  42f320:	8f998490 	lw	t9,-31600(gp)
  42f324:	00000000 	nop
  42f328:	0320f809 	jalr	t9
  42f32c:	00000000 	nop
  42f330:	8fbc0018 	lw	gp,24(sp)
  42f334:	8e040000 	lw	a0,0(s0)
  42f338:	8f998460 	lw	t9,-31648(gp)
  42f33c:	2405000b 	li	a1,11
  42f340:	0320f809 	jalr	t9
  42f344:	00000000 	nop
  42f348:	8fbc0018 	lw	gp,24(sp)
  42f34c:	00402025 	move	a0,v0
  42f350:	8f998490 	lw	t9,-31600(gp)
  42f354:	00000000 	nop
  42f358:	0320f809 	jalr	t9
  42f35c:	00000000 	nop
  42f360:	8fbc0018 	lw	gp,24(sp)
  42f364:	8e040000 	lw	a0,0(s0)
  42f368:	8f998460 	lw	t9,-31648(gp)
  42f36c:	2405000e 	li	a1,14
  42f370:	0320f809 	jalr	t9
  42f374:	00000000 	nop
  42f378:	8fbc0018 	lw	gp,24(sp)
  42f37c:	00402025 	move	a0,v0
  42f380:	8f998490 	lw	t9,-31600(gp)
  42f384:	00000000 	nop
  42f388:	0320f809 	jalr	t9
  42f38c:	00000000 	nop
  42f390:	8fbc0018 	lw	gp,24(sp)
  42f394:	8e040000 	lw	a0,0(s0)
  42f398:	8f998460 	lw	t9,-31648(gp)
  42f39c:	24050008 	li	a1,8
  42f3a0:	0320f809 	jalr	t9
  42f3a4:	00000000 	nop
  42f3a8:	8fbc0018 	lw	gp,24(sp)
  42f3ac:	00003825 	move	a3,zero
  42f3b0:	8f81806c 	lw	at,-32660(gp)
  42f3b4:	8f8580a0 	lw	a1,-32608(gp)
  42f3b8:	8f868020 	lw	a2,-32736(gp)
  42f3bc:	8f9983ac 	lw	t9,-31828(gp)
  42f3c0:	ac226ec4 	sw	v0,28356(at)
  42f3c4:	8e040000 	lw	a0,0(s0)
  42f3c8:	24a5214e 	addiu	a1,a1,8526
  42f3cc:	0320f809 	jalr	t9
  42f3d0:	24c6f4d8 	addiu	a2,a2,-2856
  42f3d4:	8fbc0018 	lw	gp,24(sp)
  42f3d8:	8e040000 	lw	a0,0(s0)
  42f3dc:	8f8580a0 	lw	a1,-32608(gp)
  42f3e0:	8f868020 	lw	a2,-32736(gp)
  42f3e4:	8f9983ac 	lw	t9,-31828(gp)
  42f3e8:	00003825 	move	a3,zero
  42f3ec:	24a514a5 	addiu	a1,a1,5285
  42f3f0:	0320f809 	jalr	t9
  42f3f4:	24c6f5d0 	addiu	a2,a2,-2608
  42f3f8:	8fbc0018 	lw	gp,24(sp)
  42f3fc:	8e040000 	lw	a0,0(s0)
  42f400:	8f998388 	lw	t9,-31864(gp)
  42f404:	00000000 	nop
  42f408:	0320f809 	jalr	t9
  42f40c:	00000000 	nop
  42f410:	8fbc0018 	lw	gp,24(sp)
  42f414:	8e040000 	lw	a0,0(s0)
  42f418:	8f9987a4 	lw	t9,-30812(gp)
  42f41c:	8f8589bc 	lw	a1,-30276(gp)
  42f420:	0320f809 	jalr	t9
  42f424:	00000000 	nop
  42f428:	8fbc0018 	lw	gp,24(sp)
  42f42c:	8fa40080 	lw	a0,128(sp)
  42f430:	8f85805c 	lw	a1,-32676(gp)
  42f434:	8f9984e0 	lw	t9,-31520(gp)
  42f438:	27a6002c 	addiu	a2,sp,44
  42f43c:	00003825 	move	a3,zero
  42f440:	0320f809 	jalr	t9
  42f444:	24a53c40 	addiu	a1,a1,15424
  42f448:	8fbc0018 	lw	gp,24(sp)
  42f44c:	00408025 	move	s0,v0
  42f450:	8f8580a0 	lw	a1,-32608(gp)
  42f454:	8f868020 	lw	a2,-32736(gp)
  42f458:	8f9983ac 	lw	t9,-31828(gp)
  42f45c:	00402025 	move	a0,v0
  42f460:	00003825 	move	a3,zero
  42f464:	24a5124b 	addiu	a1,a1,4683
  42f468:	0320f809 	jalr	t9
  42f46c:	24c6f73c 	addiu	a2,a2,-2244
  42f470:	8fbc0018 	lw	gp,24(sp)
  42f474:	02002025 	move	a0,s0
  42f478:	8f998388 	lw	t9,-31864(gp)
  42f47c:	00000000 	nop
  42f480:	0320f809 	jalr	t9
  42f484:	00000000 	nop
  42f488:	8fbc0018 	lw	gp,24(sp)
  42f48c:	02002025 	move	a0,s0
  42f490:	8f9987a4 	lw	t9,-30812(gp)
  42f494:	8f8589bc 	lw	a1,-30276(gp)
  42f498:	0320f809 	jalr	t9
  42f49c:	00000000 	nop
  42f4a0:	8fbf001c 	lw	ra,28(sp)
  42f4a4:	8fbc0018 	lw	gp,24(sp)
  42f4a8:	8fb00014 	lw	s0,20(sp)
  42f4ac:	03e00008 	jr	ra
  42f4b0:	27bd0080 	addiu	sp,sp,128
