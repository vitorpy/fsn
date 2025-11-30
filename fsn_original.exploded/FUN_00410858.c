/**
 * FUN_00410858
 *
 * Extracted from fsn.c lines 51847-51854
 * Ghidra address: 0x00410858
 * Category: Other
 */

void FUN_00410858(void)

{
  curcontext[0xc50] = 1;
  redraw_gl_scene();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
