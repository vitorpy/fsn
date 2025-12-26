# Function: myContext
# Address: 0x0042a960 - 0x0042a9a4
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a960 <myContext>:
  42a960:	3c1c0fbf 	lui	gp,0xfbf
  42a964:	279c31d0 	addiu	gp,gp,12752
  42a968:	0399e021 	addu	gp,gp,t9
  42a96c:	27bdffe0 	addiu	sp,sp,-32
  42a970:	8f998778 	lw	t9,-30856(gp)
  42a974:	afa40020 	sw	a0,32(sp)
  42a978:	afbf001c 	sw	ra,28(sp)
  42a97c:	afa50024 	sw	a1,36(sp)
  42a980:	00a02025 	move	a0,a1
  42a984:	afbc0018 	sw	gp,24(sp)
  42a988:	afa60028 	sw	a2,40(sp)
  42a98c:	0320f809 	jalr	t9
  42a990:	00002825 	move	a1,zero
  42a994:	8fbf001c 	lw	ra,28(sp)
  42a998:	8fbc0018 	lw	gp,24(sp)
  42a99c:	03e00008 	jr	ra
  42a9a0:	27bd0020 	addiu	sp,sp,32
