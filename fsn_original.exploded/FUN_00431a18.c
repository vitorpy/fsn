/**
 * FUN_00431a18
 *
 * Extracted from fsn.c lines 70857-70890
 * Ghidra address: 0x00431a18
 * Category: Other
 */

void FUN_00431a18(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x25fc))(param_1,param_2);
    iVar4 = 0;
    if (param_4 == 0) {
      param_4 = *(int *)(iVar1 + 0x24);
    }
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      do {
        if ((((param_3 == (int *)0x0) ||
             (*(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0x10) == *param_3)) &&
            (param_4 == *(int *)(*(int *)(iVar1 + 0x20) + iVar2 * 4))) &&
           (iVar3 = *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0xc), iVar4 < iVar3)) {
          iVar4 = iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x18));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
