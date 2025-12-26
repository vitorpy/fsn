# Function: FUN_0040da94
# Address: 0x0040da94 - 0x0040de38
# Size: 0x3a4 (932 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040da94 <setScales+0x29c>:
  40da94:	3c1c0fc1 	lui	gp,0xfc1
  40da98:	279c009c 	addiu	gp,gp,156
  40da9c:	0399e021 	addu	gp,gp,t9
  40daa0:	27bdff50 	addiu	sp,sp,-176
  40daa4:	afbe0038 	sw	s8,56(sp)
  40daa8:	8f9e806c 	lw	s8,-32660(gp)
  40daac:	8f818a1c 	lw	at,-30180(gp)
  40dab0:	240e0001 	li	t6,1
  40dab4:	27de6654 	addiu	s8,s8,26196
  40dab8:	a02e0000 	sb	t6,0(at)
  40dabc:	8fc40000 	lw	a0,0(s8)
  40dac0:	afbf003c 	sw	ra,60(sp)
  40dac4:	afbc0034 	sw	gp,52(sp)
  40dac8:	afb70030 	sw	s7,48(sp)
  40dacc:	afb6002c 	sw	s6,44(sp)
  40dad0:	afb50028 	sw	s5,40(sp)
  40dad4:	afb40024 	sw	s4,36(sp)
  40dad8:	afb30020 	sw	s3,32(sp)
  40dadc:	afb2001c 	sw	s2,28(sp)
  40dae0:	afb10018 	sw	s1,24(sp)
  40dae4:	148000ab 	bnez	a0,40dd94 <setScales+0x59c>
  40dae8:	afb00014 	sw	s0,20(sp)
  40daec:	8f9980a0 	lw	t9,-32608(gp)
  40daf0:	8f88806c 	lw	t0,-32660(gp)
  40daf4:	27391d8a 	addiu	t9,t9,7562
  40daf8:	8f8f80a0 	lw	t7,-32608(gp)
  40dafc:	8f8980a0 	lw	t1,-32608(gp)
  40db00:	8f8b80a0 	lw	t3,-32608(gp)
  40db04:	8f84806c 	lw	a0,-32660(gp)
  40db08:	afb90068 	sw	t9,104(sp)
  40db0c:	8f998508 	lw	t9,-31480(gp)
  40db10:	8f85805c 	lw	a1,-32676(gp)
  40db14:	8d086664 	lw	t0,26212(t0)
  40db18:	24180003 	li	t8,3
  40db1c:	240a0001 	li	t2,1
  40db20:	240c0001 	li	t4,1
  40db24:	25ef1d63 	addiu	t7,t7,7523
  40db28:	25292375 	addiu	t1,t1,9077
  40db2c:	256b1399 	addiu	t3,t3,5017
  40db30:	8c846660 	lw	a0,26208(a0)
  40db34:	afaf0060 	sw	t7,96(sp)
  40db38:	afb80064 	sw	t8,100(sp)
  40db3c:	afa90070 	sw	t1,112(sp)
  40db40:	afaa0074 	sw	t2,116(sp)
  40db44:	afab0078 	sw	t3,120(sp)
  40db48:	afac007c 	sw	t4,124(sp)
  40db4c:	27a60060 	addiu	a2,sp,96
  40db50:	24070004 	li	a3,4
  40db54:	24a5a4b0 	addiu	a1,a1,-23376
  40db58:	0320f809 	jalr	t9
  40db5c:	afa8006c 	sw	t0,108(sp)
  40db60:	8fbc0034 	lw	gp,52(sp)
  40db64:	afc20000 	sw	v0,0(s8)
  40db68:	8f9987a4 	lw	t9,-30812(gp)
  40db6c:	8f8589c8 	lw	a1,-30264(gp)
  40db70:	0320f809 	jalr	t9
  40db74:	00402025 	move	a0,v0
  40db78:	8fbc0034 	lw	gp,52(sp)
  40db7c:	8fc40000 	lw	a0,0(s8)
  40db80:	8f85805c 	lw	a1,-32676(gp)
  40db84:	8f9983d8 	lw	t9,-31784(gp)
  40db88:	27a60060 	addiu	a2,sp,96
  40db8c:	00003825 	move	a3,zero
  40db90:	0320f809 	jalr	t9
  40db94:	24a5a4b8 	addiu	a1,a1,-23368
  40db98:	8fbc0034 	lw	gp,52(sp)
  40db9c:	00402025 	move	a0,v0
  40dba0:	8f998388 	lw	t9,-31864(gp)
  40dba4:	00000000 	nop
  40dba8:	0320f809 	jalr	t9
  40dbac:	00000000 	nop
  40dbb0:	8fbc0034 	lw	gp,52(sp)
  40dbb4:	00008025 	move	s0,zero
  40dbb8:	8f9780a4 	lw	s7,-32604(gp)
  40dbbc:	8f9680a4 	lw	s6,-32604(gp)
  40dbc0:	8f94805c 	lw	s4,-32676(gp)
  40dbc4:	8f918a3c 	lw	s1,-30148(gp)
  40dbc8:	8f928a18 	lw	s2,-30184(gp)
  40dbcc:	24150007 	li	s5,7
  40dbd0:	27b30048 	addiu	s3,sp,72
  40dbd4:	26f70034 	addiu	s7,s7,52
  40dbd8:	26d600d6 	addiu	s6,s6,214
  40dbdc:	2694a4c4 	addiu	s4,s4,-23356
  40dbe0:	8f9983e4 	lw	t9,-31772(gp)
  40dbe4:	02602025 	move	a0,s3
  40dbe8:	02802825 	move	a1,s4
  40dbec:	0320f809 	jalr	t9
  40dbf0:	02003025 	move	a2,s0
  40dbf4:	8fbc0034 	lw	gp,52(sp)
  40dbf8:	8e2d0004 	lw	t5,4(s1)
  40dbfc:	8e2e0000 	lw	t6,0(s1)
  40dc00:	8f9983d8 	lw	t9,-31784(gp)
  40dc04:	8fc40000 	lw	a0,0(s8)
  40dc08:	afb60060 	sw	s6,96(sp)
  40dc0c:	afb70068 	sw	s7,104(sp)
  40dc10:	02602825 	move	a1,s3
  40dc14:	27a60060 	addiu	a2,sp,96
  40dc18:	24070002 	li	a3,2
  40dc1c:	afad0064 	sw	t5,100(sp)
  40dc20:	0320f809 	jalr	t9
  40dc24:	afae006c 	sw	t6,108(sp)
  40dc28:	26100001 	addiu	s0,s0,1
  40dc2c:	8fbc0034 	lw	gp,52(sp)
  40dc30:	26310010 	addiu	s1,s1,16
  40dc34:	26520004 	addiu	s2,s2,4
  40dc38:	1615ffe9 	bne	s0,s5,40dbe0 <setScales+0x3e8>
  40dc3c:	ae42fffc 	sw	v0,-4(s2)
  40dc40:	8f9984dc 	lw	t9,-31524(gp)
  40dc44:	8f848a18 	lw	a0,-30184(gp)
  40dc48:	0320f809 	jalr	t9
  40dc4c:	24050007 	li	a1,7
  40dc50:	8fbc0034 	lw	gp,52(sp)
  40dc54:	8fc40000 	lw	a0,0(s8)
  40dc58:	8f85805c 	lw	a1,-32676(gp)
  40dc5c:	8f9984fc 	lw	t9,-31492(gp)
  40dc60:	27a60060 	addiu	a2,sp,96
  40dc64:	00003825 	move	a3,zero
  40dc68:	0320f809 	jalr	t9
  40dc6c:	24a5a4cc 	addiu	a1,a1,-23348
  40dc70:	8fbc0034 	lw	gp,52(sp)
  40dc74:	00402025 	move	a0,v0
  40dc78:	8f998388 	lw	t9,-31864(gp)
  40dc7c:	00000000 	nop
  40dc80:	0320f809 	jalr	t9
  40dc84:	00000000 	nop
  40dc88:	8fbc0034 	lw	gp,52(sp)
  40dc8c:	8fc40000 	lw	a0,0(s8)
  40dc90:	8f828a40 	lw	v0,-30144(gp)
  40dc94:	8f85805c 	lw	a1,-32676(gp)
  40dc98:	8f9983d8 	lw	t9,-31784(gp)
  40dc9c:	8c4f0004 	lw	t7,4(v0)
  40dca0:	8c580000 	lw	t8,0(v0)
  40dca4:	afb60060 	sw	s6,96(sp)
  40dca8:	afb70068 	sw	s7,104(sp)
  40dcac:	27a60060 	addiu	a2,sp,96
  40dcb0:	24070002 	li	a3,2
  40dcb4:	24a5a4d8 	addiu	a1,a1,-23336
  40dcb8:	afaf0064 	sw	t7,100(sp)
  40dcbc:	0320f809 	jalr	t9
  40dcc0:	afb8006c 	sw	t8,108(sp)
  40dcc4:	8fbc0034 	lw	gp,52(sp)
  40dcc8:	00402025 	move	a0,v0
  40dccc:	8f838a14 	lw	v1,-30188(gp)
  40dcd0:	00000000 	nop
  40dcd4:	ac620000 	sw	v0,0(v1)
  40dcd8:	8f998388 	lw	t9,-31864(gp)
  40dcdc:	00000000 	nop
  40dce0:	0320f809 	jalr	t9
  40dce4:	00000000 	nop
  40dce8:	8fbc0034 	lw	gp,52(sp)
  40dcec:	8fd80000 	lw	t8,0(s8)
  40dcf0:	8f9980a0 	lw	t9,-32608(gp)
  40dcf4:	8f8a806c 	lw	t2,-32660(gp)
  40dcf8:	27391d63 	addiu	t9,t9,7523
  40dcfc:	8f8980a0 	lw	t1,-32608(gp)
  40dd00:	8f8b80a0 	lw	t3,-32608(gp)
  40dd04:	8f8d80a0 	lw	t5,-32608(gp)
  40dd08:	8f8f80a0 	lw	t7,-32608(gp)
  40dd0c:	8f84806c 	lw	a0,-32660(gp)
  40dd10:	afb90060 	sw	t9,96(sp)
  40dd14:	8f9984fc 	lw	t9,-31492(gp)
  40dd18:	8f85805c 	lw	a1,-32676(gp)
  40dd1c:	8d4a6664 	lw	t2,26212(t2)
  40dd20:	24080003 	li	t0,3
  40dd24:	240c0001 	li	t4,1
  40dd28:	240e0003 	li	t6,3
  40dd2c:	25291d8a 	addiu	t1,t1,7562
  40dd30:	256b2375 	addiu	t3,t3,9077
  40dd34:	25ad1399 	addiu	t5,t5,5017
  40dd38:	25ef13eb 	addiu	t7,t7,5099
  40dd3c:	8c846660 	lw	a0,26208(a0)
  40dd40:	afa80064 	sw	t0,100(sp)
  40dd44:	afa90068 	sw	t1,104(sp)
  40dd48:	afab0070 	sw	t3,112(sp)
  40dd4c:	afac0074 	sw	t4,116(sp)
  40dd50:	afad0078 	sw	t5,120(sp)
  40dd54:	afae007c 	sw	t6,124(sp)
  40dd58:	afaf0080 	sw	t7,128(sp)
  40dd5c:	27a60060 	addiu	a2,sp,96
  40dd60:	24070005 	li	a3,5
  40dd64:	afb80084 	sw	t8,132(sp)
  40dd68:	24a5a4e8 	addiu	a1,a1,-23320
  40dd6c:	0320f809 	jalr	t9
  40dd70:	afaa006c 	sw	t2,108(sp)
  40dd74:	8fbc0034 	lw	gp,52(sp)
  40dd78:	00000000 	nop
  40dd7c:	8f90806c 	lw	s0,-32660(gp)
  40dd80:	8f84806c 	lw	a0,-32660(gp)
  40dd84:	26106658 	addiu	s0,s0,26200
  40dd88:	ae020000 	sw	v0,0(s0)
  40dd8c:	8c846654 	lw	a0,26196(a0)
  40dd90:	00000000 	nop
  40dd94:	8f90806c 	lw	s0,-32660(gp)
  40dd98:	8f998388 	lw	t9,-31864(gp)
  40dd9c:	26106658 	addiu	s0,s0,26200
  40dda0:	0320f809 	jalr	t9
  40dda4:	00000000 	nop
  40dda8:	8fbc0034 	lw	gp,52(sp)
  40ddac:	8e040000 	lw	a0,0(s0)
  40ddb0:	8f998388 	lw	t9,-31864(gp)
  40ddb4:	00000000 	nop
  40ddb8:	0320f809 	jalr	t9
  40ddbc:	00000000 	nop
  40ddc0:	8fbc0034 	lw	gp,52(sp)
  40ddc4:	8e0a0000 	lw	t2,0(s0)
  40ddc8:	8f9980a0 	lw	t9,-32608(gp)
  40ddcc:	8f8980a0 	lw	t1,-32608(gp)
  40ddd0:	27391399 	addiu	t9,t9,5017
  40ddd4:	8f84806c 	lw	a0,-32660(gp)
  40ddd8:	afb90060 	sw	t9,96(sp)
  40dddc:	8f998340 	lw	t9,-31936(gp)
  40dde0:	24080003 	li	t0,3
  40dde4:	252913eb 	addiu	t1,t1,5099
  40dde8:	8c846650 	lw	a0,26192(a0)
  40ddec:	afa80064 	sw	t0,100(sp)
  40ddf0:	afa90068 	sw	t1,104(sp)
  40ddf4:	27a50060 	addiu	a1,sp,96
  40ddf8:	24060002 	li	a2,2
  40ddfc:	0320f809 	jalr	t9
  40de00:	afaa006c 	sw	t2,108(sp)
  40de04:	8fbf003c 	lw	ra,60(sp)
  40de08:	8fbc0034 	lw	gp,52(sp)
  40de0c:	8fb00014 	lw	s0,20(sp)
  40de10:	8fb10018 	lw	s1,24(sp)
  40de14:	8fb2001c 	lw	s2,28(sp)
  40de18:	8fb30020 	lw	s3,32(sp)
  40de1c:	8fb40024 	lw	s4,36(sp)
  40de20:	8fb50028 	lw	s5,40(sp)
  40de24:	8fb6002c 	lw	s6,44(sp)
  40de28:	8fb70030 	lw	s7,48(sp)
  40de2c:	8fbe0038 	lw	s8,56(sp)
  40de30:	03e00008 	jr	ra
  40de34:	27bd00b0 	addiu	sp,sp,176
