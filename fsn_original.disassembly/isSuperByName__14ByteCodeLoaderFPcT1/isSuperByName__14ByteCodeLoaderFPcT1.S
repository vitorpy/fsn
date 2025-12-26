# Function: isSuperByName__14ByteCodeLoaderFPcT1
# Address: 0x00434d40 - 0x00434de0
# Size: 0xa0 (160 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00434d40 <isSuperByName__14ByteCodeLoaderFPcT1>:
  434d40:	3c1c0fbf 	lui	gp,0xfbf
  434d44:	279c8df0 	addiu	gp,gp,-29200
  434d48:	0399e021 	addu	gp,gp,t9
  434d4c:	27bdffd8 	addiu	sp,sp,-40
  434d50:	8f998858 	lw	t9,-30632(gp)
  434d54:	afb1001c 	sw	s1,28(sp)
  434d58:	00a08825 	move	s1,a1
  434d5c:	afbf0024 	sw	ra,36(sp)
  434d60:	afbc0020 	sw	gp,32(sp)
  434d64:	afb00018 	sw	s0,24(sp)
  434d68:	0320f809 	jalr	t9
  434d6c:	00c02825 	move	a1,a2
  434d70:	8fbc0020 	lw	gp,32(sp)
  434d74:	14400003 	bnez	v0,434d84 <isSuperByName__14ByteCodeLoaderFPcT1+0x44>
  434d78:	00000000 	nop
  434d7c:	10000013 	b	434dcc <isSuperByName__14ByteCodeLoaderFPcT1+0x8c>
  434d80:	2402ffff 	li	v0,-1
  434d84:	8c500030 	lw	s0,48(v0)
  434d88:	00000000 	nop
  434d8c:	1200000f 	beqz	s0,434dcc <isSuperByName__14ByteCodeLoaderFPcT1+0x8c>
  434d90:	00001025 	move	v0,zero
  434d94:	8f9980cc 	lw	t9,-32564(gp)
  434d98:	8e050000 	lw	a1,0(s0)
  434d9c:	0320f809 	jalr	t9
  434da0:	02202025 	move	a0,s1
  434da4:	8fbc0020 	lw	gp,32(sp)
  434da8:	14400003 	bnez	v0,434db8 <isSuperByName__14ByteCodeLoaderFPcT1+0x78>
  434dac:	00000000 	nop
  434db0:	10000006 	b	434dcc <isSuperByName__14ByteCodeLoaderFPcT1+0x8c>
  434db4:	24020001 	li	v0,1
  434db8:	8e100004 	lw	s0,4(s0)
  434dbc:	00000000 	nop
  434dc0:	1600fff4 	bnez	s0,434d94 <isSuperByName__14ByteCodeLoaderFPcT1+0x54>
  434dc4:	00000000 	nop
  434dc8:	00001025 	move	v0,zero
  434dcc:	8fbf0024 	lw	ra,36(sp)
  434dd0:	8fb00018 	lw	s0,24(sp)
  434dd4:	8fb1001c 	lw	s1,28(sp)
  434dd8:	03e00008 	jr	ra
  434ddc:	27bd0028 	addiu	sp,sp,40
