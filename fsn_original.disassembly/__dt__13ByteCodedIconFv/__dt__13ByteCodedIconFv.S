# Function: __dt__13ByteCodedIconFv
# Address: 0x0043515c - 0x004351f4
# Size: 0x98 (152 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043515c <__dt__13ByteCodedIconFv>:
  43515c:	3c1c0fbf 	lui	gp,0xfbf
  435160:	279c89d4 	addiu	gp,gp,-30252
  435164:	0399e021 	addu	gp,gp,t9
  435168:	27bdffe0 	addiu	sp,sp,-32
  43516c:	afbf001c 	sw	ra,28(sp)
  435170:	afbc0018 	sw	gp,24(sp)
  435174:	afa50024 	sw	a1,36(sp)
  435178:	1080001a 	beqz	a0,4351e4 <__dt__13ByteCodedIconFv+0x88>
  43517c:	00803025 	move	a2,a0
  435180:	8f8e89f0 	lw	t6,-30224(gp)
  435184:	00000000 	nop
  435188:	ac8e0060 	sw	t6,96(a0)
  43518c:	8c840018 	lw	a0,24(a0)
  435190:	00000000 	nop
  435194:	10800009 	beqz	a0,4351bc <__dt__13ByteCodedIconFv+0x60>
  435198:	8faf0024 	lw	t7,36(sp)
  43519c:	8f9984cc 	lw	t9,-31540(gp)
  4351a0:	afa60020 	sw	a2,32(sp)
  4351a4:	0320f809 	jalr	t9
  4351a8:	00000000 	nop
  4351ac:	8fbc0018 	lw	gp,24(sp)
  4351b0:	8fa60020 	lw	a2,32(sp)
  4351b4:	00000000 	nop
  4351b8:	8faf0024 	lw	t7,36(sp)
  4351bc:	00000000 	nop
  4351c0:	31f80001 	andi	t8,t7,0x1
  4351c4:	13000008 	beqz	t8,4351e8 <__dt__13ByteCodedIconFv+0x8c>
  4351c8:	8fbf001c 	lw	ra,28(sp)
  4351cc:	8f9984cc 	lw	t9,-31540(gp)
  4351d0:	00c02025 	move	a0,a2
  4351d4:	0320f809 	jalr	t9
  4351d8:	00000000 	nop
  4351dc:	8fbc0018 	lw	gp,24(sp)
  4351e0:	00000000 	nop
  4351e4:	8fbf001c 	lw	ra,28(sp)
  4351e8:	27bd0020 	addiu	sp,sp,32
  4351ec:	03e00008 	jr	ra
  4351f0:	00000000 	nop
