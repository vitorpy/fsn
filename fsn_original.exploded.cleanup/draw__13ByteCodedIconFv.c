/**
 * draw__13ByteCodedIconFv
 *
 * Extracted from fsn.c lines 73398-73416
 * Category: Graphics
 */

void draw__13ByteCodedIconFv(undefined1 *param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x18) != 0) {
    setState__19FileIconInterpreterFiN41
              (&TheFileIconInterpreter,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
    setColors__19FileIconInterpreterFiN21
              (&TheFileIconInterpreter,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
    pushmatrix();
    multmatrix(param_1 + 0x20);
    linewidth(1);
    FUN_00435a28(&TheFileIconInterpreter,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18),
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
