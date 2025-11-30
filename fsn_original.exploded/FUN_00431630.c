/**
 * FUN_00431630
 *
 * Extracted from fsn.c lines 70679-70730
 * Ghidra address: 0x00431630
 * Category: Other
 */

void FUN_00431630(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = FUN_004325fc(param_1,param_2);
    iVar5 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      piVar6 = *(int **)(iVar1 + 0x20);
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        if (param_3 == *piVar6) {
          iVar2 = *(int *)(iVar1 + 0x14) + iVar5 * 0x28;
          if (param_4 == *(int *)(iVar2 + 0xc)) {
            if ((param_5 != (int *)0x0) && (*(int *)(iVar2 + 0x10) == *param_5)) {
              halt_baddata();
            }
            iVar4 = *(int *)(iVar1 + 0x18);
            iVar3 = *(int *)(iVar1 + *(int *)(iVar1 + 0x24) * 4 + 0x3c);
            if (((iVar7 != iVar3) && (iVar2 = *(int *)(iVar2 + 0x10), iVar8 = iVar2, iVar7 == 3)) &&
               (iVar8 = iVar7, iVar2 == iVar3)) {
              iVar8 = iVar2;
            }
          }
          else {
            iVar4 = *(int *)(iVar1 + 0x18);
          }
        }
        else {
          iVar4 = *(int *)(iVar1 + 0x18);
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
        iVar7 = iVar8;
      } while (iVar5 < iVar4);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
