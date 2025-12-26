# Function: pruneTree
# Address: 0x004187e8 - 0x00418890
# Size: 0xa8 (168 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004187e8 <pruneTree>:
  4187e8:	3c1c0fc0 	lui	gp,0xfc0
  4187ec:	279c5348 	addiu	gp,gp,21320
  4187f0:	0399e021 	addu	gp,gp,t9
  4187f4:	27bdffe0 	addiu	sp,sp,-32
  4187f8:	afbf001c 	sw	ra,28(sp)
  4187fc:	afbc0018 	sw	gp,24(sp)
  418800:	908f0075 	lbu	t7,117(a0)
  418804:	00000000 	nop
  418808:	35f80004 	ori	t8,t7,0x4
  41880c:	a0980075 	sb	t8,117(a0)
  418810:	8f9985e8 	lw	t9,-31256(gp)
  418814:	00000000 	nop
  418818:	0320f809 	jalr	t9
  41881c:	00000000 	nop
  418820:	8fbc0018 	lw	gp,24(sp)
  418824:	00000000 	nop
  418828:	8f998648 	lw	t9,-31160(gp)
  41882c:	00000000 	nop
  418830:	0320f809 	jalr	t9
  418834:	00000000 	nop
  418838:	8fbc0018 	lw	gp,24(sp)
  41883c:	00000000 	nop
  418840:	8f998588 	lw	t9,-31352(gp)
  418844:	00000000 	nop
  418848:	0320f809 	jalr	t9
  41884c:	00000000 	nop
  418850:	8fbc0018 	lw	gp,24(sp)
  418854:	00000000 	nop
  418858:	8f998534 	lw	t9,-31436(gp)
  41885c:	00000000 	nop
  418860:	0320f809 	jalr	t9
  418864:	00000000 	nop
  418868:	8fbc0018 	lw	gp,24(sp)
  41886c:	00000000 	nop
  418870:	8f998780 	lw	t9,-30848(gp)
  418874:	00000000 	nop
  418878:	0320f809 	jalr	t9
  41887c:	00000000 	nop
  418880:	8fbf001c 	lw	ra,28(sp)
  418884:	8fbc0018 	lw	gp,24(sp)
  418888:	03e00008 	jr	ra
  41888c:	27bd0020 	addiu	sp,sp,32
