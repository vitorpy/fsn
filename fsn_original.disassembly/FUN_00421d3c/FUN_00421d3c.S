# Function: FUN_00421d3c
# Address: 0x00421d3c - 0x00421dac
# Size: 0x70 (112 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421d3c <deleteTopWindow+0xc>:
  421d3c:	8f868944 	lw	a2,-30396(gp)
  421d40:	00001025 	move	v0,zero
  421d44:	8cc30000 	lw	v1,0(a2)
  421d48:	00000000 	nop
  421d4c:	1860001b 	blez	v1,421dbc <deleteTopWindow+0x8c>
  421d50:	00000000 	nop
  421d54:	8f85806c 	lw	a1,-32660(gp)
  421d58:	00000000 	nop
  421d5c:	24a56c10 	addiu	a1,a1,27664
  421d60:	8cae0000 	lw	t6,0(a1)
  421d64:	00000000 	nop
  421d68:	148e0010 	bne	a0,t6,421dac <deleteTopWindow+0x7c>
  421d6c:	00000000 	nop
  421d70:	2464ffff 	addiu	a0,v1,-1
  421d74:	0044082a 	slt	at,v0,a0
  421d78:	1020000a 	beqz	at,421da4 <deleteTopWindow+0x74>
  421d7c:	00000000 	nop
  421d80:	8f98806c 	lw	t8,-32660(gp)
  421d84:	00047880 	sll	t7,a0,0x2
  421d88:	27186c10 	addiu	t8,t8,27664
  421d8c:	01f81021 	addu	v0,t7,t8
  421d90:	8cb90004 	lw	t9,4(a1)
  421d94:	24a50004 	addiu	a1,a1,4
  421d98:	00a2082b 	sltu	at,a1,v0
  421d9c:	1420fffc 	bnez	at,421d90 <deleteTopWindow+0x60>
  421da0:	acb9fffc 	sw	t9,-4(a1)
  421da4:	03e00008 	jr	ra
  421da8:	acc40000 	sw	a0,0(a2)
