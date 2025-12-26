# Function: setMainWindow
# Address: 0x0040bbd4 - 0x0040bc1c
# Size: 0x48 (72 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040bbd4 <setMainWindow>:
  40bbd4:	3c1c0fc1 	lui	gp,0xfc1
  40bbd8:	279c1f5c 	addiu	gp,gp,8028
  40bbdc:	0399e021 	addu	gp,gp,t9
  40bbe0:	8f8e8984 	lw	t6,-30332(gp)
  40bbe4:	27bdffe0 	addiu	sp,sp,-32
  40bbe8:	8f848a04 	lw	a0,-30204(gp)
  40bbec:	8dce0000 	lw	t6,0(t6)
  40bbf0:	8f9982f4 	lw	t9,-32012(gp)
  40bbf4:	afbf001c 	sw	ra,28(sp)
  40bbf8:	afbc0018 	sw	gp,24(sp)
  40bbfc:	8c840000 	lw	a0,0(a0)
  40bc00:	8dc50000 	lw	a1,0(t6)
  40bc04:	0320f809 	jalr	t9
  40bc08:	00000000 	nop
  40bc0c:	8fbf001c 	lw	ra,28(sp)
  40bc10:	8fbc0018 	lw	gp,24(sp)
  40bc14:	03e00008 	jr	ra
  40bc18:	27bd0020 	addiu	sp,sp,32
