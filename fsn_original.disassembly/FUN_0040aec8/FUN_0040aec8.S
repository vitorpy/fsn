# Function: FUN_0040aec8
# Address: 0x0040aec8 - 0x0040bbd4
# Size: 0xd0c (3340 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040aec8 <main+0xc>:
  40aec8:	27bdfe90 	addiu	sp,sp,-368
  40aecc:	afa50174 	sw	a1,372(sp)
  40aed0:	8fb90174 	lw	t9,372(sp)
  40aed4:	8f8e8080 	lw	t6,-32640(gp)
  40aed8:	afb90014 	sw	t9,20(sp)
  40aedc:	8f9983ec 	lw	t9,-31764(gp)
  40aee0:	8f85805c 	lw	a1,-32676(gp)
  40aee4:	8f868068 	lw	a2,-32664(gp)
  40aee8:	8f88894c 	lw	t0,-30388(gp)
  40aeec:	afa40170 	sw	a0,368(sp)
  40aef0:	afbf0034 	sw	ra,52(sp)
  40aef4:	240f0001 	li	t7,1
  40aef8:	8f848a00 	lw	a0,-30208(gp)
  40aefc:	27b80170 	addiu	t8,sp,368
  40af00:	27a900d0 	addiu	t1,sp,208
  40af04:	240a0001 	li	t2,1
  40af08:	25ce0118 	addiu	t6,t6,280
  40af0c:	afbc0030 	sw	gp,48(sp)
  40af10:	afae00d0 	sw	t6,208(sp)
  40af14:	afaf00d4 	sw	t7,212(sp)
  40af18:	afaa0020 	sw	t2,32(sp)
  40af1c:	afa9001c 	sw	t1,28(sp)
  40af20:	afb80010 	sw	t8,16(sp)
  40af24:	24070005 	li	a3,5
  40af28:	24a5a178 	addiu	a1,a1,-24200
  40af2c:	24c600e0 	addiu	a2,a2,224
  40af30:	0320f809 	jalr	t9
  40af34:	afa80018 	sw	t0,24(sp)
  40af38:	8fbc0030 	lw	gp,48(sp)
  40af3c:	00402025 	move	a0,v0
  40af40:	8f838a10 	lw	v1,-30192(gp)
  40af44:	00000000 	nop
  40af48:	ac620000 	sw	v0,0(v1)
  40af4c:	8f9983fc 	lw	t9,-31748(gp)
  40af50:	00000000 	nop
  40af54:	0320f809 	jalr	t9
  40af58:	00000000 	nop
  40af5c:	8fbc0030 	lw	gp,48(sp)
  40af60:	00000000 	nop
  40af64:	8f848a10 	lw	a0,-30192(gp)
  40af68:	8f818a04 	lw	at,-30204(gp)
  40af6c:	8f9987a8 	lw	t9,-30808(gp)
  40af70:	8c840000 	lw	a0,0(a0)
  40af74:	0320f809 	jalr	t9
  40af78:	ac220000 	sw	v0,0(at)
  40af7c:	8fa30170 	lw	v1,368(sp)
  40af80:	8fbc0030 	lw	gp,48(sp)
  40af84:	28610002 	slti	at,v1,2
  40af88:	1420001f 	bnez	at,40b008 <main+0x14c>
  40af8c:	28610003 	slti	at,v1,3
  40af90:	1020000a 	beqz	at,40afbc <main+0x100>
  40af94:	8fad0174 	lw	t5,372(sp)
  40af98:	8fab0174 	lw	t3,372(sp)
  40af9c:	2401002d 	li	at,45
  40afa0:	8d620004 	lw	v0,4(t3)
  40afa4:	00000000 	nop
  40afa8:	904c0000 	lbu	t4,0(v0)
  40afac:	00000000 	nop
  40afb0:	15810013 	bne	t4,at,40b000 <main+0x144>
  40afb4:	00000000 	nop
  40afb8:	8fad0174 	lw	t5,372(sp)
  40afbc:	8f848098 	lw	a0,-32616(gp)
  40afc0:	8f85805c 	lw	a1,-32676(gp)
  40afc4:	8f9983f8 	lw	t9,-31752(gp)
  40afc8:	8da60000 	lw	a2,0(t5)
  40afcc:	24840020 	addiu	a0,a0,32
  40afd0:	0320f809 	jalr	t9
  40afd4:	24a5a17c 	addiu	a1,a1,-24196
  40afd8:	8fbc0030 	lw	gp,48(sp)
  40afdc:	24040001 	li	a0,1
  40afe0:	8f9983a0 	lw	t9,-31840(gp)
  40afe4:	00000000 	nop
  40afe8:	0320f809 	jalr	t9
  40afec:	00000000 	nop
  40aff0:	8fae0174 	lw	t6,372(sp)
  40aff4:	8fbc0030 	lw	gp,48(sp)
  40aff8:	8dc20004 	lw	v0,4(t6)
  40affc:	00000000 	nop
  40b000:	10000012 	b	40b04c <main+0x190>
  40b004:	afa200b4 	sw	v0,180(sp)
  40b008:	8f8f8a24 	lw	t7,-30172(gp)
  40b00c:	00000000 	nop
  40b010:	91ef0008 	lbu	t7,8(t7)
  40b014:	00000000 	nop
  40b018:	11e00006 	beqz	t7,40b034 <main+0x178>
  40b01c:	00000000 	nop
  40b020:	8f98805c 	lw	t8,-32676(gp)
  40b024:	00000000 	nop
  40b028:	2718a2f8 	addiu	t8,t8,-23816
  40b02c:	10000007 	b	40b04c <main+0x190>
  40b030:	afb800b4 	sw	t8,180(sp)
  40b034:	8f9983f4 	lw	t9,-31756(gp)
  40b038:	00002025 	move	a0,zero
  40b03c:	0320f809 	jalr	t9
  40b040:	24050400 	li	a1,1024
  40b044:	8fbc0030 	lw	gp,48(sp)
  40b048:	afa200b4 	sw	v0,180(sp)
  40b04c:	8f998018 	lw	t9,-32744(gp)
  40b050:	00000000 	nop
  40b054:	2739ae2c 	addiu	t9,t9,-20948
  40b058:	0320f809 	jalr	t9
  40b05c:	00000000 	nop
  40b060:	8fbc0030 	lw	gp,48(sp)
  40b064:	00000000 	nop
  40b068:	8f998018 	lw	t9,-32744(gp)
  40b06c:	00000000 	nop
  40b070:	27391674 	addiu	t9,t9,5748
  40b074:	0320f809 	jalr	t9
  40b078:	00000000 	nop
  40b07c:	8fbc0030 	lw	gp,48(sp)
  40b080:	00000000 	nop
  40b084:	8f998018 	lw	t9,-32744(gp)
  40b088:	00000000 	nop
  40b08c:	2739a704 	addiu	t9,t9,-22780
  40b090:	0320f809 	jalr	t9
  40b094:	00000000 	nop
  40b098:	8fbc0030 	lw	gp,48(sp)
  40b09c:	00000000 	nop
  40b0a0:	8f9983f0 	lw	t9,-31760(gp)
  40b0a4:	8f848950 	lw	a0,-30384(gp)
  40b0a8:	0320f809 	jalr	t9
  40b0ac:	00000000 	nop
  40b0b0:	8fbc0030 	lw	gp,48(sp)
  40b0b4:	00000000 	nop
  40b0b8:	8f81806c 	lw	at,-32660(gp)
  40b0bc:	8f84805c 	lw	a0,-32676(gp)
  40b0c0:	8f9983dc 	lw	t9,-31780(gp)
  40b0c4:	8f8580a0 	lw	a1,-32608(gp)
  40b0c8:	ac226634 	sw	v0,26164(at)
  40b0cc:	0320f809 	jalr	t9
  40b0d0:	2484a2fc 	addiu	a0,a0,-23812
  40b0d4:	8fbc0030 	lw	gp,48(sp)
  40b0d8:	00000000 	nop
  40b0dc:	8f818a08 	lw	at,-30200(gp)
  40b0e0:	8f84805c 	lw	a0,-32676(gp)
  40b0e4:	8f9983dc 	lw	t9,-31780(gp)
  40b0e8:	8f8580a0 	lw	a1,-32608(gp)
  40b0ec:	ac220000 	sw	v0,0(at)
  40b0f0:	0320f809 	jalr	t9
  40b0f4:	2484a300 	addiu	a0,a0,-23808
  40b0f8:	8fbc0030 	lw	gp,48(sp)
  40b0fc:	00000000 	nop
  40b100:	8f848a10 	lw	a0,-30192(gp)
  40b104:	8f818a0c 	lw	at,-30196(gp)
  40b108:	8f9983fc 	lw	t9,-31748(gp)
  40b10c:	8c840000 	lw	a0,0(a0)
  40b110:	0320f809 	jalr	t9
  40b114:	ac220000 	sw	v0,0(at)
  40b118:	8fbc0030 	lw	gp,48(sp)
  40b11c:	00402025 	move	a0,v0
  40b120:	8f85805c 	lw	a1,-32676(gp)
  40b124:	8f9983c0 	lw	t9,-31808(gp)
  40b128:	00003025 	move	a2,zero
  40b12c:	0320f809 	jalr	t9
  40b130:	24a5a304 	addiu	a1,a1,-23804
  40b134:	8fbc0030 	lw	gp,48(sp)
  40b138:	afa20044 	sw	v0,68(sp)
  40b13c:	8f848a04 	lw	a0,-30204(gp)
  40b140:	8f85805c 	lw	a1,-32676(gp)
  40b144:	8f9983c0 	lw	t9,-31808(gp)
  40b148:	8c840000 	lw	a0,0(a0)
  40b14c:	00003025 	move	a2,zero
  40b150:	0320f809 	jalr	t9
  40b154:	24a5a314 	addiu	a1,a1,-23788
  40b158:	8fbc0030 	lw	gp,48(sp)
  40b15c:	8fa50044 	lw	a1,68(sp)
  40b160:	8f848a10 	lw	a0,-30192(gp)
  40b164:	8f878018 	lw	a3,-32744(gp)
  40b168:	8f9983bc 	lw	t9,-31812(gp)
  40b16c:	8c840000 	lw	a0,0(a0)
  40b170:	00403025 	move	a2,v0
  40b174:	afa00010 	sw	zero,16(sp)
  40b178:	0320f809 	jalr	t9
  40b17c:	24e7eef0 	addiu	a3,a3,-4368
  40b180:	8fbc0030 	lw	gp,48(sp)
  40b184:	24060010 	li	a2,16
  40b188:	8f848a00 	lw	a0,-30208(gp)
  40b18c:	8f858068 	lw	a1,-32664(gp)
  40b190:	8f9983c4 	lw	t9,-31804(gp)
  40b194:	8c840000 	lw	a0,0(a0)
  40b198:	0320f809 	jalr	t9
  40b19c:	24a50024 	addiu	a1,a1,36
  40b1a0:	8fbc0030 	lw	gp,48(sp)
  40b1a4:	27a700d0 	addiu	a3,sp,208
  40b1a8:	8f858094 	lw	a1,-32620(gp)
  40b1ac:	8f868a10 	lw	a2,-30192(gp)
  40b1b0:	8f84805c 	lw	a0,-32676(gp)
  40b1b4:	8f9983b4 	lw	t9,-31820(gp)
  40b1b8:	8ca50000 	lw	a1,0(a1)
  40b1bc:	8cc60000 	lw	a2,0(a2)
  40b1c0:	afa00010 	sw	zero,16(sp)
  40b1c4:	0320f809 	jalr	t9
  40b1c8:	2484a328 	addiu	a0,a0,-23768
  40b1cc:	8fbc0030 	lw	gp,48(sp)
  40b1d0:	afa200c8 	sw	v0,200(sp)
  40b1d4:	8f9987a4 	lw	t9,-30812(gp)
  40b1d8:	8f8589a0 	lw	a1,-30304(gp)
  40b1dc:	0320f809 	jalr	t9
  40b1e0:	00402025 	move	a0,v0
  40b1e4:	8fbc0030 	lw	gp,48(sp)
  40b1e8:	8fa400c8 	lw	a0,200(sp)
  40b1ec:	8f998018 	lw	t9,-32744(gp)
  40b1f0:	00000000 	nop
  40b1f4:	2739dff8 	addiu	t9,t9,-8200
  40b1f8:	0320f809 	jalr	t9
  40b1fc:	00000000 	nop
  40b200:	8fbc0030 	lw	gp,48(sp)
  40b204:	8fa600c8 	lw	a2,200(sp)
  40b208:	8f8580b4 	lw	a1,-32588(gp)
  40b20c:	8f84805c 	lw	a0,-32676(gp)
  40b210:	8f9983b4 	lw	t9,-31820(gp)
  40b214:	8ca50000 	lw	a1,0(a1)
  40b218:	afa200c4 	sw	v0,196(sp)
  40b21c:	27a700d0 	addiu	a3,sp,208
  40b220:	afa00010 	sw	zero,16(sp)
  40b224:	0320f809 	jalr	t9
  40b228:	2484a330 	addiu	a0,a0,-23760
  40b22c:	8fbc0030 	lw	gp,48(sp)
  40b230:	24080001 	li	t0,1
  40b234:	8f9980a0 	lw	t9,-32608(gp)
  40b238:	8f83806c 	lw	v1,-32660(gp)
  40b23c:	27391d63 	addiu	t9,t9,7523
  40b240:	afb900d0 	sw	t9,208(sp)
  40b244:	8f8980a0 	lw	t1,-32608(gp)
  40b248:	8f998018 	lw	t9,-32744(gp)
  40b24c:	240a0001 	li	t2,1
  40b250:	24636660 	addiu	v1,v1,26208
  40b254:	252927b5 	addiu	t1,t1,10165
  40b258:	2739d3cc 	addiu	t9,t9,-11316
  40b25c:	ac620000 	sw	v0,0(v1)
  40b260:	afa800d4 	sw	t0,212(sp)
  40b264:	afa900d8 	sw	t1,216(sp)
  40b268:	afaa00dc 	sw	t2,220(sp)
  40b26c:	00402025 	move	a0,v0
  40b270:	27a500d0 	addiu	a1,sp,208
  40b274:	0320f809 	jalr	t9
  40b278:	24060002 	li	a2,2
  40b27c:	8fbc0030 	lw	gp,48(sp)
  40b280:	240c0001 	li	t4,1
  40b284:	8f83806c 	lw	v1,-32660(gp)
  40b288:	8f9980a0 	lw	t9,-32608(gp)
  40b28c:	2463665c 	addiu	v1,v1,26204
  40b290:	ac620000 	sw	v0,0(v1)
  40b294:	27391d8a 	addiu	t9,t9,7562
  40b298:	8f8b80a0 	lw	t3,-32608(gp)
  40b29c:	8f8d80a0 	lw	t5,-32608(gp)
  40b2a0:	8f8f80a0 	lw	t7,-32608(gp)
  40b2a4:	8f8580b0 	lw	a1,-32592(gp)
  40b2a8:	8f86806c 	lw	a2,-32660(gp)
  40b2ac:	afb900e8 	sw	t9,232(sp)
  40b2b0:	8f9983b4 	lw	t9,-31820(gp)
  40b2b4:	8f84805c 	lw	a0,-32676(gp)
  40b2b8:	240e0001 	li	t6,1
  40b2bc:	24180003 	li	t8,3
  40b2c0:	24090004 	li	t1,4
  40b2c4:	256b27b5 	addiu	t3,t3,10165
  40b2c8:	25ad1399 	addiu	t5,t5,5017
  40b2cc:	25ef1d63 	addiu	t7,t7,7523
  40b2d0:	8ca50000 	lw	a1,0(a1)
  40b2d4:	8cc66660 	lw	a2,26208(a2)
  40b2d8:	afab00d0 	sw	t3,208(sp)
  40b2dc:	afac00d4 	sw	t4,212(sp)
  40b2e0:	afad00d8 	sw	t5,216(sp)
  40b2e4:	afae00dc 	sw	t6,220(sp)
  40b2e8:	afaf00e0 	sw	t7,224(sp)
  40b2ec:	afb800e4 	sw	t8,228(sp)
  40b2f0:	afa200ec 	sw	v0,236(sp)
  40b2f4:	afa90010 	sw	t1,16(sp)
  40b2f8:	27a700d0 	addiu	a3,sp,208
  40b2fc:	0320f809 	jalr	t9
  40b300:	2484a338 	addiu	a0,a0,-23752
  40b304:	8fbc0030 	lw	gp,48(sp)
  40b308:	00000000 	nop
  40b30c:	8f998018 	lw	t9,-32744(gp)
  40b310:	8f81806c 	lw	at,-32660(gp)
  40b314:	2739df80 	addiu	t9,t9,-8320
  40b318:	0320f809 	jalr	t9
  40b31c:	ac226664 	sw	v0,26212(at)
  40b320:	8fbc0030 	lw	gp,48(sp)
  40b324:	00000000 	nop
  40b328:	8f9986a0 	lw	t9,-31072(gp)
  40b32c:	00000000 	nop
  40b330:	0320f809 	jalr	t9
  40b334:	00000000 	nop
  40b338:	8fbc0030 	lw	gp,48(sp)
  40b33c:	10400004 	beqz	v0,40b350 <main+0x494>
  40b340:	240c0001 	li	t4,1
  40b344:	8f818068 	lw	at,-32664(gp)
  40b348:	240a3000 	li	t2,12288
  40b34c:	ac2a00a4 	sw	t2,164(at)
  40b350:	8f98806c 	lw	t8,-32660(gp)
  40b354:	8f8b80a0 	lw	t3,-32608(gp)
  40b358:	8f8d80a0 	lw	t5,-32608(gp)
  40b35c:	8f8f80a0 	lw	t7,-32608(gp)
  40b360:	8f84806c 	lw	a0,-32660(gp)
  40b364:	8f85805c 	lw	a1,-32676(gp)
  40b368:	8f9983d8 	lw	t9,-31784(gp)
  40b36c:	8f186664 	lw	t8,26212(t8)
  40b370:	240e0003 	li	t6,3
  40b374:	256b27b5 	addiu	t3,t3,10165
  40b378:	25ad1d63 	addiu	t5,t5,7523
  40b37c:	25ef1d8a 	addiu	t7,t7,7562
  40b380:	8c846660 	lw	a0,26208(a0)
  40b384:	afab00d0 	sw	t3,208(sp)
  40b388:	afac00d4 	sw	t4,212(sp)
  40b38c:	afad00d8 	sw	t5,216(sp)
  40b390:	afae00dc 	sw	t6,220(sp)
  40b394:	afaf00e0 	sw	t7,224(sp)
  40b398:	27a600d0 	addiu	a2,sp,208
  40b39c:	24070003 	li	a3,3
  40b3a0:	24a5a344 	addiu	a1,a1,-23740
  40b3a4:	0320f809 	jalr	t9
  40b3a8:	afb800e4 	sw	t8,228(sp)
  40b3ac:	8fbc0030 	lw	gp,48(sp)
  40b3b0:	afa200b8 	sw	v0,184(sp)
  40b3b4:	8f998388 	lw	t9,-31864(gp)
  40b3b8:	00402025 	move	a0,v0
  40b3bc:	0320f809 	jalr	t9
  40b3c0:	00000000 	nop
  40b3c4:	8fbc0030 	lw	gp,48(sp)
  40b3c8:	8fac00b8 	lw	t4,184(sp)
  40b3cc:	8f9980a0 	lw	t9,-32608(gp)
  40b3d0:	8f8980a0 	lw	t1,-32608(gp)
  40b3d4:	273927b5 	addiu	t9,t9,10165
  40b3d8:	8f8b80a0 	lw	t3,-32608(gp)
  40b3dc:	8f8d80a0 	lw	t5,-32608(gp)
  40b3e0:	8f84806c 	lw	a0,-32660(gp)
  40b3e4:	afb900d0 	sw	t9,208(sp)
  40b3e8:	8f9983d8 	lw	t9,-31784(gp)
  40b3ec:	8f85805c 	lw	a1,-32676(gp)
  40b3f0:	24080001 	li	t0,1
  40b3f4:	240a0003 	li	t2,3
  40b3f8:	240e0001 	li	t6,1
  40b3fc:	25291d63 	addiu	t1,t1,7523
  40b400:	256b1d8a 	addiu	t3,t3,7562
  40b404:	25ad2375 	addiu	t5,t5,9077
  40b408:	8c846660 	lw	a0,26208(a0)
  40b40c:	afa800d4 	sw	t0,212(sp)
  40b410:	afa900d8 	sw	t1,216(sp)
  40b414:	afaa00dc 	sw	t2,220(sp)
  40b418:	afab00e0 	sw	t3,224(sp)
  40b41c:	afad00e8 	sw	t5,232(sp)
  40b420:	afae00ec 	sw	t6,236(sp)
  40b424:	27a600d0 	addiu	a2,sp,208
  40b428:	24070004 	li	a3,4
  40b42c:	afac00e4 	sw	t4,228(sp)
  40b430:	0320f809 	jalr	t9
  40b434:	24a5a354 	addiu	a1,a1,-23724
  40b438:	8fbc0030 	lw	gp,48(sp)
  40b43c:	00402025 	move	a0,v0
  40b440:	8f83806c 	lw	v1,-32660(gp)
  40b444:	00000000 	nop
  40b448:	24636648 	addiu	v1,v1,26184
  40b44c:	ac620000 	sw	v0,0(v1)
  40b450:	8f998388 	lw	t9,-31864(gp)
  40b454:	00000000 	nop
  40b458:	0320f809 	jalr	t9
  40b45c:	00000000 	nop
  40b460:	8fbc0030 	lw	gp,48(sp)
  40b464:	00000000 	nop
  40b468:	8f84806c 	lw	a0,-32660(gp)
  40b46c:	8f9987a4 	lw	t9,-30812(gp)
  40b470:	8f8589cc 	lw	a1,-30260(gp)
  40b474:	8c846648 	lw	a0,26184(a0)
  40b478:	0320f809 	jalr	t9
  40b47c:	00000000 	nop
  40b480:	8fbc0030 	lw	gp,48(sp)
  40b484:	00002825 	move	a1,zero
  40b488:	8f84805c 	lw	a0,-32676(gp)
  40b48c:	8f998568 	lw	t9,-31384(gp)
  40b490:	2484a35c 	addiu	a0,a0,-23716
  40b494:	0320f809 	jalr	t9
  40b498:	00000000 	nop
  40b49c:	8fbc0030 	lw	gp,48(sp)
  40b4a0:	24180003 	li	t8,3
  40b4a4:	8f9980a0 	lw	t9,-32608(gp)
  40b4a8:	8f88806c 	lw	t0,-32660(gp)
  40b4ac:	27392841 	addiu	t9,t9,10305
  40b4b0:	8f8f80a0 	lw	t7,-32608(gp)
  40b4b4:	afb900d8 	sw	t9,216(sp)
  40b4b8:	8f9980a0 	lw	t9,-32608(gp)
  40b4bc:	8d086648 	lw	t0,26184(t0)
  40b4c0:	25ef27b5 	addiu	t7,t7,10165
  40b4c4:	8f8e806c 	lw	t6,-32660(gp)
  40b4c8:	afaf00d0 	sw	t7,208(sp)
  40b4cc:	27392336 	addiu	t9,t9,9014
  40b4d0:	afa800dc 	sw	t0,220(sp)
  40b4d4:	8f8980a0 	lw	t1,-32608(gp)
  40b4d8:	8f8b80a0 	lw	t3,-32608(gp)
  40b4dc:	8f8d80a0 	lw	t5,-32608(gp)
  40b4e0:	8f8f80a0 	lw	t7,-32608(gp)
  40b4e4:	8f8880a0 	lw	t0,-32608(gp)
  40b4e8:	8f84806c 	lw	a0,-32660(gp)
  40b4ec:	afb90100 	sw	t9,256(sp)
  40b4f0:	8f99837c 	lw	t9,-31876(gp)
  40b4f4:	8f85805c 	lw	a1,-32676(gp)
  40b4f8:	8dce6664 	lw	t6,26212(t6)
  40b4fc:	afb800d4 	sw	t8,212(sp)
  40b500:	240a0001 	li	t2,1
  40b504:	240c0003 	li	t4,3
  40b508:	24180001 	li	t8,1
  40b50c:	25291399 	addiu	t1,t1,5017
  40b510:	256b1d63 	addiu	t3,t3,7523
  40b514:	25ad1d8a 	addiu	t5,t5,7562
  40b518:	25ef2375 	addiu	t7,t7,9077
  40b51c:	2508235c 	addiu	t0,t0,9052
  40b520:	8c846660 	lw	a0,26208(a0)
  40b524:	afa900e0 	sw	t1,224(sp)
  40b528:	afaa00e4 	sw	t2,228(sp)
  40b52c:	afab00e8 	sw	t3,232(sp)
  40b530:	afac00ec 	sw	t4,236(sp)
  40b534:	afad00f0 	sw	t5,240(sp)
  40b538:	afaf00f8 	sw	t7,248(sp)
  40b53c:	afb800fc 	sw	t8,252(sp)
  40b540:	afa00104 	sw	zero,260(sp)
  40b544:	afa80108 	sw	t0,264(sp)
  40b548:	afa0010c 	sw	zero,268(sp)
  40b54c:	27a600d0 	addiu	a2,sp,208
  40b550:	24070008 	li	a3,8
  40b554:	24a5a378 	addiu	a1,a1,-23688
  40b558:	0320f809 	jalr	t9
  40b55c:	afae00f4 	sw	t6,244(sp)
  40b560:	8fbc0030 	lw	gp,48(sp)
  40b564:	00402025 	move	a0,v0
  40b568:	8f83806c 	lw	v1,-32660(gp)
  40b56c:	00000000 	nop
  40b570:	24636650 	addiu	v1,v1,26192
  40b574:	ac620000 	sw	v0,0(v1)
  40b578:	8f998388 	lw	t9,-31864(gp)
  40b57c:	00000000 	nop
  40b580:	0320f809 	jalr	t9
  40b584:	00000000 	nop
  40b588:	8fbc0030 	lw	gp,48(sp)
  40b58c:	24190004 	li	t9,4
  40b590:	8f8980a0 	lw	t1,-32608(gp)
  40b594:	8f8b80a0 	lw	t3,-32608(gp)
  40b598:	8f8d80a0 	lw	t5,-32608(gp)
  40b59c:	8f8f80a0 	lw	t7,-32608(gp)
  40b5a0:	8f858088 	lw	a1,-32632(gp)
  40b5a4:	8f86806c 	lw	a2,-32660(gp)
  40b5a8:	afb90010 	sw	t9,16(sp)
  40b5ac:	8f9983b4 	lw	t9,-31820(gp)
  40b5b0:	8f84805c 	lw	a0,-32676(gp)
  40b5b4:	240a0001 	li	t2,1
  40b5b8:	240c0001 	li	t4,1
  40b5bc:	240e0001 	li	t6,1
  40b5c0:	24180001 	li	t8,1
  40b5c4:	252927b5 	addiu	t1,t1,10165
  40b5c8:	256b1399 	addiu	t3,t3,5017
  40b5cc:	25ad1d63 	addiu	t5,t5,7523
  40b5d0:	25ef2375 	addiu	t7,t7,9077
  40b5d4:	8ca50000 	lw	a1,0(a1)
  40b5d8:	8cc66650 	lw	a2,26192(a2)
  40b5dc:	afa900d0 	sw	t1,208(sp)
  40b5e0:	afaa00d4 	sw	t2,212(sp)
  40b5e4:	afab00d8 	sw	t3,216(sp)
  40b5e8:	afac00dc 	sw	t4,220(sp)
  40b5ec:	afad00e0 	sw	t5,224(sp)
  40b5f0:	afae00e4 	sw	t6,228(sp)
  40b5f4:	afaf00e8 	sw	t7,232(sp)
  40b5f8:	afb800ec 	sw	t8,236(sp)
  40b5fc:	27a700d0 	addiu	a3,sp,208
  40b600:	0320f809 	jalr	t9
  40b604:	2484a384 	addiu	a0,a0,-23676
  40b608:	8fbc0030 	lw	gp,48(sp)
  40b60c:	00000000 	nop
  40b610:	8f998018 	lw	t9,-32744(gp)
  40b614:	8f81806c 	lw	at,-32660(gp)
  40b618:	2739a7ec 	addiu	t9,t9,-22548
  40b61c:	0320f809 	jalr	t9
  40b620:	ac22664c 	sw	v0,26188(at)
  40b624:	8fbc0030 	lw	gp,48(sp)
  40b628:	00000000 	nop
  40b62c:	8f888984 	lw	t0,-30332(gp)
  40b630:	8f998388 	lw	t9,-31864(gp)
  40b634:	8d080000 	lw	t0,0(t0)
  40b638:	00000000 	nop
  40b63c:	8d04000c 	lw	a0,12(t0)
  40b640:	0320f809 	jalr	t9
  40b644:	00000000 	nop
  40b648:	8fbc0030 	lw	gp,48(sp)
  40b64c:	8fa400c8 	lw	a0,200(sp)
  40b650:	8f89806c 	lw	t1,-32660(gp)
  40b654:	8f9983cc 	lw	t9,-31796(gp)
  40b658:	8d296660 	lw	t1,26208(t1)
  40b65c:	8fa500c4 	lw	a1,196(sp)
  40b660:	00003025 	move	a2,zero
  40b664:	00003825 	move	a3,zero
  40b668:	afa00010 	sw	zero,16(sp)
  40b66c:	0320f809 	jalr	t9
  40b670:	afa90014 	sw	t1,20(sp)
  40b674:	8fbc0030 	lw	gp,48(sp)
  40b678:	00000000 	nop
  40b67c:	8f848a10 	lw	a0,-30192(gp)
  40b680:	8f998374 	lw	t9,-31884(gp)
  40b684:	8c840000 	lw	a0,0(a0)
  40b688:	0320f809 	jalr	t9
  40b68c:	00000000 	nop
  40b690:	8fbc0030 	lw	gp,48(sp)
  40b694:	00002025 	move	a0,zero
  40b698:	8f998310 	lw	t9,-31984(gp)
  40b69c:	00000000 	nop
  40b6a0:	0320f809 	jalr	t9
  40b6a4:	00000000 	nop
  40b6a8:	8fbc0030 	lw	gp,48(sp)
  40b6ac:	00000000 	nop
  40b6b0:	8f848a10 	lw	a0,-30192(gp)
  40b6b4:	8f9987e8 	lw	t9,-30744(gp)
  40b6b8:	8c840000 	lw	a0,0(a0)
  40b6bc:	0320f809 	jalr	t9
  40b6c0:	00000000 	nop
  40b6c4:	8fbc0030 	lw	gp,48(sp)
  40b6c8:	00002825 	move	a1,zero
  40b6cc:	8f84806c 	lw	a0,-32660(gp)
  40b6d0:	8f998318 	lw	t9,-31976(gp)
  40b6d4:	8c84665c 	lw	a0,26204(a0)
  40b6d8:	0320f809 	jalr	t9
  40b6dc:	00000000 	nop
  40b6e0:	8fbc0030 	lw	gp,48(sp)
  40b6e4:	8fa400c4 	lw	a0,196(sp)
  40b6e8:	8f998318 	lw	t9,-31976(gp)
  40b6ec:	00002825 	move	a1,zero
  40b6f0:	0320f809 	jalr	t9
  40b6f4:	00000000 	nop
  40b6f8:	8fbc0030 	lw	gp,48(sp)
  40b6fc:	00002825 	move	a1,zero
  40b700:	8f8a8984 	lw	t2,-30332(gp)
  40b704:	8f998318 	lw	t9,-31976(gp)
  40b708:	8d4a0000 	lw	t2,0(t2)
  40b70c:	00000000 	nop
  40b710:	8d440008 	lw	a0,8(t2)
  40b714:	0320f809 	jalr	t9
  40b718:	00000000 	nop
  40b71c:	8fbc0030 	lw	gp,48(sp)
  40b720:	00002825 	move	a1,zero
  40b724:	8f8b8984 	lw	t3,-30332(gp)
  40b728:	8f998318 	lw	t9,-31976(gp)
  40b72c:	8d6b0000 	lw	t3,0(t3)
  40b730:	00000000 	nop
  40b734:	8d64000c 	lw	a0,12(t3)
  40b738:	0320f809 	jalr	t9
  40b73c:	00000000 	nop
  40b740:	8fbc0030 	lw	gp,48(sp)
  40b744:	00000000 	nop
  40b748:	8f99851c 	lw	t9,-31460(gp)
  40b74c:	00000000 	nop
  40b750:	0320f809 	jalr	t9
  40b754:	00000000 	nop
  40b758:	8fbc0030 	lw	gp,48(sp)
  40b75c:	240d0004 	li	t5,4
  40b760:	8f8c80a0 	lw	t4,-32608(gp)
  40b764:	8f8e80a0 	lw	t6,-32608(gp)
  40b768:	8f838984 	lw	v1,-30332(gp)
  40b76c:	258c27b5 	addiu	t4,t4,10165
  40b770:	8c630000 	lw	v1,0(v1)
  40b774:	25ce2841 	addiu	t6,t6,10305
  40b778:	afac00d0 	sw	t4,208(sp)
  40b77c:	afad00d4 	sw	t5,212(sp)
  40b780:	afae00d8 	sw	t6,216(sp)
  40b784:	8c6f002c 	lw	t7,44(v1)
  40b788:	8f9880a0 	lw	t8,-32608(gp)
  40b78c:	8f8880a0 	lw	t0,-32608(gp)
  40b790:	24190004 	li	t9,4
  40b794:	27181399 	addiu	t8,t8,5017
  40b798:	250813eb 	addiu	t0,t0,5099
  40b79c:	afb800e0 	sw	t8,224(sp)
  40b7a0:	afb900e4 	sw	t9,228(sp)
  40b7a4:	afa800e8 	sw	t0,232(sp)
  40b7a8:	afaf00dc 	sw	t7,220(sp)
  40b7ac:	8c690008 	lw	t1,8(v1)
  40b7b0:	8f8a80a0 	lw	t2,-32608(gp)
  40b7b4:	8f8c80a0 	lw	t4,-32608(gp)
  40b7b8:	240b0004 	li	t3,4
  40b7bc:	254a1d63 	addiu	t2,t2,7523
  40b7c0:	258c1d8a 	addiu	t4,t4,7562
  40b7c4:	afaa00f0 	sw	t2,240(sp)
  40b7c8:	afab00f4 	sw	t3,244(sp)
  40b7cc:	afac00f8 	sw	t4,248(sp)
  40b7d0:	afa900ec 	sw	t1,236(sp)
  40b7d4:	8c6d0008 	lw	t5,8(v1)
  40b7d8:	8f8e80a0 	lw	t6,-32608(gp)
  40b7dc:	8f9880a0 	lw	t8,-32608(gp)
  40b7e0:	240f0004 	li	t7,4
  40b7e4:	25ce2375 	addiu	t6,t6,9077
  40b7e8:	2718239f 	addiu	t8,t8,9119
  40b7ec:	afae0100 	sw	t6,256(sp)
  40b7f0:	afaf0104 	sw	t7,260(sp)
  40b7f4:	afb80108 	sw	t8,264(sp)
  40b7f8:	afad00fc 	sw	t5,252(sp)
  40b7fc:	8c790008 	lw	t9,8(v1)
  40b800:	27a500d0 	addiu	a1,sp,208
  40b804:	afb9010c 	sw	t9,268(sp)
  40b808:	8f998790 	lw	t9,-30832(gp)
  40b80c:	8c64000c 	lw	a0,12(v1)
  40b810:	0320f809 	jalr	t9
  40b814:	24060008 	li	a2,8
  40b818:	8fbc0030 	lw	gp,48(sp)
  40b81c:	00000000 	nop
  40b820:	8f84805c 	lw	a0,-32676(gp)
  40b824:	8f998814 	lw	t9,-30700(gp)
  40b828:	2484a38c 	addiu	a0,a0,-23668
  40b82c:	0320f809 	jalr	t9
  40b830:	00000000 	nop
  40b834:	8fbc0030 	lw	gp,48(sp)
  40b838:	00000000 	nop
  40b83c:	8f99870c 	lw	t9,-30964(gp)
  40b840:	00000000 	nop
  40b844:	0320f809 	jalr	t9
  40b848:	00000000 	nop
  40b84c:	8fbc0030 	lw	gp,48(sp)
  40b850:	00000000 	nop
  40b854:	8f998840 	lw	t9,-30656(gp)
  40b858:	00000000 	nop
  40b85c:	0320f809 	jalr	t9
  40b860:	00000000 	nop
  40b864:	8fbc0030 	lw	gp,48(sp)
  40b868:	00000000 	nop
  40b86c:	8f99872c 	lw	t9,-30932(gp)
  40b870:	00000000 	nop
  40b874:	0320f809 	jalr	t9
  40b878:	00000000 	nop
  40b87c:	8fa800b4 	lw	t0,180(sp)
  40b880:	8fbc0030 	lw	gp,48(sp)
  40b884:	91090000 	lbu	t1,0(t0)
  40b888:	2401002f 	li	at,47
  40b88c:	1121001b 	beq	t1,at,40b8fc <main+0xa40>
  40b890:	00000000 	nop
  40b894:	8f8a8a24 	lw	t2,-30172(gp)
  40b898:	00000000 	nop
  40b89c:	914a0008 	lbu	t2,8(t2)
  40b8a0:	00000000 	nop
  40b8a4:	15400015 	bnez	t2,40b8fc <main+0xa40>
  40b8a8:	00000000 	nop
  40b8ac:	8f9983f4 	lw	t9,-31756(gp)
  40b8b0:	00002025 	move	a0,zero
  40b8b4:	0320f809 	jalr	t9
  40b8b8:	24050400 	li	a1,1024
  40b8bc:	8fbc0030 	lw	gp,48(sp)
  40b8c0:	afa200b0 	sw	v0,176(sp)
  40b8c4:	8f85805c 	lw	a1,-32676(gp)
  40b8c8:	8f99831c 	lw	t9,-31972(gp)
  40b8cc:	00402025 	move	a0,v0
  40b8d0:	0320f809 	jalr	t9
  40b8d4:	24a5a3ac 	addiu	a1,a1,-23636
  40b8d8:	8fbc0030 	lw	gp,48(sp)
  40b8dc:	8fa400b0 	lw	a0,176(sp)
  40b8e0:	8f99831c 	lw	t9,-31972(gp)
  40b8e4:	8fa500b4 	lw	a1,180(sp)
  40b8e8:	0320f809 	jalr	t9
  40b8ec:	00000000 	nop
  40b8f0:	8fab00b0 	lw	t3,176(sp)
  40b8f4:	8fbc0030 	lw	gp,48(sp)
  40b8f8:	afab00b4 	sw	t3,180(sp)
  40b8fc:	8f9985c8 	lw	t9,-31288(gp)
  40b900:	8fa400b4 	lw	a0,180(sp)
  40b904:	0320f809 	jalr	t9
  40b908:	00000000 	nop
  40b90c:	8fbc0030 	lw	gp,48(sp)
  40b910:	00000000 	nop
  40b914:	8f998588 	lw	t9,-31352(gp)
  40b918:	00000000 	nop
  40b91c:	0320f809 	jalr	t9
  40b920:	00000000 	nop
  40b924:	8fbc0030 	lw	gp,48(sp)
  40b928:	00000000 	nop
  40b92c:	8f8c891c 	lw	t4,-30436(gp)
  40b930:	00000000 	nop
  40b934:	918c0000 	lbu	t4,0(t4)
  40b938:	00000000 	nop
  40b93c:	11800007 	beqz	t4,40b95c <main+0xaa0>
  40b940:	00000000 	nop
  40b944:	8f99866c 	lw	t9,-31124(gp)
  40b948:	00000000 	nop
  40b94c:	0320f809 	jalr	t9
  40b950:	00000000 	nop
  40b954:	8fbc0030 	lw	gp,48(sp)
  40b958:	00000000 	nop
  40b95c:	8f82897c 	lw	v0,-30340(gp)
  40b960:	00000000 	nop
  40b964:	8c420000 	lw	v0,0(v0)
  40b968:	00000000 	nop
  40b96c:	90430c51 	lbu	v1,3153(v0)
  40b970:	00000000 	nop
  40b974:	10600011 	beqz	v1,40b9bc <main+0xb00>
  40b978:	00000000 	nop
  40b97c:	8f8d8980 	lw	t5,-30336(gp)
  40b980:	00000000 	nop
  40b984:	8dad0000 	lw	t5,0(t5)
  40b988:	00000000 	nop
  40b98c:	91ae0c51 	lbu	t6,3153(t5)
  40b990:	00000000 	nop
  40b994:	11c00009 	beqz	t6,40b9bc <main+0xb00>
  40b998:	00000000 	nop
  40b99c:	8f998018 	lw	t9,-32744(gp)
  40b9a0:	00000000 	nop
  40b9a4:	27391230 	addiu	t9,t9,4656
  40b9a8:	0320f809 	jalr	t9
  40b9ac:	00000000 	nop
  40b9b0:	8fbc0030 	lw	gp,48(sp)
  40b9b4:	10000004 	b	40b9c8 <main+0xb0c>
  40b9b8:	00000000 	nop
  40b9bc:	14600002 	bnez	v1,40b9c8 <main+0xb0c>
  40b9c0:	240f0001 	li	t7,1
  40b9c4:	a04f0c51 	sb	t7,3153(v0)
  40b9c8:	8f988918 	lw	t8,-30440(gp)
  40b9cc:	00000000 	nop
  40b9d0:	93180000 	lbu	t8,0(t8)
  40b9d4:	00000000 	nop
  40b9d8:	13000008 	beqz	t8,40b9fc <main+0xb40>
  40b9dc:	00000000 	nop
  40b9e0:	8f998018 	lw	t9,-32744(gp)
  40b9e4:	00000000 	nop
  40b9e8:	2739da94 	addiu	t9,t9,-9580
  40b9ec:	0320f809 	jalr	t9
  40b9f0:	00000000 	nop
  40b9f4:	8fbc0030 	lw	gp,48(sp)
  40b9f8:	00000000 	nop
  40b9fc:	8f998920 	lw	t9,-30432(gp)
  40ba00:	00000000 	nop
  40ba04:	93390000 	lbu	t9,0(t9)
  40ba08:	00000000 	nop
  40ba0c:	13200008 	beqz	t9,40ba30 <main+0xb74>
  40ba10:	00000000 	nop
  40ba14:	8f998018 	lw	t9,-32744(gp)
  40ba18:	00000000 	nop
  40ba1c:	2739dee0 	addiu	t9,t9,-8480
  40ba20:	0320f809 	jalr	t9
  40ba24:	00000000 	nop
  40ba28:	8fbc0030 	lw	gp,48(sp)
  40ba2c:	00000000 	nop
  40ba30:	8f998018 	lw	t9,-32744(gp)
  40ba34:	00000000 	nop
  40ba38:	2739ed40 	addiu	t9,t9,-4800
  40ba3c:	0320f809 	jalr	t9
  40ba40:	00000000 	nop
  40ba44:	8fbc0030 	lw	gp,48(sp)
  40ba48:	24050001 	li	a1,1
  40ba4c:	8f84806c 	lw	a0,-32660(gp)
  40ba50:	8f998318 	lw	t9,-31976(gp)
  40ba54:	8c84665c 	lw	a0,26204(a0)
  40ba58:	0320f809 	jalr	t9
  40ba5c:	00000000 	nop
  40ba60:	8fbc0030 	lw	gp,48(sp)
  40ba64:	8fa400c4 	lw	a0,196(sp)
  40ba68:	8f998318 	lw	t9,-31976(gp)
  40ba6c:	24050001 	li	a1,1
  40ba70:	0320f809 	jalr	t9
  40ba74:	00000000 	nop
  40ba78:	8fbc0030 	lw	gp,48(sp)
  40ba7c:	24050001 	li	a1,1
  40ba80:	8f888984 	lw	t0,-30332(gp)
  40ba84:	8f998318 	lw	t9,-31976(gp)
  40ba88:	8d080000 	lw	t0,0(t0)
  40ba8c:	00000000 	nop
  40ba90:	8d040008 	lw	a0,8(t0)
  40ba94:	0320f809 	jalr	t9
  40ba98:	00000000 	nop
  40ba9c:	8fbc0030 	lw	gp,48(sp)
  40baa0:	24050001 	li	a1,1
  40baa4:	8f898984 	lw	t1,-30332(gp)
  40baa8:	8f998318 	lw	t9,-31976(gp)
  40baac:	8d290000 	lw	t1,0(t1)
  40bab0:	00000000 	nop
  40bab4:	8d24000c 	lw	a0,12(t1)
  40bab8:	0320f809 	jalr	t9
  40babc:	00000000 	nop
  40bac0:	8fbc0030 	lw	gp,48(sp)
  40bac4:	00000000 	nop
  40bac8:	8f99879c 	lw	t9,-30820(gp)
  40bacc:	00000000 	nop
  40bad0:	0320f809 	jalr	t9
  40bad4:	00000000 	nop
  40bad8:	8fbc0030 	lw	gp,48(sp)
  40badc:	00000000 	nop
  40bae0:	8f9985b8 	lw	t9,-31304(gp)
  40bae4:	00000000 	nop
  40bae8:	0320f809 	jalr	t9
  40baec:	00000000 	nop
  40baf0:	8fbc0030 	lw	gp,48(sp)
  40baf4:	00000000 	nop
  40baf8:	8f99871c 	lw	t9,-30948(gp)
  40bafc:	00000000 	nop
  40bb00:	0320f809 	jalr	t9
  40bb04:	00000000 	nop
  40bb08:	8fbc0030 	lw	gp,48(sp)
  40bb0c:	00000000 	nop
  40bb10:	8f848a10 	lw	a0,-30192(gp)
  40bb14:	8f9987ec 	lw	t9,-30740(gp)
  40bb18:	8c840000 	lw	a0,0(a0)
  40bb1c:	0320f809 	jalr	t9
  40bb20:	00000000 	nop
  40bb24:	8fbc0030 	lw	gp,48(sp)
  40bb28:	00000000 	nop
  40bb2c:	8f8a806c 	lw	t2,-32660(gp)
  40bb30:	00000000 	nop
  40bb34:	914a6688 	lbu	t2,26248(t2)
  40bb38:	00000000 	nop
  40bb3c:	11400012 	beqz	t2,40bb88 <main+0xccc>
  40bb40:	00000000 	nop
  40bb44:	8f848a00 	lw	a0,-30208(gp)
  40bb48:	8f998324 	lw	t9,-31964(gp)
  40bb4c:	8c840000 	lw	a0,0(a0)
  40bb50:	0320f809 	jalr	t9
  40bb54:	00000000 	nop
  40bb58:	8fbc0030 	lw	gp,48(sp)
  40bb5c:	1440000a 	bnez	v0,40bb88 <main+0xccc>
  40bb60:	00000000 	nop
  40bb64:	8f998534 	lw	t9,-31436(gp)
  40bb68:	00000000 	nop
  40bb6c:	0320f809 	jalr	t9
  40bb70:	00000000 	nop
  40bb74:	8fbc0030 	lw	gp,48(sp)
  40bb78:	00000000 	nop
  40bb7c:	8f81806c 	lw	at,-32660(gp)
  40bb80:	00000000 	nop
  40bb84:	a0206688 	sb	zero,26248(at)
  40bb88:	8f848a00 	lw	a0,-30208(gp)
  40bb8c:	8f99830c 	lw	t9,-31988(gp)
  40bb90:	8c840000 	lw	a0,0(a0)
  40bb94:	0320f809 	jalr	t9
  40bb98:	27a5004c 	addiu	a1,sp,76
  40bb9c:	8fbc0030 	lw	gp,48(sp)
  40bba0:	27a4004c 	addiu	a0,sp,76
  40bba4:	8f9982f0 	lw	t9,-32016(gp)
  40bba8:	00000000 	nop
  40bbac:	0320f809 	jalr	t9
  40bbb0:	00000000 	nop
  40bbb4:	8fbc0030 	lw	gp,48(sp)
  40bbb8:	1000ffdc 	b	40bb2c <main+0xc70>
  40bbbc:	00000000 	nop
  40bbc0:	00000000 	nop
  40bbc4:	8fbf0034 	lw	ra,52(sp)
  40bbc8:	27bd0170 	addiu	sp,sp,368
  40bbcc:	03e00008 	jr	ra
  40bbd0:	00000000 	nop
