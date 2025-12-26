# Function: widgetHelp
# Address: 0x0042b6b4 - 0x0042b6f8
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b6b4 <widgetHelp>:
  42b6b4:	3c1c0fbf 	lui	gp,0xfbf
  42b6b8:	279c247c 	addiu	gp,gp,9340
  42b6bc:	0399e021 	addu	gp,gp,t9
  42b6c0:	00a03825 	move	a3,a1
  42b6c4:	8f8580a0 	lw	a1,-32608(gp)
  42b6c8:	8f868020 	lw	a2,-32736(gp)
  42b6cc:	8f9983ac 	lw	t9,-31828(gp)
  42b6d0:	27bdffe0 	addiu	sp,sp,-32
  42b6d4:	afbf001c 	sw	ra,28(sp)
  42b6d8:	afbc0018 	sw	gp,24(sp)
  42b6dc:	24a51b37 	addiu	a1,a1,6967
  42b6e0:	0320f809 	jalr	t9
  42b6e4:	24c6b3f4 	addiu	a2,a2,-19468
  42b6e8:	8fbf001c 	lw	ra,28(sp)
  42b6ec:	8fbc0018 	lw	gp,24(sp)
  42b6f0:	03e00008 	jr	ra
  42b6f4:	27bd0020 	addiu	sp,sp,32
