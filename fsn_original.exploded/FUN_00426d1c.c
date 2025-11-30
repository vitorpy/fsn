/**
 * FUN_00426d1c
 *
 * Extracted from fsn.c lines 63986-63999
 * Ghidra address: 0x00426d1c
 * Category: Other
 */

void FUN_00426d1c(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7920))();
  }
  else {
    (**(code **)(unaff_gp + -0x79f4))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
