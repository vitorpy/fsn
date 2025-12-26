# Function: cIconGetValue
# Address: 0x00433bfc - 0x00433c30
# Size: 0x34 (52 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433bfc <cIconGetValue>:
  433bfc:	3c1c0fbf 	lui	gp,0xfbf
  433c00:	279c9f34 	addiu	gp,gp,-24780
  433c04:	0399e021 	addu	gp,gp,t9
  433c08:	27bdfff8 	addiu	sp,sp,-8
  433c0c:	8c860014 	lw	a2,20(a0)
  433c10:	00000000 	nop
  433c14:	00057080 	sll	t6,a1,0x2
  433c18:	00ce7821 	addu	t7,a2,t6
  433c1c:	8de20044 	lw	v0,68(t7)
  433c20:	10000001 	b	433c28 <cIconGetValue+0x2c>
  433c24:	00000000 	nop
  433c28:	03e00008 	jr	ra
  433c2c:	27bd0008 	addiu	sp,sp,8
