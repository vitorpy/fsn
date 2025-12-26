# Function: FUN_00411178
# Address: 0x00411178 - 0x00411230
# Size: 0xb8 (184 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411178 <fileerror+0xf0>:
  411178:	3c1c0fc1 	lui	gp,0xfc1
  41117c:	279cc9b8 	addiu	gp,gp,-13896
  411180:	0399e021 	addu	gp,gp,t9
  411184:	27bdffd8 	addiu	sp,sp,-40
  411188:	8f998018 	lw	t9,-32744(gp)
  41118c:	afa40028 	sw	a0,40(sp)
  411190:	afbf001c 	sw	ra,28(sp)
  411194:	afa5002c 	sw	a1,44(sp)
  411198:	afa60030 	sw	a2,48(sp)
  41119c:	00a02025 	move	a0,a1
  4111a0:	2739f080 	addiu	t9,t9,-3968
  4111a4:	afbc0018 	sw	gp,24(sp)
  4111a8:	afa70034 	sw	a3,52(sp)
  4111ac:	27a50024 	addiu	a1,sp,36
  4111b0:	0320f809 	jalr	t9
  4111b4:	27a60020 	addiu	a2,sp,32
  4111b8:	8fbc0018 	lw	gp,24(sp)
  4111bc:	3c014024 	lui	at,0x4024
  4111c0:	44810800 	mtc1	at,$f1
  4111c4:	8f81806c 	lw	at,-32660(gp)
  4111c8:	c7a40020 	lwc1	$f4,32(sp)
  4111cc:	c4286630 	lwc1	$f8,26160(at)
  4111d0:	8f81806c 	lw	at,-32660(gp)
  4111d4:	460042a1 	cvt.d.s	$f10,$f8
  4111d8:	460021a1 	cvt.d.s	$f6,$f4
  4111dc:	44800000 	mtc1	zero,$f0
  4111e0:	462a3401 	sub.d	$f16,$f6,$f10
  4111e4:	c7b20024 	lwc1	$f18,36(sp)
  4111e8:	c428662c 	lwc1	$f8,26156(at)
  4111ec:	46208302 	mul.d	$f12,$f16,$f0
  4111f0:	8f99853c 	lw	t9,-31428(gp)
  4111f4:	46009121 	cvt.d.s	$f4,$f18
  4111f8:	460041a1 	cvt.d.s	$f6,$f8
  4111fc:	46262281 	sub.d	$f10,$f4,$f6
  411200:	0320f809 	jalr	t9
  411204:	46205382 	mul.d	$f14,$f10,$f0
  411208:	8fbc0018 	lw	gp,24(sp)
  41120c:	c7b00024 	lwc1	$f16,36(sp)
  411210:	8f81806c 	lw	at,-32660(gp)
  411214:	c7b20020 	lwc1	$f18,32(sp)
  411218:	e430662c 	swc1	$f16,26156(at)
  41121c:	8fbf001c 	lw	ra,28(sp)
  411220:	8f81806c 	lw	at,-32660(gp)
  411224:	27bd0028 	addiu	sp,sp,40
  411228:	03e00008 	jr	ra
  41122c:	e4326630 	swc1	$f18,26160(at)
