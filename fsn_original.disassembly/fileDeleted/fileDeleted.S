# Function: fileDeleted
# Address: 0x00418334 - 0x004184c8
# Size: 0x194 (404 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00418334 <fileDeleted>:
  418334:	3c1c0fc0 	lui	gp,0xfc0
  418338:	279c57fc 	addiu	gp,gp,22524
  41833c:	0399e021 	addu	gp,gp,t9
  418340:	27bdff48 	addiu	sp,sp,-184
  418344:	afbf001c 	sw	ra,28(sp)
  418348:	afbc0018 	sw	gp,24(sp)
  41834c:	afb00014 	sw	s0,20(sp)
  418350:	afa500bc 	sw	a1,188(sp)
  418354:	8c8e0074 	lw	t6,116(a0)
  418358:	00808025 	move	s0,a0
  41835c:	000ec340 	sll	t8,t6,0xd
  418360:	07010003 	bgez	t8,418370 <fileDeleted+0x3c>
  418364:	00000000 	nop
  418368:	10000053 	b	4184b8 <fileDeleted+0x184>
  41836c:	00001025 	move	v0,zero
  418370:	8f99857c 	lw	t9,-31364(gp)
  418374:	00002025 	move	a0,zero
  418378:	0320f809 	jalr	t9
  41837c:	02002825 	move	a1,s0
  418380:	8fbc0018 	lw	gp,24(sp)
  418384:	8fa500bc 	lw	a1,188(sp)
  418388:	8f99831c 	lw	t9,-31972(gp)
  41838c:	afa200ac 	sw	v0,172(sp)
  418390:	0320f809 	jalr	t9
  418394:	00402025 	move	a0,v0
  418398:	8fbc0018 	lw	gp,24(sp)
  41839c:	8fa400ac 	lw	a0,172(sp)
  4183a0:	8f998120 	lw	t9,-32480(gp)
  4183a4:	27a50024 	addiu	a1,sp,36
  4183a8:	0320f809 	jalr	t9
  4183ac:	00000000 	nop
  4183b0:	8fbc0018 	lw	gp,24(sp)
  4183b4:	04410040 	bgez	v0,4184b8 <fileDeleted+0x184>
  4183b8:	00001025 	move	v0,zero
  4183bc:	92090075 	lbu	t1,117(s0)
  4183c0:	92190074 	lbu	t9,116(s0)
  4183c4:	312bff7f 	andi	t3,t1,0xff7f
  4183c8:	a20b0075 	sb	t3,117(s0)
  4183cc:	316c00bf 	andi	t4,t3,0xbf
  4183d0:	3328fffe 	andi	t0,t9,0xfffe
  4183d4:	a2080074 	sb	t0,116(s0)
  4183d8:	a20c0075 	sb	t4,117(s0)
  4183dc:	8f9985a4 	lw	t9,-31324(gp)
  4183e0:	8fa500bc 	lw	a1,188(sp)
  4183e4:	0320f809 	jalr	t9
  4183e8:	02002025 	move	a0,s0
  4183ec:	8fbc0018 	lw	gp,24(sp)
  4183f0:	1040000d 	beqz	v0,418428 <fileDeleted+0xf4>
  4183f4:	00000000 	nop
  4183f8:	904f0028 	lbu	t7,40(v0)
  4183fc:	904d0029 	lbu	t5,41(v0)
  418400:	31f8fffe 	andi	t8,t7,0xfffe
  418404:	37190001 	ori	t9,t8,0x1
  418408:	31aeff7f 	andi	t6,t5,0xff7f
  41840c:	a04e0029 	sb	t6,41(v0)
  418410:	a0590028 	sb	t9,40(v0)
  418414:	92090074 	lbu	t1,116(s0)
  418418:	00000000 	nop
  41841c:	352a0001 	ori	t2,t1,0x1
  418420:	10000013 	b	418470 <fileDeleted+0x13c>
  418424:	a20a0074 	sb	t2,116(s0)
  418428:	8f9985a8 	lw	t9,-31320(gp)
  41842c:	8fa500bc 	lw	a1,188(sp)
  418430:	0320f809 	jalr	t9
  418434:	02002025 	move	a0,s0
  418438:	8fbc0018 	lw	gp,24(sp)
  41843c:	1040000c 	beqz	v0,418470 <fileDeleted+0x13c>
  418440:	00000000 	nop
  418444:	904b0074 	lbu	t3,116(v0)
  418448:	00000000 	nop
  41844c:	316efffd 	andi	t6,t3,0xfffd
  418450:	a04e0074 	sb	t6,116(v0)
  418454:	35cf0004 	ori	t7,t6,0x4
  418458:	a04f0074 	sb	t7,116(v0)
  41845c:	92180075 	lbu	t8,117(s0)
  418460:	00000000 	nop
  418464:	3319ff7f 	andi	t9,t8,0xff7f
  418468:	37280080 	ori	t0,t9,0x80
  41846c:	a2080075 	sb	t0,117(s0)
  418470:	92090074 	lbu	t1,116(s0)
  418474:	00000000 	nop
  418478:	312a0001 	andi	t2,t1,0x1
  41847c:	15400005 	bnez	t2,418494 <fileDeleted+0x160>
  418480:	00000000 	nop
  418484:	820c0075 	lb	t4,117(s0)
  418488:	00000000 	nop
  41848c:	0581000a 	bgez	t4,4184b8 <fileDeleted+0x184>
  418490:	00001025 	move	v0,zero
  418494:	8f998018 	lw	t9,-32744(gp)
  418498:	02002025 	move	a0,s0
  41849c:	273944ec 	addiu	t9,t9,17644
  4184a0:	0320f809 	jalr	t9
  4184a4:	00000000 	nop
  4184a8:	8fbc0018 	lw	gp,24(sp)
  4184ac:	10000002 	b	4184b8 <fileDeleted+0x184>
  4184b0:	24020001 	li	v0,1
  4184b4:	00001025 	move	v0,zero
  4184b8:	8fbf001c 	lw	ra,28(sp)
  4184bc:	8fb00014 	lw	s0,20(sp)
  4184c0:	03e00008 	jr	ra
  4184c4:	27bd00b8 	addiu	sp,sp,184
