# Function: FUN_00410e7c
# Address: 0x00410e7c - 0x00410f30
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00410e7c <filemessage+0xc>:
  410e7c:	27bdfba8 	addiu	sp,sp,-1112
  410e80:	afbf001c 	sw	ra,28(sp)
  410e84:	afbc0018 	sw	gp,24(sp)
  410e88:	afa40458 	sw	a0,1112(sp)
  410e8c:	afa60460 	sw	a2,1120(sp)
  410e90:	90ae0000 	lbu	t6,0(a1)
  410e94:	2402002f 	li	v0,47
  410e98:	144e0009 	bne	v0,t6,410ec0 <filemessage+0x50>
  410e9c:	00a03825 	move	a3,a1
  410ea0:	90af0001 	lbu	t7,1(a1)
  410ea4:	00000000 	nop
  410ea8:	144f0005 	bne	v0,t7,410ec0 <filemessage+0x50>
  410eac:	00000000 	nop
  410eb0:	90f80002 	lbu	t8,2(a3)
  410eb4:	24e70001 	addiu	a3,a3,1
  410eb8:	1058fffd 	beq	v0,t8,410eb0 <filemessage+0x40>
  410ebc:	00000000 	nop
  410ec0:	8f998134 	lw	t9,-32460(gp)
  410ec4:	8fa50458 	lw	a1,1112(sp)
  410ec8:	27a40024 	addiu	a0,sp,36
  410ecc:	0320f809 	jalr	t9
  410ed0:	afa7045c 	sw	a3,1116(sp)
  410ed4:	8fbc0018 	lw	gp,24(sp)
  410ed8:	27a40024 	addiu	a0,sp,36
  410edc:	8f85805c 	lw	a1,-32676(gp)
  410ee0:	8f99831c 	lw	t9,-31972(gp)
  410ee4:	24a5a6c8 	addiu	a1,a1,-22840
  410ee8:	0320f809 	jalr	t9
  410eec:	00000000 	nop
  410ef0:	8fbc0018 	lw	gp,24(sp)
  410ef4:	8fa5045c 	lw	a1,1116(sp)
  410ef8:	8f99831c 	lw	t9,-31972(gp)
  410efc:	27a40024 	addiu	a0,sp,36
  410f00:	0320f809 	jalr	t9
  410f04:	00000000 	nop
  410f08:	8fbc0018 	lw	gp,24(sp)
  410f0c:	8fa50460 	lw	a1,1120(sp)
  410f10:	8f998568 	lw	t9,-31384(gp)
  410f14:	27a40024 	addiu	a0,sp,36
  410f18:	0320f809 	jalr	t9
  410f1c:	00000000 	nop
  410f20:	8fbf001c 	lw	ra,28(sp)
  410f24:	8fbc0018 	lw	gp,24(sp)
  410f28:	03e00008 	jr	ra
  410f2c:	27bd0458 	addiu	sp,sp,1112
