/**
 * highlightDirWarp
 *
 * Extracted from fsn.c lines 57333-57388
 * Category: Filesystem
 */

void highlightDirWarp(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  uint in_register_00001090;
  undefined8 uVar7;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_3 != curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */) {
    pushmatrix();
    iVar4 = curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */;
    if (param_3 == iVar4->child_center /* was: *(int *)(iVar4 + 0x28) */) {
      FUN_0041a908((ulonglong)uVar5 << 0x20,(double)iVar4->height /* was: *(float *)(iVar4 + 0x3c) */ + (double)DAT_1001756c)
      ;
    }
    else if (param_3 == iVar4->child_left /* was: *(int *)(iVar4 + 0x2c) */) {
      FUN_0041a908((double)-DAT_10017570,(double)iVar4->height /* was: *(float *)(iVar4 + 0x3c) */ + (double)DAT_1001756c);
    }
    else if (param_3 == iVar4->child_right /* was: *(int *)(iVar4 + 0x30) */) {
      FUN_0041a908((double)DAT_10017570,(double)iVar4->height /* was: *(float *)(iVar4 + 0x3c) */ + (double)DAT_1001756c);
    }
    else {
      iVar3 = iVar4->child_count /* was: *(int *)(iVar4 + 0x14) */;
      iVar1 = 0;
      if (0 < iVar3) {
        piVar2 = iVar4->child_array /* was: *(int **)(iVar4 + 0x18) */;
        do {
          if (param_3 == *piVar2) {
            uVar7 = CONCAT44(uVar5,(float)((double)-DAT_10017560 *
                                           (double)((ulonglong)in_register_00001090 << 0x20) *
                                           (double)(iVar3 + -1) +
                                          (double)DAT_10017560 * (double)iVar1));
            translate(uVar7,iVar3,iVar4,0);
            uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
            rotate(0xfffffc7c,0x7a);
            translate(CONCAT44(uVar6,0x3f333333),CONCAT44(uVar8,0xbde66666));
            rect(0xbca3d70a,0xbca3d70a);
            break;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar1 < iVar3);
      }
    }
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041a9f8):
     * Function: highlightDirWarp
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Performs a double-precision multiply-add operation on floating point values loaded via GP-relative addressing, converts result to single precision, then calls a function (at GP offset -32240, likely `c3f` or similar GL function) with the computed value and 0.245 (0x3e7ae148) as arguments. The loop at 41ac48-41ac54 iterates through an array. Ends with a call to function at GP offset -31528 (likely `popmatrix`).
     * **C pseudocode:**
     * ```c
     * // After halt_baddata recovery:
     * float result = (float)((double)val * (double)scale_factor + (double)offset);
     * c3f(result, $f12_value, 0.245f);  // or similar 3-arg GL call
     * // Loop continuation (v0 = i, a0 = count, v1 = ptr)
     * i++;
     * if (i < count) goto loop_start;  // back to 41ab44
     * ptr += 4;
     * popmatrix();
     * // function epilogue - restore ra, s0, return
     * ```
     * The GP offsets need resolution: -32240 (0x8210) and -31528 (0x84d8) should be looked up in GP_MAPPING.md to identify the actual functions being called.
     */
halt_baddata();
}
