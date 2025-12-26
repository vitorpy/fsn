# Function: FAMResumeMonitor
# Address: 0x0043a4fc - 0x0043a5b0
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043a4fc <FAMResumeMonitor>:
  43a4fc:	3c1c0fbe 	lui	gp,0xfbe
  43a500:	279c3634 	addiu	gp,gp,13876
  43a504:	0399e021 	addu	gp,gp,t9
  43a508:	27bdf418 	addiu	sp,sp,-3048
  43a50c:	8f998314 	lw	t9,-31980(gp)
  43a510:	afbf0024 	sw	ra,36(sp)
  43a514:	afbc0020 	sw	gp,32(sp)
  43a518:	afa40be8 	sw	a0,3048(sp)
  43a51c:	0320f809 	jalr	t9
  43a520:	afa50bec 	sw	a1,3052(sp)
  43a524:	8fbc0020 	lw	gp,32(sp)
  43a528:	afa2002c 	sw	v0,44(sp)
  43a52c:	8f9983d0 	lw	t9,-31792(gp)
  43a530:	00000000 	nop
  43a534:	0320f809 	jalr	t9
  43a538:	00000000 	nop
  43a53c:	8fbc0020 	lw	gp,32(sp)
  43a540:	8fae0bec 	lw	t6,3052(sp)
  43a544:	8f85806c 	lw	a1,-32660(gp)
  43a548:	8f9983e4 	lw	t9,-31772(gp)
  43a54c:	8fa7002c 	lw	a3,44(sp)
  43a550:	8dc60000 	lw	a2,0(t6)
  43a554:	afa20010 	sw	v0,16(sp)
  43a558:	27a40030 	addiu	a0,sp,48
  43a55c:	0320f809 	jalr	t9
  43a560:	24a59f08 	addiu	a1,a1,-24824
  43a564:	8fbc0020 	lw	gp,32(sp)
  43a568:	27a40030 	addiu	a0,sp,48
  43a56c:	8f9983e0 	lw	t9,-31776(gp)
  43a570:	00000000 	nop
  43a574:	0320f809 	jalr	t9
  43a578:	00000000 	nop
  43a57c:	8fbc0020 	lw	gp,32(sp)
  43a580:	8fa30be8 	lw	v1,3048(sp)
  43a584:	8f998900 	lw	t9,-30464(gp)
  43a588:	8c640004 	lw	a0,4(v1)
  43a58c:	8c650000 	lw	a1,0(v1)
  43a590:	27a60030 	addiu	a2,sp,48
  43a594:	0320f809 	jalr	t9
  43a598:	24470001 	addiu	a3,v0,1
  43a59c:	8fbf0024 	lw	ra,36(sp)
  43a5a0:	8fbc0020 	lw	gp,32(sp)
  43a5a4:	27bd0be8 	addiu	sp,sp,3048
  43a5a8:	03e00008 	jr	ra
  43a5ac:	00001025 	move	v0,zero
