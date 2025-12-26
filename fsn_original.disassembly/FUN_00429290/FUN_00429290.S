# Function: FUN_00429290
# Address: 0x00429290 - 0x004292b0
# Size: 0x20 (32 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429290 <getbeam+0xc>:
  429290:	8f838068 	lw	v1,-32664(gp)
  429294:	00001025 	move	v0,zero
  429298:	8c637988 	lw	v1,31112(v1)
  42929c:	00000000 	nop
  4292a0:	10600003 	beqz	v1,4292b0 <getbeam+0x2c>
  4292a4:	00000000 	nop
  4292a8:	03e00008 	jr	ra
  4292ac:	24620001 	addiu	v0,v1,1
