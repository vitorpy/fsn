/**
 * savePosition
 *
 * Extracted from fsn.c lines 52992-53039
 * Category: Other
 */

void savePosition(undefined2 *param_1)

{
  *param_1 = *(undefined2 *)(curcontext + 0xc);
  param_1[1] = *(undefined2 *)(curcontext + 0xe);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)curcontext;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(curcontext + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(curcontext + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(curcontext + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(curcontext + 0x44);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(curcontext + 0x48);
  *(undefined1 *)(param_1 + 0x1a) = curcontext[0xc50];
  if (*(int *)(curcontext + 0x44) != 0) {
    if (*(int *)(curcontext + 0x3c) == 0) {
      *(float *)(param_1 + 0xc) =
           *(float *)curcontext - *(float *)(*(int *)(curcontext + 0x44) + 0x34);
      *(float *)(param_1 + 0xe) =
           *(float *)(curcontext + 4) - *(float *)(*(int *)(curcontext + 0x44) + 0x38);
      *(float *)(param_1 + 0x10) =
           *(float *)(curcontext + 8) - *(float *)(*(int *)(curcontext + 0x44) + 0x24);
      if (*(int *)(curcontext + 0x48) != 0) {
        *(float *)(param_1 + 0x14) =
             *(float *)curcontext -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x34) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x14) *
             *(float *)(*(int *)(curcontext + 0x44) + 0x58));
        *(float *)(param_1 + 0x16) =
             *(float *)(curcontext + 4) -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x38) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x18));
        *(float *)(param_1 + 0x18) =
             *(float *)(curcontext + 8) -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x24) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x1c));
      }
    }
    else if (*(int *)(curcontext + 0x48) != 0) {
      *(float *)(param_1 + 0x14) =
           *(float *)curcontext - *(float *)(*(int *)(curcontext + 0x48) + 0x14);
      *(float *)(param_1 + 0x16) =
           *(float *)(curcontext + 4) - *(float *)(*(int *)(curcontext + 0x48) + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
