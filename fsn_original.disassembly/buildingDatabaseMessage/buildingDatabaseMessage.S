# Function: buildingDatabaseMessage
# Address: 0x0042b024 - 0x0042b080
# Size: 0x5c (92 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b024 <buildingDatabaseMessage>:
  42b024:	3c1c0fbf 	lui	gp,0xfbf
  42b028:	279c2b0c 	addiu	gp,gp,11020
  42b02c:	0399e021 	addu	gp,gp,t9
  42b030:	8f84806c 	lw	a0,-32660(gp)
  42b034:	8f998194 	lw	t9,-32364(gp)
  42b038:	27bdffe0 	addiu	sp,sp,-32
  42b03c:	afbf001c 	sw	ra,28(sp)
  42b040:	8c846e10 	lw	a0,28176(a0)
  42b044:	0320f809 	jalr	t9
  42b048:	afbc0018 	sw	gp,24(sp)
  42b04c:	8fbc0018 	lw	gp,24(sp)
  42b050:	00402825 	move	a1,v0
  42b054:	8f84806c 	lw	a0,-32660(gp)
  42b058:	8f868068 	lw	a2,-32664(gp)
  42b05c:	8f998190 	lw	t9,-32368(gp)
  42b060:	8c846e10 	lw	a0,28176(a0)
  42b064:	8cc67b64 	lw	a2,31588(a2)
  42b068:	0320f809 	jalr	t9
  42b06c:	00000000 	nop
  42b070:	8fbf001c 	lw	ra,28(sp)
  42b074:	8fbc0018 	lw	gp,24(sp)
  42b078:	03e00008 	jr	ra
  42b07c:	27bd0020 	addiu	sp,sp,32
