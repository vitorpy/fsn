# Function: FUN_0040d2cc
# Address: 0x0040d2cc - 0x0040d3cc
# Size: 0x100 (256 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040d2cc <reset_eye+0x1f4>:
  40d2cc:	3c1c0fc1 	lui	gp,0xfc1
  40d2d0:	279c0864 	addiu	gp,gp,2148
  40d2d4:	0399e021 	addu	gp,gp,t9
  40d2d8:	27bdffc0 	addiu	sp,sp,-64
  40d2dc:	8f99854c 	lw	t9,-31412(gp)
  40d2e0:	afbf003c 	sw	ra,60(sp)
  40d2e4:	afbc0038 	sw	gp,56(sp)
  40d2e8:	afa40040 	sw	a0,64(sp)
  40d2ec:	afa50044 	sw	a1,68(sp)
  40d2f0:	0320f809 	jalr	t9
  40d2f4:	afa60048 	sw	a2,72(sp)
  40d2f8:	8fbc0038 	lw	gp,56(sp)
  40d2fc:	00000000 	nop
  40d300:	8f8e897c 	lw	t6,-30340(gp)
  40d304:	00000000 	nop
  40d308:	8dce0000 	lw	t6,0(t6)
  40d30c:	00000000 	nop
  40d310:	8dc3003c 	lw	v1,60(t6)
  40d314:	00000000 	nop
  40d318:	10600015 	beqz	v1,40d370 <reset_eye+0x298>
  40d31c:	00000000 	nop
  40d320:	8f828a24 	lw	v0,-30172(gp)
  40d324:	8f998558 	lw	t9,-31400(gp)
  40d328:	c4480034 	lwc1	$f8,52(v0)
  40d32c:	c444002c 	lwc1	$f4,44(v0)
  40d330:	c4460030 	lwc1	$f6,48(v0)
  40d334:	8c4f0038 	lw	t7,56(v0)
  40d338:	460042a1 	cvt.d.s	$f10,$f8
  40d33c:	e7aa0014 	swc1	$f10,20(sp)
  40d340:	e7ab0010 	swc1	$f11,16(sp)
  40d344:	afa00018 	sw	zero,24(sp)
  40d348:	afa30020 	sw	v1,32(sp)
  40d34c:	afa00024 	sw	zero,36(sp)
  40d350:	afa00028 	sw	zero,40(sp)
  40d354:	46002321 	cvt.d.s	$f12,$f4
  40d358:	460033a1 	cvt.d.s	$f14,$f6
  40d35c:	0320f809 	jalr	t9
  40d360:	afaf001c 	sw	t7,28(sp)
  40d364:	8fbc0038 	lw	gp,56(sp)
  40d368:	10000015 	b	40d3c0 <reset_eye+0x2e8>
  40d36c:	8fbf003c 	lw	ra,60(sp)
  40d370:	8f828a24 	lw	v0,-30172(gp)
  40d374:	8f998558 	lw	t9,-31400(gp)
  40d378:	c4440020 	lwc1	$f4,32(v0)
  40d37c:	c4500018 	lwc1	$f16,24(v0)
  40d380:	c452001c 	lwc1	$f18,28(v0)
  40d384:	8c580028 	lw	t8,40(v0)
  40d388:	460021a1 	cvt.d.s	$f6,$f4
  40d38c:	e7a60014 	swc1	$f6,20(sp)
  40d390:	e7a70010 	swc1	$f7,16(sp)
  40d394:	afa00018 	sw	zero,24(sp)
  40d398:	afa30020 	sw	v1,32(sp)
  40d39c:	afa00024 	sw	zero,36(sp)
  40d3a0:	afa00028 	sw	zero,40(sp)
  40d3a4:	46008321 	cvt.d.s	$f12,$f16
  40d3a8:	460093a1 	cvt.d.s	$f14,$f18
  40d3ac:	0320f809 	jalr	t9
  40d3b0:	afb8001c 	sw	t8,28(sp)
  40d3b4:	8fbc0038 	lw	gp,56(sp)
  40d3b8:	00000000 	nop
  40d3bc:	8fbf003c 	lw	ra,60(sp)
  40d3c0:	27bd0040 	addiu	sp,sp,64
  40d3c4:	03e00008 	jr	ra
  40d3c8:	00000000 	nop
