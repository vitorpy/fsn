/**
 * FUN_00410088
 *
 * Extracted from fsn.c lines 51591-51623
 * Ghidra address: 0x00410088
 * Category: Other
 */

void FUN_00410088(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_gp;
  
  piVar3 = *(int **)(unaff_gp + -0x7684);
  piVar4 = *(int **)(unaff_gp + -0x767c);
  iVar2 = 0;
  iVar1 = (**(code **)(unaff_gp + -0x7838))
                    (*(int *)(*piVar4 + 0x34) + *(int *)(*piVar3 + 0x40) * 0x38);
  if (iVar1 == 0) {
    do {
      *(int *)(*piVar3 + 0x40) = *(int *)(*piVar3 + 0x40) + -1;
      iVar1 = *(int *)(*piVar3 + 0x40);
      if (iVar1 < 0) {
        *(undefined4 *)(*piVar3 + 0x40) = 9;
        iVar1 = *(int *)(*piVar3 + 0x40);
      }
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(unaff_gp + -0x7838))(*(int *)(*piVar4 + 0x34) + iVar1 * 0x38);
    } while ((iVar1 == 0) && (iVar2 != 10));
  }
  *(int *)(*piVar3 + 0x40) = *(int *)(*piVar3 + 0x40) + -1;
  if (*(int *)(*piVar3 + 0x40) < 0) {
    *(undefined4 *)(*piVar3 + 0x40) = 9;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
