/**
 * update_database_entry
 *
 * Extracted from fsn.c lines 61832-61853
 * Category: Other
 */

void update_database_entry(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int unaff_gp;
  
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fdc) + -0x5218))();
  if (iVar1 != -1) {
    *param_3 = iVar1;
    uVar2 = (**(code **)(unaff_gp + -0x7c20))(param_2);
    if (uVar2 < 0x401) {
      (**(code **)(unaff_gp + -0x771c))(param_1,param_2,param_3,param_4,0x4d);
    }
    else {
      (**(code **)(unaff_gp + -0x7c38))(1,*(int *)(unaff_gp + -0x7f94) + -0x617c);
      **(undefined4 **)(unaff_gp + -0x7f70) = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
