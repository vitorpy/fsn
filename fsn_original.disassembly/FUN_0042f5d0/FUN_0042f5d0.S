# Function: FUN_0042f5d0
# Address: 0x0042f5d0 - 0x0042f66c
# Size: 0x9c (156 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042f5d0 <createMarkControls+0x358>:
  42f5d0:	3c1c0fbf 	lui	gp,0xfbf
  42f5d4:	279ce560 	addiu	gp,gp,-6816
  42f5d8:	0399e021 	addu	gp,gp,t9
  42f5dc:	27bdffd8 	addiu	sp,sp,-40
  42f5e0:	afa40028 	sw	a0,40(sp)
  42f5e4:	8f84806c 	lw	a0,-32660(gp)
  42f5e8:	8f998468 	lw	t9,-31640(gp)
  42f5ec:	afbf001c 	sw	ra,28(sp)
  42f5f0:	afa5002c 	sw	a1,44(sp)
  42f5f4:	afa60030 	sw	a2,48(sp)
  42f5f8:	8c846ec4 	lw	a0,28356(a0)
  42f5fc:	afbc0018 	sw	gp,24(sp)
  42f600:	27a60020 	addiu	a2,sp,32
  42f604:	0320f809 	jalr	t9
  42f608:	27a50024 	addiu	a1,sp,36
  42f60c:	8fbc0018 	lw	gp,24(sp)
  42f610:	10400013 	beqz	v0,42f660 <createMarkControls+0x3e8>
  42f614:	8fbf001c 	lw	ra,28(sp)
  42f618:	8fae0020 	lw	t6,32(sp)
  42f61c:	8faf0024 	lw	t7,36(sp)
  42f620:	19c00008 	blez	t6,42f644 <createMarkControls+0x3cc>
  42f624:	00000000 	nop
  42f628:	8f998020 	lw	t9,-32736(gp)
  42f62c:	8de40000 	lw	a0,0(t7)
  42f630:	2739f124 	addiu	t9,t9,-3804
  42f634:	0320f809 	jalr	t9
  42f638:	2484ffff 	addiu	a0,a0,-1
  42f63c:	8fbc0018 	lw	gp,24(sp)
  42f640:	00000000 	nop
  42f644:	8f998174 	lw	t9,-32396(gp)
  42f648:	8fa40024 	lw	a0,36(sp)
  42f64c:	0320f809 	jalr	t9
  42f650:	00000000 	nop
  42f654:	8fbc0018 	lw	gp,24(sp)
  42f658:	00000000 	nop
  42f65c:	8fbf001c 	lw	ra,28(sp)
  42f660:	27bd0028 	addiu	sp,sp,40
  42f664:	03e00008 	jr	ra
  42f668:	00000000 	nop
