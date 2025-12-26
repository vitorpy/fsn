# Function: FUN_0042cc30
# Address: 0x0042cc30 - 0x0042cc54
# Size: 0x24 (36 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042cc30 <showPreferencePanel+0x1248>:
  42cc30:	3c1c0fbf 	lui	gp,0xfbf
  42cc34:	279c0f00 	addiu	gp,gp,3840
  42cc38:	0399e021 	addu	gp,gp,t9
  42cc3c:	8f81806c 	lw	at,-32660(gp)
  42cc40:	afa40000 	sw	a0,0(sp)
  42cc44:	afa50004 	sw	a1,4(sp)
  42cc48:	afa60008 	sw	a2,8(sp)
  42cc4c:	03e00008 	jr	ra
  42cc50:	ac208940 	sw	zero,-30400(at)
