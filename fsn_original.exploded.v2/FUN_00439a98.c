/**
 * FUN_00439a98
 *
 * Extracted from fsn.c lines 77297-77322
 * Ghidra address: 0x00439a98
 * Category: Other
 */

void FUN_00439a98(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_gp;
  undefined1 auStack_cc [200];
  int local_4;
  
  (*(code *)(*(int *)(unaff_gp + -0x7fdc) /* -> EXTERNAL_0x00440000 */ + -0x531c))();
  local_4 = (**(code **)(unaff_gp + -0x7708) /* -> FUN_0043b178 */)(0) /* =FUN_0043b178 */;
  param_1[1] = local_4;
  iVar1 = (**(code **)(unaff_gp + -0x7704) /* -> FUN_0043b1c8 */)(local_4,0x7f000001,0x5f75a,1) /* =FUN_0043b1c8 */;
  *param_1 = iVar1;
  if ((-1 < iVar1) && (param_2 != 0)) {
    uVar2 = /* TODO: GP:-0x7cec */ (**(code **)(unaff_gp + -0x7cec) /* -> EXTERNAL_0x0fad3e88 */)();
    uVar3 = /* TODO: GP:-0x7c30 */ (**(code **)(unaff_gp + -0x7c30) /* -> EXTERNAL_0x0fad49b0 */)();
    /* TODO: GP:-0x7c1c */ (**(code **)(unaff_gp + -0x7c1c) /* -> EXTERNAL_0x0fac0f24 */)
              (auStack_cc,*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x61b8,uVar2,uVar3,param_2);
    iVar1 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(auStack_cc);
    (**(code **)(unaff_gp + -0x7700) /* -> FUN_0043b318 */)(local_4,*param_1,auStack_cc,iVar1 + 1) /* =FUN_0043b318 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00439a98):
     * Function: FUN_00439a98
     *
     * Looking at the assembly:
     * 1. **What it does:** Calls sprintf to format a string into buffer at sp+52, then calls strlen on that buffer, then calls XmStringCreateLtoR to create an XmString from the formatted text with line count (v0+1).
     * 2. **C pseudocode:**
     * ```c
     * char buffer[200];
     * sprintf(buffer, format_string, arg1, arg2, line_count);
     * int len = strlen(buffer);
     * XmString result = XmStringCreateLtoR(widget, *text_ptr, buffer, len + 1);
     * return 0;
     * ```
     * GP offsets resolved:
     * - gp-31772 (0x83e4) = sprintf
     * - gp-31776 (0x83e0) = strlen
     * - gp-30464 (0x8900) = XmStringCreateLtoR
     * - gp-32660 (0x806c) = base of format strings, offset -25016 (0x9e48) points to a specific format
     */
halt_baddata();
}
