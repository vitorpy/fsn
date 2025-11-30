/**
 * init_display_state
 *
 * Extracted from fsn.c lines 52324-52332
 * Category: Graphics
 */

void init_display_state(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ec8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
