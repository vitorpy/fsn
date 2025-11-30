/**
 * compare_dirs
 *
 * Extracted from fsn.c lines 39829-39835
 * Category: Filesystem
 */

void compare_dirs(undefined4 *param_1,undefined4 *param_2)

{
  strcmp(*(char **)*param_1,*(char **)*param_2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
