# Function: FUN_0042dfb4
# Address: 0x0042dfb4 - 0x0042e064
# Size: 0xb0 (176 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042dfb4 <getPosition+0xc>:
  42dfb4:	848e0000 	lh	t6,0(a0)
  42dfb8:	00000000 	nop
  42dfbc:	a4ae0000 	sh	t6,0(a1)
  42dfc0:	848f0002 	lh	t7,2(a0)
  42dfc4:	00000000 	nop
  42dfc8:	a4cf0000 	sh	t7,0(a2)
  42dfcc:	8fb90024 	lw	t9,36(sp)
  42dfd0:	90980034 	lbu	t8,52(a0)
  42dfd4:	00000000 	nop
  42dfd8:	a3380000 	sb	t8,0(t9)
  42dfdc:	8c820004 	lw	v0,4(a0)
  42dfe0:	8fa90018 	lw	t1,24(sp)
  42dfe4:	10400066 	beqz	v0,42e180 <getPosition+0x1d8>
  42dfe8:	00000000 	nop
  42dfec:	8c480074 	lw	t0,116(v0)
  42dff0:	8fab0018 	lw	t3,24(sp)
  42dff4:	000850c0 	sll	t2,t0,0x3
  42dff8:	0540001a 	bltz	t2,42e064 <getPosition+0xbc>
  42dffc:	00000000 	nop
  42e000:	8fa30014 	lw	v1,20(sp)
  42e004:	ad600000 	sw	zero,0(t3)
  42e008:	8fac001c 	lw	t4,28(sp)
  42e00c:	8f848a24 	lw	a0,-30172(gp)
  42e010:	ad800000 	sw	zero,0(t4)
  42e014:	8fad0020 	lw	t5,32(sp)
  42e018:	00001025 	move	v0,zero
  42e01c:	ada00000 	sw	zero,0(t5)
  42e020:	c4840018 	lwc1	$f4,24(a0)
  42e024:	00000000 	nop
  42e028:	e4e40000 	swc1	$f4,0(a3)
  42e02c:	8fae0010 	lw	t6,16(sp)
  42e030:	c486001c 	lwc1	$f6,28(a0)
  42e034:	00000000 	nop
  42e038:	e5c60000 	swc1	$f6,0(t6)
  42e03c:	c4880020 	lwc1	$f8,32(a0)
  42e040:	00000000 	nop
  42e044:	e4680000 	swc1	$f8,0(v1)
  42e048:	a4a00000 	sh	zero,0(a1)
  42e04c:	8c8f0028 	lw	t7,40(a0)
  42e050:	00000000 	nop
  42e054:	a4cf0000 	sh	t7,0(a2)
  42e058:	8fb80024 	lw	t8,36(sp)
  42e05c:	03e00008 	jr	ra
  42e060:	a3000000 	sb	zero,0(t8)
