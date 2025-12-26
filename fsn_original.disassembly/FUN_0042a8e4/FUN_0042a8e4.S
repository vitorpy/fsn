# Function: FUN_0042a8e4
# Address: 0x0042a8e4 - 0x0042a960
# Size: 0x7c (124 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a8e4 <draw_alt+0xc>:
  42a8e4:	8f8e8980 	lw	t6,-30336(gp)
  42a8e8:	27bdffe0 	addiu	sp,sp,-32
  42a8ec:	8dce0000 	lw	t6,0(t6)
  42a8f0:	afbf001c 	sw	ra,28(sp)
  42a8f4:	afbc0018 	sw	gp,24(sp)
  42a8f8:	91cf0c51 	lbu	t7,3153(t6)
  42a8fc:	00000000 	nop
  42a900:	11e00014 	beqz	t7,42a954 <draw_alt+0x7c>
  42a904:	8fbf001c 	lw	ra,28(sp)
  42a908:	8f99876c 	lw	t9,-30868(gp)
  42a90c:	24040001 	li	a0,1
  42a910:	0320f809 	jalr	t9
  42a914:	00000000 	nop
  42a918:	8fbc0018 	lw	gp,24(sp)
  42a91c:	00000000 	nop
  42a920:	8f998534 	lw	t9,-31436(gp)
  42a924:	00000000 	nop
  42a928:	0320f809 	jalr	t9
  42a92c:	00000000 	nop
  42a930:	8fbc0018 	lw	gp,24(sp)
  42a934:	24040001 	li	a0,1
  42a938:	8f99876c 	lw	t9,-30868(gp)
  42a93c:	00000000 	nop
  42a940:	0320f809 	jalr	t9
  42a944:	00000000 	nop
  42a948:	8fbc0018 	lw	gp,24(sp)
  42a94c:	00000000 	nop
  42a950:	8fbf001c 	lw	ra,28(sp)
  42a954:	27bd0020 	addiu	sp,sp,32
  42a958:	03e00008 	jr	ra
  42a95c:	00000000 	nop
