/**
 * FUN_0042b0c4
 *
 * Extracted from fsn.c lines 67255-67311
 * Ghidra address: 0x0042b0c4
 * Category: Other
 */

void FUN_0042b0c4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_gp;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  local_2c = 0;
  (**(code **)(unaff_gp + -0x77f4))(**(undefined4 **)(unaff_gp + -0x75fc),0,&local_28,&local_2c);
  uVar1 = (**(code **)(unaff_gp + -0x7bcc))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x1c80,&local_28,local_2c);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x1e96,*(undefined4 *)(unaff_gp + -0x7950),0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x28d0,*(undefined4 *)(unaff_gp + -0x7954),0);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x1c8c,&local_28,0)
  ;
  iVar3 = *(int *)(unaff_gp + -0x7fe0) + -0x4c0c;
  (**(code **)(unaff_gp + -0x7c54))
            (uVar2,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x7660));
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x1c98,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c54))
            (uVar2,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe0) + -0x4a54,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x1ca8,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c54))
            (uVar2,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x7668));
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_2c = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7b20))(uVar1,*(int *)(unaff_gp + -0x7fa4) + 0x1cb4,&local_28,0)
  ;
  (**(code **)(unaff_gp + -0x7c54))
            (uVar2,*(int *)(unaff_gp + -0x7f60) + 0x124b,iVar3,*(undefined4 *)(unaff_gp + -0x766c));
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x26c9;
  local_2c = 1;
  local_24 = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7bf8))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x1cc4,&local_28,1);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  local_2c = 1;
  local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1f37;
  local_24 = uVar1;
  (**(code **)(unaff_gp + -0x7cc0))(param_1,&local_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
