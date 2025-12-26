# Function: FindInfoByName__14ByteCodeLoaderFPc
# Address: 0x00434bd8 - 0x00434cc4
# Size: 0xec (236 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00434bd8 <FindInfoByName__14ByteCodeLoaderFPc>:
  434bd8:	3c1c0fbf 	lui	gp,0xfbf
  434bdc:	279c8f58 	addiu	gp,gp,-28840
  434be0:	0399e021 	addu	gp,gp,t9
  434be4:	27bdffd8 	addiu	sp,sp,-40
  434be8:	afb1001c 	sw	s1,28(sp)
  434bec:	8f9189ec 	lw	s1,-30228(gp)
  434bf0:	8f99889c 	lw	t9,-30564(gp)
  434bf4:	afbf0024 	sw	ra,36(sp)
  434bf8:	afbc0020 	sw	gp,32(sp)
  434bfc:	afb00018 	sw	s0,24(sp)
  434c00:	8c900000 	lw	s0,0(a0)
  434c04:	0320f809 	jalr	t9
  434c08:	02202025 	move	a0,s1
  434c0c:	8fbc0020 	lw	gp,32(sp)
  434c10:	12000021 	beqz	s0,434c98 <FindInfoByName__14ByteCodeLoaderFPc+0xc0>
  434c14:	00000000 	nop
  434c18:	8e050004 	lw	a1,4(s0)
  434c1c:	00000000 	nop
  434c20:	10a00019 	beqz	a1,434c88 <FindInfoByName__14ByteCodeLoaderFPc+0xb0>
  434c24:	00000000 	nop
  434c28:	8e2e0240 	lw	t6,576(s1)
  434c2c:	8e0f0034 	lw	t7,52(s0)
  434c30:	00000000 	nop
  434c34:	15cf0014 	bne	t6,t7,434c88 <FindInfoByName__14ByteCodeLoaderFPc+0xb0>
  434c38:	00000000 	nop
  434c3c:	8e380230 	lw	t8,560(s1)
  434c40:	00000000 	nop
  434c44:	13000010 	beqz	t8,434c88 <FindInfoByName__14ByteCodeLoaderFPc+0xb0>
  434c48:	00000000 	nop
  434c4c:	8f9988ac 	lw	t9,-30548(gp)
  434c50:	8e060008 	lw	a2,8(s0)
  434c54:	8e070010 	lw	a3,16(s0)
  434c58:	0320f809 	jalr	t9
  434c5c:	02202025 	move	a0,s1
  434c60:	8fbc0020 	lw	gp,32(sp)
  434c64:	10400008 	beqz	v0,434c88 <FindInfoByName__14ByteCodeLoaderFPc+0xb0>
  434c68:	00000000 	nop
  434c6c:	8f9988a0 	lw	t9,-30560(gp)
  434c70:	02202025 	move	a0,s1
  434c74:	0320f809 	jalr	t9
  434c78:	00000000 	nop
  434c7c:	8fbc0020 	lw	gp,32(sp)
  434c80:	1000000b 	b	434cb0 <FindInfoByName__14ByteCodeLoaderFPc+0xd8>
  434c84:	02001025 	move	v0,s0
  434c88:	8e100068 	lw	s0,104(s0)
  434c8c:	00000000 	nop
  434c90:	1600ffe1 	bnez	s0,434c18 <FindInfoByName__14ByteCodeLoaderFPc+0x40>
  434c94:	00000000 	nop
  434c98:	8f9988a0 	lw	t9,-30560(gp)
  434c9c:	02202025 	move	a0,s1
  434ca0:	0320f809 	jalr	t9
  434ca4:	00000000 	nop
  434ca8:	8fbc0020 	lw	gp,32(sp)
  434cac:	00001025 	move	v0,zero
  434cb0:	8fbf0024 	lw	ra,36(sp)
  434cb4:	8fb00018 	lw	s0,24(sp)
  434cb8:	8fb1001c 	lw	s1,28(sp)
  434cbc:	03e00008 	jr	ra
  434cc0:	27bd0028 	addiu	sp,sp,40
