# Function: FUN_004216c0
# Address: 0x004216c0 - 0x00421774
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004216c0 <overviewPickPointer+0x304>:
  4216c0:	3c1c0fc0 	lui	gp,0xfc0
  4216c4:	279cc470 	addiu	gp,gp,-15248
  4216c8:	0399e021 	addu	gp,gp,t9
  4216cc:	27bdffd8 	addiu	sp,sp,-40
  4216d0:	8f8e897c 	lw	t6,-30340(gp)
  4216d4:	afbf001c 	sw	ra,28(sp)
  4216d8:	8dce0000 	lw	t6,0(t6)
  4216dc:	afbc0018 	sw	gp,24(sp)
  4216e0:	afa40028 	sw	a0,40(sp)
  4216e4:	afa5002c 	sw	a1,44(sp)
  4216e8:	afa60030 	sw	a2,48(sp)
  4216ec:	afa70034 	sw	a3,52(sp)
  4216f0:	8dcf003c 	lw	t7,60(t6)
  4216f4:	00000000 	nop
  4216f8:	15e0001b 	bnez	t7,421768 <overviewPickPointer+0x3ac>
  4216fc:	8fbf001c 	lw	ra,28(sp)
  421700:	8f998660 	lw	t9,-31136(gp)
  421704:	00000000 	nop
  421708:	0320f809 	jalr	t9
  42170c:	00000000 	nop
  421710:	8fbc0018 	lw	gp,24(sp)
  421714:	00000000 	nop
  421718:	8f998684 	lw	t9,-31100(gp)
  42171c:	00000000 	nop
  421720:	0320f809 	jalr	t9
  421724:	00000000 	nop
  421728:	8fbc0018 	lw	gp,24(sp)
  42172c:	1040000e 	beqz	v0,421768 <overviewPickPointer+0x3ac>
  421730:	8fbf001c 	lw	ra,28(sp)
  421734:	8f99854c 	lw	t9,-31412(gp)
  421738:	afa20024 	sw	v0,36(sp)
  42173c:	0320f809 	jalr	t9
  421740:	00000000 	nop
  421744:	8fbc0018 	lw	gp,24(sp)
  421748:	8fa40024 	lw	a0,36(sp)
  42174c:	8f99863c 	lw	t9,-31172(gp)
  421750:	00000000 	nop
  421754:	0320f809 	jalr	t9
  421758:	00000000 	nop
  42175c:	8fbc0018 	lw	gp,24(sp)
  421760:	00000000 	nop
  421764:	8fbf001c 	lw	ra,28(sp)
  421768:	27bd0028 	addiu	sp,sp,40
  42176c:	03e00008 	jr	ra
  421770:	00000000 	nop
