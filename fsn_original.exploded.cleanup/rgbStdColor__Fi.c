/**
 * rgbStdColor__Fi
 *
 * Extracted from fsn.c lines 72372-72388
 * Category: Graphics
 */

void rgbStdColor__Fi(uint param_1)

{
  if ((int)param_1 < 0) {
    if (param_1 >> 0x18 == 0) {
      cpack((&DAT_10017010)[((int)(-param_1 & 0xf0) >> 4) + (-param_1 & 0xf) * 0x10]);
    }
    else {
      cpack(param_1 & 0xffffff);
    }
  }
  else {
    cpack((&DAT_10016fd0)[param_1]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
