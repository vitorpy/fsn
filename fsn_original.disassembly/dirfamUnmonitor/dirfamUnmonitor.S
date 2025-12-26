# Function: dirfamUnmonitor
# Address: 0x00427fd4 - 0x00428044
# Size: 0x70 (112 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00427fd4 <dirfamUnmonitor>:
  427fd4:	3c1c0fbf 	lui	gp,0xfbf
  427fd8:	279c5b5c 	addiu	gp,gp,23388
  427fdc:	0399e021 	addu	gp,gp,t9
  427fe0:	8f8e8a24 	lw	t6,-30172(gp)
  427fe4:	27bdffe0 	addiu	sp,sp,-32
  427fe8:	91ce0000 	lbu	t6,0(t6)
  427fec:	afbf001c 	sw	ra,28(sp)
  427ff0:	15c00010 	bnez	t6,428034 <dirfamUnmonitor+0x60>
  427ff4:	afbc0018 	sw	gp,24(sp)
  427ff8:	8f848068 	lw	a0,-32664(gp)
  427ffc:	00000000 	nop
  428000:	8c8478b0 	lw	a0,30896(a0)
  428004:	00000000 	nop
  428008:	1080000b 	beqz	a0,428038 <dirfamUnmonitor+0x64>
  42800c:	8fbf001c 	lw	ra,28(sp)
  428010:	8f9980d4 	lw	t9,-32556(gp)
  428014:	00000000 	nop
  428018:	0320f809 	jalr	t9
  42801c:	00000000 	nop
  428020:	8fbc0018 	lw	gp,24(sp)
  428024:	00000000 	nop
  428028:	8f818068 	lw	at,-32664(gp)
  42802c:	00000000 	nop
  428030:	ac2078b0 	sw	zero,30896(at)
  428034:	8fbf001c 	lw	ra,28(sp)
  428038:	27bd0020 	addiu	sp,sp,32
  42803c:	03e00008 	jr	ra
  428040:	00000000 	nop
