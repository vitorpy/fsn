/**
 * FUN_0042f124
 *
 * Extracted from fsn.c lines 69378-69417
 * Ghidra address: 0x0042f124
 * Category: Memory
 */

void FUN_0042f124(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  XmListDeletePos(mark_selector_list,param_1 + 1);
  XtFree(*(undefined4 *)(selection_buffer + param_1 * 0x40 + 0x38));
  XmStringFree(*(undefined4 *)(selection_buffer + param_1 * 0x40 + 0x3c));
  selection_count = selection_count + -1;
  if (param_1 < selection_count) {
    iVar2 = param_1 << 6;
    do {
      puVar4 = (undefined4 *)(selection_buffer + iVar2);
      puVar1 = puVar4;
      puVar5 = puVar4;
      do {
        puVar3 = puVar1;
        *puVar5 = puVar3[0x10];
        puVar6 = puVar5 + 3;
        puVar5[1] = puVar3[0x11];
        puVar5[2] = puVar3[0x12];
        puVar1 = puVar3 + 3;
        puVar5 = puVar6;
      } while (puVar3 + 3 != puVar4 + 0xf);
      param_1 = param_1 + 1;
      *puVar6 = puVar3[0x13];
      iVar2 = iVar2 + 0x40;
    } while (param_1 < selection_count);
  }
  if (selection_count == 0) {
    XtSetSensitive(mark_selector_dialog,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
