# Function: FUN_00427de0
# Address: 0x00427de0 - 0x00427e24
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00427de0 <dirfamDone+0xc>:
  427de0:	8f8e8a24 	lw	t6,-30172(gp)
  427de4:	27bdffe0 	addiu	sp,sp,-32
  427de8:	91ce0000 	lbu	t6,0(t6)
  427dec:	afbf001c 	sw	ra,28(sp)
  427df0:	15c00008 	bnez	t6,427e14 <dirfamDone+0x40>
  427df4:	afbc0018 	sw	gp,24(sp)
  427df8:	8f84806c 	lw	a0,-32660(gp)
  427dfc:	8f9988e0 	lw	t9,-30496(gp)
  427e00:	24846c70 	addiu	a0,a0,27760
  427e04:	0320f809 	jalr	t9
  427e08:	00000000 	nop
  427e0c:	8fbc0018 	lw	gp,24(sp)
  427e10:	00000000 	nop
  427e14:	8fbf001c 	lw	ra,28(sp)
  427e18:	27bd0020 	addiu	sp,sp,32
  427e1c:	03e00008 	jr	ra
  427e20:	00000000 	nop
