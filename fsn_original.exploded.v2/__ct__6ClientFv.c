/**
 * __ct__6ClientFv
 *
 * Extracted from fsn.c lines 78179-78188
 * Category: Other
 */

void __ct__6ClientFv(undefined4 *param_1)

{
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)__nw__FUi(4), param_1 != (undefined4 *)0x0)) {
    *param_1 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043b16c):
     * Function: __ct__6ClientFv
     *
     * **What it does:**
     * This is a C++ constructor for a 6-byte "Client" class. If the `this` pointer (a0) is NULL, it allocates 4 bytes via `__nw__FUi` (operator new). Then it zeroes out the first field of the object and returns the `this` pointer.
     * **C pseudocode:**
     * ```c
     * Client* Client_ctor(Client* this) {
     * if (this == NULL) {
     * this = (Client*)operator_new(4);
     * if (this == NULL)
     * return NULL;
     * }
     * this->field_0 = 0;
     * return this;
     * }
     * ```
     * The mangled name `__ct__6ClientFv` decodes to `Client::Client(void)` - a default constructor. The GP offset -31580 (0x84a4) resolves to the `operator new` function. The class appears to be only 4 bytes with a single pointer/int field initialized to zero.
     */
halt_baddata();
}
