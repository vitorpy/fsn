# Function: FUN_0041df54
# Address: 0x0041df54 - 0x0041dff4
# Size: 0xa0 (160 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041df54 <checkValidSelections+0x3c0>:
  41df54:	3c1c0fc0 	lui	gp,0xfc0
  41df58:	279cfbdc 	addiu	gp,gp,-1060
  41df5c:	0399e021 	addu	gp,gp,t9
  41df60:	27bdffd0 	addiu	sp,sp,-48
  41df64:	8f99801c 	lw	t9,-32740(gp)
  41df68:	afbf002c 	sw	ra,44(sp)
  41df6c:	afb30024 	sw	s3,36(sp)
  41df70:	afb20020 	sw	s2,32(sp)
  41df74:	2739ddf8 	addiu	t9,t9,-8712
  41df78:	00809025 	move	s2,a0
  41df7c:	00a09825 	move	s3,a1
  41df80:	afbc0028 	sw	gp,40(sp)
  41df84:	afb1001c 	sw	s1,28(sp)
  41df88:	0320f809 	jalr	t9
  41df8c:	afb00018 	sw	s0,24(sp)
  41df90:	8e4e0014 	lw	t6,20(s2)
  41df94:	8fbc0028 	lw	gp,40(sp)
  41df98:	19c0000f 	blez	t6,41dfd8 <checkValidSelections+0x444>
  41df9c:	00008025 	move	s0,zero
  41dfa0:	00008825 	move	s1,zero
  41dfa4:	8e4f0018 	lw	t7,24(s2)
  41dfa8:	8f99801c 	lw	t9,-32740(gp)
  41dfac:	01f1c021 	addu	t8,t7,s1
  41dfb0:	8f040000 	lw	a0,0(t8)
  41dfb4:	2739df54 	addiu	t9,t9,-8364
  41dfb8:	0320f809 	jalr	t9
  41dfbc:	02602825 	move	a1,s3
  41dfc0:	8e590014 	lw	t9,20(s2)
  41dfc4:	26100001 	addiu	s0,s0,1
  41dfc8:	8fbc0028 	lw	gp,40(sp)
  41dfcc:	0219082a 	slt	at,s0,t9
  41dfd0:	1420fff4 	bnez	at,41dfa4 <checkValidSelections+0x410>
  41dfd4:	26310004 	addiu	s1,s1,4
  41dfd8:	8fbf002c 	lw	ra,44(sp)
  41dfdc:	8fb00018 	lw	s0,24(sp)
  41dfe0:	8fb1001c 	lw	s1,28(sp)
  41dfe4:	8fb20020 	lw	s2,32(sp)
  41dfe8:	8fb30024 	lw	s3,36(sp)
  41dfec:	03e00008 	jr	ra
  41dff0:	27bd0030 	addiu	sp,sp,48
