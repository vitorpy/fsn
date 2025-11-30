/**
 * FUN_00427fe0
 *
 * Extracted from fsn.c lines 64844-64856
 * Ghidra address: 0x00427fe0
 * Category: Other
 */

void FUN_00427fe0(void)

{
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') &&
     (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) != 0)) {
    (**(code **)(unaff_gp + -0x7f2c))();
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
