/**
 * FUN_004220f0
 *
 * Extracted from fsn.c lines 61904-61932
 * Ghidra address: 0x004220f0
 * Category: Other
 */

void FUN_004220f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_gp;
  undefined1 auStack_70 [12];
  undefined1 local_64 [12];
  undefined4 local_58 [2];
  int local_50;
  undefined4 *local_4c;
  
  iVar1 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)() /* =FUN_00421f10 */;
  local_4c = local_58;
  if (iVar1 == 0) {
    local_50 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x4528;
  }
  else {
    local_50 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x4538;
  }
  /* TODO: GP:-0x7c9c */ (**(code **)(unaff_gp + -0x7c9c) /* -> EXTERNAL_0x0f672b80 */)(param_1,&local_50,1);
  iVar1 = /* TODO: GP:-0x7d44 */ (**(code **)(unaff_gp + -0x7d44) /* -> EXTERNAL_0x0f53fd3c */)
                    (**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,local_58[0],param_2,local_64,auStack_70);
  if (iVar1 == 0) {
    /* TODO: GP:-0x7c08 */ (**(code **)(unaff_gp + -0x7c08) /* -> EXTERNAL_0x0fac7f1c */)
              (*(int *)(unaff_gp + -0x7f68) /* -> EXTERNAL_0x0fb528e4 */ + 0x20,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4518,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004220f0):
     * Function: FUN_004220f0
     *
     * Looking at this assembly:
     * 1. **What it does**: Calls XAllocNamedColor (at GP-32068) with display, colormap, color_name, and output params. If successful (returns non-zero), returns the allocated pixel value. If it fails, calls fprintf (at GP-31752) to print an error message and returns 1.
     * 2. **C pseudocode**:
     * ```c
     * XColor exact_color, screen_color;
     * if (XAllocNamedColor(display, colormap, color_name, &screen_color, &exact_color)) {
     * return screen_color.pixel;  // success - return allocated pixel
     * } else {
     * fprintf(stderr, "allocOverlayColor: can't alloc %s\n", color_name);
     * return 1;  // failure fallback
     * }
     * ```
     * Key GP offsets resolved:
     * - GP-30204: display (X11 Display*)
     * - GP-32068: XAllocNamedColor
     * - GP-32616: stderr
     * - GP-31752: fprintf
     * - GP-32676 + (-17688) = string "allocOverlayColor: can't alloc %s\n"
     */
halt_baddata();
}
