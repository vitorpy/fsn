/**
 * FUN_0040d804
 *
 * Extracted from fsn.c lines 50712-50743
 * Ghidra address: 0x0040d804
 * Category: Other
 */

void FUN_0040d804(void)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  int local_50;
  int local_4c;
  
  if ((*controlsShowing /* was: *(char **)(unaff_gp + -0x75e0) */ /* -> controlsShowing */ != '\0') &&
     (iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */, *(char *)(iVar1 + 0xc53) == '\0')) {
    if (*(short *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x148) != iVar1->file_count /* was: *(short *)(iVar1 + 0xc) */) {
      local_50 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x35b;
      iVar2 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
      *(short *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x148) = iVar1->file_count /* was: *(short *)(iVar1 + 0xc) */;
      local_4c = (int)iVar1->file_count /* was: *(short *)(iVar1 + 0xc) */;
      /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)(*(undefined4 *)(iVar2 + 0x663c),&local_50,1);
      iVar1 = *curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    }
    if (*(short *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x14c) != *(short *)(iVar1 + 0xe)) {
      local_50 = /* TODO: GP:-0x7f5c */ *(int *)(unaff_gp + -0x7f5c) /* -> EXTERNAL_0x0f661520 */ + 0x35b;
      iVar2 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
      *(short *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x14c) = *(short *)(iVar1 + 0xe);
      local_4c = (int)*(short *)(iVar1 + 0xe);
      /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)(*(undefined4 *)(iVar2 + 0x6640),&local_50,1);
    }
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0040d804):
     * Function: FUN_0040d804
     *
     * Looking at this assembly:
     * 1. **What it does**: Checks if a global flag is set, then compares curcontext->field_0xc53 (byte at offset 3155) and curcontext->field_0xc (halfword at offset 12) against another global's field. If they differ, calls XtSetValues to update a widget with the new scale value.
     * 2. **C pseudocode**:
     * ```c
     * void setScales(void) {
     * if (!DAT_8a20) return;  // gp-30176: early exit flag
     * void *ctx = *DAT_897c;  // gp-30340: curcontext ptr
     * if (((char*)ctx)[3155] != 0) return;  // ctx+0xc53: some mode flag
     * short ctx_scale = ((short*)ctx)[6];  // ctx+0xc (offset 12)
     * short *global_struct = DAT_8068;     // gp-32664
     * if (global_struct[164] != ctx_scale) {  // offset 328 = 0x148
     * global_struct[164] = ctx_scale;
     * Arg args[1];
     * args[0].name = DAT_80a4 + 859;  // XmNvalue string (gp-32604)
     * args[0].value = ctx_scale;
     * XtSetValues(DAT_806c->widget_663c, args, 1);  // gp-32660
     * }
     * }
     * ```
     * Key offsets: gp-30176 = enable flag, gp-30340 = curcontext ptr, gp-32664 = UI state struct, gp-32604+859 = "value" resource string, gp-31936 = XtSetValues.
     */
halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040d804):
     * Function: FUN_0040d804
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares `curcontext[2]` (float at offset 8) against a cached value. If different, stores the new value, then calls a function (likely `sprintf` or similar at GP-31504) with format string at offset 859 and the float value converted to double.
     * 2. **C pseudocode:**
     * ```c
     * float current_scale = curcontext[2];  // offset 8 = index 2
     * if (current_scale != cached_scale) {
     * cached_scale = current_scale;
     * sprintf(buffer, format_string, (double)current_scale);  // format at DAT+859
     * }
     * ```
     * The `cvt.d.s` instructions convert single-precision floats to doubles for the comparison and for passing to a varargs function (C calling convention promotes floats to doubles). The `bc1t` branches if equal (skipping the update block). GP-31504 is likely `sprintf` based on the pattern of loading a format string offset (859 from some base) and a float argument.
     */
halt_baddata();
}
