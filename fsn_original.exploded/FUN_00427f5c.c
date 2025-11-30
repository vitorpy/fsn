/**
 * FUN_00427f5c
 *
 * Extracted from fsn.c lines 64807-64823
 * Ghidra address: 0x00427f5c
 * Category: Other
 */

void FUN_00427f5c(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') &&
     (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) == 0)) {
    uVar1 = (**(code **)(unaff_gp + -0x7f30))
                      (**(undefined4 **)(unaff_gp + -0x7600),
                       *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c70),1,
                       *(int *)(unaff_gp + -0x7fe0) + -0x7fbc,0);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
