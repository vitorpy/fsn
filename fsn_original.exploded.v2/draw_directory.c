/**
 * draw_directory
 *
 * Extracted from fsn.c lines 62710-62785
 * Category: Graphics
 */

void draw_directory(ulonglong param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint extraout_var;
  double dVar5;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  if (param_2->render_flags /* was: *(int *)(param_2 + 0x74) */ << 3 < 0) {
    uStack_18 = 0xbd4ccccd;
    if ((((param_2->render_flags /* was: *(uint *)(param_2 + 0x74) */ >> 0x1e & curcontextflag) != 0) ||
        ((int)(param_2->render_flags /* was: *(uint *)(param_2 + 0x74) */ << 2) < 0)) || ((param_2->render_flags /* was: *(ushort *)(param_2 + 0x74) */ & 1) != 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00424250):
     * Function: draw_directory
     *
     * Looking at this assembly:
     * **What it does:**
     * 1. Standard MIPS PIC function prologue - sets up GP, allocates 240 bytes stack, saves ra/gp/s0-s3 and f20-f29
     * 2. Loads dir->flags (offset 0x74), shifts left by 3 to isolate bit 28 (0x10000000)
     * 3. If bit 28 is SET (negative after shift), continues; if CLEAR, branches to 0x4250bc (near function end)
     * 4. Loads curcontext pointer and a float constant (likely a drawing threshold or scale)
     * **C pseudocode:**
     * ```c
     * void draw_directory(DirNode *dir, int param2) {
     * // Check if directory is visible/expanded (bit 28 of flags)
     * if (!(dir->flags & 0x10000000)) {
     * goto epilogue;  // Skip drawing if not visible
     * }
     * Context *ctx = curcontext;
     * float threshold = CONST_BB24;  // loaded from .rodata at gp-17628
     * // ... rest of drawing code follows
     * }
     * ```
     * The bit 28 check (0x10000000) is likely a "visible" or "expanded" flag - if not set, the function skips all drawing and returns early. This is a common optimization to avoid drawing collapsed/hidden directories.
     */
halt_baddata();
    }
    uStack_c = uStack_18;
    if (param_2->depth_indicator /* was: *(short *)(param_2 + 0x76) */ < 0) {
      pushmatrix();
      FUN_00427a3c(param_1 & 0xffffffff00000000,
                   (double)maxy * (double)((ulonglong)extraout_var << 0x20));
      popmatrix();
    }
    iVar1 = param_2->child_count /* was: *(int *)(param_2 + 0x14) */;
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(param_2->child_array /* was: *(int *)(param_2 + 0x18) */ + iVar4);
        if (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 3 < 0) {
          FUN_0042425c(iVar3,param_3);
          pushname((int)iVar3->name_index /* was: *(short *)(iVar3 + 0x5e) */);
          uVar2 = DAT_10017608;
          if ((-1 < iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 2) &&
             (uVar2 = DAT_1001760c, iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 0xd < 0)) {
            uVar2 = DAT_100175f8;
          }
          cpack(uVar2);
          dVar5 = (double)param_2->pos_x /* was: *(float *)(param_2 + 0x34) */ + (double)iVar3->offset_x /* was: *(float *)(iVar3 + 0x4c) */;
          fStack_14 = (float)dVar5;
          fStack_10 = param_2->pos_y /* was: *(float *)(param_2 + 0x38) */ + iVar3->offset_y /* was: *(float *)(iVar3 + 0x50) */;
          uStack_20 = iVar3->pos_x /* was: *(undefined4 *)(iVar3 + 0x34) */;
          fStack_1c = (float)((double)iVar3->pos_y /* was: *(float *)(iVar3 + 0x38) */ -
                             (double)iVar3->height /* was: *(float *)(iVar3 + 0x3c) */ /
                             (double)((ulonglong)dVar5 & 0xffffffff00000000));
          if (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 2 < 0) {
            linewidth(3);
          }
          bgnline();
          v3f(&fStack_14);
          v3f(&uStack_20);
          endline();
          if (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 2 < 0) {
            linewidth(1);
          }
          if ((param_3 == '\0') &&
             ((param_2->render_flags /* was: *(int *)(param_2 + 0x74) */ << 2 < 0 || (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 2 < 0)))) {
                    // WARNING: Bad instruction - Truncating control flow here
                /*
     * BADDATA ANALYSIS (from binary @ 0x00424250):
     * Function: draw_directory
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Compares a float value (at offset 36 from s1) against zero. If positive, checks a flags field (offset 116), and if bit 29 is set, loads a global pointer. Calls a function via GP-31052 with args (a0=current, a1=0, a2=a3).
     * **C pseudocode:**
     * ```c
     * float val = node->field_0x24;  // offset 36
     * if ((double)val > 0.0) {
     * int flags = node->flags;  // offset 116
     * if (flags & 0x20000000) {  // bit 29 set (sll by 2, then bgez checks sign)
     * arg = some_global;
     * }
     * // GP-31052 is likely draw_child_node or similar
     * draw_func(current_node, 0, arg);
     * }
     * ```
     * **GP offset -31052 (0x86b4):** Check your GP_MAPPING.md - likely `draw_child_node` or `draw_directory_entry` based on context.
     * **Note on bit test:** `sll t1,t9,0x2` followed by `bgez` tests if bit 29 of t9 is set (shifting left by 2 puts bit 29 into the sign position).
     */
halt_baddata();
          }
          popname();
          iVar1 = param_2->child_count /* was: *(int *)(param_2 + 0x14) */;
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < iVar1 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00424250):
     * Function: draw_directory
     *
     * Looking at this assembly:
     * **What it does:**
     * Calculates 3D coordinates for drawing. Loads floats from s0 (directory struct) and s1 (context), performs double-precision additions, then divides one field by 2.0 to compute a midpoint. Stores results to stack variables at sp+208, sp+212, sp+220, sp+224.
     * **C pseudocode:**
     * ```c
     * float x = dir->field_0x34;                           // sp+208 (offset 52)
     * float y = dir->field_0x38 - (dir->field_0x3c / 2.0f); // sp+212 (offset 56, 60)
     * float z1 = context->field_0x30 + dir->field_0x4c;    // sp+220 (offset 48, 76)
     * float z2 = dir->field_0x50 + context->field_0x38;    // sp+224 (offset 80, 56)
     * int flags = dir->field_0x74;                         // offset 116
     * ```
     * Note: The `lui at,0x4000` + `mtc1 at,$f7` + `mtc1 zero,$f6` loads 2.0 into $f6:$f7 as a double (0x4000000000000000 = 2.0 in IEEE 754 double).
     */
halt_baddata();
}
