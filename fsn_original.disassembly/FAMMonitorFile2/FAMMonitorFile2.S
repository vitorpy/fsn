# Function: FAMMonitorFile2
# Address: 0x0043a0d0 - 0x0043a110
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043a0d0 <FAMMonitorFile2>:
  43a0d0:	3c1c0fbe 	lui	gp,0xfbe
  43a0d4:	279c3a60 	addiu	gp,gp,14944
  43a0d8:	0399e021 	addu	gp,gp,t9
  43a0dc:	27bdffd8 	addiu	sp,sp,-40
  43a0e0:	8f9988e4 	lw	t9,-30492(gp)
  43a0e4:	afbf0024 	sw	ra,36(sp)
  43a0e8:	afbc0020 	sw	gp,32(sp)
  43a0ec:	8cc70000 	lw	a3,0(a2)
  43a0f0:	240e0057 	li	t6,87
  43a0f4:	0320f809 	jalr	t9
  43a0f8:	afae0010 	sw	t6,16(sp)
  43a0fc:	8fbf0024 	lw	ra,36(sp)
  43a100:	8fbc0020 	lw	gp,32(sp)
  43a104:	27bd0028 	addiu	sp,sp,40
  43a108:	03e00008 	jr	ra
  43a10c:	00001025 	move	v0,zero
