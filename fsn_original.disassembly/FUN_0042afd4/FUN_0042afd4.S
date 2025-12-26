# Function: FUN_0042afd4
# Address: 0x0042afd4 - 0x0042b024
# Size: 0x50 (80 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042afd4 <readingDatabaseMessage+0xc>:
  42afd4:	8f84806c 	lw	a0,-32660(gp)
  42afd8:	8f998194 	lw	t9,-32364(gp)
  42afdc:	27bdffe0 	addiu	sp,sp,-32
  42afe0:	afbf001c 	sw	ra,28(sp)
  42afe4:	8c846e10 	lw	a0,28176(a0)
  42afe8:	0320f809 	jalr	t9
  42afec:	afbc0018 	sw	gp,24(sp)
  42aff0:	8fbc0018 	lw	gp,24(sp)
  42aff4:	00402825 	move	a1,v0
  42aff8:	8f84806c 	lw	a0,-32660(gp)
  42affc:	8f868068 	lw	a2,-32664(gp)
  42b000:	8f998190 	lw	t9,-32368(gp)
  42b004:	8c846e10 	lw	a0,28176(a0)
  42b008:	8cc67b60 	lw	a2,31584(a2)
  42b00c:	0320f809 	jalr	t9
  42b010:	00000000 	nop
  42b014:	8fbf001c 	lw	ra,28(sp)
  42b018:	8fbc0018 	lw	gp,24(sp)
  42b01c:	03e00008 	jr	ra
  42b020:	27bd0020 	addiu	sp,sp,32
