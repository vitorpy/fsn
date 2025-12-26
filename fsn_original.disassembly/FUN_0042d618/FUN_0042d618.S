# Function: FUN_0042d618
# Address: 0x0042d618 - 0x0042d6f0
# Size: 0xd8 (216 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042d618 <hidePreferencePanel+0x9c4>:
  42d618:	3c1c0fbf 	lui	gp,0xfbf
  42d61c:	279c0518 	addiu	gp,gp,1304
  42d620:	0399e021 	addu	gp,gp,t9
  42d624:	8f8e806c 	lw	t6,-32660(gp)
  42d628:	27bdffc8 	addiu	sp,sp,-56
  42d62c:	8dce94ec 	lw	t6,-27412(t6)
  42d630:	afbf001c 	sw	ra,28(sp)
  42d634:	afbc0018 	sw	gp,24(sp)
  42d638:	8dcf0004 	lw	t7,4(t6)
  42d63c:	8f9880a4 	lw	t8,-32604(gp)
  42d640:	8de20000 	lw	v0,0(t7)
  42d644:	8f84806c 	lw	a0,-32660(gp)
  42d648:	305900ff 	andi	t9,v0,0xff
  42d64c:	afb90034 	sw	t9,52(sp)
  42d650:	8f998340 	lw	t9,-31936(gp)
  42d654:	2718035b 	addiu	t8,t8,859
  42d658:	8c846e30 	lw	a0,28208(a0)
  42d65c:	afb80030 	sw	t8,48(sp)
  42d660:	27a50030 	addiu	a1,sp,48
  42d664:	24060001 	li	a2,1
  42d668:	0320f809 	jalr	t9
  42d66c:	afa2002c 	sw	v0,44(sp)
  42d670:	8fbc0018 	lw	gp,24(sp)
  42d674:	8fa9002c 	lw	t1,44(sp)
  42d678:	8f8880a4 	lw	t0,-32604(gp)
  42d67c:	8f84806c 	lw	a0,-32660(gp)
  42d680:	8f998340 	lw	t9,-31936(gp)
  42d684:	00095203 	sra	t2,t1,0x8
  42d688:	314b00ff 	andi	t3,t2,0xff
  42d68c:	2508035b 	addiu	t0,t0,859
  42d690:	8c846e34 	lw	a0,28212(a0)
  42d694:	afa80030 	sw	t0,48(sp)
  42d698:	afab0034 	sw	t3,52(sp)
  42d69c:	27a50030 	addiu	a1,sp,48
  42d6a0:	0320f809 	jalr	t9
  42d6a4:	24060001 	li	a2,1
  42d6a8:	8fbc0018 	lw	gp,24(sp)
  42d6ac:	8fad002c 	lw	t5,44(sp)
  42d6b0:	8f8c80a4 	lw	t4,-32604(gp)
  42d6b4:	8f84806c 	lw	a0,-32660(gp)
  42d6b8:	8f998340 	lw	t9,-31936(gp)
  42d6bc:	000d7403 	sra	t6,t5,0x10
  42d6c0:	31cf00ff 	andi	t7,t6,0xff
  42d6c4:	258c035b 	addiu	t4,t4,859
  42d6c8:	8c846e38 	lw	a0,28216(a0)
  42d6cc:	afac0030 	sw	t4,48(sp)
  42d6d0:	afaf0034 	sw	t7,52(sp)
  42d6d4:	27a50030 	addiu	a1,sp,48
  42d6d8:	0320f809 	jalr	t9
  42d6dc:	24060001 	li	a2,1
  42d6e0:	8fbf001c 	lw	ra,28(sp)
  42d6e4:	8fbc0018 	lw	gp,24(sp)
  42d6e8:	03e00008 	jr	ra
  42d6ec:	27bd0038 	addiu	sp,sp,56
