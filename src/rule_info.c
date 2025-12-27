/**
 * rule_info.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "rule_info.h"
#include "fsn_types.h"
#include "fsn_state.h"

void getTypeName__8RuleInfoFv(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433f18):
     * Function: getTypeName__8RuleInfoFv
     *
     * **What it does:**
     * This is a C++ method `RuleInfo::getTypeName()`. It sets up the global pointer (standard MIPS ABI prologue), then loads and returns the first field from the object pointed to by `a0` (the `this` pointer).
     * **C equivalent:**
     * // RuleInfo::getTypeName() - returns first field of RuleInfo struct
     * char* RuleInfo_getTypeName(RuleInfo* this) {
     * return this->typeName;  // or: return *(char**)this;
     * }
     * The `typeName` is at offset 0 in the RuleInfo structure. This is a simple accessor/getter method.
     */
  return;
}

void getValue__8RuleInfoFi(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433f38):
     * Function: getValue__8RuleInfoFi
     *
     * ## Analysis
     * **What it does:**
     * Loads a 32-bit value from an array stored at offset 0x44 (68 bytes) within a structure. The index (a1) is scaled by 4 (shift left 2) and added to the base pointer (a0).
     * **C pseudocode:**
     * int getValue__8RuleInfoFi(RuleInfo *this, int index) {
     *     return this->values[index];  // values is at offset 0x44 in RuleInfo struct
     * }
     * Or more literally:
     * int getValue__8RuleInfoFi(void *a0, int a1) {
     *     return *(int *)((char *)a0 + 0x44 + a1 * 4);
     * }
     * This is a C++ method `RuleInfo::getValue(int)` - a simple array accessor into member data at offset 68.
     */
  return;
}

void __ct__8RuleInfoFv(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)__nw__FUi(0x6c), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x14] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x19] = 5;
    param_1[0x1a] = 0;
    param_1[0x11] = 0x42c80000;
    param_1[0x10] = 0x42c80000;
    param_1[0x13] = 0x42480000;
    param_1[0x12] = 0x42480000;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00435438):
     * Function: __ct__8RuleInfoFv
     *
     * ## Analysis
     * **1. What it does:**
     * Initializes a RuleInfo struct: zeros out fields at offsets 32-52, 80, and relative to a0+t6 (offsets 80-92). Sets offset 100 to 5, offset 104 to 0. Stores float 100.0 at offsets 64,68; float 50.0 at offsets 72,76; and 0.0 at offsets 56,60. Returns the struct pointer.
     * **2. C pseudocode:**
     * RuleInfo* RuleInfo_ctor(RuleInfo* this) {
     * // ... earlier code before halt_baddata ...
     * // Zero out array/fields at offsets 32-52 (6 words)
     * this->field_32 = 0;
     * this->field_36 = 0;
     * this->field_40 = 0;
     * this->field_44 = 0;
     * this->field_48 = 0;
     * this->field_52 = 0;
     * // t6 contains some offset computed earlier
     * char* ptr = (char*)this + t6;
     * this->field_80 = 0;
     * ((int*)ptr)[23] = 0;  // offset 92 from ptr
     * ((int*)ptr)[22] = 0;  // offset 88
     * ((int*)ptr)[21] = 0;  // offset 84
     * ((int*)ptr)[20] = 0;  // offset 80
     * this->field_100 = 5;      // 0x64
     * this->field_104 = 0;      // 0x68
     * this->size_x = 100.0f;    // 0x44 (0x42c80000)
     * this->size_y = 100.0f;    // 0x40
     * this->pos_x = 50.0f;      // 0x4c (0x42480000)
     * this->pos_y = 50.0f;      // 0x48
     * this->field_60 = 0.0f;    // 0x3c
     * this->field_56 = 0.0f;    // 0x38
     * return this;
     * }
     * Float constants: 0x42c80000 = 100.0f, 0x42480000 = 50.0f
     */
  return;
}
