# Function: pickPointer
# Address: 0x00426db4 - 0x00426e28
# Size: 0x74 (116 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00426db4 <pickPointer>:
  426db4:	3c1c0fbf 	lui	gp,0xfbf
  426db8:	279c6d7c 	addiu	gp,gp,28028
  426dbc:	0399e021 	addu	gp,gp,t9
  426dc0:	8f8e897c 	lw	t6,-30340(gp)
  426dc4:	27bdffe0 	addiu	sp,sp,-32
  426dc8:	8dce0000 	lw	t6,0(t6)
  426dcc:	afbf001c 	sw	ra,28(sp)
  426dd0:	afbc0018 	sw	gp,24(sp)
  426dd4:	8dcf003c 	lw	t7,60(t6)
  426dd8:	00000000 	nop
  426ddc:	15e00008 	bnez	t7,426e00 <pickPointer+0x4c>
  426de0:	00000000 	nop
  426de4:	8f9986dc 	lw	t9,-31012(gp)
  426de8:	00000000 	nop
  426dec:	0320f809 	jalr	t9
  426df0:	00000000 	nop
  426df4:	8fbc0018 	lw	gp,24(sp)
  426df8:	10000008 	b	426e1c <pickPointer+0x68>
  426dfc:	8fbf001c 	lw	ra,28(sp)
  426e00:	8f998608 	lw	t9,-31224(gp)
  426e04:	00000000 	nop
  426e08:	0320f809 	jalr	t9
  426e0c:	00000000 	nop
  426e10:	8fbc0018 	lw	gp,24(sp)
  426e14:	00000000 	nop
  426e18:	8fbf001c 	lw	ra,28(sp)
  426e1c:	27bd0020 	addiu	sp,sp,32
  426e20:	03e00008 	jr	ra
  426e24:	00000000 	nop
