# Function: FUN_00431dfc
# Address: 0x00431dfc - 0x00431f3c
# Size: 0x140 (320 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00431dfc <SG_getOverlay2Args+0xc>:
  431dfc:	27bdffc0 	addiu	sp,sp,-64
  431e00:	afb00020 	sw	s0,32(sp)
  431e04:	8f998020 	lw	t9,-32736(gp)
  431e08:	00e08025 	move	s0,a3
  431e0c:	8f87806c 	lw	a3,-32660(gp)
  431e10:	afb10024 	sw	s1,36(sp)
  431e14:	00c08825 	move	s1,a2
  431e18:	afbf002c 	sw	ra,44(sp)
  431e1c:	240e0003 	li	t6,3
  431e20:	27392370 	addiu	t9,t9,9072
  431e24:	afbc0028 	sw	gp,40(sp)
  431e28:	afae0010 	sw	t6,16(sp)
  431e2c:	24060002 	li	a2,2
  431e30:	afa40040 	sw	a0,64(sp)
  431e34:	afa50044 	sw	a1,68(sp)
  431e38:	0320f809 	jalr	t9
  431e3c:	24e79660 	addiu	a3,a3,-27040
  431e40:	8fbc0028 	lw	gp,40(sp)
  431e44:	8fa40040 	lw	a0,64(sp)
  431e48:	8fa50044 	lw	a1,68(sp)
  431e4c:	04410008 	bgez	v0,431e70 <SG_getOverlay2Args+0x80>
  431e50:	00403025 	move	a2,v0
  431e54:	8f99880c 	lw	t9,-30708(gp)
  431e58:	02203025 	move	a2,s1
  431e5c:	0320f809 	jalr	t9
  431e60:	02003825 	move	a3,s0
  431e64:	8fbc0028 	lw	gp,40(sp)
  431e68:	10000030 	b	431f2c <SG_getOverlay2Args+0x13c>
  431e6c:	8fbf002c 	lw	ra,44(sp)
  431e70:	8f9987f8 	lw	t9,-30728(gp)
  431e74:	afa60034 	sw	a2,52(sp)
  431e78:	0320f809 	jalr	t9
  431e7c:	00000000 	nop
  431e80:	8fbc0028 	lw	gp,40(sp)
  431e84:	8e180000 	lw	t8,0(s0)
  431e88:	8f8f80a4 	lw	t7,-32604(gp)
  431e8c:	0018c8c0 	sll	t9,t8,0x3
  431e90:	8fa60034 	lw	a2,52(sp)
  431e94:	02394021 	addu	t0,s1,t9
  431e98:	25ef009a 	addiu	t7,t7,154
  431e9c:	ad0f0000 	sw	t7,0(t0)
  431ea0:	8e090000 	lw	t1,0(s0)
  431ea4:	8f8e80a4 	lw	t6,-32604(gp)
  431ea8:	000950c0 	sll	t2,t1,0x3
  431eac:	022a5821 	addu	t3,s1,t2
  431eb0:	ad620004 	sw	v0,4(t3)
  431eb4:	8e0c0000 	lw	t4,0(s0)
  431eb8:	25ce00a3 	addiu	t6,t6,163
  431ebc:	258d0001 	addiu	t5,t4,1
  431ec0:	000dc8c0 	sll	t9,t5,0x3
  431ec4:	ae0d0000 	sw	t5,0(s0)
  431ec8:	02397821 	addu	t7,s1,t9
  431ecc:	adee0000 	sw	t6,0(t7)
  431ed0:	8e090000 	lw	t1,0(s0)
  431ed4:	24080002 	li	t0,2
  431ed8:	000950c0 	sll	t2,t1,0x3
  431edc:	022a5821 	addu	t3,s1,t2
  431ee0:	ad680004 	sw	t0,4(t3)
  431ee4:	8e0c0000 	lw	t4,0(s0)
  431ee8:	8f988080 	lw	t8,-32640(gp)
  431eec:	25990001 	addiu	t9,t4,1
  431ef0:	001970c0 	sll	t6,t9,0x3
  431ef4:	ae190000 	sw	t9,0(s0)
  431ef8:	022e7821 	addu	t7,s1,t6
  431efc:	27180068 	addiu	t8,t8,104
  431f00:	adf80000 	sw	t8,0(t7)
  431f04:	8e090000 	lw	t1,0(s0)
  431f08:	24020002 	li	v0,2
  431f0c:	000950c0 	sll	t2,t1,0x3
  431f10:	022a4021 	addu	t0,s1,t2
  431f14:	ad060004 	sw	a2,4(t0)
  431f18:	8e0b0000 	lw	t3,0(s0)
  431f1c:	00000000 	nop
  431f20:	256c0001 	addiu	t4,t3,1
  431f24:	ae0c0000 	sw	t4,0(s0)
  431f28:	8fbf002c 	lw	ra,44(sp)
  431f2c:	8fb00020 	lw	s0,32(sp)
  431f30:	8fb10024 	lw	s1,36(sp)
  431f34:	03e00008 	jr	ra
  431f38:	27bd0040 	addiu	sp,sp,64
