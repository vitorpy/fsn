# Function: FUN_00429464
# Address: 0x00429464 - 0x004294c0
# Size: 0x5c (92 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429464 <beamdown+0x114>:
  429464:	3c1c0fbf 	lui	gp,0xfbf
  429468:	279c46cc 	addiu	gp,gp,18124
  42946c:	0399e021 	addu	gp,gp,t9
  429470:	8f8f8a08 	lw	t7,-30200(gp)
  429474:	27bdffd8 	addiu	sp,sp,-40
  429478:	8f8e80a0 	lw	t6,-32608(gp)
  42947c:	8f988984 	lw	t8,-30332(gp)
  429480:	8def0000 	lw	t7,0(t7)
  429484:	8f180000 	lw	t8,0(t8)
  429488:	25ce1d4d 	addiu	t6,t6,7501
  42948c:	8f998340 	lw	t9,-31936(gp)
  429490:	afbf001c 	sw	ra,28(sp)
  429494:	afbc0018 	sw	gp,24(sp)
  429498:	afae0020 	sw	t6,32(sp)
  42949c:	afaf0024 	sw	t7,36(sp)
  4294a0:	8f04002c 	lw	a0,44(t8)
  4294a4:	27a50020 	addiu	a1,sp,32
  4294a8:	0320f809 	jalr	t9
  4294ac:	24060001 	li	a2,1
  4294b0:	8fbf001c 	lw	ra,28(sp)
  4294b4:	8fbc0018 	lw	gp,24(sp)
  4294b8:	03e00008 	jr	ra
  4294bc:	27bd0028 	addiu	sp,sp,40
