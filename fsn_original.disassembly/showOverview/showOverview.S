# Function: showOverview
# Address: 0x00420318 - 0x004203fc
# Size: 0xe4 (228 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420318 <showOverview>:
  420318:	3c1c0fc0 	lui	gp,0xfc0
  42031c:	279cd818 	addiu	gp,gp,-10216
  420320:	0399e021 	addu	gp,gp,t9
  420324:	8f848068 	lw	a0,-32664(gp)
  420328:	27bdffd8 	addiu	sp,sp,-40
  42032c:	8c846eb4 	lw	a0,28340(a0)
  420330:	afbf001c 	sw	ra,28(sp)
  420334:	14800008 	bnez	a0,420358 <showOverview+0x40>
  420338:	afbc0018 	sw	gp,24(sp)
  42033c:	8f998668 	lw	t9,-31128(gp)
  420340:	00000000 	nop
  420344:	0320f809 	jalr	t9
  420348:	00000000 	nop
  42034c:	8fbc0018 	lw	gp,24(sp)
  420350:	10000024 	b	4203e4 <showOverview+0xcc>
  420354:	00000000 	nop
  420358:	8f998388 	lw	t9,-31864(gp)
  42035c:	00000000 	nop
  420360:	0320f809 	jalr	t9
  420364:	00000000 	nop
  420368:	8fbc0018 	lw	gp,24(sp)
  42036c:	00000000 	nop
  420370:	8f848068 	lw	a0,-32664(gp)
  420374:	8f9983fc 	lw	t9,-31748(gp)
  420378:	8c846eb4 	lw	a0,28340(a0)
  42037c:	0320f809 	jalr	t9
  420380:	00000000 	nop
  420384:	8fbc0018 	lw	gp,24(sp)
  420388:	afa20020 	sw	v0,32(sp)
  42038c:	8f848068 	lw	a0,-32664(gp)
  420390:	8f998368 	lw	t9,-31896(gp)
  420394:	8c846eb4 	lw	a0,28340(a0)
  420398:	0320f809 	jalr	t9
  42039c:	00000000 	nop
  4203a0:	8fbc0018 	lw	gp,24(sp)
  4203a4:	8fa40020 	lw	a0,32(sp)
  4203a8:	8f998144 	lw	t9,-32444(gp)
  4203ac:	00402825 	move	a1,v0
  4203b0:	0320f809 	jalr	t9
  4203b4:	00000000 	nop
  4203b8:	8fbc0018 	lw	gp,24(sp)
  4203bc:	00000000 	nop
  4203c0:	8f848a04 	lw	a0,-30204(gp)
  4203c4:	8f85806c 	lw	a1,-32660(gp)
  4203c8:	8f99817c 	lw	t9,-32388(gp)
  4203cc:	8c840000 	lw	a0,0(a0)
  4203d0:	8ca56c08 	lw	a1,27656(a1)
  4203d4:	0320f809 	jalr	t9
  4203d8:	00000000 	nop
  4203dc:	8fbc0018 	lw	gp,24(sp)
  4203e0:	00000000 	nop
  4203e4:	8f81893c 	lw	at,-30404(gp)
  4203e8:	8fbf001c 	lw	ra,28(sp)
  4203ec:	240e0001 	li	t6,1
  4203f0:	27bd0028 	addiu	sp,sp,40
  4203f4:	03e00008 	jr	ra
  4203f8:	a02e0000 	sb	t6,0(at)
