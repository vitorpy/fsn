/**
 * FUN_00432370
 *
 * Extracted from fsn.c lines 71214-71259
 * Ghidra address: 0x00432370
 * Category: Other
 */

void FUN_00432370(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
        /*
     * BADDATA ANALYSIS (from binary @ 0x00432370):
     * Function: FUN_00432370
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * This is the prologue of a function that validates arguments and calls another function at GP-0x8020+9724. If arg0 (a0) is NULL, returns -2. If arg1 (a1) is NULL, loads it from arg0+132. Saves args to stack across the call, then checks arg3 (a3/param_7) - if NULL, loads from return_value+36.
     * **C pseudocode:**
     * ```c
     * int FUN_00432370(void *param_1, void *param_2, int param_3, int *param_4) {
     * void *v0;
     * if (param_1 == NULL) {
     * return -2;
     * }
     * if (param_2 == NULL) {
     * param_2 = *(void **)((char *)param_1 + 132);  // offset 0x84
     * }
     * v0 = SG_someFunction(param_2);  // GP indirect call at offset -32736 + 9724
     * if (param_4 == NULL) {
     * param_4 = *(int **)((char *)v0 + 36);  // offset 0x24
     * }
     * // ... continues
     * }
     * ```
     * The GP indirect call resolves to approximately `gp - 0x8020 + 0x25fc` which likely points to an SG (Scene Graph) utility function. The +132 and +36 offsets suggest structure field accesses for default values when optional parameters are NULL.
     */
halt_baddata();
  }
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x84);
  }
  iVar1 = FUN_004325fc();
  if (param_5 == 0) {
    param_5 = iVar1->_field_24 /* was: *(int *)(iVar1 + 0x24) */;
  }
  if (param_3 == 0) {
    if (((param_4 == (int *)0x0) ||
        (*param_4 == *(int *)(iVar1 + iVar1->_field_24 /* was: *(int *)(iVar1 + 0x24) */ * 4 + 0x3c))) &&
       (param_5 == iVar1->_field_24 /* was: *(int *)(iVar1 + 0x24) */)) {
      param_3 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x50 + 0x24);
      iVar4 = iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */;
      goto LAB_00432460;
    }
    param_3 = FUN_00431a18(param_1,param_2,param_4);
  }
  iVar4 = iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */;
LAB_00432460:
  iVar2 = 0;
  if (0 < iVar4) {
    iVar3 = iVar1->child_count /* was: *(int *)(iVar1 + 0x14) */;
    do {
      if (((param_3 == iVar3->file_count /* was: *(int *)(iVar3 + 0xc) */) &&
          ((param_4 == (int *)0x0 || (iVar3->file_array /* was: *(int *)(iVar3 + 0x10) */ == *param_4)))) &&
         (param_5 == *(int *)(iVar1->_field_20 /* was: *(int *)(iVar1 + 0x20) */ + iVar2 * 4))) {
            /*
     * BADDATA ANALYSIS (from binary @ 0x00432370):
     * Function: FUN_00432370
     *
     * Looking at this assembly:
     * 1. **What it does:** Searches for a matching element in an array. If s0 is non-null and s0[0] matches base[v0].array[index], or if a3 equals index, it retrieves a value from a structure at offset 140 in a0. Otherwise calls a function via GP-30720 with s0 as argument.
     * 2. **C pseudocode:**
     * ```c
     * int index = base->field_24;  // offset 36
     * if (s0 != NULL) {
     * int *arr_ptr = &base->array[index];  // offset 60 + index*4
     * if (s0[0] != *arr_ptr) goto call_func;
     * }
     * if (a3 != index) {
     * call_func:
     * a6 = some_func(s0);  // GP-30720, likely strcmp or lookup
     * } else {
     * // a1*5*16 = a1*80 byte stride
     * struct_entry *entry = &a0->field_140[a1];  // offset 140 + a1*80
     * a6 = entry->field_24;  // offset 36 within entry
     * }
     * a0 = t0->field_24;  // offset 24
     * return 0;
     * ```
     * The GP-30720 call is likely `SgFindNode` or similar lookup function based on context (SG_getUnderlayArgs suggests Scene Graph utilities). The stride calculation `(a1*4 + a1) << 4` = `a1 * 80` indicates 80-byte structure elements.
     */
halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < iVar4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00432370):
     * Function: FUN_00432370
     *
     * Looking at this assembly:
     * 1. **What it does:** Searches an array of 40-byte structures for a matching entry. Compares field at offset 12 against a2 (widget), optionally field at offset 16 against *s0 (event type), then checks array at t0+32 against a3. Returns field at offset 0 on match, or -1 if not found.
     * 2. **C pseudocode:**
     * ```c
     * // t0 = menu structure, a0 = count, a2 = widget, a3 = button, s0 = event_type_ptr
     * struct Entry { int result; int pad1; int pad2; int widget; int event_type; ... }; // 40 bytes
     * Entry *entries = (Entry *)*(t0 + 20);  // offset 0x14
     * int *buttons = (int *)*(t0 + 32);       // offset 0x20
     * for (int i = 0; i < count; i++, entries++) {
     * if (entries->widget != widget) continue;
     * if (event_type_ptr != NULL && entries->event_type != *event_type_ptr) continue;
     * if (buttons[i] == button)
     * return entries->result;  // field at offset 0
     * }
     * return -1;
     * ```
     * This is a menu/popup lookup function - given a widget, optional event type, and button, it finds the matching menu entry index or returns -1.
     */
halt_baddata();
}
