/**
 * beamup
 *
 * Extracted from fsn.c lines 65616-65630
 * Category: Other
 */

void beamup(void)

{
  if (DAT_10017491 != '\0') {
    DAT_10007988 = 1;
    do {
      redraw_gl_scene();
      FUN_0042a8e4();
      DAT_10007988 = DAT_10007988 + 1;
    } while (DAT_10007988 < 4);
    DAT_10007988 = 3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
