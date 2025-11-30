/**
 * restorePosition
 *
 * Extracted from fsn.c lines 68635-68679
 * Category: Other
 */

void restorePosition(undefined4 param_1)

{
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  short sStack_4;
  short sStack_2;
  
  FUN_0042dfb4(param_1,&sStack_2,&sStack_4,&uStack_8,&uStack_c,&uStack_10,&uStack_14,&iStack_18,
               &iStack_1c,(int)curcontext + 0xc50);
  if (sStack_2 != *(short *)(curcontext + 0xc)) {
    *(short *)(curcontext + 0xc) = sStack_2;
    FUN_0040bfec();
  }
  if (sStack_4 != *(short *)(curcontext + 0xe)) {
    *(short *)(curcontext + 0xe) = sStack_4;
    FUN_0040c0cc();
  }
  *(undefined4 *)curcontext = uStack_8;
  *(undefined4 *)(curcontext + 4) = uStack_c;
  *(undefined4 *)(curcontext + 8) = uStack_10;
  *(undefined4 *)(curcontext + 0x3c) = uStack_14;
  if (iStack_18 != *(int *)(curcontext + 0x44)) {
    if (iStack_18 == 0) {
      FUN_0041d54c(0);
    }
    else {
      FUN_0041d69c();
    }
  }
  if (iStack_1c != *(int *)(curcontext + 0x48)) {
    if (iStack_1c == 0) {
      FUN_0041d920(0);
    }
    else {
      FUN_0041da44();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
