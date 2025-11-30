/**
 * end_rendering
 *
 * Extracted from fsn.c lines 46486-46497
 * Category: Graphics
 */

void end_rendering(void)

{
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    begin_rendering();
    gl_swap_buffers(1);
  }
  begin_rendering();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
