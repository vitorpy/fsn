# Function: FUN_0043b318
# Address: 0x0043b318 - 0x0043b3ac
# Size: 0x94 (148 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043b318 <WriteToServer__6ClientFiPcT1+0xc>:
  43b318:	27bdffd8 	addiu	sp,sp,-40
  43b31c:	8f998910 	lw	t9,-30448(gp)
  43b320:	afbf001c 	sw	ra,28(sp)
  43b324:	afa40028 	sw	a0,40(sp)
  43b328:	afa5002c 	sw	a1,44(sp)
  43b32c:	afbc0018 	sw	gp,24(sp)
  43b330:	afa60030 	sw	a2,48(sp)
  43b334:	afa70034 	sw	a3,52(sp)
  43b338:	27a50034 	addiu	a1,sp,52
  43b33c:	0320f809 	jalr	t9
  43b340:	27a40024 	addiu	a0,sp,36
  43b344:	8fbc0018 	lw	gp,24(sp)
  43b348:	8fa4002c 	lw	a0,44(sp)
  43b34c:	8f998200 	lw	t9,-32256(gp)
  43b350:	27a50024 	addiu	a1,sp,36
  43b354:	0320f809 	jalr	t9
  43b358:	24060004 	li	a2,4
  43b35c:	8fbc0018 	lw	gp,24(sp)
  43b360:	24010004 	li	at,4
  43b364:	1441000a 	bne	v0,at,43b390 <WriteToServer__6ClientFiPcT1+0x84>
  43b368:	00000000 	nop
  43b36c:	8f998200 	lw	t9,-32256(gp)
  43b370:	8fa4002c 	lw	a0,44(sp)
  43b374:	8fa50030 	lw	a1,48(sp)
  43b378:	8fa60034 	lw	a2,52(sp)
  43b37c:	0320f809 	jalr	t9
  43b380:	00000000 	nop
  43b384:	8fbc0018 	lw	gp,24(sp)
  43b388:	10000003 	b	43b398 <WriteToServer__6ClientFiPcT1+0x8c>
  43b38c:	00401825 	move	v1,v0
  43b390:	10000002 	b	43b39c <WriteToServer__6ClientFiPcT1+0x90>
  43b394:	2402ffff 	li	v0,-1
  43b398:	00601025 	move	v0,v1
  43b39c:	8fbf001c 	lw	ra,28(sp)
  43b3a0:	27bd0028 	addiu	sp,sp,40
  43b3a4:	03e00008 	jr	ra
  43b3a8:	00000000 	nop
