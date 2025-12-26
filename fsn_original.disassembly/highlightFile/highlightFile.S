# Function: highlightFile
# Address: 0x004277f0 - 0x00427864
# Size: 0x74 (116 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004277f0 <highlightFile>:
  4277f0:	3c1c0fbf 	lui	gp,0xfbf
  4277f4:	279c6340 	addiu	gp,gp,25408
  4277f8:	0399e021 	addu	gp,gp,t9
  4277fc:	8f8e897c 	lw	t6,-30340(gp)
  427800:	27bdffe0 	addiu	sp,sp,-32
  427804:	8dce0000 	lw	t6,0(t6)
  427808:	afbf001c 	sw	ra,28(sp)
  42780c:	afbc0018 	sw	gp,24(sp)
  427810:	8dcf003c 	lw	t7,60(t6)
  427814:	00000000 	nop
  427818:	11e00008 	beqz	t7,42783c <highlightFile+0x4c>
  42781c:	00000000 	nop
  427820:	8f998618 	lw	t9,-31208(gp)
  427824:	00000000 	nop
  427828:	0320f809 	jalr	t9
  42782c:	00000000 	nop
  427830:	8fbc0018 	lw	gp,24(sp)
  427834:	10000008 	b	427858 <highlightFile+0x68>
  427838:	8fbf001c 	lw	ra,28(sp)
  42783c:	8f9986fc 	lw	t9,-30980(gp)
  427840:	00000000 	nop
  427844:	0320f809 	jalr	t9
  427848:	00000000 	nop
  42784c:	8fbc0018 	lw	gp,24(sp)
  427850:	00000000 	nop
  427854:	8fbf001c 	lw	ra,28(sp)
  427858:	27bd0020 	addiu	sp,sp,32
  42785c:	03e00008 	jr	ra
  427860:	00000000 	nop
