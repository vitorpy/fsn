/**
 * set_icon_flags
 *
 * Extracted from fsn.c lines 56395-56404
 * Category: Other
 */

void set_icon_flags(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7798))(param_1,param_2,param_3,param_4,param_5,param_6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
