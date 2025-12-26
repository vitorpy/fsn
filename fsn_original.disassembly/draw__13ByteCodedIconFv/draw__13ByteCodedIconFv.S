# Function: draw__13ByteCodedIconFv
# Address: 0x00435228 - 0x00435348
# Size: 0x120 (288 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00435228 <draw__13ByteCodedIconFv>:
  435228:	3c1c0fbf 	lui	gp,0xfbf
  43522c:	279c8908 	addiu	gp,gp,-30456
  435230:	0399e021 	addu	gp,gp,t9
  435234:	27bdffd8 	addiu	sp,sp,-40
  435238:	afbf0024 	sw	ra,36(sp)
  43523c:	afbc0020 	sw	gp,32(sp)
  435240:	afb0001c 	sw	s0,28(sp)
  435244:	8c8e0014 	lw	t6,20(a0)
  435248:	00808025 	move	s0,a0
  43524c:	8dcf0018 	lw	t7,24(t6)
  435250:	00000000 	nop
  435254:	11e00039 	beqz	t7,43533c <draw__13ByteCodedIconFv+0x114>
  435258:	8fbf0024 	lw	ra,36(sp)
  43525c:	92180003 	lbu	t8,3(s0)
  435260:	92050000 	lbu	a1,0(s0)
  435264:	92060001 	lbu	a2,1(s0)
  435268:	92070002 	lbu	a3,2(s0)
  43526c:	afb80010 	sw	t8,16(sp)
  435270:	92190004 	lbu	t9,4(s0)
  435274:	8f8489ec 	lw	a0,-30228(gp)
  435278:	afb90014 	sw	t9,20(sp)
  43527c:	8f9988a4 	lw	t9,-30556(gp)
  435280:	00000000 	nop
  435284:	0320f809 	jalr	t9
  435288:	00000000 	nop
  43528c:	8fbc0020 	lw	gp,32(sp)
  435290:	8e050008 	lw	a1,8(s0)
  435294:	8f9988a8 	lw	t9,-30552(gp)
  435298:	8e06000c 	lw	a2,12(s0)
  43529c:	8e070010 	lw	a3,16(s0)
  4352a0:	8f8489ec 	lw	a0,-30228(gp)
  4352a4:	0320f809 	jalr	t9
  4352a8:	00000000 	nop
  4352ac:	8fbc0020 	lw	gp,32(sp)
  4352b0:	00000000 	nop
  4352b4:	8f9984b8 	lw	t9,-31560(gp)
  4352b8:	00000000 	nop
  4352bc:	0320f809 	jalr	t9
  4352c0:	00000000 	nop
  4352c4:	8fbc0020 	lw	gp,32(sp)
  4352c8:	26040020 	addiu	a0,s0,32
  4352cc:	8f9984d0 	lw	t9,-31536(gp)
  4352d0:	00000000 	nop
  4352d4:	0320f809 	jalr	t9
  4352d8:	00000000 	nop
  4352dc:	8fbc0020 	lw	gp,32(sp)
  4352e0:	24040001 	li	a0,1
  4352e4:	8f9981f4 	lw	t9,-32268(gp)
  4352e8:	00000000 	nop
  4352ec:	0320f809 	jalr	t9
  4352f0:	00000000 	nop
  4352f4:	8fbc0020 	lw	gp,32(sp)
  4352f8:	8e080014 	lw	t0,20(s0)
  4352fc:	8f9988ac 	lw	t9,-30548(gp)
  435300:	8e060018 	lw	a2,24(s0)
  435304:	8e07001c 	lw	a3,28(s0)
  435308:	8f8489ec 	lw	a0,-30228(gp)
  43530c:	8d050018 	lw	a1,24(t0)
  435310:	0320f809 	jalr	t9
  435314:	00000000 	nop
  435318:	8fbc0020 	lw	gp,32(sp)
  43531c:	00000000 	nop
  435320:	8f9984d8 	lw	t9,-31528(gp)
  435324:	00000000 	nop
  435328:	0320f809 	jalr	t9
  43532c:	00000000 	nop
  435330:	8fbc0020 	lw	gp,32(sp)
  435334:	00000000 	nop
  435338:	8fbf0024 	lw	ra,36(sp)
  43533c:	8fb0001c 	lw	s0,28(sp)
  435340:	03e00008 	jr	ra
  435344:	27bd0028 	addiu	sp,sp,40
