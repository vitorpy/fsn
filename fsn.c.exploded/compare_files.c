/**
 * compare_files
 *
 * Extracted from fsn.c lines 39817-39823
 * Category: Filesystem
 */

void compare_files(undefined4 *param_1,undefined4 *param_2)

{
  strcmp(*(char **)*param_1,*(char **)*param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
