# Function: FUN_0041ef30
# Address: 0x0041ef30 - 0x0041f054
# Size: 0x124 (292 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041ef30 <editCB+0xe0c>:
  41ef30:	3c1c0fc0 	lui	gp,0xfc0
  41ef34:	279cec00 	addiu	gp,gp,-5120
  41ef38:	0399e021 	addu	gp,gp,t9
  41ef3c:	27bdffa8 	addiu	sp,sp,-88
  41ef40:	8f8e897c 	lw	t6,-30340(gp)
  41ef44:	afbf001c 	sw	ra,28(sp)
  41ef48:	8dce0000 	lw	t6,0(t6)
  41ef4c:	afbc0018 	sw	gp,24(sp)
  41ef50:	afb00014 	sw	s0,20(sp)
  41ef54:	afa40058 	sw	a0,88(sp)
  41ef58:	afa5005c 	sw	a1,92(sp)
  41ef5c:	8dd00044 	lw	s0,68(t6)
  41ef60:	00000000 	nop
  41ef64:	12000038 	beqz	s0,41f048 <editCB+0xf24>
  41ef68:	8fbf001c 	lw	ra,28(sp)
  41ef6c:	8ccf0008 	lw	t7,8(a2)
  41ef70:	00000000 	nop
  41ef74:	11e00008 	beqz	t7,41ef98 <editCB+0xe74>
  41ef78:	00000000 	nop
  41ef7c:	8f9985ec 	lw	t9,-31252(gp)
  41ef80:	02002025 	move	a0,s0
  41ef84:	0320f809 	jalr	t9
  41ef88:	00000000 	nop
  41ef8c:	8fbc0018 	lw	gp,24(sp)
  41ef90:	10000007 	b	41efb0 <editCB+0xe8c>
  41ef94:	00000000 	nop
  41ef98:	8f9985f0 	lw	t9,-31248(gp)
  41ef9c:	02002025 	move	a0,s0
  41efa0:	0320f809 	jalr	t9
  41efa4:	00000000 	nop
  41efa8:	8fbc0018 	lw	gp,24(sp)
  41efac:	00000000 	nop
  41efb0:	8f99801c 	lw	t9,-32740(gp)
  41efb4:	00000000 	nop
  41efb8:	2739c3e4 	addiu	t9,t9,-15388
  41efbc:	0320f809 	jalr	t9
  41efc0:	00000000 	nop
  41efc4:	8fbc0018 	lw	gp,24(sp)
  41efc8:	27a5002c 	addiu	a1,sp,44
  41efcc:	8f98897c 	lw	t8,-30340(gp)
  41efd0:	24060001 	li	a2,1
  41efd4:	8f180000 	lw	t8,0(t8)
  41efd8:	00000000 	nop
  41efdc:	8f190044 	lw	t9,68(t8)
  41efe0:	00000000 	nop
  41efe4:	16190018 	bne	s0,t9,41f048 <editCB+0xf24>
  41efe8:	8fbf001c 	lw	ra,28(sp)
  41efec:	8f8880a0 	lw	t0,-32608(gp)
  41eff0:	8f84806c 	lw	a0,-32660(gp)
  41eff4:	25082589 	addiu	t0,t0,9609
  41eff8:	afa8002c 	sw	t0,44(sp)
  41effc:	8e090074 	lw	t1,116(s0)
  41f000:	8f998340 	lw	t9,-31936(gp)
  41f004:	00095340 	sll	t2,t1,0xd
  41f008:	000a5fc2 	srl	t3,t2,0x1f
  41f00c:	8c846b58 	lw	a0,27480(a0)
  41f010:	0320f809 	jalr	t9
  41f014:	afab0030 	sw	t3,48(sp)
  41f018:	8fbc0018 	lw	gp,24(sp)
  41f01c:	8e050074 	lw	a1,116(s0)
  41f020:	8f84806c 	lw	a0,-32660(gp)
  41f024:	8f998318 	lw	t9,-31976(gp)
  41f028:	00056340 	sll	t4,a1,0xd
  41f02c:	000c6fc2 	srl	t5,t4,0x1f
  41f030:	8c846b54 	lw	a0,27476(a0)
  41f034:	0320f809 	jalr	t9
  41f038:	2da50001 	sltiu	a1,t5,1
  41f03c:	8fbc0018 	lw	gp,24(sp)
  41f040:	00000000 	nop
  41f044:	8fbf001c 	lw	ra,28(sp)
  41f048:	8fb00014 	lw	s0,20(sp)
  41f04c:	03e00008 	jr	ra
  41f050:	27bd0058 	addiu	sp,sp,88
