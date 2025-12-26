# Function: beamup
# Address: 0x004292b8 - 0x00429350
# Size: 0x98 (152 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004292b8 <beamup>:
  4292b8:	3c1c0fbf 	lui	gp,0xfbf
  4292bc:	279c4878 	addiu	gp,gp,18552
  4292c0:	0399e021 	addu	gp,gp,t9
  4292c4:	8f8e8a24 	lw	t6,-30172(gp)
  4292c8:	27bdffe0 	addiu	sp,sp,-32
  4292cc:	91ce0001 	lbu	t6,1(t6)
  4292d0:	afbf001c 	sw	ra,28(sp)
  4292d4:	afbc0018 	sw	gp,24(sp)
  4292d8:	11c00019 	beqz	t6,429340 <beamup+0x88>
  4292dc:	afb00014 	sw	s0,20(sp)
  4292e0:	8f908068 	lw	s0,-32664(gp)
  4292e4:	240f0001 	li	t7,1
  4292e8:	29e10004 	slti	at,t7,4
  4292ec:	26107988 	addiu	s0,s0,31112
  4292f0:	10200011 	beqz	at,429338 <beamup+0x80>
  4292f4:	ae0f0000 	sw	t7,0(s0)
  4292f8:	8f998534 	lw	t9,-31436(gp)
  4292fc:	00000000 	nop
  429300:	0320f809 	jalr	t9
  429304:	00000000 	nop
  429308:	8fbc0018 	lw	gp,24(sp)
  42930c:	00000000 	nop
  429310:	8f998780 	lw	t9,-30848(gp)
  429314:	00000000 	nop
  429318:	0320f809 	jalr	t9
  42931c:	00000000 	nop
  429320:	8e190000 	lw	t9,0(s0)
  429324:	8fbc0018 	lw	gp,24(sp)
  429328:	27280001 	addiu	t0,t9,1
  42932c:	29010004 	slti	at,t0,4
  429330:	1420fff1 	bnez	at,4292f8 <beamup+0x40>
  429334:	ae080000 	sw	t0,0(s0)
  429338:	240a0003 	li	t2,3
  42933c:	ae0a0000 	sw	t2,0(s0)
  429340:	8fbf001c 	lw	ra,28(sp)
  429344:	8fb00014 	lw	s0,20(sp)
  429348:	03e00008 	jr	ra
  42934c:	27bd0020 	addiu	sp,sp,32
