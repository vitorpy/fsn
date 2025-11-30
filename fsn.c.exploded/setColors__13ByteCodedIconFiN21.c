/**
 * setColors__13ByteCodedIconFiN21
 *
 * Extracted from fsn.c lines 57688-57695
 * Category: Other
 */

void setColors__13ByteCodedIconFiN21(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
