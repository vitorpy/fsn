# Function: isSuperByType__14ByteCodeLoaderFPcT1
# Address: 0x00434de0 - 0x00434e80
# Size: 0xa0 (160 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00434de0 <isSuperByType__14ByteCodeLoaderFPcT1>:
  434de0:	3c1c0fbf 	lui	gp,0xfbf
  434de4:	279c8d50 	addiu	gp,gp,-29360
  434de8:	0399e021 	addu	gp,gp,t9
  434dec:	27bdffd8 	addiu	sp,sp,-40
  434df0:	8f99885c 	lw	t9,-30628(gp)
  434df4:	afb1001c 	sw	s1,28(sp)
  434df8:	00a08825 	move	s1,a1
  434dfc:	afbf0024 	sw	ra,36(sp)
  434e00:	afbc0020 	sw	gp,32(sp)
  434e04:	afb00018 	sw	s0,24(sp)
  434e08:	0320f809 	jalr	t9
  434e0c:	00c02825 	move	a1,a2
  434e10:	8fbc0020 	lw	gp,32(sp)
  434e14:	14400003 	bnez	v0,434e24 <isSuperByType__14ByteCodeLoaderFPcT1+0x44>
  434e18:	00000000 	nop
  434e1c:	10000013 	b	434e6c <isSuperByType__14ByteCodeLoaderFPcT1+0x8c>
  434e20:	2402ffff 	li	v0,-1
  434e24:	8c500030 	lw	s0,48(v0)
  434e28:	00000000 	nop
  434e2c:	1200000f 	beqz	s0,434e6c <isSuperByType__14ByteCodeLoaderFPcT1+0x8c>
  434e30:	00001025 	move	v0,zero
  434e34:	8f9980cc 	lw	t9,-32564(gp)
  434e38:	8e050000 	lw	a1,0(s0)
  434e3c:	0320f809 	jalr	t9
  434e40:	02202025 	move	a0,s1
  434e44:	8fbc0020 	lw	gp,32(sp)
  434e48:	14400003 	bnez	v0,434e58 <isSuperByType__14ByteCodeLoaderFPcT1+0x78>
  434e4c:	00000000 	nop
  434e50:	10000006 	b	434e6c <isSuperByType__14ByteCodeLoaderFPcT1+0x8c>
  434e54:	24020001 	li	v0,1
  434e58:	8e100004 	lw	s0,4(s0)
  434e5c:	00000000 	nop
  434e60:	1600fff4 	bnez	s0,434e34 <isSuperByType__14ByteCodeLoaderFPcT1+0x54>
  434e64:	00000000 	nop
  434e68:	00001025 	move	v0,zero
  434e6c:	8fbf0024 	lw	ra,36(sp)
  434e70:	8fb00018 	lw	s0,24(sp)
  434e74:	8fb1001c 	lw	s1,28(sp)
  434e78:	03e00008 	jr	ra
  434e7c:	27bd0028 	addiu	sp,sp,40
