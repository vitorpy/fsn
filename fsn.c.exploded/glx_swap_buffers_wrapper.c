/**
 * glx_swap_buffers_wrapper
 *
 * Extracted from fsn.c lines 51832-51844
 * Category: Other
 */

void glx_swap_buffers_wrapper(void)

{
  int unaff_gp;
  
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    (**(code **)(unaff_gp + -0x7acc))();
    (**(code **)(unaff_gp + -0x7894))(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
