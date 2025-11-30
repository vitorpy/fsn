/**
 * find_directory_by_path
 *
 * Extracted from fsn.c lines 39901-39917
 * Category: Filesystem
 */

void find_directory_by_path(int param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined4 local_80 [30];
  undefined4 *local_8 [2];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    local_8[0] = local_80;
    local_80[0] = param_2;
    (**(code **)(unaff_gp + -0x7f08))
              (local_8,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),4,
               *(undefined4 *)(unaff_gp + -0x7a60));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
