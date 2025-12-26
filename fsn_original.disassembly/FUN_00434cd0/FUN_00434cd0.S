# Function: FUN_00434cd0
# Address: 0x00434cd0 - 0x00434d40
# Size: 0x70 (112 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00434cd0 <FindInfoByType__14ByteCodeLoaderFPc+0xc>:
  434cd0:	27bdffd8 	addiu	sp,sp,-40
  434cd4:	afbf0024 	sw	ra,36(sp)
  434cd8:	afbc0020 	sw	gp,32(sp)
  434cdc:	afb1001c 	sw	s1,28(sp)
  434ce0:	afb00018 	sw	s0,24(sp)
  434ce4:	8c900000 	lw	s0,0(a0)
  434ce8:	00a08825 	move	s1,a1
  434cec:	1200000f 	beqz	s0,434d2c <FindInfoByType__14ByteCodeLoaderFPc+0x68>
  434cf0:	00001025 	move	v0,zero
  434cf4:	8f9980cc 	lw	t9,-32564(gp)
  434cf8:	8e050000 	lw	a1,0(s0)
  434cfc:	0320f809 	jalr	t9
  434d00:	02202025 	move	a0,s1
  434d04:	8fbc0020 	lw	gp,32(sp)
  434d08:	14400003 	bnez	v0,434d18 <FindInfoByType__14ByteCodeLoaderFPc+0x54>
  434d0c:	00000000 	nop
  434d10:	10000006 	b	434d2c <FindInfoByType__14ByteCodeLoaderFPc+0x68>
  434d14:	02001025 	move	v0,s0
  434d18:	8e100068 	lw	s0,104(s0)
  434d1c:	00000000 	nop
  434d20:	1600fff4 	bnez	s0,434cf4 <FindInfoByType__14ByteCodeLoaderFPc+0x30>
  434d24:	00000000 	nop
  434d28:	00001025 	move	v0,zero
  434d2c:	8fbf0024 	lw	ra,36(sp)
  434d30:	8fb00018 	lw	s0,24(sp)
  434d34:	8fb1001c 	lw	s1,28(sp)
  434d38:	03e00008 	jr	ra
  434d3c:	27bd0028 	addiu	sp,sp,40
