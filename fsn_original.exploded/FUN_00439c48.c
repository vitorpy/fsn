/**
 * FUN_00439c48
 *
 * Extracted from fsn.c lines 77440-77502
 * Ghidra address: 0x00439c48
 * Category: Other
 */

void FUN_00439c48(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int unaff_gp;
  undefined1 uStack_c88;
  undefined1 auStack_c87 [3007];
  undefined4 local_c8 [17];
  char local_84 [128];
  undefined4 local_4;
  
  local_4 = *param_3;
  (*(code *)(*(int *)(unaff_gp + -0x7fdc) + -0x5108))(local_4,param_4);
  iVar1 = (**(code **)(unaff_gp + -0x7c2c))(0x10,local_c8);
  local_84[0] = '\0';
  pcVar4 = local_84;
  if (1 < iVar1) {
    iVar7 = *(int *)(unaff_gp + -0x7f94);
    iVar6 = *(int *)(unaff_gp + -0x7f94);
    puVar5 = local_c8 + 1;
    do {
      if (puVar5 == local_c8 + 1) {
        (**(code **)(unaff_gp + -0x7c1c))(pcVar4,iVar6 + -25000,iVar1 + -1);
        iVar2 = (**(code **)(unaff_gp + -0x7c20))(pcVar4);
        pcVar4 = pcVar4 + iVar2;
      }
      (**(code **)(unaff_gp + -0x7c1c))(pcVar4,iVar7 + -0x61a4,*puVar5);
      iVar2 = (**(code **)(unaff_gp + -0x7c20))(pcVar4);
      puVar5 = puVar5 + 1;
      pcVar4 = pcVar4 + iVar2;
    } while (puVar5 < local_c8 + iVar1);
  }
  if (local_84[0] == '\0') {
    uVar3 = (**(code **)(unaff_gp + -0x7cec))();
    (**(code **)(unaff_gp + -0x7c1c))
              (&uStack_c88,*(int *)(unaff_gp + -0x7f94) + -0x618c,param_5,local_4,uVar3,local_c8[0],
               param_2);
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(&uStack_c88);
    iVar1 = iVar1 + 1;
  }
  else {
    uVar3 = (**(code **)(unaff_gp + -0x7cec))();
    (**(code **)(unaff_gp + -0x7c1c))
              (&uStack_c88,*(int *)(unaff_gp + -0x7f94) + -0x61a0,param_5,local_4,uVar3,local_c8[0],
               param_2);
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(&uStack_c88);
    (**(code **)(unaff_gp + -0x7c1c))
              (auStack_c87 + iVar1,*(int *)(unaff_gp + -0x7f94) + -0x6190,local_84);
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(auStack_c87 + iVar1);
    iVar6 = (**(code **)(unaff_gp + -0x7c20))(&uStack_c88);
    iVar1 = iVar6 + iVar1 + 2;
  }
  (**(code **)(unaff_gp + -0x7700))(param_1[1],*param_1,&uStack_c88,iVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
