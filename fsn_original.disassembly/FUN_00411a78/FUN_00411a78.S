# Function: FUN_00411a78
# Address: 0x00411a78 - 0x00411b24
# Size: 0xac (172 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411a78 <handleEvents+0xec>:
  411a78:	3c1c0fc1 	lui	gp,0xfc1
  411a7c:	279cc0b8 	addiu	gp,gp,-16200
  411a80:	0399e021 	addu	gp,gp,t9
  411a84:	27bdffe0 	addiu	sp,sp,-32
  411a88:	afbf001c 	sw	ra,28(sp)
  411a8c:	afbc0018 	sw	gp,24(sp)
  411a90:	afa40020 	sw	a0,32(sp)
  411a94:	8ca60028 	lw	a2,40(a1)
  411a98:	00a03825 	move	a3,a1
  411a9c:	10c00009 	beqz	a2,411ac4 <handleEvents+0x138>
  411aa0:	00000000 	nop
  411aa4:	8f998018 	lw	t9,-32744(gp)
  411aa8:	00c02825 	move	a1,a2
  411aac:	27391a78 	addiu	t9,t9,6776
  411ab0:	0320f809 	jalr	t9
  411ab4:	afa70024 	sw	a3,36(sp)
  411ab8:	8fbc0018 	lw	gp,24(sp)
  411abc:	8fa70024 	lw	a3,36(sp)
  411ac0:	00000000 	nop
  411ac4:	8f99831c 	lw	t9,-31972(gp)
  411ac8:	8fa40020 	lw	a0,32(sp)
  411acc:	8ce50000 	lw	a1,0(a3)
  411ad0:	0320f809 	jalr	t9
  411ad4:	00000000 	nop
  411ad8:	8fbc0018 	lw	gp,24(sp)
  411adc:	8fa40020 	lw	a0,32(sp)
  411ae0:	8f9983e0 	lw	t9,-31776(gp)
  411ae4:	00000000 	nop
  411ae8:	0320f809 	jalr	t9
  411aec:	00000000 	nop
  411af0:	8fae0020 	lw	t6,32(sp)
  411af4:	8fbc0018 	lw	gp,24(sp)
  411af8:	004e1821 	addu	v1,v0,t6
  411afc:	906fffff 	lbu	t7,-1(v1)
  411b00:	2404002f 	li	a0,47
  411b04:	108f0004 	beq	a0,t7,411b18 <handleEvents+0x18c>
  411b08:	8fbf001c 	lw	ra,28(sp)
  411b0c:	a0640000 	sb	a0,0(v1)
  411b10:	a0600001 	sb	zero,1(v1)
  411b14:	8fbf001c 	lw	ra,28(sp)
  411b18:	27bd0020 	addiu	sp,sp,32
  411b1c:	03e00008 	jr	ra
  411b20:	00000000 	nop
