/**
 * update_gl_context
 *
 * Extracted from fsn.c lines 45756-45771
 * Category: Other
 */

void update_gl_context(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684);
  if (*(int *)(iVar1 + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x78fc))(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
  }
  else {
    (**(code **)(unaff_gp + -0x79e4))(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
