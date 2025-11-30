/**
 * recalc_layout
 *
 * Extracted from fsn.c lines 49682-49695
 * Category: Other
 */

void recalc_layout(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7904))();
  }
  else {
    (**(code **)(unaff_gp + -0x79e8))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
