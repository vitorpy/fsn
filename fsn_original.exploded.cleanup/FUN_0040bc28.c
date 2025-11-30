/**
 * FUN_0040bc28
 *
 * Extracted from fsn.c lines 50074-50084
 * Ghidra address: 0x0040bc28
 * Category: Other
 */

void FUN_0040bc28(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c) /* -> EXTERNAL_0x0f14c31c */)
            (**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,
             *(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
