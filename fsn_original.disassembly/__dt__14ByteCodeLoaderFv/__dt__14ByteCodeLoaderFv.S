# Function: __dt__14ByteCodeLoaderFv
# Address: 0x00434f00 - 0x0043501c
# Size: 0x11c (284 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00434f00 <__dt__14ByteCodeLoaderFv>:
  434f00:	3c1c0fbf 	lui	gp,0xfbf
  434f04:	279c8c30 	addiu	gp,gp,-29648
  434f08:	0399e021 	addu	gp,gp,t9
  434f0c:	27bdffd8 	addiu	sp,sp,-40
  434f10:	afbf0024 	sw	ra,36(sp)
  434f14:	afbc0020 	sw	gp,32(sp)
  434f18:	afb1001c 	sw	s1,28(sp)
  434f1c:	afb00018 	sw	s0,24(sp)
  434f20:	afa40028 	sw	a0,40(sp)
  434f24:	10800038 	beqz	a0,435008 <__dt__14ByteCodeLoaderFv+0x108>
  434f28:	afa5002c 	sw	a1,44(sp)
  434f2c:	8c900000 	lw	s0,0(a0)
  434f30:	00000000 	nop
  434f34:	12000009 	beqz	s0,434f5c <__dt__14ByteCodeLoaderFv+0x5c>
  434f38:	8faf0028 	lw	t7,40(sp)
  434f3c:	8f9984cc 	lw	t9,-31540(gp)
  434f40:	8e110068 	lw	s1,104(s0)
  434f44:	0320f809 	jalr	t9
  434f48:	02002025 	move	a0,s0
  434f4c:	8fbc0020 	lw	gp,32(sp)
  434f50:	1620fffa 	bnez	s1,434f3c <__dt__14ByteCodeLoaderFv+0x3c>
  434f54:	02208025 	move	s0,s1
  434f58:	8faf0028 	lw	t7,40(sp)
  434f5c:	00000000 	nop
  434f60:	8df00008 	lw	s0,8(t7)
  434f64:	00000000 	nop
  434f68:	12000009 	beqz	s0,434f90 <__dt__14ByteCodeLoaderFv+0x90>
  434f6c:	8fb80028 	lw	t8,40(sp)
  434f70:	8f9984cc 	lw	t9,-31540(gp)
  434f74:	8e110010 	lw	s1,16(s0)
  434f78:	0320f809 	jalr	t9
  434f7c:	02002025 	move	a0,s0
  434f80:	8fbc0020 	lw	gp,32(sp)
  434f84:	1620fffa 	bnez	s1,434f70 <__dt__14ByteCodeLoaderFv+0x70>
  434f88:	02208025 	move	s0,s1
  434f8c:	8fb80028 	lw	t8,40(sp)
  434f90:	00000000 	nop
  434f94:	8f100010 	lw	s0,16(t8)
  434f98:	00000000 	nop
  434f9c:	12000010 	beqz	s0,434fe0 <__dt__14ByteCodeLoaderFv+0xe0>
  434fa0:	8fb9002c 	lw	t9,44(sp)
  434fa4:	8f9984cc 	lw	t9,-31540(gp)
  434fa8:	8e110004 	lw	s1,4(s0)
  434fac:	8e040000 	lw	a0,0(s0)
  434fb0:	0320f809 	jalr	t9
  434fb4:	00000000 	nop
  434fb8:	8fbc0020 	lw	gp,32(sp)
  434fbc:	02002025 	move	a0,s0
  434fc0:	8f9984cc 	lw	t9,-31540(gp)
  434fc4:	00000000 	nop
  434fc8:	0320f809 	jalr	t9
  434fcc:	00000000 	nop
  434fd0:	8fbc0020 	lw	gp,32(sp)
  434fd4:	1620fff3 	bnez	s1,434fa4 <__dt__14ByteCodeLoaderFv+0xa4>
  434fd8:	02208025 	move	s0,s1
  434fdc:	8fb9002c 	lw	t9,44(sp)
  434fe0:	00000000 	nop
  434fe4:	33280001 	andi	t0,t9,0x1
  434fe8:	11000008 	beqz	t0,43500c <__dt__14ByteCodeLoaderFv+0x10c>
  434fec:	8fbf0024 	lw	ra,36(sp)
  434ff0:	8f9984cc 	lw	t9,-31540(gp)
  434ff4:	8fa40028 	lw	a0,40(sp)
  434ff8:	0320f809 	jalr	t9
  434ffc:	00000000 	nop
  435000:	8fbc0020 	lw	gp,32(sp)
  435004:	00000000 	nop
  435008:	8fbf0024 	lw	ra,36(sp)
  43500c:	8fb00018 	lw	s0,24(sp)
  435010:	8fb1001c 	lw	s1,28(sp)
  435014:	03e00008 	jr	ra
  435018:	27bd0028 	addiu	sp,sp,40
