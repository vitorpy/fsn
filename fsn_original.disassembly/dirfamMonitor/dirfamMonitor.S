# Function: dirfamMonitor
# Address: 0x00427f50 - 0x00427fd4
# Size: 0x84 (132 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00427f50 <dirfamMonitor>:
  427f50:	3c1c0fbf 	lui	gp,0xfbf
  427f54:	279c5be0 	addiu	gp,gp,23520
  427f58:	0399e021 	addu	gp,gp,t9
  427f5c:	8f8e8a24 	lw	t6,-30172(gp)
  427f60:	27bdffd8 	addiu	sp,sp,-40
  427f64:	91ce0000 	lbu	t6,0(t6)
  427f68:	afbf0024 	sw	ra,36(sp)
  427f6c:	15c00015 	bnez	t6,427fc4 <dirfamMonitor+0x74>
  427f70:	afbc0020 	sw	gp,32(sp)
  427f74:	8f8f8068 	lw	t7,-32664(gp)
  427f78:	24060001 	li	a2,1
  427f7c:	8def78b0 	lw	t7,30896(t7)
  427f80:	00000000 	nop
  427f84:	15e00010 	bnez	t7,427fc8 <dirfamMonitor+0x78>
  427f88:	8fbf0024 	lw	ra,36(sp)
  427f8c:	8f848a00 	lw	a0,-30208(gp)
  427f90:	8f85806c 	lw	a1,-32660(gp)
  427f94:	8f878020 	lw	a3,-32736(gp)
  427f98:	8f9980d0 	lw	t9,-32560(gp)
  427f9c:	8c840000 	lw	a0,0(a0)
  427fa0:	8ca56c70 	lw	a1,27760(a1)
  427fa4:	afa00010 	sw	zero,16(sp)
  427fa8:	0320f809 	jalr	t9
  427fac:	24e78044 	addiu	a3,a3,-32700
  427fb0:	8fbc0020 	lw	gp,32(sp)
  427fb4:	00000000 	nop
  427fb8:	8f818068 	lw	at,-32664(gp)
  427fbc:	00000000 	nop
  427fc0:	ac2278b0 	sw	v0,30896(at)
  427fc4:	8fbf0024 	lw	ra,36(sp)
  427fc8:	27bd0028 	addiu	sp,sp,40
  427fcc:	03e00008 	jr	ra
  427fd0:	00000000 	nop
