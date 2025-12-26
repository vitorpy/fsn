# Function: swapcontext
# Address: 0x0042a77c - 0x0042a7c4
# Size: 0x48 (72 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a77c <swapcontext>:
  42a77c:	3c1c0fbf 	lui	gp,0xfbf
  42a780:	279c33b4 	addiu	gp,gp,13236
  42a784:	0399e021 	addu	gp,gp,t9
  42a788:	8f8e898c 	lw	t6,-30324(gp)
  42a78c:	27bdffe0 	addiu	sp,sp,-32
  42a790:	8f998768 	lw	t9,-30872(gp)
  42a794:	8dce0000 	lw	t6,0(t6)
  42a798:	afbf001c 	sw	ra,28(sp)
  42a79c:	afa40020 	sw	a0,32(sp)
  42a7a0:	308500ff 	andi	a1,a0,0xff
  42a7a4:	240f0001 	li	t7,1
  42a7a8:	afbc0018 	sw	gp,24(sp)
  42a7ac:	0320f809 	jalr	t9
  42a7b0:	01ee2023 	subu	a0,t7,t6
  42a7b4:	8fbf001c 	lw	ra,28(sp)
  42a7b8:	8fbc0018 	lw	gp,24(sp)
  42a7bc:	03e00008 	jr	ra
  42a7c0:	27bd0020 	addiu	sp,sp,32
