/**
 * FUN_004213c8
 *
 * Extracted from fsn.c lines 61157-61191
 * Ghidra address: 0x004213c8
 * Category: Other
 */

void FUN_004213c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  short local_3e8 [500];
  
  /* TODO: GP:-0x7dd0 */ (**(code **)(unaff_gp + -0x7dd0) /* -> EXTERNAL_0x0f1214b8 */)(2,2);
  /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  /* TODO: GP:-0x7de0 */ (**(code **)(unaff_gp + -0x7de0) /* -> EXTERNAL_0x0f12812c */)();
  /* TODO: GP:-0x7dd4 */ (**(code **)(unaff_gp + -0x7dd4) /* -> EXTERNAL_0x0f121cb8 */)(local_3e8,500);
  /* TODO: GP:-0x7b78 */ (**(code **)(unaff_gp + -0x7b78) /* -> EXTERNAL_0x0f123238 */)
            (**(undefined4 **)(unaff_gp + -0x75d4) /* -> minx */,**(undefined4 **)(unaff_gp + -0x75d0) /* -> maxx */);
  (**(code **)(unaff_gp + -0x7990) /* -> FUN_00420408 */)(**(undefined4 **)(unaff_gp + -0x76d4) /* -> topdir */,1) /* =FUN_00420408 */;
  iVar1 = /* TODO: GP:-0x7dd8 */ (**(code **)(unaff_gp + -0x7dd8) /* -> EXTERNAL_0x0f1232b8 */)(local_3e8);
  /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = (int)local_3e8[iVar2];
      if (iVar4 == 1) {
        (**(code **)(unaff_gp + -0x7a7c) /* -> FUN_00411e68 */)((int)local_3e8[iVar2 + 1]) /* =FUN_00411e68 */;
            /*
     * BADDATA ANALYSIS (from binary @ 0x004213c8):
     * Function: FUN_004213c8
     *
     * Looking at the GP offsets and call sequence:
     * **1. What it does:**
     * Sets up a 2x2 viewing mode, pushes matrix state, gets current viewport, then reads a 500-byte buffer into stack space. Appears to be saving GL state before a picking/selection operation.
     * **2. C pseudocode:**
     * ```c
     * void FUN_004213c8(void) {
     * char buffer[1000];  // sp+56, size ~1000 bytes
     * mmode(2, 2);           // gp-32208: set matrix mode (MVIEWING?)
     * pushmatrix();          // gp-31560: save current matrix
     * getviewport();         // gp-32224: get current viewport bounds
     * getcpos(buffer, 500);  // gp-32212: get cursor/pick position into buffer
     * // continues with values from gp-30164 and gp-30156...
     * }
     * ```
     * The function allocates 1056 bytes on stack (1000-byte buffer at sp+56), calls IrisGL state-saving functions, suggesting this is the start of a pick/select operation that needs to preserve and later restore graphics state.
     */
halt_baddata();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1 + iVar4;
    } while (iVar3 != iVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004213c8):
     * Function: FUN_004213c8
     *
     * Looking at the GP offsets and calling pattern:
     * **What it does:**
     * 1. Calls function at gp-31120 with dereferenced a0 (likely XtWindow or similar)
     * 2. Calls function at gp-32216 with s0, stores result count in sp+52
     * 3. Calls function at gp-31528 (likely getgdesc or similar query)
     * 4. Loops through s0 as array of shorts, counting entries where value == 1
     * **C pseudocode:**
     * ```c
     * some_x_func(*(Widget*)a0);           /* gp-31120: likely XtWindow */
     * int count = get_select_count(s0);     /* gp-32216: returns item count */
     * getgdesc();                           /* gp-31528: GL device query */
     * int result = 0;
     * int i = 0;
     * if (count > 0) {
     * short *arr = (short *)s0;
     * do {
     * if (arr[i] == 1) {
     * /* gp-31356 called with arr[i+1] as arg */
     * some_func(arr[i + 1]);
     * }
     * i++;
     * } while (i < count);
     * }
     * ```
     * This appears to be iterating a selection buffer (short array), where value==1 indicates a hit record, and the next short is the picked object ID. Classic OpenGL/IrisGL pick buffer processing pattern.
     */
halt_baddata();
}
