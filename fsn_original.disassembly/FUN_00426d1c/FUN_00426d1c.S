# Function: FUN_00426d1c
# Address: 0x00426d1c - 0x00426db4
# Size: 0x98 (152 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00426d1c <findzoom+0xc>:
  426d1c:	8f8e897c 	lw	t6,-30340(gp)
  426d20:	27bdffd0 	addiu	sp,sp,-48
  426d24:	8dce0000 	lw	t6,0(t6)
  426d28:	afbf002c 	sw	ra,44(sp)
  426d2c:	afbc0028 	sw	gp,40(sp)
  426d30:	8dcf003c 	lw	t7,60(t6)
  426d34:	8faa0040 	lw	t2,64(sp)
  426d38:	15e0000f 	bnez	t7,426d78 <findzoom+0x68>
  426d3c:	8fab0044 	lw	t3,68(sp)
  426d40:	8fb90044 	lw	t9,68(sp)
  426d44:	8fb80040 	lw	t8,64(sp)
  426d48:	afb90014 	sw	t9,20(sp)
  426d4c:	8f9986e0 	lw	t9,-31008(gp)
  426d50:	8fa80048 	lw	t0,72(sp)
  426d54:	8fa9004c 	lw	t1,76(sp)
  426d58:	afb80010 	sw	t8,16(sp)
  426d5c:	afa80018 	sw	t0,24(sp)
  426d60:	0320f809 	jalr	t9
  426d64:	afa9001c 	sw	t1,28(sp)
  426d68:	8fbc0028 	lw	gp,40(sp)
  426d6c:	1000000e 	b	426da8 <findzoom+0x98>
  426d70:	8fbf002c 	lw	ra,44(sp)
  426d74:	8fab0044 	lw	t3,68(sp)
  426d78:	8fac0048 	lw	t4,72(sp)
  426d7c:	8fad004c 	lw	t5,76(sp)
  426d80:	8f99860c 	lw	t9,-31220(gp)
  426d84:	afaa0010 	sw	t2,16(sp)
  426d88:	afab0014 	sw	t3,20(sp)
  426d8c:	afac0018 	sw	t4,24(sp)
  426d90:	0320f809 	jalr	t9
  426d94:	afad001c 	sw	t5,28(sp)
  426d98:	304e00ff 	andi	t6,v0,0xff
  426d9c:	8fbc0028 	lw	gp,40(sp)
  426da0:	01c01025 	move	v0,t6
  426da4:	8fbf002c 	lw	ra,44(sp)
  426da8:	27bd0030 	addiu	sp,sp,48
  426dac:	03e00008 	jr	ra
  426db0:	00000000 	nop
