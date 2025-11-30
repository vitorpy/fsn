/**
 * restorePositions
 *
 * Extracted from fsn.c lines 53420-53431
 * Category: Filesystem
 */

void restorePositions(void)

{
  sync_fam_state(&fam_connection);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    sync_fam_state(&fam_request_id);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
