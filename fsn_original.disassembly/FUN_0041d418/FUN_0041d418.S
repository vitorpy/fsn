# Function: FUN_0041d418
# Address: 0x0041d418 - 0x0041d540
# Size: 0x128 (296 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041d418 <check_unmonitor_dp+0xc8>:
  41d418:	3c1c0fc0 	lui	gp,0xfc0
  41d41c:	279c0718 	addiu	gp,gp,1816
  41d420:	0399e021 	addu	gp,gp,t9
  41d424:	8f8e897c 	lw	t6,-30340(gp)
  41d428:	27bdffe0 	addiu	sp,sp,-32
  41d42c:	8dce0000 	lw	t6,0(t6)
  41d430:	afbf001c 	sw	ra,28(sp)
  41d434:	afbc0018 	sw	gp,24(sp)
  41d438:	8dc70044 	lw	a3,68(t6)
  41d43c:	00000000 	nop
  41d440:	10e0003c 	beqz	a3,41d534 <check_unmonitor_dp+0x1e4>
  41d444:	8fbf001c 	lw	ra,28(sp)
  41d448:	8f828980 	lw	v0,-30336(gp)
  41d44c:	00001825 	move	v1,zero
  41d450:	8c420000 	lw	v0,0(v0)
  41d454:	00000000 	nop
  41d458:	904f0c51 	lbu	t7,3153(v0)
  41d45c:	00000000 	nop
  41d460:	11e00004 	beqz	t7,41d474 <check_unmonitor_dp+0x124>
  41d464:	00000000 	nop
  41d468:	8c430044 	lw	v1,68(v0)
  41d46c:	10000001 	b	41d474 <check_unmonitor_dp+0x124>
  41d470:	00000000 	nop
  41d474:	1067002f 	beq	v1,a3,41d534 <check_unmonitor_dp+0x1e4>
  41d478:	8fbf001c 	lw	ra,28(sp)
  41d47c:	8ce20074 	lw	v0,116(a3)
  41d480:	00000000 	nop
  41d484:	0002c2c0 	sll	t8,v0,0xb
  41d488:	0018cfc2 	srl	t9,t8,0x1f
  41d48c:	17200028 	bnez	t9,41d530 <check_unmonitor_dp+0x1e0>
  41d490:	00024b80 	sll	t1,v0,0xe
  41d494:	05200027 	bltz	t1,41d534 <check_unmonitor_dp+0x1e4>
  41d498:	8fbf001c 	lw	ra,28(sp)
  41d49c:	8ce40064 	lw	a0,100(a3)
  41d4a0:	00000000 	nop
  41d4a4:	1080000d 	beqz	a0,41d4dc <check_unmonitor_dp+0x18c>
  41d4a8:	00000000 	nop
  41d4ac:	8f99824c 	lw	t9,-32180(gp)
  41d4b0:	00000000 	nop
  41d4b4:	0320f809 	jalr	t9
  41d4b8:	00000000 	nop
  41d4bc:	8fbc0018 	lw	gp,24(sp)
  41d4c0:	00000000 	nop
  41d4c4:	8f8a897c 	lw	t2,-30340(gp)
  41d4c8:	00000000 	nop
  41d4cc:	8d4a0000 	lw	t2,0(t2)
  41d4d0:	00000000 	nop
  41d4d4:	8d470044 	lw	a3,68(t2)
  41d4d8:	00000000 	nop
  41d4dc:	8f858a24 	lw	a1,-30172(gp)
  41d4e0:	8f848a00 	lw	a0,-30208(gp)
  41d4e4:	8ca5000c 	lw	a1,12(a1)
  41d4e8:	8f99816c 	lw	t9,-32404(gp)
  41d4ec:	00055940 	sll	t3,a1,0x5
  41d4f0:	01655823 	subu	t3,t3,a1
  41d4f4:	000b5880 	sll	t3,t3,0x2
  41d4f8:	8f868634 	lw	a2,-31180(gp)
  41d4fc:	8c840000 	lw	a0,0(a0)
  41d500:	01655821 	addu	t3,t3,a1
  41d504:	0320f809 	jalr	t9
  41d508:	000b28c0 	sll	a1,t3,0x3
  41d50c:	8fbc0018 	lw	gp,24(sp)
  41d510:	00000000 	nop
  41d514:	8f8c897c 	lw	t4,-30340(gp)
  41d518:	00000000 	nop
  41d51c:	8d8c0000 	lw	t4,0(t4)
  41d520:	00000000 	nop
  41d524:	8d8d0044 	lw	t5,68(t4)
  41d528:	00000000 	nop
  41d52c:	ada20064 	sw	v0,100(t5)
  41d530:	8fbf001c 	lw	ra,28(sp)
  41d534:	27bd0020 	addiu	sp,sp,32
  41d538:	03e00008 	jr	ra
  41d53c:	00000000 	nop
