/**
 * refresh_display
 *
 * Extracted from fsn.c lines 46370-46386
 * Category: Graphics
 */

void refresh_display(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x76c4) != '\0') {
    (**(code **)(unaff_gp + -0x79a0))();
    (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x160));
    (**(code **)(unaff_gp + -0x7cf8))();
    if (**(int **)(unaff_gp + -0x76d4) != 0) {
      (**(code **)(unaff_gp + -0x7990))(**(int **)(unaff_gp + -0x76d4),0);
    }
    (**(code **)(unaff_gp + -0x7b54))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
