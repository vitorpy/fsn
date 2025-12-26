# Function: FUN_0040fae8
# Address: 0x0040fae8 - 0x0040fba8
# Size: 0xc0 (192 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040fae8 <activeWorkProc+0x904>:
  40fae8:	3c1c0fc1 	lui	gp,0xfc1
  40faec:	279ce048 	addiu	gp,gp,-8120
  40faf0:	0399e021 	addu	gp,gp,t9
  40faf4:	27bdffd8 	addiu	sp,sp,-40
  40faf8:	8f998018 	lw	t9,-32744(gp)
  40fafc:	afa40028 	sw	a0,40(sp)
  40fb00:	afbf001c 	sw	ra,28(sp)
  40fb04:	afa5002c 	sw	a1,44(sp)
  40fb08:	afa60030 	sw	a2,48(sp)
  40fb0c:	00a02025 	move	a0,a1
  40fb10:	2739f080 	addiu	t9,t9,-3968
  40fb14:	afbc0018 	sw	gp,24(sp)
  40fb18:	afa70034 	sw	a3,52(sp)
  40fb1c:	27a50024 	addiu	a1,sp,36
  40fb20:	0320f809 	jalr	t9
  40fb24:	27a60020 	addiu	a2,sp,32
  40fb28:	8fbc0018 	lw	gp,24(sp)
  40fb2c:	c7a40024 	lwc1	$f4,36(sp)
  40fb30:	8f818068 	lw	at,-32664(gp)
  40fb34:	460021a1 	cvt.d.s	$f6,$f4
  40fb38:	c4280158 	lwc1	$f8,344(at)
  40fb3c:	8f818068 	lw	at,-32664(gp)
  40fb40:	460042a1 	cvt.d.s	$f10,$f8
  40fb44:	c7a00020 	lwc1	$f0,32(sp)
  40fb48:	c428015c 	lwc1	$f8,348(at)
  40fb4c:	462a3401 	sub.d	$f16,$f6,$f10
  40fb50:	8f998018 	lw	t9,-32744(gp)
  40fb54:	46000121 	cvt.d.s	$f4,$f0
  40fb58:	460041a1 	cvt.d.s	$f6,$f8
  40fb5c:	46262281 	sub.d	$f10,$f4,$f6
  40fb60:	8f81806c 	lw	at,-32660(gp)
  40fb64:	462084a0 	cvt.s.d	$f18,$f16
  40fb68:	8f848018 	lw	a0,-32744(gp)
  40fb6c:	46205020 	cvt.s.d	$f0,$f10
  40fb70:	8f85806c 	lw	a1,-32660(gp)
  40fb74:	e7b20024 	swc1	$f18,36(sp)
  40fb78:	46000421 	cvt.d.s	$f16,$f0
  40fb7c:	462084a0 	cvt.s.d	$f18,$f16
  40fb80:	2739f150 	addiu	t9,t9,-3760
  40fb84:	e7a00020 	swc1	$f0,32(sp)
  40fb88:	e43265ec 	swc1	$f18,26092(at)
  40fb8c:	2484f20c 	addiu	a0,a0,-3572
  40fb90:	0320f809 	jalr	t9
  40fb94:	24a565e0 	addiu	a1,a1,26080
  40fb98:	8fbf001c 	lw	ra,28(sp)
  40fb9c:	8fbc0018 	lw	gp,24(sp)
  40fba0:	03e00008 	jr	ra
  40fba4:	27bd0028 	addiu	sp,sp,40
