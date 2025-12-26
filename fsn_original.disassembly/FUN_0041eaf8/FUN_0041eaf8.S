# Function: FUN_0041eaf8
# Address: 0x0041eaf8 - 0x0041ec98
# Size: 0x1a0 (416 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041eaf8 <editCB+0x9d4>:
  41eaf8:	3c1c0fc0 	lui	gp,0xfc0
  41eafc:	279cf038 	addiu	gp,gp,-4040
  41eb00:	0399e021 	addu	gp,gp,t9
  41eb04:	27bdffc8 	addiu	sp,sp,-56
  41eb08:	afbf0034 	sw	ra,52(sp)
  41eb0c:	afbc0030 	sw	gp,48(sp)
  41eb10:	afb5002c 	sw	s5,44(sp)
  41eb14:	afb40028 	sw	s4,40(sp)
  41eb18:	afb30024 	sw	s3,36(sp)
  41eb1c:	afb20020 	sw	s2,32(sp)
  41eb20:	afb1001c 	sw	s1,28(sp)
  41eb24:	afb00018 	sw	s0,24(sp)
  41eb28:	8c8e0074 	lw	t6,116(a0)
  41eb2c:	0080a025 	move	s4,a0
  41eb30:	000ec300 	sll	t8,t6,0xc
  41eb34:	0701003e 	bgez	t8,41ec30 <editCB+0xb0c>
  41eb38:	00009825 	move	s3,zero
  41eb3c:	90990075 	lbu	t9,117(a0)
  41eb40:	8c89000c 	lw	t1,12(a0)
  41eb44:	3328fff7 	andi	t0,t9,0xfff7
  41eb48:	1920002e 	blez	t1,41ec04 <editCB+0xae0>
  41eb4c:	a0880075 	sb	t0,117(a0)
  41eb50:	8f95805c 	lw	s5,-32676(gp)
  41eb54:	00008825 	move	s1,zero
  41eb58:	26b5b490 	addiu	s5,s5,-19312
  41eb5c:	8e8a0010 	lw	t2,16(s4)
  41eb60:	00000000 	nop
  41eb64:	01515821 	addu	t3,t2,s1
  41eb68:	8d700000 	lw	s0,0(t3)
  41eb6c:	00000000 	nop
  41eb70:	8e0c0028 	lw	t4,40(s0)
  41eb74:	00000000 	nop
  41eb78:	000c7240 	sll	t6,t4,0x9
  41eb7c:	05c1001c 	bgez	t6,41ebf0 <editCB+0xacc>
  41eb80:	00000000 	nop
  41eb84:	8f99857c 	lw	t9,-31364(gp)
  41eb88:	00002025 	move	a0,zero
  41eb8c:	0320f809 	jalr	t9
  41eb90:	02802825 	move	a1,s4
  41eb94:	8fbc0030 	lw	gp,48(sp)
  41eb98:	8e050000 	lw	a1,0(s0)
  41eb9c:	8f99831c 	lw	t9,-31972(gp)
  41eba0:	00409025 	move	s2,v0
  41eba4:	0320f809 	jalr	t9
  41eba8:	00402025 	move	a0,v0
  41ebac:	8fbc0030 	lw	gp,48(sp)
  41ebb0:	02402025 	move	a0,s2
  41ebb4:	8f998238 	lw	t9,-32200(gp)
  41ebb8:	00000000 	nop
  41ebbc:	0320f809 	jalr	t9
  41ebc0:	00000000 	nop
  41ebc4:	8fbc0030 	lw	gp,48(sp)
  41ebc8:	04410009 	bgez	v0,41ebf0 <editCB+0xacc>
  41ebcc:	00000000 	nop
  41ebd0:	8f998574 	lw	t9,-31372(gp)
  41ebd4:	02a02025 	move	a0,s5
  41ebd8:	0320f809 	jalr	t9
  41ebdc:	02402825 	move	a1,s2
  41ebe0:	920f0029 	lbu	t7,41(s0)
  41ebe4:	8fbc0030 	lw	gp,48(sp)
  41ebe8:	31f8ffbf 	andi	t8,t7,0xffbf
  41ebec:	a2180029 	sb	t8,41(s0)
  41ebf0:	8e99000c 	lw	t9,12(s4)
  41ebf4:	26730001 	addiu	s3,s3,1
  41ebf8:	0279082a 	slt	at,s3,t9
  41ebfc:	1420ffd7 	bnez	at,41eb5c <editCB+0xa38>
  41ec00:	26310004 	addiu	s1,s1,4
  41ec04:	8e880074 	lw	t0,116(s4)
  41ec08:	00000000 	nop
  41ec0c:	00085280 	sll	t2,t0,0xa
  41ec10:	05400007 	bltz	t2,41ec30 <editCB+0xb0c>
  41ec14:	00000000 	nop
  41ec18:	8f9985cc 	lw	t9,-31284(gp)
  41ec1c:	02802025 	move	a0,s4
  41ec20:	0320f809 	jalr	t9
  41ec24:	00000000 	nop
  41ec28:	8fbc0030 	lw	gp,48(sp)
  41ec2c:	00000000 	nop
  41ec30:	8e8b0014 	lw	t3,20(s4)
  41ec34:	00009825 	move	s3,zero
  41ec38:	1960000e 	blez	t3,41ec74 <editCB+0xb50>
  41ec3c:	00008825 	move	s1,zero
  41ec40:	8e8c0018 	lw	t4,24(s4)
  41ec44:	8f99801c 	lw	t9,-32740(gp)
  41ec48:	01916821 	addu	t5,t4,s1
  41ec4c:	8da40000 	lw	a0,0(t5)
  41ec50:	2739eaf8 	addiu	t9,t9,-5384
  41ec54:	0320f809 	jalr	t9
  41ec58:	00000000 	nop
  41ec5c:	8e8e0014 	lw	t6,20(s4)
  41ec60:	26730001 	addiu	s3,s3,1
  41ec64:	8fbc0030 	lw	gp,48(sp)
  41ec68:	026e082a 	slt	at,s3,t6
  41ec6c:	1420fff4 	bnez	at,41ec40 <editCB+0xb1c>
  41ec70:	26310004 	addiu	s1,s1,4
  41ec74:	8fbf0034 	lw	ra,52(sp)
  41ec78:	8fb00018 	lw	s0,24(sp)
  41ec7c:	8fb1001c 	lw	s1,28(sp)
  41ec80:	8fb20020 	lw	s2,32(sp)
  41ec84:	8fb30024 	lw	s3,36(sp)
  41ec88:	8fb40028 	lw	s4,40(sp)
  41ec8c:	8fb5002c 	lw	s5,44(sp)
  41ec90:	03e00008 	jr	ra
  41ec94:	27bd0038 	addiu	sp,sp,56
