/**
 * process_directory_data
 *
 * Extracted from fsn.c lines 38985-38993
 * Category: Filesystem
 */

void process_directory_data(int param_1)

{
  if (((displayHeight != 0) && (displayHeight != 1)) && (displayHeight == 2)) {
    powf((float)param_1,display_height_exponent);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
