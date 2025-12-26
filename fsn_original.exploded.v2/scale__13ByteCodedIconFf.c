/**
 * scale__13ByteCodedIconFf
 *
 * Extracted from fsn.c lines 73445-73461
 * Category: Other
 */

void scale__13ByteCodedIconFf(int param_1,float param_2)

{
  param_1->_field_20 /* was: *(float *)(param_1 + 0x20) */ = param_1->_field_20 /* was: *(float *)(param_1 + 0x20) */ * param_2;
  param_1->_field_24 /* was: *(float *)(param_1 + 0x24) */ = param_1->_field_24 /* was: *(float *)(param_1 + 0x24) */ * param_2;
  param_1->child_center /* was: *(float *)(param_1 + 0x28) */ = param_1->child_center /* was: *(float *)(param_1 + 0x28) */ * param_2;
  param_1->child_left /* was: *(float *)(param_1 + 0x2c) */ = param_1->child_left /* was: *(float *)(param_1 + 0x2c) */ * param_2;
  param_1->child_right /* was: *(float *)(param_1 + 0x30) */ = param_1->child_right /* was: *(float *)(param_1 + 0x30) */ * param_2;
  param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ = param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ * param_2;
  param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ = param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ * param_2;
  param_1->height /* was: *(float *)(param_1 + 0x3c) */ = param_1->height /* was: *(float *)(param_1 + 0x3c) */ * param_2;
  param_1->_field_40 /* was: *(float *)(param_1 + 0x40) */ = param_1->_field_40 /* was: *(float *)(param_1 + 0x40) */ * param_2;
  param_1->flags /* was: *(float *)(param_1 + 0x44) */ = param_1->flags /* was: *(float *)(param_1 + 0x44) */ * param_2;
  param_1->bound_min_x /* was: *(float *)(param_1 + 0x48) */ = param_1->bound_min_x /* was: *(float *)(param_1 + 0x48) */ * param_2;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004353a0):
     * Function: scale__13ByteCodedIconFf
     *
     * **What it does:**
     * Multiplies 12 consecutive floats at offsets 0x24-0x4C (36-76) of the ByteCodedIcon structure by the scale factor in $f12 (argument `f`). This scales the icon's geometry data in place.
     * **C equivalent:**
     * ```c
     * void ByteCodedIcon::scale(float f) {
     * // ... earlier code before halt_baddata ...
     * // Scale 12 floats at offsets 36-76 (likely bounding box or vertex data)
     * float *data = (float *)((char *)this + 36);
     * for (int i = 0; i < 12; i++) {
     * data[i] *= f;
     * }
     * }
     * ```
     * Or unrolled as the assembly shows:
     * ```c
     * this->field_0x24 *= f;  // offset 36
     * this->field_0x28 *= f;  // offset 40
     * this->field_0x2c *= f;  // offset 44
     * this->field_0x30 *= f;  // offset 48
     * this->field_0x34 *= f;  // offset 52
     * this->field_0x38 *= f;  // offset 56
     * this->field_0x3c *= f;  // offset 60
     * this->field_0x40 *= f;  // offset 64
     * this->field_0x44 *= f;  // offset 68
     * this->field_0x48 *= f;  // offset 72
     * this->field_0x4c *= f;  // offset 76
     * ```
     * Note: The assembly uses pipelined load/multiply/store to maximize throughput - loads are interleaved with multiplies and stores from previous iterations.
     */
halt_baddata();
}
