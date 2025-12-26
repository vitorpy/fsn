# Function: FUN_00420b70
# Address: 0x00420b70 - 0x00420bfc
# Size: 0x8c (140 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420b70 <drawOverviewOverlay+0xc>:
  420b70:	8f8e893c 	lw	t6,-30404(gp)
  420b74:	27bdffe0 	addiu	sp,sp,-32
  420b78:	91ce0000 	lbu	t6,0(t6)
  420b7c:	afbf001c 	sw	ra,28(sp)
  420b80:	11c0001a 	beqz	t6,420bec <drawOverviewOverlay+0x88>
  420b84:	afbc0018 	sw	gp,24(sp)
  420b88:	8f998664 	lw	t9,-31132(gp)
  420b8c:	00000000 	nop
  420b90:	0320f809 	jalr	t9
  420b94:	00000000 	nop
  420b98:	8fbc0018 	lw	gp,24(sp)
  420b9c:	00002025 	move	a0,zero
  420ba0:	8f998304 	lw	t9,-31996(gp)
  420ba4:	00000000 	nop
  420ba8:	0320f809 	jalr	t9
  420bac:	00000000 	nop
  420bb0:	8fbc0018 	lw	gp,24(sp)
  420bb4:	00000000 	nop
  420bb8:	8f998308 	lw	t9,-31992(gp)
  420bbc:	00000000 	nop
  420bc0:	0320f809 	jalr	t9
  420bc4:	00000000 	nop
  420bc8:	8fbc0018 	lw	gp,24(sp)
  420bcc:	00000000 	nop
  420bd0:	8f99801c 	lw	t9,-32740(gp)
  420bd4:	00000000 	nop
  420bd8:	27390acc 	addiu	t9,t9,2764
  420bdc:	0320f809 	jalr	t9
  420be0:	00000000 	nop
  420be4:	8fbc0018 	lw	gp,24(sp)
  420be8:	00000000 	nop
  420bec:	8fbf001c 	lw	ra,28(sp)
  420bf0:	27bd0020 	addiu	sp,sp,32
  420bf4:	03e00008 	jr	ra
  420bf8:	00000000 	nop
