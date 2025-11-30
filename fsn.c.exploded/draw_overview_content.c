/**
 * draw_overview_content
 *
 * Extracted from fsn.c lines 46520-46533
 * Category: Graphics
 */

void draw_overview_content(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x76c4) != '\0') {
    (**(code **)(unaff_gp + -0x799c))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0xacc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
