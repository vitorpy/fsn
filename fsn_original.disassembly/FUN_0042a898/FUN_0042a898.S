# Function: FUN_0042a898
# Address: 0x0042a898 - 0x0042a8d8
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a898 <copycontext+0xc>:
  42a898:	8f8f897c 	lw	t7,-30340(gp)
  42a89c:	8f8e8980 	lw	t6,-30336(gp)
  42a8a0:	8def0000 	lw	t7,0(t7)
  42a8a4:	8dce0000 	lw	t6,0(t6)
  42a8a8:	25e80c54 	addiu	t0,t7,3156
  42a8ac:	8de10000 	lw	at,0(t7)
  42a8b0:	25ef000c 	addiu	t7,t7,12
  42a8b4:	adc10000 	sw	at,0(t6)
  42a8b8:	8de1fff8 	lw	at,-8(t7)
  42a8bc:	25ce000c 	addiu	t6,t6,12
  42a8c0:	adc1fff8 	sw	at,-8(t6)
  42a8c4:	8de1fffc 	lw	at,-4(t7)
  42a8c8:	15e8fff8 	bne	t7,t0,42a8ac <copycontext+0x20>
  42a8cc:	adc1fffc 	sw	at,-4(t6)
  42a8d0:	03e00008 	jr	ra
  42a8d4:	00000000 	nop
