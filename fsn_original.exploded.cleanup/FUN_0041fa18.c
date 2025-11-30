/**
 * FUN_0041fa18
 *
 * Extracted from fsn.c lines 60068-60083
 * Ghidra address: 0x0041fa18
 * Category: Filesystem
 */

void FUN_0041fa18(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  drawing_active_flag = 1;
  if (topdir != 0) {
    gl_push_state();
    set_gl_context(param_2,1);
    uVar1 = XmTextFieldGetString(param_1);
    FUN_00429bc8(uVar1);
    gl_pop_state();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
