/**
 * unpruneTree
 *
 * Extracted from fsn.c lines 56069-56079
 * Category: Other
 */

void unpruneTree(int param_1)

{
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfb;
  FUN_00417b88();
  update_display();
  redraw_gl_scene();
  FUN_0042a8e4();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
