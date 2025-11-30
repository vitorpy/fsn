/**
 * beamdown
 *
 * Extracted from fsn.c lines 65662-65676
 * Category: Other
 */

void beamdown(void)

{
  if (DAT_10017491 != '\0') {
    DAT_10007988 = 3;
    do {
      redraw_gl_scene();
      FUN_0042a8e4();
      DAT_10007988 = DAT_10007988 + -1;
    } while (-1 < DAT_10007988);
    DAT_10007988 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
