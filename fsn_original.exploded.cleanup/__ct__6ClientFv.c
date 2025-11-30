/**
 * __ct__6ClientFv
 *
 * Extracted from fsn.c lines 78179-78188
 * Category: Other
 */

void __ct__6ClientFv(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)__nw__FUi(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
