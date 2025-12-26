/**
 * FUN_00421f94
 *
 * Extracted from fsn.c lines 61819-61867
 * Ghidra address: 0x00421f94
 * Category: Other
 */

void FUN_00421f94(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int unaff_gp;
  undefined4 *local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  
  iVar1 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)() /* =FUN_00421f10 */;
  local_4c = &local_58;
  if (iVar1 == 0) {
    local_50 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x4584;
  }
  else {
    local_50 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x4590;
  }
  local_54 = 1;
  iVar1 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)() /* =FUN_00421f10 */;
  if (iVar1 == 0) {
    piVar2 = &local_50 + local_54 * 2;
    *piVar2 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x4568;
  }
  else {
    piVar2 = &local_50 + local_54 * 2;
    *piVar2 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x4574;
  }
  pcVar4 = /* TODO: GP:-0x7c9c */ *(code **)(unaff_gp + -0x7c9c) /* -> EXTERNAL_0x0f672b80 */;
  piVar2[1] = (int)&local_5c;
  (*pcVar4)(param_1,&local_50,local_54 + 1);
  uVar3 = /* TODO: GP:-0x7d48 */ (**(code **)(unaff_gp + -0x7d48) /* -> EXTERNAL_0x0f52d080 */)
                    (**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,local_58,*local_5c,0);
  iVar1 = (**(code **)(unaff_gp + -0x7960) /* -> FUN_00421f10 */)() /* =FUN_00421f10 */;
  if (iVar1 == 0) {
    local_50 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x4548;
  }
  else {
    local_50 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x4558;
  }
  local_4c = (undefined4 *)uVar3;
  /* TODO: GP:-0x7cc0 */ (**(code **)(unaff_gp + -0x7cc0) /* -> EXTERNAL_0x0f66d42c */)(param_1,&local_50,1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00421f94):
     * Function: FUN_00421f94
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Calls a function at GP-31072 (likely `XAllocColor` or similar X11 function) with a3=0
     * 2. If the call returns non-zero, loads string at (GP-32676 - 17752), else loads string at (GP-32676 - 17736) - these are likely "success"/"failure" messages
     * 3. Calls function at GP-31936 (likely `XtVaSetValues` or warning function) with the display, the string pointer, and count=1
     * **C pseudocode:**
     * ```c
     * result = XAllocColor(display, colormap, &color_def, 0);
     * if (result != 0) {
     * message = "TrueColor";    /* offset -17752 from string base */
     * } else {
     * message = "PseudoColor";  /* offset -17736 from string base */
     * }
     * XtVaSetValues(widget, message, result, 1);  /* or XtWarning/printf */
     * ```
     * The offsets -17752 and -17736 differ by 16 bytes, consistent with short string literals like visual class names. This appears to be setting a visual type string based on whether overlay colormap allocation succeeded.
     */
halt_baddata();
}
