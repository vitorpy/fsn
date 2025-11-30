/**
 * __ct__13ByteCodedIconFP8RuleInfo
 *
 * Extracted from fsn.c lines 73235-73284
 * Category: Other
 */

void __ct__13ByteCodedIconFP8RuleInfo(undefined1 *param_1,int param_2)

{
  void *__dest;
  undefined4 uVar1;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)__nw__FUi(100), param_1 == (undefined1 *)0x0)) {
    halt_baddata();
  }
  *(int *)(param_1 + 0x14) = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffff78;
  *(undefined4 *)(param_1 + 0xc) = 0xffffff81;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined **)(param_1 + 0x60) = &__vtbl__13ByteCodedIcon;
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  else {
    __dest = (void *)__nw__FUi(*(int *)(param_2 + 0x20));
    *(void **)(param_1 + 0x18) = __dest;
    bcopy(*(void **)(param_2 + 0x1c),__dest,*(size_t *)(param_2 + 0x20));
    uVar1 = *(undefined4 *)(param_2 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
