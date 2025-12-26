# Function: FUN_004349f8
# Address: 0x004349f8 - 0x00434a7c
# Size: 0x84 (132 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004349f8 <FindIconByType__14ByteCodeLoaderFPc+0xc>:
  4349f8:	27bdffd8 	addiu	sp,sp,-40
  4349fc:	afbf0024 	sw	ra,36(sp)
  434a00:	afbc0020 	sw	gp,32(sp)
  434a04:	afb1001c 	sw	s1,28(sp)
  434a08:	afb00018 	sw	s0,24(sp)
  434a0c:	8c900000 	lw	s0,0(a0)
  434a10:	00a08825 	move	s1,a1
  434a14:	12000014 	beqz	s0,434a68 <FindIconByType__14ByteCodeLoaderFPc+0x7c>
  434a18:	00001025 	move	v0,zero
  434a1c:	8f9980cc 	lw	t9,-32564(gp)
  434a20:	8e050000 	lw	a1,0(s0)
  434a24:	0320f809 	jalr	t9
  434a28:	02202025 	move	a0,s1
  434a2c:	8fbc0020 	lw	gp,32(sp)
  434a30:	14400008 	bnez	v0,434a54 <FindIconByType__14ByteCodeLoaderFPc+0x68>
  434a34:	00000000 	nop
  434a38:	8f998864 	lw	t9,-30620(gp)
  434a3c:	00002025 	move	a0,zero
  434a40:	0320f809 	jalr	t9
  434a44:	02002825 	move	a1,s0
  434a48:	8fbc0020 	lw	gp,32(sp)
  434a4c:	10000007 	b	434a6c <FindIconByType__14ByteCodeLoaderFPc+0x80>
  434a50:	8fbf0024 	lw	ra,36(sp)
  434a54:	8e100068 	lw	s0,104(s0)
  434a58:	00000000 	nop
  434a5c:	1600ffef 	bnez	s0,434a1c <FindIconByType__14ByteCodeLoaderFPc+0x30>
  434a60:	00000000 	nop
  434a64:	00001025 	move	v0,zero
  434a68:	8fbf0024 	lw	ra,36(sp)
  434a6c:	8fb00018 	lw	s0,24(sp)
  434a70:	8fb1001c 	lw	s1,28(sp)
  434a74:	03e00008 	jr	ra
  434a78:	27bd0028 	addiu	sp,sp,40
