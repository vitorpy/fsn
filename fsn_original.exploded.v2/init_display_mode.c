/**
 * init_display_mode
 *
 * Extracted from fsn.c lines 61749-61764
 * Category: Graphics
 */

void init_display_mode(void)

{
  int iVar1;
  int unaff_gp;
  
  if (*(char *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6f04) == '\0') {
    iVar1 = /* TODO: GP:-0x7cbc */ (**(code **)(unaff_gp + -0x7cbc) /* -> EXTERNAL_0x0f1207cc */)(0x11);
    if (iVar1 < 2) {
      *(undefined1 *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6f00) = 1;
    }
    *(undefined1 *)(small /* was: *(int *)(unaff_gp + -0x7f98) */ /* -> small */ + 0x6f04) = 1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
