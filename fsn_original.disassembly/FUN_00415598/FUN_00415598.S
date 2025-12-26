# Function: FUN_00415598
# Address: 0x00415598 - 0x004156fc
# Size: 0x164 (356 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00415598 <scanDatabase+0xc>:
  415598:	27bdfbd0 	addiu	sp,sp,-1072
  41559c:	afbf001c 	sw	ra,28(sp)
  4155a0:	afbc0018 	sw	gp,24(sp)
  4155a4:	afa40430 	sw	a0,1072(sp)
  4155a8:	a3a00030 	sb	zero,48(sp)
  4155ac:	8c850028 	lw	a1,40(a0)
  4155b0:	00000000 	nop
  4155b4:	10a00007 	beqz	a1,4155d4 <scanDatabase+0x48>
  4155b8:	00000000 	nop
  4155bc:	8f99857c 	lw	t9,-31364(gp)
  4155c0:	27a40030 	addiu	a0,sp,48
  4155c4:	0320f809 	jalr	t9
  4155c8:	00000000 	nop
  4155cc:	8fbc0018 	lw	gp,24(sp)
  4155d0:	00000000 	nop
  4155d4:	8f9983e0 	lw	t9,-31776(gp)
  4155d8:	27a40030 	addiu	a0,sp,48
  4155dc:	0320f809 	jalr	t9
  4155e0:	00000000 	nop
  4155e4:	8fbc0018 	lw	gp,24(sp)
  4155e8:	8fa40430 	lw	a0,1072(sp)
  4155ec:	8f998018 	lw	t9,-32744(gp)
  4155f0:	27a50030 	addiu	a1,sp,48
  4155f4:	273938e8 	addiu	t9,t9,14568
  4155f8:	00453021 	addu	a2,v0,a1
  4155fc:	0320f809 	jalr	t9
  415600:	24070001 	li	a3,1
  415604:	8fbc0018 	lw	gp,24(sp)
  415608:	10400021 	beqz	v0,415690 <scanDatabase+0x104>
  41560c:	00000000 	nop
  415610:	8f84805c 	lw	a0,-32676(gp)
  415614:	8f998568 	lw	t9,-31384(gp)
  415618:	00002825 	move	a1,zero
  41561c:	0320f809 	jalr	t9
  415620:	2484a7fc 	addiu	a0,a0,-22532
  415624:	8fbc0018 	lw	gp,24(sp)
  415628:	afa2002c 	sw	v0,44(sp)
  41562c:	8f998578 	lw	t9,-31368(gp)
  415630:	00000000 	nop
  415634:	0320f809 	jalr	t9
  415638:	00000000 	nop
  41563c:	8fbc0018 	lw	gp,24(sp)
  415640:	8fa40430 	lw	a0,1072(sp)
  415644:	8f998018 	lw	t9,-32744(gp)
  415648:	00000000 	nop
  41564c:	273944ec 	addiu	t9,t9,17644
  415650:	0320f809 	jalr	t9
  415654:	00000000 	nop
  415658:	8fbc0018 	lw	gp,24(sp)
  41565c:	8fa4002c 	lw	a0,44(sp)
  415660:	8f998564 	lw	t9,-31388(gp)
  415664:	00000000 	nop
  415668:	0320f809 	jalr	t9
  41566c:	00000000 	nop
  415670:	8fbc0018 	lw	gp,24(sp)
  415674:	00000000 	nop
  415678:	8f998588 	lw	t9,-31352(gp)
  41567c:	00000000 	nop
  415680:	0320f809 	jalr	t9
  415684:	00000000 	nop
  415688:	8fbc0018 	lw	gp,24(sp)
  41568c:	00000000 	nop
  415690:	8f998648 	lw	t9,-31160(gp)
  415694:	00000000 	nop
  415698:	0320f809 	jalr	t9
  41569c:	00000000 	nop
  4156a0:	8fbc0018 	lw	gp,24(sp)
  4156a4:	00000000 	nop
  4156a8:	8f998534 	lw	t9,-31436(gp)
  4156ac:	00000000 	nop
  4156b0:	0320f809 	jalr	t9
  4156b4:	00000000 	nop
  4156b8:	8fbc0018 	lw	gp,24(sp)
  4156bc:	00000000 	nop
  4156c0:	8f998780 	lw	t9,-30848(gp)
  4156c4:	00000000 	nop
  4156c8:	0320f809 	jalr	t9
  4156cc:	00000000 	nop
  4156d0:	8fbc0018 	lw	gp,24(sp)
  4156d4:	00000000 	nop
  4156d8:	8f998018 	lw	t9,-32744(gp)
  4156dc:	00000000 	nop
  4156e0:	27394da4 	addiu	t9,t9,19876
  4156e4:	0320f809 	jalr	t9
  4156e8:	00000000 	nop
  4156ec:	8fbf001c 	lw	ra,28(sp)
  4156f0:	8fbc0018 	lw	gp,24(sp)
  4156f4:	03e00008 	jr	ra
  4156f8:	27bd0430 	addiu	sp,sp,1072
