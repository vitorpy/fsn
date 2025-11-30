/**
 * FUN_0043b178
 *
 * Extracted from fsn.c lines 78194-78205
 * Ghidra address: 0x0043b178
 * Category: Other
 */

void FUN_0043b178(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)(**(code **)(unaff_gp + -0x7b5c))(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
