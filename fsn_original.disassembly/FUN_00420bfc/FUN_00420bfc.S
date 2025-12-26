# Function: FUN_00420bfc
# Address: 0x00420bfc - 0x00420c50
# Size: 0x54 (84 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420bfc <drawOverviewOverlay+0x98>:
  420bfc:	3c1c0fc0 	lui	gp,0xfc0
  420c00:	279ccf34 	addiu	gp,gp,-12492
  420c04:	0399e021 	addu	gp,gp,t9
  420c08:	27bdffe0 	addiu	sp,sp,-32
  420c0c:	8f998674 	lw	t9,-31116(gp)
  420c10:	afbf001c 	sw	ra,28(sp)
  420c14:	afbc0018 	sw	gp,24(sp)
  420c18:	afa40020 	sw	a0,32(sp)
  420c1c:	afa50024 	sw	a1,36(sp)
  420c20:	0320f809 	jalr	t9
  420c24:	afa60028 	sw	a2,40(sp)
  420c28:	8fbc0018 	lw	gp,24(sp)
  420c2c:	00000000 	nop
  420c30:	8f998330 	lw	t9,-31952(gp)
  420c34:	00000000 	nop
  420c38:	0320f809 	jalr	t9
  420c3c:	00000000 	nop
  420c40:	8fbf001c 	lw	ra,28(sp)
  420c44:	8fbc0018 	lw	gp,24(sp)
  420c48:	03e00008 	jr	ra
  420c4c:	27bd0020 	addiu	sp,sp,32
