# Function: FUN_0040f150
# Address: 0x0040f150 - 0x0040f1e4
# Size: 0x94 (148 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040f150 <setScales+0x1958>:
  40f150:	3c1c0fc1 	lui	gp,0xfc1
  40f154:	279ce9e0 	addiu	gp,gp,-5664
  40f158:	0399e021 	addu	gp,gp,t9
  40f15c:	8f868068 	lw	a2,-32664(gp)
  40f160:	27bdffe0 	addiu	sp,sp,-32
  40f164:	8cc60154 	lw	a2,340(a2)
  40f168:	afbf001c 	sw	ra,28(sp)
  40f16c:	afbc0018 	sw	gp,24(sp)
  40f170:	afa50024 	sw	a1,36(sp)
  40f174:	10c0000a 	beqz	a2,40f1a0 <setScales+0x19a8>
  40f178:	00803825 	move	a3,a0
  40f17c:	8f998478 	lw	t9,-31624(gp)
  40f180:	00c02025 	move	a0,a2
  40f184:	0320f809 	jalr	t9
  40f188:	afa70020 	sw	a3,32(sp)
  40f18c:	8fbc0018 	lw	gp,24(sp)
  40f190:	8fa70020 	lw	a3,32(sp)
  40f194:	8f818068 	lw	at,-32664(gp)
  40f198:	00000000 	nop
  40f19c:	ac200154 	sw	zero,340(at)
  40f1a0:	10e0000d 	beqz	a3,40f1d8 <setScales+0x19e0>
  40f1a4:	8fbf001c 	lw	ra,28(sp)
  40f1a8:	8f848a00 	lw	a0,-30208(gp)
  40f1ac:	8f9982ec 	lw	t9,-32020(gp)
  40f1b0:	8fa60024 	lw	a2,36(sp)
  40f1b4:	8c840000 	lw	a0,0(a0)
  40f1b8:	0320f809 	jalr	t9
  40f1bc:	00e02825 	move	a1,a3
  40f1c0:	8fbc0018 	lw	gp,24(sp)
  40f1c4:	00000000 	nop
  40f1c8:	8f818068 	lw	at,-32664(gp)
  40f1cc:	00000000 	nop
  40f1d0:	ac220154 	sw	v0,340(at)
  40f1d4:	8fbf001c 	lw	ra,28(sp)
  40f1d8:	27bd0020 	addiu	sp,sp,32
  40f1dc:	03e00008 	jr	ra
  40f1e0:	00000000 	nop
