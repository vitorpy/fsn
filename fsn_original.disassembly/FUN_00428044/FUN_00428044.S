# Function: FUN_00428044
# Address: 0x00428044 - 0x0042827c
# Size: 0x238 (568 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00428044 <dirfamUnmonitor+0x70>:
  428044:	3c1c0fbf 	lui	gp,0xfbf
  428048:	279c5aec 	addiu	gp,gp,23276
  42804c:	0399e021 	addu	gp,gp,t9
  428050:	8f8e8a24 	lw	t6,-30172(gp)
  428054:	27bdfbb8 	addiu	sp,sp,-1096
  428058:	91ce0000 	lbu	t6,0(t6)
  42805c:	afb00014 	sw	s0,20(sp)
  428060:	afbf0024 	sw	ra,36(sp)
  428064:	afbc0020 	sw	gp,32(sp)
  428068:	afb2001c 	sw	s2,28(sp)
  42806c:	afb10018 	sw	s1,24(sp)
  428070:	15c0007c 	bnez	t6,428264 <dirfamUnmonitor+0x290>
  428074:	00008025 	move	s0,zero
  428078:	8f998720 	lw	t9,-30944(gp)
  42807c:	00000000 	nop
  428080:	0320f809 	jalr	t9
  428084:	00000000 	nop
  428088:	8fbc0020 	lw	gp,32(sp)
  42808c:	00000000 	nop
  428090:	8f92806c 	lw	s2,-32660(gp)
  428094:	8f9988f4 	lw	t9,-30476(gp)
  428098:	26526c70 	addiu	s2,s2,27760
  42809c:	0320f809 	jalr	t9
  4280a0:	02402025 	move	a0,s2
  4280a4:	8fbc0020 	lw	gp,32(sp)
  4280a8:	1040004e 	beqz	v0,4281e4 <dirfamUnmonitor+0x210>
  4280ac:	27b10040 	addiu	s1,sp,64
  4280b0:	8f9988f0 	lw	t9,-30480(gp)
  4280b4:	02402025 	move	a0,s2
  4280b8:	0320f809 	jalr	t9
  4280bc:	27a50034 	addiu	a1,sp,52
  4280c0:	8fa40440 	lw	a0,1088(sp)
  4280c4:	8fbc0020 	lw	gp,32(sp)
  4280c8:	1080003f 	beqz	a0,4281c8 <dirfamUnmonitor+0x1f4>
  4280cc:	00000000 	nop
  4280d0:	8faf0444 	lw	t7,1092(sp)
  4280d4:	00000000 	nop
  4280d8:	2de1000a 	sltiu	at,t7,10
  4280dc:	1020003a 	beqz	at,4281c8 <dirfamUnmonitor+0x1f4>
  4280e0:	00000000 	nop
  4280e4:	8f81805c 	lw	at,-32676(gp)
  4280e8:	000f7880 	sll	t7,t7,0x2
  4280ec:	002f0821 	addu	at,at,t7
  4280f0:	8c2fe884 	lw	t7,-6012(at)
  4280f4:	00000000 	nop
  4280f8:	01fc7821 	addu	t7,t7,gp
  4280fc:	01e00008 	jr	t7
  428100:	00000000 	nop
  428104:	8f9985d0 	lw	t9,-31280(gp)
  428108:	02202825 	move	a1,s1
  42810c:	0320f809 	jalr	t9
  428110:	00000000 	nop
  428114:	02028025 	or	s0,s0,v0
  428118:	321800ff 	andi	t8,s0,0xff
  42811c:	8fbc0020 	lw	gp,32(sp)
  428120:	10000029 	b	4281c8 <dirfamUnmonitor+0x1f4>
  428124:	03008025 	move	s0,t8
  428128:	8f9985d8 	lw	t9,-31272(gp)
  42812c:	02202825 	move	a1,s1
  428130:	0320f809 	jalr	t9
  428134:	00000000 	nop
  428138:	02028025 	or	s0,s0,v0
  42813c:	321900ff 	andi	t9,s0,0xff
  428140:	8fbc0020 	lw	gp,32(sp)
  428144:	10000020 	b	4281c8 <dirfamUnmonitor+0x1f4>
  428148:	03208025 	move	s0,t9
  42814c:	8f9985d4 	lw	t9,-31276(gp)
  428150:	02202825 	move	a1,s1
  428154:	0320f809 	jalr	t9
  428158:	00000000 	nop
  42815c:	02028025 	or	s0,s0,v0
  428160:	320800ff 	andi	t0,s0,0xff
  428164:	8fbc0020 	lw	gp,32(sp)
  428168:	10000017 	b	4281c8 <dirfamUnmonitor+0x1f4>
  42816c:	01008025 	move	s0,t0
  428170:	8f9985e4 	lw	t9,-31260(gp)
  428174:	00000000 	nop
  428178:	0320f809 	jalr	t9
  42817c:	00000000 	nop
  428180:	02028025 	or	s0,s0,v0
  428184:	320900ff 	andi	t1,s0,0xff
  428188:	8fbc0020 	lw	gp,32(sp)
  42818c:	1000000e 	b	4281c8 <dirfamUnmonitor+0x1f4>
  428190:	01208025 	move	s0,t1
  428194:	8f9985dc 	lw	t9,-31268(gp)
  428198:	02202825 	move	a1,s1
  42819c:	0320f809 	jalr	t9
  4281a0:	00000000 	nop
  4281a4:	8fbc0020 	lw	gp,32(sp)
  4281a8:	10000007 	b	4281c8 <dirfamUnmonitor+0x1f4>
  4281ac:	00000000 	nop
  4281b0:	8f9985e0 	lw	t9,-31264(gp)
  4281b4:	02202825 	move	a1,s1
  4281b8:	0320f809 	jalr	t9
  4281bc:	00000000 	nop
  4281c0:	8fbc0020 	lw	gp,32(sp)
  4281c4:	00000000 	nop
  4281c8:	8f9988f4 	lw	t9,-30476(gp)
  4281cc:	02402025 	move	a0,s2
  4281d0:	0320f809 	jalr	t9
  4281d4:	00000000 	nop
  4281d8:	8fbc0020 	lw	gp,32(sp)
  4281dc:	1440ffb4 	bnez	v0,4280b0 <dirfamUnmonitor+0xdc>
  4281e0:	00000000 	nop
  4281e4:	12000007 	beqz	s0,428204 <dirfamUnmonitor+0x230>
  4281e8:	00000000 	nop
  4281ec:	8f998588 	lw	t9,-31352(gp)
  4281f0:	00000000 	nop
  4281f4:	0320f809 	jalr	t9
  4281f8:	00000000 	nop
  4281fc:	8fbc0020 	lw	gp,32(sp)
  428200:	00000000 	nop
  428204:	8f998648 	lw	t9,-31160(gp)
  428208:	00000000 	nop
  42820c:	0320f809 	jalr	t9
  428210:	00000000 	nop
  428214:	8fbc0020 	lw	gp,32(sp)
  428218:	00000000 	nop
  42821c:	8f998534 	lw	t9,-31436(gp)
  428220:	00000000 	nop
  428224:	0320f809 	jalr	t9
  428228:	00000000 	nop
  42822c:	8fbc0020 	lw	gp,32(sp)
  428230:	00000000 	nop
  428234:	8f998780 	lw	t9,-30848(gp)
  428238:	00000000 	nop
  42823c:	0320f809 	jalr	t9
  428240:	00000000 	nop
  428244:	8fbc0020 	lw	gp,32(sp)
  428248:	00000000 	nop
  42824c:	8f99871c 	lw	t9,-30948(gp)
  428250:	00000000 	nop
  428254:	0320f809 	jalr	t9
  428258:	00000000 	nop
  42825c:	8fbc0020 	lw	gp,32(sp)
  428260:	00000000 	nop
  428264:	8fbf0024 	lw	ra,36(sp)
  428268:	8fb00014 	lw	s0,20(sp)
  42826c:	8fb10018 	lw	s1,24(sp)
  428270:	8fb2001c 	lw	s2,28(sp)
  428274:	03e00008 	jr	ra
  428278:	27bd0448 	addiu	sp,sp,1096
