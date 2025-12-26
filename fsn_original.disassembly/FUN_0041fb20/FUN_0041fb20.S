# Function: FUN_0041fb20
# Address: 0x0041fb20 - 0x0041fba8
# Size: 0x88 (136 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041fb20 <doIt+0xa14>:
  41fb20:	3c1c0fc0 	lui	gp,0xfc0
  41fb24:	279ce010 	addiu	gp,gp,-8176
  41fb28:	0399e021 	addu	gp,gp,t9
  41fb2c:	8f8e806c 	lw	t6,-32660(gp)
  41fb30:	27bdffe0 	addiu	sp,sp,-32
  41fb34:	91ce6bc8 	lbu	t6,27592(t6)
  41fb38:	afbf001c 	sw	ra,28(sp)
  41fb3c:	afbc0018 	sw	gp,24(sp)
  41fb40:	afa40020 	sw	a0,32(sp)
  41fb44:	11c00014 	beqz	t6,41fb98 <doIt+0xa8c>
  41fb48:	afa60028 	sw	a2,40(sp)
  41fb4c:	8f998778 	lw	t9,-30856(gp)
  41fb50:	00a02025 	move	a0,a1
  41fb54:	0320f809 	jalr	t9
  41fb58:	00000000 	nop
  41fb5c:	8fbc0018 	lw	gp,24(sp)
  41fb60:	240f0001 	li	t7,1
  41fb64:	8f818068 	lw	at,-32664(gp)
  41fb68:	8f998204 	lw	t9,-32252(gp)
  41fb6c:	8fa40020 	lw	a0,32(sp)
  41fb70:	0320f809 	jalr	t9
  41fb74:	a02f6e24 	sb	t7,28196(at)
  41fb78:	8fbc0018 	lw	gp,24(sp)
  41fb7c:	00402025 	move	a0,v0
  41fb80:	8f99875c 	lw	t9,-30884(gp)
  41fb84:	00000000 	nop
  41fb88:	0320f809 	jalr	t9
  41fb8c:	00000000 	nop
  41fb90:	8fbc0018 	lw	gp,24(sp)
  41fb94:	00000000 	nop
  41fb98:	8fbf001c 	lw	ra,28(sp)
  41fb9c:	27bd0020 	addiu	sp,sp,32
  41fba0:	03e00008 	jr	ra
  41fba4:	00000000 	nop
