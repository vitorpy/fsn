# Function: FUN_00414cf0
# Address: 0x00414cf0 - 0x00414da4
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00414cf0 <findDirByFullName+0x165c>:
  414cf0:	3c1c0fc1 	lui	gp,0xfc1
  414cf4:	279c8e40 	addiu	gp,gp,-29120
  414cf8:	0399e021 	addu	gp,gp,t9
  414cfc:	8f998770 	lw	t9,-30864(gp)
  414d00:	27bdffe0 	addiu	sp,sp,-32
  414d04:	afbf001c 	sw	ra,28(sp)
  414d08:	afbc0018 	sw	gp,24(sp)
  414d0c:	0320f809 	jalr	t9
  414d10:	afa40020 	sw	a0,32(sp)
  414d14:	8fbc0018 	lw	gp,24(sp)
  414d18:	00002025 	move	a0,zero
  414d1c:	8f998768 	lw	t9,-30872(gp)
  414d20:	24050001 	li	a1,1
  414d24:	0320f809 	jalr	t9
  414d28:	00000000 	nop
  414d2c:	8fbc0018 	lw	gp,24(sp)
  414d30:	8fa40020 	lw	a0,32(sp)
  414d34:	8f998018 	lw	t9,-32744(gp)
  414d38:	00000000 	nop
  414d3c:	27394be4 	addiu	t9,t9,19428
  414d40:	0320f809 	jalr	t9
  414d44:	00000000 	nop
  414d48:	8fbc0018 	lw	gp,24(sp)
  414d4c:	24040001 	li	a0,1
  414d50:	8f998768 	lw	t9,-30872(gp)
  414d54:	24050001 	li	a1,1
  414d58:	0320f809 	jalr	t9
  414d5c:	00000000 	nop
  414d60:	8fbc0018 	lw	gp,24(sp)
  414d64:	8fa40020 	lw	a0,32(sp)
  414d68:	8f998018 	lw	t9,-32744(gp)
  414d6c:	00000000 	nop
  414d70:	27394be4 	addiu	t9,t9,19428
  414d74:	0320f809 	jalr	t9
  414d78:	00000000 	nop
  414d7c:	8fbc0018 	lw	gp,24(sp)
  414d80:	00000000 	nop
  414d84:	8f998774 	lw	t9,-30860(gp)
  414d88:	00000000 	nop
  414d8c:	0320f809 	jalr	t9
  414d90:	00000000 	nop
  414d94:	8fbf001c 	lw	ra,28(sp)
  414d98:	8fbc0018 	lw	gp,24(sp)
  414d9c:	03e00008 	jr	ra
  414da0:	27bd0020 	addiu	sp,sp,32
