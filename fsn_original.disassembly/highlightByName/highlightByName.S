# Function: highlightByName
# Address: 0x00429bbc - 0x00429c38
# Size: 0x7c (124 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429bbc <highlightByName>:
  429bbc:	3c1c0fbf 	lui	gp,0xfbf
  429bc0:	279c3f74 	addiu	gp,gp,16244
  429bc4:	0399e021 	addu	gp,gp,t9
  429bc8:	27bdffd8 	addiu	sp,sp,-40
  429bcc:	8f99878c 	lw	t9,-30836(gp)
  429bd0:	afbf001c 	sw	ra,28(sp)
  429bd4:	afbc0018 	sw	gp,24(sp)
  429bd8:	27a50024 	addiu	a1,sp,36
  429bdc:	0320f809 	jalr	t9
  429be0:	27a60020 	addiu	a2,sp,32
  429be4:	8fa40024 	lw	a0,36(sp)
  429be8:	8fbc0018 	lw	gp,24(sp)
  429bec:	10800008 	beqz	a0,429c10 <highlightByName+0x54>
  429bf0:	00000000 	nop
  429bf4:	8f99874c 	lw	t9,-30900(gp)
  429bf8:	8fa50020 	lw	a1,32(sp)
  429bfc:	0320f809 	jalr	t9
  429c00:	00003025 	move	a2,zero
  429c04:	8fbc0018 	lw	gp,24(sp)
  429c08:	10000008 	b	429c2c <highlightByName+0x70>
  429c0c:	8fbf001c 	lw	ra,28(sp)
  429c10:	8f998744 	lw	t9,-30908(gp)
  429c14:	00000000 	nop
  429c18:	0320f809 	jalr	t9
  429c1c:	00000000 	nop
  429c20:	8fbc0018 	lw	gp,24(sp)
  429c24:	00000000 	nop
  429c28:	8fbf001c 	lw	ra,28(sp)
  429c2c:	27bd0028 	addiu	sp,sp,40
  429c30:	03e00008 	jr	ra
  429c34:	00000000 	nop
