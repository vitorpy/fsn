# Function: locateHighlight
# Address: 0x00429a3c - 0x00429aa0
# Size: 0x64 (100 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429a3c <locateHighlight>:
  429a3c:	3c1c0fbf 	lui	gp,0xfbf
  429a40:	279c40f4 	addiu	gp,gp,16628
  429a44:	0399e021 	addu	gp,gp,t9
  429a48:	8f99851c 	lw	t9,-31460(gp)
  429a4c:	27bdffd0 	addiu	sp,sp,-48
  429a50:	afbf001c 	sw	ra,28(sp)
  429a54:	0320f809 	jalr	t9
  429a58:	afbc0018 	sw	gp,24(sp)
  429a5c:	8fbc0018 	lw	gp,24(sp)
  429a60:	27a4002c 	addiu	a0,sp,44
  429a64:	8f9986e8 	lw	t9,-31000(gp)
  429a68:	27a50024 	addiu	a1,sp,36
  429a6c:	0320f809 	jalr	t9
  429a70:	27a60028 	addiu	a2,sp,40
  429a74:	8fbc0018 	lw	gp,24(sp)
  429a78:	8fa4002c 	lw	a0,44(sp)
  429a7c:	8f99874c 	lw	t9,-30900(gp)
  429a80:	8fa50024 	lw	a1,36(sp)
  429a84:	8fa60028 	lw	a2,40(sp)
  429a88:	0320f809 	jalr	t9
  429a8c:	00000000 	nop
  429a90:	8fbf001c 	lw	ra,28(sp)
  429a94:	8fbc0018 	lw	gp,24(sp)
  429a98:	03e00008 	jr	ra
  429a9c:	27bd0030 	addiu	sp,sp,48
