/**
 * init_display_mode
 *
 * Extracted from fsn.c lines 47123-47138
 * Category: Graphics
 */

void init_display_mode(void)

{
  int iVar1;
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x7f98) + 0x6f04) == '\0') {
    iVar1 = (**(code **)(unaff_gp + -0x7cbc))(0x11);
    if (iVar1 < 2) {
      *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x6f00) = 1;
    }
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x6f04) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
