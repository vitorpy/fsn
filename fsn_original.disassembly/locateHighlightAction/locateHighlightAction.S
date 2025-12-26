# Function: locateHighlightAction
# Address: 0x00429b00 - 0x00429bbc
# Size: 0xbc (188 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429b00 <locateHighlightAction>:
  429b00:	3c1c0fbf 	lui	gp,0xfbf
  429b04:	279c4030 	addiu	gp,gp,16432
  429b08:	0399e021 	addu	gp,gp,t9
  429b0c:	27bdffe0 	addiu	sp,sp,-32
  429b10:	afbf001c 	sw	ra,28(sp)
  429b14:	afbc0018 	sw	gp,24(sp)
  429b18:	afa40020 	sw	a0,32(sp)
  429b1c:	afa60028 	sw	a2,40(sp)
  429b20:	afa7002c 	sw	a3,44(sp)
  429b24:	8cae0030 	lw	t6,48(a1)
  429b28:	00000000 	nop
  429b2c:	15c00020 	bnez	t6,429bb0 <locateHighlightAction+0xb0>
  429b30:	8fbf001c 	lw	ra,28(sp)
  429b34:	8f998770 	lw	t9,-30864(gp)
  429b38:	00000000 	nop
  429b3c:	0320f809 	jalr	t9
  429b40:	00000000 	nop
  429b44:	8fbc0018 	lw	gp,24(sp)
  429b48:	8fa40020 	lw	a0,32(sp)
  429b4c:	8f998778 	lw	t9,-30856(gp)
  429b50:	24050001 	li	a1,1
  429b54:	0320f809 	jalr	t9
  429b58:	00000000 	nop
  429b5c:	8fbc0018 	lw	gp,24(sp)
  429b60:	00000000 	nop
  429b64:	8f998750 	lw	t9,-30896(gp)
  429b68:	00000000 	nop
  429b6c:	0320f809 	jalr	t9
  429b70:	00000000 	nop
  429b74:	8fbc0018 	lw	gp,24(sp)
  429b78:	00000000 	nop
  429b7c:	8f998774 	lw	t9,-30860(gp)
  429b80:	00000000 	nop
  429b84:	0320f809 	jalr	t9
  429b88:	00000000 	nop
  429b8c:	8fbc0018 	lw	gp,24(sp)
  429b90:	00000000 	nop
  429b94:	8f998330 	lw	t9,-31952(gp)
  429b98:	00000000 	nop
  429b9c:	0320f809 	jalr	t9
  429ba0:	00000000 	nop
  429ba4:	8fbc0018 	lw	gp,24(sp)
  429ba8:	00000000 	nop
  429bac:	8fbf001c 	lw	ra,28(sp)
  429bb0:	27bd0020 	addiu	sp,sp,32
  429bb4:	03e00008 	jr	ra
  429bb8:	00000000 	nop
