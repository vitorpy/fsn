# Function: FindIconByName__14ByteCodeLoaderFPc
# Address: 0x00434a7c - 0x00434bd8
# Size: 0x15c (348 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00434a7c <FindIconByName__14ByteCodeLoaderFPc>:
  434a7c:	3c1c0fbf 	lui	gp,0xfbf
  434a80:	279c90b4 	addiu	gp,gp,-28492
  434a84:	0399e021 	addu	gp,gp,t9
  434a88:	27bdffd8 	addiu	sp,sp,-40
  434a8c:	afb1001c 	sw	s1,28(sp)
  434a90:	8f9189ec 	lw	s1,-30228(gp)
  434a94:	8f99889c 	lw	t9,-30564(gp)
  434a98:	afbf0024 	sw	ra,36(sp)
  434a9c:	afbc0020 	sw	gp,32(sp)
  434aa0:	afb00018 	sw	s0,24(sp)
  434aa4:	afa40028 	sw	a0,40(sp)
  434aa8:	8c900000 	lw	s0,0(a0)
  434aac:	0320f809 	jalr	t9
  434ab0:	02202025 	move	a0,s1
  434ab4:	8e2f0240 	lw	t7,576(s1)
  434ab8:	8fbc0020 	lw	gp,32(sp)
  434abc:	15e00013 	bnez	t7,434b0c <FindIconByName__14ByteCodeLoaderFPc+0x90>
  434ac0:	00000000 	nop
  434ac4:	8e38023c 	lw	t8,572(s1)
  434ac8:	00000000 	nop
  434acc:	1700000f 	bnez	t8,434b0c <FindIconByName__14ByteCodeLoaderFPc+0x90>
  434ad0:	00000000 	nop
  434ad4:	8f9988a0 	lw	t9,-30560(gp)
  434ad8:	02202025 	move	a0,s1
  434adc:	0320f809 	jalr	t9
  434ae0:	00000000 	nop
  434ae4:	8fbc0020 	lw	gp,32(sp)
  434ae8:	8fa40028 	lw	a0,40(sp)
  434aec:	8f85806c 	lw	a1,-32660(gp)
  434af0:	8f998850 	lw	t9,-30640(gp)
  434af4:	24a59a20 	addiu	a1,a1,-26080
  434af8:	0320f809 	jalr	t9
  434afc:	00000000 	nop
  434b00:	8fbc0020 	lw	gp,32(sp)
  434b04:	10000030 	b	434bc8 <FindIconByName__14ByteCodeLoaderFPc+0x14c>
  434b08:	8fbf0024 	lw	ra,36(sp)
  434b0c:	12000027 	beqz	s0,434bac <FindIconByName__14ByteCodeLoaderFPc+0x130>
  434b10:	00000000 	nop
  434b14:	8e050004 	lw	a1,4(s0)
  434b18:	00000000 	nop
  434b1c:	10a0001f 	beqz	a1,434b9c <FindIconByName__14ByteCodeLoaderFPc+0x120>
  434b20:	00000000 	nop
  434b24:	8e390240 	lw	t9,576(s1)
  434b28:	8e080034 	lw	t0,52(s0)
  434b2c:	00000000 	nop
  434b30:	1728001a 	bne	t9,t0,434b9c <FindIconByName__14ByteCodeLoaderFPc+0x120>
  434b34:	00000000 	nop
  434b38:	8e290230 	lw	t1,560(s1)
  434b3c:	00000000 	nop
  434b40:	11200016 	beqz	t1,434b9c <FindIconByName__14ByteCodeLoaderFPc+0x120>
  434b44:	00000000 	nop
  434b48:	8f9988ac 	lw	t9,-30548(gp)
  434b4c:	8e060008 	lw	a2,8(s0)
  434b50:	8e070010 	lw	a3,16(s0)
  434b54:	0320f809 	jalr	t9
  434b58:	02202025 	move	a0,s1
  434b5c:	8fbc0020 	lw	gp,32(sp)
  434b60:	1040000e 	beqz	v0,434b9c <FindIconByName__14ByteCodeLoaderFPc+0x120>
  434b64:	00000000 	nop
  434b68:	8f9988a0 	lw	t9,-30560(gp)
  434b6c:	02202025 	move	a0,s1
  434b70:	0320f809 	jalr	t9
  434b74:	00000000 	nop
  434b78:	8fbc0020 	lw	gp,32(sp)
  434b7c:	00002025 	move	a0,zero
  434b80:	8f998864 	lw	t9,-30620(gp)
  434b84:	02002825 	move	a1,s0
  434b88:	0320f809 	jalr	t9
  434b8c:	00000000 	nop
  434b90:	8fbc0020 	lw	gp,32(sp)
  434b94:	1000000c 	b	434bc8 <FindIconByName__14ByteCodeLoaderFPc+0x14c>
  434b98:	8fbf0024 	lw	ra,36(sp)
  434b9c:	8e100068 	lw	s0,104(s0)
  434ba0:	00000000 	nop
  434ba4:	1600ffdb 	bnez	s0,434b14 <FindIconByName__14ByteCodeLoaderFPc+0x98>
  434ba8:	00000000 	nop
  434bac:	8f9988a0 	lw	t9,-30560(gp)
  434bb0:	02202025 	move	a0,s1
  434bb4:	0320f809 	jalr	t9
  434bb8:	00000000 	nop
  434bbc:	8fbc0020 	lw	gp,32(sp)
  434bc0:	00001025 	move	v0,zero
  434bc4:	8fbf0024 	lw	ra,36(sp)
  434bc8:	8fb00018 	lw	s0,24(sp)
  434bcc:	8fb1001c 	lw	s1,28(sp)
  434bd0:	03e00008 	jr	ra
  434bd4:	27bd0028 	addiu	sp,sp,40
