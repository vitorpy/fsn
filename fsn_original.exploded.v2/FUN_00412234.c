/**
 * FUN_00412234
 *
 * Extracted from fsn.c lines 52812-52869
 * Ghidra address: 0x00412234
 * Category: Other
 */

void FUN_00412234(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte in_fcsr;
  int local_1c [7];
  
  fVar1 = (float)param_1->file_count /* was: *(int *)(param_1 + 0xc) */ * DAT_1001758c;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar1);
  }
  else {
    fVar1 = FLOOR(fVar1);
  }
  iVar5 = (int)fVar1;
  bzero(local_1c,0x1c);
  iVar2 = 0;
  if (0 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      piVar4 = (int *)(param_1->file_array /* was: *(int *)(param_1 + 0x10) */ + iVar3);
      iVar3 = iVar3 + 4;
      piVar4 = local_1c + (*(uint *)(*piVar4 + 0x28) >> 0x1d);
      *piVar4 = *piVar4 + 1;
    } while (iVar2 < param_1->file_count /* was: *(int *)(param_1 + 0xc) */);
  }
  if (iVar5 < local_1c[0]) {
    param_1->display_mode /* was: *(undefined4 *)(param_1 + 0x68) */ = 0;
  }
  else if (iVar5 < local_1c[1]) {
    param_1->display_mode /* was: *(undefined4 *)(param_1 + 0x68) */ = 1;
  }
  else if (iVar5 < local_1c[2]) {
    param_1->display_mode /* was: *(undefined4 *)(param_1 + 0x68) */ = 2;
  }
  else if (iVar5 < local_1c[3]) {
    param_1->display_mode /* was: *(undefined4 *)(param_1 + 0x68) */ = 3;
  }
  else if (iVar5 < local_1c[4]) {
    param_1->display_mode /* was: *(undefined4 *)(param_1 + 0x68) */ = 4;
  }
  else if (iVar5 < local_1c[5]) {
    param_1->display_mode /* was: *(undefined4 *)(param_1 + 0x68) */ = 5;
  }
  else if (iVar5 < local_1c[6]) {
    param_1->display_mode /* was: *(undefined4 *)(param_1 + 0x68) */ = 6;
  }
  else {
    param_1->display_mode /* was: *(undefined4 *)(param_1 + 0x68) */ = 7;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00412234):
     * Function: FUN_00412234
     *
     * Looking at this assembly:
     * **What it does:**
     * Binary search refinement - compares value in a3 against 4 thresholds at v0[0..3], storing result index (v1, v1+1, v1+2, v1+3, or 7) into a2->offset_104. Falls through cascade of comparisons.
     * **C pseudocode:**
     * ```c
     * // v0 = int array[4], v1 = base_index, a3 = value, a2 = struct ptr
     * if (value < array[0]) {
     * a2->field_68 = base_index;
     * } else if (value < array[1]) {
     * a2->field_68 = base_index + 1;
     * } else if (value < array[2]) {
     * a2->field_68 = base_index + 2;
     * } else if (value < array[3]) {
     * a2->field_68 = base_index + 3;
     * } else {
     * a2->field_68 = 7;  // max/default value
     * }
     * // function epilogue follows
     * ```
     * This appears to be the tail of `layout_db()` determining which "bin" or "slot" (0-7) a value falls into based on threshold comparisons - likely for positioning items in the 3D layout grid.
     */
halt_baddata();
}
