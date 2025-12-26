/**
 * __ct__13ByteCodedIconFP8RuleInfo
 *
 * Extracted from fsn.c lines 73235-73284
 * Category: Other
 */

void __ct__13ByteCodedIconFP8RuleInfo(undefined1 *param_1,int param_2)

{
  void *__dest;
  undefined4 uVar1;
  
  if ((param_1 == (undefined1 *)0x0) &&
     (param_1 = (undefined1 *)__nw__FUi(100), param_1 == (undefined1 *)0x0)) {
        /*
     * BADDATA ANALYSIS (from binary @ 0x00435028):
     * Function: __ct__13ByteCodedIconFP8RuleInfo
     *
     * ## Analysis
     * **What it does:**
     * Constructor for ByteCodedIcon class. If `this` (a0) is NULL, allocates 100 bytes via malloc (GP offset -31580). Initializes the object: stores RuleInfo pointer at offset 20, zeros bytes 0-4, sets offset 8 to -136 (0xff78), offset 12 to -127 (0xff81), offset 16 to 0, and copies a vtable pointer from GP-30224 to offset 96.
     * **C pseudocode:**
     * ```c
     * ByteCodedIcon* ByteCodedIcon_ctor(ByteCodedIcon* this, RuleInfo* ruleInfo) {
     * if (this == NULL) {
     * this = (ByteCodedIcon*)malloc(100);
     * if (this == NULL) return NULL;
     * }
     * this->ruleInfo = ruleInfo;           // offset 20
     * this->flags[0] = 0;                  // offsets 0-4 (5 bytes)
     * this->flags[1] = 0;
     * this->flags[2] = 0;
     * this->flags[3] = 0;
     * this->flags[4] = 0;
     * this->field_8 = -136;                // 0xffffff78
     * this->field_c = -127;                // 0xffffff81
     * this->field_10 = 0;
     * this->vtable = ByteCodedIcon_vtable; // offset 96, from GP-30224
     * // ... continues
     * return this;
     * }
     * ```
     */
halt_baddata();
  }
  param_1->child_count /* was: *(int *)(param_1 + 0x14) */ = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffff78;
  param_1->file_count /* was: *(undefined4 *)(param_1 + 0xc) */ = 0xffffff81;
  param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */ = 0;
  param_1->_field_60 /* was: *(undefined **)(param_1 + 0x60) */ = &__vtbl__13ByteCodedIcon;
  if (param_2->_field_20 /* was: *(int *)(param_2 + 0x20) */ == 0) {
    param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */ = 0;
    uVar1 = param_2->_field_24 /* was: *(undefined4 *)(param_2 + 0x24) */;
  }
  else {
    __dest = (void *)__nw__FUi(param_2->_field_20 /* was: *(int *)(param_2 + 0x20) */);
    param_1->child_array /* was: *(void **)(param_1 + 0x18) */ = __dest;
    bcopy(param_2->_field_1c /* was: *(void **)(param_2 + 0x1c) */,__dest,param_2->_field_20 /* was: *(size_t *)(param_2 + 0x20) */);
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
     * BADDATA ANALYSIS (from binary @ 0x00435028):
     * Function: __ct__13ByteCodedIconFP8RuleInfo
     *
     * ## Analysis
     * **What it does:**
     * Stores a result at a3+24, calls a function via GP lookup (likely strdup or similar) with args from s0, then initializes a3 as a ByteCodedIcon structure: stores t9 at offset 28, and zeros out 12 float fields (offsets 24-88) except sets some to 1.0f.
     * **C pseudocode:**
     * ```c
     * a3->field_18 = result;                    // offset 24
     * a3->field_1c = strdup(s0->field_1c, result, s0->field_20);  // offset 28 = s0->field_24
     * // or branch skips to: a3->field_18 = NULL;
     * a3->field_1c = s0->field_24;              // offset 28
     * // Initialize transform/color floats to 0.0f
     * a3->scale_x = 0.0f;      // +36
     * a3->scale_y = 0.0f;      // +40
     * a3->scale_z = 0.0f;      // +44
     * a3->pos_x = 0.0f;        // +48
     * a3->rot_x = 0.0f;        // +56
     * a3->rot_y = 0.0f;        // +60
     * a3->rot_z = 0.0f;        // +64
     * a3->color_r = 0.0f;      // +68
     * a3->color_g = 0.0f;      // +76
     * a3->color_b = 0.0f;      // +80
     * a3->color_a = 0.0f;      // +84
     * a3->alpha = 0.0f;        // +88
     * // Note: $f2 loaded with 1.0f (0x3f800000) but not stored in this snippet
     * ```
     * **Structure hint:** ByteCodedIcon appears to have transform (scale/position/rotation) and color fields as floats starting at offset +36.
     */
halt_baddata();
}
