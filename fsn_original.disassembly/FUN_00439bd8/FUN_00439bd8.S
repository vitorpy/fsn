# Function: FUN_00439bd8
# Address: 0x00439bd8 - 0x00439c00
# Size: 0x28 (40 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00439bd8 <FAMOpen+0xc>:
  439bd8:	8f9988d8 	lw	t9,-30504(gp)
  439bdc:	27bdffe0 	addiu	sp,sp,-32
  439be0:	afbf001c 	sw	ra,28(sp)
  439be4:	afbc0018 	sw	gp,24(sp)
  439be8:	0320f809 	jalr	t9
  439bec:	00002825 	move	a1,zero
  439bf0:	8fbf001c 	lw	ra,28(sp)
  439bf4:	8fbc0018 	lw	gp,24(sp)
  439bf8:	03e00008 	jr	ra
  439bfc:	27bd0020 	addiu	sp,sp,32
