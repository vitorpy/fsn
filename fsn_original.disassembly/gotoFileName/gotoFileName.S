# Function: gotoFileName
# Address: 0x0041fc24 - 0x0041fcc0
# Size: 0x9c (156 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041fc24 <gotoFileName>:
  41fc24:	3c1c0fc0 	lui	gp,0xfc0
  41fc28:	279cdf0c 	addiu	gp,gp,-8436
  41fc2c:	0399e021 	addu	gp,gp,t9
  41fc30:	27bdffd8 	addiu	sp,sp,-40
  41fc34:	8f99878c 	lw	t9,-30836(gp)
  41fc38:	afbf001c 	sw	ra,28(sp)
  41fc3c:	afbc0018 	sw	gp,24(sp)
  41fc40:	27a50024 	addiu	a1,sp,36
  41fc44:	0320f809 	jalr	t9
  41fc48:	27a60020 	addiu	a2,sp,32
  41fc4c:	8fa40024 	lw	a0,36(sp)
  41fc50:	8fbc0018 	lw	gp,24(sp)
  41fc54:	10800016 	beqz	a0,41fcb0 <gotoFileName+0x8c>
  41fc58:	00001025 	move	v0,zero
  41fc5c:	8f99863c 	lw	t9,-31172(gp)
  41fc60:	00000000 	nop
  41fc64:	0320f809 	jalr	t9
  41fc68:	00000000 	nop
  41fc6c:	8fa40020 	lw	a0,32(sp)
  41fc70:	8fbc0018 	lw	gp,24(sp)
  41fc74:	10800007 	beqz	a0,41fc94 <gotoFileName+0x70>
  41fc78:	00000000 	nop
  41fc7c:	8f998644 	lw	t9,-31164(gp)
  41fc80:	00000000 	nop
  41fc84:	0320f809 	jalr	t9
  41fc88:	00000000 	nop
  41fc8c:	8fbc0018 	lw	gp,24(sp)
  41fc90:	00000000 	nop
  41fc94:	8f998658 	lw	t9,-31144(gp)
  41fc98:	00000000 	nop
  41fc9c:	0320f809 	jalr	t9
  41fca0:	00000000 	nop
  41fca4:	8fbc0018 	lw	gp,24(sp)
  41fca8:	10000001 	b	41fcb0 <gotoFileName+0x8c>
  41fcac:	24020001 	li	v0,1
  41fcb0:	8fbf001c 	lw	ra,28(sp)
  41fcb4:	27bd0028 	addiu	sp,sp,40
  41fcb8:	03e00008 	jr	ra
  41fcbc:	00000000 	nop
