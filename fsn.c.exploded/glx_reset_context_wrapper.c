/**
 * glx_reset_context_wrapper
 *
 * Extracted from fsn.c lines 37386-37396
 * Category: Other
 */

void glx_reset_context_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
