/**
 * set_gl_color
 *
 * Extracted from fsn.c lines 72394-72416
 * Category: Other
 */

void set_gl_color(uint param_1)

{
  int unaff_gp;
  
  if ((int)param_1 < 0) {
    if (param_1 >> 0x18 == 0) {
      (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)
                (*(undefined4 *)
                  ((-param_1 & 0xf) * 0x40 + ((int)(-param_1 & 0xf0) >> 4) * 4 +
                  *(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x7010));
    }
    else {
      (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(param_1 & 0xffffff);
    }
  }
  else {
    (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)
              (*(undefined4 *)(param_1 * 4 + *(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6fd0));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
