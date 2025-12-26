# Function: FUN_0042a440
# Address: 0x0042a440 - 0x0042a4bc
# Size: 0x7c (124 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a440 <viewFile+0x478>:
  42a440:	3c1c0fbf 	lui	gp,0xfbf
  42a444:	279c36f0 	addiu	gp,gp,14064
  42a448:	0399e021 	addu	gp,gp,t9
  42a44c:	27bdffe0 	addiu	sp,sp,-32
  42a450:	8f998778 	lw	t9,-30856(gp)
  42a454:	afa40020 	sw	a0,32(sp)
  42a458:	afbf001c 	sw	ra,28(sp)
  42a45c:	00a02025 	move	a0,a1
  42a460:	afbc0018 	sw	gp,24(sp)
  42a464:	afa60028 	sw	a2,40(sp)
  42a468:	0320f809 	jalr	t9
  42a46c:	00002825 	move	a1,zero
  42a470:	8fae0028 	lw	t6,40(sp)
  42a474:	8fbc0018 	lw	gp,24(sp)
  42a478:	8dcf0034 	lw	t7,52(t6)
  42a47c:	24010001 	li	at,1
  42a480:	15e1000b 	bne	t7,at,42a4b0 <viewFile+0x4e8>
  42a484:	8fbf001c 	lw	ra,28(sp)
  42a488:	8f988984 	lw	t8,-30332(gp)
  42a48c:	8f998490 	lw	t9,-31600(gp)
  42a490:	8f180000 	lw	t8,0(t8)
  42a494:	00000000 	nop
  42a498:	8f040010 	lw	a0,16(t8)
  42a49c:	0320f809 	jalr	t9
  42a4a0:	00000000 	nop
  42a4a4:	8fbc0018 	lw	gp,24(sp)
  42a4a8:	00000000 	nop
  42a4ac:	8fbf001c 	lw	ra,28(sp)
  42a4b0:	27bd0020 	addiu	sp,sp,32
  42a4b4:	03e00008 	jr	ra
  42a4b8:	00000000 	nop
