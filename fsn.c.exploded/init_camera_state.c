/**
 * init_camera_state
 *
 * Extracted from fsn.c lines 37523-37545
 * Category: Init
 */

void init_camera_state(void)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 in_register_00001040;
  float fVar2;
  undefined4 in_register_00001080;
  
  fVar2 = (float)(((double)(int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe) /
                  (double)CONCAT44(in_register_00001040,
                                   *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58d4))) *
                 (double)CONCAT44(in_register_00001080,
                                  *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58cc)));
  uVar1 = (**(code **)(unaff_gp + -0x7ca4))();
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x20) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ca0))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x24) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7c90))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x28) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
