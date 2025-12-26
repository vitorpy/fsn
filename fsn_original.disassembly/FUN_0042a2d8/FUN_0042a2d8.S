# Function: FUN_0042a2d8
# Address: 0x0042a2d8 - 0x0042a440
# Size: 0x168 (360 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a2d8 <viewFile+0x310>:
  42a2d8:	3c1c0fbf 	lui	gp,0xfbf
  42a2dc:	279c3858 	addiu	gp,gp,14424
  42a2e0:	0399e021 	addu	gp,gp,t9
  42a2e4:	27bdffd0 	addiu	sp,sp,-48
  42a2e8:	8f998778 	lw	t9,-30856(gp)
  42a2ec:	afa40030 	sw	a0,48(sp)
  42a2f0:	afbf001c 	sw	ra,28(sp)
  42a2f4:	afa50034 	sw	a1,52(sp)
  42a2f8:	00a02025 	move	a0,a1
  42a2fc:	afbc0018 	sw	gp,24(sp)
  42a300:	afa60038 	sw	a2,56(sp)
  42a304:	0320f809 	jalr	t9
  42a308:	00002825 	move	a1,zero
  42a30c:	8fbc0018 	lw	gp,24(sp)
  42a310:	00000000 	nop
  42a314:	8f8e8984 	lw	t6,-30332(gp)
  42a318:	8f9980c4 	lw	t9,-32572(gp)
  42a31c:	8dce0000 	lw	t6,0(t6)
  42a320:	00000000 	nop
  42a324:	8dc40014 	lw	a0,20(t6)
  42a328:	0320f809 	jalr	t9
  42a32c:	00000000 	nop
  42a330:	8fbc0018 	lw	gp,24(sp)
  42a334:	afa20028 	sw	v0,40(sp)
  42a338:	8f9983e0 	lw	t9,-31776(gp)
  42a33c:	00402025 	move	a0,v0
  42a340:	0320f809 	jalr	t9
  42a344:	00000000 	nop
  42a348:	8fbc0018 	lw	gp,24(sp)
  42a34c:	afa20020 	sw	v0,32(sp)
  42a350:	8f84897c 	lw	a0,-30340(gp)
  42a354:	8f9981cc 	lw	t9,-32308(gp)
  42a358:	8c840000 	lw	a0,0(a0)
  42a35c:	24050301 	li	a1,769
  42a360:	240601b6 	li	a2,438
  42a364:	0320f809 	jalr	t9
  42a368:	2484084c 	addiu	a0,a0,2124
  42a36c:	8fbc0018 	lw	gp,24(sp)
  42a370:	0441000b 	bgez	v0,42a3a0 <viewFile+0x3d8>
  42a374:	00403825 	move	a3,v0
  42a378:	8f85897c 	lw	a1,-30340(gp)
  42a37c:	8f84805c 	lw	a0,-32676(gp)
  42a380:	8f998574 	lw	t9,-31372(gp)
  42a384:	8ca50000 	lw	a1,0(a1)
  42a388:	2484e974 	addiu	a0,a0,-5772
  42a38c:	0320f809 	jalr	t9
  42a390:	24a5084c 	addiu	a1,a1,2124
  42a394:	8fbc0018 	lw	gp,24(sp)
  42a398:	10000021 	b	42a420 <viewFile+0x458>
  42a39c:	00000000 	nop
  42a3a0:	8f998200 	lw	t9,-32256(gp)
  42a3a4:	8fa50028 	lw	a1,40(sp)
  42a3a8:	8fa60020 	lw	a2,32(sp)
  42a3ac:	00e02025 	move	a0,a3
  42a3b0:	0320f809 	jalr	t9
  42a3b4:	afa70024 	sw	a3,36(sp)
  42a3b8:	8faf0020 	lw	t7,32(sp)
  42a3bc:	8fbc0018 	lw	gp,24(sp)
  42a3c0:	8fa70024 	lw	a3,36(sp)
  42a3c4:	104f0010 	beq	v0,t7,42a408 <viewFile+0x440>
  42a3c8:	00000000 	nop
  42a3cc:	8f84805c 	lw	a0,-32676(gp)
  42a3d0:	8f998574 	lw	t9,-31372(gp)
  42a3d4:	8fa5002c 	lw	a1,44(sp)
  42a3d8:	afa70024 	sw	a3,36(sp)
  42a3dc:	0320f809 	jalr	t9
  42a3e0:	2484e980 	addiu	a0,a0,-5760
  42a3e4:	8fbc0018 	lw	gp,24(sp)
  42a3e8:	8fa40024 	lw	a0,36(sp)
  42a3ec:	8f99825c 	lw	t9,-32164(gp)
  42a3f0:	00000000 	nop
  42a3f4:	0320f809 	jalr	t9
  42a3f8:	00000000 	nop
  42a3fc:	8fbc0018 	lw	gp,24(sp)
  42a400:	10000007 	b	42a420 <viewFile+0x458>
  42a404:	00000000 	nop
  42a408:	8f99825c 	lw	t9,-32164(gp)
  42a40c:	00e02025 	move	a0,a3
  42a410:	0320f809 	jalr	t9
  42a414:	00000000 	nop
  42a418:	8fbc0018 	lw	gp,24(sp)
  42a41c:	00000000 	nop
  42a420:	8f998174 	lw	t9,-32396(gp)
  42a424:	8fa40028 	lw	a0,40(sp)
  42a428:	0320f809 	jalr	t9
  42a42c:	00000000 	nop
  42a430:	8fbf001c 	lw	ra,28(sp)
  42a434:	8fbc0018 	lw	gp,24(sp)
  42a438:	03e00008 	jr	ra
  42a43c:	27bd0030 	addiu	sp,sp,48
