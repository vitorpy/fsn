/**
 * show_error_message
 *
 * Extracted from fsn.c lines 38814-38840
 * Category: Other
 */

void show_error_message(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_gp;
  int local_54;
  undefined4 local_50;
  undefined4 local_4;
  
  local_50 = (**(code **)(unaff_gp + -0x7c24))(param_1,*(undefined4 *)(unaff_gp + -0x7f60));
  local_54 = *(int *)(unaff_gp + -0x7f60) + 0x1f78;
  local_4 = local_50;
  uVar1 = (**(code **)(unaff_gp + -0x7ec0))
                    (**(undefined4 **)(unaff_gp + -0x75f0),*(int *)(unaff_gp + -0x7fa4) + -0x5934,
                     &local_54,1);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0))(uVar1,2);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0))(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f5c) + 0xa9,*(int *)(unaff_gp + -0x7fe8) + 0xf30,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x7e88))(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
