# Function: FAMSuspendMonitor
# Address: 0x0043a448 - 0x0043a4fc
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043a448 <FAMSuspendMonitor>:
  43a448:	3c1c0fbe 	lui	gp,0xfbe
  43a44c:	279c36e8 	addiu	gp,gp,14056
  43a450:	0399e021 	addu	gp,gp,t9
  43a454:	27bdf418 	addiu	sp,sp,-3048
  43a458:	8f998314 	lw	t9,-31980(gp)
  43a45c:	afbf0024 	sw	ra,36(sp)
  43a460:	afbc0020 	sw	gp,32(sp)
  43a464:	afa40be8 	sw	a0,3048(sp)
  43a468:	0320f809 	jalr	t9
  43a46c:	afa50bec 	sw	a1,3052(sp)
  43a470:	8fbc0020 	lw	gp,32(sp)
  43a474:	afa2002c 	sw	v0,44(sp)
  43a478:	8f9983d0 	lw	t9,-31792(gp)
  43a47c:	00000000 	nop
  43a480:	0320f809 	jalr	t9
  43a484:	00000000 	nop
  43a488:	8fbc0020 	lw	gp,32(sp)
  43a48c:	8fae0bec 	lw	t6,3052(sp)
  43a490:	8f85806c 	lw	a1,-32660(gp)
  43a494:	8f9983e4 	lw	t9,-31772(gp)
  43a498:	8fa7002c 	lw	a3,44(sp)
  43a49c:	8dc60000 	lw	a2,0(t6)
  43a4a0:	afa20010 	sw	v0,16(sp)
  43a4a4:	27a40030 	addiu	a0,sp,48
  43a4a8:	0320f809 	jalr	t9
  43a4ac:	24a59efc 	addiu	a1,a1,-24836
  43a4b0:	8fbc0020 	lw	gp,32(sp)
  43a4b4:	27a40030 	addiu	a0,sp,48
  43a4b8:	8f9983e0 	lw	t9,-31776(gp)
  43a4bc:	00000000 	nop
  43a4c0:	0320f809 	jalr	t9
  43a4c4:	00000000 	nop
  43a4c8:	8fbc0020 	lw	gp,32(sp)
  43a4cc:	8fa30be8 	lw	v1,3048(sp)
  43a4d0:	8f998900 	lw	t9,-30464(gp)
  43a4d4:	8c640004 	lw	a0,4(v1)
  43a4d8:	8c650000 	lw	a1,0(v1)
  43a4dc:	27a60030 	addiu	a2,sp,48
  43a4e0:	0320f809 	jalr	t9
  43a4e4:	24470001 	addiu	a3,v0,1
  43a4e8:	8fbf0024 	lw	ra,36(sp)
  43a4ec:	8fbc0020 	lw	gp,32(sp)
  43a4f0:	27bd0be8 	addiu	sp,sp,3048
  43a4f4:	03e00008 	jr	ra
  43a4f8:	00001025 	move	v0,zero
