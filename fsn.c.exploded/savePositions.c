/**
 * savePositions
 *
 * Extracted from fsn.c lines 53104-53115
 * Category: Other
 */

void savePositions(void)

{
  get_view_position(&fam_connection);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    get_view_position(&fam_request_id);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
