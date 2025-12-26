/**
 * findzoom_warp
 *
 * Extracted from fsn.c lines 57153-57209
 * Category: Other
 */

void findzoom_warp(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                  undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  float fVar1;
  undefined1 auStack_c [4];
  int iStack_8;
  int iStack_4;
  
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  FUN_0041a358(&iStack_4,&iStack_8,auStack_c);
  if (iStack_4 == 0) {
    *param_7 = 1;
    *param_6 = 0;
  }
  else if (iStack_8 == 0) {
    if (iStack_4 == curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */) {
      FUN_0041d920();
      *param_1 = DAT_100174bc;
      *param_2 = DAT_100174c0;
      *param_3 = DAT_100174c4;
      *param_4 = (short)DAT_100174c8;
      *param_6 = curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */;
    }
    else {
      *param_7 = 1;
      *param_6 = iStack_4;
    }
  }
  else if (iStack_4 == curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */) {
    FUN_0041da44(iStack_8);
    fVar1 = *(float *)(iStack_8 + 0x14);
    *param_1 = (float)((double)fVar1 - (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * (double)DAT_10017530)
    ;
    *param_2 = (float)(((double)*(float *)(iStack_8 + 0x18) +
                       (double)*(float *)(iStack_4 + 0x3c) /
                       (double)((ulonglong)(double)fVar1 & 0xffffffff00000000)) -
                      (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * (double)DAT_10017530);
    if (DAT_10017495 == '\0') {
      *param_3 = DAT_1001752c + *(float *)(iStack_8 + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = DAT_10017520 + DAT_10017510;
    }
    *param_4 = (short)DAT_10017534;
    *param_6 = curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */;
    *param_8 = 1;
  }
  else {
    fprintf((FILE *)0xfb52904,"found file in another dir\n");
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041a63c):
     * Function: findzoom_warp
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * This is the epilogue of findzoom_warp with 3 different exit paths that store results to output parameters passed via stack. Path 1 copies float/int fields from a structure to output pointers. Path 2 sets flag=1 and copies a value. Path 3 sets flag to t4's value, stores 0, returns 1.
     * **C pseudocode:**
     * ```c
     * // Path 1 (falls through from earlier code):
     * *out_float1 = src->field_0x30;      // offset 48, store to sp+56 ptr
     * *out_float2 = src->field_0x34;      // offset 52, store to sp+60 ptr
     * *(short*)out_flags = src->field_0x38; // offset 56, store as halfword to sp+60 ptr
     * *out_result = (*a1)->field_0x3c;    // indirect through a1, store to sp+68 ptr
     * // return v0 (unchanged)
     * // Path 2 (at 0x41a8c0):
     * *src = 1;                           // set byte flag
     * *out_result = saved_value;          // sp+44 value to sp+68 ptr
     * return 1;
     * // Path 3 (at 0x41a8dc):
     * *src = t4_value;                    // set byte flag to t4
     * *out_result = 0;                    // clear result
     * return 1;
     * ```
     * The function uses multiple output parameters (pointers at sp+56, sp+60, sp+68) to return computed warp/zoom data, with different exit paths depending on search results.
     */
halt_baddata();
}
