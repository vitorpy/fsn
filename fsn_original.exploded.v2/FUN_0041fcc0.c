/**
 * FUN_0041fcc0
 *
 * Extracted from fsn.c lines 60204-60220
 * Ghidra address: 0x0041fcc0
 * Category: Other
 */

void FUN_0041fcc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (drawing_active_flag != '\0') {
    set_gl_context(param_2);
    uVar1 = XmTextFieldGetString(param_1);
    iVar2 = FUN_0041fc30(uVar1);
    if (iVar2 == 0) {
      XBell(display,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fcc0):
     * Function: FUN_0041fcc0
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
