/**
 * init_view_transform
 *
 * Extracted from fsn.c lines 37470-37492
 * Category: Init
 */

void init_view_transform(void)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 in_register_00001040;
  float fVar2;
  undefined4 in_register_00001080;
  
  fVar2 = (float)(((double)(int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xc) /
                  (double)CONCAT44(in_register_00001040,
                                   *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58e4))) *
                 (double)CONCAT44(in_register_00001080,
                                  *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58dc)));
  uVar1 = (**(code **)(unaff_gp + -0x7ca4))();
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x14) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ca0))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x18) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7c90))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x1c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
