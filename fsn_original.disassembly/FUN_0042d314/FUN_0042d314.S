# Function: FUN_0042d314
# Address: 0x0042d314 - 0x0042d338
# Size: 0x24 (36 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042d314 <hidePreferencePanel+0x6c0>:
  42d314:	3c1c0fbf 	lui	gp,0xfbf
  42d318:	279c081c 	addiu	gp,gp,2076
  42d31c:	0399e021 	addu	gp,gp,t9
  42d320:	8f81806c 	lw	at,-32660(gp)
  42d324:	afa40000 	sw	a0,0(sp)
  42d328:	afa50004 	sw	a1,4(sp)
  42d32c:	afa60008 	sw	a2,8(sp)
  42d330:	03e00008 	jr	ra
  42d334:	ac206e4c 	sw	zero,28236(at)
