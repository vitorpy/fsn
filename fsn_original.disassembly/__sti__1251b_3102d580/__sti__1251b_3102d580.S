# Function: __sti__1251b_3102d580
# Address: 0x004356d0 - 0x00435704
# Size: 0x34 (52 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004356d0 <__sti__1251b_3102d580>:
  4356d0:	3c1c0fbf 	lui	gp,0xfbf
  4356d4:	279c8460 	addiu	gp,gp,-31648
  4356d8:	0399e021 	addu	gp,gp,t9
  4356dc:	8f998894 	lw	t9,-30572(gp)
  4356e0:	27bdffe0 	addiu	sp,sp,-32
  4356e4:	8f8489ec 	lw	a0,-30228(gp)
  4356e8:	afbf001c 	sw	ra,28(sp)
  4356ec:	0320f809 	jalr	t9
  4356f0:	afbc0018 	sw	gp,24(sp)
  4356f4:	8fbf001c 	lw	ra,28(sp)
  4356f8:	8fbc0018 	lw	gp,24(sp)
  4356fc:	03e00008 	jr	ra
  435700:	27bd0020 	addiu	sp,sp,32
