/**
 * update_child_nodes
 *
 * Extracted from fsn.c lines 42028-42075
 * Category: Other
 */

void update_child_nodes(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
  (**(code **)(unaff_gp + -0x78e8))();
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfb;
      iVar1 = *(int *)(param_1 + 0xc);
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    (**(code **)(unaff_gp + -0x7f40))(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(unaff_gp + -0x7a18))(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) & 0xef;
      iVar1 = *(int *)(param_1 + 0x14);
    } while (iVar3 < iVar1);
  }
  if (iVar1 != 0) {
    (**(code **)(unaff_gp + -0x7f40))(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
