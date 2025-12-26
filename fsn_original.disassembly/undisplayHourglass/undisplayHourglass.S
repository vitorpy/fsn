# Function: undisplayHourglass
# Address: 0x0042fd44 - 0x0042fd90
# Size: 0x4c (76 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042fd44 <undisplayHourglass>:
  42fd44:	3c1c0fbf 	lui	gp,0xfbf
  42fd48:	279cddec 	addiu	gp,gp,-8724
  42fd4c:	0399e021 	addu	gp,gp,t9
  42fd50:	8f998368 	lw	t9,-31896(gp)
  42fd54:	27bdffe0 	addiu	sp,sp,-32
  42fd58:	afbf001c 	sw	ra,28(sp)
  42fd5c:	0320f809 	jalr	t9
  42fd60:	afbc0018 	sw	gp,24(sp)
  42fd64:	8fbc0018 	lw	gp,24(sp)
  42fd68:	00402825 	move	a1,v0
  42fd6c:	8f848a04 	lw	a0,-30204(gp)
  42fd70:	8f998448 	lw	t9,-31672(gp)
  42fd74:	8c840000 	lw	a0,0(a0)
  42fd78:	0320f809 	jalr	t9
  42fd7c:	00000000 	nop
  42fd80:	8fbf001c 	lw	ra,28(sp)
  42fd84:	8fbc0018 	lw	gp,24(sp)
  42fd88:	03e00008 	jr	ra
  42fd8c:	27bd0020 	addiu	sp,sp,32
