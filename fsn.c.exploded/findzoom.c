/**
 * findzoom
 *
 * Extracted from fsn.c lines 49265-49276
 * Category: Other
 */

void findzoom(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    calculate_view_params();
  }
  else {
    calculate_item_params();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
