/**
 * FUN_00427ec8
 *
 * Extracted from fsn.c lines 64775-64787
 * Ghidra address: 0x00427ec8
 * Category: Other
 */

void FUN_00427ec8(int param_1)

{
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') && (*(int *)(param_1 + 0x74) << 10 < 0)) {
    (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7714))(*(int *)(unaff_gp + -0x7f94) + 0x6c70,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xdf;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
