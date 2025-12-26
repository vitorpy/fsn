# Function: FUN_0040ae2c
# Address: 0x0040ae2c - 0x0040aebc
# Size: 0x90 (144 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040ae2c <_mcount+0x744>:
  40ae2c:	3c1c0fc1 	lui	gp,0xfc1
  40ae30:	279c2d04 	addiu	gp,gp,11524
  40ae34:	0399e021 	addu	gp,gp,t9
  40ae38:	8f8e8a04 	lw	t6,-30204(gp)
  40ae3c:	27bdffd8 	addiu	sp,sp,-40
  40ae40:	8dce0000 	lw	t6,0(t6)
  40ae44:	afbf001c 	sw	ra,28(sp)
  40ae48:	afbc0018 	sw	gp,24(sp)
  40ae4c:	8f9983e0 	lw	t9,-31776(gp)
  40ae50:	8dc40080 	lw	a0,128(t6)
  40ae54:	0320f809 	jalr	t9
  40ae58:	afa40024 	sw	a0,36(sp)
  40ae5c:	8fbc0018 	lw	gp,24(sp)
  40ae60:	24440009 	addiu	a0,v0,9
  40ae64:	8f9983b8 	lw	t9,-31816(gp)
  40ae68:	00000000 	nop
  40ae6c:	0320f809 	jalr	t9
  40ae70:	00000000 	nop
  40ae74:	8fbc0018 	lw	gp,24(sp)
  40ae78:	8fa60024 	lw	a2,36(sp)
  40ae7c:	8f85805c 	lw	a1,-32676(gp)
  40ae80:	8f9983e4 	lw	t9,-31772(gp)
  40ae84:	afa20020 	sw	v0,32(sp)
  40ae88:	00402025 	move	a0,v0
  40ae8c:	0320f809 	jalr	t9
  40ae90:	24a5a16c 	addiu	a1,a1,-24212
  40ae94:	8fbc0018 	lw	gp,24(sp)
  40ae98:	8fa40020 	lw	a0,32(sp)
  40ae9c:	8f9983e8 	lw	t9,-31768(gp)
  40aea0:	00000000 	nop
  40aea4:	0320f809 	jalr	t9
  40aea8:	00000000 	nop
  40aeac:	8fbf001c 	lw	ra,28(sp)
  40aeb0:	8fbc0018 	lw	gp,24(sp)
  40aeb4:	03e00008 	jr	ra
  40aeb8:	27bd0028 	addiu	sp,sp,40
