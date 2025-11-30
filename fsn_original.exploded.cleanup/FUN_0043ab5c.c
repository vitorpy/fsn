/**
 * FUN_0043ab5c
 *
 * Extracted from fsn.c lines 77951-77964
 * Ghidra address: 0x0043ab5c
 * Category: Other
 */

void FUN_0043ab5c(uint *param_1)

{
  uint *puVar1;
  int unaff_gp;
  uint auStack_80 [32];
  
  (**(code **)(unaff_gp + -0x7ef4) /* -> EXTERNAL_0x0fac0e84 */)(auStack_80,0x80);
  puVar1 = auStack_80 + (*param_1 >> 5);
  *puVar1 = *puVar1 | 1 << (*param_1 & 0x1f);
  (**(code **)(unaff_gp + -0x7c80) /* -> EXTERNAL_0x0fac211c */)(0x400,auStack_80,0,0,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x60cc);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
