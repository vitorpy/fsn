/**
 * FUN_00428cc0
 *
 * Extracted from fsn.c lines 65337-65425
 * Ghidra address: 0x00428cc0
 * Category: Other
 */

void FUN_00428cc0(uint param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined4 local_48 [3];
  code *local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_c;
  undefined2 local_8;
  ushort local_6;
  undefined2 local_4;
  undefined1 local_2;
  
  local_3c = (code *)XmGetColorCalculation();
  if ((param_2[2] != 0) && (param_1 == param_2[3])) {
        /*
     * BADDATA ANALYSIS (from binary @ 0x00428cc0):
     * Function: FUN_00428cc0
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP offset -32512 (0x8100), stores result. Then checks if struct[8] is non-zero; if so and param1 == struct[12], takes early return. Otherwise extracts RGB bytes from param1 and shifts them for color processing.
     * 2. **C pseudocode:**
     * ```c
     * // At 0x428cc0 - after halt_baddata in makeColorBoxes
     * void *result = some_gp_func();  // GP[-32512] call
     * stored_result = result;
     * if (s0->field_8 != 0) {
     * if (param1 == s0->field_c) {
     * return;  // early exit - color unchanged
     * }
     * }
     * // Extract RGB components from packed color (param1)
     * uint8_t blue = param1 & 0xff;
     * uint8_t green = (param1 >> 8) & 0xff;
     * uint8_t red = (param1 >> 16) & 0xff;
     * // Shift for 16-bit color format
     * uint32_t blue_shifted = blue << 8;
     * uint32_t green_shifted = green << 8;
     * // ... continues with color box creation
     * ```
     * The GP offset -32512 (0x8100) likely resolves to a GL or X11 function. The color extraction suggests this creates color selector UI boxes from a packed RGB value, with an optimization to skip if the color hasn't changed (field_8 set and field_c matches input color).
     */
halt_baddata();
  }
  local_6 = (ushort)param_1 & 0xff00;
  local_8 = (undefined2)((param_1 & 0xff) << 8);
  local_4 = (undefined2)((param_1 >> 0x10) << 8);
  local_2 = 7;
  iVar1 = param_2[2];
  if (iVar1 == 0) {
    iVar1 = XAllocColor(display,param_4,&local_c);
    if (iVar1 == 0) {
      fprintf((FILE *)0xfb52904,"cannot allocate colors for label\n");
      *param_2 = *(undefined4 *)(*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
      param_2[1] = *(undefined4 *)
                    (*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
    }
    else {
      *param_2 = local_c;
      (*local_3c)(&local_c,local_48,auStack_54,auStack_60,auStack_6c);
      iVar1 = XAllocColor(display,param_4,local_48);
      if (iVar1 == 0) {
        param_2[1] = *(undefined4 *)
                      (*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
      }
      else {
        param_2[1] = local_48[0];
      }
      param_2[2] = 1;
      param_2[3] = param_1;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = XAllocColorCells(display,param_4,0,auStack_70,1,&local_74,1);
      if (iVar1 == 0) {
        fprintf((FILE *)0xfb52904,"cannot allocate colors for label\n");
        goto code_r0x00428fd8;
      }
      param_2[2] = 2;
      *param_2 = local_74;
    }
    else if (iVar1 != 2) goto code_r0x00428fd8;
    local_c = *param_2;
    XStoreColor(display,param_4,&local_c);
    *param_2 = local_c;
    param_2[3] = param_1;
    (*local_3c)(&local_c,local_48,auStack_54,auStack_60,auStack_6c);
    iVar1 = XAllocColor(display,param_4,local_48);
    if (iVar1 == 0) {
      param_2[1] = *(undefined4 *)
                    (*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
    }
    else {
      param_2[1] = local_48[0];
    }
  }
code_r0x00428fd8:
  if (param_3 != 0) {
    local_34 = 0xf6615f6;
    local_30 = param_2[1];
    local_2c = 0xf661554;
    local_28 = *param_2;
    XtSetValues(param_3,&local_34,2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00428cc0):
     * Function: FUN_00428cc0
     *
     * Looking at this assembly snippet, I see two distinct code paths:
     * **1. What the assembly does:**
     * - First block (428e78-428ea8): Loads a value from offset 56 of a structure, stores it to s0[0], then computes an array index (offset 132 * a0 + offset 140) to get another value from offset 56 and stores to s0[4]
     * - Second block (428eac-428eec): Calls a function via GP-relative lookup (likely XtVaGetValues or similar Xt function) with arguments including sp+60/sp+64 buffers, then checks return value
     * **2. C pseudocode:**
     * ```c
     * // First block - structure field copying with indexed array access
     * s0->field_0 = t2->field_56;
     * v1 = *v1_ptr;
     * index = v1->field_132 * param4;
     * array_base = v1->field_140;
     * s0->field_4 = ((SomeStruct*)(array_base + index))->field_56;
     * goto label_428fd0;
     * // Second block - Xt widget value query
     * result = XtVaGetValues(
     * *widget_ptr,           // a0 from GP-30204
     * resource_name,         // a1 from sp+188
     * XtNsomething, 1,       // t9=1 at sp+16
     * buffer_ptr, &sp[60],   // t8 at sp+20
     * XtNanother, 1,         // t0=1 at sp+24
     * &sp[64],               // a3
     * NULL
     * );
     * if (result == 0) {
     * // error handling with GP-32616, GP-32676
     * }
     * ```
     * The structure offsets 132 (0x84) and 140 (0x8c) suggest this is accessing colormap or pixmap data arrays, consistent with the function name `makeColorBoxes`.
     */
halt_baddata();
}
