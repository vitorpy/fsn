/**
 * expand_path
 *
 * Extracted from fsn.c lines 56224-56232
 * Category: Filesystem
 */

void expand_path(undefined4 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x77ac))(*(int *)(unaff_gp + -0x7f94) + 0x6f50,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
