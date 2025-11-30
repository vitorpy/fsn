/**
 * addMark
 *
 * Extracted from fsn.c lines 53914-53966
 * Category: Memory
 */

void addMark(char *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (selection_count == selection_array_capacity) {
    if (selection_array_capacity == 0) {
      selection_array_capacity = 8;
      selection_buffer = XtMalloc(0x200);
    }
    else {
      selection_array_capacity = selection_array_capacity + 8;
    }
    selection_buffer = XtRealloc(selection_buffer,selection_array_capacity << 6);
  }
  puVar1 = (undefined4 *)(selection_buffer + selection_count * 0x40);
  puVar7 = param_2;
  do {
    puVar6 = puVar7;
    puVar5 = puVar1;
    puVar7 = puVar6 + 3;
    *puVar5 = *puVar6;
    puVar5[1] = puVar6[1];
    puVar5[2] = puVar6[2];
    puVar1 = puVar5 + 3;
  } while (puVar7 != param_2 + 0xc);
  puVar5[3] = *puVar7;
  puVar5[4] = puVar6[4];
  if (param_1 == (char *)0x0) {
    *(undefined4 *)(selection_buffer + selection_count * 0x40 + 0x38) = 0;
  }
  else {
    sVar2 = strlen(param_1);
    pcVar3 = (char *)XtMalloc(sVar2 + 1);
    pcVar3 = strcpy(pcVar3,param_1);
    *(char **)(selection_buffer + selection_count * 0x40 + 0x38) = pcVar3;
  }
  uVar4 = XmStringCreateSimple(param_1);
  *(undefined4 *)(selection_buffer + selection_count * 0x40 + 0x3c) = uVar4;
  XmListAddItem(mark_selector_list,*(undefined4 *)(selection_buffer + selection_count * 0x40 + 0x3c),0);
  selection_count = selection_count + 1;
  if (selection_count == 1) {
    XtSetSensitive(mark_selector_dialog,1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
