# Function: FUN_0041fcc0
# Address: 0x0041fcc0 - 0x0041fd64
# Size: 0xa4 (164 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041fcc0 <gotoFileName+0x9c>:
  41fcc0:	3c1c0fc0 	lui	gp,0xfc0
  41fcc4:	279cde70 	addiu	gp,gp,-8592
  41fcc8:	0399e021 	addu	gp,gp,t9
  41fccc:	8f8e806c 	lw	t6,-32660(gp)
  41fcd0:	27bdffe0 	addiu	sp,sp,-32
  41fcd4:	91ce6bc8 	lbu	t6,27592(t6)
  41fcd8:	afbf001c 	sw	ra,28(sp)
  41fcdc:	afbc0018 	sw	gp,24(sp)
  41fce0:	afa40020 	sw	a0,32(sp)
  41fce4:	11c0001b 	beqz	t6,41fd54 <gotoFileName+0x130>
  41fce8:	afa60028 	sw	a2,40(sp)
  41fcec:	8f998778 	lw	t9,-30856(gp)
  41fcf0:	00a02025 	move	a0,a1
  41fcf4:	0320f809 	jalr	t9
  41fcf8:	00000000 	nop
  41fcfc:	8fbc0018 	lw	gp,24(sp)
  41fd00:	8fa40020 	lw	a0,32(sp)
  41fd04:	8f998204 	lw	t9,-32252(gp)
  41fd08:	00000000 	nop
  41fd0c:	0320f809 	jalr	t9
  41fd10:	00000000 	nop
  41fd14:	8fbc0018 	lw	gp,24(sp)
  41fd18:	00402025 	move	a0,v0
  41fd1c:	8f99865c 	lw	t9,-31140(gp)
  41fd20:	00000000 	nop
  41fd24:	0320f809 	jalr	t9
  41fd28:	00000000 	nop
  41fd2c:	8fbc0018 	lw	gp,24(sp)
  41fd30:	14400009 	bnez	v0,41fd58 <gotoFileName+0x134>
  41fd34:	8fbf001c 	lw	ra,28(sp)
  41fd38:	8f848a04 	lw	a0,-30204(gp)
  41fd3c:	8f998208 	lw	t9,-32248(gp)
  41fd40:	8c840000 	lw	a0,0(a0)
  41fd44:	0320f809 	jalr	t9
  41fd48:	00002825 	move	a1,zero
  41fd4c:	8fbc0018 	lw	gp,24(sp)
  41fd50:	00000000 	nop
  41fd54:	8fbf001c 	lw	ra,28(sp)
  41fd58:	27bd0020 	addiu	sp,sp,32
  41fd5c:	03e00008 	jr	ra
  41fd60:	00000000 	nop
