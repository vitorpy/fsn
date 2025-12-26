# Function: pushzoom
# Address: 0x0040ff58 - 0x0041007c
# Size: 0x124 (292 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040ff58 <pushzoom>:
  40ff58:	3c1c0fc1 	lui	gp,0xfc1
  40ff5c:	279cdbd8 	addiu	gp,gp,-9256
  40ff60:	0399e021 	addu	gp,gp,t9
  40ff64:	8f9987b4 	lw	t9,-30796(gp)
  40ff68:	27bdffa0 	addiu	sp,sp,-96
  40ff6c:	afbf001c 	sw	ra,28(sp)
  40ff70:	afbc0018 	sw	gp,24(sp)
  40ff74:	0320f809 	jalr	t9
  40ff78:	27a40028 	addiu	a0,sp,40
  40ff7c:	8fbc0018 	lw	gp,24(sp)
  40ff80:	27a40028 	addiu	a0,sp,40
  40ff84:	8f98897c 	lw	t8,-30340(gp)
  40ff88:	8f8e8984 	lw	t6,-30332(gp)
  40ff8c:	8f180000 	lw	t8,0(t8)
  40ff90:	8dce0000 	lw	t6,0(t6)
  40ff94:	8f190040 	lw	t9,64(t8)
  40ff98:	8dcf0034 	lw	t7,52(t6)
  40ff9c:	001940c0 	sll	t0,t9,0x3
  40ffa0:	01194023 	subu	t0,t0,t9
  40ffa4:	8f9987cc 	lw	t9,-30772(gp)
  40ffa8:	000840c0 	sll	t0,t0,0x3
  40ffac:	0320f809 	jalr	t9
  40ffb0:	01e82821 	addu	a1,t7,t0
  40ffb4:	8fbc0018 	lw	gp,24(sp)
  40ffb8:	00000000 	nop
  40ffbc:	8f84897c 	lw	a0,-30340(gp)
  40ffc0:	1440002b 	bnez	v0,410070 <pushzoom+0x118>
  40ffc4:	8fbf001c 	lw	ra,28(sp)
  40ffc8:	8c820000 	lw	v0,0(a0)
  40ffcc:	27b90028 	addiu	t9,sp,40
  40ffd0:	8c490040 	lw	t1,64(v0)
  40ffd4:	27280030 	addiu	t0,t9,48
  40ffd8:	252a0001 	addiu	t2,t1,1
  40ffdc:	ac4a0040 	sw	t2,64(v0)
  40ffe0:	8c820000 	lw	v0,0(a0)
  40ffe4:	00000000 	nop
  40ffe8:	8c430040 	lw	v1,64(v0)
  40ffec:	00000000 	nop
  40fff0:	2861000a 	slti	at,v1,10
  40fff4:	14200007 	bnez	at,410014 <pushzoom+0xbc>
  40fff8:	00000000 	nop
  40fffc:	8f8b897c 	lw	t3,-30340(gp)
  410000:	ac400040 	sw	zero,64(v0)
  410004:	8d6b0000 	lw	t3,0(t3)
  410008:	00000000 	nop
  41000c:	8d630040 	lw	v1,64(t3)
  410010:	00000000 	nop
  410014:	8f8c8984 	lw	t4,-30332(gp)
  410018:	000370c0 	sll	t6,v1,0x3
  41001c:	8d8c0000 	lw	t4,0(t4)
  410020:	01c37023 	subu	t6,t6,v1
  410024:	8d8d0034 	lw	t5,52(t4)
  410028:	000e70c0 	sll	t6,t6,0x3
  41002c:	01aec021 	addu	t8,t5,t6
  410030:	8f210000 	lw	at,0(t9)
  410034:	2739000c 	addiu	t9,t9,12
  410038:	af010000 	sw	at,0(t8)
  41003c:	8f21fff8 	lw	at,-8(t9)
  410040:	2718000c 	addiu	t8,t8,12
  410044:	af01fff8 	sw	at,-8(t8)
  410048:	8f21fffc 	lw	at,-4(t9)
  41004c:	1728fff8 	bne	t9,t0,410030 <pushzoom+0xd8>
  410050:	af01fffc 	sw	at,-4(t8)
  410054:	8f210000 	lw	at,0(t9)
  410058:	00000000 	nop
  41005c:	af010000 	sw	at,0(t8)
  410060:	8f280004 	lw	t0,4(t9)
  410064:	00000000 	nop
  410068:	af080004 	sw	t0,4(t8)
  41006c:	8fbf001c 	lw	ra,28(sp)
  410070:	27bd0060 	addiu	sp,sp,96
  410074:	03e00008 	jr	ra
  410078:	00000000 	nop
