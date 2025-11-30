/**
 * savePositions
 *
 * Extracted from fsn.c lines 68433-68444
 * Category: Other
 */

void savePositions(void)

{
  FUN_0042dc64(&DAT_10016e50);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    FUN_0042dc64(&DAT_10016e88);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
