# Function: FUN_00428b6c
# Address: 0x00428b6c - 0x00428cc0
# Size: 0x154 (340 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00428b6c <makeColorBoxes+0xc>:
  428b6c:	8f8e8068 	lw	t6,-32664(gp)
  428b70:	27bdffe0 	addiu	sp,sp,-32
  428b74:	91ce7904 	lbu	t6,30980(t6)
  428b78:	afbf001c 	sw	ra,28(sp)
  428b7c:	afbc0018 	sw	gp,24(sp)
  428b80:	15c0000c 	bnez	t6,428bb4 <makeColorBoxes+0x54>
  428b84:	afb00014 	sw	s0,20(sp)
  428b88:	8f848a10 	lw	a0,-30192(gp)
  428b8c:	8f998020 	lw	t9,-32736(gp)
  428b90:	8c840000 	lw	a0,0(a0)
  428b94:	27398288 	addiu	t9,t9,-32120
  428b98:	0320f809 	jalr	t9
  428b9c:	00000000 	nop
  428ba0:	8fbc0018 	lw	gp,24(sp)
  428ba4:	240f0001 	li	t7,1
  428ba8:	8f818068 	lw	at,-32664(gp)
  428bac:	00000000 	nop
  428bb0:	a02f7904 	sb	t7,30980(at)
  428bb4:	8f908a24 	lw	s0,-30172(gp)
  428bb8:	8f858974 	lw	a1,-30348(gp)
  428bbc:	8f998728 	lw	t9,-30936(gp)
  428bc0:	8e040164 	lw	a0,356(s0)
  428bc4:	8ca50000 	lw	a1,0(a1)
  428bc8:	0320f809 	jalr	t9
  428bcc:	24060007 	li	a2,7
  428bd0:	8fbc0018 	lw	gp,24(sp)
  428bd4:	8e04018c 	lw	a0,396(s0)
  428bd8:	8f858958 	lw	a1,-30376(gp)
  428bdc:	8f998728 	lw	t9,-30936(gp)
  428be0:	8ca50000 	lw	a1,0(a1)
  428be4:	0320f809 	jalr	t9
  428be8:	00003025 	move	a2,zero
  428bec:	8fbc0018 	lw	gp,24(sp)
  428bf0:	8e040190 	lw	a0,400(s0)
  428bf4:	8f85895c 	lw	a1,-30372(gp)
  428bf8:	8f998728 	lw	t9,-30936(gp)
  428bfc:	8ca50000 	lw	a1,0(a1)
  428c00:	0320f809 	jalr	t9
  428c04:	24060001 	li	a2,1
  428c08:	8fbc0018 	lw	gp,24(sp)
  428c0c:	8e040194 	lw	a0,404(s0)
  428c10:	8f858960 	lw	a1,-30368(gp)
  428c14:	8f998728 	lw	t9,-30936(gp)
  428c18:	8ca50000 	lw	a1,0(a1)
  428c1c:	0320f809 	jalr	t9
  428c20:	24060002 	li	a2,2
  428c24:	8fbc0018 	lw	gp,24(sp)
  428c28:	8e040198 	lw	a0,408(s0)
  428c2c:	8f858964 	lw	a1,-30364(gp)
  428c30:	8f998728 	lw	t9,-30936(gp)
  428c34:	8ca50000 	lw	a1,0(a1)
  428c38:	0320f809 	jalr	t9
  428c3c:	24060003 	li	a2,3
  428c40:	8fbc0018 	lw	gp,24(sp)
  428c44:	8e04019c 	lw	a0,412(s0)
  428c48:	8f858968 	lw	a1,-30360(gp)
  428c4c:	8f998728 	lw	t9,-30936(gp)
  428c50:	8ca50000 	lw	a1,0(a1)
  428c54:	0320f809 	jalr	t9
  428c58:	24060004 	li	a2,4
  428c5c:	8fbc0018 	lw	gp,24(sp)
  428c60:	8e0401a0 	lw	a0,416(s0)
  428c64:	8f85896c 	lw	a1,-30356(gp)
  428c68:	8f998728 	lw	t9,-30936(gp)
  428c6c:	8ca50000 	lw	a1,0(a1)
  428c70:	0320f809 	jalr	t9
  428c74:	24060005 	li	a2,5
  428c78:	8fbc0018 	lw	gp,24(sp)
  428c7c:	8e0401a4 	lw	a0,420(s0)
  428c80:	8f858970 	lw	a1,-30352(gp)
  428c84:	8f998728 	lw	t9,-30936(gp)
  428c88:	8ca50000 	lw	a1,0(a1)
  428c8c:	0320f809 	jalr	t9
  428c90:	24060006 	li	a2,6
  428c94:	8fbc0018 	lw	gp,24(sp)
  428c98:	00000000 	nop
  428c9c:	8f998730 	lw	t9,-30928(gp)
  428ca0:	00000000 	nop
  428ca4:	0320f809 	jalr	t9
  428ca8:	00000000 	nop
  428cac:	8fbf001c 	lw	ra,28(sp)
  428cb0:	8fbc0018 	lw	gp,24(sp)
  428cb4:	8fb00014 	lw	s0,20(sp)
  428cb8:	03e00008 	jr	ra
  428cbc:	27bd0020 	addiu	sp,sp,32
