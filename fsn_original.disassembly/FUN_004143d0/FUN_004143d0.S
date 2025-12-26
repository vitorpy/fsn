# Function: FUN_004143d0
# Address: 0x004143d0 - 0x004144ec
# Size: 0x11c (284 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004143d0 <findDirByFullName+0xd3c>:
  4143d0:	3c1c0fc1 	lui	gp,0xfc1
  4143d4:	279c9760 	addiu	gp,gp,-26784
  4143d8:	0399e021 	addu	gp,gp,t9
  4143dc:	27bdffd8 	addiu	sp,sp,-40
  4143e0:	afbf0024 	sw	ra,36(sp)
  4143e4:	afbc0020 	sw	gp,32(sp)
  4143e8:	afb2001c 	sw	s2,28(sp)
  4143ec:	afb10018 	sw	s1,24(sp)
  4143f0:	afb00014 	sw	s0,20(sp)
  4143f4:	908e0074 	lbu	t6,116(a0)
  4143f8:	8c83000c 	lw	v1,12(a0)
  4143fc:	31cfffef 	andi	t7,t6,0xffef
  414400:	00809025 	move	s2,a0
  414404:	a08f0074 	sb	t7,116(a0)
  414408:	18600011 	blez	v1,414450 <findDirByFullName+0xdbc>
  41440c:	00008825 	move	s1,zero
  414410:	00008025 	move	s0,zero
  414414:	8e580010 	lw	t8,16(s2)
  414418:	26310001 	addiu	s1,s1,1
  41441c:	0310c821 	addu	t9,t8,s0
  414420:	8f220000 	lw	v0,0(t9)
  414424:	26100004 	addiu	s0,s0,4
  414428:	90480028 	lbu	t0,40(v0)
  41442c:	00000000 	nop
  414430:	3109fffb 	andi	t1,t0,0xfffb
  414434:	a0490028 	sb	t1,40(v0)
  414438:	8e43000c 	lw	v1,12(s2)
  41443c:	00000000 	nop
  414440:	0223082a 	slt	at,s1,v1
  414444:	1420fff3 	bnez	at,414414 <findDirByFullName+0xd80>
  414448:	00000000 	nop
  41444c:	00008825 	move	s1,zero
  414450:	10600007 	beqz	v1,414470 <findDirByFullName+0xddc>
  414454:	00000000 	nop
  414458:	8f9980c0 	lw	t9,-32576(gp)
  41445c:	8e440010 	lw	a0,16(s2)
  414460:	0320f809 	jalr	t9
  414464:	00000000 	nop
  414468:	8fbc0020 	lw	gp,32(sp)
  41446c:	00000000 	nop
  414470:	8e420014 	lw	v0,20(s2)
  414474:	00008025 	move	s0,zero
  414478:	1840000e 	blez	v0,4144b4 <findDirByFullName+0xe20>
  41447c:	00000000 	nop
  414480:	8e4a0018 	lw	t2,24(s2)
  414484:	8f998018 	lw	t9,-32744(gp)
  414488:	01505821 	addu	t3,t2,s0
  41448c:	8d640000 	lw	a0,0(t3)
  414490:	273943d0 	addiu	t9,t9,17360
  414494:	0320f809 	jalr	t9
  414498:	00000000 	nop
  41449c:	8e420014 	lw	v0,20(s2)
  4144a0:	26310001 	addiu	s1,s1,1
  4144a4:	8fbc0020 	lw	gp,32(sp)
  4144a8:	0222082a 	slt	at,s1,v0
  4144ac:	1420fff4 	bnez	at,414480 <findDirByFullName+0xdec>
  4144b0:	26100004 	addiu	s0,s0,4
  4144b4:	10400008 	beqz	v0,4144d8 <findDirByFullName+0xe44>
  4144b8:	8fbf0024 	lw	ra,36(sp)
  4144bc:	8f9980c0 	lw	t9,-32576(gp)
  4144c0:	8e440018 	lw	a0,24(s2)
  4144c4:	0320f809 	jalr	t9
  4144c8:	00000000 	nop
  4144cc:	8fbc0020 	lw	gp,32(sp)
  4144d0:	00000000 	nop
  4144d4:	8fbf0024 	lw	ra,36(sp)
  4144d8:	8fb00014 	lw	s0,20(sp)
  4144dc:	8fb10018 	lw	s1,24(sp)
  4144e0:	8fb2001c 	lw	s2,28(sp)
  4144e4:	03e00008 	jr	ra
  4144e8:	27bd0028 	addiu	sp,sp,40
