# Function: locateClearAction
# Address: 0x00429578 - 0x00429634
# Size: 0xbc (188 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429578 <locateClearAction>:
  429578:	3c1c0fbf 	lui	gp,0xfbf
  42957c:	279c45b8 	addiu	gp,gp,17848
  429580:	0399e021 	addu	gp,gp,t9
  429584:	27bdffe0 	addiu	sp,sp,-32
  429588:	afbf001c 	sw	ra,28(sp)
  42958c:	afbc0018 	sw	gp,24(sp)
  429590:	afa40020 	sw	a0,32(sp)
  429594:	afa60028 	sw	a2,40(sp)
  429598:	afa7002c 	sw	a3,44(sp)
  42959c:	8cae0030 	lw	t6,48(a1)
  4295a0:	00000000 	nop
  4295a4:	15c00020 	bnez	t6,429628 <locateClearAction+0xb0>
  4295a8:	8fbf001c 	lw	ra,28(sp)
  4295ac:	8f998770 	lw	t9,-30864(gp)
  4295b0:	00000000 	nop
  4295b4:	0320f809 	jalr	t9
  4295b8:	00000000 	nop
  4295bc:	8fbc0018 	lw	gp,24(sp)
  4295c0:	8fa40020 	lw	a0,32(sp)
  4295c4:	8f998778 	lw	t9,-30856(gp)
  4295c8:	24050001 	li	a1,1
  4295cc:	0320f809 	jalr	t9
  4295d0:	00000000 	nop
  4295d4:	8fbc0018 	lw	gp,24(sp)
  4295d8:	00000000 	nop
  4295dc:	8f998744 	lw	t9,-30908(gp)
  4295e0:	00000000 	nop
  4295e4:	0320f809 	jalr	t9
  4295e8:	00000000 	nop
  4295ec:	8fbc0018 	lw	gp,24(sp)
  4295f0:	00000000 	nop
  4295f4:	8f998774 	lw	t9,-30860(gp)
  4295f8:	00000000 	nop
  4295fc:	0320f809 	jalr	t9
  429600:	00000000 	nop
  429604:	8fbc0018 	lw	gp,24(sp)
  429608:	00000000 	nop
  42960c:	8f998330 	lw	t9,-31952(gp)
  429610:	00000000 	nop
  429614:	0320f809 	jalr	t9
  429618:	00000000 	nop
  42961c:	8fbc0018 	lw	gp,24(sp)
  429620:	00000000 	nop
  429624:	8fbf001c 	lw	ra,28(sp)
  429628:	27bd0020 	addiu	sp,sp,32
  42962c:	03e00008 	jr	ra
  429630:	00000000 	nop
