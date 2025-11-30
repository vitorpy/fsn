/**
 * finalize_interpreter
 *
 * Extracted from fsn.c lines 58008-58020
 * Category: Other
 */

void finalize_interpreter(int param_1)

{
  int unaff_gp;
  
  if ((param_1 != 0) || (param_1 = (**(code **)(unaff_gp + -0x7b5c))(0x2d0), param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
