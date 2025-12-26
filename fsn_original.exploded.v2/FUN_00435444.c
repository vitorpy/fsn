/**
 * FUN_00435444
 *
 * Extracted from fsn.c lines 73508-73546
 * Ghidra address: 0x00435444
 * Category: Other
 */

void FUN_00435444(undefined4 *param_1)

{
  int unaff_gp;
  
  if ((param_1 != (undefined4 *)0x0) ||
     (param_1 = (undefined4 *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(0x6c), param_1 != (undefined4 *)0x0)
     ) {
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
     * BADDATA ANALYSIS (from binary @ 0x00435444):
     * Function: FUN_00435444
     *
     * Looking at this assembly:
     * 1. **What it does**: Zeroes multiple fields in a structure at offsets 32-52, 80, and (base+t6)+80-92. Then stores float constants 100.0f (0x42c8) at offsets 64/68, 50.0f (0x4248) at offsets 72/76, 0.0f at offsets 56/60, integer 5 at offset 100, and 0 at offset 104. Returns the structure pointer.
     * 2. **C pseudocode**:
     * ```c
     * // Initialize structure fields (a0 = struct pointer, t6 = offset for secondary base)
     * struct_ptr->field_32 = 0;
     * struct_ptr->field_36 = 0;
     * struct_ptr->field_40 = 0;
     * struct_ptr->field_44 = 0;
     * struct_ptr->field_48 = 0;
     * struct_ptr->field_52 = 0;
     * struct_ptr->field_80 = 0;
     * // Secondary offset writes (base + t6)
     * char *secondary = (char*)struct_ptr + t6;
     * ((int*)(secondary))[20] = 0;  // +80
     * ((int*)(secondary))[21] = 0;  // +84
     * ((int*)(secondary))[22] = 0;  // +88
     * ((int*)(secondary))[23] = 0;  // +92
     * struct_ptr->float_56 = 0.0f;
     * struct_ptr->float_60 = 0.0f;
     * struct_ptr->float_64 = 100.0f;
     * struct_ptr->float_68 = 100.0f;
     * struct_ptr->float_72 = 50.0f;
     * struct_ptr->float_76 = 50.0f;
     * struct_ptr->int_100 = 5;
     * struct_ptr->int_104 = 0;
     * return struct_ptr;
     * ```
     * This appears to be initializing a view/camera structure with default dimensions (100x100) and some kind of bounds (50x50), with a type/mode field set to 5.
     */
halt_baddata();
}
