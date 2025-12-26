# Function: zoomToSelection
# Address: 0x0041fba8 - 0x0041fc24
# Size: 0x7c (124 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041fba8 <zoomToSelection>:
  41fba8:	3c1c0fc0 	lui	gp,0xfc0
  41fbac:	279cdf88 	addiu	gp,gp,-8312
  41fbb0:	0399e021 	addu	gp,gp,t9
  41fbb4:	8f82897c 	lw	v0,-30340(gp)
  41fbb8:	27bdffe0 	addiu	sp,sp,-32
  41fbbc:	8c420000 	lw	v0,0(v0)
  41fbc0:	afbf001c 	sw	ra,28(sp)
  41fbc4:	afbc0018 	sw	gp,24(sp)
  41fbc8:	8c4e003c 	lw	t6,60(v0)
  41fbcc:	00000000 	nop
  41fbd0:	11c00009 	beqz	t6,41fbf8 <zoomToSelection+0x50>
  41fbd4:	00000000 	nop
  41fbd8:	8f99861c 	lw	t9,-31204(gp)
  41fbdc:	8c440044 	lw	a0,68(v0)
  41fbe0:	8c450048 	lw	a1,72(v0)
  41fbe4:	0320f809 	jalr	t9
  41fbe8:	00000000 	nop
  41fbec:	8fbc0018 	lw	gp,24(sp)
  41fbf0:	10000009 	b	41fc18 <zoomToSelection+0x70>
  41fbf4:	8fbf001c 	lw	ra,28(sp)
  41fbf8:	8f998704 	lw	t9,-30972(gp)
  41fbfc:	8c440044 	lw	a0,68(v0)
  41fc00:	8c450048 	lw	a1,72(v0)
  41fc04:	0320f809 	jalr	t9
  41fc08:	00000000 	nop
  41fc0c:	8fbc0018 	lw	gp,24(sp)
  41fc10:	00000000 	nop
  41fc14:	8fbf001c 	lw	ra,28(sp)
  41fc18:	27bd0020 	addiu	sp,sp,32
  41fc1c:	03e00008 	jr	ra
  41fc20:	00000000 	nop
