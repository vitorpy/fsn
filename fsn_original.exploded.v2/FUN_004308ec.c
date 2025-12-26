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
    iVar3 = iVar2->child_center /* was: *(int *)(iVar2 + 0x28) */;
    while (-1 < iVar3 << 5) {
LAB_00430a08:
      do {
        if (iVar2 == 0) {
          iVar1 = iVar1->_field_6c /* was: *(int *)(iVar1 + 0x6c) */;
          visitedSearchDp = iVar1;
          if (iVar1 != 0) {
            iVar2 = iVar1->initial_val /* was: *(int *)(iVar1 + 0x70) */;
            visitedSearchFp = iVar2;
          }
        }
        else {
          iVar2 = iVar2->_field_24 /* was: *(int *)(iVar2 + 0x24) */;
          visitedSearchFp = iVar2;
          if ((iVar2 == 0) && (iVar1 = iVar1->_field_6c /* was: *(int *)(iVar1 + 0x6c) */, visitedSearchDp = iVar1, iVar1 != 0))
          {
            iVar2 = iVar1->initial_val /* was: *(int *)(iVar1 + 0x70) */;
            visitedSearchFp = iVar2;
          }
        }
      } while ((iVar1 != 0) && (-1 < iVar1->render_flags /* was: *(int *)(iVar1 + 0x74) */ << 3));
      if (iVar2 == 0) break;
      iVar3 = iVar2->child_center /* was: *(int *)(iVar2 + 0x28) */;
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x004308ec):
     * Function: FUN_004308ec
     *
     * Looking at the GP offsets and control flow:
     * **1. What it does:**
     * Loads a global pointer, checks if it's non-NULL. If non-NULL, calls one function (likely free/cleanup). If NULL path (from 430b30), calls two functions in sequence (likely fork+exec or similar system call pair).
     * **2. C pseudocode:**
     * ```c
     * // GP offset -30244 (0x89dc) = some global pointer (likely a process/child handle)
     * // GP offset -31164 (0x8644) = likely free() or cleanup function
     * // GP offset -31176 (0x8638) = likely fork() or vfork()
     * // GP offset -31424 (0x8540) = likely execl() or system()
     * extern void *child_handle;  // DAT at gp-30244
     * if (child_handle != NULL) {
     * free(child_handle);  // or wait() on child
     * } else {
     * // This branch entered from elsewhere (430b30)
     * fork();   // gp-31176
     * execl();  // gp-31424
     * }
     * return;
     * ```
     * To get exact function names, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-30244
     * -31164
     * -31176
     * -31424"
     * ```
     */
halt_baddata();
}
