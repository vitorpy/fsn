# Function: SG_getOverlayArgs
# Address: 0x00431c80 - 0x00431df0
# Size: 0x170 (368 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00431c80 <SG_getOverlayArgs>:
  431c80:	3c1c0fbf 	lui	gp,0xfbf
  431c84:	279cbeb0 	addiu	gp,gp,-16720
  431c88:	0399e021 	addu	gp,gp,t9
  431c8c:	27bdffc0 	addiu	sp,sp,-64
  431c90:	afb10024 	sw	s1,36(sp)
  431c94:	00c08825 	move	s1,a2
  431c98:	8f86806c 	lw	a2,-32660(gp)
  431c9c:	8f9987fc 	lw	t9,-30724(gp)
  431ca0:	afb00020 	sw	s0,32(sp)
  431ca4:	00e08025 	move	s0,a3
  431ca8:	afbf002c 	sw	ra,44(sp)
  431cac:	afbc0028 	sw	gp,40(sp)
  431cb0:	afa40040 	sw	a0,64(sp)
  431cb4:	afa50044 	sw	a1,68(sp)
  431cb8:	24070003 	li	a3,3
  431cbc:	0320f809 	jalr	t9
  431cc0:	24c69660 	addiu	a2,a2,-27040
  431cc4:	8fbc0028 	lw	gp,40(sp)
  431cc8:	8fa40040 	lw	a0,64(sp)
  431ccc:	8f998020 	lw	t9,-32736(gp)
  431cd0:	8f87806c 	lw	a3,-32660(gp)
  431cd4:	8fa50044 	lw	a1,68(sp)
  431cd8:	240e0003 	li	t6,3
  431cdc:	27392370 	addiu	t9,t9,9072
  431ce0:	afa20038 	sw	v0,56(sp)
  431ce4:	afae0010 	sw	t6,16(sp)
  431ce8:	00403025 	move	a2,v0
  431cec:	0320f809 	jalr	t9
  431cf0:	24e79660 	addiu	a3,a3,-27040
  431cf4:	8fbc0028 	lw	gp,40(sp)
  431cf8:	8fa40040 	lw	a0,64(sp)
  431cfc:	8fa50044 	lw	a1,68(sp)
  431d00:	04410008 	bgez	v0,431d24 <SG_getOverlayArgs+0xa4>
  431d04:	00403025 	move	a2,v0
  431d08:	8f99880c 	lw	t9,-30708(gp)
  431d0c:	02203025 	move	a2,s1
  431d10:	0320f809 	jalr	t9
  431d14:	02003825 	move	a3,s0
  431d18:	8fbc0028 	lw	gp,40(sp)
  431d1c:	10000030 	b	431de0 <SG_getOverlayArgs+0x160>
  431d20:	8fbf002c 	lw	ra,44(sp)
  431d24:	8f9987f8 	lw	t9,-30728(gp)
  431d28:	afa60034 	sw	a2,52(sp)
  431d2c:	0320f809 	jalr	t9
  431d30:	00000000 	nop
  431d34:	8fbc0028 	lw	gp,40(sp)
  431d38:	8e180000 	lw	t8,0(s0)
  431d3c:	8f8f80a4 	lw	t7,-32604(gp)
  431d40:	0018c8c0 	sll	t9,t8,0x3
  431d44:	8fa30038 	lw	v1,56(sp)
  431d48:	8fa60034 	lw	a2,52(sp)
  431d4c:	02394021 	addu	t0,s1,t9
  431d50:	25ef009a 	addiu	t7,t7,154
  431d54:	ad0f0000 	sw	t7,0(t0)
  431d58:	8e090000 	lw	t1,0(s0)
  431d5c:	8f8e80a4 	lw	t6,-32604(gp)
  431d60:	000950c0 	sll	t2,t1,0x3
  431d64:	022a5821 	addu	t3,s1,t2
  431d68:	ad620004 	sw	v0,4(t3)
  431d6c:	8e0c0000 	lw	t4,0(s0)
  431d70:	25ce00a3 	addiu	t6,t6,163
  431d74:	258d0001 	addiu	t5,t4,1
  431d78:	000dc8c0 	sll	t9,t5,0x3
  431d7c:	ae0d0000 	sw	t5,0(s0)
  431d80:	02397821 	addu	t7,s1,t9
  431d84:	adee0000 	sw	t6,0(t7)
  431d88:	8e080000 	lw	t0,0(s0)
  431d8c:	8f8d8080 	lw	t5,-32640(gp)
  431d90:	000848c0 	sll	t1,t0,0x3
  431d94:	02295021 	addu	t2,s1,t1
  431d98:	ad430004 	sw	v1,4(t2)
  431d9c:	8e0b0000 	lw	t3,0(s0)
  431da0:	25ad0068 	addiu	t5,t5,104
  431da4:	256c0001 	addiu	t4,t3,1
  431da8:	000cc8c0 	sll	t9,t4,0x3
  431dac:	ae0c0000 	sw	t4,0(s0)
  431db0:	02397021 	addu	t6,s1,t9
  431db4:	adcd0000 	sw	t5,0(t6)
  431db8:	8e0f0000 	lw	t7,0(s0)
  431dbc:	00601025 	move	v0,v1
  431dc0:	000f40c0 	sll	t0,t7,0x3
  431dc4:	02284821 	addu	t1,s1,t0
  431dc8:	ad260004 	sw	a2,4(t1)
  431dcc:	8e0a0000 	lw	t2,0(s0)
  431dd0:	00000000 	nop
  431dd4:	254b0001 	addiu	t3,t2,1
  431dd8:	ae0b0000 	sw	t3,0(s0)
  431ddc:	8fbf002c 	lw	ra,44(sp)
  431de0:	8fb00020 	lw	s0,32(sp)
  431de4:	8fb10024 	lw	s1,36(sp)
  431de8:	03e00008 	jr	ra
  431dec:	27bd0040 	addiu	sp,sp,64
