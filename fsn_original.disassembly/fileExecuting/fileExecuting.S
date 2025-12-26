# Function: fileExecuting
# Address: 0x00418534 - 0x004185cc
# Size: 0x98 (152 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00418534 <fileExecuting>:
  418534:	3c1c0fc0 	lui	gp,0xfc0
  418538:	279c55fc 	addiu	gp,gp,22012
  41853c:	0399e021 	addu	gp,gp,t9
  418540:	8f9985a4 	lw	t9,-31324(gp)
  418544:	27bdffd0 	addiu	sp,sp,-48
  418548:	afbf0024 	sw	ra,36(sp)
  41854c:	afbc0020 	sw	gp,32(sp)
  418550:	0320f809 	jalr	t9
  418554:	afa40030 	sw	a0,48(sp)
  418558:	8fbc0020 	lw	gp,32(sp)
  41855c:	10400018 	beqz	v0,4185c0 <fileExecuting+0x8c>
  418560:	8fbf0024 	lw	ra,36(sp)
  418564:	8c4e0020 	lw	t6,32(v0)
  418568:	24050001 	li	a1,1
  41856c:	11c00013 	beqz	t6,4185bc <fileExecuting+0x88>
  418570:	00003025 	move	a2,zero
  418574:	8c440020 	lw	a0,32(v0)
  418578:	8f998834 	lw	t9,-30668(gp)
  41857c:	afa2002c 	sw	v0,44(sp)
  418580:	afa00014 	sw	zero,20(sp)
  418584:	afa00010 	sw	zero,16(sp)
  418588:	0320f809 	jalr	t9
  41858c:	00003825 	move	a3,zero
  418590:	8fa3002c 	lw	v1,44(sp)
  418594:	8fa40030 	lw	a0,48(sp)
  418598:	906f0029 	lbu	t7,41(v1)
  41859c:	8fbc0020 	lw	gp,32(sp)
  4185a0:	31f8fff7 	andi	t8,t7,0xfff7
  4185a4:	37190008 	ori	t9,t8,0x8
  4185a8:	a0790029 	sb	t9,41(v1)
  4185ac:	90890075 	lbu	t1,117(a0)
  4185b0:	00000000 	nop
  4185b4:	352a0002 	ori	t2,t1,0x2
  4185b8:	a08a0075 	sb	t2,117(a0)
  4185bc:	8fbf0024 	lw	ra,36(sp)
  4185c0:	27bd0030 	addiu	sp,sp,48
  4185c4:	03e00008 	jr	ra
  4185c8:	00000000 	nop
