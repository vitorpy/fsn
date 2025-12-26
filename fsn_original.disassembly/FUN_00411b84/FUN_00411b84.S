# Function: FUN_00411b84
# Address: 0x00411b84 - 0x00411c04
# Size: 0x80 (128 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411b84 <dirToPath+0x60>:
  411b84:	3c1c0fc1 	lui	gp,0xfc1
  411b88:	279cbfac 	addiu	gp,gp,-16468
  411b8c:	0399e021 	addu	gp,gp,t9
  411b90:	8f838068 	lw	v1,-32664(gp)
  411b94:	27bdffe0 	addiu	sp,sp,-32
  411b98:	8c6301f0 	lw	v1,496(v1)
  411b9c:	afbf001c 	sw	ra,28(sp)
  411ba0:	10600008 	beqz	v1,411bc4 <dirToPath+0xa0>
  411ba4:	afbc0018 	sw	gp,24(sp)
  411ba8:	8f8e806c 	lw	t6,-32660(gp)
  411bac:	00000000 	nop
  411bb0:	8dce6b10 	lw	t6,27408(t6)
  411bb4:	00000000 	nop
  411bb8:	006e082b 	sltu	at,v1,t6
  411bbc:	1420000a 	bnez	at,411be8 <dirToPath+0xc4>
  411bc0:	00000000 	nop
  411bc4:	8f998188 	lw	t9,-32376(gp)
  411bc8:	24040064 	li	a0,100
  411bcc:	0320f809 	jalr	t9
  411bd0:	2405002c 	li	a1,44
  411bd4:	8fbc0018 	lw	gp,24(sp)
  411bd8:	244f1130 	addiu	t7,v0,4400
  411bdc:	8f81806c 	lw	at,-32660(gp)
  411be0:	00401825 	move	v1,v0
  411be4:	ac2f6b10 	sw	t7,27408(at)
  411be8:	8f818068 	lw	at,-32664(gp)
  411bec:	8fbf001c 	lw	ra,28(sp)
  411bf0:	00601025 	move	v0,v1
  411bf4:	2463002c 	addiu	v1,v1,44
  411bf8:	27bd0020 	addiu	sp,sp,32
  411bfc:	03e00008 	jr	ra
  411c00:	ac2301f0 	sw	v1,496(at)
