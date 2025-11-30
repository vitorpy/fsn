/**
 * parse_typed_value
 *
 * Extracted from fsn.c lines 57953-57962
 * Category: Other
 */

void parse_typed_value(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b38))(param_1,param_2,0);
  (**(code **)(unaff_gp + -0x7e14))(param_1,param_3,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
