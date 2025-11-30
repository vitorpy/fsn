/**
 * setState__13ByteCodedIconFiN41
 *
 * Extracted from fsn.c lines 57671-57682
 * Category: Filesystem
 */

void setState__13ByteCodedIconFiN41
               (undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
               undefined1 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
