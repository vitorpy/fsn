/**
 * FUN_0043551c
 *
 * Extracted from fsn.c lines 73571-73587
 * Ghidra address: 0x0043551c
 * Category: Other
 */

void FUN_0043551c(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(0x14), param_1 != (undefined4 *)0x0)
     ) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043551c):
     * Function: FUN_0043551c
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * This is a C++ constructor `ConvertInfo::ConvertInfo()`. If `this` (a0) is NULL, it allocates 20 bytes via `__builtin_new` (GP offset -31580). Then it zero-initializes 5 consecutive 32-bit fields (offsets 0, 4, 8, 12, 16). Returns the object pointer.
     * 2. **C pseudocode:**
     * ```c
     * ConvertInfo *ConvertInfo_ctor(ConvertInfo *this) {
     * if (this == NULL) {
     * this = (ConvertInfo *)malloc(20);  /* __builtin_new */
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
     * ```
     * The mangled name `__ct__11ConvertInfoFv` decodes to: constructor (`__ct`) of class `ConvertInfo` (11 chars) taking void (`Fv`). The struct is 20 bytes with 5 int/pointer fields, all initialized to zero.
     */
halt_baddata();
}
