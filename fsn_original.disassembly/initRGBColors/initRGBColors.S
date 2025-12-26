# Function: initRGBColors
# Address: 0x00433f68 - 0x004341f0
# Size: 0x288 (648 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433f68 <initRGBColors>:
  433f68:	3c1c0fbf 	lui	gp,0xfbf
  433f6c:	279c9bc8 	addiu	gp,gp,-25656
  433f70:	0399e021 	addu	gp,gp,t9
  433f74:	27bdffd0 	addiu	sp,sp,-48
  433f78:	afb40024 	sw	s4,36(sp)
  433f7c:	afb30020 	sw	s3,32(sp)
  433f80:	afb2001c 	sw	s2,28(sp)
  433f84:	afb00014 	sw	s0,20(sp)
  433f88:	8f90806c 	lw	s0,-32660(gp)
  433f8c:	8f92806c 	lw	s2,-32660(gp)
  433f90:	8f93806c 	lw	s3,-32660(gp)
  433f94:	8f94806c 	lw	s4,-32660(gp)
  433f98:	afb10018 	sw	s1,24(sp)
  433f9c:	afbf002c 	sw	ra,44(sp)
  433fa0:	afbc0028 	sw	gp,40(sp)
  433fa4:	00008825 	move	s1,zero
  433fa8:	26106f70 	addiu	s0,s0,28528
  433fac:	26526f72 	addiu	s2,s2,28530
  433fb0:	26736f74 	addiu	s3,s3,28532
  433fb4:	26946fd0 	addiu	s4,s4,28624
  433fb8:	8f998510 	lw	t9,-31472(gp)
  433fbc:	3224ffff 	andi	a0,s1,0xffff
  433fc0:	02002825 	move	a1,s0
  433fc4:	02403025 	move	a2,s2
  433fc8:	0320f809 	jalr	t9
  433fcc:	02603825 	move	a3,s3
  433fd0:	860f0002 	lh	t7,2(s0)
  433fd4:	860e0000 	lh	t6,0(s0)
  433fd8:	860b0004 	lh	t3,4(s0)
  433fdc:	000fc200 	sll	t8,t7,0x8
  433fe0:	26310001 	addiu	s1,s1,1
  433fe4:	01d8c821 	addu	t9,t6,t8
  433fe8:	000b6400 	sll	t4,t3,0x10
  433fec:	8fbc0028 	lw	gp,40(sp)
  433ff0:	032c6821 	addu	t5,t9,t4
  433ff4:	2a210010 	slti	at,s1,16
  433ff8:	ae8d0000 	sw	t5,0(s4)
  433ffc:	26100006 	addiu	s0,s0,6
  434000:	26520006 	addiu	s2,s2,6
  434004:	26730006 	addiu	s3,s3,6
  434008:	1420ffeb 	bnez	at,433fb8 <initRGBColors+0x50>
  43400c:	26940004 	addiu	s4,s4,4
  434010:	8f90806c 	lw	s0,-32660(gp)
  434014:	8f88806c 	lw	t0,-32660(gp)
  434018:	8f8a806c 	lw	t2,-32660(gp)
  43401c:	8f87806c 	lw	a3,-32660(gp)
  434020:	26106f70 	addiu	s0,s0,28528
  434024:	25087010 	addiu	t0,t0,28688
  434028:	254a7410 	addiu	t2,t2,29712
  43402c:	24e76fd0 	addiu	a3,a3,28624
  434030:	8f82806c 	lw	v0,-32660(gp)
  434034:	86040000 	lh	a0,0(s0)
  434038:	86050002 	lh	a1,2(s0)
  43403c:	86060004 	lh	a2,4(s0)
  434040:	01001825 	move	v1,t0
  434044:	24426f70 	addiu	v0,v0,28528
  434048:	844f0000 	lh	t7,0(v0)
  43404c:	844b0002 	lh	t3,2(v0)
  434050:	008f7021 	addu	t6,a0,t7
  434054:	05c10003 	bgez	t6,434064 <initRGBColors+0xfc>
  434058:	000ec043 	sra	t8,t6,0x1
  43405c:	25c10001 	addiu	at,t6,1
  434060:	0001c043 	sra	t8,at,0x1
  434064:	00abc821 	addu	t9,a1,t3
  434068:	07210003 	bgez	t9,434078 <initRGBColors+0x110>
  43406c:	00196043 	sra	t4,t9,0x1
  434070:	27210001 	addiu	at,t9,1
  434074:	00016043 	sra	t4,at,0x1
  434078:	844e0004 	lh	t6,4(v0)
  43407c:	000c6a00 	sll	t5,t4,0x8
  434080:	00ce5821 	addu	t3,a2,t6
  434084:	030d7821 	addu	t7,t8,t5
  434088:	05610003 	bgez	t3,434098 <initRGBColors+0x130>
  43408c:	000bc843 	sra	t9,t3,0x1
  434090:	25610001 	addiu	at,t3,1
  434094:	0001c843 	sra	t9,at,0x1
  434098:	844d0006 	lh	t5,6(v0)
  43409c:	00196400 	sll	t4,t9,0x10
  4340a0:	008d7021 	addu	t6,a0,t5
  4340a4:	84590008 	lh	t9,8(v0)
  4340a8:	01ecc021 	addu	t8,t7,t4
  4340ac:	00b97821 	addu	t7,a1,t9
  4340b0:	ac780000 	sw	t8,0(v1)
  4340b4:	05c10003 	bgez	t6,4340c4 <initRGBColors+0x15c>
  4340b8:	000e5843 	sra	t3,t6,0x1
  4340bc:	25c10001 	addiu	at,t6,1
  4340c0:	00015843 	sra	t3,at,0x1
  4340c4:	05e10003 	bgez	t7,4340d4 <initRGBColors+0x16c>
  4340c8:	000f6043 	sra	t4,t7,0x1
  4340cc:	25e10001 	addiu	at,t7,1
  4340d0:	00016043 	sra	t4,at,0x1
  4340d4:	844e000a 	lh	t6,10(v0)
  4340d8:	000cc200 	sll	t8,t4,0x8
  4340dc:	00cec821 	addu	t9,a2,t6
  4340e0:	01786821 	addu	t5,t3,t8
  4340e4:	07210003 	bgez	t9,4340f4 <initRGBColors+0x18c>
  4340e8:	00197843 	sra	t7,t9,0x1
  4340ec:	27210001 	addiu	at,t9,1
  4340f0:	00017843 	sra	t7,at,0x1
  4340f4:	8458000c 	lh	t8,12(v0)
  4340f8:	000f6400 	sll	t4,t7,0x10
  4340fc:	00987021 	addu	t6,a0,t8
  434100:	844f000e 	lh	t7,14(v0)
  434104:	01ac5821 	addu	t3,t5,t4
  434108:	00af6821 	addu	t5,a1,t7
  43410c:	ac6b0004 	sw	t3,4(v1)
  434110:	05c10003 	bgez	t6,434120 <initRGBColors+0x1b8>
  434114:	000ec843 	sra	t9,t6,0x1
  434118:	25c10001 	addiu	at,t6,1
  43411c:	0001c843 	sra	t9,at,0x1
  434120:	05a10003 	bgez	t5,434130 <initRGBColors+0x1c8>
  434124:	000d6043 	sra	t4,t5,0x1
  434128:	25a10001 	addiu	at,t5,1
  43412c:	00016043 	sra	t4,at,0x1
  434130:	844e0010 	lh	t6,16(v0)
  434134:	000c5a00 	sll	t3,t4,0x8
  434138:	00ce7821 	addu	t7,a2,t6
  43413c:	032bc021 	addu	t8,t9,t3
  434140:	05e10003 	bgez	t7,434150 <initRGBColors+0x1e8>
  434144:	000f6843 	sra	t5,t7,0x1
  434148:	25e10001 	addiu	at,t7,1
  43414c:	00016843 	sra	t5,at,0x1
  434150:	844b0012 	lh	t3,18(v0)
  434154:	000d6400 	sll	t4,t5,0x10
  434158:	008b7021 	addu	t6,a0,t3
  43415c:	844d0014 	lh	t5,20(v0)
  434160:	030cc821 	addu	t9,t8,t4
  434164:	00adc021 	addu	t8,a1,t5
  434168:	ac790008 	sw	t9,8(v1)
  43416c:	05c10003 	bgez	t6,43417c <initRGBColors+0x214>
  434170:	000e7843 	sra	t7,t6,0x1
  434174:	25c10001 	addiu	at,t6,1
  434178:	00017843 	sra	t7,at,0x1
  43417c:	07010003 	bgez	t8,43418c <initRGBColors+0x224>
  434180:	00186043 	sra	t4,t8,0x1
  434184:	27010001 	addiu	at,t8,1
  434188:	00016043 	sra	t4,at,0x1
  43418c:	844e0016 	lh	t6,22(v0)
  434190:	000cca00 	sll	t9,t4,0x8
  434194:	00ce6821 	addu	t5,a2,t6
  434198:	01f95821 	addu	t3,t7,t9
  43419c:	05a10003 	bgez	t5,4341ac <initRGBColors+0x244>
  4341a0:	000dc043 	sra	t8,t5,0x1
  4341a4:	25a10001 	addiu	at,t5,1
  4341a8:	0001c043 	sra	t8,at,0x1
  4341ac:	00186400 	sll	t4,t8,0x10
  4341b0:	016c7821 	addu	t7,t3,t4
  4341b4:	24420018 	addiu	v0,v0,24
  4341b8:	ac6f000c 	sw	t7,12(v1)
  4341bc:	1447ffa2 	bne	v0,a3,434048 <initRGBColors+0xe0>
  4341c0:	24630010 	addiu	v1,v1,16
  4341c4:	25080040 	addiu	t0,t0,64
  4341c8:	150aff99 	bne	t0,t2,434030 <initRGBColors+0xc8>
  4341cc:	26100006 	addiu	s0,s0,6
  4341d0:	8fbf002c 	lw	ra,44(sp)
  4341d4:	8fb00014 	lw	s0,20(sp)
  4341d8:	8fb10018 	lw	s1,24(sp)
  4341dc:	8fb2001c 	lw	s2,28(sp)
  4341e0:	8fb30020 	lw	s3,32(sp)
  4341e4:	8fb40024 	lw	s4,36(sp)
  4341e8:	03e00008 	jr	ra
  4341ec:	27bd0030 	addiu	sp,sp,48
