/**
 * __dt__13ByteCodedIconFv
 *
 * Extracted from fsn.c lines 73348-73362
 * Category: Other
 */

void __dt__13ByteCodedIconFv(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x60) = &__vtbl__13ByteCodedIcon;
    if (*(int *)(param_1 + 0x18) != 0) {
      __dl__FPv();
    }
    if ((param_2 & 1) != 0) {
      __dl__FPv(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
