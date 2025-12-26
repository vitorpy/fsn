# Function: FUN_0040f080
# Address: 0x0040f080 - 0x0040f150
# Size: 0xd0 (208 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040f080 <setScales+0x1888>:
  40f080:	3c1c0fc1 	lui	gp,0xfc1
  40f084:	279ceab0 	addiu	gp,gp,-5456
  40f088:	0399e021 	addu	gp,gp,t9
  40f08c:	8f87897c 	lw	a3,-30340(gp)
  40f090:	27bdffe0 	addiu	sp,sp,-32
  40f094:	8cee0000 	lw	t6,0(a3)
  40f098:	afbf001c 	sw	ra,28(sp)
  40f09c:	afbc0018 	sw	gp,24(sp)
  40f0a0:	8dc2002c 	lw	v0,44(t6)
  40f0a4:	8c8f0020 	lw	t7,32(a0)
  40f0a8:	04410003 	bgez	v0,40f0b8 <setScales+0x18c0>
  40f0ac:	0002c043 	sra	t8,v0,0x1
  40f0b0:	24410001 	addiu	at,v0,1
  40f0b4:	0001c043 	sra	t8,at,0x1
  40f0b8:	01f8c823 	subu	t9,t7,t8
  40f0bc:	00194040 	sll	t0,t9,0x1
  40f0c0:	44882000 	mtc1	t0,$f4
  40f0c4:	44825000 	mtc1	v0,$f10
  40f0c8:	468021a0 	cvt.s.w	$f6,$f4
  40f0cc:	46805421 	cvt.d.w	$f16,$f10
  40f0d0:	46003221 	cvt.d.s	$f8,$f6
  40f0d4:	00000000 	nop
  40f0d8:	46304483 	div.d	$f18,$f8,$f16
  40f0dc:	46209120 	cvt.s.d	$f4,$f18
  40f0e0:	e4a40000 	swc1	$f4,0(a1)
  40f0e4:	8ce90000 	lw	t1,0(a3)
  40f0e8:	8c8b0024 	lw	t3,36(a0)
  40f0ec:	8d230030 	lw	v1,48(t1)
  40f0f0:	00000000 	nop
  40f0f4:	04610003 	bgez	v1,40f104 <setScales+0x190c>
  40f0f8:	00035043 	sra	t2,v1,0x1
  40f0fc:	24610001 	addiu	at,v1,1
  40f100:	00015043 	sra	t2,at,0x1
  40f104:	014b6023 	subu	t4,t2,t3
  40f108:	000c6840 	sll	t5,t4,0x1
  40f10c:	448d3000 	mtc1	t5,$f6
  40f110:	44838000 	mtc1	v1,$f16
  40f114:	468032a0 	cvt.s.w	$f10,$f6
  40f118:	468084a1 	cvt.d.w	$f18,$f16
  40f11c:	46005221 	cvt.d.s	$f8,$f10
  40f120:	00000000 	nop
  40f124:	46324103 	div.d	$f4,$f8,$f18
  40f128:	462021a0 	cvt.s.d	$f6,$f4
  40f12c:	e4c60000 	swc1	$f6,0(a2)
  40f130:	8f998520 	lw	t9,-31456(gp)
  40f134:	00000000 	nop
  40f138:	0320f809 	jalr	t9
  40f13c:	00000000 	nop
  40f140:	8fbf001c 	lw	ra,28(sp)
  40f144:	8fbc0018 	lw	gp,24(sp)
  40f148:	03e00008 	jr	ra
  40f14c:	27bd0020 	addiu	sp,sp,32
