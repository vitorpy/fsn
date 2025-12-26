/**
 * addMark
 *
 * Extracted from fsn.c lines 69243-69295
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
  
  if (selection_count == DAT_10009528) {
    if (DAT_10009528 == 0) {
      DAT_10009528 = 8;
      selection_buffer = XtMalloc(0x200);
    }
    else {
      DAT_10009528 = DAT_10009528 + 8;
    }
    selection_buffer = XtRealloc(selection_buffer,DAT_10009528 << 6);
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042eef8):
     * Function: addMark
     *
     * ## Analysis
     * **What it does:**
     * Stores a value at offset 60 of a 64-byte indexed structure, then calls XmListSelectPos on a list widget. If the incremented counter equals 1, calls XtSetSensitive to enable another widget.
     * **C pseudocode:**
     * ```c
     * // t7 = base + (index * 64), store v0 at offset 60
     * marks[*s0].field_3c = v0;
     * // Load index, compute offset into marks array
     * int idx = *counter;  // s0
     * mark_entry_t *entry = &marks_array[idx];  // s1 + (idx << 6)
     * // XmListSelectPos(curcontext->markList, entry->field_3c, False)
     * XmListSelectPos(curcontext[0x6ec4/4], entry->field_3c, 0);
     * // Increment counter
     * int new_count = ++(*counter);
     * // If this is the first mark, enable the "marks" button
     * if (new_count == 1) {
     * // XtSetSensitive(curcontext->markButton, True)
     * XtSetSensitive(curcontext[0x6ec0/4], 1);
     * }
     * // Epilogue: restore s0, s1, ra; return
     * ```
     * **GP offsets resolved:**
     * - gp-32660 (0x806c): curcontext pointer
     * - gp-32416 (0x8160): XmListSelectPos
     * - gp-31976 (0x8318): XtSetSensitive
     */
halt_baddata();
}
