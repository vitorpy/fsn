# Function: FUN_0042b5ac
# Address: 0x0042b5ac - 0x0042b6b4
# Size: 0x108 (264 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b5ac <createHelpMenu+0x4f4>:
  42b5ac:	3c1c0fbf 	lui	gp,0xfbf
  42b5b0:	279c2584 	addiu	gp,gp,9604
  42b5b4:	0399e021 	addu	gp,gp,t9
  42b5b8:	27bdffd8 	addiu	sp,sp,-40
  42b5bc:	afa5002c 	sw	a1,44(sp)
  42b5c0:	8f858068 	lw	a1,-32664(gp)
  42b5c4:	afbf0024 	sw	ra,36(sp)
  42b5c8:	8ca57c28 	lw	a1,31784(a1)
  42b5cc:	afbc0020 	sw	gp,32(sp)
  42b5d0:	afb2001c 	sw	s2,28(sp)
  42b5d4:	afb10018 	sw	s1,24(sp)
  42b5d8:	afb00014 	sw	s0,20(sp)
  42b5dc:	afa40028 	sw	a0,40(sp)
  42b5e0:	14a00008 	bnez	a1,42b604 <createHelpMenu+0x54c>
  42b5e4:	afa60030 	sw	a2,48(sp)
  42b5e8:	8f848a04 	lw	a0,-30204(gp)
  42b5ec:	8f998184 	lw	t9,-32380(gp)
  42b5f0:	8c840000 	lw	a0,0(a0)
  42b5f4:	0320f809 	jalr	t9
  42b5f8:	2405005c 	li	a1,92
  42b5fc:	8fbc0020 	lw	gp,32(sp)
  42b600:	00402825 	move	a1,v0
  42b604:	8f848a10 	lw	a0,-30192(gp)
  42b608:	8f818068 	lw	at,-32664(gp)
  42b60c:	8f998180 	lw	t9,-32384(gp)
  42b610:	8c840000 	lw	a0,0(a0)
  42b614:	00003025 	move	a2,zero
  42b618:	0320f809 	jalr	t9
  42b61c:	ac257c28 	sw	a1,31784(at)
  42b620:	8fbc0020 	lw	gp,32(sp)
  42b624:	1040001d 	beqz	v0,42b69c <createHelpMenu+0x5e4>
  42b628:	00408025 	move	s0,v0
  42b62c:	8faf0030 	lw	t7,48(sp)
  42b630:	8f9280a0 	lw	s2,-32608(gp)
  42b634:	240e0001 	li	t6,1
  42b638:	24110002 	li	s1,2
  42b63c:	adee0000 	sw	t6,0(t7)
  42b640:	26521b37 	addiu	s2,s2,6967
  42b644:	8f9981a0 	lw	t9,-32352(gp)
  42b648:	02002025 	move	a0,s0
  42b64c:	0320f809 	jalr	t9
  42b650:	02402825 	move	a1,s2
  42b654:	8fbc0020 	lw	gp,32(sp)
  42b658:	14510009 	bne	v0,s1,42b680 <createHelpMenu+0x5c8>
  42b65c:	00000000 	nop
  42b660:	8f9981b8 	lw	t9,-32328(gp)
  42b664:	02002025 	move	a0,s0
  42b668:	02402825 	move	a1,s2
  42b66c:	0320f809 	jalr	t9
  42b670:	27a60030 	addiu	a2,sp,48
  42b674:	8fbc0020 	lw	gp,32(sp)
  42b678:	10000009 	b	42b6a0 <createHelpMenu+0x5e8>
  42b67c:	8fbf0024 	lw	ra,36(sp)
  42b680:	8f9981bc 	lw	t9,-32324(gp)
  42b684:	02002025 	move	a0,s0
  42b688:	0320f809 	jalr	t9
  42b68c:	00000000 	nop
  42b690:	8fbc0020 	lw	gp,32(sp)
  42b694:	1440ffeb 	bnez	v0,42b644 <createHelpMenu+0x58c>
  42b698:	00408025 	move	s0,v0
  42b69c:	8fbf0024 	lw	ra,36(sp)
  42b6a0:	8fb00014 	lw	s0,20(sp)
  42b6a4:	8fb10018 	lw	s1,24(sp)
  42b6a8:	8fb2001c 	lw	s2,28(sp)
  42b6ac:	03e00008 	jr	ra
  42b6b0:	27bd0028 	addiu	sp,sp,40
