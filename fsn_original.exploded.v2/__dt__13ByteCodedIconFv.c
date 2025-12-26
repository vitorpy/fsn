/**
 * __dt__13ByteCodedIconFv
 *
 * Extracted from fsn.c lines 73348-73362
 * Category: Other
 */

void __dt__13ByteCodedIconFv(int param_1,uint param_2)

{
  if (param_1 != 0) {
    param_1->_field_60 /* was: *(undefined **)(param_1 + 0x60) */ = &__vtbl__13ByteCodedIcon;
    if (param_1->child_array /* was: *(int *)(param_1 + 0x18) */ != 0) {
      __dl__FPv();
    }
    if ((param_2 & 1) != 0) {
      __dl__FPv(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043515c):
     * Function: __dt__13ByteCodedIconFv
     *
     * ## Analysis
     * **1. What it does:**
     * This is a C++ destructor for ByteCodedIcon. It sets the vtable pointer to the base class vtable, calls free() on the object's data pointer at offset +24 if non-NULL, then conditionally calls free() on the object itself if the destructor flag (param bit 0) is set.
     * **2. C pseudocode:**
     * ```c
     * void ByteCodedIcon_destructor(ByteCodedIcon *this, int flags) {
     * this->vtable = &ByteCodedIcon_base_vtable;  // offset 96, from gp-30224
     * if (this->data != NULL) {      // offset +24
     * free(this->data);
     * }
     * if (flags & 1) {               // bit 0 = delete object itself
     * free(this);
     * }
     * }
     * ```
     * **Key observations:**
     * - gp-31540 (0x84cc) = free() - called twice via same GOT entry
     * - gp-30224 (0x89f0) = base class vtable pointer
     * - Standard SGI C++ destructor pattern: reset vtable, free members, conditionally free self
     * - The `flags & 1` check is the C++ "deleting destructor" convention (bit 0 means caller wants object freed)
     */
halt_baddata();
}
