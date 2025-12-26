# Function: dirfamUnmonitorDir
# Address: 0x00427ebc - 0x00427f50
# Size: 0x94 (148 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00427ebc <dirfamUnmonitorDir>:
  427ebc:	3c1c0fbf 	lui	gp,0xfbf
  427ec0:	279c5c74 	addiu	gp,gp,23668
  427ec4:	0399e021 	addu	gp,gp,t9
  427ec8:	8f8e8a24 	lw	t6,-30172(gp)
  427ecc:	27bdffe0 	addiu	sp,sp,-32
  427ed0:	91ce0000 	lbu	t6,0(t6)
  427ed4:	afbf001c 	sw	ra,28(sp)
  427ed8:	afbc0018 	sw	gp,24(sp)
  427edc:	15c00018 	bnez	t6,427f40 <dirfamUnmonitorDir+0x84>
  427ee0:	00803025 	move	a2,a0
  427ee4:	8c8f0074 	lw	t7,116(a0)
  427ee8:	00002025 	move	a0,zero
  427eec:	000fc280 	sll	t8,t7,0xa
  427ef0:	0018cfc2 	srl	t9,t8,0x1f
  427ef4:	13200013 	beqz	t9,427f44 <dirfamUnmonitorDir+0x88>
  427ef8:	8fbf001c 	lw	ra,28(sp)
  427efc:	8f99857c 	lw	t9,-31364(gp)
  427f00:	00c02825 	move	a1,a2
  427f04:	0320f809 	jalr	t9
  427f08:	afa60020 	sw	a2,32(sp)
  427f0c:	8fbc0018 	lw	gp,24(sp)
  427f10:	8fa60020 	lw	a2,32(sp)
  427f14:	8f84806c 	lw	a0,-32660(gp)
  427f18:	8f9988ec 	lw	t9,-30484(gp)
  427f1c:	24c50060 	addiu	a1,a2,96
  427f20:	0320f809 	jalr	t9
  427f24:	24846c70 	addiu	a0,a0,27760
  427f28:	8fa60020 	lw	a2,32(sp)
  427f2c:	8fbc0018 	lw	gp,24(sp)
  427f30:	90c80075 	lbu	t0,117(a2)
  427f34:	00000000 	nop
  427f38:	3109ffdf 	andi	t1,t0,0xffdf
  427f3c:	a0c90075 	sb	t1,117(a2)
  427f40:	8fbf001c 	lw	ra,28(sp)
  427f44:	27bd0020 	addiu	sp,sp,32
  427f48:	03e00008 	jr	ra
  427f4c:	00000000 	nop
