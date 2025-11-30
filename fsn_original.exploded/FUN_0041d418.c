/**
 * FUN_0041d418
 *
 * Extracted from fsn.c lines 58949-58974
 * Ghidra address: 0x0041d418
 * Category: Other
 */

void FUN_0041d418(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(curcontext + 0x44);
  if (iVar3 != 0) {
    iVar2 = 0;
    if (altcontext[0xc51] != '\0') {
      iVar2 = *(int *)(altcontext + 0x44);
    }
    if (((iVar2 != iVar3) && (-1 < *(int *)(iVar3 + 0x74) << 0xb)) &&
       (-1 < *(int *)(iVar3 + 0x74) << 0xe)) {
      if (*(int *)(iVar3 + 100) != 0) {
        XtRemoveTimeOut();
        iVar3 = *(int *)(curcontext + 0x44);
      }
      uVar1 = XtAppAddTimeOut(app_context,DAT_1001749c * 1000,check_unmonitor_dp,iVar3);
      *(undefined4 *)(*(int *)(curcontext + 0x44) + 100) = uVar1;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
