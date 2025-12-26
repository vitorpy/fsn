# Function: showPreferencePanel
# Address: 0x0042b9e8 - 0x0042c970
# Size: 0xf88 (3976 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b9e8 <showPreferencePanel>:
  42b9e8:	3c1c0fbf 	lui	gp,0xfbf
  42b9ec:	279c2148 	addiu	gp,gp,8520
  42b9f0:	0399e021 	addu	gp,gp,t9
  42b9f4:	27bdfb00 	addiu	sp,sp,-1280
  42b9f8:	afa40500 	sw	a0,1280(sp)
  42b9fc:	8f84806c 	lw	a0,-32660(gp)
  42ba00:	afbf0034 	sw	ra,52(sp)
  42ba04:	8c848940 	lw	a0,-30400(a0)
  42ba08:	afbc0030 	sw	gp,48(sp)
  42ba0c:	afb4002c 	sw	s4,44(sp)
  42ba10:	afb30028 	sw	s3,40(sp)
  42ba14:	afb20024 	sw	s2,36(sp)
  42ba18:	afb10020 	sw	s1,32(sp)
  42ba1c:	afb0001c 	sw	s0,28(sp)
  42ba20:	afa50504 	sw	a1,1284(sp)
  42ba24:	1080002a 	beqz	a0,42bad0 <showPreferencePanel+0xe8>
  42ba28:	afa60508 	sw	a2,1288(sp)
  42ba2c:	8f998388 	lw	t9,-31864(gp)
  42ba30:	00000000 	nop
  42ba34:	0320f809 	jalr	t9
  42ba38:	00000000 	nop
  42ba3c:	8fbc0030 	lw	gp,48(sp)
  42ba40:	00000000 	nop
  42ba44:	8f84806c 	lw	a0,-32660(gp)
  42ba48:	8f9983fc 	lw	t9,-31748(gp)
  42ba4c:	8c848940 	lw	a0,-30400(a0)
  42ba50:	0320f809 	jalr	t9
  42ba54:	00000000 	nop
  42ba58:	8fbc0030 	lw	gp,48(sp)
  42ba5c:	00408025 	move	s0,v0
  42ba60:	8f84806c 	lw	a0,-32660(gp)
  42ba64:	8f998368 	lw	t9,-31896(gp)
  42ba68:	8c848940 	lw	a0,-30400(a0)
  42ba6c:	0320f809 	jalr	t9
  42ba70:	00000000 	nop
  42ba74:	8fbc0030 	lw	gp,48(sp)
  42ba78:	02002025 	move	a0,s0
  42ba7c:	8f998144 	lw	t9,-32444(gp)
  42ba80:	00402825 	move	a1,v0
  42ba84:	0320f809 	jalr	t9
  42ba88:	00000000 	nop
  42ba8c:	8fbc0030 	lw	gp,48(sp)
  42ba90:	00000000 	nop
  42ba94:	8f84806c 	lw	a0,-32660(gp)
  42ba98:	8f998368 	lw	t9,-31896(gp)
  42ba9c:	8c848940 	lw	a0,-30400(a0)
  42baa0:	0320f809 	jalr	t9
  42baa4:	00000000 	nop
  42baa8:	8fbc0030 	lw	gp,48(sp)
  42baac:	00402825 	move	a1,v0
  42bab0:	8f848a04 	lw	a0,-30204(gp)
  42bab4:	8f99817c 	lw	t9,-32388(gp)
  42bab8:	8c840000 	lw	a0,0(a0)
  42babc:	0320f809 	jalr	t9
  42bac0:	00000000 	nop
  42bac4:	8fbc0030 	lw	gp,48(sp)
  42bac8:	100003a2 	b	42c954 <showPreferencePanel+0xf6c>
  42bacc:	8fbf0034 	lw	ra,52(sp)
  42bad0:	8f8e8080 	lw	t6,-32640(gp)
  42bad4:	8f85808c 	lw	a1,-32628(gp)
  42bad8:	8f868a10 	lw	a2,-30192(gp)
  42badc:	8f84805c 	lw	a0,-32676(gp)
  42bae0:	8f99820c 	lw	t9,-32244(gp)
  42bae4:	27b40468 	addiu	s4,sp,1128
  42bae8:	240f0001 	li	t7,1
  42baec:	24180001 	li	t8,1
  42baf0:	25ce0118 	addiu	t6,t6,280
  42baf4:	8ca50000 	lw	a1,0(a1)
  42baf8:	8cc60000 	lw	a2,0(a2)
  42bafc:	afae0468 	sw	t6,1128(sp)
  42bb00:	afaf046c 	sw	t7,1132(sp)
  42bb04:	afb80010 	sw	t8,16(sp)
  42bb08:	02803825 	move	a3,s4
  42bb0c:	0320f809 	jalr	t9
  42bb10:	24843818 	addiu	a0,a0,14360
  42bb14:	8fbc0030 	lw	gp,48(sp)
  42bb18:	00402025 	move	a0,v0
  42bb1c:	8f83806c 	lw	v1,-32660(gp)
  42bb20:	8f8580a4 	lw	a1,-32604(gp)
  42bb24:	24638940 	addiu	v1,v1,-30400
  42bb28:	ac620000 	sw	v0,0(v1)
  42bb2c:	8f9983ac 	lw	t9,-31828(gp)
  42bb30:	8f868020 	lw	a2,-32736(gp)
  42bb34:	00003825 	move	a3,zero
  42bb38:	24a500a9 	addiu	a1,a1,169
  42bb3c:	0320f809 	jalr	t9
  42bb40:	24c6cc30 	addiu	a2,a2,-13264
  42bb44:	8fbc0030 	lw	gp,48(sp)
  42bb48:	02803025 	move	a2,s4
  42bb4c:	8f84806c 	lw	a0,-32660(gp)
  42bb50:	8f85805c 	lw	a1,-32676(gp)
  42bb54:	8f998148 	lw	t9,-32440(gp)
  42bb58:	8c848940 	lw	a0,-30400(a0)
  42bb5c:	00003825 	move	a3,zero
  42bb60:	0320f809 	jalr	t9
  42bb64:	24a53828 	addiu	a1,a1,14376
  42bb68:	8fbc0030 	lw	gp,48(sp)
  42bb6c:	afa204fc 	sw	v0,1276(sp)
  42bb70:	8f998388 	lw	t9,-31864(gp)
  42bb74:	00402025 	move	a0,v0
  42bb78:	0320f809 	jalr	t9
  42bb7c:	00000000 	nop
  42bb80:	8fbc0030 	lw	gp,48(sp)
  42bb84:	8fa404fc 	lw	a0,1276(sp)
  42bb88:	8f9987a4 	lw	t9,-30812(gp)
  42bb8c:	8f8589d4 	lw	a1,-30252(gp)
  42bb90:	0320f809 	jalr	t9
  42bb94:	00000000 	nop
  42bb98:	8fbc0030 	lw	gp,48(sp)
  42bb9c:	8fa404fc 	lw	a0,1276(sp)
  42bba0:	8f85805c 	lw	a1,-32676(gp)
  42bba4:	8f998508 	lw	t9,-31480(gp)
  42bba8:	02803025 	move	a2,s4
  42bbac:	00003825 	move	a3,zero
  42bbb0:	0320f809 	jalr	t9
  42bbb4:	24a53838 	addiu	a1,a1,14392
  42bbb8:	8fbc0030 	lw	gp,48(sp)
  42bbbc:	afa204f8 	sw	v0,1272(sp)
  42bbc0:	8f998388 	lw	t9,-31864(gp)
  42bbc4:	00402025 	move	a0,v0
  42bbc8:	0320f809 	jalr	t9
  42bbcc:	00000000 	nop
  42bbd0:	8fbc0030 	lw	gp,48(sp)
  42bbd4:	8fa404f8 	lw	a0,1272(sp)
  42bbd8:	8f85805c 	lw	a1,-32676(gp)
  42bbdc:	8f9983d8 	lw	t9,-31784(gp)
  42bbe0:	02803025 	move	a2,s4
  42bbe4:	00003825 	move	a3,zero
  42bbe8:	0320f809 	jalr	t9
  42bbec:	24a5384c 	addiu	a1,a1,14412
  42bbf0:	8fbc0030 	lw	gp,48(sp)
  42bbf4:	00402025 	move	a0,v0
  42bbf8:	8f998388 	lw	t9,-31864(gp)
  42bbfc:	00000000 	nop
  42bc00:	0320f809 	jalr	t9
  42bc04:	00000000 	nop
  42bc08:	8fbc0030 	lw	gp,48(sp)
  42bc0c:	8fa404f8 	lw	a0,1272(sp)
  42bc10:	8f85805c 	lw	a1,-32676(gp)
  42bc14:	8f998508 	lw	t9,-31480(gp)
  42bc18:	02803025 	move	a2,s4
  42bc1c:	00003825 	move	a3,zero
  42bc20:	0320f809 	jalr	t9
  42bc24:	24a53864 	addiu	a1,a1,14436
  42bc28:	8fbc0030 	lw	gp,48(sp)
  42bc2c:	00408025 	move	s0,v0
  42bc30:	8f998388 	lw	t9,-31864(gp)
  42bc34:	00402025 	move	a0,v0
  42bc38:	0320f809 	jalr	t9
  42bc3c:	00000000 	nop
  42bc40:	8fbc0030 	lw	gp,48(sp)
  42bc44:	02002025 	move	a0,s0
  42bc48:	8f85805c 	lw	a1,-32676(gp)
  42bc4c:	8f9984e0 	lw	t9,-31520(gp)
  42bc50:	02803025 	move	a2,s4
  42bc54:	00003825 	move	a3,zero
  42bc58:	0320f809 	jalr	t9
  42bc5c:	24a5387c 	addiu	a1,a1,14460
  42bc60:	8fbc0030 	lw	gp,48(sp)
  42bc64:	00408825 	move	s1,v0
  42bc68:	8f9380a0 	lw	s3,-32608(gp)
  42bc6c:	8f9983ac 	lw	t9,-31828(gp)
  42bc70:	8f8687b0 	lw	a2,-30800(gp)
  42bc74:	2673124b 	addiu	s3,s3,4683
  42bc78:	02602825 	move	a1,s3
  42bc7c:	00402025 	move	a0,v0
  42bc80:	0320f809 	jalr	t9
  42bc84:	00003825 	move	a3,zero
  42bc88:	8fbc0030 	lw	gp,48(sp)
  42bc8c:	02202025 	move	a0,s1
  42bc90:	8f998388 	lw	t9,-31864(gp)
  42bc94:	00000000 	nop
  42bc98:	0320f809 	jalr	t9
  42bc9c:	00000000 	nop
  42bca0:	8fbc0030 	lw	gp,48(sp)
  42bca4:	02002025 	move	a0,s0
  42bca8:	8f85805c 	lw	a1,-32676(gp)
  42bcac:	8f9984e0 	lw	t9,-31520(gp)
  42bcb0:	02803025 	move	a2,s4
  42bcb4:	00003825 	move	a3,zero
  42bcb8:	0320f809 	jalr	t9
  42bcbc:	24a5388c 	addiu	a1,a1,14476
  42bcc0:	8fbc0030 	lw	gp,48(sp)
  42bcc4:	00408825 	move	s1,v0
  42bcc8:	8f868020 	lw	a2,-32736(gp)
  42bccc:	8f9983ac 	lw	t9,-31828(gp)
  42bcd0:	00402025 	move	a0,v0
  42bcd4:	02602825 	move	a1,s3
  42bcd8:	00003825 	move	a3,zero
  42bcdc:	0320f809 	jalr	t9
  42bce0:	24c6ccac 	addiu	a2,a2,-13140
  42bce4:	8fbc0030 	lw	gp,48(sp)
  42bce8:	02202025 	move	a0,s1
  42bcec:	8f998388 	lw	t9,-31864(gp)
  42bcf0:	00000000 	nop
  42bcf4:	0320f809 	jalr	t9
  42bcf8:	00000000 	nop
  42bcfc:	8fbc0030 	lw	gp,48(sp)
  42bd00:	02002025 	move	a0,s0
  42bd04:	8f85805c 	lw	a1,-32676(gp)
  42bd08:	8f9984e0 	lw	t9,-31520(gp)
  42bd0c:	02803025 	move	a2,s4
  42bd10:	00003825 	move	a3,zero
  42bd14:	0320f809 	jalr	t9
  42bd18:	24a5389c 	addiu	a1,a1,14492
  42bd1c:	8fbc0030 	lw	gp,48(sp)
  42bd20:	00409025 	move	s2,v0
  42bd24:	8f918020 	lw	s1,-32736(gp)
  42bd28:	8f9983ac 	lw	t9,-31828(gp)
  42bd2c:	2631cf60 	addiu	s1,s1,-12448
  42bd30:	02203025 	move	a2,s1
  42bd34:	00402025 	move	a0,v0
  42bd38:	02602825 	move	a1,s3
  42bd3c:	0320f809 	jalr	t9
  42bd40:	00003825 	move	a3,zero
  42bd44:	8fbc0030 	lw	gp,48(sp)
  42bd48:	02402025 	move	a0,s2
  42bd4c:	8f998388 	lw	t9,-31864(gp)
  42bd50:	00000000 	nop
  42bd54:	0320f809 	jalr	t9
  42bd58:	00000000 	nop
  42bd5c:	8fbc0030 	lw	gp,48(sp)
  42bd60:	02002025 	move	a0,s0
  42bd64:	8f85805c 	lw	a1,-32676(gp)
  42bd68:	8f9984e0 	lw	t9,-31520(gp)
  42bd6c:	02803025 	move	a2,s4
  42bd70:	00003825 	move	a3,zero
  42bd74:	0320f809 	jalr	t9
  42bd78:	24a538b4 	addiu	a1,a1,14516
  42bd7c:	8fbc0030 	lw	gp,48(sp)
  42bd80:	00408025 	move	s0,v0
  42bd84:	8f9983ac 	lw	t9,-31828(gp)
  42bd88:	00402025 	move	a0,v0
  42bd8c:	02602825 	move	a1,s3
  42bd90:	02203025 	move	a2,s1
  42bd94:	0320f809 	jalr	t9
  42bd98:	24070001 	li	a3,1
  42bd9c:	8fbc0030 	lw	gp,48(sp)
  42bda0:	02002025 	move	a0,s0
  42bda4:	8f998388 	lw	t9,-31864(gp)
  42bda8:	00000000 	nop
  42bdac:	0320f809 	jalr	t9
  42bdb0:	00000000 	nop
  42bdb4:	8fbc0030 	lw	gp,48(sp)
  42bdb8:	8fa404f8 	lw	a0,1272(sp)
  42bdbc:	8f85805c 	lw	a1,-32676(gp)
  42bdc0:	8f998508 	lw	t9,-31480(gp)
  42bdc4:	02803025 	move	a2,s4
  42bdc8:	00003825 	move	a3,zero
  42bdcc:	0320f809 	jalr	t9
  42bdd0:	24a538c8 	addiu	a1,a1,14536
  42bdd4:	8fbc0030 	lw	gp,48(sp)
  42bdd8:	00408025 	move	s0,v0
  42bddc:	8f998388 	lw	t9,-31864(gp)
  42bde0:	00402025 	move	a0,v0
  42bde4:	0320f809 	jalr	t9
  42bde8:	00000000 	nop
  42bdec:	8fbc0030 	lw	gp,48(sp)
  42bdf0:	02002025 	move	a0,s0
  42bdf4:	8f85805c 	lw	a1,-32676(gp)
  42bdf8:	8f9984e0 	lw	t9,-31520(gp)
  42bdfc:	02803025 	move	a2,s4
  42be00:	00003825 	move	a3,zero
  42be04:	0320f809 	jalr	t9
  42be08:	24a538e4 	addiu	a1,a1,14564
  42be0c:	8fbc0030 	lw	gp,48(sp)
  42be10:	00408825 	move	s1,v0
  42be14:	8f868020 	lw	a2,-32736(gp)
  42be18:	8f9983ac 	lw	t9,-31828(gp)
  42be1c:	00402025 	move	a0,v0
  42be20:	02602825 	move	a1,s3
  42be24:	00003825 	move	a3,zero
  42be28:	0320f809 	jalr	t9
  42be2c:	24c6d338 	addiu	a2,a2,-11464
  42be30:	8fbc0030 	lw	gp,48(sp)
  42be34:	02202025 	move	a0,s1
  42be38:	8f998388 	lw	t9,-31864(gp)
  42be3c:	00000000 	nop
  42be40:	0320f809 	jalr	t9
  42be44:	00000000 	nop
  42be48:	8fbc0030 	lw	gp,48(sp)
  42be4c:	02002025 	move	a0,s0
  42be50:	8f85805c 	lw	a1,-32676(gp)
  42be54:	8f99821c 	lw	t9,-32228(gp)
  42be58:	02803025 	move	a2,s4
  42be5c:	00003825 	move	a3,zero
  42be60:	0320f809 	jalr	t9
  42be64:	24a538f8 	addiu	a1,a1,14584
  42be68:	8fbc0030 	lw	gp,48(sp)
  42be6c:	00000000 	nop
  42be70:	8f91806c 	lw	s1,-32660(gp)
  42be74:	8f84805c 	lw	a0,-32676(gp)
  42be78:	26316e48 	addiu	s1,s1,28232
  42be7c:	ae220000 	sw	v0,0(s1)
  42be80:	8f9981a8 	lw	t9,-32344(gp)
  42be84:	2484390c 	addiu	a0,a0,14604
  42be88:	0320f809 	jalr	t9
  42be8c:	00000000 	nop
  42be90:	8fbc0030 	lw	gp,48(sp)
  42be94:	10400014 	beqz	v0,42bee8 <showPreferencePanel+0x500>
  42be98:	00402825 	move	a1,v0
  42be9c:	8f998134 	lw	t9,-32460(gp)
  42bea0:	27b00050 	addiu	s0,sp,80
  42bea4:	0320f809 	jalr	t9
  42bea8:	02002025 	move	a0,s0
  42beac:	8fbc0030 	lw	gp,48(sp)
  42beb0:	02002025 	move	a0,s0
  42beb4:	8f85805c 	lw	a1,-32676(gp)
  42beb8:	8f99831c 	lw	t9,-31972(gp)
  42bebc:	24a53914 	addiu	a1,a1,14612
  42bec0:	0320f809 	jalr	t9
  42bec4:	00000000 	nop
  42bec8:	8fbc0030 	lw	gp,48(sp)
  42becc:	8e240000 	lw	a0,0(s1)
  42bed0:	8f998214 	lw	t9,-32236(gp)
  42bed4:	02002825 	move	a1,s0
  42bed8:	0320f809 	jalr	t9
  42bedc:	00000000 	nop
  42bee0:	8fbc0030 	lw	gp,48(sp)
  42bee4:	00000000 	nop
  42bee8:	8f998388 	lw	t9,-31864(gp)
  42beec:	8e240000 	lw	a0,0(s1)
  42bef0:	0320f809 	jalr	t9
  42bef4:	00000000 	nop
  42bef8:	8fbc0030 	lw	gp,48(sp)
  42befc:	8fa404fc 	lw	a0,1276(sp)
  42bf00:	8f85805c 	lw	a1,-32676(gp)
  42bf04:	8f998508 	lw	t9,-31480(gp)
  42bf08:	02803025 	move	a2,s4
  42bf0c:	00003825 	move	a3,zero
  42bf10:	0320f809 	jalr	t9
  42bf14:	24a53920 	addiu	a1,a1,14624
  42bf18:	8fbc0030 	lw	gp,48(sp)
  42bf1c:	00408825 	move	s1,v0
  42bf20:	8f998388 	lw	t9,-31864(gp)
  42bf24:	00402025 	move	a0,v0
  42bf28:	0320f809 	jalr	t9
  42bf2c:	00000000 	nop
  42bf30:	8fbc0030 	lw	gp,48(sp)
  42bf34:	00000000 	nop
  42bf38:	8f82806c 	lw	v0,-32660(gp)
  42bf3c:	00000000 	nop
  42bf40:	24508950 	addiu	s0,v0,-30384
  42bf44:	8e190000 	lw	t9,0(s0)
  42bf48:	00000000 	nop
  42bf4c:	1320003b 	beqz	t9,42c03c <showPreferencePanel+0x654>
  42bf50:	00000000 	nop
  42bf54:	8f88806c 	lw	t0,-32660(gp)
  42bf58:	8f898020 	lw	t1,-32736(gp)
  42bf5c:	8f9380a0 	lw	s3,-32608(gp)
  42bf60:	25088950 	addiu	t0,t0,-30384
  42bf64:	8d040000 	lw	a0,0(t0)
  42bf68:	2529caa0 	addiu	t1,t1,-13664
  42bf6c:	afa90038 	sw	t1,56(sp)
  42bf70:	2673293d 	addiu	s3,s3,10557
  42bf74:	8f998170 	lw	t9,-32400(gp)
  42bf78:	00000000 	nop
  42bf7c:	0320f809 	jalr	t9
  42bf80:	00000000 	nop
  42bf84:	8fbc0030 	lw	gp,48(sp)
  42bf88:	afa2046c 	sw	v0,1132(sp)
  42bf8c:	8f8a80a0 	lw	t2,-32608(gp)
  42bf90:	8f8b80a0 	lw	t3,-32608(gp)
  42bf94:	254a1d4d 	addiu	t2,t2,7501
  42bf98:	256b2589 	addiu	t3,t3,9609
  42bf9c:	afaa0468 	sw	t2,1128(sp)
  42bfa0:	afab0470 	sw	t3,1136(sp)
  42bfa4:	8e0c0004 	lw	t4,4(s0)
  42bfa8:	8f85805c 	lw	a1,-32676(gp)
  42bfac:	8f99843c 	lw	t9,-31684(gp)
  42bfb0:	918d0000 	lbu	t5,0(t4)
  42bfb4:	00409025 	move	s2,v0
  42bfb8:	02202025 	move	a0,s1
  42bfbc:	02803025 	move	a2,s4
  42bfc0:	24070002 	li	a3,2
  42bfc4:	24a53934 	addiu	a1,a1,14644
  42bfc8:	0320f809 	jalr	t9
  42bfcc:	afad0474 	sw	t5,1140(sp)
  42bfd0:	8fbc0030 	lw	gp,48(sp)
  42bfd4:	ae020010 	sw	v0,16(s0)
  42bfd8:	8f9983ac 	lw	t9,-31828(gp)
  42bfdc:	8fa60038 	lw	a2,56(sp)
  42bfe0:	00402025 	move	a0,v0
  42bfe4:	02602825 	move	a1,s3
  42bfe8:	0320f809 	jalr	t9
  42bfec:	02003825 	move	a3,s0
  42bff0:	8fbc0030 	lw	gp,48(sp)
  42bff4:	8e040010 	lw	a0,16(s0)
  42bff8:	8f998388 	lw	t9,-31864(gp)
  42bffc:	00000000 	nop
  42c000:	0320f809 	jalr	t9
  42c004:	00000000 	nop
  42c008:	8fbc0030 	lw	gp,48(sp)
  42c00c:	02402025 	move	a0,s2
  42c010:	8f998178 	lw	t9,-32392(gp)
  42c014:	00000000 	nop
  42c018:	0320f809 	jalr	t9
  42c01c:	00000000 	nop
  42c020:	8e0e0004 	lw	t6,4(s0)
  42c024:	8e040014 	lw	a0,20(s0)
  42c028:	91cf0000 	lbu	t7,0(t6)
  42c02c:	8fbc0030 	lw	gp,48(sp)
  42c030:	26100014 	addiu	s0,s0,20
  42c034:	1480ffcf 	bnez	a0,42bf74 <showPreferencePanel+0x58c>
  42c038:	a20ffff8 	sb	t7,-8(s0)
  42c03c:	8f9380a0 	lw	s3,-32608(gp)
  42c040:	8f85805c 	lw	a1,-32676(gp)
  42c044:	8f99814c 	lw	t9,-32436(gp)
  42c048:	8fa404fc 	lw	a0,1276(sp)
  42c04c:	02803025 	move	a2,s4
  42c050:	00003825 	move	a3,zero
  42c054:	2673293d 	addiu	s3,s3,10557
  42c058:	0320f809 	jalr	t9
  42c05c:	24a53948 	addiu	a1,a1,14664
  42c060:	8fbc0030 	lw	gp,48(sp)
  42c064:	00408025 	move	s0,v0
  42c068:	8f998388 	lw	t9,-31864(gp)
  42c06c:	00402025 	move	a0,v0
  42c070:	0320f809 	jalr	t9
  42c074:	00000000 	nop
  42c078:	8fbc0030 	lw	gp,48(sp)
  42c07c:	02002025 	move	a0,s0
  42c080:	8f85805c 	lw	a1,-32676(gp)
  42c084:	8f998508 	lw	t9,-31480(gp)
  42c088:	02803025 	move	a2,s4
  42c08c:	00003825 	move	a3,zero
  42c090:	0320f809 	jalr	t9
  42c094:	24a53960 	addiu	a1,a1,14688
  42c098:	8fbc0030 	lw	gp,48(sp)
  42c09c:	afa204cc 	sw	v0,1228(sp)
  42c0a0:	8f998388 	lw	t9,-31864(gp)
  42c0a4:	00402025 	move	a0,v0
  42c0a8:	0320f809 	jalr	t9
  42c0ac:	00000000 	nop
  42c0b0:	8fbc0030 	lw	gp,48(sp)
  42c0b4:	00000000 	nop
  42c0b8:	8f82806c 	lw	v0,-32660(gp)
  42c0bc:	00000000 	nop
  42c0c0:	245089f0 	addiu	s0,v0,-30224
  42c0c4:	8e180000 	lw	t8,0(s0)
  42c0c8:	00000000 	nop
  42c0cc:	1300004c 	beqz	t8,42c200 <showPreferencePanel+0x818>
  42c0d0:	00000000 	nop
  42c0d4:	8f99806c 	lw	t9,-32660(gp)
  42c0d8:	8f888020 	lw	t0,-32736(gp)
  42c0dc:	273989f0 	addiu	t9,t9,-30224
  42c0e0:	8f240000 	lw	a0,0(t9)
  42c0e4:	2508caec 	addiu	t0,t0,-13588
  42c0e8:	afa80038 	sw	t0,56(sp)
  42c0ec:	8f998170 	lw	t9,-32400(gp)
  42c0f0:	24110004 	li	s1,4
  42c0f4:	0320f809 	jalr	t9
  42c0f8:	00000000 	nop
  42c0fc:	8fbc0030 	lw	gp,48(sp)
  42c100:	afa2046c 	sw	v0,1132(sp)
  42c104:	8f8980a0 	lw	t1,-32608(gp)
  42c108:	8f8a80a4 	lw	t2,-32604(gp)
  42c10c:	25292777 	addiu	t1,t1,10103
  42c110:	254a035b 	addiu	t2,t2,859
  42c114:	afa90468 	sw	t1,1128(sp)
  42c118:	afaa0470 	sw	t2,1136(sp)
  42c11c:	8e0b0004 	lw	t3,4(s0)
  42c120:	8f8d80a0 	lw	t5,-32608(gp)
  42c124:	8d6c0000 	lw	t4,0(t3)
  42c128:	25ad1fa4 	addiu	t5,t5,8100
  42c12c:	8f8f80a0 	lw	t7,-32608(gp)
  42c130:	afad0478 	sw	t5,1144(sp)
  42c134:	afac0474 	sw	t4,1140(sp)
  42c138:	8e0e000c 	lw	t6,12(s0)
  42c13c:	25ef1f0c 	addiu	t7,t7,7948
  42c140:	afaf0480 	sw	t7,1152(sp)
  42c144:	afae047c 	sw	t6,1148(sp)
  42c148:	8e180010 	lw	t8,16(s0)
  42c14c:	00409025 	move	s2,v0
  42c150:	afb80484 	sw	t8,1156(sp)
  42c154:	8e190008 	lw	t9,8(s0)
  42c158:	240a0002 	li	t2,2
  42c15c:	33280008 	andi	t0,t9,0x8
  42c160:	11000006 	beqz	t0,42c17c <showPreferencePanel+0x794>
  42c164:	02803025 	move	a2,s4
  42c168:	8f8980a0 	lw	t1,-32608(gp)
  42c16c:	afaa048c 	sw	t2,1164(sp)
  42c170:	2529227d 	addiu	t1,t1,8829
  42c174:	afa90488 	sw	t1,1160(sp)
  42c178:	24110005 	li	s1,5
  42c17c:	8f85805c 	lw	a1,-32676(gp)
  42c180:	8f9984e4 	lw	t9,-31516(gp)
  42c184:	8fa404cc 	lw	a0,1228(sp)
  42c188:	02203825 	move	a3,s1
  42c18c:	0320f809 	jalr	t9
  42c190:	24a53974 	addiu	a1,a1,14708
  42c194:	8fbc0030 	lw	gp,48(sp)
  42c198:	ae020018 	sw	v0,24(s0)
  42c19c:	8f9983ac 	lw	t9,-31828(gp)
  42c1a0:	8fa60038 	lw	a2,56(sp)
  42c1a4:	00402025 	move	a0,v0
  42c1a8:	02602825 	move	a1,s3
  42c1ac:	0320f809 	jalr	t9
  42c1b0:	02003825 	move	a3,s0
  42c1b4:	8fbc0030 	lw	gp,48(sp)
  42c1b8:	8e040018 	lw	a0,24(s0)
  42c1bc:	8f998388 	lw	t9,-31864(gp)
  42c1c0:	00000000 	nop
  42c1c4:	0320f809 	jalr	t9
  42c1c8:	00000000 	nop
  42c1cc:	8fbc0030 	lw	gp,48(sp)
  42c1d0:	02402025 	move	a0,s2
  42c1d4:	8f998178 	lw	t9,-32392(gp)
  42c1d8:	00000000 	nop
  42c1dc:	0320f809 	jalr	t9
  42c1e0:	00000000 	nop
  42c1e4:	8e0b0004 	lw	t3,4(s0)
  42c1e8:	8e04001c 	lw	a0,28(s0)
  42c1ec:	8d6c0000 	lw	t4,0(t3)
  42c1f0:	8fbc0030 	lw	gp,48(sp)
  42c1f4:	2610001c 	addiu	s0,s0,28
  42c1f8:	1480ffbc 	bnez	a0,42c0ec <showPreferencePanel+0x704>
  42c1fc:	ae0cfff8 	sw	t4,-8(s0)
  42c200:	8f82806c 	lw	v0,-32660(gp)
  42c204:	00000000 	nop
  42c208:	24508b5c 	addiu	s0,v0,-29860
  42c20c:	8e0d0000 	lw	t5,0(s0)
  42c210:	00000000 	nop
  42c214:	11a00079 	beqz	t5,42c3fc <showPreferencePanel+0xa14>
  42c218:	00000000 	nop
  42c21c:	8f8e806c 	lw	t6,-32660(gp)
  42c220:	8f8f8020 	lw	t7,-32736(gp)
  42c224:	25ce8b5c 	addiu	t6,t6,-29860
  42c228:	8dc40000 	lw	a0,0(t6)
  42c22c:	25efcb38 	addiu	t7,t7,-13512
  42c230:	afaf0038 	sw	t7,56(sp)
  42c234:	8e180014 	lw	t8,20(s0)
  42c238:	8f88806c 	lw	t0,-32660(gp)
  42c23c:	0018c880 	sll	t9,t8,0x2
  42c240:	250894f0 	addiu	t0,t0,-27408
  42c244:	03284821 	addu	t1,t9,t0
  42c248:	c5240000 	lwc1	$f4,0(t1)
  42c24c:	8f998170 	lw	t9,-32400(gp)
  42c250:	24110005 	li	s1,5
  42c254:	0320f809 	jalr	t9
  42c258:	e7a40048 	swc1	$f4,72(sp)
  42c25c:	8fbc0030 	lw	gp,48(sp)
  42c260:	afa2046c 	sw	v0,1132(sp)
  42c264:	8f8a80a0 	lw	t2,-32608(gp)
  42c268:	8f8b80a4 	lw	t3,-32604(gp)
  42c26c:	254a2777 	addiu	t2,t2,10103
  42c270:	256b035b 	addiu	t3,t3,859
  42c274:	afaa0468 	sw	t2,1128(sp)
  42c278:	afab0470 	sw	t3,1136(sp)
  42c27c:	8e0c0004 	lw	t4,4(s0)
  42c280:	c7a60048 	lwc1	$f6,72(sp)
  42c284:	c5880000 	lwc1	$f8,0(t4)
  42c288:	46003021 	cvt.d.s	$f0,$f6
  42c28c:	460042a1 	cvt.d.s	$f10,$f8
  42c290:	46205402 	mul.d	$f16,$f10,$f0
  42c294:	8f8e80a0 	lw	t6,-32608(gp)
  42c298:	8f9980a0 	lw	t9,-32608(gp)
  42c29c:	25ce1fa4 	addiu	t6,t6,8100
  42c2a0:	afae0478 	sw	t6,1144(sp)
  42c2a4:	444df800 	cfc1	t5,c1_fcsr
  42c2a8:	27391f0c 	addiu	t9,t9,7948
  42c2ac:	35a10003 	ori	at,t5,0x3
  42c2b0:	38210002 	xori	at,at,0x2
  42c2b4:	44c1f800 	ctc1	at,c1_fcsr
  42c2b8:	8f8a80a0 	lw	t2,-32608(gp)
  42c2bc:	462084a4 	cvt.w.d	$f18,$f16
  42c2c0:	254a162d 	addiu	t2,t2,5677
  42c2c4:	e7b20474 	swc1	$f18,1140(sp)
  42c2c8:	8e0f000c 	lw	t7,12(s0)
  42c2cc:	44cdf800 	ctc1	t5,c1_fcsr
  42c2d0:	448f2000 	mtc1	t7,$f4
  42c2d4:	afb90480 	sw	t9,1152(sp)
  42c2d8:	468021a1 	cvt.d.w	$f6,$f4
  42c2dc:	00409025 	move	s2,v0
  42c2e0:	240f0002 	li	t7,2
  42c2e4:	46203202 	mul.d	$f8,$f6,$f0
  42c2e8:	02803025 	move	a2,s4
  42c2ec:	4458f800 	cfc1	t8,c1_fcsr
  42c2f0:	00000000 	nop
  42c2f4:	37010003 	ori	at,t8,0x3
  42c2f8:	38210002 	xori	at,at,0x2
  42c2fc:	44c1f800 	ctc1	at,c1_fcsr
  42c300:	00000000 	nop
  42c304:	462042a4 	cvt.w.d	$f10,$f8
  42c308:	e7aa047c 	swc1	$f10,1148(sp)
  42c30c:	8e080010 	lw	t0,16(s0)
  42c310:	44d8f800 	ctc1	t8,c1_fcsr
  42c314:	44888000 	mtc1	t0,$f16
  42c318:	afaa0488 	sw	t2,1160(sp)
  42c31c:	468084a1 	cvt.d.w	$f18,$f16
  42c320:	46209102 	mul.d	$f4,$f18,$f0
  42c324:	4449f800 	cfc1	t1,c1_fcsr
  42c328:	00000000 	nop
  42c32c:	35210003 	ori	at,t1,0x3
  42c330:	38210002 	xori	at,at,0x2
  42c334:	44c1f800 	ctc1	at,c1_fcsr
  42c338:	00000000 	nop
  42c33c:	462021a4 	cvt.w.d	$f6,$f4
  42c340:	e7a60484 	swc1	$f6,1156(sp)
  42c344:	8e0b0014 	lw	t3,20(s0)
  42c348:	44c9f800 	ctc1	t1,c1_fcsr
  42c34c:	afab048c 	sw	t3,1164(sp)
  42c350:	8e0c0008 	lw	t4,8(s0)
  42c354:	00000000 	nop
  42c358:	318d0008 	andi	t5,t4,0x8
  42c35c:	11a00006 	beqz	t5,42c378 <showPreferencePanel+0x990>
  42c360:	00000000 	nop
  42c364:	8f8e80a0 	lw	t6,-32608(gp)
  42c368:	afaf0494 	sw	t7,1172(sp)
  42c36c:	25ce227d 	addiu	t6,t6,8829
  42c370:	afae0490 	sw	t6,1168(sp)
  42c374:	24110006 	li	s1,6
  42c378:	8f85805c 	lw	a1,-32676(gp)
  42c37c:	8f9984e4 	lw	t9,-31516(gp)
  42c380:	8fa404cc 	lw	a0,1228(sp)
  42c384:	02203825 	move	a3,s1
  42c388:	0320f809 	jalr	t9
  42c38c:	24a53984 	addiu	a1,a1,14724
  42c390:	8fbc0030 	lw	gp,48(sp)
  42c394:	ae02001c 	sw	v0,28(s0)
  42c398:	8f9983ac 	lw	t9,-31828(gp)
  42c39c:	8fa60038 	lw	a2,56(sp)
  42c3a0:	00402025 	move	a0,v0
  42c3a4:	02602825 	move	a1,s3
  42c3a8:	0320f809 	jalr	t9
  42c3ac:	02003825 	move	a3,s0
  42c3b0:	8fbc0030 	lw	gp,48(sp)
  42c3b4:	8e04001c 	lw	a0,28(s0)
  42c3b8:	8f998388 	lw	t9,-31864(gp)
  42c3bc:	00000000 	nop
  42c3c0:	0320f809 	jalr	t9
  42c3c4:	00000000 	nop
  42c3c8:	8fbc0030 	lw	gp,48(sp)
  42c3cc:	02402025 	move	a0,s2
  42c3d0:	8f998178 	lw	t9,-32392(gp)
  42c3d4:	00000000 	nop
  42c3d8:	0320f809 	jalr	t9
  42c3dc:	00000000 	nop
  42c3e0:	8e180004 	lw	t8,4(s0)
  42c3e4:	8e040020 	lw	a0,32(s0)
  42c3e8:	c7080000 	lwc1	$f8,0(t8)
  42c3ec:	8fbc0030 	lw	gp,48(sp)
  42c3f0:	26100020 	addiu	s0,s0,32
  42c3f4:	1480ff8f 	bnez	a0,42c234 <showPreferencePanel+0x84c>
  42c3f8:	e608fff8 	swc1	$f8,-8(s0)
  42c3fc:	8f85805c 	lw	a1,-32676(gp)
  42c400:	8f99837c 	lw	t9,-31876(gp)
  42c404:	8fa404fc 	lw	a0,1276(sp)
  42c408:	02803025 	move	a2,s4
  42c40c:	00003825 	move	a3,zero
  42c410:	0320f809 	jalr	t9
  42c414:	24a53994 	addiu	a1,a1,14740
  42c418:	8fbc0030 	lw	gp,48(sp)
  42c41c:	afa204c8 	sw	v0,1224(sp)
  42c420:	8f998388 	lw	t9,-31864(gp)
  42c424:	00402025 	move	a0,v0
  42c428:	0320f809 	jalr	t9
  42c42c:	00000000 	nop
  42c430:	8fbc0030 	lw	gp,48(sp)
  42c434:	24080001 	li	t0,1
  42c438:	8f9980a0 	lw	t9,-32608(gp)
  42c43c:	8f8980a0 	lw	t1,-32608(gp)
  42c440:	27391d63 	addiu	t9,t9,7523
  42c444:	8f8b80a0 	lw	t3,-32608(gp)
  42c448:	afb90468 	sw	t9,1128(sp)
  42c44c:	8f998508 	lw	t9,-31480(gp)
  42c450:	8f85805c 	lw	a1,-32676(gp)
  42c454:	240a0001 	li	t2,1
  42c458:	240c0001 	li	t4,1
  42c45c:	8fa404c8 	lw	a0,1224(sp)
  42c460:	25292375 	addiu	t1,t1,9077
  42c464:	256b1399 	addiu	t3,t3,5017
  42c468:	afa8046c 	sw	t0,1132(sp)
  42c46c:	afa90470 	sw	t1,1136(sp)
  42c470:	afaa0474 	sw	t2,1140(sp)
  42c474:	afab0478 	sw	t3,1144(sp)
  42c478:	afac047c 	sw	t4,1148(sp)
  42c47c:	02803025 	move	a2,s4
  42c480:	24070003 	li	a3,3
  42c484:	0320f809 	jalr	t9
  42c488:	24a539a8 	addiu	a1,a1,14760
  42c48c:	8fbc0030 	lw	gp,48(sp)
  42c490:	00408025 	move	s0,v0
  42c494:	8f998388 	lw	t9,-31864(gp)
  42c498:	00402025 	move	a0,v0
  42c49c:	0320f809 	jalr	t9
  42c4a0:	00000000 	nop
  42c4a4:	8fbc0030 	lw	gp,48(sp)
  42c4a8:	02002025 	move	a0,s0
  42c4ac:	8f85805c 	lw	a1,-32676(gp)
  42c4b0:	8f9984e4 	lw	t9,-31516(gp)
  42c4b4:	02803025 	move	a2,s4
  42c4b8:	00003825 	move	a3,zero
  42c4bc:	0320f809 	jalr	t9
  42c4c0:	24a539c0 	addiu	a1,a1,14784
  42c4c4:	8fbc0030 	lw	gp,48(sp)
  42c4c8:	00402025 	move	a0,v0
  42c4cc:	8f92806c 	lw	s2,-32660(gp)
  42c4d0:	00000000 	nop
  42c4d4:	26526e30 	addiu	s2,s2,28208
  42c4d8:	ae420000 	sw	v0,0(s2)
  42c4dc:	8f998388 	lw	t9,-31864(gp)
  42c4e0:	00000000 	nop
  42c4e4:	0320f809 	jalr	t9
  42c4e8:	00000000 	nop
  42c4ec:	8fbc0030 	lw	gp,48(sp)
  42c4f0:	8e440000 	lw	a0,0(s2)
  42c4f4:	8f918020 	lw	s1,-32736(gp)
  42c4f8:	8f9983ac 	lw	t9,-31828(gp)
  42c4fc:	2631d8e0 	addiu	s1,s1,-10016
  42c500:	02203025 	move	a2,s1
  42c504:	02602825 	move	a1,s3
  42c508:	0320f809 	jalr	t9
  42c50c:	00003825 	move	a3,zero
  42c510:	8fbc0030 	lw	gp,48(sp)
  42c514:	02002025 	move	a0,s0
  42c518:	8f85805c 	lw	a1,-32676(gp)
  42c51c:	8f9984e4 	lw	t9,-31516(gp)
  42c520:	02803025 	move	a2,s4
  42c524:	00003825 	move	a3,zero
  42c528:	0320f809 	jalr	t9
  42c52c:	24a539d4 	addiu	a1,a1,14804
  42c530:	8fbc0030 	lw	gp,48(sp)
  42c534:	00402025 	move	a0,v0
  42c538:	8f83806c 	lw	v1,-32660(gp)
  42c53c:	00000000 	nop
  42c540:	24636e3c 	addiu	v1,v1,28220
  42c544:	ac620000 	sw	v0,0(v1)
  42c548:	8f998388 	lw	t9,-31864(gp)
  42c54c:	00000000 	nop
  42c550:	0320f809 	jalr	t9
  42c554:	00000000 	nop
  42c558:	8fbc0030 	lw	gp,48(sp)
  42c55c:	02602825 	move	a1,s3
  42c560:	8f84806c 	lw	a0,-32660(gp)
  42c564:	8f928020 	lw	s2,-32736(gp)
  42c568:	8f9983ac 	lw	t9,-31828(gp)
  42c56c:	8c846e3c 	lw	a0,28220(a0)
  42c570:	2652d9f8 	addiu	s2,s2,-9736
  42c574:	02403025 	move	a2,s2
  42c578:	0320f809 	jalr	t9
  42c57c:	00003825 	move	a3,zero
  42c580:	8fbc0030 	lw	gp,48(sp)
  42c584:	02002025 	move	a0,s0
  42c588:	8f85805c 	lw	a1,-32676(gp)
  42c58c:	8f9984e4 	lw	t9,-31516(gp)
  42c590:	02803025 	move	a2,s4
  42c594:	00003825 	move	a3,zero
  42c598:	0320f809 	jalr	t9
  42c59c:	24a539e8 	addiu	a1,a1,14824
  42c5a0:	8fbc0030 	lw	gp,48(sp)
  42c5a4:	00402025 	move	a0,v0
  42c5a8:	8f83806c 	lw	v1,-32660(gp)
  42c5ac:	00000000 	nop
  42c5b0:	24636e34 	addiu	v1,v1,28212
  42c5b4:	ac620000 	sw	v0,0(v1)
  42c5b8:	8f998388 	lw	t9,-31864(gp)
  42c5bc:	00000000 	nop
  42c5c0:	0320f809 	jalr	t9
  42c5c4:	00000000 	nop
  42c5c8:	8fbc0030 	lw	gp,48(sp)
  42c5cc:	02602825 	move	a1,s3
  42c5d0:	8f84806c 	lw	a0,-32660(gp)
  42c5d4:	8f9983ac 	lw	t9,-31828(gp)
  42c5d8:	8c846e34 	lw	a0,28212(a0)
  42c5dc:	02203025 	move	a2,s1
  42c5e0:	0320f809 	jalr	t9
  42c5e4:	00003825 	move	a3,zero
  42c5e8:	8fbc0030 	lw	gp,48(sp)
  42c5ec:	02002025 	move	a0,s0
  42c5f0:	8f85805c 	lw	a1,-32676(gp)
  42c5f4:	8f9984e4 	lw	t9,-31516(gp)
  42c5f8:	02803025 	move	a2,s4
  42c5fc:	00003825 	move	a3,zero
  42c600:	0320f809 	jalr	t9
  42c604:	24a53a00 	addiu	a1,a1,14848
  42c608:	8fbc0030 	lw	gp,48(sp)
  42c60c:	00402025 	move	a0,v0
  42c610:	8f83806c 	lw	v1,-32660(gp)
  42c614:	00000000 	nop
  42c618:	24636e40 	addiu	v1,v1,28224
  42c61c:	ac620000 	sw	v0,0(v1)
  42c620:	8f998388 	lw	t9,-31864(gp)
  42c624:	00000000 	nop
  42c628:	0320f809 	jalr	t9
  42c62c:	00000000 	nop
  42c630:	8fbc0030 	lw	gp,48(sp)
  42c634:	02602825 	move	a1,s3
  42c638:	8f84806c 	lw	a0,-32660(gp)
  42c63c:	8f9983ac 	lw	t9,-31828(gp)
  42c640:	8c846e40 	lw	a0,28224(a0)
  42c644:	02403025 	move	a2,s2
  42c648:	0320f809 	jalr	t9
  42c64c:	00003825 	move	a3,zero
  42c650:	8fbc0030 	lw	gp,48(sp)
  42c654:	02002025 	move	a0,s0
  42c658:	8f85805c 	lw	a1,-32676(gp)
  42c65c:	8f9984e4 	lw	t9,-31516(gp)
  42c660:	02803025 	move	a2,s4
  42c664:	00003825 	move	a3,zero
  42c668:	0320f809 	jalr	t9
  42c66c:	24a53a14 	addiu	a1,a1,14868
  42c670:	8fbc0030 	lw	gp,48(sp)
  42c674:	00402025 	move	a0,v0
  42c678:	8f83806c 	lw	v1,-32660(gp)
  42c67c:	00000000 	nop
  42c680:	24636e38 	addiu	v1,v1,28216
  42c684:	ac620000 	sw	v0,0(v1)
  42c688:	8f998388 	lw	t9,-31864(gp)
  42c68c:	00000000 	nop
  42c690:	0320f809 	jalr	t9
  42c694:	00000000 	nop
  42c698:	8fbc0030 	lw	gp,48(sp)
  42c69c:	02602825 	move	a1,s3
  42c6a0:	8f84806c 	lw	a0,-32660(gp)
  42c6a4:	8f9983ac 	lw	t9,-31828(gp)
  42c6a8:	8c846e38 	lw	a0,28216(a0)
  42c6ac:	02203025 	move	a2,s1
  42c6b0:	0320f809 	jalr	t9
  42c6b4:	00003825 	move	a3,zero
  42c6b8:	8fbc0030 	lw	gp,48(sp)
  42c6bc:	02002025 	move	a0,s0
  42c6c0:	8f85805c 	lw	a1,-32676(gp)
  42c6c4:	8f9984e4 	lw	t9,-31516(gp)
  42c6c8:	02803025 	move	a2,s4
  42c6cc:	00003825 	move	a3,zero
  42c6d0:	0320f809 	jalr	t9
  42c6d4:	24a53a28 	addiu	a1,a1,14888
  42c6d8:	8fbc0030 	lw	gp,48(sp)
  42c6dc:	00402025 	move	a0,v0
  42c6e0:	8f91806c 	lw	s1,-32660(gp)
  42c6e4:	00000000 	nop
  42c6e8:	26316e44 	addiu	s1,s1,28228
  42c6ec:	ae220000 	sw	v0,0(s1)
  42c6f0:	8f998388 	lw	t9,-31864(gp)
  42c6f4:	00000000 	nop
  42c6f8:	0320f809 	jalr	t9
  42c6fc:	00000000 	nop
  42c700:	8fbc0030 	lw	gp,48(sp)
  42c704:	8e240000 	lw	a0,0(s1)
  42c708:	8f9983ac 	lw	t9,-31828(gp)
  42c70c:	02602825 	move	a1,s3
  42c710:	02403025 	move	a2,s2
  42c714:	0320f809 	jalr	t9
  42c718:	00003825 	move	a3,zero
  42c71c:	8fbc0030 	lw	gp,48(sp)
  42c720:	00000000 	nop
  42c724:	8f998020 	lw	t9,-32736(gp)
  42c728:	00000000 	nop
  42c72c:	2739d618 	addiu	t9,t9,-10728
  42c730:	0320f809 	jalr	t9
  42c734:	00000000 	nop
  42c738:	8fbc0030 	lw	gp,48(sp)
  42c73c:	00000000 	nop
  42c740:	8f998020 	lw	t9,-32736(gp)
  42c744:	00000000 	nop
  42c748:	2739d6f0 	addiu	t9,t9,-10512
  42c74c:	0320f809 	jalr	t9
  42c750:	00000000 	nop
  42c754:	8fbc0030 	lw	gp,48(sp)
  42c758:	240e0001 	li	t6,1
  42c75c:	8f9980a0 	lw	t9,-32608(gp)
  42c760:	8f8d80a0 	lw	t5,-32608(gp)
  42c764:	27392375 	addiu	t9,t9,9077
  42c768:	8f8f80a0 	lw	t7,-32608(gp)
  42c76c:	8f8980a0 	lw	t1,-32608(gp)
  42c770:	8f8b80a0 	lw	t3,-32608(gp)
  42c774:	afb90478 	sw	t9,1144(sp)
  42c778:	8f99814c 	lw	t9,-32436(gp)
  42c77c:	8f85805c 	lw	a1,-32676(gp)
  42c780:	24180001 	li	t8,1
  42c784:	24080001 	li	t0,1
  42c788:	240a0003 	li	t2,3
  42c78c:	8fa404c8 	lw	a0,1224(sp)
  42c790:	25ad27b5 	addiu	t5,t5,10165
  42c794:	25ef1d63 	addiu	t7,t7,7523
  42c798:	25291399 	addiu	t1,t1,5017
  42c79c:	256b13eb 	addiu	t3,t3,5099
  42c7a0:	afad0468 	sw	t5,1128(sp)
  42c7a4:	afae046c 	sw	t6,1132(sp)
  42c7a8:	afaf0470 	sw	t7,1136(sp)
  42c7ac:	afb80474 	sw	t8,1140(sp)
  42c7b0:	afa8047c 	sw	t0,1148(sp)
  42c7b4:	afa90480 	sw	t1,1152(sp)
  42c7b8:	afaa0484 	sw	t2,1156(sp)
  42c7bc:	afab0488 	sw	t3,1160(sp)
  42c7c0:	afb0048c 	sw	s0,1164(sp)
  42c7c4:	02803025 	move	a2,s4
  42c7c8:	24070005 	li	a3,5
  42c7cc:	0320f809 	jalr	t9
  42c7d0:	24a53a3c 	addiu	a1,a1,14908
  42c7d4:	8fbc0030 	lw	gp,48(sp)
  42c7d8:	00408025 	move	s0,v0
  42c7dc:	8f998388 	lw	t9,-31864(gp)
  42c7e0:	00402025 	move	a0,v0
  42c7e4:	0320f809 	jalr	t9
  42c7e8:	00000000 	nop
  42c7ec:	8fbc0030 	lw	gp,48(sp)
  42c7f0:	02002025 	move	a0,s0
  42c7f4:	8f85805c 	lw	a1,-32676(gp)
  42c7f8:	8f99813c 	lw	t9,-32452(gp)
  42c7fc:	02803025 	move	a2,s4
  42c800:	00003825 	move	a3,zero
  42c804:	0320f809 	jalr	t9
  42c808:	24a53a54 	addiu	a1,a1,14932
  42c80c:	8fbc0030 	lw	gp,48(sp)
  42c810:	afa204c0 	sw	v0,1216(sp)
  42c814:	8f998388 	lw	t9,-31864(gp)
  42c818:	00402025 	move	a0,v0
  42c81c:	0320f809 	jalr	t9
  42c820:	00000000 	nop
  42c824:	8fbc0030 	lw	gp,48(sp)
  42c828:	00000000 	nop
  42c82c:	8f82806c 	lw	v0,-32660(gp)
  42c830:	00000000 	nop
  42c834:	2450935c 	addiu	s0,v0,-27812
  42c838:	8e0c0000 	lw	t4,0(s0)
  42c83c:	00000000 	nop
  42c840:	1180003c 	beqz	t4,42c934 <showPreferencePanel+0xf4c>
  42c844:	00000000 	nop
  42c848:	8f8d806c 	lw	t5,-32660(gp)
  42c84c:	8f8e8020 	lw	t6,-32736(gp)
  42c850:	25ad935c 	addiu	t5,t5,-27812
  42c854:	8da40000 	lw	a0,0(t5)
  42c858:	25cecbb8 	addiu	t6,t6,-13384
  42c85c:	afae0038 	sw	t6,56(sp)
  42c860:	8f998170 	lw	t9,-32400(gp)
  42c864:	24110001 	li	s1,1
  42c868:	0320f809 	jalr	t9
  42c86c:	00000000 	nop
  42c870:	8fbc0030 	lw	gp,48(sp)
  42c874:	00409025 	move	s2,v0
  42c878:	8f98806c 	lw	t8,-32660(gp)
  42c87c:	8f8f80a0 	lw	t7,-32608(gp)
  42c880:	8f1894ec 	lw	t8,-27412(t8)
  42c884:	25ef1d4d 	addiu	t7,t7,7501
  42c888:	afaf0468 	sw	t7,1128(sp)
  42c88c:	16180007 	bne	s0,t8,42c8ac <showPreferencePanel+0xec4>
  42c890:	afa2046c 	sw	v0,1132(sp)
  42c894:	8f9980a0 	lw	t9,-32608(gp)
  42c898:	24080001 	li	t0,1
  42c89c:	27392589 	addiu	t9,t9,9609
  42c8a0:	afb90470 	sw	t9,1136(sp)
  42c8a4:	afa80474 	sw	t0,1140(sp)
  42c8a8:	24110002 	li	s1,2
  42c8ac:	8f85805c 	lw	a1,-32676(gp)
  42c8b0:	8f99843c 	lw	t9,-31684(gp)
  42c8b4:	8fa404c0 	lw	a0,1216(sp)
  42c8b8:	02803025 	move	a2,s4
  42c8bc:	02203825 	move	a3,s1
  42c8c0:	0320f809 	jalr	t9
  42c8c4:	24a53a68 	addiu	a1,a1,14952
  42c8c8:	8fbc0030 	lw	gp,48(sp)
  42c8cc:	ae02000c 	sw	v0,12(s0)
  42c8d0:	8f9983ac 	lw	t9,-31828(gp)
  42c8d4:	8fa60038 	lw	a2,56(sp)
  42c8d8:	00402025 	move	a0,v0
  42c8dc:	02602825 	move	a1,s3
  42c8e0:	0320f809 	jalr	t9
  42c8e4:	02003825 	move	a3,s0
  42c8e8:	8fbc0030 	lw	gp,48(sp)
  42c8ec:	8e04000c 	lw	a0,12(s0)
  42c8f0:	8f998388 	lw	t9,-31864(gp)
  42c8f4:	00000000 	nop
  42c8f8:	0320f809 	jalr	t9
  42c8fc:	00000000 	nop
  42c900:	8fbc0030 	lw	gp,48(sp)
  42c904:	02402025 	move	a0,s2
  42c908:	8f998178 	lw	t9,-32392(gp)
  42c90c:	00000000 	nop
  42c910:	0320f809 	jalr	t9
  42c914:	00000000 	nop
  42c918:	8e090004 	lw	t1,4(s0)
  42c91c:	8e040010 	lw	a0,16(s0)
  42c920:	8d2a0000 	lw	t2,0(t1)
  42c924:	8fbc0030 	lw	gp,48(sp)
  42c928:	26100010 	addiu	s0,s0,16
  42c92c:	1480ffcc 	bnez	a0,42c860 <showPreferencePanel+0xe78>
  42c930:	ae0afff8 	sw	t2,-8(s0)
  42c934:	8f84806c 	lw	a0,-32660(gp)
  42c938:	8f998388 	lw	t9,-31864(gp)
  42c93c:	8c848940 	lw	a0,-30400(a0)
  42c940:	0320f809 	jalr	t9
  42c944:	00000000 	nop
  42c948:	8fbc0030 	lw	gp,48(sp)
  42c94c:	00000000 	nop
  42c950:	8fbf0034 	lw	ra,52(sp)
  42c954:	8fb0001c 	lw	s0,28(sp)
  42c958:	8fb10020 	lw	s1,32(sp)
  42c95c:	8fb20024 	lw	s2,36(sp)
  42c960:	8fb30028 	lw	s3,40(sp)
  42c964:	8fb4002c 	lw	s4,44(sp)
  42c968:	03e00008 	jr	ra
  42c96c:	27bd0500 	addiu	sp,sp,1280
