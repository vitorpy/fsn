# Function: FUN_00435748
# Address: 0x00435748 - 0x00435790
# Size: 0x48 (72 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00435748 <__ct__19FileIconInterpreterFv+0xc>:
  435748:	27bdffe0 	addiu	sp,sp,-32
  43574c:	afbf001c 	sw	ra,28(sp)
  435750:	14800008 	bnez	a0,435774 <__ct__19FileIconInterpreterFv+0x38>
  435754:	afbc0018 	sw	gp,24(sp)
  435758:	8f9984a4 	lw	t9,-31580(gp)
  43575c:	240402d0 	li	a0,720
  435760:	0320f809 	jalr	t9
  435764:	00000000 	nop
  435768:	8fbc0018 	lw	gp,24(sp)
  43576c:	10400004 	beqz	v0,435780 <__ct__19FileIconInterpreterFv+0x44>
  435770:	00402025 	move	a0,v0
  435774:	ac800220 	sw	zero,544(a0)
  435778:	ac800228 	sw	zero,552(a0)
  43577c:	ac80022c 	sw	zero,556(a0)
  435780:	8fbf001c 	lw	ra,28(sp)
  435784:	27bd0020 	addiu	sp,sp,32
  435788:	03e00008 	jr	ra
  43578c:	00801025 	move	v0,a0
