/**
 * layout_tree_recursive
 *
 * Extracted from fsn.c lines 39799-39811
 * Category: Other
 */

void layout_tree_recursive(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 unaff_000010a0;
  
  uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x18b0))();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(float *)(param_1 + 0x34) = (float)(double)CONCAT44(unaff_000010a0,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
