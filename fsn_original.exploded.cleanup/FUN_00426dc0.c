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
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7924) /* -> FUN_0042631c */)();
  }
  else {
    (**(code **)(unaff_gp + -0x79f8) /* -> FUN_0041a358 */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
