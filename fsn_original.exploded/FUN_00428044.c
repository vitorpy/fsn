/**
 * FUN_00428044
 *
 * Extracted from fsn.c lines 64863-64889
 * Ghidra address: 0x00428044
 * Category: Other
 */

void FUN_00428044(void)

{
  int iVar1;
  undefined1 auStack_414 [1036];
  int local_8;
  uint local_4;
  
  if (fsn_resources == '\0') {
    FUN_00427fe0();
    iVar1 = FUN_0043ab5c(&DAT_10016c70);
    while (iVar1 != 0) {
      FUN_0043aa18(&DAT_10016c70,auStack_414);
      if ((local_8 != 0) && (local_4 < 10)) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar1 = FUN_0043ab5c(&DAT_10016c70);
    }
    FUN_0041dba0();
    redraw_gl_scene();
    FUN_0042a8e4();
    FUN_00427f5c();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
