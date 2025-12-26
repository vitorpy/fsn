# Function: FUN_00430358
# Address: 0x00430358 - 0x00430448
# Size: 0xf0 (240 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00430358 <usystem+0x5c0>:
  430358:	3c1c0fbf 	lui	gp,0xfbf
  43035c:	279cd7d8 	addiu	gp,gp,-10280
  430360:	0399e021 	addu	gp,gp,t9
  430364:	8f8189d8 	lw	at,-30248(gp)
  430368:	8f858a60 	lw	a1,-30112(gp)
  43036c:	ac200000 	sw	zero,0(at)
  430370:	8f8189dc 	lw	at,-30244(gp)
  430374:	00000000 	nop
  430378:	ac200000 	sw	zero,0(at)
  43037c:	8f818a64 	lw	at,-30108(gp)
  430380:	00000000 	nop
  430384:	ac200000 	sw	zero,0(at)
  430388:	8ca20000 	lw	v0,0(a1)
  43038c:	00000000 	nop
  430390:	1040002b 	beqz	v0,430440 <usystem+0x6a8>
  430394:	00000000 	nop
  430398:	8c430070 	lw	v1,112(v0)
  43039c:	00000000 	nop
  4303a0:	10600013 	beqz	v1,4303f0 <usystem+0x658>
  4303a4:	00000000 	nop
  4303a8:	906e0028 	lbu	t6,40(v1)
  4303ac:	00000000 	nop
  4303b0:	31cffff7 	andi	t7,t6,0xfff7
  4303b4:	a06f0028 	sb	t7,40(v1)
  4303b8:	8ca20000 	lw	v0,0(a1)
  4303bc:	00000000 	nop
  4303c0:	8c430070 	lw	v1,112(v0)
  4303c4:	00000000 	nop
  4303c8:	8c780024 	lw	t8,36(v1)
  4303cc:	00000000 	nop
  4303d0:	ac580070 	sw	t8,112(v0)
  4303d4:	ac600024 	sw	zero,36(v1)
  4303d8:	8ca20000 	lw	v0,0(a1)
  4303dc:	00000000 	nop
  4303e0:	8c430070 	lw	v1,112(v0)
  4303e4:	00000000 	nop
  4303e8:	1460ffef 	bnez	v1,4303a8 <usystem+0x610>
  4303ec:	00000000 	nop
  4303f0:	90590076 	lbu	t9,118(v0)
  4303f4:	00000000 	nop
  4303f8:	3328ff7f 	andi	t0,t9,0xff7f
  4303fc:	a0480076 	sb	t0,118(v0)
  430400:	8ca20000 	lw	v0,0(a1)
  430404:	00000000 	nop
  430408:	90490075 	lbu	t1,117(v0)
  43040c:	00000000 	nop
  430410:	312afffe 	andi	t2,t1,0xfffe
  430414:	a04a0075 	sb	t2,117(v0)
  430418:	8ca20000 	lw	v0,0(a1)
  43041c:	00000000 	nop
  430420:	8c4b006c 	lw	t3,108(v0)
  430424:	00000000 	nop
  430428:	acab0000 	sw	t3,0(a1)
  43042c:	ac40006c 	sw	zero,108(v0)
  430430:	8ca20000 	lw	v0,0(a1)
  430434:	00000000 	nop
  430438:	1440ffd7 	bnez	v0,430398 <usystem+0x600>
  43043c:	00000000 	nop
  430440:	03e00008 	jr	ra
  430444:	00000000 	nop
