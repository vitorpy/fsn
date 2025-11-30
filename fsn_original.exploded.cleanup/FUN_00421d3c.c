/**
 * FUN_00421d3c
 *
 * Extracted from fsn.c lines 61556-61588
 * Ghidra address: 0x00421d3c
 * Category: Other
 */

void FUN_00421d3c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_gp;
  
  iVar1 = 0;
  iVar2 = **(int **)(unaff_gp + -0x76bc) /* -> numtop */;
  if (0 < iVar2) {
    piVar3 = (int *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c10);
    do {
      if (param_1 == *piVar3) {
        if (iVar1 < iVar2 + -1) {
          iVar1 = *(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */;
          do {
            piVar4 = piVar3 + 1;
            *piVar3 = piVar3[1];
            piVar3 = piVar4;
          } while (piVar4 < (int *)((iVar2 + -1) * 4 + iVar1 + 0x6c10));
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < iVar2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
