/**
 * locateClear
 *
 * Extracted from fsn.c lines 65745-65759
 * Category: Other
 */

void locateClear(void)

{
  if (DAT_10007990 != 0) {
    FUN_00429464();
    FUN_0040bc28();
    color(0);
    clear();
    DAT_10007990 = 0;
    DAT_10007994 = 0;
    FUN_00420b70();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
