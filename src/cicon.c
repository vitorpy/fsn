/**
 * cicon.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "cicon.h"
#include "fsn_types.h"
#include "fsn_state.h"

void cIconInit(undefined4 param_1)

{
  parse_context_data(&context_data_block,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433ae8):
     * Function: cIconInit
     *
     * Now I have the complete picture:
     * **Summary for cIconInit:**
     * 1. **What it does**: Calls internal function FUN_00434324 with two args: (1) a string at DAT_10010000+28496=0x10016f50, and (2) the original parameter.
     * 2. **C pseudocode**:
     * // void cIconInit(char *iconPath) {
     * // // DAT_10010000 + 28496 (0x6f50) = 0x10016f50 = string table base
     * // // FUN_00434324 = internal icon registry init function
     * // FUN_00434324((char*)0x10016f50, iconPath);
     * // }
     * The function is a thin wrapper that prepends a base path/resource string to the icon path parameter and passes both to an internal icon initialization routine (FUN_00434324).
     * **Suggested code comment:**
     * // cIconInit: Initialize icon from path
     * // Calls FUN_00434324(base_string_0x10016f50, iconPath)
     * // base_string is likely an icon search path or resource prefix
     * // void cIconInit(char *iconPath) {
     * // FUN_00434324(icon_base_path, iconPath);
     * // }
     */
  return;
}

void cIconToTypeName(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  return;
}

void cIconGetValue(void)
{
    /*
     * BADDATA ANALYSIS (from binary @ 0x00433bfc):
     * Function: cIconGetValue
     *
     * Looking at this assembly:
     * 1. **What it does:** Loads a pointer from offset +20 of the first argument (a0), then indexes into an array at offset +68 using the second argument (a1) as the index (scaled by 4 for pointer/int size).
     * 2. **C pseudocode:**
     *
     * int cIconGetValue(void *icon, int index) {
     *     int *array = *(int **)((char *)icon + 20);  // icon->field_0x14
     *     return array[index + 17];  // offset 68 = 17 * 4, so base index 17
     * }
     *
     * Or more simply if we assume the structure:
     *
     * int cIconGetValue(IconStruct *icon, int index) {
     *     return icon->values[index].field_0x44;  // +20 gets values array, +68 into each element
     * }
     *
     * The `+68` (0x44) offset suggests indexing into a struct array where each element has a value at offset 0x44, OR it's a flat array starting at offset 68 from the base pointer at +20.
     */
    return;
}

void cFindIconByName(undefined4 param_1)

{
  load_context_block(&context_data_block,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433b38):
     * Function: cFindIconByName
     *
     * Looking at this assembly:
     * 1. **What it does**: Loads a global pointer (gp-32660 + 28496 = address of icon database/list), loads original argument as second param, calls function at gp-30636 (likely a lookup/search function like `SgFindTypeByName` or similar), returns result.
     * 2. **C pseudocode**:
     * void* cFindIconByName(char *name) {
     * return SgFindTypeByName(iconDatabase, name);
     * // iconDatabase = *(gp-32660) + 0x6f50
     * // SgFindTypeByName = *(gp-30636)
     * }
     * The gp-32660 offset likely points to a base address (possibly `_IconTypes` or similar icon registry), and 28496 (0x6f50) is an offset into that structure. The function at gp-30636 is a lookup routine that searches by name string.
     */
  return;
}

void cFindIconByType(undefined4 param_1)

{
  load_context_data(&context_data_block,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433b84):
     * Function: cFindIconByType
     *
     * ## Analysis of cFindIconByType (0x00433b84)
     * **What it does:**
     * Looks up an icon by type string. Loads a base pointer from GP-relative address, adds offset 0x6f50 (28496) to get an icon table/hash, then calls a lookup function with that table and the type parameter.
     * **C pseudocode:**
     * // void* cFindIconByType(char *type) {
     * // GP[-32660] = base data pointer (likely _gp_disp or data section base)
     * // GP[-30640] = lookup function (likely hash_lookup or list_find)
     * // char *icon_table = *(char**)GP_OFFSET(-32660) + 28496;  // 0x6f50
     * // return lookup_function(icon_table, type);
     * // }
     * **GP offsets to resolve:**
     * - GP[-32660] (0x806c): Base pointer to data section
     * - GP[-30640] (0x8850): Function pointer - likely `sgiFindType` or similar SGI icon lookup
     * The unconditional branch at 0x433bb8 jumping over a NOP is just Ghidra artifact from delay slot handling - no actual logic there.
     */
  return;
}

void cGetBounds(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x38);
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c);
  *param_4 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40);
  *param_5 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x44);
                    // WARNING: Bad instruction - Truncating control flow here
      //
     // BADDATA ANALYSIS (from binary @ 0x00433c30):
     // Function: cGetBounds
     //
     // **What it does:**
     // Extracts 4 float values from offsets 56, 60, 64, 68 of the structure at a0->offset20 (child/bounds struct), storing them into the 4 output pointers (a1, a2, a3, sp+16).
     // **C equivalent:**
     // void cGetBounds(void *node, float *x1, float *y1, float *x2, float *y2) {
     // void *bounds = ((void **)node)[5];  // offset 20 = index 5 for 32-bit pointers
     // *x1 = *(float *)((char *)bounds + 56);
     // *y1 = *(float *)((char *)bounds + 60);
     // *x2 = *(float *)((char *)bounds + 64);
     // *y2 = *(float *)((char *)bounds + 68);
     // }
     // Or with proper struct typing:
     // void cGetBounds(TreeNode *node, float *minX, float *minY, float *maxX, float *maxY) {
     // BoundsStruct *b = node->bounds;  // offset 20
     // *minX = b->x1;  // offset 56
     // *minY = b->y1;  // offset 60
     // *maxX = b->x2;  // offset 64
     // *maxY = b->y2;  // offset 68
     // }
     //
  return;
}

void cSetState(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  setState__13ByteCodedIconFiN41(param_1,param_2,param_3,param_4,param_5,param_6);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433e18):
     * Function: cSetState
     *
     * Ghidra actually DID decompile this correctly. The function calls `setState__13ByteCodedIconFiN41` (C++ mangled name for `ByteCodedIcon::setState(int, int, int, int, int, int)`).
     * **Final Answer:**
     * 1. **What it does:** Wrapper that passes all 6 arguments through to `ByteCodedIcon::setState()` (C++ method at GP offset -30616). The `halt_baddata()` in Ghidra output is spurious - the assembly shows a clean return after the call.
     * 2. **C pseudocode:**
     * // cSetState - wrapper for ByteCodedIcon::setState
     * // Passes 6 arguments unchanged to setState__13ByteCodedIconFiN41
     * void cSetState(int p1, int p2, int p3, int p4, int p5, int p6) {
     * setState__13ByteCodedIconFiN41(p1, p2, p3, p4, p5, p6);
     * }
     * The `halt_baddata()` is a Ghidra artifact - the actual assembly shows the function cleanly returns after the jalr. The branch at 0x433e70 is just compiler-generated padding/alignment before the epilogue.
     */
  return;
}
