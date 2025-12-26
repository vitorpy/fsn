# Function: __std__1251b_3102d580
# Address: 0x00435704 - 0x0043573c
# Size: 0x38 (56 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00435704 <__std__1251b_3102d580>:
  435704:	3c1c0fbf 	lui	gp,0xfbf
  435708:	279c842c 	addiu	gp,gp,-31700
  43570c:	0399e021 	addu	gp,gp,t9
  435710:	8f998898 	lw	t9,-30568(gp)
  435714:	27bdffe0 	addiu	sp,sp,-32
  435718:	afbf001c 	sw	ra,28(sp)
  43571c:	8f8489ec 	lw	a0,-30228(gp)
  435720:	afbc0018 	sw	gp,24(sp)
  435724:	0320f809 	jalr	t9
  435728:	24050002 	li	a1,2
  43572c:	8fbf001c 	lw	ra,28(sp)
  435730:	8fbc0018 	lw	gp,24(sp)
  435734:	03e00008 	jr	ra
  435738:	27bd0020 	addiu	sp,sp,32
