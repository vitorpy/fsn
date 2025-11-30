/**
 * fam_open_wrapper
 *
 * Extracted from fsn.c lines 61637-61645
 * Category: Other
 */

void fam_open_wrapper(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7728))(param_1,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
