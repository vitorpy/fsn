# Function: FUN_0042b08c
# Address: 0x0042b08c - 0x0042b0b8
# Size: 0x2c (44 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b08c <destroyCopyright+0xc>:
  42b08c:	8f84806c 	lw	a0,-32660(gp)
  42b090:	8f998138 	lw	t9,-32456(gp)
  42b094:	27bdffe0 	addiu	sp,sp,-32
  42b098:	afbf001c 	sw	ra,28(sp)
  42b09c:	8c846e10 	lw	a0,28176(a0)
  42b0a0:	0320f809 	jalr	t9
  42b0a4:	afbc0018 	sw	gp,24(sp)
  42b0a8:	8fbf001c 	lw	ra,28(sp)
  42b0ac:	8fbc0018 	lw	gp,24(sp)
  42b0b0:	03e00008 	jr	ra
  42b0b4:	27bd0020 	addiu	sp,sp,32
