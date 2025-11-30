/**
 * validate_directory_access
 *
 * Extracted from fsn.c lines 39860-39876
 * Category: Filesystem
 */

void validate_directory_access(int param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined4 local_34 [11];
  undefined4 *local_8 [2];
  
  if (*(int *)(param_1 + 0xc) != 0) {
    local_8[0] = local_34;
    local_34[0] = param_2;
    (**(code **)(unaff_gp + -0x7f08))
              (local_8,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),4,
               *(undefined4 *)(unaff_gp + -0x7a64));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
