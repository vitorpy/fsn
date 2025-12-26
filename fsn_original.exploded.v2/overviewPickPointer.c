/**
 * overviewPickPointer
 *
 * Extracted from fsn.c lines 61119-61151
 * Category: Input
 */

void overviewPickPointer(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short asStack_3e8 [500];
  
  picksize(2,2);
  pushmatrix();
  initnames();
  pick(asStack_3e8,500);
  ortho2(minx,maxx);
  FUN_00420408(topdir,1);
  iVar1 = endpick(asStack_3e8);
  popmatrix();
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = (int)asStack_3e8[iVar2];
      if (iVar4 == 1) {
        FUN_00411e68((int)asStack_3e8[iVar2 + 1]);
            /*
     * BADDATA ANALYSIS (from binary @ 0x004213bc):
     * Function: overviewPickPointer
     *
     * Looking at the GP-indirect calls and parameters:
     * **Analysis:**
     * 1. **What it does:** Sets up 2x2 pick matrix, pushes GL state (viewport/matrix), then calls gselect() to enter GL selection mode with a 500-entry pick buffer allocated on the stack.
     * 2. **C pseudocode:**
     * ```c
     * void overviewPickPointer(void) {
     * short pickbuf[500];  // at sp+56, size 500 shorts = 1000 bytes
     * pick(2, 2);          // gp-0x7dd0: 2x2 pixel pick region
     * pushviewport();      // gp-0x7b48: save viewport
     * pushmatrix();        // gp-0x7de0: save transform matrix
     * gselect(pickbuf, 500); // gp-0x7dd4: enter selection mode, 500-entry buffer
     * // ... continues with pick processing
     * }
     * ```
     * The GP offsets map to: -32208→pick, -31560→pushviewport, -32224→pushmatrix, -32212→gselect. This is standard IrisGL picking setup - create small pick region, save state, allocate hit buffer, then later call endpick() to get results.
     */
halt_baddata();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1 + iVar4;
    } while (iVar3 != iVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004213bc):
     * Function: overviewPickPointer
     *
     * Looking at the GP offsets and call sequence:
     * 1. **What the assembly does:**
     * Calls glXWaitGL() on display, then getbuffer(s0) to get pick buffer, then endpick() to get hit count. Loops through pick buffer looking for entries with name=1 (hit marker), counting hits.
     * 2. **C pseudocode:**
     * ```c
     * glXWaitGL(display);
     * short *pickbuf = getbuffer(s0);  // s0 is pick buffer from earlier
     * int hitcount = endpick();
     * int result = 0;
     * int i = 0;
     * if (hitcount > 0) {
     * while (i < hitcount) {
     * short name = pickbuf[i];
     * if (name == 1) {
     * // Found a hit with name 1 - process it at 4214e0
     * // calls function at gp-31356 (likely pick processing)
     * }
     * i++;
     * }
     * }
     * ```
     * The key insight: This is the pick buffer processing after a GL pick operation. The buffer contains (name, z1, z2) tuples from OpenGL selection mode. It's checking for name==1 which likely indicates a valid picked object in the overview display.
     */
halt_baddata();
}
