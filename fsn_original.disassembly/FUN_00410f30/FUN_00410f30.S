# Function: FUN_00410f30
# Address: 0x00410f30 - 0x00410f68
# Size: 0x38 (56 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00410f30 <filemessage+0xc0>:
  410f30:	3c1c0fc1 	lui	gp,0xfc1
  410f34:	279ccc00 	addiu	gp,gp,-13312
  410f38:	0399e021 	addu	gp,gp,t9
  410f3c:	27bdffe0 	addiu	sp,sp,-32
  410f40:	8f998138 	lw	t9,-32456(gp)
  410f44:	afbf001c 	sw	ra,28(sp)
  410f48:	afbc0018 	sw	gp,24(sp)
  410f4c:	afa50024 	sw	a1,36(sp)
  410f50:	0320f809 	jalr	t9
  410f54:	afa60028 	sw	a2,40(sp)
  410f58:	8fbf001c 	lw	ra,28(sp)
  410f5c:	8fbc0018 	lw	gp,24(sp)
  410f60:	03e00008 	jr	ra
  410f64:	27bd0020 	addiu	sp,sp,32
