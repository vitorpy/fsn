/**
 * FUN_004277fc
 *
 * Extracted from fsn.c lines 64400-64413
 * Ghidra address: 0x004277fc
 * Category: Other
 */

void FUN_004277fc(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7904))();
  }
  else {
    (**(code **)(unaff_gp + -0x79e8))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
