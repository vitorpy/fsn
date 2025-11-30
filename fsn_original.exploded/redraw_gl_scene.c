/**
 * redraw_gl_scene
 *
 * Extracted from fsn.c lines 50461-50473
 * Category: Graphics
 */

void redraw_gl_scene(void)

{
  code *pcVar1;
  int unaff_gp;
  undefined1 auStack_8 [8];
  
  pcVar1 = *(code **)(unaff_gp + -0x7b2c);
  *(undefined1 *)(*(int *)(unaff_gp + -0x7f94) + 0x6688) = 0;
  (*pcVar1)(auStack_8,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
