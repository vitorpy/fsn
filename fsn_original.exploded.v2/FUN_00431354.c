/**
 * FUN_00431354
 *
 * Extracted from fsn.c lines 70581-70624
 * Ghidra address: 0x00431354
 * Category: Other
 */

void FUN_00431354(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_gp;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    if (param_3 == 0) {
      param_3 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x50 + 0x28);
    }
    param_2 = param_2 * 0x50;
    if (param_3 != *(int *)(*(int *)(param_1 + 0x8c) + param_2 + 0x28)) {
      iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) /* -> FUN_00430000 */ + 0x25fc))(param_1);
      iVar4 = 0;
      if (0 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */) {
        piVar3 = iVar1->child_count /* was: *(int **)(iVar1 + 0x14) */;
        do {
          if (param_3 == *piVar3) {
            if (*(int *)(iVar1->_field_1c /* was: *(int *)(iVar1 + 0x1c) */ + iVar4 * 4) != 0) {
                  /*
     * BADDATA ANALYSIS (from binary @ 0x00431354):
     * Function: FUN_00431354
     *
     * Looking at this assembly:
     * 1. **What it does:** Validates a struct pointer (returns -2 if NULL), uses default values from the struct if args are NULL (a1 from offset 0x84, a2 computed from array at offset 0x8C using index*5*16+40), then compares a2 with the computed array element's field at +0x28.
     * 2. **C pseudocode:**
     * ```c
     * int FUN_00431354(void *s0, int a1, int a2) {
     * if (s0 == NULL) return -2;
     * if (a1 == 0) a1 = *(int*)((char*)s0 + 0x84);  // default screen index
     * if (a2 == 0) {
     * int *array = *(int**)((char*)s0 + 0x8C);  // screen array base
     * a2 = array[a1 * 20 + 10];  // offset 0x28 = 40 bytes = index 10
     * }
     * int *array = *(int**)((char*)s0 + 0x8C);
     * int *entry = array + a1 * 20;  // each entry is 80 bytes (20 ints)
     * if (a2 != entry[10]) {  // compare with field at +0x28
     * // ... continues
     * }
     * return entry[12];  // field at +0x30
     * }
     * ```
     * The struct at s0 has: default index at +0x84, array pointer at +0x8C. Array entries are 80 bytes (5*16), with colormap-related fields at +0x28 and +0x30.
     */
halt_baddata();
            }
            uVar2 = /* TODO: GP:-0x7d48 */ (**(code **)(unaff_gp + -0x7d48) /* -> EXTERNAL_0x0f52d080 */)
                              (param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 + 8),
                               param_3,0);
            *(undefined4 *)(iVar1->_field_1c /* was: *(int *)(iVar1 + 0x1c) */ + iVar4 * 4) = uVar2;
                /*
     * BADDATA ANALYSIS (from binary @ 0x00431354):
     * Function: FUN_00431354
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function at GP-32736+9724 (likely a lookup/getter), gets result struct with count at offset 24 and array at offset 20. Loops through array comparing element[0] against a2 (param), checking if corresponding entry at offset 28 is non-null.
     * 2. **C pseudocode:**
     * ```c
     * result = some_getter_func();  // jalr to gp[-32736]+9724
     * count = result->field_18;     // offset 24
     * if (count > 0) {
     * array = result->field_14; // offset 20
     * for (i = 0; i < count; i++) {
     * if (array[i] == param_a2) {
     * secondary = result->field_1c;  // offset 28
     * entry = secondary[i];
     * if (entry != NULL) {
     * // found match, do something with s0->field_8c
     * break;
     * }
     * }
     * }
     * }
     * ```
     * This is a lookup loop: finds param_a2 in one array, returns corresponding entry from parallel array at offset 0x1c.
     */
halt_baddata();
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 10;
        } while (iVar4 < iVar1->child_array /* was: *(int *)(iVar1 + 0x18) */);
      }
      /* TODO: GP:-0x7d48 */ (**(code **)(unaff_gp + -0x7d48) /* -> EXTERNAL_0x0f52d080 */)
                (param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + param_2 + 8),param_3,0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00431354):
     * Function: FUN_00431354
     *
     * Looking at this MIPS assembly snippet:
     * **What it does:**
     * 1. Calls a function via GP offset -32072 (likely a memory allocator or object creator)
     * 2. Stores the result at `object->field_0x1c[index]` where index is in v1 (offset by 40 bytes per iteration)
     * 3. Returns the stored value, or loops back if condition (a0 < a1) is true, incrementing index by 40 (0x28) each iteration
     * **C pseudocode:**
     * ```c
     * // GP[-32072] is likely XtMalloc or similar allocation function
     * void *result = ((void*(*)(void))gp_func_82b8)();
     * obj->array_1c[index] = result;
     * return obj->array_1c[index];
     * // Loop variant (at 0x431494):
     * while (i < count) {
     * // ... loop body ...
     * index += 40;  // sizeof(entry) = 40 bytes
     * }
     * // After loop:
     * entry = &obj->field_8c[offset];
     * some_func(s0, entry->field_8, 0);  // a0=s0, a1=entry[8], a3=0
     * ```
     * The structure appears to be iterating over 40-byte entries, with field_0x1c being an array/pointer and field_0x8c being another array accessed with a secondary offset (t1). GP offset -32072 (0x82b8) resolves to some allocation or initialization function called twice in this snippet.
     */
halt_baddata();
}
