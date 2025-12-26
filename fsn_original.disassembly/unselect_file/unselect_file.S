# Function: unselect_file
# Address: 0x0041d914 - 0x0041da38
# Size: 0x124 (292 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041d914 <unselect_file>:
  41d914:	3c1c0fc0 	lui	gp,0xfc0
  41d918:	279c021c 	addiu	gp,gp,540
  41d91c:	0399e021 	addu	gp,gp,t9
  41d920:	8f8e897c 	lw	t6,-30340(gp)
  41d924:	27bdffa8 	addiu	sp,sp,-88
  41d928:	8dce0000 	lw	t6,0(t6)
  41d92c:	afbf001c 	sw	ra,28(sp)
  41d930:	afbc0018 	sw	gp,24(sp)
  41d934:	8dcf0048 	lw	t7,72(t6)
  41d938:	00000000 	nop
  41d93c:	11e0003b 	beqz	t7,41da2c <unselect_file+0x118>
  41d940:	8fbf001c 	lw	ra,28(sp)
  41d944:	8f84806c 	lw	a0,-32660(gp)
  41d948:	8f998318 	lw	t9,-31976(gp)
  41d94c:	8c846b9c 	lw	a0,27548(a0)
  41d950:	0320f809 	jalr	t9
  41d954:	00002825 	move	a1,zero
  41d958:	8fbc0018 	lw	gp,24(sp)
  41d95c:	00002825 	move	a1,zero
  41d960:	8f84806c 	lw	a0,-32660(gp)
  41d964:	8f998318 	lw	t9,-31976(gp)
  41d968:	8c846b94 	lw	a0,27540(a0)
  41d96c:	0320f809 	jalr	t9
  41d970:	00000000 	nop
  41d974:	8fbc0018 	lw	gp,24(sp)
  41d978:	00000000 	nop
  41d97c:	8f83897c 	lw	v1,-30340(gp)
  41d980:	00000000 	nop
  41d984:	8c780000 	lw	t8,0(v1)
  41d988:	00000000 	nop
  41d98c:	8f020048 	lw	v0,72(t8)
  41d990:	00000000 	nop
  41d994:	90590028 	lbu	t9,40(v0)
  41d998:	00000000 	nop
  41d99c:	3328ffef 	andi	t0,t9,0xffef
  41d9a0:	a0480028 	sb	t0,40(v0)
  41d9a4:	8c690000 	lw	t1,0(v1)
  41d9a8:	00000000 	nop
  41d9ac:	ad200048 	sw	zero,72(t1)
  41d9b0:	8f99862c 	lw	t9,-31188(gp)
  41d9b4:	00000000 	nop
  41d9b8:	0320f809 	jalr	t9
  41d9bc:	00000000 	nop
  41d9c0:	8fbc0018 	lw	gp,24(sp)
  41d9c4:	afa00030 	sw	zero,48(sp)
  41d9c8:	8f8a80a0 	lw	t2,-32608(gp)
  41d9cc:	8f84806c 	lw	a0,-32660(gp)
  41d9d0:	8f998340 	lw	t9,-31936(gp)
  41d9d4:	254a2589 	addiu	t2,t2,9609
  41d9d8:	8c846b84 	lw	a0,27524(a0)
  41d9dc:	afaa002c 	sw	t2,44(sp)
  41d9e0:	27a5002c 	addiu	a1,sp,44
  41d9e4:	0320f809 	jalr	t9
  41d9e8:	24060001 	li	a2,1
  41d9ec:	8fbc0018 	lw	gp,24(sp)
  41d9f0:	27a5002c 	addiu	a1,sp,44
  41d9f4:	8f84806c 	lw	a0,-32660(gp)
  41d9f8:	8f998340 	lw	t9,-31936(gp)
  41d9fc:	8c846b88 	lw	a0,27528(a0)
  41da00:	0320f809 	jalr	t9
  41da04:	24060001 	li	a2,1
  41da08:	8fbc0018 	lw	gp,24(sp)
  41da0c:	00000000 	nop
  41da10:	8f998630 	lw	t9,-31184(gp)
  41da14:	00000000 	nop
  41da18:	0320f809 	jalr	t9
  41da1c:	00000000 	nop
  41da20:	8fbc0018 	lw	gp,24(sp)
  41da24:	00000000 	nop
  41da28:	8fbf001c 	lw	ra,28(sp)
  41da2c:	27bd0058 	addiu	sp,sp,88
  41da30:	03e00008 	jr	ra
  41da34:	00000000 	nop
