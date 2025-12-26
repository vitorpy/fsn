# Function: readPosition
# Address: 0x0042ebf4 - 0x0042eef8
# Size: 0x304 (772 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042ebf4 <readPosition>:
  42ebf4:	3c1c0fbf 	lui	gp,0xfbf
  42ebf8:	279cef3c 	addiu	gp,gp,-4292
  42ebfc:	0399e021 	addu	gp,gp,t9
  42ec00:	27bdfba8 	addiu	sp,sp,-1112
  42ec04:	8f9982cc 	lw	t9,-32052(gp)
  42ec08:	afb00014 	sw	s0,20(sp)
  42ec0c:	afa5045c 	sw	a1,1116(sp)
  42ec10:	00808025 	move	s0,a0
  42ec14:	afbf001c 	sw	ra,28(sp)
  42ec18:	8fa7045c 	lw	a3,1116(sp)
  42ec1c:	afbc0018 	sw	gp,24(sp)
  42ec20:	27a40428 	addiu	a0,sp,1064
  42ec24:	24050030 	li	a1,48
  42ec28:	0320f809 	jalr	t9
  42ec2c:	24060001 	li	a2,1
  42ec30:	8fbc0018 	lw	gp,24(sp)
  42ec34:	24010001 	li	at,1
  42ec38:	1041000f 	beq	v0,at,42ec78 <readPosition+0x84>
  42ec3c:	00000000 	nop
  42ec40:	8f848098 	lw	a0,-32616(gp)
  42ec44:	8f85805c 	lw	a1,-32676(gp)
  42ec48:	8f9983f8 	lw	t9,-31752(gp)
  42ec4c:	24840020 	addiu	a0,a0,32
  42ec50:	0320f809 	jalr	t9
  42ec54:	24a53b20 	addiu	a1,a1,15136
  42ec58:	8fbc0018 	lw	gp,24(sp)
  42ec5c:	24040001 	li	a0,1
  42ec60:	8f9983a0 	lw	t9,-31840(gp)
  42ec64:	00000000 	nop
  42ec68:	0320f809 	jalr	t9
  42ec6c:	00000000 	nop
  42ec70:	8fbc0018 	lw	gp,24(sp)
  42ec74:	00000000 	nop
  42ec78:	c7a40428 	lwc1	$f4,1064(sp)
  42ec7c:	27a40028 	addiu	a0,sp,40
  42ec80:	e6040008 	swc1	$f4,8(s0)
  42ec84:	c7a6042c 	lwc1	$f6,1068(sp)
  42ec88:	00000000 	nop
  42ec8c:	e606000c 	swc1	$f6,12(s0)
  42ec90:	c7a80430 	lwc1	$f8,1072(sp)
  42ec94:	00000000 	nop
  42ec98:	e6080010 	swc1	$f8,16(s0)
  42ec9c:	c7aa0434 	lwc1	$f10,1076(sp)
  42eca0:	00000000 	nop
  42eca4:	e60a0018 	swc1	$f10,24(s0)
  42eca8:	c7b00438 	lwc1	$f16,1080(sp)
  42ecac:	00000000 	nop
  42ecb0:	e610001c 	swc1	$f16,28(s0)
  42ecb4:	c7b2043c 	lwc1	$f18,1084(sp)
  42ecb8:	00000000 	nop
  42ecbc:	e6120020 	swc1	$f18,32(s0)
  42ecc0:	c7a40440 	lwc1	$f4,1088(sp)
  42ecc4:	00000000 	nop
  42ecc8:	e6040028 	swc1	$f4,40(s0)
  42eccc:	c7a60444 	lwc1	$f6,1092(sp)
  42ecd0:	00000000 	nop
  42ecd4:	e606002c 	swc1	$f6,44(s0)
  42ecd8:	c7a80448 	lwc1	$f8,1096(sp)
  42ecdc:	00000000 	nop
  42ece0:	e6080030 	swc1	$f8,48(s0)
  42ece4:	87ae044c 	lh	t6,1100(sp)
  42ece8:	00000000 	nop
  42ecec:	a60e0000 	sh	t6,0(s0)
  42ecf0:	87af044e 	lh	t7,1102(sp)
  42ecf4:	a2000034 	sb	zero,52(s0)
  42ecf8:	a60f0002 	sh	t7,2(s0)
  42ecfc:	93b80456 	lbu	t8,1110(sp)
  42ed00:	00000000 	nop
  42ed04:	a2180034 	sb	t8,52(s0)
  42ed08:	97b90450 	lhu	t9,1104(sp)
  42ed0c:	00000000 	nop
  42ed10:	13200022 	beqz	t9,42ed9c <readPosition+0x1a8>
  42ed14:	03203025 	move	a2,t9
  42ed18:	8f9982cc 	lw	t9,-32052(gp)
  42ed1c:	8fa7045c 	lw	a3,1116(sp)
  42ed20:	0320f809 	jalr	t9
  42ed24:	24050001 	li	a1,1
  42ed28:	97a80450 	lhu	t0,1104(sp)
  42ed2c:	8fbc0018 	lw	gp,24(sp)
  42ed30:	1048000f 	beq	v0,t0,42ed70 <readPosition+0x17c>
  42ed34:	00000000 	nop
  42ed38:	8f848098 	lw	a0,-32616(gp)
  42ed3c:	8f85805c 	lw	a1,-32676(gp)
  42ed40:	8f9983f8 	lw	t9,-31752(gp)
  42ed44:	24840020 	addiu	a0,a0,32
  42ed48:	0320f809 	jalr	t9
  42ed4c:	24a53b50 	addiu	a1,a1,15184
  42ed50:	8fbc0018 	lw	gp,24(sp)
  42ed54:	24040001 	li	a0,1
  42ed58:	8f9983a0 	lw	t9,-31840(gp)
  42ed5c:	00000000 	nop
  42ed60:	0320f809 	jalr	t9
  42ed64:	00000000 	nop
  42ed68:	8fbc0018 	lw	gp,24(sp)
  42ed6c:	00000000 	nop
  42ed70:	8f9985ac 	lw	t9,-31316(gp)
  42ed74:	27a40028 	addiu	a0,sp,40
  42ed78:	0320f809 	jalr	t9
  42ed7c:	00000000 	nop
  42ed80:	8fbc0018 	lw	gp,24(sp)
  42ed84:	ae020004 	sw	v0,4(s0)
  42ed88:	97a90450 	lhu	t1,1104(sp)
  42ed8c:	27aa0028 	addiu	t2,sp,40
  42ed90:	012a5821 	addu	t3,t1,t2
  42ed94:	10000002 	b	42eda0 <readPosition+0x1ac>
  42ed98:	a1600000 	sb	zero,0(t3)
  42ed9c:	ae000004 	sw	zero,4(s0)
  42eda0:	97a60452 	lhu	a2,1106(sp)
  42eda4:	27a40028 	addiu	a0,sp,40
  42eda8:	10c00022 	beqz	a2,42ee34 <readPosition+0x240>
  42edac:	00000000 	nop
  42edb0:	8f9982cc 	lw	t9,-32052(gp)
  42edb4:	8fa7045c 	lw	a3,1116(sp)
  42edb8:	0320f809 	jalr	t9
  42edbc:	24050001 	li	a1,1
  42edc0:	97ac0452 	lhu	t4,1106(sp)
  42edc4:	8fbc0018 	lw	gp,24(sp)
  42edc8:	104c0010 	beq	v0,t4,42ee0c <readPosition+0x218>
  42edcc:	97ad0452 	lhu	t5,1106(sp)
  42edd0:	8f848098 	lw	a0,-32616(gp)
  42edd4:	8f85805c 	lw	a1,-32676(gp)
  42edd8:	8f9983f8 	lw	t9,-31752(gp)
  42eddc:	24840020 	addiu	a0,a0,32
  42ede0:	0320f809 	jalr	t9
  42ede4:	24a53b88 	addiu	a1,a1,15240
  42ede8:	8fbc0018 	lw	gp,24(sp)
  42edec:	24040001 	li	a0,1
  42edf0:	8f9983a0 	lw	t9,-31840(gp)
  42edf4:	00000000 	nop
  42edf8:	0320f809 	jalr	t9
  42edfc:	00000000 	nop
  42ee00:	8fbc0018 	lw	gp,24(sp)
  42ee04:	00000000 	nop
  42ee08:	97ad0452 	lhu	t5,1106(sp)
  42ee0c:	27a40028 	addiu	a0,sp,40
  42ee10:	008d7021 	addu	t6,a0,t5
  42ee14:	a1c00000 	sb	zero,0(t6)
  42ee18:	8f9985ac 	lw	t9,-31316(gp)
  42ee1c:	00000000 	nop
  42ee20:	0320f809 	jalr	t9
  42ee24:	00000000 	nop
  42ee28:	8fbc0018 	lw	gp,24(sp)
  42ee2c:	10000002 	b	42ee38 <readPosition+0x244>
  42ee30:	ae020014 	sw	v0,20(s0)
  42ee34:	ae000014 	sw	zero,20(s0)
  42ee38:	97a60454 	lhu	a2,1108(sp)
  42ee3c:	27a40028 	addiu	a0,sp,40
  42ee40:	10c00028 	beqz	a2,42eee4 <readPosition+0x2f0>
  42ee44:	00000000 	nop
  42ee48:	8f9982cc 	lw	t9,-32052(gp)
  42ee4c:	8fa7045c 	lw	a3,1116(sp)
  42ee50:	0320f809 	jalr	t9
  42ee54:	24050001 	li	a1,1
  42ee58:	97af0454 	lhu	t7,1108(sp)
  42ee5c:	8fbc0018 	lw	gp,24(sp)
  42ee60:	104f0010 	beq	v0,t7,42eea4 <readPosition+0x2b0>
  42ee64:	97b80454 	lhu	t8,1108(sp)
  42ee68:	8f848098 	lw	a0,-32616(gp)
  42ee6c:	8f85805c 	lw	a1,-32676(gp)
  42ee70:	8f9983f8 	lw	t9,-31752(gp)
  42ee74:	24840020 	addiu	a0,a0,32
  42ee78:	0320f809 	jalr	t9
  42ee7c:	24a53bc4 	addiu	a1,a1,15300
  42ee80:	8fbc0018 	lw	gp,24(sp)
  42ee84:	24040001 	li	a0,1
  42ee88:	8f9983a0 	lw	t9,-31840(gp)
  42ee8c:	00000000 	nop
  42ee90:	0320f809 	jalr	t9
  42ee94:	00000000 	nop
  42ee98:	8fbc0018 	lw	gp,24(sp)
  42ee9c:	00000000 	nop
  42eea0:	97b80454 	lhu	t8,1108(sp)
  42eea4:	27b90028 	addiu	t9,sp,40
  42eea8:	03194021 	addu	t0,t8,t9
  42eeac:	a1000000 	sb	zero,0(t0)
  42eeb0:	8e040014 	lw	a0,20(s0)
  42eeb4:	00000000 	nop
  42eeb8:	10800008 	beqz	a0,42eedc <readPosition+0x2e8>
  42eebc:	00000000 	nop
  42eec0:	8f9985a4 	lw	t9,-31324(gp)
  42eec4:	27a50028 	addiu	a1,sp,40
  42eec8:	0320f809 	jalr	t9
  42eecc:	00000000 	nop
  42eed0:	8fbc0018 	lw	gp,24(sp)
  42eed4:	10000004 	b	42eee8 <readPosition+0x2f4>
  42eed8:	ae020024 	sw	v0,36(s0)
  42eedc:	10000002 	b	42eee8 <readPosition+0x2f4>
  42eee0:	ae000024 	sw	zero,36(s0)
  42eee4:	ae000024 	sw	zero,36(s0)
  42eee8:	8fbf001c 	lw	ra,28(sp)
  42eeec:	8fb00014 	lw	s0,20(sp)
  42eef0:	03e00008 	jr	ra
  42eef4:	27bd0458 	addiu	sp,sp,1112
