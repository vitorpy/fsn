/**
 * update_directory_bounds
 *
 * Extracted from fsn.c lines 39507-39517
 * Category: Filesystem
 */

void update_directory_bounds(int param_1)

{
  int unaff_gp;
  undefined4 uVar1;
  
  uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x1804))();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
