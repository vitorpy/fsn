# Function: FUN_0042f66c
# Address: 0x0042f66c - 0x0042f73c
# Size: 0xd0 (208 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042f66c <createMarkControls+0x3f4>:
  42f66c:	3c1c0fbf 	lui	gp,0xfbf
  42f670:	279ce4c4 	addiu	gp,gp,-6972
  42f674:	0399e021 	addu	gp,gp,t9
  42f678:	27bdffa0 	addiu	sp,sp,-96
  42f67c:	afa50064 	sw	a1,100(sp)
  42f680:	8f998154 	lw	t9,-32428(gp)
  42f684:	afbf001c 	sw	ra,28(sp)
  42f688:	afbc0018 	sw	gp,24(sp)
  42f68c:	afa40060 	sw	a0,96(sp)
  42f690:	8cc40008 	lw	a0,8(a2)
  42f694:	8f8580a0 	lw	a1,-32608(gp)
  42f698:	0320f809 	jalr	t9
  42f69c:	27a6005c 	addiu	a2,sp,92
  42f6a0:	8fbc0018 	lw	gp,24(sp)
  42f6a4:	10400022 	beqz	v0,42f730 <createMarkControls+0x4b8>
  42f6a8:	8fbf001c 	lw	ra,28(sp)
  42f6ac:	8f9983e0 	lw	t9,-31776(gp)
  42f6b0:	8fa4005c 	lw	a0,92(sp)
  42f6b4:	0320f809 	jalr	t9
  42f6b8:	00000000 	nop
  42f6bc:	8fbc0018 	lw	gp,24(sp)
  42f6c0:	10400014 	beqz	v0,42f714 <createMarkControls+0x49c>
  42f6c4:	00000000 	nop
  42f6c8:	8f9987b4 	lw	t9,-30796(gp)
  42f6cc:	27a40024 	addiu	a0,sp,36
  42f6d0:	0320f809 	jalr	t9
  42f6d4:	00000000 	nop
  42f6d8:	8fbc0018 	lw	gp,24(sp)
  42f6dc:	8fa4005c 	lw	a0,92(sp)
  42f6e0:	8f9987d8 	lw	t9,-30760(gp)
  42f6e4:	27a50024 	addiu	a1,sp,36
  42f6e8:	0320f809 	jalr	t9
  42f6ec:	00000000 	nop
  42f6f0:	8fbc0018 	lw	gp,24(sp)
  42f6f4:	00002825 	move	a1,zero
  42f6f8:	8f84806c 	lw	a0,-32660(gp)
  42f6fc:	8f998458 	lw	t9,-31656(gp)
  42f700:	8c846ec4 	lw	a0,28356(a0)
  42f704:	0320f809 	jalr	t9
  42f708:	00000000 	nop
  42f70c:	8fbc0018 	lw	gp,24(sp)
  42f710:	00000000 	nop
  42f714:	8f998174 	lw	t9,-32396(gp)
  42f718:	8fa4005c 	lw	a0,92(sp)
  42f71c:	0320f809 	jalr	t9
  42f720:	00000000 	nop
  42f724:	8fbc0018 	lw	gp,24(sp)
  42f728:	00000000 	nop
  42f72c:	8fbf001c 	lw	ra,28(sp)
  42f730:	27bd0060 	addiu	sp,sp,96
  42f734:	03e00008 	jr	ra
  42f738:	00000000 	nop
