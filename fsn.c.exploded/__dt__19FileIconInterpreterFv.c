/**
 * __dt__19FileIconInterpreterFv
 *
 * Extracted from fsn.c lines 58026-58034
 * Category: Filesystem
 */

void __dt__19FileIconInterpreterFv(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    __dl__FPv();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
