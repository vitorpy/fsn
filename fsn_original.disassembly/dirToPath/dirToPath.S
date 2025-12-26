# Function: dirToPath
# Address: 0x00411b24 - 0x00411b84
# Size: 0x60 (96 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411b24 <dirToPath>:
  411b24:	3c1c0fc1 	lui	gp,0xfc1
  411b28:	279cc00c 	addiu	gp,gp,-16372
  411b2c:	0399e021 	addu	gp,gp,t9
  411b30:	27bdffe0 	addiu	sp,sp,-32
  411b34:	afbf001c 	sw	ra,28(sp)
  411b38:	14800004 	bnez	a0,411b4c <dirToPath+0x28>
  411b3c:	afbc0018 	sw	gp,24(sp)
  411b40:	8f84806c 	lw	a0,-32660(gp)
  411b44:	00000000 	nop
  411b48:	24846710 	addiu	a0,a0,26384
  411b4c:	10a00009 	beqz	a1,411b74 <dirToPath+0x50>
  411b50:	a0800000 	sb	zero,0(a0)
  411b54:	8f998018 	lw	t9,-32744(gp)
  411b58:	afa40020 	sw	a0,32(sp)
  411b5c:	27391a78 	addiu	t9,t9,6776
  411b60:	0320f809 	jalr	t9
  411b64:	00000000 	nop
  411b68:	8fbc0018 	lw	gp,24(sp)
  411b6c:	8fa40020 	lw	a0,32(sp)
  411b70:	00000000 	nop
  411b74:	8fbf001c 	lw	ra,28(sp)
  411b78:	27bd0020 	addiu	sp,sp,32
  411b7c:	03e00008 	jr	ra
  411b80:	00801025 	move	v0,a0
