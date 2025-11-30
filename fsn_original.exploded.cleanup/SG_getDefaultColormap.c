/**
 * SG_getDefaultColormap
 *
 * Extracted from fsn.c lines 70535-70575
 * Category: Other
 */

void SG_getDefaultColormap(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x50 + 0x28);
    }
    param_2 = param_2 * 0x50;
    if (param_3 != *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 0x28)) {
      iVar1 = FUN_004325fc(param_1);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 0x18)) {
        piVar3 = *(int **)(iVar1 + 0x14);
        do {
          if (param_3 == *piVar3) {
            if (*(int *)(*(int *)(iVar1 + 0x1c) + iVar4 * 4) != 0) {
              halt_baddata();
            }
            uVar2 = XCreateColormap(param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 + 8),
                                    param_3,0);
            *(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar4 * 4) = uVar2;
            halt_baddata();
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 10;
        } while (iVar4 < *(int *)(iVar1 + 0x18));
      }
      XCreateColormap(param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 + 8),param_3,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
