# Function: FUN_004166c8
# Address: 0x004166c8 - 0x00416834
# Size: 0x16c (364 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004166c8 <rescanDatabase+0xfcc>:
  4166c8:	3c1c0fc0 	lui	gp,0xfc0
  4166cc:	279c7468 	addiu	gp,gp,29800
  4166d0:	0399e021 	addu	gp,gp,t9
  4166d4:	8f87806c 	lw	a3,-32660(gp)
  4166d8:	8f9982cc 	lw	t9,-32052(gp)
  4166dc:	27bdffa0 	addiu	sp,sp,-96
  4166e0:	afbf001c 	sw	ra,28(sp)
  4166e4:	8ce76690 	lw	a3,26256(a3)
  4166e8:	afbc0018 	sw	gp,24(sp)
  4166ec:	27a4005c 	addiu	a0,sp,92
  4166f0:	24050004 	li	a1,4
  4166f4:	0320f809 	jalr	t9
  4166f8:	24060001 	li	a2,1
  4166fc:	8fbc0018 	lw	gp,24(sp)
  416700:	24010001 	li	at,1
  416704:	1041000f 	beq	v0,at,416744 <rescanDatabase+0x1048>
  416708:	00000000 	nop
  41670c:	8f848098 	lw	a0,-32616(gp)
  416710:	8f85805c 	lw	a1,-32676(gp)
  416714:	8f9983f8 	lw	t9,-31752(gp)
  416718:	24840020 	addiu	a0,a0,32
  41671c:	0320f809 	jalr	t9
  416720:	24a5ab40 	addiu	a1,a1,-21696
  416724:	8fbc0018 	lw	gp,24(sp)
  416728:	24040001 	li	a0,1
  41672c:	8f9983a0 	lw	t9,-31840(gp)
  416730:	00000000 	nop
  416734:	0320f809 	jalr	t9
  416738:	00000000 	nop
  41673c:	8fbc0018 	lw	gp,24(sp)
  416740:	00000000 	nop
  416744:	8f998770 	lw	t9,-30864(gp)
  416748:	00000000 	nop
  41674c:	0320f809 	jalr	t9
  416750:	00000000 	nop
  416754:	93ae005e 	lbu	t6,94(sp)
  416758:	8fbc0018 	lw	gp,24(sp)
  41675c:	15c00008 	bnez	t6,416780 <rescanDatabase+0x1084>
  416760:	00000000 	nop
  416764:	8f998768 	lw	t9,-30872(gp)
  416768:	24040001 	li	a0,1
  41676c:	0320f809 	jalr	t9
  416770:	24050001 	li	a1,1
  416774:	8fbc0018 	lw	gp,24(sp)
  416778:	10000014 	b	4167cc <rescanDatabase+0x10d0>
  41677c:	00000000 	nop
  416780:	8f8f8a58 	lw	t7,-30120(gp)
  416784:	00000000 	nop
  416788:	91ef0c51 	lbu	t7,3153(t7)
  41678c:	00000000 	nop
  416790:	15e00008 	bnez	t7,4167b4 <rescanDatabase+0x10b8>
  416794:	00000000 	nop
  416798:	8f998768 	lw	t9,-30872(gp)
  41679c:	00002025 	move	a0,zero
  4167a0:	0320f809 	jalr	t9
  4167a4:	24050001 	li	a1,1
  4167a8:	8fbc0018 	lw	gp,24(sp)
  4167ac:	10000007 	b	4167cc <rescanDatabase+0x10d0>
  4167b0:	00000000 	nop
  4167b4:	8f998768 	lw	t9,-30872(gp)
  4167b8:	87a4005c 	lh	a0,92(sp)
  4167bc:	0320f809 	jalr	t9
  4167c0:	24050001 	li	a1,1
  4167c4:	8fbc0018 	lw	gp,24(sp)
  4167c8:	00000000 	nop
  4167cc:	8f85806c 	lw	a1,-32660(gp)
  4167d0:	8f9987d4 	lw	t9,-30764(gp)
  4167d4:	8ca56690 	lw	a1,26256(a1)
  4167d8:	0320f809 	jalr	t9
  4167dc:	27a40024 	addiu	a0,sp,36
  4167e0:	8fbc0018 	lw	gp,24(sp)
  4167e4:	27a40024 	addiu	a0,sp,36
  4167e8:	8f9987c0 	lw	t9,-30784(gp)
  4167ec:	00000000 	nop
  4167f0:	0320f809 	jalr	t9
  4167f4:	00000000 	nop
  4167f8:	8fbc0018 	lw	gp,24(sp)
  4167fc:	93b8005e 	lbu	t8,94(sp)
  416800:	8f99897c 	lw	t9,-30340(gp)
  416804:	00000000 	nop
  416808:	8f390000 	lw	t9,0(t9)
  41680c:	00000000 	nop
  416810:	a3380c51 	sb	t8,3153(t9)
  416814:	8f998774 	lw	t9,-30860(gp)
  416818:	00000000 	nop
  41681c:	0320f809 	jalr	t9
  416820:	00000000 	nop
  416824:	8fbf001c 	lw	ra,28(sp)
  416828:	8fbc0018 	lw	gp,24(sp)
  41682c:	03e00008 	jr	ra
  416830:	27bd0060 	addiu	sp,sp,96
