/**
 * eval_icon_script
 *
 * Extracted from fsn.c lines 56250-56258
 * Category: Other
 */

void eval_icon_script(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77b0))(*(int *)(unaff_gp + -0x7f94) + 0x6f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
