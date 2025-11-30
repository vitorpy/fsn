/**
 * init_mark_panel
 *
 * Extracted from fsn.c lines 54089-54132
 * Category: UI
 */

void init_mark_panel(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int unaff_gp;
  int local_54 [21];
  
  local_54[0] = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_54[1] = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7ba4))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x3c30,local_54,1);
  puVar4 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec0);
  *puVar4 = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,0xd);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,0xb);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,0xe);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,8);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  iVar3 = *(int *)(unaff_gp + -0x7fe0);
  pcVar5 = *(code **)(unaff_gp + -0x7c54);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec4) = uVar1;
  (*pcVar5)(*puVar4,iVar2 + 0x214e,iVar3 + -0xb28,0);
  (**(code **)(unaff_gp + -0x7c54))
            (*puVar4,*(int *)(unaff_gp + -0x7f60) + 0x14a5,*(int *)(unaff_gp + -0x7fe0) + -0xa30,0);
  (**(code **)(unaff_gp + -0x7c78))(*puVar4);
  (**(code **)(unaff_gp + -0x785c))(*puVar4,*(undefined4 *)(unaff_gp + -0x7644));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x3c40,local_54,0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe0) + -0x8c4,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x785c))(uVar1,*(undefined4 *)(unaff_gp + -0x7644));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
