/**
 * restorePositions
 *
 * Extracted from fsn.c lines 68749-68760
 * Category: Other
 */

void restorePositions(void)

{
  FUN_0042e3bc(&DAT_10016e50);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    FUN_0042e3bc(&DAT_10016e88);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
