# Function: restorecontext
# Address: 0x0042a7e4 - 0x0042a820
# Size: 0x3c (60 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a7e4 <restorecontext>:
  42a7e4:	3c1c0fbf 	lui	gp,0xfbf
  42a7e8:	279c334c 	addiu	gp,gp,13132
  42a7ec:	0399e021 	addu	gp,gp,t9
  42a7f0:	8f84806c 	lw	a0,-32660(gp)
  42a7f4:	8f998768 	lw	t9,-30872(gp)
  42a7f8:	27bdffe0 	addiu	sp,sp,-32
  42a7fc:	afbf001c 	sw	ra,28(sp)
  42a800:	8c846e00 	lw	a0,28160(a0)
  42a804:	afbc0018 	sw	gp,24(sp)
  42a808:	0320f809 	jalr	t9
  42a80c:	24050001 	li	a1,1
  42a810:	8fbf001c 	lw	ra,28(sp)
  42a814:	8fbc0018 	lw	gp,24(sp)
  42a818:	03e00008 	jr	ra
  42a81c:	27bd0020 	addiu	sp,sp,32
