/**
 * gl_pop_state
 *
 * Extracted from fsn.c lines 66585-66593
 * Category: Filesystem
 */

void gl_pop_state(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7898))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e00),1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
