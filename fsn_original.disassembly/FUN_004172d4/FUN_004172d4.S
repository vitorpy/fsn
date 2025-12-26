# Function: FUN_004172d4
# Address: 0x004172d4 - 0x004174c4
# Size: 0x1f0 (496 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004172d4 <load_db+0xc>:
  4172d4:	27bdffd0 	addiu	sp,sp,-48
  4172d8:	8f998018 	lw	t9,-32744(gp)
  4172dc:	afbf002c 	sw	ra,44(sp)
  4172e0:	27395b48 	addiu	t9,t9,23368
  4172e4:	afbc0028 	sw	gp,40(sp)
  4172e8:	afb40024 	sw	s4,36(sp)
  4172ec:	afb30020 	sw	s3,32(sp)
  4172f0:	afb2001c 	sw	s2,28(sp)
  4172f4:	afb10018 	sw	s1,24(sp)
  4172f8:	0320f809 	jalr	t9
  4172fc:	afb00014 	sw	s0,20(sp)
  417300:	8fbc0028 	lw	gp,40(sp)
  417304:	00000000 	nop
  417308:	8f908a54 	lw	s0,-30124(gp)
  41730c:	00000000 	nop
  417310:	8e0e0000 	lw	t6,0(s0)
  417314:	00000000 	nop
  417318:	8dd90000 	lw	t9,0(t6)
  41731c:	00000000 	nop
  417320:	0320f809 	jalr	t9
  417324:	00000000 	nop
  417328:	8fbc0028 	lw	gp,40(sp)
  41732c:	2411ffff 	li	s1,-1
  417330:	1051005d 	beq	v0,s1,4174a8 <load_db+0x1e0>
  417334:	8fbf002c 	lw	ra,44(sp)
  417338:	8f94805c 	lw	s4,-32676(gp)
  41733c:	8f938098 	lw	s3,-32616(gp)
  417340:	8f92806c 	lw	s2,-32660(gp)
  417344:	2694ada8 	addiu	s4,s4,-21080
  417348:	26730020 	addiu	s3,s3,32
  41734c:	26526690 	addiu	s2,s2,26256
  417350:	244fffff 	addiu	t7,v0,-1
  417354:	2de10008 	sltiu	at,t7,8
  417358:	1020003d 	beqz	at,417450 <load_db+0x188>
  41735c:	00000000 	nop
  417360:	8f81805c 	lw	at,-32676(gp)
  417364:	000f7880 	sll	t7,t7,0x2
  417368:	002f0821 	addu	at,at,t7
  41736c:	8c2fae68 	lw	t7,-20888(at)
  417370:	00000000 	nop
  417374:	01fc7821 	addu	t7,t7,gp
  417378:	01e00008 	jr	t7
  41737c:	00000000 	nop
  417380:	8e180000 	lw	t8,0(s0)
  417384:	00000000 	nop
  417388:	8f190004 	lw	t9,4(t8)
  41738c:	00000000 	nop
  417390:	0320f809 	jalr	t9
  417394:	00000000 	nop
  417398:	8fbc0028 	lw	gp,40(sp)
  41739c:	10000039 	b	417484 <load_db+0x1bc>
  4173a0:	8e0c0000 	lw	t4,0(s0)
  4173a4:	8f998588 	lw	t9,-31352(gp)
  4173a8:	00000000 	nop
  4173ac:	0320f809 	jalr	t9
  4173b0:	00000000 	nop
  4173b4:	8fbc0028 	lw	gp,40(sp)
  4173b8:	10000032 	b	417484 <load_db+0x1bc>
  4173bc:	8e0c0000 	lw	t4,0(s0)
  4173c0:	8e080000 	lw	t0,0(s0)
  4173c4:	00000000 	nop
  4173c8:	8d190010 	lw	t9,16(t0)
  4173cc:	00000000 	nop
  4173d0:	0320f809 	jalr	t9
  4173d4:	00000000 	nop
  4173d8:	8fbc0028 	lw	gp,40(sp)
  4173dc:	10000029 	b	417484 <load_db+0x1bc>
  4173e0:	8e0c0000 	lw	t4,0(s0)
  4173e4:	8e090000 	lw	t1,0(s0)
  4173e8:	00000000 	nop
  4173ec:	8d390014 	lw	t9,20(t1)
  4173f0:	00000000 	nop
  4173f4:	0320f809 	jalr	t9
  4173f8:	00000000 	nop
  4173fc:	8fbc0028 	lw	gp,40(sp)
  417400:	10000020 	b	417484 <load_db+0x1bc>
  417404:	8e0c0000 	lw	t4,0(s0)
  417408:	8e0a0000 	lw	t2,0(s0)
  41740c:	00000000 	nop
  417410:	8d590018 	lw	t9,24(t2)
  417414:	00000000 	nop
  417418:	0320f809 	jalr	t9
  41741c:	00000000 	nop
  417420:	8fbc0028 	lw	gp,40(sp)
  417424:	10000017 	b	417484 <load_db+0x1bc>
  417428:	8e0c0000 	lw	t4,0(s0)
  41742c:	8e0b0000 	lw	t3,0(s0)
  417430:	8e440000 	lw	a0,0(s2)
  417434:	8d79001c 	lw	t9,28(t3)
  417438:	00000000 	nop
  41743c:	0320f809 	jalr	t9
  417440:	00000000 	nop
  417444:	8fbc0028 	lw	gp,40(sp)
  417448:	1000000e 	b	417484 <load_db+0x1bc>
  41744c:	8e0c0000 	lw	t4,0(s0)
  417450:	8f9983f8 	lw	t9,-31752(gp)
  417454:	02602025 	move	a0,s3
  417458:	0320f809 	jalr	t9
  41745c:	02802825 	move	a1,s4
  417460:	8fbc0028 	lw	gp,40(sp)
  417464:	24040001 	li	a0,1
  417468:	8f9983a0 	lw	t9,-31840(gp)
  41746c:	00000000 	nop
  417470:	0320f809 	jalr	t9
  417474:	00000000 	nop
  417478:	8fbc0028 	lw	gp,40(sp)
  41747c:	00000000 	nop
  417480:	8e0c0000 	lw	t4,0(s0)
  417484:	00000000 	nop
  417488:	8d990000 	lw	t9,0(t4)
  41748c:	00000000 	nop
  417490:	0320f809 	jalr	t9
  417494:	00000000 	nop
  417498:	8fbc0028 	lw	gp,40(sp)
  41749c:	1451ffad 	bne	v0,s1,417354 <load_db+0x8c>
  4174a0:	244fffff 	addiu	t7,v0,-1
  4174a4:	8fbf002c 	lw	ra,44(sp)
  4174a8:	8fb00014 	lw	s0,20(sp)
  4174ac:	8fb10018 	lw	s1,24(sp)
  4174b0:	8fb2001c 	lw	s2,28(sp)
  4174b4:	8fb30020 	lw	s3,32(sp)
  4174b8:	8fb40024 	lw	s4,36(sp)
  4174bc:	03e00008 	jr	ra
  4174c0:	27bd0030 	addiu	sp,sp,48
