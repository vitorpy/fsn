# Function: cSetColors
# Address: 0x00433d00 - 0x00433d64
# Size: 0x64 (100 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433d00 <cSetColors>:
  433d00:	3c1c0fbf 	lui	gp,0xfbf
  433d04:	279c9e30 	addiu	gp,gp,-25040
  433d08:	0399e021 	addu	gp,gp,t9
  433d0c:	27bdffe0 	addiu	sp,sp,-32
  433d10:	afbf001c 	sw	ra,28(sp)
  433d14:	afbc0018 	sw	gp,24(sp)
  433d18:	afa40020 	sw	a0,32(sp)
  433d1c:	afa50024 	sw	a1,36(sp)
  433d20:	afa60028 	sw	a2,40(sp)
  433d24:	afa7002c 	sw	a3,44(sp)
  433d28:	8f99886c 	lw	t9,-30612(gp)
  433d2c:	8fa40020 	lw	a0,32(sp)
  433d30:	8fa50024 	lw	a1,36(sp)
  433d34:	8fa60028 	lw	a2,40(sp)
  433d38:	8fa7002c 	lw	a3,44(sp)
  433d3c:	0320f809 	jalr	t9
  433d40:	00000000 	nop
  433d44:	8fbc0018 	lw	gp,24(sp)
  433d48:	00000000 	nop
  433d4c:	10000001 	b	433d54 <cSetColors+0x54>
  433d50:	00000000 	nop
  433d54:	8fbf001c 	lw	ra,28(sp)
  433d58:	27bd0020 	addiu	sp,sp,32
  433d5c:	03e00008 	jr	ra
  433d60:	00000000 	nop
