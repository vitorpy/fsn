# Function: rgb_to_irgb
# Address: 0x00438fd4 - 0x004390ac
# Size: 0xd8 (216 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00438fd4 <rgb_to_irgb>:
  438fd4:	3c1c0fbe 	lui	gp,0xfbe
  438fd8:	279c4b5c 	addiu	gp,gp,19292
  438fdc:	0399e021 	addu	gp,gp,t9
  438fe0:	8f81805c 	lw	at,-32676(gp)
  438fe4:	46206120 	cvt.s.d	$f4,$f12
  438fe8:	c4215ab8 	lwc1	$f1,23224(at)
  438fec:	c4205abc 	lwc1	$f0,23228(at)
  438ff0:	460021a1 	cvt.d.s	$f6,$f4
  438ff4:	46203202 	mul.d	$f8,$f6,$f0
  438ff8:	3c013fe0 	lui	at,0x3fe0
  438ffc:	44811800 	mtc1	at,$f3
  439000:	44801000 	mtc1	zero,$f2
  439004:	8faf0018 	lw	t7,24(sp)
  439008:	46224280 	add.d	$f10,$f8,$f2
  43900c:	444ef800 	cfc1	t6,c1_fcsr
  439010:	00000000 	nop
  439014:	35c10003 	ori	at,t6,0x3
  439018:	38210002 	xori	at,at,0x2
  43901c:	44c1f800 	ctc1	at,c1_fcsr
  439020:	00000000 	nop
  439024:	46205424 	cvt.w.d	$f16,$f10
  439028:	44cef800 	ctc1	t6,c1_fcsr
  43902c:	e5f00000 	swc1	$f16,0(t7)
  439030:	462074a0 	cvt.s.d	$f18,$f14
  439034:	8fb9001c 	lw	t9,28(sp)
  439038:	46009121 	cvt.d.s	$f4,$f18
  43903c:	46202182 	mul.d	$f6,$f4,$f0
  439040:	46223200 	add.d	$f8,$f6,$f2
  439044:	4458f800 	cfc1	t8,c1_fcsr
  439048:	00000000 	nop
  43904c:	37010003 	ori	at,t8,0x3
  439050:	38210002 	xori	at,at,0x2
  439054:	44c1f800 	ctc1	at,c1_fcsr
  439058:	00000000 	nop
  43905c:	462042a4 	cvt.w.d	$f10,$f8
  439060:	e72a0000 	swc1	$f10,0(t9)
  439064:	44d8f800 	ctc1	t8,c1_fcsr
  439068:	c7b00014 	lwc1	$f16,20(sp)
  43906c:	c7b10010 	lwc1	$f17,16(sp)
  439070:	8fa90020 	lw	t1,32(sp)
  439074:	462084a0 	cvt.s.d	$f18,$f16
  439078:	46009121 	cvt.d.s	$f4,$f18
  43907c:	46202182 	mul.d	$f6,$f4,$f0
  439080:	46223200 	add.d	$f8,$f6,$f2
  439084:	4448f800 	cfc1	t0,c1_fcsr
  439088:	00000000 	nop
  43908c:	35010003 	ori	at,t0,0x3
  439090:	38210002 	xori	at,at,0x2
  439094:	44c1f800 	ctc1	at,c1_fcsr
  439098:	00000000 	nop
  43909c:	462042a4 	cvt.w.d	$f10,$f8
  4390a0:	44c8f800 	ctc1	t0,c1_fcsr
  4390a4:	03e00008 	jr	ra
  4390a8:	e52a0000 	swc1	$f10,0(t1)
