/**
 * set_camera_lookat
 *
 * Extracted from fsn.c lines 38485-38553
 * Category: Other
 */

void set_camera_lookat(double param_1,double param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  undefined4 in_register_00001040;
  undefined4 in_register_00001080;
  undefined4 in_stack_00000014;
  short in_stack_0000001a;
  short in_stack_0000001e;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  (*(code *)(*(int *)(unaff_gp + -0x7fe8) + -0xeb0))(0,0);
  (**(code **)(unaff_gp + -0x7ae4))();
  piVar2 = *(int **)(unaff_gp + -0x7684);
  iVar1 = *piVar2;
  if (in_stack_00000020 == *(int *)(iVar1 + 0x3c)) {
    *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x65f0) = (float)param_1;
    *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x65f4) = (float)param_2;
    *(float *)(*(int *)(unaff_gp + -0x7f94) + 0x65f8) =
         (float)(double)CONCAT44(in_register_00001080,in_stack_00000014);
    *(short *)(*(int *)(unaff_gp + -0x7f94) + 0x6608) = in_stack_0000001a;
    *(short *)(*(int *)(unaff_gp + -0x7f94) + 0x660a) = in_stack_0000001e;
    *(bool *)(*(int *)(unaff_gp + -0x7f94) + 0x660c) = in_stack_0000001a != *(short *)(iVar1 + 0xc);
    *(bool *)(*(int *)(unaff_gp + -0x7f94) + 0x660d) = in_stack_0000001e != *(short *)(iVar1 + 0xe);
    if (in_stack_00000020 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f94) + 0x660e) = 0;
    (**(code **)(unaff_gp + -0x7b2c))(*(int *)(unaff_gp + -0x7f94) + 0x6610,0);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x661c) = in_stack_00000024;
    iVar4 = *(int *)(unaff_gp + -0x75dc);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6620) = in_stack_00000028;
    iVar5 = *(int *)(unaff_gp + -0x7fe8);
    iVar1 = *(int *)(unaff_gp + -0x7fe8);
    iVar3 = *(int *)(unaff_gp + -0x7f94);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6618) = *(undefined4 *)(iVar4 + 0x58);
    (*(code *)(iVar5 + -0xeb0))(iVar1 + -0x450,iVar3 + 0x65f0);
  }
  else {
    if (*(char *)(*(int *)(unaff_gp + -0x75dc) + 2) != '\0') {
      (**(code **)(unaff_gp + -0x7aac))();
      piVar2 = *(int **)(unaff_gp + -0x7684);
      iVar1 = *piVar2;
    }
    *(int *)(iVar1 + 0x3c) = in_stack_00000020;
    if (in_stack_00000020 != 0) {
      (**(code **)(unaff_gp + -0x79c4))();
      piVar2 = *(int **)(unaff_gp + -0x7684);
    }
    *(float *)*piVar2 = (float)param_1;
    *(float *)(*piVar2 + 4) = (float)param_2;
    *(float *)(*piVar2 + 8) = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
    *(short *)(*piVar2 + 0xc) = in_stack_0000001a;
    (**(code **)(unaff_gp + -0x7ad8))();
    *(short *)(**(int **)(unaff_gp + -0x7684) + 0xe) = in_stack_0000001e;
    (**(code **)(unaff_gp + -0x7ad4))();
    (**(code **)(unaff_gp + -0x7acc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
