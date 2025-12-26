# Function: beamdown
# Address: 0x00429350 - 0x004293dc
# Size: 0x8c (140 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429350 <beamdown>:
  429350:	3c1c0fbf 	lui	gp,0xfbf
  429354:	279c47e0 	addiu	gp,gp,18400
  429358:	0399e021 	addu	gp,gp,t9
  42935c:	8f8e8a24 	lw	t6,-30172(gp)
  429360:	27bdffe0 	addiu	sp,sp,-32
  429364:	91ce0001 	lbu	t6,1(t6)
  429368:	afbf001c 	sw	ra,28(sp)
  42936c:	afbc0018 	sw	gp,24(sp)
  429370:	11c00016 	beqz	t6,4293cc <beamdown+0x7c>
  429374:	afb00014 	sw	s0,20(sp)
  429378:	8f908068 	lw	s0,-32664(gp)
  42937c:	240f0003 	li	t7,3
  429380:	26107988 	addiu	s0,s0,31112
  429384:	05e00010 	bltz	t7,4293c8 <beamdown+0x78>
  429388:	ae0f0000 	sw	t7,0(s0)
  42938c:	8f998534 	lw	t9,-31436(gp)
  429390:	00000000 	nop
  429394:	0320f809 	jalr	t9
  429398:	00000000 	nop
  42939c:	8fbc0018 	lw	gp,24(sp)
  4293a0:	00000000 	nop
  4293a4:	8f998780 	lw	t9,-30848(gp)
  4293a8:	00000000 	nop
  4293ac:	0320f809 	jalr	t9
  4293b0:	00000000 	nop
  4293b4:	8e190000 	lw	t9,0(s0)
  4293b8:	8fbc0018 	lw	gp,24(sp)
  4293bc:	2728ffff 	addiu	t0,t9,-1
  4293c0:	0501fff2 	bgez	t0,42938c <beamdown+0x3c>
  4293c4:	ae080000 	sw	t0,0(s0)
  4293c8:	ae000000 	sw	zero,0(s0)
  4293cc:	8fbf001c 	lw	ra,28(sp)
  4293d0:	8fb00014 	lw	s0,20(sp)
  4293d4:	03e00008 	jr	ra
  4293d8:	27bd0020 	addiu	sp,sp,32
