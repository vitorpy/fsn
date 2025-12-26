# Function: FUN_00430cb4
# Address: 0x00430cb4 - 0x00431340
# Size: 0x68c (1676 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00430cb4 <createSearch+0xc>:
  430cb4:	27bdffa0 	addiu	sp,sp,-96
  430cb8:	afa40060 	sw	a0,96(sp)
  430cbc:	8f84805c 	lw	a0,-32676(gp)
  430cc0:	8f998170 	lw	t9,-32400(gp)
  430cc4:	afbf001c 	sw	ra,28(sp)
  430cc8:	afbc0018 	sw	gp,24(sp)
  430ccc:	0320f809 	jalr	t9
  430cd0:	24843d24 	addiu	a0,a0,15652
  430cd4:	8fbc0018 	lw	gp,24(sp)
  430cd8:	00000000 	nop
  430cdc:	8f81806c 	lw	at,-32660(gp)
  430ce0:	8f84805c 	lw	a0,-32676(gp)
  430ce4:	8f998170 	lw	t9,-32400(gp)
  430ce8:	ac226ed0 	sw	v0,28368(at)
  430cec:	0320f809 	jalr	t9
  430cf0:	24843d2c 	addiu	a0,a0,15660
  430cf4:	8fbc0018 	lw	gp,24(sp)
  430cf8:	00000000 	nop
  430cfc:	8f81806c 	lw	at,-32660(gp)
  430d00:	8f84805c 	lw	a0,-32676(gp)
  430d04:	8f998170 	lw	t9,-32400(gp)
  430d08:	ac226ed4 	sw	v0,28372(at)
  430d0c:	0320f809 	jalr	t9
  430d10:	24843d30 	addiu	a0,a0,15664
  430d14:	8fbc0018 	lw	gp,24(sp)
  430d18:	240f0001 	li	t7,1
  430d1c:	8f8e80a0 	lw	t6,-32608(gp)
  430d20:	8f81806c 	lw	at,-32660(gp)
  430d24:	8f85805c 	lw	a1,-32676(gp)
  430d28:	8f99845c 	lw	t9,-31652(gp)
  430d2c:	8fa40060 	lw	a0,96(sp)
  430d30:	25ce1795 	addiu	t6,t6,6037
  430d34:	afae0038 	sw	t6,56(sp)
  430d38:	afaf003c 	sw	t7,60(sp)
  430d3c:	27a60038 	addiu	a2,sp,56
  430d40:	24070001 	li	a3,1
  430d44:	ac226ed8 	sw	v0,28376(at)
  430d48:	0320f809 	jalr	t9
  430d4c:	24a53d34 	addiu	a1,a1,15668
  430d50:	8fbc0018 	lw	gp,24(sp)
  430d54:	afa20030 	sw	v0,48(sp)
  430d58:	8f998460 	lw	t9,-31648(gp)
  430d5c:	00402025 	move	a0,v0
  430d60:	0320f809 	jalr	t9
  430d64:	24050007 	li	a1,7
  430d68:	8fbc0018 	lw	gp,24(sp)
  430d6c:	00402025 	move	a0,v0
  430d70:	8f998490 	lw	t9,-31600(gp)
  430d74:	00000000 	nop
  430d78:	0320f809 	jalr	t9
  430d7c:	00000000 	nop
  430d80:	8fbc0018 	lw	gp,24(sp)
  430d84:	8fa40030 	lw	a0,48(sp)
  430d88:	8f998460 	lw	t9,-31648(gp)
  430d8c:	2405000e 	li	a1,14
  430d90:	0320f809 	jalr	t9
  430d94:	00000000 	nop
  430d98:	8fbc0018 	lw	gp,24(sp)
  430d9c:	00402025 	move	a0,v0
  430da0:	8f998490 	lw	t9,-31600(gp)
  430da4:	00000000 	nop
  430da8:	0320f809 	jalr	t9
  430dac:	00000000 	nop
  430db0:	8fbc0018 	lw	gp,24(sp)
  430db4:	8fa40030 	lw	a0,48(sp)
  430db8:	8f998460 	lw	t9,-31648(gp)
  430dbc:	2405000b 	li	a1,11
  430dc0:	0320f809 	jalr	t9
  430dc4:	00000000 	nop
  430dc8:	8fbc0018 	lw	gp,24(sp)
  430dcc:	00402025 	move	a0,v0
  430dd0:	8f998490 	lw	t9,-31600(gp)
  430dd4:	00000000 	nop
  430dd8:	0320f809 	jalr	t9
  430ddc:	00000000 	nop
  430de0:	8fbc0018 	lw	gp,24(sp)
  430de4:	8fa40030 	lw	a0,48(sp)
  430de8:	8f998460 	lw	t9,-31648(gp)
  430dec:	2405000d 	li	a1,13
  430df0:	0320f809 	jalr	t9
  430df4:	00000000 	nop
  430df8:	8fbc0018 	lw	gp,24(sp)
  430dfc:	00402025 	move	a0,v0
  430e00:	8f998490 	lw	t9,-31600(gp)
  430e04:	00000000 	nop
  430e08:	0320f809 	jalr	t9
  430e0c:	00000000 	nop
  430e10:	8fbc0018 	lw	gp,24(sp)
  430e14:	8fa40030 	lw	a0,48(sp)
  430e18:	8f998460 	lw	t9,-31648(gp)
  430e1c:	24050001 	li	a1,1
  430e20:	0320f809 	jalr	t9
  430e24:	00000000 	nop
  430e28:	8fbc0018 	lw	gp,24(sp)
  430e2c:	00402025 	move	a0,v0
  430e30:	8f83806c 	lw	v1,-32660(gp)
  430e34:	00002825 	move	a1,zero
  430e38:	24636ef8 	addiu	v1,v1,28408
  430e3c:	ac620000 	sw	v0,0(v1)
  430e40:	8f998318 	lw	t9,-31976(gp)
  430e44:	00000000 	nop
  430e48:	0320f809 	jalr	t9
  430e4c:	00000000 	nop
  430e50:	8fbc0018 	lw	gp,24(sp)
  430e54:	00000000 	nop
  430e58:	8f84806c 	lw	a0,-32660(gp)
  430e5c:	8f998388 	lw	t9,-31864(gp)
  430e60:	8c846ef8 	lw	a0,28408(a0)
  430e64:	0320f809 	jalr	t9
  430e68:	00000000 	nop
  430e6c:	8fbc0018 	lw	gp,24(sp)
  430e70:	8fa40030 	lw	a0,48(sp)
  430e74:	8f998388 	lw	t9,-31864(gp)
  430e78:	00000000 	nop
  430e7c:	0320f809 	jalr	t9
  430e80:	00000000 	nop
  430e84:	8fbc0018 	lw	gp,24(sp)
  430e88:	8fa40030 	lw	a0,48(sp)
  430e8c:	8f8580a0 	lw	a1,-32608(gp)
  430e90:	8f868020 	lw	a2,-32736(gp)
  430e94:	8f9983ac 	lw	t9,-31828(gp)
  430e98:	00003825 	move	a3,zero
  430e9c:	24a5214e 	addiu	a1,a1,8526
  430ea0:	0320f809 	jalr	t9
  430ea4:	24c60448 	addiu	a2,a2,1096
  430ea8:	8fbc0018 	lw	gp,24(sp)
  430eac:	8fa40030 	lw	a0,48(sp)
  430eb0:	8f8580a0 	lw	a1,-32608(gp)
  430eb4:	8f868020 	lw	a2,-32736(gp)
  430eb8:	8f9983ac 	lw	t9,-31828(gp)
  430ebc:	00003825 	move	a3,zero
  430ec0:	24a512d9 	addiu	a1,a1,4825
  430ec4:	0320f809 	jalr	t9
  430ec8:	24c608ec 	addiu	a2,a2,2284
  430ecc:	8fbc0018 	lw	gp,24(sp)
  430ed0:	8fa40030 	lw	a0,48(sp)
  430ed4:	8f8580a0 	lw	a1,-32608(gp)
  430ed8:	8f868020 	lw	a2,-32736(gp)
  430edc:	8f9983ac 	lw	t9,-31828(gp)
  430ee0:	00003825 	move	a3,zero
  430ee4:	24a514a5 	addiu	a1,a1,5285
  430ee8:	0320f809 	jalr	t9
  430eec:	24c607bc 	addiu	a2,a2,1980
  430ef0:	8fbc0018 	lw	gp,24(sp)
  430ef4:	24190001 	li	t9,1
  430ef8:	8f9880a4 	lw	t8,-32604(gp)
  430efc:	afb9003c 	sw	t9,60(sp)
  430f00:	8f998508 	lw	t9,-31480(gp)
  430f04:	8f85805c 	lw	a1,-32676(gp)
  430f08:	8fa40030 	lw	a0,48(sp)
  430f0c:	271801f9 	addiu	t8,t8,505
  430f10:	afb80038 	sw	t8,56(sp)
  430f14:	27a60038 	addiu	a2,sp,56
  430f18:	24070001 	li	a3,1
  430f1c:	0320f809 	jalr	t9
  430f20:	24a53d3c 	addiu	a1,a1,15676
  430f24:	8fbc0018 	lw	gp,24(sp)
  430f28:	afa2002c 	sw	v0,44(sp)
  430f2c:	8f998388 	lw	t9,-31864(gp)
  430f30:	00402025 	move	a0,v0
  430f34:	0320f809 	jalr	t9
  430f38:	00000000 	nop
  430f3c:	8fbc0018 	lw	gp,24(sp)
  430f40:	8fa4002c 	lw	a0,44(sp)
  430f44:	8f89806c 	lw	t1,-32660(gp)
  430f48:	8f8880a0 	lw	t0,-32608(gp)
  430f4c:	8f85805c 	lw	a1,-32676(gp)
  430f50:	8f9983d8 	lw	t9,-31784(gp)
  430f54:	8d296ed0 	lw	t1,28368(t1)
  430f58:	25081d4d 	addiu	t0,t0,7501
  430f5c:	afa80038 	sw	t0,56(sp)
  430f60:	27a60038 	addiu	a2,sp,56
  430f64:	24070001 	li	a3,1
  430f68:	24a53d44 	addiu	a1,a1,15684
  430f6c:	0320f809 	jalr	t9
  430f70:	afa9003c 	sw	t1,60(sp)
  430f74:	8fbc0018 	lw	gp,24(sp)
  430f78:	00402025 	move	a0,v0
  430f7c:	8f83806c 	lw	v1,-32660(gp)
  430f80:	00000000 	nop
  430f84:	24636ee0 	addiu	v1,v1,28384
  430f88:	ac620000 	sw	v0,0(v1)
  430f8c:	8f998388 	lw	t9,-31864(gp)
  430f90:	00000000 	nop
  430f94:	0320f809 	jalr	t9
  430f98:	00000000 	nop
  430f9c:	8fbc0018 	lw	gp,24(sp)
  430fa0:	240b0002 	li	t3,2
  430fa4:	8f8a80a4 	lw	t2,-32604(gp)
  430fa8:	8f85805c 	lw	a1,-32676(gp)
  430fac:	8f998508 	lw	t9,-31480(gp)
  430fb0:	8fa4002c 	lw	a0,44(sp)
  430fb4:	254a01f9 	addiu	t2,t2,505
  430fb8:	afaa0038 	sw	t2,56(sp)
  430fbc:	afab003c 	sw	t3,60(sp)
  430fc0:	27a60038 	addiu	a2,sp,56
  430fc4:	24070001 	li	a3,1
  430fc8:	0320f809 	jalr	t9
  430fcc:	24a53d50 	addiu	a1,a1,15696
  430fd0:	8fbc0018 	lw	gp,24(sp)
  430fd4:	afa20028 	sw	v0,40(sp)
  430fd8:	8f998388 	lw	t9,-31864(gp)
  430fdc:	00402025 	move	a0,v0
  430fe0:	0320f809 	jalr	t9
  430fe4:	00000000 	nop
  430fe8:	8fbc0018 	lw	gp,24(sp)
  430fec:	8fa40028 	lw	a0,40(sp)
  430ff0:	8f85805c 	lw	a1,-32676(gp)
  430ff4:	8f9983d8 	lw	t9,-31784(gp)
  430ff8:	27a60038 	addiu	a2,sp,56
  430ffc:	00003825 	move	a3,zero
  431000:	0320f809 	jalr	t9
  431004:	24a53d5c 	addiu	a1,a1,15708
  431008:	8fbc0018 	lw	gp,24(sp)
  43100c:	00402025 	move	a0,v0
  431010:	8f998388 	lw	t9,-31864(gp)
  431014:	00000000 	nop
  431018:	0320f809 	jalr	t9
  43101c:	00000000 	nop
  431020:	8fbc0018 	lw	gp,24(sp)
  431024:	8fa40028 	lw	a0,40(sp)
  431028:	8f85805c 	lw	a1,-32676(gp)
  43102c:	8f99821c 	lw	t9,-32228(gp)
  431030:	27a60038 	addiu	a2,sp,56
  431034:	00003825 	move	a3,zero
  431038:	0320f809 	jalr	t9
  43103c:	24a53d64 	addiu	a1,a1,15716
  431040:	8fbc0018 	lw	gp,24(sp)
  431044:	00402025 	move	a0,v0
  431048:	8f83806c 	lw	v1,-32660(gp)
  43104c:	00000000 	nop
  431050:	24636ee4 	addiu	v1,v1,28388
  431054:	ac620000 	sw	v0,0(v1)
  431058:	8f998388 	lw	t9,-31864(gp)
  43105c:	00000000 	nop
  431060:	0320f809 	jalr	t9
  431064:	00000000 	nop
  431068:	8fbc0018 	lw	gp,24(sp)
  43106c:	240d0002 	li	t5,2
  431070:	8f8c80a4 	lw	t4,-32604(gp)
  431074:	8f85805c 	lw	a1,-32676(gp)
  431078:	8f998508 	lw	t9,-31480(gp)
  43107c:	8fa4002c 	lw	a0,44(sp)
  431080:	258c01f9 	addiu	t4,t4,505
  431084:	afac0038 	sw	t4,56(sp)
  431088:	afad003c 	sw	t5,60(sp)
  43108c:	27a60038 	addiu	a2,sp,56
  431090:	24070001 	li	a3,1
  431094:	0320f809 	jalr	t9
  431098:	24a53d70 	addiu	a1,a1,15728
  43109c:	8fbc0018 	lw	gp,24(sp)
  4310a0:	afa20028 	sw	v0,40(sp)
  4310a4:	8f998388 	lw	t9,-31864(gp)
  4310a8:	00402025 	move	a0,v0
  4310ac:	0320f809 	jalr	t9
  4310b0:	00000000 	nop
  4310b4:	8fbc0018 	lw	gp,24(sp)
  4310b8:	8fa40028 	lw	a0,40(sp)
  4310bc:	8f85805c 	lw	a1,-32676(gp)
  4310c0:	8f9983d8 	lw	t9,-31784(gp)
  4310c4:	27a60038 	addiu	a2,sp,56
  4310c8:	00003825 	move	a3,zero
  4310cc:	0320f809 	jalr	t9
  4310d0:	24a53d7c 	addiu	a1,a1,15740
  4310d4:	8fbc0018 	lw	gp,24(sp)
  4310d8:	00402025 	move	a0,v0
  4310dc:	8f998388 	lw	t9,-31864(gp)
  4310e0:	00000000 	nop
  4310e4:	0320f809 	jalr	t9
  4310e8:	00000000 	nop
  4310ec:	8fbc0018 	lw	gp,24(sp)
  4310f0:	8fa40028 	lw	a0,40(sp)
  4310f4:	8f8f806c 	lw	t7,-32660(gp)
  4310f8:	8f8e80a0 	lw	t6,-32608(gp)
  4310fc:	8f85805c 	lw	a1,-32676(gp)
  431100:	8f9984e0 	lw	t9,-31520(gp)
  431104:	8def6ed8 	lw	t7,28376(t7)
  431108:	25ce1d4d 	addiu	t6,t6,7501
  43110c:	afae0038 	sw	t6,56(sp)
  431110:	27a60038 	addiu	a2,sp,56
  431114:	24070001 	li	a3,1
  431118:	24a53d84 	addiu	a1,a1,15748
  43111c:	0320f809 	jalr	t9
  431120:	afaf003c 	sw	t7,60(sp)
  431124:	8fbc0018 	lw	gp,24(sp)
  431128:	00402025 	move	a0,v0
  43112c:	8f83806c 	lw	v1,-32660(gp)
  431130:	8f8580a0 	lw	a1,-32608(gp)
  431134:	24636ef0 	addiu	v1,v1,28400
  431138:	ac620000 	sw	v0,0(v1)
  43113c:	8f9983ac 	lw	t9,-31828(gp)
  431140:	8f868020 	lw	a2,-32736(gp)
  431144:	00003825 	move	a3,zero
  431148:	24a5124b 	addiu	a1,a1,4683
  43114c:	0320f809 	jalr	t9
  431150:	24c60b70 	addiu	a2,a2,2928
  431154:	8fbc0018 	lw	gp,24(sp)
  431158:	00000000 	nop
  43115c:	8f84806c 	lw	a0,-32660(gp)
  431160:	8f998388 	lw	t9,-31864(gp)
  431164:	8c846ef0 	lw	a0,28400(a0)
  431168:	0320f809 	jalr	t9
  43116c:	00000000 	nop
  431170:	8fbc0018 	lw	gp,24(sp)
  431174:	8fa40028 	lw	a0,40(sp)
  431178:	8f81806c 	lw	at,-32660(gp)
  43117c:	8f85805c 	lw	a1,-32676(gp)
  431180:	8f99821c 	lw	t9,-32228(gp)
  431184:	27a60038 	addiu	a2,sp,56
  431188:	00003825 	move	a3,zero
  43118c:	a0206f04 	sb	zero,28420(at)
  431190:	0320f809 	jalr	t9
  431194:	24a53d94 	addiu	a1,a1,15764
  431198:	8fbc0018 	lw	gp,24(sp)
  43119c:	00402025 	move	a0,v0
  4311a0:	8f83806c 	lw	v1,-32660(gp)
  4311a4:	00000000 	nop
  4311a8:	24636ee8 	addiu	v1,v1,28392
  4311ac:	ac620000 	sw	v0,0(v1)
  4311b0:	8f998388 	lw	t9,-31864(gp)
  4311b4:	00000000 	nop
  4311b8:	0320f809 	jalr	t9
  4311bc:	00000000 	nop
  4311c0:	8fbc0018 	lw	gp,24(sp)
  4311c4:	24190002 	li	t9,2
  4311c8:	8f9880a4 	lw	t8,-32604(gp)
  4311cc:	afb9003c 	sw	t9,60(sp)
  4311d0:	8f998508 	lw	t9,-31480(gp)
  4311d4:	8f85805c 	lw	a1,-32676(gp)
  4311d8:	8fa4002c 	lw	a0,44(sp)
  4311dc:	271801f9 	addiu	t8,t8,505
  4311e0:	afb80038 	sw	t8,56(sp)
  4311e4:	27a60038 	addiu	a2,sp,56
  4311e8:	24070001 	li	a3,1
  4311ec:	0320f809 	jalr	t9
  4311f0:	24a53da0 	addiu	a1,a1,15776
  4311f4:	8fbc0018 	lw	gp,24(sp)
  4311f8:	afa20028 	sw	v0,40(sp)
  4311fc:	8f998388 	lw	t9,-31864(gp)
  431200:	00402025 	move	a0,v0
  431204:	0320f809 	jalr	t9
  431208:	00000000 	nop
  43120c:	8fbc0018 	lw	gp,24(sp)
  431210:	8fa40028 	lw	a0,40(sp)
  431214:	8f85805c 	lw	a1,-32676(gp)
  431218:	8f9983d8 	lw	t9,-31784(gp)
  43121c:	27a60038 	addiu	a2,sp,56
  431220:	00003825 	move	a3,zero
  431224:	0320f809 	jalr	t9
  431228:	24a53dac 	addiu	a1,a1,15788
  43122c:	8fbc0018 	lw	gp,24(sp)
  431230:	00402025 	move	a0,v0
  431234:	8f998388 	lw	t9,-31864(gp)
  431238:	00000000 	nop
  43123c:	0320f809 	jalr	t9
  431240:	00000000 	nop
  431244:	8fbc0018 	lw	gp,24(sp)
  431248:	8fa40028 	lw	a0,40(sp)
  43124c:	8f89806c 	lw	t1,-32660(gp)
  431250:	8f8880a0 	lw	t0,-32608(gp)
  431254:	8f85805c 	lw	a1,-32676(gp)
  431258:	8f9984e0 	lw	t9,-31520(gp)
  43125c:	8d296ed8 	lw	t1,28376(t1)
  431260:	25081d4d 	addiu	t0,t0,7501
  431264:	afa80038 	sw	t0,56(sp)
  431268:	27a60038 	addiu	a2,sp,56
  43126c:	24070001 	li	a3,1
  431270:	24a53db0 	addiu	a1,a1,15792
  431274:	0320f809 	jalr	t9
  431278:	afa9003c 	sw	t1,60(sp)
  43127c:	8fbc0018 	lw	gp,24(sp)
  431280:	00402025 	move	a0,v0
  431284:	8f83806c 	lw	v1,-32660(gp)
  431288:	8f8580a0 	lw	a1,-32608(gp)
  43128c:	24636ef4 	addiu	v1,v1,28404
  431290:	ac620000 	sw	v0,0(v1)
  431294:	8f9983ac 	lw	t9,-31828(gp)
  431298:	8f868020 	lw	a2,-32736(gp)
  43129c:	00003825 	move	a3,zero
  4312a0:	24a5124b 	addiu	a1,a1,4683
  4312a4:	0320f809 	jalr	t9
  4312a8:	24c60c0c 	addiu	a2,a2,3084
  4312ac:	8fbc0018 	lw	gp,24(sp)
  4312b0:	00000000 	nop
  4312b4:	8f84806c 	lw	a0,-32660(gp)
  4312b8:	8f998388 	lw	t9,-31864(gp)
  4312bc:	8c846ef4 	lw	a0,28404(a0)
  4312c0:	0320f809 	jalr	t9
  4312c4:	00000000 	nop
  4312c8:	8fbc0018 	lw	gp,24(sp)
  4312cc:	8fa40028 	lw	a0,40(sp)
  4312d0:	8f81806c 	lw	at,-32660(gp)
  4312d4:	8f85805c 	lw	a1,-32676(gp)
  4312d8:	8f99821c 	lw	t9,-32228(gp)
  4312dc:	27a60038 	addiu	a2,sp,56
  4312e0:	00003825 	move	a3,zero
  4312e4:	a0206f05 	sb	zero,28421(at)
  4312e8:	0320f809 	jalr	t9
  4312ec:	24a53dc0 	addiu	a1,a1,15808
  4312f0:	8fbc0018 	lw	gp,24(sp)
  4312f4:	00402025 	move	a0,v0
  4312f8:	8f83806c 	lw	v1,-32660(gp)
  4312fc:	00000000 	nop
  431300:	24636eec 	addiu	v1,v1,28396
  431304:	ac620000 	sw	v0,0(v1)
  431308:	8f998388 	lw	t9,-31864(gp)
  43130c:	00000000 	nop
  431310:	0320f809 	jalr	t9
  431314:	00000000 	nop
  431318:	8fbc0018 	lw	gp,24(sp)
  43131c:	8fa40030 	lw	a0,48(sp)
  431320:	8f9987a4 	lw	t9,-30812(gp)
  431324:	8f8589c0 	lw	a1,-30272(gp)
  431328:	0320f809 	jalr	t9
  43132c:	00000000 	nop
  431330:	8fbf001c 	lw	ra,28(sp)
  431334:	8fbc0018 	lw	gp,24(sp)
  431338:	03e00008 	jr	ra
  43133c:	27bd0060 	addiu	sp,sp,96
