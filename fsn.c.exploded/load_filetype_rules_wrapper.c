/**
 * load_filetype_rules_wrapper
 *
 * Extracted from fsn.c lines 56198-56206
 * Category: Filesystem
 */

void load_filetype_rules_wrapper(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77b4))(*(int *)(unaff_gp + -0x7f94) + 0x6f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
