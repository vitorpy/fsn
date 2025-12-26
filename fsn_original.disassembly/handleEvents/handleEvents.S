# Function: handleEvents
# Address: 0x0041198c - 0x00411a78
# Size: 0xec (236 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041198c <handleEvents>:
  41198c:	3c1c0fc1 	lui	gp,0xfc1
  411990:	279cc1a4 	addiu	gp,gp,-15964
  411994:	0399e021 	addu	gp,gp,t9
  411998:	27bdff78 	addiu	sp,sp,-136
  41199c:	afb1001c 	sw	s1,28(sp)
  4119a0:	8f918a00 	lw	s1,-30208(gp)
  4119a4:	8f998324 	lw	t9,-31964(gp)
  4119a8:	afbf0024 	sw	ra,36(sp)
  4119ac:	8e240000 	lw	a0,0(s1)
  4119b0:	afbc0020 	sw	gp,32(sp)
  4119b4:	0320f809 	jalr	t9
  4119b8:	afb00018 	sw	s0,24(sp)
  4119bc:	8fbc0020 	lw	gp,32(sp)
  4119c0:	14400008 	bnez	v0,4119e4 <handleEvents+0x58>
  4119c4:	00000000 	nop
  4119c8:	8f998548 	lw	t9,-31416(gp)
  4119cc:	00000000 	nop
  4119d0:	0320f809 	jalr	t9
  4119d4:	00000000 	nop
  4119d8:	8fbc0020 	lw	gp,32(sp)
  4119dc:	1040001c 	beqz	v0,411a50 <handleEvents+0xc4>
  4119e0:	00000000 	nop
  4119e4:	8f99830c 	lw	t9,-31988(gp)
  4119e8:	27b00028 	addiu	s0,sp,40
  4119ec:	8e240000 	lw	a0,0(s1)
  4119f0:	0320f809 	jalr	t9
  4119f4:	02002825 	move	a1,s0
  4119f8:	8fbc0020 	lw	gp,32(sp)
  4119fc:	02002025 	move	a0,s0
  411a00:	8f9982f0 	lw	t9,-32016(gp)
  411a04:	00000000 	nop
  411a08:	0320f809 	jalr	t9
  411a0c:	00000000 	nop
  411a10:	8fbc0020 	lw	gp,32(sp)
  411a14:	8e240000 	lw	a0,0(s1)
  411a18:	8f998324 	lw	t9,-31964(gp)
  411a1c:	00000000 	nop
  411a20:	0320f809 	jalr	t9
  411a24:	00000000 	nop
  411a28:	8fbc0020 	lw	gp,32(sp)
  411a2c:	1440ffed 	bnez	v0,4119e4 <handleEvents+0x58>
  411a30:	00000000 	nop
  411a34:	8f998548 	lw	t9,-31416(gp)
  411a38:	00000000 	nop
  411a3c:	0320f809 	jalr	t9
  411a40:	00000000 	nop
  411a44:	8fbc0020 	lw	gp,32(sp)
  411a48:	1440ffe6 	bnez	v0,4119e4 <handleEvents+0x58>
  411a4c:	00000000 	nop
  411a50:	8f998538 	lw	t9,-31432(gp)
  411a54:	00000000 	nop
  411a58:	0320f809 	jalr	t9
  411a5c:	00000000 	nop
  411a60:	8fbf0024 	lw	ra,36(sp)
  411a64:	8fbc0020 	lw	gp,32(sp)
  411a68:	8fb00018 	lw	s0,24(sp)
  411a6c:	8fb1001c 	lw	s1,28(sp)
  411a70:	03e00008 	jr	ra
  411a74:	27bd0088 	addiu	sp,sp,136
