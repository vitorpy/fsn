/**
 * FUN_00427de0
 *
 * Extracted from fsn.c lines 64706-64716
 * Ghidra address: 0x00427de0
 * Category: Other
 */

void FUN_00427de0(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x75dc) == '\0') {
    (**(code **)(unaff_gp + -0x7720))(*(int *)(unaff_gp + -0x7f94) + 0x6c70);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
