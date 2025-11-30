/**
 * refresh_view_recursive
 *
 * Extracted from fsn.c lines 49509-49522
 * Category: Other
 */

void refresh_view_recursive(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7910))();
  }
  else {
    (**(code **)(unaff_gp + -0x79ec))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
