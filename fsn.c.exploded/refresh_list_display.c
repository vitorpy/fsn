/**
 * refresh_list_display
 *
 * Extracted from fsn.c lines 50960-50978
 * Category: Graphics
 */

void refresh_list_display(void)

{
  code *pcVar1;
  int unaff_gp;
  
  if (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x7990) != 0) {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x6b9c))();
    (**(code **)(unaff_gp + -0x7ae0))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    pcVar1 = *(code **)(unaff_gp + -0x7984);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x7990) = 0;
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x7994) = 0;
    (*pcVar1)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
