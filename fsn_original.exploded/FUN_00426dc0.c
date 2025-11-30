/**
 * FUN_00426dc0
 *
 * Extracted from fsn.c lines 64022-64035
 * Ghidra address: 0x00426dc0
 * Category: Other
 */

void FUN_00426dc0(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7924))();
  }
  else {
    (**(code **)(unaff_gp + -0x79f8))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
