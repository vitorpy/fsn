/**
 * parse_typed_value
 *
 * Extracted from fsn.c lines 73650-73659
 * Category: Other
 */

void parse_typed_value(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7b38) /* -> EXTERNAL_0x0facead8 */)(param_1,param_2,0);
  (**(code **)(unaff_gp + -0x7e14) /* -> EXTERNAL_0x0fac2404 */)(param_1,param_3,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
