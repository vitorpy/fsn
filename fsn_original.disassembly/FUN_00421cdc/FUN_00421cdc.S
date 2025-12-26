# Function: FUN_00421cdc
# Address: 0x00421cdc - 0x00421d30
# Size: 0x54 (84 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421cdc <newTopWindow+0xc>:
  421cdc:	8f838944 	lw	v1,-30396(gp)
  421ce0:	8f8f806c 	lw	t7,-32660(gp)
  421ce4:	8c620000 	lw	v0,0(v1)
  421ce8:	27bdffe0 	addiu	sp,sp,-32
  421cec:	25ef6c10 	addiu	t7,t7,27664
  421cf0:	00027080 	sll	t6,v0,0x2
  421cf4:	afbf001c 	sw	ra,28(sp)
  421cf8:	afbc0018 	sw	gp,24(sp)
  421cfc:	01cfc021 	addu	t8,t6,t7
  421d00:	af040000 	sw	a0,0(t8)
  421d04:	24590001 	addiu	t9,v0,1
  421d08:	ac790000 	sw	t9,0(v1)
  421d0c:	8f99801c 	lw	t9,-32740(gp)
  421d10:	00000000 	nop
  421d14:	27391c14 	addiu	t9,t9,7188
  421d18:	0320f809 	jalr	t9
  421d1c:	00000000 	nop
  421d20:	8fbf001c 	lw	ra,28(sp)
  421d24:	8fbc0018 	lw	gp,24(sp)
  421d28:	03e00008 	jr	ra
  421d2c:	27bd0020 	addiu	sp,sp,32
