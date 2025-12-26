/**
 * gl_swap_buffers
 *
 * Extracted from fsn.c lines 66537-66545
 * Category: Other
 */

void gl_swap_buffers(undefined1 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7898) /* -> FUN_0042a4d4 */)(1 - **(int **)(unaff_gp + -0x7674) /* -> curcontextid */,param_1) /* =FUN_0042a4d4 */;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
