/**
 * FUN_00435034
 *
 * Extracted from fsn.c lines 73290-73342
 * Ghidra address: 0x00435034
 * Category: Other
 */

void FUN_00435034(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(100), param_1 == (undefined1 *)0x0))
  {
        /*
     * BADDATA ANALYSIS (from binary @ 0x00435034):
     * Function: FUN_00435034
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Constructor for ByteCodedIcon class. If input ptr (a0) is NULL, allocates 100 bytes via malloc (GP-31580). Initializes object: stores RuleInfo ptr at offset 20, zeros bytes 0-4, stores -136 at offset 8, -127 at offset 12, zero at offset 16, and a global vtable/ptr from GP-30224 at offset 96.
     * **C pseudocode:**
     * ```c
     * ByteCodedIcon* ByteCodedIcon_ctor(ByteCodedIcon* this, RuleInfo* ruleInfo) {
     * if (this == NULL) {
     * this = (ByteCodedIcon*)malloc(100);
     * if (this == NULL) return NULL;
     * }
     * this->ruleInfo = ruleInfo;           // offset 20
     * this->flags[0] = 0;                  // offsets 0-4 (5 bytes zeroed)
     * this->flags[1] = 0;
     * this->flags[2] = 0;
     * this->flags[3] = 0;
     * this->flags[4] = 0;
     * this->field_08 = -136;               // 0xff78
     * this->field_0c = -127;               // 0xff81
     * this->field_10 = 0;
     * this->vtable = g_ByteCodedIcon_vtbl; // offset 96, from GP-30224
     * // continues processing ruleInfo->field_0x20...
     * return this;
     * }
     * ```
     */
halt_baddata();
  }
  uVar1 = __vtbl__13ByteCodedIcon /* was: *(undefined4 *)(unaff_gp + -0x7610) */ /* -> __vtbl__13ByteCodedIcon */;
  param_1->child_count /* was: *(int *)(param_1 + 0x14) */ = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffff78;
  param_1->file_count /* was: *(undefined4 *)(param_1 + 0xc) */ = 0xffffff81;
  param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */ = 0;
  param_1->_field_60 /* was: *(undefined4 *)(param_1 + 0x60) */ = uVar1;
  if (param_2->_field_20 /* was: *(int *)(param_2 + 0x20) */ == 0) {
    param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */ = 0;
    uVar1 = param_2->_field_24 /* was: *(undefined4 *)(param_2 + 0x24) */;
  }
  else {
    uVar1 = /* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(param_2->_field_20 /* was: *(int *)(param_2 + 0x20) */);
    param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */ = uVar1;
    /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)
              (param_2->_field_1c /* was: *(undefined4 *)(param_2 + 0x1c) */,uVar1,param_2->_field_20 /* was: *(undefined4 *)(param_2 + 0x20) */);
    uVar1 = param_2->_field_24 /* was: *(undefined4 *)(param_2 + 0x24) */;
  }
  param_1->_field_1c /* was: *(undefined4 *)(param_1 + 0x1c) */ = uVar1;
  param_1->child_left /* was: *(undefined4 *)(param_1 + 0x2c) */ = 0;
  param_1->child_center /* was: *(undefined4 *)(param_1 + 0x28) */ = 0;
  param_1->_field_24 /* was: *(undefined4 *)(param_1 + 0x24) */ = 0;
  param_1->height /* was: *(undefined4 *)(param_1 + 0x3c) */ = 0;
  param_1->pos_y /* was: *(undefined4 *)(param_1 + 0x38) */ = 0;
  param_1->child_right /* was: *(undefined4 *)(param_1 + 0x30) */ = 0;
  param_1->offset_x /* was: *(undefined4 *)(param_1 + 0x4c) */ = 0;
  param_1->flags /* was: *(undefined4 *)(param_1 + 0x44) */ = 0;
  param_1->_field_40 /* was: *(undefined4 *)(param_1 + 0x40) */ = 0;
  param_1->scale /* was: *(undefined4 *)(param_1 + 0x58) */ = 0;
  param_1->_field_54 /* was: *(undefined4 *)(param_1 + 0x54) */ = 0;
  param_1->offset_y /* was: *(undefined4 *)(param_1 + 0x50) */ = 0;
  param_1->_field_5c /* was: *(undefined4 *)(param_1 + 0x5c) */ = 0x3f800000;
  param_1->bound_min_x /* was: *(undefined4 *)(param_1 + 0x48) */ = 0x3f800000;
  param_1->pos_x /* was: *(undefined4 *)(param_1 + 0x34) */ = 0x3f800000;
  param_1->_field_20 /* was: *(undefined4 *)(param_1 + 0x20) */ = 0x3f800000;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00435034):
     * Function: FUN_00435034
     *
     * Looking at this assembly:
     * 1. **What it does:** Stores a function result at offset 24, calls a function via GP-indirect (likely strdup or similar) with args from s0+28,32, then initializes a 4x3 matrix at offsets 24-92 of a3 to identity-like values (zeros with 1.0f at specific positions).
     * 2. **C pseudocode:**
     * ```c
     * a3->field_18 = v0;                    // offset 24
     * a3->field_1c = strdup(s0->field_1c, v0, s0->field_20);  // GP call at -32356
     * // ... or on branch-not-taken path:
     * a3->field_18 = 0;
     * a3->field_1c = s0->field_24;          // offset 28 = field from s0+36
     * // Initialize 4x3 transform matrix to identity-ish:
     * // Row 0 (offsets 36,40,44): {0, 0, 0}
     * // Row 1 (offsets 48,56,60): {0, 0, 0}
     * // Row 2 (offsets 64,68,76): {0, 0, 0}
     * // Row 3 (offsets 80,84,88): {0, 0, 0}
     * // Plus 1.0f at offsets 72 and 92
     * float zero = 0.0f, one = 1.0f;
     * a3->matrix[0..11] = 0.0f;  // offsets 36-88
     * a3->scale_x = 1.0f;        // offset 72
     * a3->scale_y = 1.0f;        // offset 92
     * ```
     * The GP-indirect call at offset -32356 (0x819c) is likely `strdup` or a string copy function. The matrix initialization pattern (mostly zeros with 1.0f at diagonal-like positions) suggests initializing a transform/scale matrix for the ByteCodedIcon.
     */
halt_baddata();
}
