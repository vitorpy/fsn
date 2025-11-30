/**
 * glx_switch_context_wrapper
 *
 * Extracted from fsn.c lines 45821-45831
 * Category: Other
 */

void glx_switch_context_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c00));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
