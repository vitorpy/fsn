# Function: writePosition
# Address: 0x0042e9a8 - 0x0042ebf4
# Size: 0x24c (588 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042e9a8 <writePosition>:
  42e9a8:	3c1c0fbf 	lui	gp,0xfbf
  42e9ac:	279cf188 	addiu	gp,gp,-3704
  42e9b0:	0399e021 	addu	gp,gp,t9
  42e9b4:	27bdffa8 	addiu	sp,sp,-88
  42e9b8:	afbf001c 	sw	ra,28(sp)
  42e9bc:	afbc0018 	sw	gp,24(sp)
  42e9c0:	afb00014 	sw	s0,20(sp)
  42e9c4:	afa5005c 	sw	a1,92(sp)
  42e9c8:	c4840008 	lwc1	$f4,8(a0)
  42e9cc:	00808025 	move	s0,a0
  42e9d0:	e7a40028 	swc1	$f4,40(sp)
  42e9d4:	c486000c 	lwc1	$f6,12(a0)
  42e9d8:	00000000 	nop
  42e9dc:	e7a6002c 	swc1	$f6,44(sp)
  42e9e0:	c4880010 	lwc1	$f8,16(a0)
  42e9e4:	00000000 	nop
  42e9e8:	e7a80030 	swc1	$f8,48(sp)
  42e9ec:	c48a0018 	lwc1	$f10,24(a0)
  42e9f0:	00000000 	nop
  42e9f4:	e7aa0034 	swc1	$f10,52(sp)
  42e9f8:	c490001c 	lwc1	$f16,28(a0)
  42e9fc:	00000000 	nop
  42ea00:	e7b00038 	swc1	$f16,56(sp)
  42ea04:	c4920020 	lwc1	$f18,32(a0)
  42ea08:	00000000 	nop
  42ea0c:	e7b2003c 	swc1	$f18,60(sp)
  42ea10:	c4840028 	lwc1	$f4,40(a0)
  42ea14:	00000000 	nop
  42ea18:	e7a40040 	swc1	$f4,64(sp)
  42ea1c:	c486002c 	lwc1	$f6,44(a0)
  42ea20:	00000000 	nop
  42ea24:	e7a60044 	swc1	$f6,68(sp)
  42ea28:	c4880030 	lwc1	$f8,48(a0)
  42ea2c:	00000000 	nop
  42ea30:	e7a80048 	swc1	$f8,72(sp)
  42ea34:	848e0000 	lh	t6,0(a0)
  42ea38:	00000000 	nop
  42ea3c:	a7ae004c 	sh	t6,76(sp)
  42ea40:	848f0002 	lh	t7,2(a0)
  42ea44:	00000000 	nop
  42ea48:	a7af004e 	sh	t7,78(sp)
  42ea4c:	90980034 	lbu	t8,52(a0)
  42ea50:	00000000 	nop
  42ea54:	a3b80056 	sb	t8,86(sp)
  42ea58:	8c860004 	lw	a2,4(a0)
  42ea5c:	00000000 	nop
  42ea60:	10c0000e 	beqz	a2,42ea9c <writePosition+0xf4>
  42ea64:	00000000 	nop
  42ea68:	8f99857c 	lw	t9,-31364(gp)
  42ea6c:	00002025 	move	a0,zero
  42ea70:	0320f809 	jalr	t9
  42ea74:	00c02825 	move	a1,a2
  42ea78:	8fbc0018 	lw	gp,24(sp)
  42ea7c:	00402025 	move	a0,v0
  42ea80:	8f9983e0 	lw	t9,-31776(gp)
  42ea84:	00000000 	nop
  42ea88:	0320f809 	jalr	t9
  42ea8c:	00000000 	nop
  42ea90:	8fbc0018 	lw	gp,24(sp)
  42ea94:	10000002 	b	42eaa0 <writePosition+0xf8>
  42ea98:	a7a20050 	sh	v0,80(sp)
  42ea9c:	a7a00050 	sh	zero,80(sp)
  42eaa0:	8e050014 	lw	a1,20(s0)
  42eaa4:	00000000 	nop
  42eaa8:	10a0000e 	beqz	a1,42eae4 <writePosition+0x13c>
  42eaac:	00000000 	nop
  42eab0:	8f99857c 	lw	t9,-31364(gp)
  42eab4:	00002025 	move	a0,zero
  42eab8:	0320f809 	jalr	t9
  42eabc:	00000000 	nop
  42eac0:	8fbc0018 	lw	gp,24(sp)
  42eac4:	00402025 	move	a0,v0
  42eac8:	8f9983e0 	lw	t9,-31776(gp)
  42eacc:	00000000 	nop
  42ead0:	0320f809 	jalr	t9
  42ead4:	00000000 	nop
  42ead8:	8fbc0018 	lw	gp,24(sp)
  42eadc:	10000002 	b	42eae8 <writePosition+0x140>
  42eae0:	a7a20052 	sh	v0,82(sp)
  42eae4:	a7a00052 	sh	zero,82(sp)
  42eae8:	8e020024 	lw	v0,36(s0)
  42eaec:	00000000 	nop
  42eaf0:	10400008 	beqz	v0,42eb14 <writePosition+0x16c>
  42eaf4:	00000000 	nop
  42eaf8:	8f9983e0 	lw	t9,-31776(gp)
  42eafc:	8c440000 	lw	a0,0(v0)
  42eb00:	0320f809 	jalr	t9
  42eb04:	00000000 	nop
  42eb08:	8fbc0018 	lw	gp,24(sp)
  42eb0c:	10000002 	b	42eb18 <writePosition+0x170>
  42eb10:	a7a20054 	sh	v0,84(sp)
  42eb14:	a7a00054 	sh	zero,84(sp)
  42eb18:	8f99828c 	lw	t9,-32116(gp)
  42eb1c:	8fa7005c 	lw	a3,92(sp)
  42eb20:	27a40028 	addiu	a0,sp,40
  42eb24:	24050030 	li	a1,48
  42eb28:	0320f809 	jalr	t9
  42eb2c:	24060001 	li	a2,1
  42eb30:	8e060004 	lw	a2,4(s0)
  42eb34:	8fbc0018 	lw	gp,24(sp)
  42eb38:	10c0000e 	beqz	a2,42eb74 <writePosition+0x1cc>
  42eb3c:	00000000 	nop
  42eb40:	8f99857c 	lw	t9,-31364(gp)
  42eb44:	00002025 	move	a0,zero
  42eb48:	0320f809 	jalr	t9
  42eb4c:	00c02825 	move	a1,a2
  42eb50:	8fbc0018 	lw	gp,24(sp)
  42eb54:	97a60050 	lhu	a2,80(sp)
  42eb58:	8f99828c 	lw	t9,-32116(gp)
  42eb5c:	8fa7005c 	lw	a3,92(sp)
  42eb60:	00402025 	move	a0,v0
  42eb64:	0320f809 	jalr	t9
  42eb68:	24050001 	li	a1,1
  42eb6c:	8fbc0018 	lw	gp,24(sp)
  42eb70:	00000000 	nop
  42eb74:	8e050014 	lw	a1,20(s0)
  42eb78:	00000000 	nop
  42eb7c:	10a0000e 	beqz	a1,42ebb8 <writePosition+0x210>
  42eb80:	00000000 	nop
  42eb84:	8f99857c 	lw	t9,-31364(gp)
  42eb88:	00002025 	move	a0,zero
  42eb8c:	0320f809 	jalr	t9
  42eb90:	00000000 	nop
  42eb94:	8fbc0018 	lw	gp,24(sp)
  42eb98:	97a60052 	lhu	a2,82(sp)
  42eb9c:	8f99828c 	lw	t9,-32116(gp)
  42eba0:	8fa7005c 	lw	a3,92(sp)
  42eba4:	00402025 	move	a0,v0
  42eba8:	0320f809 	jalr	t9
  42ebac:	24050001 	li	a1,1
  42ebb0:	8fbc0018 	lw	gp,24(sp)
  42ebb4:	00000000 	nop
  42ebb8:	8e020024 	lw	v0,36(s0)
  42ebbc:	97a60054 	lhu	a2,84(sp)
  42ebc0:	10400009 	beqz	v0,42ebe8 <writePosition+0x240>
  42ebc4:	8fbf001c 	lw	ra,28(sp)
  42ebc8:	8f99828c 	lw	t9,-32116(gp)
  42ebcc:	8c440000 	lw	a0,0(v0)
  42ebd0:	8fa7005c 	lw	a3,92(sp)
  42ebd4:	0320f809 	jalr	t9
  42ebd8:	24050001 	li	a1,1
  42ebdc:	8fbc0018 	lw	gp,24(sp)
  42ebe0:	00000000 	nop
  42ebe4:	8fbf001c 	lw	ra,28(sp)
  42ebe8:	8fb00014 	lw	s0,20(sp)
  42ebec:	03e00008 	jr	ra
  42ebf0:	27bd0058 	addiu	sp,sp,88
