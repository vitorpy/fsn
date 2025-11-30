/**
 * rgbStdColor__Fi
 *
 * Extracted from fsn.c lines 56675-56691
 * Category: Graphics
 */

void rgbStdColor__Fi(uint param_1)

{
  if ((int)param_1 < 0) {
    if (param_1 >> 0x18 == 0) {
      cpack((&rgb_color_b)[((int)(-param_1 & 0xf0) >> 4) + (-param_1 & 0xf) * 0x10]);
    }
    else {
      cpack(param_1 & 0xffffff);
    }
  }
  else {
    cpack((&icon_color_table)[param_1]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
