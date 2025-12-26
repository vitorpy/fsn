# Function: restorePositions
# Address: 0x0042e5b8 - 0x0042e664
# Size: 0xac (172 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042e5b8 <restorePositions>:
  42e5b8:	3c1c0fbf 	lui	gp,0xfbf
  42e5bc:	279cf578 	addiu	gp,gp,-2696
  42e5c0:	0399e021 	addu	gp,gp,t9
  42e5c4:	8f84806c 	lw	a0,-32660(gp)
  42e5c8:	8f9987c0 	lw	t9,-30784(gp)
  42e5cc:	27bdffe0 	addiu	sp,sp,-32
  42e5d0:	afbf001c 	sw	ra,28(sp)
  42e5d4:	afbc0018 	sw	gp,24(sp)
  42e5d8:	0320f809 	jalr	t9
  42e5dc:	24846e50 	addiu	a0,a0,28240
  42e5e0:	8fbc0018 	lw	gp,24(sp)
  42e5e4:	00000000 	nop
  42e5e8:	8f8e8980 	lw	t6,-30336(gp)
  42e5ec:	00000000 	nop
  42e5f0:	8dce0000 	lw	t6,0(t6)
  42e5f4:	00000000 	nop
  42e5f8:	91cf0c51 	lbu	t7,3153(t6)
  42e5fc:	00000000 	nop
  42e600:	11e00015 	beqz	t7,42e658 <restorePositions+0xa0>
  42e604:	8fbf001c 	lw	ra,28(sp)
  42e608:	8f99876c 	lw	t9,-30868(gp)
  42e60c:	24040001 	li	a0,1
  42e610:	0320f809 	jalr	t9
  42e614:	00000000 	nop
  42e618:	8fbc0018 	lw	gp,24(sp)
  42e61c:	00000000 	nop
  42e620:	8f84806c 	lw	a0,-32660(gp)
  42e624:	8f9987c0 	lw	t9,-30784(gp)
  42e628:	24846e88 	addiu	a0,a0,28296
  42e62c:	0320f809 	jalr	t9
  42e630:	00000000 	nop
  42e634:	8fbc0018 	lw	gp,24(sp)
  42e638:	24040001 	li	a0,1
  42e63c:	8f99876c 	lw	t9,-30868(gp)
  42e640:	00000000 	nop
  42e644:	0320f809 	jalr	t9
  42e648:	00000000 	nop
  42e64c:	8fbc0018 	lw	gp,24(sp)
  42e650:	00000000 	nop
  42e654:	8fbf001c 	lw	ra,28(sp)
  42e658:	27bd0020 	addiu	sp,sp,32
  42e65c:	03e00008 	jr	ra
  42e660:	00000000 	nop
