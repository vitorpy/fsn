/**
 * update_view_recursive
 *
 * Extracted from fsn.c lines 49634-49659
 * Category: Other
 */

void update_view_recursive(int param_1,int param_2)

{
  int unaff_gp;
  undefined4 uVar1;
  
  (**(code **)(unaff_gp + -0x7b48))();
  (**(code **)(unaff_gp + -0x7b60))(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38))
  ;
  (**(code **)(unaff_gp + -0x7b6c))(*(undefined4 *)(param_1 + 0x58));
  (**(code **)(unaff_gp + -0x7908))(param_2);
  (**(code **)(unaff_gp + -0x7b60))(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18))
  ;
  if (((*(char *)(**(int **)(unaff_gp + -0x7684) + 0xc50) == '\0') ||
      (*(char *)(*(int *)(unaff_gp + -0x75dc) + 5) == '\0')) ||
     (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44))) {
    uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar1,uVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
