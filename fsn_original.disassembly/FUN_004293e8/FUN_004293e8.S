# Function: FUN_004293e8
# Address: 0x004293e8 - 0x00429464
# Size: 0x7c (124 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004293e8 <beamdown+0x98>:
  4293e8:	3c1c0fbf 	lui	gp,0xfbf
  4293ec:	279c4748 	addiu	gp,gp,18248
  4293f0:	0399e021 	addu	gp,gp,t9
  4293f4:	8f998170 	lw	t9,-32400(gp)
  4293f8:	27bdffd0 	addiu	sp,sp,-48
  4293fc:	afbf001c 	sw	ra,28(sp)
  429400:	0320f809 	jalr	t9
  429404:	afbc0018 	sw	gp,24(sp)
  429408:	8fbc0018 	lw	gp,24(sp)
  42940c:	afa2002c 	sw	v0,44(sp)
  429410:	8f8e80a0 	lw	t6,-32608(gp)
  429414:	8f8f8984 	lw	t7,-30332(gp)
  429418:	25ce1d4d 	addiu	t6,t6,7501
  42941c:	8def0000 	lw	t7,0(t7)
  429420:	8f998340 	lw	t9,-31936(gp)
  429424:	afae0024 	sw	t6,36(sp)
  429428:	afa20028 	sw	v0,40(sp)
  42942c:	8de4002c 	lw	a0,44(t7)
  429430:	27a50024 	addiu	a1,sp,36
  429434:	0320f809 	jalr	t9
  429438:	24060001 	li	a2,1
  42943c:	8fbc0018 	lw	gp,24(sp)
  429440:	8fa4002c 	lw	a0,44(sp)
  429444:	8f998178 	lw	t9,-32392(gp)
  429448:	00000000 	nop
  42944c:	0320f809 	jalr	t9
  429450:	00000000 	nop
  429454:	8fbf001c 	lw	ra,28(sp)
  429458:	8fbc0018 	lw	gp,24(sp)
  42945c:	03e00008 	jr	ra
  429460:	27bd0030 	addiu	sp,sp,48
