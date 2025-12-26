# Function: updateDir
# Address: 0x00417b7c - 0x00417c20
# Size: 0xa4 (164 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00417b7c <updateDir>:
  417b7c:	3c1c0fc0 	lui	gp,0xfc0
  417b80:	279c5fb4 	addiu	gp,gp,24500
  417b84:	0399e021 	addu	gp,gp,t9
  417b88:	27bdfbd8 	addiu	sp,sp,-1064
  417b8c:	afa40428 	sw	a0,1064(sp)
  417b90:	8fae0428 	lw	t6,1064(sp)
  417b94:	8f99857c 	lw	t9,-31364(gp)
  417b98:	afbf001c 	sw	ra,28(sp)
  417b9c:	afbc0018 	sw	gp,24(sp)
  417ba0:	8dc50028 	lw	a1,40(t6)
  417ba4:	0320f809 	jalr	t9
  417ba8:	27a40028 	addiu	a0,sp,40
  417bac:	8fbc0018 	lw	gp,24(sp)
  417bb0:	27a40028 	addiu	a0,sp,40
  417bb4:	8f9983e0 	lw	t9,-31776(gp)
  417bb8:	00000000 	nop
  417bbc:	0320f809 	jalr	t9
  417bc0:	00000000 	nop
  417bc4:	8fbc0018 	lw	gp,24(sp)
  417bc8:	27a50028 	addiu	a1,sp,40
  417bcc:	8f998018 	lw	t9,-32744(gp)
  417bd0:	8fa40428 	lw	a0,1064(sp)
  417bd4:	273938e8 	addiu	t9,t9,14568
  417bd8:	00453021 	addu	a2,v0,a1
  417bdc:	0320f809 	jalr	t9
  417be0:	00003825 	move	a3,zero
  417be4:	8fbc0018 	lw	gp,24(sp)
  417be8:	10400009 	beqz	v0,417c10 <updateDir+0x94>
  417bec:	304300ff 	andi	v1,v0,0xff
  417bf0:	8f998018 	lw	t9,-32744(gp)
  417bf4:	8fa40428 	lw	a0,1064(sp)
  417bf8:	273944ec 	addiu	t9,t9,17644
  417bfc:	0320f809 	jalr	t9
  417c00:	a3a30027 	sb	v1,39(sp)
  417c04:	8fbc0018 	lw	gp,24(sp)
  417c08:	93a30027 	lbu	v1,39(sp)
  417c0c:	00000000 	nop
  417c10:	8fbf001c 	lw	ra,28(sp)
  417c14:	27bd0428 	addiu	sp,sp,1064
  417c18:	03e00008 	jr	ra
  417c1c:	00601025 	move	v0,v1
