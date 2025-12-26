# Function: FUN_00431b34
# Address: 0x00431b34 - 0x00431c80
# Size: 0x14c (332 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00431b34 <SG_getNormalArgs+0xc>:
  431b34:	27bdffc0 	addiu	sp,sp,-64
  431b38:	afb10024 	sw	s1,36(sp)
  431b3c:	00c08825 	move	s1,a2
  431b40:	8f86806c 	lw	a2,-32660(gp)
  431b44:	8f9987fc 	lw	t9,-30724(gp)
  431b48:	afb00020 	sw	s0,32(sp)
  431b4c:	00e08025 	move	s0,a3
  431b50:	afbf002c 	sw	ra,44(sp)
  431b54:	afbc0028 	sw	gp,40(sp)
  431b58:	afa40040 	sw	a0,64(sp)
  431b5c:	afa50044 	sw	a1,68(sp)
  431b60:	24070002 	li	a3,2
  431b64:	0320f809 	jalr	t9
  431b68:	24c69660 	addiu	a2,a2,-27040
  431b6c:	8fbc0028 	lw	gp,40(sp)
  431b70:	8fa40040 	lw	a0,64(sp)
  431b74:	8f998020 	lw	t9,-32736(gp)
  431b78:	8f87806c 	lw	a3,-32660(gp)
  431b7c:	8fa50044 	lw	a1,68(sp)
  431b80:	240e0002 	li	t6,2
  431b84:	27392370 	addiu	t9,t9,9072
  431b88:	afa20038 	sw	v0,56(sp)
  431b8c:	afae0010 	sw	t6,16(sp)
  431b90:	00403025 	move	a2,v0
  431b94:	0320f809 	jalr	t9
  431b98:	24e79660 	addiu	a3,a3,-27040
  431b9c:	8fbc0028 	lw	gp,40(sp)
  431ba0:	04410003 	bgez	v0,431bb0 <SG_getNormalArgs+0x88>
  431ba4:	00403025 	move	a2,v0
  431ba8:	10000031 	b	431c70 <SG_getNormalArgs+0x148>
  431bac:	8fbf002c 	lw	ra,44(sp)
  431bb0:	8f9987f8 	lw	t9,-30728(gp)
  431bb4:	8fa40040 	lw	a0,64(sp)
  431bb8:	8fa50044 	lw	a1,68(sp)
  431bbc:	0320f809 	jalr	t9
  431bc0:	afa60034 	sw	a2,52(sp)
  431bc4:	8fbc0028 	lw	gp,40(sp)
  431bc8:	8e180000 	lw	t8,0(s0)
  431bcc:	8f8f80a4 	lw	t7,-32604(gp)
  431bd0:	0018c8c0 	sll	t9,t8,0x3
  431bd4:	8fa30038 	lw	v1,56(sp)
  431bd8:	8fa60034 	lw	a2,52(sp)
  431bdc:	02394021 	addu	t0,s1,t9
  431be0:	25ef009a 	addiu	t7,t7,154
  431be4:	ad0f0000 	sw	t7,0(t0)
  431be8:	8e090000 	lw	t1,0(s0)
  431bec:	8f8e80a4 	lw	t6,-32604(gp)
  431bf0:	000950c0 	sll	t2,t1,0x3
  431bf4:	022a5821 	addu	t3,s1,t2
  431bf8:	ad620004 	sw	v0,4(t3)
  431bfc:	8e0c0000 	lw	t4,0(s0)
  431c00:	25ce00a3 	addiu	t6,t6,163
  431c04:	258d0001 	addiu	t5,t4,1
  431c08:	000dc8c0 	sll	t9,t5,0x3
  431c0c:	ae0d0000 	sw	t5,0(s0)
  431c10:	02397821 	addu	t7,s1,t9
  431c14:	adee0000 	sw	t6,0(t7)
  431c18:	8e080000 	lw	t0,0(s0)
  431c1c:	8f8d8080 	lw	t5,-32640(gp)
  431c20:	000848c0 	sll	t1,t0,0x3
  431c24:	02295021 	addu	t2,s1,t1
  431c28:	ad430004 	sw	v1,4(t2)
  431c2c:	8e0b0000 	lw	t3,0(s0)
  431c30:	25ad0068 	addiu	t5,t5,104
  431c34:	256c0001 	addiu	t4,t3,1
  431c38:	000cc8c0 	sll	t9,t4,0x3
  431c3c:	ae0c0000 	sw	t4,0(s0)
  431c40:	02397021 	addu	t6,s1,t9
  431c44:	adcd0000 	sw	t5,0(t6)
  431c48:	8e0f0000 	lw	t7,0(s0)
  431c4c:	00601025 	move	v0,v1
  431c50:	000f40c0 	sll	t0,t7,0x3
  431c54:	02284821 	addu	t1,s1,t0
  431c58:	ad260004 	sw	a2,4(t1)
  431c5c:	8e0a0000 	lw	t2,0(s0)
  431c60:	00000000 	nop
  431c64:	254b0001 	addiu	t3,t2,1
  431c68:	ae0b0000 	sw	t3,0(s0)
  431c6c:	8fbf002c 	lw	ra,44(sp)
  431c70:	8fb00020 	lw	s0,32(sp)
  431c74:	8fb10024 	lw	s1,36(sp)
  431c78:	03e00008 	jr	ra
  431c7c:	27bd0040 	addiu	sp,sp,64
