# Function: __ct__6ClientFv
# Address: 0x0043b16c - 0x0043b1b8
# Size: 0x4c (76 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043b16c <__ct__6ClientFv>:
  43b16c:	3c1c0fbe 	lui	gp,0xfbe
  43b170:	279c29c4 	addiu	gp,gp,10692
  43b174:	0399e021 	addu	gp,gp,t9
  43b178:	27bdffe0 	addiu	sp,sp,-32
  43b17c:	afbf001c 	sw	ra,28(sp)
  43b180:	14800008 	bnez	a0,43b1a4 <__ct__6ClientFv+0x38>
  43b184:	afbc0018 	sw	gp,24(sp)
  43b188:	8f9984a4 	lw	t9,-31580(gp)
  43b18c:	24040004 	li	a0,4
  43b190:	0320f809 	jalr	t9
  43b194:	00000000 	nop
  43b198:	8fbc0018 	lw	gp,24(sp)
  43b19c:	10400002 	beqz	v0,43b1a8 <__ct__6ClientFv+0x3c>
  43b1a0:	00402025 	move	a0,v0
  43b1a4:	ac800000 	sw	zero,0(a0)
  43b1a8:	8fbf001c 	lw	ra,28(sp)
  43b1ac:	27bd0020 	addiu	sp,sp,32
  43b1b0:	03e00008 	jr	ra
  43b1b4:	00801025 	move	v0,a0
