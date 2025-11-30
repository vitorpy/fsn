/**
 * SG_getMatchingVisual
 *
 * Extracted from fsn.c lines 70782-70813
 * Category: Other
 */

void SG_getMatchingVisual(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = FUN_004325fc(param_1,param_2);
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      do {
        if ((((param_3 == 0) || (param_3 == *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 4))) &&
            ((param_4 == (int *)0x0 ||
             (*(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0x10) == *param_4)))) &&
           ((param_6 == 0 || (param_6 == *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0xc))))) {
          if (param_5 == 0) {
            halt_baddata();
          }
          if (param_5 == *(int *)(*(int *)(iVar1 + 0x20) + iVar2 * 4)) {
            halt_baddata();
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x18));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
