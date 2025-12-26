# Function: select_file
# Address: 0x0041da38 - 0x0041db94
# Size: 0x15c (348 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041da38 <select_file>:
  41da38:	3c1c0fc0 	lui	gp,0xfc0
  41da3c:	279c00f8 	addiu	gp,gp,248
  41da40:	0399e021 	addu	gp,gp,t9
  41da44:	8f8e897c 	lw	t6,-30340(gp)
  41da48:	27bdffa8 	addiu	sp,sp,-88
  41da4c:	8dce0000 	lw	t6,0(t6)
  41da50:	afbf001c 	sw	ra,28(sp)
  41da54:	afbc0018 	sw	gp,24(sp)
  41da58:	afb00014 	sw	s0,20(sp)
  41da5c:	8dc20048 	lw	v0,72(t6)
  41da60:	00808025 	move	s0,a0
  41da64:	10400005 	beqz	v0,41da7c <select_file+0x44>
  41da68:	00000000 	nop
  41da6c:	904f0028 	lbu	t7,40(v0)
  41da70:	00000000 	nop
  41da74:	31f8ffef 	andi	t8,t7,0xffef
  41da78:	a0580028 	sb	t8,40(v0)
  41da7c:	8f84806c 	lw	a0,-32660(gp)
  41da80:	8f998318 	lw	t9,-31976(gp)
  41da84:	8c846b9c 	lw	a0,27548(a0)
  41da88:	0320f809 	jalr	t9
  41da8c:	24050001 	li	a1,1
  41da90:	8fbc0018 	lw	gp,24(sp)
  41da94:	24050001 	li	a1,1
  41da98:	8f84806c 	lw	a0,-32660(gp)
  41da9c:	8f998318 	lw	t9,-31976(gp)
  41daa0:	8c846b94 	lw	a0,27540(a0)
  41daa4:	0320f809 	jalr	t9
  41daa8:	00000000 	nop
  41daac:	8fbc0018 	lw	gp,24(sp)
  41dab0:	92080028 	lbu	t0,40(s0)
  41dab4:	8f83897c 	lw	v1,-30340(gp)
  41dab8:	35090010 	ori	t1,t0,0x10
  41dabc:	a2090028 	sb	t1,40(s0)
  41dac0:	8c6a0000 	lw	t2,0(v1)
  41dac4:	00000000 	nop
  41dac8:	ad500048 	sw	s0,72(t2)
  41dacc:	8c620000 	lw	v0,0(v1)
  41dad0:	8f998134 	lw	t9,-32460(gp)
  41dad4:	2444044c 	addiu	a0,v0,1100
  41dad8:	0320f809 	jalr	t9
  41dadc:	2445004c 	addiu	a1,v0,76
  41dae0:	8fbc0018 	lw	gp,24(sp)
  41dae4:	8e050000 	lw	a1,0(s0)
  41dae8:	8f84897c 	lw	a0,-30340(gp)
  41daec:	8f99831c 	lw	t9,-31972(gp)
  41daf0:	8c840000 	lw	a0,0(a0)
  41daf4:	0320f809 	jalr	t9
  41daf8:	2484044c 	addiu	a0,a0,1100
  41dafc:	8fbc0018 	lw	gp,24(sp)
  41db00:	00000000 	nop
  41db04:	8f99862c 	lw	t9,-31188(gp)
  41db08:	00000000 	nop
  41db0c:	0320f809 	jalr	t9
  41db10:	00000000 	nop
  41db14:	8fbc0018 	lw	gp,24(sp)
  41db18:	27a50028 	addiu	a1,sp,40
  41db1c:	8f8b80a0 	lw	t3,-32608(gp)
  41db20:	8f84806c 	lw	a0,-32660(gp)
  41db24:	256b2589 	addiu	t3,t3,9609
  41db28:	afab0028 	sw	t3,40(sp)
  41db2c:	8e0c0028 	lw	t4,40(s0)
  41db30:	8f998340 	lw	t9,-31936(gp)
  41db34:	000c6a40 	sll	t5,t4,0x9
  41db38:	000d77c2 	srl	t6,t5,0x1f
  41db3c:	8c846b84 	lw	a0,27524(a0)
  41db40:	afae002c 	sw	t6,44(sp)
  41db44:	0320f809 	jalr	t9
  41db48:	24060001 	li	a2,1
  41db4c:	8fbc0018 	lw	gp,24(sp)
  41db50:	27a50028 	addiu	a1,sp,40
  41db54:	8f84806c 	lw	a0,-32660(gp)
  41db58:	8f998340 	lw	t9,-31936(gp)
  41db5c:	8c846b88 	lw	a0,27528(a0)
  41db60:	0320f809 	jalr	t9
  41db64:	24060001 	li	a2,1
  41db68:	8fbc0018 	lw	gp,24(sp)
  41db6c:	00000000 	nop
  41db70:	8f998630 	lw	t9,-31184(gp)
  41db74:	00000000 	nop
  41db78:	0320f809 	jalr	t9
  41db7c:	00000000 	nop
  41db80:	8fbf001c 	lw	ra,28(sp)
  41db84:	8fbc0018 	lw	gp,24(sp)
  41db88:	8fb00014 	lw	s0,20(sp)
  41db8c:	03e00008 	jr	ra
  41db90:	27bd0058 	addiu	sp,sp,88
