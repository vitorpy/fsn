# Function: SG_getVisualArgs
# Address: 0x004324ec - 0x004325fc
# Size: 0x110 (272 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004324ec <SG_getVisualArgs>:
  4324ec:	3c1c0fbf 	lui	gp,0xfbf
  4324f0:	279cb644 	addiu	gp,gp,-18876
  4324f4:	0399e021 	addu	gp,gp,t9
  4324f8:	27bdffd0 	addiu	sp,sp,-48
  4324fc:	8f998020 	lw	t9,-32736(gp)
  432500:	8fae0040 	lw	t6,64(sp)
  432504:	afbf0024 	sw	ra,36(sp)
  432508:	27392370 	addiu	t9,t9,9072
  43250c:	afbc0020 	sw	gp,32(sp)
  432510:	afa40030 	sw	a0,48(sp)
  432514:	afa50034 	sw	a1,52(sp)
  432518:	afa60038 	sw	a2,56(sp)
  43251c:	0320f809 	jalr	t9
  432520:	afae0010 	sw	t6,16(sp)
  432524:	8fbc0020 	lw	gp,32(sp)
  432528:	8fa40030 	lw	a0,48(sp)
  43252c:	8f9987f8 	lw	t9,-30728(gp)
  432530:	8fa50034 	lw	a1,52(sp)
  432534:	afa20028 	sw	v0,40(sp)
  432538:	0320f809 	jalr	t9
  43253c:	00403025 	move	a2,v0
  432540:	8fa30048 	lw	v1,72(sp)
  432544:	8fbc0020 	lw	gp,32(sp)
  432548:	8c780000 	lw	t8,0(v1)
  43254c:	8fa40044 	lw	a0,68(sp)
  432550:	8f8f80a4 	lw	t7,-32604(gp)
  432554:	0018c8c0 	sll	t9,t8,0x3
  432558:	8fa50038 	lw	a1,56(sp)
  43255c:	00994021 	addu	t0,a0,t9
  432560:	25ef009a 	addiu	t7,t7,154
  432564:	ad0f0000 	sw	t7,0(t0)
  432568:	8c690000 	lw	t1,0(v1)
  43256c:	8f8e80a4 	lw	t6,-32604(gp)
  432570:	000950c0 	sll	t2,t1,0x3
  432574:	008a5821 	addu	t3,a0,t2
  432578:	ad620004 	sw	v0,4(t3)
  43257c:	8c6c0000 	lw	t4,0(v1)
  432580:	25ce00a3 	addiu	t6,t6,163
  432584:	258d0001 	addiu	t5,t4,1
  432588:	000dc8c0 	sll	t9,t5,0x3
  43258c:	ac6d0000 	sw	t5,0(v1)
  432590:	00997821 	addu	t7,a0,t9
  432594:	adee0000 	sw	t6,0(t7)
  432598:	8c680000 	lw	t0,0(v1)
  43259c:	8f8d8080 	lw	t5,-32640(gp)
  4325a0:	000848c0 	sll	t1,t0,0x3
  4325a4:	00895021 	addu	t2,a0,t1
  4325a8:	ad450004 	sw	a1,4(t2)
  4325ac:	8c6b0000 	lw	t3,0(v1)
  4325b0:	25ad0068 	addiu	t5,t5,104
  4325b4:	256c0001 	addiu	t4,t3,1
  4325b8:	000cc8c0 	sll	t9,t4,0x3
  4325bc:	ac6c0000 	sw	t4,0(v1)
  4325c0:	00997021 	addu	t6,a0,t9
  4325c4:	adcd0000 	sw	t5,0(t6)
  4325c8:	8c680000 	lw	t0,0(v1)
  4325cc:	8faf0028 	lw	t7,40(sp)
  4325d0:	000848c0 	sll	t1,t0,0x3
  4325d4:	00895021 	addu	t2,a0,t1
  4325d8:	ad4f0004 	sw	t7,4(t2)
  4325dc:	8c6b0000 	lw	t3,0(v1)
  4325e0:	00a01025 	move	v0,a1
  4325e4:	256c0001 	addiu	t4,t3,1
  4325e8:	ac6c0000 	sw	t4,0(v1)
  4325ec:	8fbf0024 	lw	ra,36(sp)
  4325f0:	27bd0030 	addiu	sp,sp,48
  4325f4:	03e00008 	jr	ra
  4325f8:	00000000 	nop
