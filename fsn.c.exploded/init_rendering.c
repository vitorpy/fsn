/**
 * init_rendering
 *
 * Extracted from fsn.c lines 49988-49998
 * Category: Graphics
 */

void init_rendering(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x75dc) == '\0') {
    (**(code **)(unaff_gp + -0x7720))(*(int *)(unaff_gp + -0x7f94) + 0x6c70);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
