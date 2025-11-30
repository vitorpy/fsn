/**
 * gotoFileName
 *
 * Extracted from fsn.c lines 60159-60175
 * Category: Filesystem
 */

void gotoFileName(undefined4 param_1)

{
  int iStack_8;
  int iStack_4;
  
  FUN_0042ab1c(param_1,&iStack_4,&iStack_8);
  if (iStack_4 != 0) {
    FUN_0041d69c();
    if (iStack_8 != 0) {
      FUN_0041da44();
    }
    FUN_0041fbb4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
