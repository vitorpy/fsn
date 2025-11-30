/**
 * FUN_004308ec
 *
 * Extracted from fsn.c lines 70200-70276
 * Ghidra address: 0x004308ec
 * Category: Other
 */

void FUN_004308ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (visitedSearchFp == 0) {
    iVar2 = 0;
    if (visitedSearchDp == 0) {
      visitedSearchDp = firstSearchDir;
      if (firstSearchDir != 0) {
        iVar2 = *(int *)(firstSearchDir + 0x70);
        visitedSearchFp = iVar2;
      }
    }
    else {
      visitedSearchDp = *(int *)(visitedSearchDp + 0x6c);
      if (visitedSearchDp != 0) {
        iVar2 = *(int *)(visitedSearchDp + 0x70);
        visitedSearchFp = iVar2;
      }
    }
  }
  else {
    iVar2 = *(int *)(visitedSearchFp + 0x24);
    visitedSearchFp = iVar2;
    if ((iVar2 == 0) && (visitedSearchDp = *(int *)(visitedSearchDp + 0x6c), visitedSearchDp != 0))
    {
      iVar2 = *(int *)(visitedSearchDp + 0x70);
      visitedSearchFp = iVar2;
    }
  }
  iVar1 = visitedSearchDp;
  if ((visitedSearchDp != 0) && (-1 < *(int *)(visitedSearchDp + 0x74) << 3)) goto LAB_00430a08;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x28);
    while (-1 < iVar3 << 5) {
LAB_00430a08:
      do {
        if (iVar2 == 0) {
          iVar1 = *(int *)(iVar1 + 0x6c);
          visitedSearchDp = iVar1;
          if (iVar1 != 0) {
            iVar2 = *(int *)(iVar1 + 0x70);
            visitedSearchFp = iVar2;
          }
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x24);
          visitedSearchFp = iVar2;
          if ((iVar2 == 0) && (iVar1 = *(int *)(iVar1 + 0x6c), visitedSearchDp = iVar1, iVar1 != 0))
          {
            iVar2 = *(int *)(iVar1 + 0x70);
            visitedSearchFp = iVar2;
          }
        }
      } while ((iVar1 != 0) && (-1 < *(int *)(iVar1 + 0x74) << 3));
      if (iVar2 == 0) break;
      iVar3 = *(int *)(iVar2 + 0x28);
    }
  }
  FUN_0041d920();
  if (visitedSearchDp == 0) {
    FUN_0041d54c();
    reset_eye();
  }
  else {
    FUN_0041d69c();
    FUN_0041fbb4();
    if (visitedSearchFp != 0) {
      FUN_0041da44(visitedSearchFp);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
