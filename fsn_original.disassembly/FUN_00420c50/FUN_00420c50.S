# Function: FUN_00420c50
# Address: 0x00420c50 - 0x00420ca4
# Size: 0x54 (84 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420c50 <drawOverviewOverlay+0xec>:
  420c50:	3c1c0fc0 	lui	gp,0xfc0
  420c54:	279ccee0 	addiu	gp,gp,-12576
  420c58:	0399e021 	addu	gp,gp,t9
  420c5c:	27bdffe0 	addiu	sp,sp,-32
  420c60:	8f99867c 	lw	t9,-31108(gp)
  420c64:	afbf001c 	sw	ra,28(sp)
  420c68:	afbc0018 	sw	gp,24(sp)
  420c6c:	afa40020 	sw	a0,32(sp)
  420c70:	afa50024 	sw	a1,36(sp)
  420c74:	0320f809 	jalr	t9
  420c78:	afa60028 	sw	a2,40(sp)
  420c7c:	8fbc0018 	lw	gp,24(sp)
  420c80:	00000000 	nop
  420c84:	8f998330 	lw	t9,-31952(gp)
  420c88:	00000000 	nop
  420c8c:	0320f809 	jalr	t9
  420c90:	00000000 	nop
  420c94:	8fbf001c 	lw	ra,28(sp)
  420c98:	8fbc0018 	lw	gp,24(sp)
  420c9c:	03e00008 	jr	ra
  420ca0:	27bd0020 	addiu	sp,sp,32
