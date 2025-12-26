/**
 * FUN_00420ca4
 *
 * Extracted from fsn.c lines 60984-61002
 * Ghidra address: 0x00420ca4
 * Category: Other
 */

void FUN_00420ca4(undefined4 param_1,undefined4 param_2,int param_3)

{
  window_width = (uint)*(ushort *)(param_3 + 0x10);
  window_height = (uint)*(ushort *)(param_3 + 0x12);
  window_scale_x = (float)param_3->file_array /* was: *(ushort *)(param_3 + 0x10) */ / (maxx - minx);
  window_scale_y = (float)*(ushort *)(param_3 + 0x12) / (maxy - miny);
  FUN_0041fd70();
  viewport(0,(param_3->file_array /* was: *(short *)(param_3 + 0x10) */ + -1) * 0x10000 >> 0x10,0,
           (*(short *)(param_3 + 0x12) + -1) * 0x10000 >> 0x10);
  FUN_004207b4();
  FUN_0041fdb0();
  viewport(0,(param_3->file_array /* was: *(short *)(param_3 + 0x10) */ + -1) * 0x10000 >> 0x10,0,
           (*(short *)(param_3 + 0x12) + -1) * 0x10000 >> 0x10);
  FUN_00420b70();
  gflush();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00420ca4):
     * Function: FUN_00420ca4
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Loads halfwords at offsets 16 and 18 from s0 (likely width/height), decrements each by 1, then calls three IrisGL functions: rectf(0, 0, width-1, height-1), swapbuffers(), and popmatrix().
     * **2. C pseudocode:**
     * ```c
     * short width = *(short *)(s0 + 16);   // offset 0x10
     * short height = *(short *)(s0 + 18);  // offset 0x12
     * rectf(0, (float)(width - 1), 0, (float)(height - 1));  // GP-0x8354
     * swapbuffers();  // GP-0x867c
     * popmatrix();    // GP-0x8330
     * ```
     * Note: The rectf args are (x1, x2, y1, y2) based on register assignment - a0=0, a1=width-1, a2=0, a3=height-1. The shift-left-16/shift-right-16 pattern is sign-extension for halfword to word.
     */
halt_baddata();
}
