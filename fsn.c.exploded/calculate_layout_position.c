/**
 * calculate_layout_position
 *
 * Extracted from fsn.c lines 39015-39028
 * Category: Other
 */

void calculate_layout_position(int param_1)

{
  if ((displayHeight != 0) && (displayDirectoryHeight != 0)) {
    if (displayDirectoryHeight == 2) {
      process_directory_data(*(undefined4 *)(param_1 + 0x20));
    }
    else {
      process_directory_data(*(undefined4 *)(param_1 + 0x1c));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
