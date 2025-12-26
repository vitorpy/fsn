# Function: getValue__8RuleInfoFi
# Address: 0x00433f38 - 0x00433f58
# Size: 0x20 (32 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433f38 <getValue__8RuleInfoFi>:
  433f38:	3c1c0fbf 	lui	gp,0xfbf
  433f3c:	279c9bf8 	addiu	gp,gp,-25608
  433f40:	0399e021 	addu	gp,gp,t9
  433f44:	00057080 	sll	t6,a1,0x2
  433f48:	008e7821 	addu	t7,a0,t6
  433f4c:	8de20044 	lw	v0,68(t7)
  433f50:	03e00008 	jr	ra
  433f54:	00000000 	nop
