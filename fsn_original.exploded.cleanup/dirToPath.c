/**
 * dirToPath
 *
 * Extracted from fsn.c lines 52501-52513
 * Category: Filesystem
 */

void dirToPath(undefined1 *param_1,int param_2)

{
  if (param_1 == (undefined1 *)0x0) {
    param_1 = &DAT_10016710;
  }
  *param_1 = 0;
  if (param_2 != 0) {
    FUN_00411a78();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
