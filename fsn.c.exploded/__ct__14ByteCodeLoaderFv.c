/**
 * __ct__14ByteCodeLoaderFv
 *
 * Extracted from fsn.c lines 56725-56739
 * Category: Other
 */

void __ct__14ByteCodeLoaderFv(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)__nw__FUi(0x18), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
