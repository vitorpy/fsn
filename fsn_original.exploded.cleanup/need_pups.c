/**
 * need_pups
 *
 * Extracted from fsn.c lines 61729-61743
 * Category: Other
 */

void need_pups(void)

{
  int iVar1;
  
  if (DAT_10006f04 == '\0') {
    iVar1 = getgdesc(0x11);
    if (iVar1 < 2) {
      DAT_10006f00 = 1;
    }
    DAT_10006f04 = '\x01';
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
