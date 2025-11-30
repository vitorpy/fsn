/**
 * do_perspective
 *
 * Extracted from fsn.c lines 37417-37423
 * Category: Other
 */

void do_perspective(void)

{
  perspective((int)*(short *)(curcontext + 0x10),0x3f800000,0x3d4ccccd,0x43fa0000);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
