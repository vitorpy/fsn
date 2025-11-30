/**
 * gl_swap_buffers
 *
 * Extracted from fsn.c lines 51667-51675
 * Category: Other
 */

void gl_swap_buffers(undefined1 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7898))(1 - **(int **)(unaff_gp + -0x7674),param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
