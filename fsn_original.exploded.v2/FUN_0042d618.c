/**
 * FUN_0042d618
 *
 * Extracted from fsn.c lines 68148-68167
 * Ghidra address: 0x0042d618
 * Category: Other
 */

void FUN_0042d618(void)

{
  uint uVar1;
  undefined4 local_8;
  uint local_4;
  
  uVar1 = **(uint **)(PTR_PTR_100094ec + 4);
  local_4 = uVar1 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_red_scale,&local_8,1);
  local_4 = (int)uVar1 >> 8 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_green_scale,&local_8,1);
  local_4 = (int)uVar1 >> 0x10 & 0xff;
  local_8 = 0xf66187b;
  XtSetValues(pref_blue_scale,&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042d618):
     * Function: FUN_0042d618
     *
     * Looking at this assembly:
     * 1. **What it does:** Extracts byte 1 (bits 8-15) and byte 2 (bits 16-23) from a packed color value, then calls XtVaSetValues twice to set "background" resource (string at GP-32604+859) on two different widgets (at offsets 0x6e34 and 0x6e38 from a global struct).
     * 2. **C pseudocode:**
     * ```c
     * // t1 contains packed color, t5 contains same or related value
     * int green = (packed_color >> 8) & 0xff;
     * int blue = (packed_color >> 16) & 0xff;
     * // Set background color on two widgets
     * XtVaSetValues(curcontextwindows[0x6e34/4], XmNbackground, green, NULL);  // widget at offset 0x6e34
     * XtVaSetValues(curcontextwindows[0x6e38/4], XmNbackground, blue, NULL);   // widget at offset 0x6e38
     * ```
     * GP offsets: -32604 (0x806c) = string table base, +859 = "background" resource string. -31936 (0x8340) = XtVaSetValues. -32660 (0x806c) = curcontextwindows pointer.
     */
halt_baddata();
}
