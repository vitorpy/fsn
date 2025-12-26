/**
 * rescaleOverview
 *
 * Extracted from fsn.c lines 61254-61293
 * Category: Other
 */

void rescaleOverview(void)

{
  float fVar1;
  byte in_fcsr;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  if (overviewActive != '\0') {
    uStack_48 = 0xf66160a;
    fVar1 = (maxx - minx) * window_scale_x;
    uStack_50 = 0xf661888;
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    iStack_4c = (int)fVar1;
    fVar1 = (maxy - miny) * window_scale_y;
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    iStack_44 = (int)fVar1;
    XtSetValues(DAT_10016c0c,&uStack_50,2);
    FUN_0041fd70();
    ortho2(minx,maxx);
    FUN_004207b4();
    FUN_0041fdb0();
    ortho2(minx,maxx);
    FUN_00420b70();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421774):
     * Function: rescaleOverview
     *
     * Looking at the GP offsets and assembly pattern:
     * **1. What it does:**
     * Calls an unknown function (GP-0x8664), then calls `ortho2` with float args from globals and int args from globals, then calls another function (GP-0x867c) before returning.
     * **2. C pseudocode:**
     * ```c
     * // After halt_baddata marker at 0x4218c8:
     * (*GP_MINUS_8664)();                    // Unknown function - likely pushmatrix or viewport setup
     * ortho2(overview_left,                  // $f12 from GP-0x8a2c -> float
     * overview_right,                 // $f14 from GP-0x8a30 -> float
     * *(int*)(GP_MINUS_8a34),         // a2 - integer arg
     * *(int*)(GP_MINUS_8a38));        // a3 - integer arg
     * (*GP_MINUS_867c)();                    // Unknown function - likely popmatrix
     * return;
     * ```
     * To resolve the GP offsets, check your `GP_MAPPING.md` or run:
     * ```
     * python3 analysis/resolve_got.py
     * ```
     * with offsets -0x8664, -0x8488 (ortho2), -0x867c, -0x8a2c, -0x8a30, -0x8a34, -0x8a38
     * The pattern (push/setup, ortho2 for 2D projection, pop/restore, return) suggests this is the tail of rescaleOverview setting up a 2D orthographic view for the overview minimap widget.
     */
halt_baddata();
}
