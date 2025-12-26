# Function: addMark
# Address: 0x0042eef8 - 0x0042f124
# Size: 0x22c (556 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042eef8 <addMark>:
  42eef8:	3c1c0fbf 	lui	gp,0xfbf
  42eefc:	279cec38 	addiu	gp,gp,-5064
  42ef00:	0399e021 	addu	gp,gp,t9
  42ef04:	27bdffd8 	addiu	sp,sp,-40
  42ef08:	afb00018 	sw	s0,24(sp)
  42ef0c:	8f90806c 	lw	s0,-32660(gp)
  42ef10:	8f86806c 	lw	a2,-32660(gp)
  42ef14:	26109524 	addiu	s0,s0,-27356
  42ef18:	24c69528 	addiu	a2,a2,-27352
  42ef1c:	8cc20000 	lw	v0,0(a2)
  42ef20:	8e030000 	lw	v1,0(s0)
  42ef24:	afbf0024 	sw	ra,36(sp)
  42ef28:	afbc0020 	sw	gp,32(sp)
  42ef2c:	afb1001c 	sw	s1,28(sp)
  42ef30:	afa40028 	sw	a0,40(sp)
  42ef34:	1462001f 	bne	v1,v0,42efb4 <addMark+0xbc>
  42ef38:	afa5002c 	sw	a1,44(sp)
  42ef3c:	1440000e 	bnez	v0,42ef78 <addMark+0x80>
  42ef40:	240e0008 	li	t6,8
  42ef44:	acce0000 	sw	t6,0(a2)
  42ef48:	8f9984c0 	lw	t9,-31552(gp)
  42ef4c:	000e2180 	sll	a0,t6,0x6
  42ef50:	0320f809 	jalr	t9
  42ef54:	00000000 	nop
  42ef58:	8fbc0020 	lw	gp,32(sp)
  42ef5c:	00000000 	nop
  42ef60:	8f91806c 	lw	s1,-32660(gp)
  42ef64:	8f86806c 	lw	a2,-32660(gp)
  42ef68:	26319520 	addiu	s1,s1,-27360
  42ef6c:	ae220000 	sw	v0,0(s1)
  42ef70:	10000005 	b	42ef88 <addMark+0x90>
  42ef74:	24c69528 	addiu	a2,a2,-27352
  42ef78:	8f91806c 	lw	s1,-32660(gp)
  42ef7c:	24580008 	addiu	t8,v0,8
  42ef80:	acd80000 	sw	t8,0(a2)
  42ef84:	26319520 	addiu	s1,s1,-27360
  42ef88:	8cc50000 	lw	a1,0(a2)
  42ef8c:	8e240000 	lw	a0,0(s1)
  42ef90:	0005c980 	sll	t9,a1,0x6
  42ef94:	03202825 	move	a1,t9
  42ef98:	8f99815c 	lw	t9,-32420(gp)
  42ef9c:	00000000 	nop
  42efa0:	0320f809 	jalr	t9
  42efa4:	00000000 	nop
  42efa8:	8fbc0020 	lw	gp,32(sp)
  42efac:	8e030000 	lw	v1,0(s0)
  42efb0:	ae220000 	sw	v0,0(s1)
  42efb4:	8f91806c 	lw	s1,-32660(gp)
  42efb8:	8fab002c 	lw	t3,44(sp)
  42efbc:	26319520 	addiu	s1,s1,-27360
  42efc0:	8e280000 	lw	t0,0(s1)
  42efc4:	00034980 	sll	t1,v1,0x6
  42efc8:	256d0030 	addiu	t5,t3,48
  42efcc:	01095021 	addu	t2,t0,t1
  42efd0:	8d610000 	lw	at,0(t3)
  42efd4:	256b000c 	addiu	t3,t3,12
  42efd8:	ad410000 	sw	at,0(t2)
  42efdc:	8d61fff8 	lw	at,-8(t3)
  42efe0:	254a000c 	addiu	t2,t2,12
  42efe4:	ad41fff8 	sw	at,-8(t2)
  42efe8:	8d61fffc 	lw	at,-4(t3)
  42efec:	156dfff8 	bne	t3,t5,42efd0 <addMark+0xd8>
  42eff0:	ad41fffc 	sw	at,-4(t2)
  42eff4:	8d610000 	lw	at,0(t3)
  42eff8:	00000000 	nop
  42effc:	ad410000 	sw	at,0(t2)
  42f000:	8d6d0004 	lw	t5,4(t3)
  42f004:	00000000 	nop
  42f008:	ad4d0004 	sw	t5,4(t2)
  42f00c:	8fae0028 	lw	t6,40(sp)
  42f010:	00000000 	nop
  42f014:	11c00018 	beqz	t6,42f078 <addMark+0x180>
  42f018:	00000000 	nop
  42f01c:	8f9983e0 	lw	t9,-31776(gp)
  42f020:	01c02025 	move	a0,t6
  42f024:	0320f809 	jalr	t9
  42f028:	00000000 	nop
  42f02c:	8fbc0020 	lw	gp,32(sp)
  42f030:	24440001 	addiu	a0,v0,1
  42f034:	8f9984c0 	lw	t9,-31552(gp)
  42f038:	00000000 	nop
  42f03c:	0320f809 	jalr	t9
  42f040:	00000000 	nop
  42f044:	8fbc0020 	lw	gp,32(sp)
  42f048:	8fa50028 	lw	a1,40(sp)
  42f04c:	8f998134 	lw	t9,-32460(gp)
  42f050:	00402025 	move	a0,v0
  42f054:	0320f809 	jalr	t9
  42f058:	00000000 	nop
  42f05c:	8e180000 	lw	t8,0(s0)
  42f060:	8e2f0000 	lw	t7,0(s1)
  42f064:	0018c980 	sll	t9,t8,0x6
  42f068:	8fbc0020 	lw	gp,32(sp)
  42f06c:	01f94021 	addu	t0,t7,t9
  42f070:	10000006 	b	42f08c <addMark+0x194>
  42f074:	ad020038 	sw	v0,56(t0)
  42f078:	8e0c0000 	lw	t4,0(s0)
  42f07c:	8e290000 	lw	t1,0(s1)
  42f080:	000c6980 	sll	t5,t4,0x6
  42f084:	012d5821 	addu	t3,t1,t5
  42f088:	ad600038 	sw	zero,56(t3)
  42f08c:	8f998170 	lw	t9,-32400(gp)
  42f090:	8fa40028 	lw	a0,40(sp)
  42f094:	0320f809 	jalr	t9
  42f098:	00000000 	nop
  42f09c:	8e0e0000 	lw	t6,0(s0)
  42f0a0:	8e2a0000 	lw	t2,0(s1)
  42f0a4:	000ec180 	sll	t8,t6,0x6
  42f0a8:	8fbc0020 	lw	gp,32(sp)
  42f0ac:	01587821 	addu	t7,t2,t8
  42f0b0:	ade2003c 	sw	v0,60(t7)
  42f0b4:	8e080000 	lw	t0,0(s0)
  42f0b8:	8e390000 	lw	t9,0(s1)
  42f0bc:	00086180 	sll	t4,t0,0x6
  42f0c0:	8f84806c 	lw	a0,-32660(gp)
  42f0c4:	032c4821 	addu	t1,t9,t4
  42f0c8:	8f998160 	lw	t9,-32416(gp)
  42f0cc:	8d25003c 	lw	a1,60(t1)
  42f0d0:	8c846ec4 	lw	a0,28356(a0)
  42f0d4:	0320f809 	jalr	t9
  42f0d8:	00003025 	move	a2,zero
  42f0dc:	8e0d0000 	lw	t5,0(s0)
  42f0e0:	8fbc0020 	lw	gp,32(sp)
  42f0e4:	24010001 	li	at,1
  42f0e8:	25ab0001 	addiu	t3,t5,1
  42f0ec:	15610008 	bne	t3,at,42f110 <addMark+0x218>
  42f0f0:	ae0b0000 	sw	t3,0(s0)
  42f0f4:	8f84806c 	lw	a0,-32660(gp)
  42f0f8:	8f998318 	lw	t9,-31976(gp)
  42f0fc:	8c846ec0 	lw	a0,28352(a0)
  42f100:	0320f809 	jalr	t9
  42f104:	24050001 	li	a1,1
  42f108:	8fbc0020 	lw	gp,32(sp)
  42f10c:	00000000 	nop
  42f110:	8fbf0024 	lw	ra,36(sp)
  42f114:	8fb00018 	lw	s0,24(sp)
  42f118:	8fb1001c 	lw	s1,28(sp)
  42f11c:	03e00008 	jr	ra
  42f120:	27bd0028 	addiu	sp,sp,40
