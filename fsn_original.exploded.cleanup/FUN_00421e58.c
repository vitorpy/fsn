/**
 * FUN_00421e58
 *
 * Extracted from fsn.c lines 61686-61723
 * Ghidra address: 0x00421e58
 * Category: Other
 */

void FUN_00421e58(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_gp;
  
  piVar5 = *(int **)(unaff_gp + -0x76b8) /* -> numcmap */;
  iVar4 = *piVar5;
  iVar3 = 0;
  if (0 < iVar4) {
    piVar1 = (int *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c38);
    do {
      if (param_1 == *piVar1) {
        iVar4 = iVar4 + -1;
        if (iVar3 < iVar4) {
          iVar3 = *(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */;
          do {
            piVar2 = piVar1 + 1;
            *piVar1 = piVar1[1];
            piVar1 = piVar2;
          } while (piVar2 < (int *)(iVar4 * 4 + iVar3 + 0x6c38));
        }
        iVar3 = *(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */;
        *piVar5 = iVar4;
        (*(code *)(iVar3 + 0x1c14))();
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < iVar4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
