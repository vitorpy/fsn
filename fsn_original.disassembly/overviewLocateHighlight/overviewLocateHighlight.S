# Function: overviewLocateHighlight
# Address: 0x00429aa0 - 0x00429b00
# Size: 0x60 (96 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429aa0 <overviewLocateHighlight>:
  429aa0:	3c1c0fbf 	lui	gp,0xfbf
  429aa4:	279c4090 	addiu	gp,gp,16528
  429aa8:	0399e021 	addu	gp,gp,t9
  429aac:	8f998660 	lw	t9,-31136(gp)
  429ab0:	27bdffe0 	addiu	sp,sp,-32
  429ab4:	afbf001c 	sw	ra,28(sp)
  429ab8:	0320f809 	jalr	t9
  429abc:	afbc0018 	sw	gp,24(sp)
  429ac0:	8fbc0018 	lw	gp,24(sp)
  429ac4:	00000000 	nop
  429ac8:	8f998684 	lw	t9,-31100(gp)
  429acc:	00000000 	nop
  429ad0:	0320f809 	jalr	t9
  429ad4:	00000000 	nop
  429ad8:	8fbc0018 	lw	gp,24(sp)
  429adc:	00402025 	move	a0,v0
  429ae0:	8f99874c 	lw	t9,-30900(gp)
  429ae4:	00002825 	move	a1,zero
  429ae8:	0320f809 	jalr	t9
  429aec:	00003025 	move	a2,zero
  429af0:	8fbf001c 	lw	ra,28(sp)
  429af4:	8fbc0018 	lw	gp,24(sp)
  429af8:	03e00008 	jr	ra
  429afc:	27bd0020 	addiu	sp,sp,32
