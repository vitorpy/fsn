# Function: FUN_00435938
# Address: 0x00435938 - 0x0043599c
# Size: 0x64 (100 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00435938 <UnSetFile__19FileIconInterpreterFv+0xc>:
  435938:	27bdffe0 	addiu	sp,sp,-32
  43593c:	afbf001c 	sw	ra,28(sp)
  435940:	afbc0018 	sw	gp,24(sp)
  435944:	8c8e023c 	lw	t6,572(a0)
  435948:	00802825 	move	a1,a0
  43594c:	11c00008 	beqz	t6,435970 <UnSetFile__19FileIconInterpreterFv+0x44>
  435950:	00000000 	nop
  435954:	8f99825c 	lw	t9,-32164(gp)
  435958:	8c840238 	lw	a0,568(a0)
  43595c:	0320f809 	jalr	t9
  435960:	afa50020 	sw	a1,32(sp)
  435964:	8fbc0018 	lw	gp,24(sp)
  435968:	8fa50020 	lw	a1,32(sp)
  43596c:	00000000 	nop
  435970:	aca00228 	sw	zero,552(a1)
  435974:	aca0022c 	sw	zero,556(a1)
  435978:	aca0023c 	sw	zero,572(a1)
  43597c:	aca00230 	sw	zero,560(a1)
  435980:	aca00240 	sw	zero,576(a1)
  435984:	aca00234 	sw	zero,564(a1)
  435988:	aca00220 	sw	zero,544(a1)
  43598c:	8fbf001c 	lw	ra,28(sp)
  435990:	27bd0020 	addiu	sp,sp,32
  435994:	03e00008 	jr	ra
  435998:	00000000 	nop
