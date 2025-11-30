/**
 * __ct__19FileIconInterpreterFv
 *
 * Extracted from fsn.c lines 73689-73699
 * Category: Filesystem
 */

void __ct__19FileIconInterpreterFv(int param_1)

{
  if ((param_1 != 0) || (param_1 = __nw__FUi(0x2d0), param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
