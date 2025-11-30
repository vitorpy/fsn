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
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7904) /* -> FUN_0042757c */)();
  }
  else {
    (**(code **)(unaff_gp + -0x79e8) /* -> FUN_0041ac8c */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
