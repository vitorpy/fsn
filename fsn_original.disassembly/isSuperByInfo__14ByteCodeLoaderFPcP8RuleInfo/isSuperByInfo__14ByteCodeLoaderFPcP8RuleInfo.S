# Function: isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo
# Address: 0x00434e80 - 0x00434f00
# Size: 0x80 (128 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00434e80 <isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo>:
  434e80:	3c1c0fbf 	lui	gp,0xfbf
  434e84:	279c8cb0 	addiu	gp,gp,-29520
  434e88:	0399e021 	addu	gp,gp,t9
  434e8c:	27bdffd8 	addiu	sp,sp,-40
  434e90:	afbf0024 	sw	ra,36(sp)
  434e94:	afbc0020 	sw	gp,32(sp)
  434e98:	afb1001c 	sw	s1,28(sp)
  434e9c:	afb00018 	sw	s0,24(sp)
  434ea0:	afa40028 	sw	a0,40(sp)
  434ea4:	8cd00030 	lw	s0,48(a2)
  434ea8:	00a08825 	move	s1,a1
  434eac:	1200000f 	beqz	s0,434eec <isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo+0x6c>
  434eb0:	00001025 	move	v0,zero
  434eb4:	8f9980cc 	lw	t9,-32564(gp)
  434eb8:	8e050000 	lw	a1,0(s0)
  434ebc:	0320f809 	jalr	t9
  434ec0:	02202025 	move	a0,s1
  434ec4:	8fbc0020 	lw	gp,32(sp)
  434ec8:	14400003 	bnez	v0,434ed8 <isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo+0x58>
  434ecc:	00000000 	nop
  434ed0:	10000006 	b	434eec <isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo+0x6c>
  434ed4:	24020001 	li	v0,1
  434ed8:	8e100004 	lw	s0,4(s0)
  434edc:	00000000 	nop
  434ee0:	1600fff4 	bnez	s0,434eb4 <isSuperByInfo__14ByteCodeLoaderFPcP8RuleInfo+0x34>
  434ee4:	00000000 	nop
  434ee8:	00001025 	move	v0,zero
  434eec:	8fbf0024 	lw	ra,36(sp)
  434ef0:	8fb00018 	lw	s0,24(sp)
  434ef4:	8fb1001c 	lw	s1,28(sp)
  434ef8:	03e00008 	jr	ra
  434efc:	27bd0028 	addiu	sp,sp,40
