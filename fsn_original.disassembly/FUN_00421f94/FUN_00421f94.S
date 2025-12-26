# Function: FUN_00421f94
# Address: 0x00421f94 - 0x004220e4
# Size: 0x150 (336 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421f94 <newOverlayColormap+0xc>:
  421f94:	8f9986a0 	lw	t9,-31072(gp)
  421f98:	27bdff78 	addiu	sp,sp,-136
  421f9c:	afbf001c 	sw	ra,28(sp)
  421fa0:	afbc0018 	sw	gp,24(sp)
  421fa4:	0320f809 	jalr	t9
  421fa8:	afa40088 	sw	a0,136(sp)
  421fac:	8fbc0018 	lw	gp,24(sp)
  421fb0:	10400006 	beqz	v0,421fcc <newOverlayColormap+0x44>
  421fb4:	27b80030 	addiu	t8,sp,48
  421fb8:	8f8e805c 	lw	t6,-32676(gp)
  421fbc:	00000000 	nop
  421fc0:	25ceba70 	addiu	t6,t6,-17808
  421fc4:	10000005 	b	421fdc <newOverlayColormap+0x54>
  421fc8:	afae0038 	sw	t6,56(sp)
  421fcc:	8f8f805c 	lw	t7,-32676(gp)
  421fd0:	00000000 	nop
  421fd4:	25efba7c 	addiu	t7,t7,-17796
  421fd8:	afaf0038 	sw	t7,56(sp)
  421fdc:	8f9986a0 	lw	t9,-31072(gp)
  421fe0:	24060001 	li	a2,1
  421fe4:	afb8003c 	sw	t8,60(sp)
  421fe8:	0320f809 	jalr	t9
  421fec:	afa60034 	sw	a2,52(sp)
  421ff0:	8fbc0018 	lw	gp,24(sp)
  421ff4:	8fa60034 	lw	a2,52(sp)
  421ff8:	10400008 	beqz	v0,42201c <newOverlayColormap+0x94>
  421ffc:	27ad002c 	addiu	t5,sp,44
  422000:	8f89805c 	lw	t1,-32676(gp)
  422004:	0006c8c0 	sll	t9,a2,0x3
  422008:	27a80038 	addiu	t0,sp,56
  42200c:	03281021 	addu	v0,t9,t0
  422010:	2529ba8c 	addiu	t1,t1,-17780
  422014:	10000007 	b	422034 <newOverlayColormap+0xac>
  422018:	ac490000 	sw	t1,0(v0)
  42201c:	8f8c805c 	lw	t4,-32676(gp)
  422020:	000650c0 	sll	t2,a2,0x3
  422024:	27ab0038 	addiu	t3,sp,56
  422028:	014b1021 	addu	v0,t2,t3
  42202c:	258cba98 	addiu	t4,t4,-17768
  422030:	ac4c0000 	sw	t4,0(v0)
  422034:	8f998364 	lw	t9,-31900(gp)
  422038:	ac4d0004 	sw	t5,4(v0)
  42203c:	8fa40088 	lw	a0,136(sp)
  422040:	24c60001 	addiu	a2,a2,1
  422044:	0320f809 	jalr	t9
  422048:	27a50038 	addiu	a1,sp,56
  42204c:	8fbc0018 	lw	gp,24(sp)
  422050:	8fae002c 	lw	t6,44(sp)
  422054:	8f848a04 	lw	a0,-30204(gp)
  422058:	8f9982b8 	lw	t9,-32072(gp)
  42205c:	8fa50030 	lw	a1,48(sp)
  422060:	8dc60000 	lw	a2,0(t6)
  422064:	8c840000 	lw	a0,0(a0)
  422068:	0320f809 	jalr	t9
  42206c:	00003825 	move	a3,zero
  422070:	8fbc0018 	lw	gp,24(sp)
  422074:	afa20028 	sw	v0,40(sp)
  422078:	8f9986a0 	lw	t9,-31072(gp)
  42207c:	00000000 	nop
  422080:	0320f809 	jalr	t9
  422084:	00000000 	nop
  422088:	8fbc0018 	lw	gp,24(sp)
  42208c:	10400006 	beqz	v0,4220a8 <newOverlayColormap+0x120>
  422090:	00000000 	nop
  422094:	8f8f805c 	lw	t7,-32676(gp)
  422098:	00000000 	nop
  42209c:	25efbaa8 	addiu	t7,t7,-17752
  4220a0:	10000005 	b	4220b8 <newOverlayColormap+0x130>
  4220a4:	afaf0038 	sw	t7,56(sp)
  4220a8:	8f98805c 	lw	t8,-32676(gp)
  4220ac:	00000000 	nop
  4220b0:	2718bab8 	addiu	t8,t8,-17736
  4220b4:	afb80038 	sw	t8,56(sp)
  4220b8:	8fb90028 	lw	t9,40(sp)
  4220bc:	8fa40088 	lw	a0,136(sp)
  4220c0:	afb9003c 	sw	t9,60(sp)
  4220c4:	8f998340 	lw	t9,-31936(gp)
  4220c8:	24060001 	li	a2,1
  4220cc:	0320f809 	jalr	t9
  4220d0:	27a50038 	addiu	a1,sp,56
  4220d4:	8fbf001c 	lw	ra,28(sp)
  4220d8:	8fbc0018 	lw	gp,24(sp)
  4220dc:	03e00008 	jr	ra
  4220e0:	27bd0088 	addiu	sp,sp,136
