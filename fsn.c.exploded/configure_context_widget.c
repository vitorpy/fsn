/**
 * configure_context_widget
 *
 * Extracted from fsn.c lines 44047-44071
 * Category: UI
 */

void configure_context_widget(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  undefined1 auStack_50 [80];
  
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4e30,auStack_50,0);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b8c) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar2 + 0x124b,*(int *)(unaff_gp + -0x7fe4) + -0x1368,0);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b8c),0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b8c));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x4e1c,auStack_50,0);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b90) = uVar1;
  (**(code **)(unaff_gp + -0x7c54))(uVar1,iVar2 + 0x124b,*(int *)(unaff_gp + -0x7fe4) + -0x1180,0);
  (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b90),0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b90));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
