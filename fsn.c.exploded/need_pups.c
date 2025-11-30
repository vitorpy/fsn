/**
 * need_pups
 *
 * Extracted from fsn.c lines 47103-47117
 * Category: Other
 */

void need_pups(void)

{
  int iVar1;
  
  if (cmap_initialized == '\0') {
    iVar1 = getgdesc(0x11);
    if (iVar1 < 2) {
      render_mode_flag = 1;
    }
    cmap_initialized = '\x01';
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
