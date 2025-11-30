/**
 * handle_item_action
 *
 * Extracted from fsn.c lines 41672-41721
 * Category: Other
 */

void handle_item_action(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  undefined4 uVar4;
  undefined1 auStack_90 [20];
  int local_7c;
  int local_60;
  int local_50;
  undefined4 local_8;
  
  iVar1 = (**(code **)(unaff_gp + -0x7a5c))();
  if (iVar1 != 0) {
    local_8 = (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7ce4))(local_8,param_2);
    iVar2 = (**(code **)(unaff_gp + -0x7ee0))(local_8,auStack_90);
    if (-1 < iVar2) {
      if (((local_7c != *(int *)(iVar1 + 8)) || (local_60 != *(int *)(iVar1 + 0xc))) ||
         (local_50 != *(int *)(iVar1 + 0x10))) {
        iVar2 = *(int *)(unaff_gp + -0x7fe8);
        *(int *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x1c) + local_60) - *(int *)(iVar1 + 0xc);
        uVar4 = (*(code *)(iVar2 + 0x18b0))(param_1);
        *(undefined4 *)(param_1 + 0x24) = uVar4;
        *(int *)(iVar1 + 8) = local_7c;
        *(int *)(iVar1 + 0xc) = local_60;
        *(int *)(iVar1 + 0x10) = local_50;
        uVar4 = (**(code **)(unaff_gp + -0x77e8))(local_8);
        *(undefined4 *)(iVar1 + 0x20) = uVar4;
        piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x184);
        if (*piVar3 < *(int *)(iVar1 + 0xc)) {
          *piVar3 = *(int *)(iVar1 + 0xc);
        }
        piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x18c);
        if (*piVar3 < *(int *)(param_1 + 0x1c)) {
          *piVar3 = *(int *)(param_1 + 0x1c);
        }
        (**(code **)(unaff_gp + -0x7a74))(iVar1);
        (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x2234))(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) | 0x80;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
