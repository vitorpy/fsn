# Function: setcontext
# Address: 0x0042a820 - 0x0042a88c
# Size: 0x6c (108 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a820 <setcontext>:
  42a820:	3c1c0fbf 	lui	gp,0xfbf
  42a824:	279c3310 	addiu	gp,gp,13072
  42a828:	0399e021 	addu	gp,gp,t9
  42a82c:	8f828988 	lw	v0,-30328(gp)
  42a830:	27bdffe0 	addiu	sp,sp,-32
  42a834:	8c420000 	lw	v0,0(v0)
  42a838:	afbf001c 	sw	ra,28(sp)
  42a83c:	afbc0018 	sw	gp,24(sp)
  42a840:	afa50024 	sw	a1,36(sp)
  42a844:	8c4f0008 	lw	t7,8(v0)
  42a848:	30ae00ff 	andi	t6,a1,0xff
  42a84c:	108f0005 	beq	a0,t7,42a864 <setcontext+0x44>
  42a850:	01c02825 	move	a1,t6
  42a854:	8c58000c 	lw	t8,12(v0)
  42a858:	00000000 	nop
  42a85c:	14980008 	bne	a0,t8,42a880 <setcontext+0x60>
  42a860:	8fbf001c 	lw	ra,28(sp)
  42a864:	8f99876c 	lw	t9,-30868(gp)
  42a868:	00a02025 	move	a0,a1
  42a86c:	0320f809 	jalr	t9
  42a870:	00000000 	nop
  42a874:	8fbc0018 	lw	gp,24(sp)
  42a878:	00000000 	nop
  42a87c:	8fbf001c 	lw	ra,28(sp)
  42a880:	27bd0020 	addiu	sp,sp,32
  42a884:	03e00008 	jr	ra
  42a888:	00000000 	nop
