/**
 * calculate_file_view
 *
 * Extracted from fsn.c lines 39492-39501
 * Category: Filesystem
 */

void calculate_file_view(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = validate_directory();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
