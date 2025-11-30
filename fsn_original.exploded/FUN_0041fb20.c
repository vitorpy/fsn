/**
 * FUN_0041fb20
 *
 * Extracted from fsn.c lines 60102-60115
 * Ghidra address: 0x0041fb20
 * Category: Other
 */

void FUN_0041fb20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (drawing_active_flag != '\0') {
    set_gl_context(param_2);
    DAT_10006e24 = 1;
    uVar1 = XmTextFieldGetString(param_1);
    FUN_00429bc8(uVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
