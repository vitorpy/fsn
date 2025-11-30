/**
 * FUN_0042728c
 *
 * Extracted from fsn.c lines 64227-64240
 * Ghidra address: 0x0042728c
 * Category: Other
 */

void FUN_0042728c(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7910) /* -> FUN_00426ef4 */)();
  }
  else {
    (**(code **)(unaff_gp + -0x79ec) /* -> FUN_0041aa04 */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
