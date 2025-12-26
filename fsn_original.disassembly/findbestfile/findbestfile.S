# Function: findbestfile
# Address: 0x0042ab10 - 0x0042aebc
# Size: 0x3ac (940 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042ab10 <findbestfile>:
  42ab10:	3c1c0fbf 	lui	gp,0xfbf
  42ab14:	279c3020 	addiu	gp,gp,12320
  42ab18:	0399e021 	addu	gp,gp,t9
  42ab1c:	27bdfea8 	addiu	sp,sp,-344
  42ab20:	afbf0034 	sw	ra,52(sp)
  42ab24:	afbc0030 	sw	gp,48(sp)
  42ab28:	afb3002c 	sw	s3,44(sp)
  42ab2c:	afb20028 	sw	s2,40(sp)
  42ab30:	afb10024 	sw	s1,36(sp)
  42ab34:	afb00020 	sw	s0,32(sp)
  42ab38:	afa5015c 	sw	a1,348(sp)
  42ab3c:	afa60160 	sw	a2,352(sp)
  42ab40:	aca00000 	sw	zero,0(a1)
  42ab44:	8faf0160 	lw	t7,352(sp)
  42ab48:	00808025 	move	s0,a0
  42ab4c:	ade00000 	sw	zero,0(t7)
  42ab50:	8f9983e0 	lw	t9,-31776(gp)
  42ab54:	00000000 	nop
  42ab58:	0320f809 	jalr	t9
  42ab5c:	00000000 	nop
  42ab60:	8fbc0030 	lw	gp,48(sp)
  42ab64:	00000000 	nop
  42ab68:	8f92892c 	lw	s2,-30420(gp)
  42ab6c:	00000000 	nop
  42ab70:	8e430000 	lw	v1,0(s2)
  42ab74:	00000000 	nop
  42ab78:	8c660004 	lw	a2,4(v1)
  42ab7c:	00000000 	nop
  42ab80:	00c2082b 	sltu	at,a2,v0
  42ab84:	14200013 	bnez	at,42abd4 <findbestfile+0xc4>
  42ab88:	00000000 	nop
  42ab8c:	8f9983e0 	lw	t9,-31776(gp)
  42ab90:	02002025 	move	a0,s0
  42ab94:	0320f809 	jalr	t9
  42ab98:	00000000 	nop
  42ab9c:	8fbc0030 	lw	gp,48(sp)
  42aba0:	8e580000 	lw	t8,0(s2)
  42aba4:	8f9980f0 	lw	t9,-32528(gp)
  42aba8:	8f050000 	lw	a1,0(t8)
  42abac:	02002025 	move	a0,s0
  42abb0:	0320f809 	jalr	t9
  42abb4:	00403025 	move	a2,v0
  42abb8:	8fbc0030 	lw	gp,48(sp)
  42abbc:	144000b9 	bnez	v0,42aea4 <findbestfile+0x394>
  42abc0:	8fbf0034 	lw	ra,52(sp)
  42abc4:	8e590000 	lw	t9,0(s2)
  42abc8:	8fa8015c 	lw	t0,348(sp)
  42abcc:	100000b4 	b	42aea0 <findbestfile+0x390>
  42abd0:	ad190000 	sw	t9,0(t0)
  42abd4:	8f9980f0 	lw	t9,-32528(gp)
  42abd8:	8c650000 	lw	a1,0(v1)
  42abdc:	0320f809 	jalr	t9
  42abe0:	02002025 	move	a0,s0
  42abe4:	8fbc0030 	lw	gp,48(sp)
  42abe8:	144000ad 	bnez	v0,42aea0 <findbestfile+0x390>
  42abec:	2405002f 	li	a1,47
  42abf0:	8e430000 	lw	v1,0(s2)
  42abf4:	2411002f 	li	s1,47
  42abf8:	8c690004 	lw	t1,4(v1)
  42abfc:	00000000 	nop
  42ac00:	02098021 	addu	s0,s0,t1
  42ac04:	920a0000 	lbu	t2,0(s0)
  42ac08:	00000000 	nop
  42ac0c:	162a0005 	bne	s1,t2,42ac24 <findbestfile+0x114>
  42ac10:	00000000 	nop
  42ac14:	920b0001 	lbu	t3,1(s0)
  42ac18:	26100001 	addiu	s0,s0,1
  42ac1c:	122bfffd 	beq	s1,t3,42ac14 <findbestfile+0x104>
  42ac20:	00000000 	nop
  42ac24:	8f9980e8 	lw	t9,-32536(gp)
  42ac28:	00609825 	move	s3,v1
  42ac2c:	0320f809 	jalr	t9
  42ac30:	02002025 	move	a0,s0
  42ac34:	8fbc0030 	lw	gp,48(sp)
  42ac38:	1040001a 	beqz	v0,42aca4 <findbestfile+0x194>
  42ac3c:	00409025 	move	s2,v0
  42ac40:	a2400000 	sb	zero,0(s2)
  42ac44:	8f9985a8 	lw	t9,-31320(gp)
  42ac48:	02602025 	move	a0,s3
  42ac4c:	0320f809 	jalr	t9
  42ac50:	02002825 	move	a1,s0
  42ac54:	8fbc0030 	lw	gp,48(sp)
  42ac58:	14400003 	bnez	v0,42ac68 <findbestfile+0x158>
  42ac5c:	00409825 	move	s3,v0
  42ac60:	1000008f 	b	42aea0 <findbestfile+0x390>
  42ac64:	a2510000 	sb	s1,0(s2)
  42ac68:	924c0001 	lbu	t4,1(s2)
  42ac6c:	26500001 	addiu	s0,s2,1
  42ac70:	162c0005 	bne	s1,t4,42ac88 <findbestfile+0x178>
  42ac74:	00000000 	nop
  42ac78:	920d0001 	lbu	t5,1(s0)
  42ac7c:	26100001 	addiu	s0,s0,1
  42ac80:	122dfffd 	beq	s1,t5,42ac78 <findbestfile+0x168>
  42ac84:	00000000 	nop
  42ac88:	8f9980e8 	lw	t9,-32536(gp)
  42ac8c:	02002025 	move	a0,s0
  42ac90:	0320f809 	jalr	t9
  42ac94:	2405002f 	li	a1,47
  42ac98:	8fbc0030 	lw	gp,48(sp)
  42ac9c:	1440ffe8 	bnez	v0,42ac40 <findbestfile+0x130>
  42aca0:	00409025 	move	s2,v0
  42aca4:	920e0000 	lbu	t6,0(s0)
  42aca8:	8faf015c 	lw	t7,348(sp)
  42acac:	15c00003 	bnez	t6,42acbc <findbestfile+0x1ac>
  42acb0:	00000000 	nop
  42acb4:	1000007a 	b	42aea0 <findbestfile+0x390>
  42acb8:	adf30000 	sw	s3,0(t7)
  42acbc:	8e78000c 	lw	t8,12(s3)
  42acc0:	27a400c8 	addiu	a0,sp,200
  42acc4:	17000003 	bnez	t8,42acd4 <findbestfile+0x1c4>
  42acc8:	24070004 	li	a3,4
  42accc:	1000001e 	b	42ad48 <findbestfile+0x238>
  42acd0:	00009025 	move	s2,zero
  42acd4:	27b90050 	addiu	t9,sp,80
  42acd8:	afb900c8 	sw	t9,200(sp)
  42acdc:	afb00050 	sw	s0,80(sp)
  42ace0:	8f998788 	lw	t9,-30840(gp)
  42ace4:	8f88859c 	lw	t0,-31332(gp)
  42ace8:	8e66000c 	lw	a2,12(s3)
  42acec:	8e650010 	lw	a1,16(s3)
  42acf0:	27a90048 	addiu	t1,sp,72
  42acf4:	afa90014 	sw	t1,20(sp)
  42acf8:	0320f809 	jalr	t9
  42acfc:	afa80010 	sw	t0,16(sp)
  42ad00:	8fbc0030 	lw	gp,48(sp)
  42ad04:	1040000a 	beqz	v0,42ad30 <findbestfile+0x220>
  42ad08:	8fae0048 	lw	t6,72(sp)
  42ad0c:	8faa015c 	lw	t2,348(sp)
  42ad10:	00000000 	nop
  42ad14:	ad530000 	sw	s3,0(t2)
  42ad18:	8fab0048 	lw	t3,72(sp)
  42ad1c:	8fad0160 	lw	t5,352(sp)
  42ad20:	8d6c0000 	lw	t4,0(t3)
  42ad24:	1000005e 	b	42aea0 <findbestfile+0x390>
  42ad28:	adac0000 	sw	t4,0(t5)
  42ad2c:	8fae0048 	lw	t6,72(sp)
  42ad30:	00009025 	move	s2,zero
  42ad34:	11c00004 	beqz	t6,42ad48 <findbestfile+0x238>
  42ad38:	00000000 	nop
  42ad3c:	8dd20000 	lw	s2,0(t6)
  42ad40:	10000002 	b	42ad4c <findbestfile+0x23c>
  42ad44:	8e6f0014 	lw	t7,20(s3)
  42ad48:	8e6f0014 	lw	t7,20(s3)
  42ad4c:	27b800cc 	addiu	t8,sp,204
  42ad50:	15e00003 	bnez	t7,42ad60 <findbestfile+0x250>
  42ad54:	27a40144 	addiu	a0,sp,324
  42ad58:	1000001b 	b	42adc8 <findbestfile+0x2b8>
  42ad5c:	00008825 	move	s1,zero
  42ad60:	afb000cc 	sw	s0,204(sp)
  42ad64:	afb80144 	sw	t8,324(sp)
  42ad68:	8f9985a0 	lw	t9,-31328(gp)
  42ad6c:	8e660014 	lw	a2,20(s3)
  42ad70:	8e650018 	lw	a1,24(s3)
  42ad74:	afb90010 	sw	t9,16(sp)
  42ad78:	8f998788 	lw	t9,-30840(gp)
  42ad7c:	27a8004c 	addiu	t0,sp,76
  42ad80:	afa80014 	sw	t0,20(sp)
  42ad84:	0320f809 	jalr	t9
  42ad88:	24070004 	li	a3,4
  42ad8c:	8fbc0030 	lw	gp,48(sp)
  42ad90:	10400007 	beqz	v0,42adb0 <findbestfile+0x2a0>
  42ad94:	8fac004c 	lw	t4,76(sp)
  42ad98:	8fa9004c 	lw	t1,76(sp)
  42ad9c:	8fab015c 	lw	t3,348(sp)
  42ada0:	8d2a0000 	lw	t2,0(t1)
  42ada4:	1000003e 	b	42aea0 <findbestfile+0x390>
  42ada8:	ad6a0000 	sw	t2,0(t3)
  42adac:	8fac004c 	lw	t4,76(sp)
  42adb0:	00008825 	move	s1,zero
  42adb4:	11800004 	beqz	t4,42adc8 <findbestfile+0x2b8>
  42adb8:	00000000 	nop
  42adbc:	8d910000 	lw	s1,0(t4)
  42adc0:	10000001 	b	42adc8 <findbestfile+0x2b8>
  42adc4:	00000000 	nop
  42adc8:	1220000e 	beqz	s1,42ae04 <findbestfile+0x2f4>
  42adcc:	00000000 	nop
  42add0:	1240000c 	beqz	s2,42ae04 <findbestfile+0x2f4>
  42add4:	00000000 	nop
  42add8:	8f9980cc 	lw	t9,-32564(gp)
  42addc:	8e440000 	lw	a0,0(s2)
  42ade0:	8e250000 	lw	a1,0(s1)
  42ade4:	0320f809 	jalr	t9
  42ade8:	00000000 	nop
  42adec:	8fbc0030 	lw	gp,48(sp)
  42adf0:	04410003 	bgez	v0,42ae00 <findbestfile+0x2f0>
  42adf4:	00000000 	nop
  42adf8:	10000002 	b	42ae04 <findbestfile+0x2f4>
  42adfc:	00008825 	move	s1,zero
  42ae00:	00009025 	move	s2,zero
  42ae04:	12400014 	beqz	s2,42ae58 <findbestfile+0x348>
  42ae08:	00000000 	nop
  42ae0c:	8f9983e0 	lw	t9,-31776(gp)
  42ae10:	02002025 	move	a0,s0
  42ae14:	0320f809 	jalr	t9
  42ae18:	00000000 	nop
  42ae1c:	8fbc0030 	lw	gp,48(sp)
  42ae20:	8e440000 	lw	a0,0(s2)
  42ae24:	8f9980f0 	lw	t9,-32528(gp)
  42ae28:	02002825 	move	a1,s0
  42ae2c:	0320f809 	jalr	t9
  42ae30:	00403025 	move	a2,v0
  42ae34:	8fbc0030 	lw	gp,48(sp)
  42ae38:	1440001a 	bnez	v0,42aea4 <findbestfile+0x394>
  42ae3c:	8fbf0034 	lw	ra,52(sp)
  42ae40:	8fad015c 	lw	t5,348(sp)
  42ae44:	00000000 	nop
  42ae48:	adb30000 	sw	s3,0(t5)
  42ae4c:	8fae0160 	lw	t6,352(sp)
  42ae50:	10000013 	b	42aea0 <findbestfile+0x390>
  42ae54:	add20000 	sw	s2,0(t6)
  42ae58:	12200012 	beqz	s1,42aea4 <findbestfile+0x394>
  42ae5c:	8fbf0034 	lw	ra,52(sp)
  42ae60:	8f9983e0 	lw	t9,-31776(gp)
  42ae64:	02002025 	move	a0,s0
  42ae68:	0320f809 	jalr	t9
  42ae6c:	00000000 	nop
  42ae70:	8fbc0030 	lw	gp,48(sp)
  42ae74:	8e240000 	lw	a0,0(s1)
  42ae78:	8f9980f0 	lw	t9,-32528(gp)
  42ae7c:	02002825 	move	a1,s0
  42ae80:	0320f809 	jalr	t9
  42ae84:	00403025 	move	a2,v0
  42ae88:	8fbc0030 	lw	gp,48(sp)
  42ae8c:	14400005 	bnez	v0,42aea4 <findbestfile+0x394>
  42ae90:	8fbf0034 	lw	ra,52(sp)
  42ae94:	8faf015c 	lw	t7,348(sp)
  42ae98:	00000000 	nop
  42ae9c:	adf10000 	sw	s1,0(t7)
  42aea0:	8fbf0034 	lw	ra,52(sp)
  42aea4:	8fb00020 	lw	s0,32(sp)
  42aea8:	8fb10024 	lw	s1,36(sp)
  42aeac:	8fb20028 	lw	s2,40(sp)
  42aeb0:	8fb3002c 	lw	s3,44(sp)
  42aeb4:	03e00008 	jr	ra
  42aeb8:	27bd0158 	addiu	sp,sp,344
