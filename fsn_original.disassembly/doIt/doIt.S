# Function: doIt
# Address: 0x0041f10c - 0x0041f1d8
# Size: 0xcc (204 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041f10c <doIt>:
  41f10c:	3c1c0fc0 	lui	gp,0xfc0
  41f110:	279cea24 	addiu	gp,gp,-5596
  41f114:	0399e021 	addu	gp,gp,t9
  41f118:	8f82897c 	lw	v0,-30340(gp)
  41f11c:	27bdffd8 	addiu	sp,sp,-40
  41f120:	8c420000 	lw	v0,0(v0)
  41f124:	afbf0024 	sw	ra,36(sp)
  41f128:	afbc0020 	sw	gp,32(sp)
  41f12c:	afa40028 	sw	a0,40(sp)
  41f130:	8c450048 	lw	a1,72(v0)
  41f134:	93ae002b 	lbu	t6,43(sp)
  41f138:	10a00015 	beqz	a1,41f190 <doIt+0x84>
  41f13c:	00000000 	nop
  41f140:	11c00003 	beqz	t6,41f150 <doIt+0x44>
  41f144:	24060004 	li	a2,4
  41f148:	10000001 	b	41f150 <doIt+0x44>
  41f14c:	24060005 	li	a2,5
  41f150:	8f99805c 	lw	t9,-32676(gp)
  41f154:	8c440044 	lw	a0,68(v0)
  41f158:	2739b4a8 	addiu	t9,t9,-19288
  41f15c:	afb90014 	sw	t9,20(sp)
  41f160:	8f99801c 	lw	t9,-32740(gp)
  41f164:	93a7002b 	lbu	a3,43(sp)
  41f168:	8f98805c 	lw	t8,-32676(gp)
  41f16c:	2739e260 	addiu	t9,t9,-7584
  41f170:	2cef0001 	sltiu	t7,a3,1
  41f174:	2718b4a0 	addiu	t8,t8,-19296
  41f178:	afb80010 	sw	t8,16(sp)
  41f17c:	0320f809 	jalr	t9
  41f180:	01e03825 	move	a3,t7
  41f184:	8fbc0020 	lw	gp,32(sp)
  41f188:	10000010 	b	41f1cc <doIt+0xc0>
  41f18c:	8fbf0024 	lw	ra,36(sp)
  41f190:	8c440044 	lw	a0,68(v0)
  41f194:	00000000 	nop
  41f198:	1080000c 	beqz	a0,41f1cc <doIt+0xc0>
  41f19c:	8fbf0024 	lw	ra,36(sp)
  41f1a0:	8c48003c 	lw	t0,60(v0)
  41f1a4:	00000000 	nop
  41f1a8:	11040008 	beq	t0,a0,41f1cc <doIt+0xc0>
  41f1ac:	8fbf0024 	lw	ra,36(sp)
  41f1b0:	8f99855c 	lw	t9,-31396(gp)
  41f1b4:	00000000 	nop
  41f1b8:	0320f809 	jalr	t9
  41f1bc:	00000000 	nop
  41f1c0:	8fbc0020 	lw	gp,32(sp)
  41f1c4:	00000000 	nop
  41f1c8:	8fbf0024 	lw	ra,36(sp)
  41f1cc:	27bd0028 	addiu	sp,sp,40
  41f1d0:	03e00008 	jr	ra
  41f1d4:	00000000 	nop
