# Function: FAMMonitorDirectory2
# Address: 0x00439fb8 - 0x00439ff8
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00439fb8 <FAMMonitorDirectory2>:
  439fb8:	3c1c0fbe 	lui	gp,0xfbe
  439fbc:	279c3b78 	addiu	gp,gp,15224
  439fc0:	0399e021 	addu	gp,gp,t9
  439fc4:	27bdffd8 	addiu	sp,sp,-40
  439fc8:	8f9988e4 	lw	t9,-30492(gp)
  439fcc:	afbf0024 	sw	ra,36(sp)
  439fd0:	afbc0020 	sw	gp,32(sp)
  439fd4:	8cc70000 	lw	a3,0(a2)
  439fd8:	240e004d 	li	t6,77
  439fdc:	0320f809 	jalr	t9
  439fe0:	afae0010 	sw	t6,16(sp)
  439fe4:	8fbf0024 	lw	ra,36(sp)
  439fe8:	8fbc0020 	lw	gp,32(sp)
  439fec:	27bd0028 	addiu	sp,sp,40
  439ff0:	03e00008 	jr	ra
  439ff4:	00001025 	move	v0,zero
