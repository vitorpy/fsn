/**
 * popzoom
 *
 * Extracted from fsn.c lines 51559-51585
 * Category: Other
 */

void popzoom(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0042e670(*(int *)(curcontextwindows + 0x34) + *(int *)(curcontext + 0x40) * 0x38);
  if (iVar1 == 0) {
    do {
      *(int *)(curcontext + 0x40) = *(int *)(curcontext + 0x40) + -1;
      iVar1 = *(int *)(curcontext + 0x40);
      if (iVar1 < 0) {
        *(undefined4 *)(curcontext + 0x40) = 9;
        iVar1 = *(int *)(curcontext + 0x40);
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_0042e670(*(int *)(curcontextwindows + 0x34) + iVar1 * 0x38);
    } while ((iVar1 == 0) && (iVar2 != 10));
  }
  *(int *)(curcontext + 0x40) = *(int *)(curcontext + 0x40) + -1;
  if (*(int *)(curcontext + 0x40) < 0) {
    *(undefined4 *)(curcontext + 0x40) = 9;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
