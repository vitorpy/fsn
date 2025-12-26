# Function: FUN_00413824
# Address: 0x00413824 - 0x0041384c
# Size: 0x28 (40 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00413824 <findDirByFullName+0x190>:
  413824:	8c82000c 	lw	v0,12(a0)
  413828:	00000000 	nop
  41382c:	14400007 	bnez	v0,41384c <findDirByFullName+0x1b8>
  413830:	00000000 	nop
  413834:	8c8e0014 	lw	t6,20(a0)
  413838:	00000000 	nop
  41383c:	15c00003 	bnez	t6,41384c <findDirByFullName+0x1b8>
  413840:	00000000 	nop
  413844:	03e00008 	jr	ra
  413848:	00001025 	move	v0,zero
