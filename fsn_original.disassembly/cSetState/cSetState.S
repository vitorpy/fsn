# Function: cSetState
# Address: 0x00433e18 - 0x00433e88
# Size: 0x70 (112 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433e18 <cSetState>:
  433e18:	3c1c0fbf 	lui	gp,0xfbf
  433e1c:	279c9d18 	addiu	gp,gp,-25320
  433e20:	0399e021 	addu	gp,gp,t9
  433e24:	27bdffd8 	addiu	sp,sp,-40
  433e28:	afbf0024 	sw	ra,36(sp)
  433e2c:	afbc0020 	sw	gp,32(sp)
  433e30:	afa40028 	sw	a0,40(sp)
  433e34:	afa5002c 	sw	a1,44(sp)
  433e38:	afa60030 	sw	a2,48(sp)
  433e3c:	afa70034 	sw	a3,52(sp)
  433e40:	8fae0038 	lw	t6,56(sp)
  433e44:	8faf003c 	lw	t7,60(sp)
  433e48:	8f998868 	lw	t9,-30616(gp)
  433e4c:	8fa40028 	lw	a0,40(sp)
  433e50:	8fa5002c 	lw	a1,44(sp)
  433e54:	8fa60030 	lw	a2,48(sp)
  433e58:	8fa70034 	lw	a3,52(sp)
  433e5c:	afae0010 	sw	t6,16(sp)
  433e60:	0320f809 	jalr	t9
  433e64:	afaf0014 	sw	t7,20(sp)
  433e68:	8fbc0020 	lw	gp,32(sp)
  433e6c:	00000000 	nop
  433e70:	10000001 	b	433e78 <cSetState+0x60>
  433e74:	00000000 	nop
  433e78:	8fbf0024 	lw	ra,36(sp)
  433e7c:	27bd0028 	addiu	sp,sp,40
  433e80:	03e00008 	jr	ra
  433e84:	00000000 	nop
