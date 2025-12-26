/**
 * baseLocateHighlight
 *
 * Extracted from fsn.c lines 65807-65875
 * Category: Graphics
 */

void baseLocateHighlight(int param_1,undefined4 *param_2,int param_3)

{
  char *__dest;
  float fVar1;
  uint uVar2;
  undefined8 in_f4;
  
  uVar2 = (uint)((ulonglong)in_f4 >> 0x20);
  if (param_1 == 0) {
    param_1 = param_3;
  }
  if ((param_2 != DAT_10007994) || (param_1 != DAT_10007990)) {
    DAT_10007990 = param_1;
    DAT_10007994 = param_2;
    FUN_0040bc28();
    color(0);
    clear();
    color(overlayHighlightColor._2_2_);
    linewidth((int)DAT_100174b6);
    zbuffer(0);
    pushmatrix();
    scale((float)((double)((ulonglong)uVar2 << 0x20) / (double)curcontext->scale_factor /* was: *(float *)(curcontext + 0x34) */));
    rotate((int)curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */,0x78);
    rotate((int)curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */,0x7a);
    if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
      fVar1 = powf(DAT_10017594,
                   (*(float *)(curcontext + 4) -
                   curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                   *(float *)(curcontext + 8)) / DAT_10017598);
      scale(fVar1);
    }
    translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
    if (param_2 == (undefined4 *)0x0) {
      if (param_1 != 0) {
        FUN_0042728c(param_1);
      }
    }
    else {
      FUN_004277fc(param_1,param_2);
    }
    popmatrix();
    linewidth(1);
    if (param_1 == 0) {
      FUN_00429464();
    }
    else {
      __dest = (char *)build_path_string(0);
      if (param_2 == (undefined4 *)0x0) {
        if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 2) {
          FUN_004293e8(__dest);
        }
      }
      else {
        strcat(__dest,(char *)*param_2);
        FUN_004293e8(__dest);
      }
    }
    zbuffer(1);
    if (param_1 == 0) {
      FUN_00420b70();
    }
    else {
      FUN_0042194c();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429634):
     * Function: baseLocateHighlight
     *
     * Now I can provide the complete analysis:
     * ---
     * ## Assembly Analysis: baseLocateHighlight Epilogue (0x4299c4-0x429a38)
     * **What it does:**
     * After calling a function (at 0x4299c4), calls gflush() with arg=1, then checks local var at sp+40. If non-zero, calls undisplayHourglass(); otherwise calls displayHourglass(). Returns.
     * **GP offset resolution (from fsn.c context):**
     * - GP-31948 (0x8334) → `gflush` (line 38401 shows swapbuffers+gflush pattern)
     * - GP-31092 (0x868c) → `undisplayHourglass` (at line 54372)
     * - GP-31108 (0x867c) → `displayHourglass` (at line 54292)
     * **C pseudocode (to replace halt_baddata):**
     * ```c
     * gflush();
     * if (param_1 != 0) {      // sp+40 = param_1 (the directory node)
     * undisplayHourglass();
     * } else {
     * displayHourglass(1);  // arg was li a0,1
     * }
     * }
     * ```
     * **Comment for code:**
     * ```c
     * // ASM 0x4299c4-429a38: gflush(); if(param_1) undisplayHourglass(); else displayHourglass(1);
     * ```
     */
halt_baddata();
}
