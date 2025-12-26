# Function: FUN_00411114
# Address: 0x00411114 - 0x00411178
# Size: 0x64 (100 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411114 <fileerror+0x8c>:
  411114:	3c1c0fc1 	lui	gp,0xfc1
  411118:	279cca1c 	addiu	gp,gp,-13796
  41111c:	0399e021 	addu	gp,gp,t9
  411120:	27bdffe0 	addiu	sp,sp,-32
  411124:	8f998778 	lw	t9,-30856(gp)
  411128:	afbf001c 	sw	ra,28(sp)
  41112c:	afa50024 	sw	a1,36(sp)
  411130:	afbc0018 	sw	gp,24(sp)
  411134:	afa60028 	sw	a2,40(sp)
  411138:	afa7002c 	sw	a3,44(sp)
  41113c:	0320f809 	jalr	t9
  411140:	00002825 	move	a1,zero
  411144:	8fbc0018 	lw	gp,24(sp)
  411148:	8fa40024 	lw	a0,36(sp)
  41114c:	8f998018 	lw	t9,-32744(gp)
  411150:	8f85806c 	lw	a1,-32660(gp)
  411154:	8f86806c 	lw	a2,-32660(gp)
  411158:	2739f080 	addiu	t9,t9,-3968
  41115c:	24a5662c 	addiu	a1,a1,26156
  411160:	0320f809 	jalr	t9
  411164:	24c66630 	addiu	a2,a2,26160
  411168:	8fbf001c 	lw	ra,28(sp)
  41116c:	8fbc0018 	lw	gp,24(sp)
  411170:	03e00008 	jr	ra
  411174:	27bd0020 	addiu	sp,sp,32
