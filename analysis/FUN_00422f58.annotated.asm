# Disassembly of FUN_00422f58
# Address: 0x00422f58
# Size: 0x100
# GP = 0x1001db30
#
# GP offsets resolved to symbol names where known.
# See docs/DECOMPILATION_PROCEDURE.md for analysis workflow.
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00422f58 <draw_file+0xc>:
  422f58:	27bdffb0 	addiu	sp,sp,-80
  422f5c:	afbf0024 	sw	ra,36(sp)
  422f60:	afbc0020 	sw	gp,32(sp)
  422f64:	afa40050 	sw	a0,80(sp)
  422f68:	afa50054 	sw	a1,84(sp)
  422f6c:	afa60058 	sw	a2,88(sp)
  422f70:	afa7005c 	sw	a3,92(sp)
  422f74:	8ca20028 	lw	v0,40(a1)
  422f78:	00000000 	nop
  422f7c:	0002c140 	sll	t8,v0,0x5
  422f80:	07010206 	bgez	t8,42379c <draw_file+0x850>
  422f84:	8fbf0024 	lw	ra,36(sp)
  422f88:	0002cac0 	sll	t9,v0,0xb
  422f8c:	07200202 	bltz	t9,423798 <draw_file+0x84c>
  422f90:	00025280 	sll	t2,v0,0xa
  422f94:	0541000d 	bgez	t2,422fcc <draw_file+0x80>
  422f98:	00000000 	nop
  422f9c:	8f998738 	lw	t9,-30920(gp)  # FUN_00429290
  422fa0:	00000000 	nop
  422fa4:	0320f809 	jalr	t9
  422fa8:	00000000 	nop
  422fac:	8fbc0020 	lw	gp,32(sp)
  422fb0:	00022400 	sll	a0,v0,0x10
  422fb4:	8f9982e4 	lw	t9,-32028(gp)
  422fb8:	00045c03 	sra	t3,a0,0x10
  422fbc:	0320f809 	jalr	t9
  422fc0:	01602025 	move	a0,t3
  422fc4:	8fbc0020 	lw	gp,32(sp)
  422fc8:	00000000 	nop
  422fcc:	8f8c897c 	lw	t4,-30340(gp)  # curcontext
  422fd0:	8fae0050 	lw	t6,80(sp)
  422fd4:	8d8c0000 	lw	t4,0(t4)
  422fd8:	8fa90054 	lw	t1,84(sp)
  422fdc:	91840c50 	lbu	a0,3152(t4)
  422fe0:	00000000 	nop
  422fe4:	0004682b 	sltu	t5,zero,a0
  422fe8:	11a0000e 	beqz	t5,423024 <draw_file+0xd8>
  422fec:	01a02025 	move	a0,t5
  422ff0:	8dc40074 	lw	a0,116(t6)
  422ff4:	00000000 	nop
  422ff8:	00047880 	sll	t7,a0,0x2
  422ffc:	000fc7c2 	srl	t8,t7,0x1f
  423000:	0018202b 	sltu	a0,zero,t8
  423004:	10800008 	beqz	a0,423028 <draw_file+0xdc>
  423008:	308200ff 	andi	v0,a0,0xff
  42300c:	8f848a24 	lw	a0,-30172(gp)  # fsn_resources
  423010:	00000000 	nop
  423014:	90840005 	lbu	a0,5(a0)
  423018:	00000000 	nop
  42301c:	0004402b 	sltu	t0,zero,a0
  423020:	01002025 	move	a0,t0
  423024:	308200ff 	andi	v0,a0,0xff
  423028:	10400006 	beqz	v0,423044 <draw_file+0xf8>
  42302c:	00000000 	nop
  423030:	8f818a24 	lw	at,-30172(gp)  # fsn_resources
  423034:	00000000 	nop
  423038:	c4240080 	lwc1	$f4,128(at)
  42303c:	10000004 	b	423050 <draw_file+0x104>
  423040:	e7a4003c 	swc1	$f4,60(sp)
  423044:	c526001c 	lwc1	$f6,28(t1)
  423048:	00000000 	nop
  42304c:	e7a6003c 	swc1	$f6,60(sp)
  423050:	8faa0054 	lw	t2,84(sp)
  423054:	00000000 	nop
