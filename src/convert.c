/**
 * convert.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "convert.h"
#include "fsn_types.h"
#include "fsn_state.h"

void __ct__11ConvertInfoFv(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)__nw__FUi(0x14), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00435510):
     * Function: __ct__11ConvertInfoFv
     *
     * ## Analysis
     * **1. What it does:**
     * C++ constructor for ConvertInfo class. If `this` pointer (a0) is NULL, allocates 20 bytes via malloc (GP offset -31580 = 0x84a4). Then zero-initializes 5 fields (20 bytes total) at offsets 0, 4, 8, 12, 16. Returns the object pointer.
     * **2. C pseudocode:**
     * ConvertInfo* ConvertInfo_ctor(ConvertInfo* this) {
     * if (this == NULL) {
     * this = (ConvertInfo*)malloc(20);
     * if (this == NULL)
     * return NULL;
     * }
     * this->field_0 = 0;
     * this->field_4 = 0;
     * this->field_8 = 0;
     * this->field_c = 0;
     * this->field_10 = 0;
     * return this;
     * }
     * The `__ct__` prefix is SGI's mangled name for constructor. The pattern of NULL-check + malloc is standard C++ "placement new" compatible constructor that can either initialize existing memory or allocate new.
     */
  return;
}
