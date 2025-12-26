/**
 * highlightOverviewDir
 *
 * Extracted from fsn.c lines 61350-61396
 * Category: Filesystem
 */

void highlightOverviewDir(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  undefined8 in_f10;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar4 = (uint)((ulonglong)in_f10 >> 0x20);
  if (overviewActive != '\0') {
    FUN_0041fdb0();
    color(0);
    clear();
    color(overlayHighlightColor._2_2_);
    dVar3 = (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)((ulonglong)uVar4 << 0x20);
    rectf((float)((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ - dVar3 * (double)param_1->scale /* was: *(float *)(param_1 + 0x58) */),
          (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ - dVar3));
    iVar2 = param_1->child_center /* was: *(int *)(param_1 + 0x28) */;
    if (iVar2 != 0) {
      fStack_c = iVar2->pos_x /* was: *(float *)(iVar2 + 0x34) */ + param_1->offset_x /* was: *(float *)(param_1 + 0x4c) */ * param_1->scale /* was: *(float *)(param_1 + 0x58) */;
      fStack_8 = (float)((double)iVar2->pos_y /* was: *(float *)(iVar2 + 0x38) */ + (double)param_1->offset_y /* was: *(float *)(param_1 + 0x50) */);
      uStack_14 = param_1->pos_x /* was: *(undefined4 *)(param_1 + 0x34) */;
      fStack_10 = (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ +
                         (double)-param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                         (double)((ulonglong)(double)*(float *)(iVar2 + 0x38) & 0xffffffff00000000))
      ;
      bgnline();
      v2f(&fStack_c);
      v2f(&uStack_14);
      endline();
    }
    pushmatrix();
    ortho2();
    cmov2(0xbf733333,0xbf666666);
    uVar1 = build_path_string(0,param_1);
    charstr(uVar1);
    popmatrix();
    FUN_00420acc();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421940):
     * Function: highlightOverviewDir
     *
     * Looking at the GP offsets and call sequence:
     * **1. What the assembly does:**
     * Calls build_path_string(0, s0) to get a path, passes result to set_status_message(), then calls popmatrix() and swapbuffers().
     * **2. C pseudocode:**
     * ```c
     * char *path = build_path_string(0, s0);  // GP-0x857c = build_path_string
     * set_status_message(path);                // GP-0x8258 = set_status_message
     * popmatrix();                             // GP-0x84d8 = popmatrix
     * swapbuffers();                           // GP-0x801c + 0xacc = swapbuffers (via libgl dispatch)
     * ```
     * The s0 register likely holds a directory node pointer. This is the cleanup/finalization at the end of highlightOverviewDir - it updates the status bar with the highlighted directory's path, then pops the matrix and swaps GL buffers to display the result.
     */
halt_baddata();
}
