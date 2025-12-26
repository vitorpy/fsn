/**
 * FUN_004292c4
 *
 * Extracted from fsn.c lines 65636-65656
 * Ghidra address: 0x004292c4
 * Category: Other
 */

void FUN_004292c4(void)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  
  if (*(char *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 1) != '\0') {
    piVar1 = (int *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x7988);
    *piVar1 = 1;
    do {
      (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)() /* =FUN_0040cad0 */;
      (**(code **)(unaff_gp + -0x7880) /* -> FUN_0042a8e4 */)() /* =FUN_0042a8e4 */;
      iVar2 = *piVar1;
      *piVar1 = iVar2 + 1;
    } while (iVar2 + 1 < 4);
    *piVar1 = 3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004292c4):
     * Function: FUN_004292c4
     *
     * **Final Answer:**
     * This is the `beamup` animation function. Here's the concise analysis:
     * **1. What it does:**
     * Loop executes 3 iterations (counter 1,2,3), each iteration calls `redraw_gl_scene()` (FUN_0040cad0) then `checkRedrawScene()` (FUN_0042a8e4). Counter stored in global `small[31112/4]` (offset 7778 into the `small` array at 0x10000000).
     * **2. C pseudocode:**
     * ```c
     * // beamup animation - 3-frame beam effect
     * // GP[-0x7f98] = &small (0x10000000)
     * // Offset 31112 = 0x7988 bytes into small = small[7778] as int index
     * int *frame_counter = &small[7778];  // or: (int*)((char*)small + 0x7988)
     * for (*frame_counter = 1; *frame_counter < 4; (*frame_counter)++) {
     * redraw_gl_scene();     // GP[-0x7acc] = FUN_0040cad0
     * checkRedrawScene();    // GP[-0x7880] = FUN_0042a8e4
     * }
     * *frame_counter = 3;  // leave at final frame state
     * ```
     * This is a 3-frame "beam up" selection animation effect - likely the spotlight beam that highlights selected files in FSN's 3D view.
     */
halt_baddata();
}
