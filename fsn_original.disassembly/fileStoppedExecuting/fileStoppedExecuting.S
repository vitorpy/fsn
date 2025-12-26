# Function: fileStoppedExecuting
# Address: 0x004185cc - 0x00418664
# Size: 0x98 (152 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004185cc <fileStoppedExecuting>:
  4185cc:	3c1c0fc0 	lui	gp,0xfc0
  4185d0:	279c5564 	addiu	gp,gp,21860
  4185d4:	0399e021 	addu	gp,gp,t9
  4185d8:	8f9985a4 	lw	t9,-31324(gp)
  4185dc:	27bdffd0 	addiu	sp,sp,-48
  4185e0:	afbf0024 	sw	ra,36(sp)
  4185e4:	afbc0020 	sw	gp,32(sp)
  4185e8:	0320f809 	jalr	t9
  4185ec:	afa40030 	sw	a0,48(sp)
  4185f0:	8fbc0020 	lw	gp,32(sp)
  4185f4:	10400012 	beqz	v0,418640 <fileStoppedExecuting+0x74>
  4185f8:	00000000 	nop
  4185fc:	8c4e0020 	lw	t6,32(v0)
  418600:	00002825 	move	a1,zero
  418604:	11c0000e 	beqz	t6,418640 <fileStoppedExecuting+0x74>
  418608:	00003025 	move	a2,zero
  41860c:	8c440020 	lw	a0,32(v0)
  418610:	8f998834 	lw	t9,-30668(gp)
  418614:	afa2002c 	sw	v0,44(sp)
  418618:	afa00014 	sw	zero,20(sp)
  41861c:	afa00010 	sw	zero,16(sp)
  418620:	0320f809 	jalr	t9
  418624:	00003825 	move	a3,zero
  418628:	8fa3002c 	lw	v1,44(sp)
  41862c:	8fbc0020 	lw	gp,32(sp)
  418630:	906f0029 	lbu	t7,41(v1)
  418634:	00000000 	nop
  418638:	31f8fff7 	andi	t8,t7,0xfff7
  41863c:	a0780029 	sb	t8,41(v1)
  418640:	8f99801c 	lw	t9,-32740(gp)
  418644:	8fa40030 	lw	a0,48(sp)
  418648:	273984c8 	addiu	t9,t9,-31544
  41864c:	0320f809 	jalr	t9
  418650:	00000000 	nop
  418654:	8fbf0024 	lw	ra,36(sp)
  418658:	8fbc0020 	lw	gp,32(sp)
  41865c:	03e00008 	jr	ra
  418660:	27bd0030 	addiu	sp,sp,48
