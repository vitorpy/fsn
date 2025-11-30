/**
 * set_interpreter_mode
 *
 * Extracted from fsn.c lines 58040-58050
 * Category: Other
 */

void set_interpreter_mode(int param_1,uint param_2)

{
  int unaff_gp;
  
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    (**(code **)(unaff_gp + -0x7b34))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
