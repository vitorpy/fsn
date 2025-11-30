/**
 * clear_selection_state
 *
 * Extracted from fsn.c lines 53121-53134
 * Category: Input
 */

void clear_selection_state(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x784c))(*(int *)(unaff_gp + -0x7f94) + 0x6e50);
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    (**(code **)(unaff_gp + -0x784c))(*(int *)(unaff_gp + -0x7f94) + 0x6e88);
    (**(code **)(unaff_gp + -0x7894))(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
