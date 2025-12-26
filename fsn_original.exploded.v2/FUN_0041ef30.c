/**
 * FUN_0041ef30
 *
 * Extracted from fsn.c lines 59741-59766
 * Ghidra address: 0x0041ef30
 * Category: Other
 */

void FUN_0041ef30(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_2c;
  uint local_28;
  
  iVar1 = curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */;
  if (iVar1 != 0) {
    if (*(int *)(param_3 + 8) == 0) {
      FUN_0041889c(iVar1);
    }
    else {
      FUN_004187f4(iVar1);
    }
    FUN_0041c3e4();
    if (iVar1 == curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */) {
      local_2c = 0xe3f48f1;
      local_28 = (uint)(iVar1->render_flags /* was: *(int *)(iVar1 + 0x74) */ << 0xd) >> 0x1f;
      XtSetValues(DAT_10016b58,&local_2c,1);
      XtSetSensitive(menu_monitor_directory,-1 < iVar1->render_flags /* was: *(int *)(iVar1 + 0x74) */ << 0xd);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041ef30):
     * Function: FUN_0041ef30
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if s0->field_0x44 equals t8->field_0x44. If not equal, returns. If equal, extracts bit 18 from s0->field_0x74 (via shift left 13, then shift right 31), calls two functions with sensitivity parameters based on that bit.
     * 2. **C pseudocode:**
     * ```c
     * if (s0->type == t8->type) {
     * char *label = base_string + 9609;  // "Rename" or similar
     * int bit18 = (s0->flags >> 18) & 1;
     * XtSetSensitive(renameMenuItem, bit18);      // GP[-31936] = XtSetSensitive
     * XtSetSensitive(otherMenuItem, bit18 == 0);  // GP[-31976] = XtSetSensitive, inverted
     * }
     * ```
     * The bit extraction `(x << 13) >> 31` isolates bit 18 (from a 32-bit word). The `sltiu a1,t5,1` inverts it (sets a1=1 if t5==0, else a1=0), so the second widget gets opposite sensitivity.
     */
halt_baddata();
}
