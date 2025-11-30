/**
 * update_database_view
 *
 * Extracted from fsn.c lines 50126-50138
 * Category: Other
 */

void update_database_view(void)

{
  int unaff_gp;
  
  if ((**(char **)(unaff_gp + -0x75dc) == '\0') &&
     (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) != 0)) {
    (**(code **)(unaff_gp + -0x7f2c))();
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x78b0) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
