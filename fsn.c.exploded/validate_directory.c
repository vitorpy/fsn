/**
 * validate_directory
 *
 * Extracted from fsn.c lines 38999-39009
 * Category: Filesystem
 */

void validate_directory(int param_1)

{
  if (displayHeight == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  process_directory_data(*(undefined4 *)(param_1 + 0xc));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
