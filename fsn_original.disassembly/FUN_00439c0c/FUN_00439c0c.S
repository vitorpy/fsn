# Function: FUN_00439c0c
# Address: 0x00439c0c - 0x00439c3c
# Size: 0x30 (48 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00439c0c <FAMClose+0xc>:
  439c0c:	27bdffe0 	addiu	sp,sp,-32
  439c10:	8f9984cc 	lw	t9,-31540(gp)
  439c14:	afbf001c 	sw	ra,28(sp)
  439c18:	afbc0018 	sw	gp,24(sp)
  439c1c:	8c840004 	lw	a0,4(a0)
  439c20:	0320f809 	jalr	t9
  439c24:	00000000 	nop
  439c28:	8fbf001c 	lw	ra,28(sp)
  439c2c:	8fbc0018 	lw	gp,24(sp)
  439c30:	27bd0020 	addiu	sp,sp,32
  439c34:	03e00008 	jr	ra
  439c38:	00001025 	move	v0,zero
