# Function: check_unmonitor_dp
# Address: 0x0041d350 - 0x0041d418
# Size: 0xc8 (200 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041d350 <check_unmonitor_dp>:
  41d350:	3c1c0fc0 	lui	gp,0xfc0
  41d354:	279c07e0 	addiu	gp,gp,2016
  41d358:	0399e021 	addu	gp,gp,t9
  41d35c:	27bdffe0 	addiu	sp,sp,-32
  41d360:	afbf001c 	sw	ra,28(sp)
  41d364:	afbc0018 	sw	gp,24(sp)
  41d368:	8c820074 	lw	v0,116(a0)
  41d36c:	00802825 	move	a1,a0
  41d370:	000278c0 	sll	t7,v0,0x3
  41d374:	05e10024 	bgez	t7,41d408 <check_unmonitor_dp+0xb8>
  41d378:	ac800064 	sw	zero,100(a0)
  41d37c:	0002c280 	sll	t8,v0,0xa
  41d380:	0018cfc2 	srl	t9,t8,0x1f
  41d384:	13200020 	beqz	t9,41d408 <check_unmonitor_dp+0xb8>
  41d388:	00024ac0 	sll	t1,v0,0xb
  41d38c:	0520001f 	bltz	t1,41d40c <check_unmonitor_dp+0xbc>
  41d390:	8fbf001c 	lw	ra,28(sp)
  41d394:	8f8a897c 	lw	t2,-30340(gp)
  41d398:	00000000 	nop
  41d39c:	8d4a0000 	lw	t2,0(t2)
  41d3a0:	00000000 	nop
  41d3a4:	8d4b0044 	lw	t3,68(t2)
  41d3a8:	00000000 	nop
  41d3ac:	108b0017 	beq	a0,t3,41d40c <check_unmonitor_dp+0xbc>
  41d3b0:	8fbf001c 	lw	ra,28(sp)
  41d3b4:	8f838980 	lw	v1,-30336(gp)
  41d3b8:	00002025 	move	a0,zero
  41d3bc:	8c630000 	lw	v1,0(v1)
  41d3c0:	00027380 	sll	t6,v0,0xe
  41d3c4:	906c0c51 	lbu	t4,3153(v1)
  41d3c8:	00000000 	nop
  41d3cc:	11800004 	beqz	t4,41d3e0 <check_unmonitor_dp+0x90>
  41d3d0:	00000000 	nop
  41d3d4:	8c640044 	lw	a0,68(v1)
  41d3d8:	10000001 	b	41d3e0 <check_unmonitor_dp+0x90>
  41d3dc:	00000000 	nop
  41d3e0:	1085000a 	beq	a0,a1,41d40c <check_unmonitor_dp+0xbc>
  41d3e4:	8fbf001c 	lw	ra,28(sp)
  41d3e8:	05c00008 	bltz	t6,41d40c <check_unmonitor_dp+0xbc>
  41d3ec:	8fbf001c 	lw	ra,28(sp)
  41d3f0:	8f998718 	lw	t9,-30952(gp)
  41d3f4:	00a02025 	move	a0,a1
  41d3f8:	0320f809 	jalr	t9
  41d3fc:	00000000 	nop
  41d400:	8fbc0018 	lw	gp,24(sp)
  41d404:	00000000 	nop
  41d408:	8fbf001c 	lw	ra,28(sp)
  41d40c:	27bd0020 	addiu	sp,sp,32
  41d410:	03e00008 	jr	ra
  41d414:	00000000 	nop
