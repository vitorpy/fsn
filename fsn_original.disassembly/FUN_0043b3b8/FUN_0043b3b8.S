# Function: FUN_0043b3b8
# Address: 0x0043b3b8 - 0x0043b524
# Size: 0x16c (364 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043b3b8 <DoClientIn__6ClientFP11ServerEntry+0xc>:
  43b3b8:	27bdffc0 	addiu	sp,sp,-64
  43b3bc:	afbf001c 	sw	ra,28(sp)
  43b3c0:	afbc0018 	sw	gp,24(sp)
  43b3c4:	afa40040 	sw	a0,64(sp)
  43b3c8:	8cae0010 	lw	t6,16(a1)
  43b3cc:	00a03825 	move	a3,a1
  43b3d0:	11c00003 	beqz	t6,43b3e0 <DoClientIn__6ClientFP11ServerEntry+0x34>
  43b3d4:	00000000 	nop
  43b3d8:	1000004e 	b	43b514 <DoClientIn__6ClientFP11ServerEntry+0x168>
  43b3dc:	00001025 	move	v0,zero
  43b3e0:	8ce40014 	lw	a0,20(a3)
  43b3e4:	24e6001c 	addiu	a2,a3,28
  43b3e8:	10c40011 	beq	a2,a0,43b430 <DoClientIn__6ClientFP11ServerEntry+0x84>
  43b3ec:	00000000 	nop
  43b3f0:	8cef0018 	lw	t7,24(a3)
  43b3f4:	00801025 	move	v0,a0
  43b3f8:	008f082b 	sltu	at,a0,t7
  43b3fc:	1020000a 	beqz	at,43b428 <DoClientIn__6ClientFP11ServerEntry+0x7c>
  43b400:	00c02825 	move	a1,a2
  43b404:	00402025 	move	a0,v0
  43b408:	90980000 	lbu	t8,0(a0)
  43b40c:	00a01825 	move	v1,a1
  43b410:	a0780000 	sb	t8,0(v1)
  43b414:	8cf90018 	lw	t9,24(a3)
  43b418:	24420001 	addiu	v0,v0,1
  43b41c:	0059082b 	sltu	at,v0,t9
  43b420:	1420fff8 	bnez	at,43b404 <DoClientIn__6ClientFP11ServerEntry+0x58>
  43b424:	24a50001 	addiu	a1,a1,1
  43b428:	ace60014 	sw	a2,20(a3)
  43b42c:	ace50018 	sw	a1,24(a3)
  43b430:	8ce50018 	lw	a1,24(a3)
  43b434:	8f9981ec 	lw	t9,-32276(gp)
  43b438:	8ce40000 	lw	a0,0(a3)
  43b43c:	00e53023 	subu	a2,a3,a1
  43b440:	24c60bd4 	addiu	a2,a2,3028
  43b444:	0320f809 	jalr	t9
  43b448:	afa70044 	sw	a3,68(sp)
  43b44c:	8fbc0018 	lw	gp,24(sp)
  43b450:	8fa70044 	lw	a3,68(sp)
  43b454:	2401ffff 	li	at,-1
  43b458:	14410003 	bne	v0,at,43b468 <DoClientIn__6ClientFP11ServerEntry+0xbc>
  43b45c:	00000000 	nop
  43b460:	1000002c 	b	43b514 <DoClientIn__6ClientFP11ServerEntry+0x168>
  43b464:	2402ffff 	li	v0,-1
  43b468:	14400004 	bnez	v0,43b47c <DoClientIn__6ClientFP11ServerEntry+0xd0>
  43b46c:	24080001 	li	t0,1
  43b470:	ace8179c 	sw	t0,6044(a3)
  43b474:	10000027 	b	43b514 <DoClientIn__6ClientFP11ServerEntry+0x168>
  43b478:	00001025 	move	v0,zero
  43b47c:	8ce90018 	lw	t1,24(a3)
  43b480:	240e0001 	li	t6,1
  43b484:	01225021 	addu	t2,t1,v0
  43b488:	01476023 	subu	t4,t2,a3
  43b48c:	258dffe4 	addiu	t5,t4,-28
  43b490:	29a10bb8 	slti	at,t5,3000
  43b494:	14200003 	bnez	at,43b4a4 <DoClientIn__6ClientFP11ServerEntry+0xf8>
  43b498:	acea0018 	sw	t2,24(a3)
  43b49c:	10000002 	b	43b4a8 <DoClientIn__6ClientFP11ServerEntry+0xfc>
  43b4a0:	acee0010 	sw	t6,16(a3)
  43b4a4:	ace00010 	sw	zero,16(a3)
  43b4a8:	8ce40014 	lw	a0,20(a3)
  43b4ac:	8cef0018 	lw	t7,24(a3)
  43b4b0:	00000000 	nop
  43b4b4:	01e4c023 	subu	t8,t7,a0
  43b4b8:	2f010004 	sltiu	at,t8,4
  43b4bc:	10200003 	beqz	at,43b4cc <DoClientIn__6ClientFP11ServerEntry+0x120>
  43b4c0:	00000000 	nop
  43b4c4:	10000012 	b	43b510 <DoClientIn__6ClientFP11ServerEntry+0x164>
  43b4c8:	ace0000c 	sw	zero,12(a3)
  43b4cc:	8f99890c 	lw	t9,-30452(gp)
  43b4d0:	27a5003c 	addiu	a1,sp,60
  43b4d4:	0320f809 	jalr	t9
  43b4d8:	afa70044 	sw	a3,68(sp)
  43b4dc:	8fa70044 	lw	a3,68(sp)
  43b4e0:	8faa003c 	lw	t2,60(sp)
  43b4e4:	8cf90018 	lw	t9,24(a3)
  43b4e8:	8ce80014 	lw	t0,20(a3)
  43b4ec:	254b0004 	addiu	t3,t2,4
  43b4f0:	03284823 	subu	t1,t9,t0
  43b4f4:	8fbc0018 	lw	gp,24(sp)
  43b4f8:	012b082b 	sltu	at,t1,t3
  43b4fc:	14200003 	bnez	at,43b50c <DoClientIn__6ClientFP11ServerEntry+0x160>
  43b500:	240c0001 	li	t4,1
  43b504:	10000002 	b	43b510 <DoClientIn__6ClientFP11ServerEntry+0x164>
  43b508:	acec000c 	sw	t4,12(a3)
  43b50c:	ace0000c 	sw	zero,12(a3)
  43b510:	00001025 	move	v0,zero
  43b514:	8fbf001c 	lw	ra,28(sp)
  43b518:	27bd0040 	addiu	sp,sp,64
  43b51c:	03e00008 	jr	ra
  43b520:	00000000 	nop
