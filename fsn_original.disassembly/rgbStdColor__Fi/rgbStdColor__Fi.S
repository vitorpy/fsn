# Function: rgbStdColor__Fi
# Address: 0x004341f0 - 0x004342b4
# Size: 0xc4 (196 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004341f0 <rgbStdColor__Fi>:
  4341f0:	3c1c0fbf 	lui	gp,0xfbf
  4341f4:	279c9940 	addiu	gp,gp,-26304
  4341f8:	0399e021 	addu	gp,gp,t9
  4341fc:	27bdffe0 	addiu	sp,sp,-32
  434200:	afbf001c 	sw	ra,28(sp)
  434204:	afbc0018 	sw	gp,24(sp)
  434208:	0480000c 	bltz	a0,43423c <rgbStdColor__Fi+0x4c>
  43420c:	00802825 	move	a1,a0
  434210:	8f8f806c 	lw	t7,-32660(gp)
  434214:	00047080 	sll	t6,a0,0x2
  434218:	25ef6fd0 	addiu	t7,t7,28624
  43421c:	8f998464 	lw	t9,-31644(gp)
  434220:	01cfc021 	addu	t8,t6,t7
  434224:	8f040000 	lw	a0,0(t8)
  434228:	0320f809 	jalr	t9
  43422c:	00000000 	nop
  434230:	8fbc0018 	lw	gp,24(sp)
  434234:	1000001c 	b	4342a8 <rgbStdColor__Fi+0xb8>
  434238:	8fbf001c 	lw	ra,28(sp)
  43423c:	0005ce02 	srl	t9,a1,0x18
  434240:	13200008 	beqz	t9,434264 <rgbStdColor__Fi+0x74>
  434244:	3c0100ff 	lui	at,0xff
  434248:	8f998464 	lw	t9,-31644(gp)
  43424c:	3421ffff 	ori	at,at,0xffff
  434250:	0320f809 	jalr	t9
  434254:	00a12024 	and	a0,a1,at
  434258:	8fbc0018 	lw	gp,24(sp)
  43425c:	10000012 	b	4342a8 <rgbStdColor__Fi+0xb8>
  434260:	8fbf001c 	lw	ra,28(sp)
  434264:	00052823 	negu	a1,a1
  434268:	30aa00f0 	andi	t2,a1,0xf0
  43426c:	8f8e806c 	lw	t6,-32660(gp)
  434270:	000a5903 	sra	t3,t2,0x4
  434274:	30a8000f 	andi	t0,a1,0xf
  434278:	00084980 	sll	t1,t0,0x6
  43427c:	000b6080 	sll	t4,t3,0x2
  434280:	012c6821 	addu	t5,t1,t4
  434284:	25ce7010 	addiu	t6,t6,28688
  434288:	8f998464 	lw	t9,-31644(gp)
  43428c:	01ae7821 	addu	t7,t5,t6
  434290:	8de40000 	lw	a0,0(t7)
  434294:	0320f809 	jalr	t9
  434298:	00000000 	nop
  43429c:	8fbc0018 	lw	gp,24(sp)
  4342a0:	00000000 	nop
  4342a4:	8fbf001c 	lw	ra,28(sp)
  4342a8:	27bd0020 	addiu	sp,sp,32
  4342ac:	03e00008 	jr	ra
  4342b0:	00000000 	nop
