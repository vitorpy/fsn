# Function: FUN_004207b4
# Address: 0x004207b4 - 0x00420870
# Size: 0xbc (188 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004207b4 <drawOverview+0xc>:
  4207b4:	8f8e893c 	lw	t6,-30404(gp)
  4207b8:	27bdffe0 	addiu	sp,sp,-32
  4207bc:	91ce0000 	lbu	t6,0(t6)
  4207c0:	afbf001c 	sw	ra,28(sp)
  4207c4:	11c00026 	beqz	t6,420860 <drawOverview+0xb8>
  4207c8:	afbc0018 	sw	gp,24(sp)
  4207cc:	8f998660 	lw	t9,-31136(gp)
  4207d0:	00000000 	nop
  4207d4:	0320f809 	jalr	t9
  4207d8:	00000000 	nop
  4207dc:	8fbc0018 	lw	gp,24(sp)
  4207e0:	00000000 	nop
  4207e4:	8f848a24 	lw	a0,-30172(gp)
  4207e8:	8f998464 	lw	t9,-31644(gp)
  4207ec:	8c840160 	lw	a0,352(a0)
  4207f0:	0320f809 	jalr	t9
  4207f4:	00000000 	nop
  4207f8:	8fbc0018 	lw	gp,24(sp)
  4207fc:	00000000 	nop
  420800:	8f998308 	lw	t9,-31992(gp)
  420804:	00000000 	nop
  420808:	0320f809 	jalr	t9
  42080c:	00000000 	nop
  420810:	8fbc0018 	lw	gp,24(sp)
  420814:	00000000 	nop
  420818:	8f84892c 	lw	a0,-30420(gp)
  42081c:	00000000 	nop
  420820:	8c840000 	lw	a0,0(a0)
  420824:	00000000 	nop
  420828:	10800007 	beqz	a0,420848 <drawOverview+0xa0>
  42082c:	00000000 	nop
  420830:	8f998670 	lw	t9,-31120(gp)
  420834:	00002825 	move	a1,zero
  420838:	0320f809 	jalr	t9
  42083c:	00000000 	nop
  420840:	8fbc0018 	lw	gp,24(sp)
  420844:	00000000 	nop
  420848:	8f9984ac 	lw	t9,-31572(gp)
  42084c:	00000000 	nop
  420850:	0320f809 	jalr	t9
  420854:	00000000 	nop
  420858:	8fbc0018 	lw	gp,24(sp)
  42085c:	00000000 	nop
  420860:	8fbf001c 	lw	ra,28(sp)
  420864:	27bd0020 	addiu	sp,sp,32
  420868:	03e00008 	jr	ra
  42086c:	00000000 	nop
