/**
 * FUN_0040bfa0
 *
 * Extracted from fsn.c lines 50164-50174
 * Ghidra address: 0x0040bfa0
 * Category: Other
 */

void FUN_0040bfa0(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ca8) /* -> EXTERNAL_0x0f121378 */)
            ((int)*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x10),0x3f800000,0x3d4ccccd,0x43fa0000
            );
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
