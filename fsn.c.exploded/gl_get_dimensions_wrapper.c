/**
 * gl_get_dimensions_wrapper
 *
 * Extracted from fsn.c lines 49304-49317
 * Category: Other
 */

void gl_get_dimensions_wrapper(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7924))();
  }
  else {
    (**(code **)(unaff_gp + -0x79f8))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
