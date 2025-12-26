# Function: FUN_0043a5bc
# Address: 0x0043a5bc - 0x0043a664
# Size: 0xa8 (168 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043a5bc <FAMCancelMonitor+0xc>:
  43a5bc:	27bdf418 	addiu	sp,sp,-3048
  43a5c0:	8f998314 	lw	t9,-31980(gp)
  43a5c4:	afbf0024 	sw	ra,36(sp)
  43a5c8:	afbc0020 	sw	gp,32(sp)
  43a5cc:	afa40be8 	sw	a0,3048(sp)
  43a5d0:	0320f809 	jalr	t9
  43a5d4:	afa50bec 	sw	a1,3052(sp)
  43a5d8:	8fbc0020 	lw	gp,32(sp)
  43a5dc:	afa2002c 	sw	v0,44(sp)
  43a5e0:	8f9983d0 	lw	t9,-31792(gp)
  43a5e4:	00000000 	nop
  43a5e8:	0320f809 	jalr	t9
  43a5ec:	00000000 	nop
  43a5f0:	8fbc0020 	lw	gp,32(sp)
  43a5f4:	8fae0bec 	lw	t6,3052(sp)
  43a5f8:	8f85806c 	lw	a1,-32660(gp)
  43a5fc:	8f9983e4 	lw	t9,-31772(gp)
  43a600:	8fa7002c 	lw	a3,44(sp)
  43a604:	8dc60000 	lw	a2,0(t6)
  43a608:	afa20010 	sw	v0,16(sp)
  43a60c:	27a40030 	addiu	a0,sp,48
  43a610:	0320f809 	jalr	t9
  43a614:	24a59f14 	addiu	a1,a1,-24812
  43a618:	8fbc0020 	lw	gp,32(sp)
  43a61c:	27a40030 	addiu	a0,sp,48
  43a620:	8f9983e0 	lw	t9,-31776(gp)
  43a624:	00000000 	nop
  43a628:	0320f809 	jalr	t9
  43a62c:	00000000 	nop
  43a630:	8fbc0020 	lw	gp,32(sp)
  43a634:	8fa30be8 	lw	v1,3048(sp)
  43a638:	8f998900 	lw	t9,-30464(gp)
  43a63c:	8c640004 	lw	a0,4(v1)
  43a640:	8c650000 	lw	a1,0(v1)
  43a644:	27a60030 	addiu	a2,sp,48
  43a648:	0320f809 	jalr	t9
  43a64c:	24470001 	addiu	a3,v0,1
  43a650:	8fbf0024 	lw	ra,36(sp)
  43a654:	8fbc0020 	lw	gp,32(sp)
  43a658:	27bd0be8 	addiu	sp,sp,3048
  43a65c:	03e00008 	jr	ra
  43a660:	00001025 	move	v0,zero
