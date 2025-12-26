# Function: FUN_0040bdb4
# Address: 0x0040bdb4 - 0x0040bf94
# Size: 0x1e0 (480 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040bdb4 <setOverlayWindow+0x198>:
  40bdb4:	3c1c0fc1 	lui	gp,0xfc1
  40bdb8:	279c1d7c 	addiu	gp,gp,7548
  40bdbc:	0399e021 	addu	gp,gp,t9
  40bdc0:	27bdffe0 	addiu	sp,sp,-32
  40bdc4:	8f99851c 	lw	t9,-31460(gp)
  40bdc8:	afbf001c 	sw	ra,28(sp)
  40bdcc:	afb00014 	sw	s0,20(sp)
  40bdd0:	00c08025 	move	s0,a2
  40bdd4:	afbc0018 	sw	gp,24(sp)
  40bdd8:	afa40020 	sw	a0,32(sp)
  40bddc:	0320f809 	jalr	t9
  40bde0:	afa50024 	sw	a1,36(sp)
  40bde4:	8fbc0018 	lw	gp,24(sp)
  40bde8:	00000000 	nop
  40bdec:	8f998770 	lw	t9,-30864(gp)
  40bdf0:	00000000 	nop
  40bdf4:	0320f809 	jalr	t9
  40bdf8:	00000000 	nop
  40bdfc:	8fbc0018 	lw	gp,24(sp)
  40be00:	8fa40020 	lw	a0,32(sp)
  40be04:	8f998778 	lw	t9,-30856(gp)
  40be08:	24050001 	li	a1,1
  40be0c:	0320f809 	jalr	t9
  40be10:	00000000 	nop
  40be14:	8fbc0018 	lw	gp,24(sp)
  40be18:	960e0010 	lhu	t6,16(s0)
  40be1c:	8f83897c 	lw	v1,-30340(gp)
  40be20:	00000000 	nop
  40be24:	8c6f0000 	lw	t7,0(v1)
  40be28:	00000000 	nop
  40be2c:	adee002c 	sw	t6,44(t7)
  40be30:	96180012 	lhu	t8,18(s0)
  40be34:	8c790000 	lw	t9,0(v1)
  40be38:	00000000 	nop
  40be3c:	af380030 	sw	t8,48(t9)
  40be40:	8c620000 	lw	v0,0(v1)
  40be44:	00000000 	nop
  40be48:	8c48002c 	lw	t0,44(v0)
  40be4c:	8c490030 	lw	t1,48(v0)
  40be50:	44882000 	mtc1	t0,$f4
  40be54:	44895000 	mtc1	t1,$f10
  40be58:	468021a0 	cvt.s.w	$f6,$f4
  40be5c:	46805420 	cvt.s.w	$f16,$f10
  40be60:	460084a1 	cvt.d.s	$f18,$f16
  40be64:	46003221 	cvt.d.s	$f8,$f6
  40be68:	00000000 	nop
  40be6c:	46324103 	div.d	$f4,$f8,$f18
  40be70:	462021a0 	cvt.s.d	$f6,$f4
  40be74:	e4460034 	swc1	$f6,52(v0)
  40be78:	8f998524 	lw	t9,-31452(gp)
  40be7c:	00000000 	nop
  40be80:	0320f809 	jalr	t9
  40be84:	00000000 	nop
  40be88:	8fbc0018 	lw	gp,24(sp)
  40be8c:	00000000 	nop
  40be90:	8f998520 	lw	t9,-31456(gp)
  40be94:	00000000 	nop
  40be98:	0320f809 	jalr	t9
  40be9c:	00000000 	nop
  40bea0:	8fbc0018 	lw	gp,24(sp)
  40bea4:	86050010 	lh	a1,16(s0)
  40bea8:	86070012 	lh	a3,18(s0)
  40beac:	8f998354 	lw	t9,-31916(gp)
  40beb0:	24a5ffff 	addiu	a1,a1,-1
  40beb4:	24e7ffff 	addiu	a3,a3,-1
  40beb8:	00076400 	sll	t4,a3,0x10
  40bebc:	00055400 	sll	t2,a1,0x10
  40bec0:	000a2c03 	sra	a1,t2,0x10
  40bec4:	000c3c03 	sra	a3,t4,0x10
  40bec8:	00002025 	move	a0,zero
  40becc:	0320f809 	jalr	t9
  40bed0:	00003025 	move	a2,zero
  40bed4:	8fbc0018 	lw	gp,24(sp)
  40bed8:	00002025 	move	a0,zero
  40bedc:	8f998304 	lw	t9,-31996(gp)
  40bee0:	00000000 	nop
  40bee4:	0320f809 	jalr	t9
  40bee8:	00000000 	nop
  40beec:	8fbc0018 	lw	gp,24(sp)
  40bef0:	00000000 	nop
  40bef4:	8f998308 	lw	t9,-31992(gp)
  40bef8:	00000000 	nop
  40befc:	0320f809 	jalr	t9
  40bf00:	00000000 	nop
  40bf04:	8fbc0018 	lw	gp,24(sp)
  40bf08:	00000000 	nop
  40bf0c:	8f99851c 	lw	t9,-31460(gp)
  40bf10:	00000000 	nop
  40bf14:	0320f809 	jalr	t9
  40bf18:	00000000 	nop
  40bf1c:	8fbc0018 	lw	gp,24(sp)
  40bf20:	86050010 	lh	a1,16(s0)
  40bf24:	86070012 	lh	a3,18(s0)
  40bf28:	8f998354 	lw	t9,-31916(gp)
  40bf2c:	24a5ffff 	addiu	a1,a1,-1
  40bf30:	24e7ffff 	addiu	a3,a3,-1
  40bf34:	0007c400 	sll	t8,a3,0x10
  40bf38:	00057400 	sll	t6,a1,0x10
  40bf3c:	000e2c03 	sra	a1,t6,0x10
  40bf40:	00183c03 	sra	a3,t8,0x10
  40bf44:	00002025 	move	a0,zero
  40bf48:	0320f809 	jalr	t9
  40bf4c:	00003025 	move	a2,zero
  40bf50:	8fbc0018 	lw	gp,24(sp)
  40bf54:	00000000 	nop
  40bf58:	8f998534 	lw	t9,-31436(gp)
  40bf5c:	00000000 	nop
  40bf60:	0320f809 	jalr	t9
  40bf64:	00000000 	nop
  40bf68:	8fbc0018 	lw	gp,24(sp)
  40bf6c:	00000000 	nop
  40bf70:	8f998774 	lw	t9,-30860(gp)
  40bf74:	00000000 	nop
  40bf78:	0320f809 	jalr	t9
  40bf7c:	00000000 	nop
  40bf80:	8fbf001c 	lw	ra,28(sp)
  40bf84:	8fbc0018 	lw	gp,24(sp)
  40bf88:	8fb00014 	lw	s0,20(sp)
  40bf8c:	03e00008 	jr	ra
  40bf90:	27bd0020 	addiu	sp,sp,32
