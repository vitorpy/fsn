/**
 * FUN_00435a28
 *
 * Extracted from fsn.c lines 75269-76597
 * Ghidra address: 0x00435a28
 * Category: Other
 */

void FUN_00435a28(float *param_1,char *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  char *pcVar15;
  int iVar16;
  float fVar17;
  code *pcVar18;
  int unaff_gp;
  uint in_fcsr;
  undefined1 auStack_197c [136];
  undefined1 auStack_18f4 [272];
  float *local_17e4;
  float local_17e0;
  ushort local_17dc;
  byte local_17d9;
  float local_17d8;
  short local_17d4;
  byte local_17d1;
  float local_17d0;
  int local_17cc;
  float local_17c8;
  float local_17c4;
  float local_17bc [511];
  float local_fc0;
  float local_fbc;
  float local_fb8;
  float local_fb4;
  float local_fa8 [1002];
  
  local_17cc = 0;
  cVar8 = *param_2;
  pfVar13 = local_fa8;
  iVar16 = 0;
  fVar17 = local_fc0;
  pcVar15 = param_2;
joined_r0x00435ac4:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while( true ) {
                                    while( true ) {
                                      while( true ) {
                                        while( true ) {
                                          while( true ) {
                                            while( true ) {
                                              while( true ) {
                                                while( true ) {
                                                  while( true ) {
                                                    while( true ) {
                                                      while( true ) {
                                                        while( true ) {
                                                          while( true ) {
                                                            while( true ) {
                                                              while( true ) {
                                                                while( true ) {
                                                                  while( true ) {
                                                                    while( true ) {
                                                                      while( true ) {
                                                                        while( true ) {
                                                                          while( true ) {
                                                                            while( true ) {
                                                                              while( true ) {
                                                                                while( true ) {
                                                                                  while( true ) {
                                                                                    while( true ) {
                                                                                      while( true )
                                                                                      {
                                                                                        while( true 
                                                  ) {
                                                    while( true ) {
                                                      while( true ) {
                                                        while( true ) {
                                                          while( true ) {
                                                            while( true ) {
                                                              while( true ) {
                                                                while( true ) {
                                                                  while( true ) {
                                                                    while( true ) {
                                                                      while( true ) {
                                                                        if (cVar8 == '\x1b') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                              /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this function prologue:
     * **What it does:**
     * Large function (6656 byte stack frame) that saves all callee-saved registers (s0-s7, fp, ra) and 10 FP registers (f20-f29). Initializes f26=1.0f, f24=0.0f, zeros sp+564, loads first byte of arg a1 into s0.
     * **C pseudocode:**
     * ```c
     * void FUN_00435a28(int a0, char *a1, int a2, int a3) {
     * float f26 = 1.0f;
     * float f24 = 0.0f;
     * int local_234 = 0;      // sp+564
     * int s0 = a1[0];         // first char of string
     * // ... rest of function uses these initialized values
     * }
     * ```
     * The 0x3f80 << 16 = 0x3f800000 is IEEE 754 for 1.0f. This looks like a text/string processing or parsing function given it loads the first byte of parameter a1 as a character. The massive stack frame (6656 bytes) suggests local arrays or buffers, possibly for string building or font rendering (common in FSN context).
     */
halt_baddata();
                                                                        }
                                                                        if (cVar8 != '\x1c') break;
                                                                        fVar17 = pfVar13[-1];
                                                                        if (fVar17 == pfVar13[-2]) {
                                                                          pfVar13[-2] = 1.4013e-45;
                                                                        }
                                                                        else {
                                                                          pfVar13[-2] = 0.0;
                                                                        }
                                                                        pfVar13 = pfVar13 + -1;
                                                                        cVar8 = pcVar15[1];
                                                                        pcVar15 = pcVar15 + 1;
                                                                      }
                                                                      if (cVar8 == '\x10') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                            /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly:
     * 1. **What it does**: This is a sparse switch/case dispatch table. Register s0 contains an opcode, and the code branches to different handlers based on comparing s0 against literal values (0, 1, 3, 4, 5, 8, 9, 11, 12, 13, 26, 37, 56, 57, 66, 67).
     * 2. **C pseudocode**:
     * ```c
     * switch (opcode) {  /* s0 = opcode from bytecode stream */
     * case 0:  goto handler_436c88;  /* null/nop? */
     * case 1:  goto handler_436cdc;
     * case 3:  goto handler_436a00;
     * case 4:  goto handler_436b38;
     * case 5:  goto handler_436bdc;
     * case 8:  goto handler_436dd8;
     * case 9:  goto handler_436e44;
     * case 11: goto handler_436ea4;
     * case 12: goto handler_436f10;
     * case 13: goto handler_436f70;
     * case 26: goto handler_436c80;
     * case 37: /* falls through to next comparison block */
     * case 56: goto handler_436d20;
     * case 57: goto handler_436d74;
     * case 66: goto handler_436db8;
     * case 67: goto handler_436dc8;
     * }
     * ```
     * The function name `run__19FileIconInterpreterFPcPvT1` (C++ mangled) tells us this is a bytecode interpreter for file icon rendering - the opcodes likely control drawing primitives, transforms, or conditional rendering for custom file type icons.
     */
halt_baddata();
                                                                      }
                                                                      if (cVar8 != '\x11') break;
                                                                      fVar17 = pfVar13[-1];
                                                                      if (fVar17 == 0.0) {
                                                                        pfVar13[-1] = 1.4013e-45;
                                                                      }
                                                                      else {
                                                                        pfVar13[-1] = 0.0;
                                                                      }
                                                                      cVar8 = pcVar15[1];
                                                                      pcVar15 = pcVar15 + 1;
                                                                    }
                                                                    if (cVar8 == '\"') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                          /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * ## Assembly Analysis
     * **What it does:**
     * 1. First block (435e20-435e58): Compares stack value at s2[-1] with s6. If equal, stores 1 to stack; otherwise stores 0. This is an integer equality comparison opcode.
     * 2. Second block (435e5c-435e94): Loads float from stack at s2[-1], converts to double, compares with f24 (likely 0.0). If equal, stores f26 (likely 1.0); otherwise stores f28 (likely 0.0). This is a float equality comparison opcode.
     * **C pseudocode:**
     * ```c
     * // Integer equality comparison (opcode ~0x1A)
     * case OP_INT_EQ: {
     * int val = stack[--sp];
     * stack[sp++] = (val == s6) ? 1 : 0;  // s6 holds comparison value
     * break;
     * }
     * // Float equality comparison (opcode ~0x1B)
     * case OP_FLOAT_EQ: {
     * float val = fstack[--fsp];
     * fstack[fsp++] = (val == 0.0f) ? 1.0f : 0.0f;  // f24=0.0, f26=1.0, f28=0.0
     * break;
     * }
     * ```
     * **Key registers:**
     * - s2 = stack pointer (grows down, post-incremented after store)
     * - s4 = bytecode instruction pointer (incremented each opcode)
     * - s6 = integer comparison operand
     * - f24 = float comparison value (0.0)
     * - f26/f28 = float true/false constants (1.0/0.0)
     * This is part of a bytecode interpreter's comparison operations - the function name `FileIconInterpreter` confirms this is SGI's icon scripting VM.
     */
halt_baddata();
                                                                    }
                                                                    if (cVar8 != '#') break;
                                                                    fVar17 = pfVar13[-2];
                                                                    if ((int)pfVar13[-1] <
                                                                        (int)fVar17) {
                                                                      pfVar13[-2] = 1.4013e-45;
                                                                    }
                                                                    else {
                                                                      pfVar13[-2] = 0.0;
                                                                    }
                                                                    pfVar13 = pfVar13 + -1;
                                                                    cVar8 = pcVar15[1];
                                                                    pcVar15 = pcVar15 + 1;
                                                                  }
                                                                  if (cVar8 == '\x1f') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Two comparison operations for a stack-based interpreter. First block (43601c-436060): integer less-than comparison of two stack values, pushes 1 if true, 0 if false. Second block (436064-436090): floating-point less-than-or-equal comparison, pushes f26 (likely 1.0) if true, f28 (likely 0.0) if false.
     * **2. C pseudocode:**
     * ```c
     * // Integer less-than: op_ilt (at 0x43601c)
     * {
     * int b = stack[-1];  // s3 from s2-4
     * int a = stack[-2];  // s6 from s2-8
     * pc++;               // s4++
     * stack -= 2;         // pop both operands
     * if (a < b) {
     * *stack = 1;
     * } else {
     * *stack = 0;
     * }
     * stack++;            // push result
     * opcode = *pc;
     * goto dispatch;
     * }
     * // Float less-or-equal: op_fle (at 0x436064)
     * {
     * float b = fstack[-1];  // f22 from s2-4
     * float a = fstack[-2];  // f20 from s2-8
     * pc++;
     * stack -= 2;
     * if (a <= b) {
     * *(float*)stack = f26;  // true constant (1.0f)
     * } else {
     * *(float*)stack = f28;  // false constant (0.0f)
     * }
     * stack++;
     * // continues to next opcode
     * }
     * ```
     * This is part of a bytecode interpreter (FileIconInterpreter) with s2 as stack pointer, s4 as program counter, and s0 as scratch register. The `li at,27` appears to be a dispatch table marker or next opcode hint.
     */
halt_baddata();
                                                                  }
                                                                  if (cVar8 != ' ') break;
                                                                  fVar17 = pfVar13[-2];
                                                                  if ((int)fVar17 < (int)pfVar13[-1]
                                                                     ) {
                                                                    pfVar13[-2] = 0.0;
                                                                  }
                                                                  else {
                                                                    pfVar13[-2] = 1.4013e-45;
                                                                  }
                                                                  pfVar13 = pfVar13 + -1;
                                                                  cVar8 = pcVar15[1];
                                                                  pcVar15 = pcVar15 + 1;
                                                                }
                                                                if (cVar8 == '.') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                      /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly, I can see three stack-machine operations for a bytecode interpreter:
     * ## What it does:
     * 1. **0x436218-0x436230**: Store float $f10 to stack, advance stack ptr, fetch next opcode (likely "store float" op)
     * 2. **0x436234-0x436260**: Pop two ints, multiply them (multu), push result (integer multiply op)
     * 3. **0x436264-0x43628c**: Pop two floats, divide f20/f22, push result (float divide op)
     * ## C pseudocode:
     * ```c
     * // Opcode: Store float to stack (after some computation left result in $f10)
     * case OP_STORE_FLOAT:
     * *stack_ptr++ = f10_result;
     * opcode = *pc++;
     * break;
     * // Opcode: Integer multiply (pops 2, pushes 1)
     * case OP_MUL_INT:
     * int b = *--stack_ptr;  // s3 = top
     * int a = *--stack_ptr;  // s6 = second
     * *stack_ptr++ = a * b;
     * opcode = *pc++;
     * break;
     * // Opcode: Float divide (pops 2, pushes 1)
     * case OP_DIV_FLOAT:
     * float b = *--stack_ptr;  // f22 = top
     * float a = *--stack_ptr;  // f20 = second
     * *stack_ptr++ = a / b;
     * opcode = *pc++;
     * break;
     * ```
     * Registers: s2=stack pointer, s4=program counter (bytecode), s0=current opcode. All ops branch back to 0x435ac4 (main dispatch loop) with $at=27 (number of opcodes in switch table).
     */
halt_baddata();
                                                                }
                                                                if (cVar8 != '/') break;
                                                                fVar17 = pfVar13[-2];
                                                                if ((int)fVar17 < (int)pfVar13[-1])
                                                                {
                                                                  pfVar13[-2] = 1.4013e-45;
                                                                }
                                                                else {
                                                                  pfVar13[-2] = 0.0;
                                                                }
                                                                pfVar13 = pfVar13 + -1;
                                                                cVar8 = pcVar15[1];
                                                                pcVar15 = pcVar15 + 1;
                                                              }
                                                              if (cVar8 == '&') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                    /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly:
     * **1. What it does:**
     * This is a stack-based bytecode interpreter. The first block (436414-436440) implements bitwise AND of two stack values. The second block (436444-436488) calls a float function (likely `fsqrt` at gp-30588) twice on two stack floats, then ORs the integer results together (likely for NaN/infinity checking).
     * **2. C pseudocode:**
     * ```c
     * // Block 1: Bitwise AND opcode (opcode 0x1b = 27)
     * case 27: {
     * int32_t a = stack[-1];
     * int32_t b = stack[-2];
     * stack -= 2;
     * stack[0] = a & b;
     * stack++;
     * opcode = *++pc;
     * break;
     * }
     * // Block 2: Float sqrt + OR check (likely magnitude/validity check)
     * case ??: {
     * float y = *(float*)(stack - 1);
     * float x = *(float*)(stack - 2);
     * stack -= 2;
     * int r1 = __isnanf_or_class(y);  // gp-30588, likely fpclass or isnan
     * int r2 = __isnanf_or_class(x);
     * int combined = r1 | r2;
     * // result in $f10 as float bits
     * stack++;
     * break;
     * }
     * ```
     * The gp-30588 call pattern (called twice on floats, results ORed) suggests `__isnanf()` or `fpclass()` checking if either operand is invalid before a math operation.
     */
halt_baddata();
                                                              }
                                                              if (cVar8 != '\'') break;
                                                              fVar17 = pfVar13[-2];
                                                              if ((int)pfVar13[-1] < (int)fVar17) {
                                                                pfVar13[-2] = 0.0;
                                                              }
                                                              else {
                                                                pfVar13[-2] = 1.4013e-45;
                                                              }
                                                              pfVar13 = pfVar13 + -1;
                                                              cVar8 = pcVar15[1];
                                                              pcVar15 = pcVar15 + 1;
                                                            }
                                                            if (cVar8 == '6') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                  /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * This assembly is part of a bytecode interpreter for file icon rendering (the mangled C++ name `run__19FileIconInterpreterFPcPvT1` means `FileIconInterpreter::run(char*, void*, void*)`).
     * **What it does:**
     * 1. First block (436610-43661c): Reads next opcode byte from bytecode stream (s4), resets point count (s5=0), jumps to main dispatch loop
     * 2. Second block (436620-436640): Pops 2 floats from evaluation stack (s2), stores as first point at sp+580/584, sets point count=1, reads next opcode
     * 3. Third block (436644-436684): If point count < 255, pops 2 floats from stack, stores at point_array[s5], increments count, decrements stack
     * **C pseudocode:**
     * ```c
     * // Opcode handler: reset/begin path
     * case OP_BEGIN_PATH:
     * s4++;                           // advance bytecode pointer
     * s5 = 0;                         // reset point count
     * goto dispatch;
     * // Opcode handler: pop first point
     * case OP_POP_FIRST_POINT:
     * points[0].y = stack[-1];        // sp+584 = *(s2-4)
     * points[0].x = stack[-2];        // sp+580 = *(s2-8)
     * s2 -= 8;                        // pop 2 floats from eval stack
     * s4++;
     * s5 = 1;                         // 1 point stored
     * goto dispatch;
     * // Opcode handler: accumulate point
     * case OP_ACCUM_POINT:
     * s4++;
     * if (s5 < 255) {
     * points[s5].x = stack[-2];   // sp+580 + s5*8
     * points[s5].y = stack[-1];   // sp+584 + s5*8
     * s5++;
     * s2 -= 8;
     * }
     * s0 = *s4;                       // read next opcode
     * goto dispatch_27;               // dispatch expecting opcode 27 (0x1b)
     * ```
     * The interpreter uses s2 as a float evaluation stack pointer, s4 as bytecode program counter, s5 as accumulated point count, and builds a polygon/polyline in a local array at sp+580.
     */
halt_baddata();
                                                            }
                                                            if (cVar8 != '7') break;
                                                            fVar17 = pfVar13[-2];
                                                            if (fVar17 == pfVar13[-1]) {
                                                              pfVar13[-2] = 0.0;
                                                            }
                                                            else {
                                                              pfVar13[-2] = 1.4013e-45;
                                                            }
                                                            pfVar13 = pfVar13 + -1;
                                                            cVar8 = pcVar15[1];
                                                            pcVar15 = pcVar15 + 1;
                                                          }
                                                          if (cVar8 != '?') break;
                                                          pfVar13[-2] = pfVar13[-2] + pfVar13[-1];
                                                          cVar8 = pcVar15[1];
                                                          pcVar15 = pcVar15 + 1;
                                                          pfVar13 = pfVar13 + -1;
                                                        }
                                                        if (cVar8 != '@') break;
                                                        fVar17 = pfVar13[-2];
                                                        pfVar13[-2] = (float)((int)fVar17 +
                                                                             (int)pfVar13[-1]);
                                                        cVar8 = pcVar15[1];
                                                        pcVar15 = pcVar15 + 1;
                                                        pfVar13 = pfVar13 + -1;
                                                      }
                                                      if (cVar8 != '0') break;
                                                      pfVar13[-2] = pfVar13[-2] - pfVar13[-1];
                                                      cVar8 = pcVar15[1];
                                                      pcVar15 = pcVar15 + 1;
                                                      pfVar13 = pfVar13 + -1;
                                                    }
                                                    if (cVar8 != '1') break;
                                                    fVar17 = pfVar13[-2];
                                                    pfVar13[-2] = (float)((int)fVar17 -
                                                                         (int)pfVar13[-1]);
                                                    cVar8 = pcVar15[1];
                                                    pcVar15 = pcVar15 + 1;
                                                    pfVar13 = pfVar13 + -1;
                                                  }
                                                  if (cVar8 != 'X') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  pfVar11 = pfVar13 + -2;
                                                  pfVar13 = pfVar13 + -1;
                                                  *pfVar11 = *pfVar12 * *pfVar4;
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != 'Y') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  fVar17 = pfVar13[-2];
                                                  pfVar12 = pfVar13 + -2;
                                                  pfVar13 = pfVar13 + -1;
                                                  *pfVar12 = (float)((int)fVar17 * (int)*pfVar4);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != 'L') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  pfVar11 = pfVar13 + -2;
                                                  pfVar13 = pfVar13 + -1;
                                                  *pfVar11 = *pfVar12 / *pfVar4;
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 == 'M') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly:
     * 1. **What it does:** Increments s4 (bytecode pointer), calls endpolygon(), then loops s5 times calling v2f() on consecutive 8-byte float pairs from stack offset 580, then calls bgnpolygon() and jumps back to main interpreter loop.
     * 2. **C pseudocode:**
     * ```c
     * s4++;                          // advance bytecode pointer
     * endpolygon();                  // close current polygon
     * if (s5 > 0) {                  // s5 = vertex count
     * float *verts = (float*)(sp + 580);  // vertex array on stack
     * for (int i = 0; i < s5; i++) {
     * v2f(verts);            // emit 2D vertex
     * verts += 2;            // next vertex (8 bytes)
     * }
     * }
     * bgnpolygon();                  // start new polygon
     * s5 = 0;                        // reset vertex count
     * goto interpreter_loop;         // back to opcode fetch
     * ```
     * This is part of the FSN bytecode interpreter handling polygon drawing - it finishes one polygon, emits buffered vertices, then starts a new polygon.
     */
halt_baddata();
                                                  }
                                                  if (cVar8 == '3') {
                                                    fVar17 = pfVar13[-2];
                                                    (**(code **)(unaff_gp + -0x777c) /* -> FUN_004355f8 */)(pfVar13[-1]) /* =FUN_004355f8 */;
                                                    (**(code **)(unaff_gp + -0x777c) /* -> FUN_004355f8 */)(fVar17) /* =FUN_004355f8 */;
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly:
     * 1. **What it does:** Converts a float to int with rounding mode manipulation (ctc1/cvt.w.s), calls a function via GP offset -30652, then conditionally calls functions at GP offsets -31924 and -31928 based on s5 value (0, 1, or ≥2), passing float pairs from stack.
     * 2. **C pseudocode:**
     * ```c
     * int rounded_val = (int)(*float_ptr);  // cvt.w.s with rounding mode set
     * s6 = rounded_val;
     * s4++;
     * s1 = 1;
     * func_gp_8844(sp[564]);  // GP offset -30652
     * if (s5 != 0) {
     * if (s5 >= 2) {
     * func_gp_8348(sp[588], sp[592]);  // GP offset -31928: v2f or similar
     * } else {
     * func_gp_834c(sp[580], sp[584]);  // GP offset -31924: v2f or similar
     * }
     * }
     * ```
     * GP offsets -31924 (0x834c) and -31928 (0x8348) are likely `v2f()` or similar IrisGL vertex functions taking 2 floats. The rounding mode manipulation (ori 0x3, xori 0x2) sets round-to-nearest before float-to-int conversion.
     */
halt_baddata();
                                                  }
                                                  if (cVar8 == '4') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly:
     * 1. **What it does:** Converts two floats from stack (sp+2632, sp+2628) to integers using truncation rounding mode (ori 0x3, xori 0x2 sets FCSR to round-toward-zero), then calls a function via GP offset -32008 with those integer args plus a2 from stack.
     * 2. **C pseudocode:**
     * ```c
     * float f20 = *(float*)(s2 - 20);  // lwc1 $f20,-20(s2)
     * s2 -= 20;
     * some_func(f20, f22);  // jalr t9 with $f12=f20, $f14=f22
     * int a7 = (int)*(float*)(sp + 2632);  // cvt.w.s with truncation
     * int t8 = (int)*(float*)(sp + 2628);  // cvt.w.s with truncation
     * int a6 = *(int*)(sp + 2636);
     * gp_func_82f8(f20, f22, a6, a7, t8);  // GP[-32008] call, t8 passed on stack
     * ```
     * The FCSR manipulation (ori 0x3, xori 0x2) temporarily sets rounding mode to truncate-toward-zero for the float-to-int conversions, then restores it. This is typical C cast behavior `(int)float_val`.
     */
halt_baddata();
                                                  }
                                                  if (cVar8 != '\x02') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  fVar14 = *pfVar12;
                                                  pfVar13 = pfVar13 + -1;
                                                  uVar2 = (**(code **)(unaff_gp + -0x777c) /* -> FUN_004355f8 */)(*pfVar4) /* =FUN_004355f8 */
                                                  ;
                                                  uVar3 = (**(code **)(unaff_gp + -0x777c) /* -> FUN_004355f8 */)(fVar14) /* =FUN_004355f8 */;
                                                  *pfVar12 = (float)(int)(uVar3 & uVar2);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x03') break;
                                                  fVar17 = pfVar13[-2];
                                                  pfVar13[-2] = (float)((uint)fVar17 &
                                                                       (uint)pfVar13[-1]);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  pfVar13 = pfVar13 + -1;
                                                  }
                                                  if (cVar8 != ':') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  fVar14 = *pfVar12;
                                                  pfVar13 = pfVar13 + -1;
                                                  uVar2 = (**(code **)(unaff_gp + -0x777c) /* -> FUN_004355f8 */)(*pfVar4) /* =FUN_004355f8 */
                                                  ;
                                                  uVar3 = (**(code **)(unaff_gp + -0x777c) /* -> FUN_004355f8 */)(fVar14) /* =FUN_004355f8 */;
                                                  *pfVar12 = (float)(int)(uVar3 | uVar2);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != ';') break;
                                                  fVar17 = pfVar13[-2];
                                                  pfVar13[-2] = (float)((uint)fVar17 |
                                                                       (uint)pfVar13[-1]);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  pfVar13 = pfVar13 + -1;
                                                  }
                                                  if (cVar8 != '_') break;
                                                  pfVar4 = pfVar13 + -1;
                                                  pfVar12 = pfVar13 + -2;
                                                  fVar14 = *pfVar12;
                                                  pfVar13 = pfVar13 + -1;
                                                  uVar2 = (**(code **)(unaff_gp + -0x777c) /* -> FUN_004355f8 */)(*pfVar4) /* =FUN_004355f8 */
                                                  ;
                                                  uVar3 = (**(code **)(unaff_gp + -0x777c) /* -> FUN_004355f8 */)(fVar14) /* =FUN_004355f8 */;
                                                  *pfVar12 = (float)(int)(uVar3 ^ uVar2);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '`') break;
                                                  fVar17 = pfVar13[-2];
                                                  pfVar13[-2] = (float)((uint)fVar17 ^
                                                                       (uint)pfVar13[-1]);
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  pfVar13 = pfVar13 + -1;
                                                  }
                                                  if (cVar8 != '5') break;
                                                  local_17c8 = pfVar13[-1];
                                                  pcVar15 = pcVar15 + 1;
                                                  local_17c4 = pfVar13[-2];
                                                  pfVar13 = pfVar13 + -2;
                                                  cVar8 = *pcVar15;
                                                  iVar16 = 0;
                                                  }
                                                  if (cVar8 != '\x13') break;
                                                  fVar14 = pfVar13[-2];
                                                  fVar9 = pfVar13[-1];
                                                  pfVar13 = pfVar13 + -2;
                                                  iVar16 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                                  /* TODO: GP:-0x7b44 */ (**(code **)(unaff_gp + -0x7b44) /* -> EXTERNAL_0x0f127fdc */)
                                                            (local_17c4,local_17c8);
                                                  /* TODO: GP:-0x7b3c */ (**(code **)(unaff_gp + -0x7b3c) /* -> EXTERNAL_0x0f125684 */)(fVar14,fVar9);
                                                  cVar8 = pcVar15[1];
                                                  local_17c4 = fVar14;
                                                  local_17c8 = fVar9;
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x0f') break;
                                                  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                    fVar14 = ROUND(pfVar13[-1]);
                                                  }
                                                  else {
                                                    fVar14 = FLOOR(pfVar13[-1]);
                                                  }
                                                  local_17cc = (int)fVar14;
                                                  pfVar13 = pfVar13 + -1;
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\n') break;
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  iVar16 = 0;
                                                  }
                                                  if (cVar8 != 'A') break;
                                                  local_17bc[1] = pfVar13[-1];
                                                  pcVar15 = pcVar15 + 1;
                                                  local_17bc[0] = pfVar13[-2];
                                                  pfVar13 = pfVar13 + -2;
                                                  cVar8 = *pcVar15;
                                                  iVar16 = 1;
                                                  }
                                                  if ((cVar8 != '>') && (cVar8 != ']')) break;
                                                  if (iVar16 < 0xff) {
                                                    local_17bc[iVar16 * 2] = pfVar13[-2];
                                                    pfVar4 = pfVar13 + -1;
                                                    iVar6 = iVar16 * 2;
                                                    iVar16 = iVar16 + 1;
                                                    pfVar13 = pfVar13 + -2;
                                                    local_17bc[iVar6 + 1] = *pfVar4;
                                                  }
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '=') break;
                                                  iVar6 = 1;
                                                  (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                                  if (iVar16 != 0) {
                                                    /* TODO: GP:-0x7cb4 */ (**(code **)(unaff_gp + -0x7cb4) /* -> EXTERNAL_0x0f125dbc */)
                                                              (local_17bc[0],local_17bc[1]);
                                                  }
                                                  pfVar4 = local_17bc;
                                                  if (1 < iVar16) {
                                                    do {
                                                      pfVar4 = pfVar4 + 2;
                                                      /* TODO: GP:-0x7cb8 */ (**(code **)(unaff_gp + -0x7cb8) /* -> EXTERNAL_0x0f1263f8 */)
                                                                (*pfVar4,pfVar4[1]);
                                                      iVar6 = iVar6 + 1;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  /* TODO: GP:-0x7c00 */ (**(code **)(unaff_gp + -0x7c00) /* -> EXTERNAL_0x0f124ff4 */)();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x14') break;
                                                  iVar6 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                                  /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
                                                  pfVar4 = local_17bc;
                                                  if (0 < iVar16) {
                                                    do {
                                                      /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(pfVar4);
                                                      iVar6 = iVar6 + 1;
                                                      pfVar4 = pfVar4 + 2;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x15') break;
                                                  iVar6 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                                  /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
                                                  pfVar4 = local_17bc;
                                                  if (0 < iVar16) {
                                                    do {
                                                      /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(pfVar4);
                                                      iVar6 = iVar6 + 1;
                                                      pfVar4 = pfVar4 + 2;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x18') break;
                                                  iVar6 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                                  /* TODO: GP:-0x7c94 */ (**(code **)(unaff_gp + -0x7c94) /* -> EXTERNAL_0x0f124280 */)();
                                                  pfVar4 = local_17bc;
                                                  if (0 < iVar16) {
                                                    do {
                                                      /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(pfVar4);
                                                      iVar6 = iVar6 + 1;
                                                      pfVar4 = pfVar4 + 2;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  (**(code **)(unaff_gp + -32000) /* -> EXTERNAL_0x0f124b5c */)();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                  }
                                                  if (cVar8 != '\x19') break;
                                                  iVar6 = 0;
                                                  (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                                  /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
                                                  pfVar4 = local_17bc;
                                                  if (0 < iVar16) {
                                                    do {
                                                      /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(pfVar4);
                                                      iVar6 = iVar6 + 1;
                                                      pfVar4 = pfVar4 + 2;
                                                    } while (iVar6 != iVar16);
                                                  }
                                                  iVar16 = 0;
                                                  /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
                                                  cVar8 = pcVar15[1];
                                                  pcVar15 = pcVar15 + 1;
                                                }
                                                if (cVar8 != '\x17') break;
                                                if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                  fVar17 = ROUND(pfVar13[-1]);
                                                }
                                                else {
                                                  fVar17 = FLOOR(pfVar13[-1]);
                                                }
                                                fVar17 = (float)(int)fVar17;
                                                pfVar13 = pfVar13 + -1;
                                                iVar6 = 0;
                                                (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                                /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
                                                pfVar4 = local_17bc;
                                                if (0 < iVar16) {
                                                  do {
                                                    /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(pfVar4);
                                                    iVar6 = iVar6 + 1;
                                                    pfVar4 = pfVar4 + 2;
                                                  } while (iVar6 != iVar16);
                                                }
                                                iVar6 = 0;
                                                /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
                                                (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(fVar17) /* =FUN_004341fc */;
                                                /* TODO: GP:-0x7d24 */ (**(code **)(unaff_gp + -0x7d24) /* -> EXTERNAL_0x0f124088 */)();
                                                pfVar4 = local_17bc;
                                                if (0 < iVar16) {
                                                  do {
                                                    /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(pfVar4);
                                                    iVar6 = iVar6 + 1;
                                                    pfVar4 = pfVar4 + 2;
                                                  } while (iVar6 != iVar16);
                                                }
                                                iVar16 = 0;
                                                /* TODO: GP:-0x7d20 */ (**(code **)(unaff_gp + -0x7d20) /* -> EXTERNAL_0x0f124718 */)();
                                                cVar8 = pcVar15[1];
                                                pcVar15 = pcVar15 + 1;
                                              }
                                              if (cVar8 != '\a') break;
                                              pfVar13 = pfVar13 + -1;
                                              if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                fVar17 = ROUND(*pfVar13);
                                              }
                                              else {
                                                fVar17 = FLOOR(*pfVar13);
                                              }
                                              fVar17 = (float)(int)fVar17;
                                              iVar6 = 1;
                                              (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                              if (iVar16 != 0) {
                                                /* TODO: GP:-0x7cb4 */ (**(code **)(unaff_gp + -0x7cb4) /* -> EXTERNAL_0x0f125dbc */)
                                                          (local_17bc[0],local_17bc[1]);
                                              }
                                              pfVar4 = local_17bc;
                                              if (1 < iVar16) {
                                                do {
                                                  pfVar4 = pfVar4 + 2;
                                                  /* TODO: GP:-0x7cb8 */ (**(code **)(unaff_gp + -0x7cb8) /* -> EXTERNAL_0x0f1263f8 */)
                                                            (*pfVar4,pfVar4[1]);
                                                  iVar6 = iVar6 + 1;
                                                } while (iVar6 != iVar16);
                                              }
                                              iVar6 = 1;
                                              /* TODO: GP:-0x7c00 */ (**(code **)(unaff_gp + -0x7c00) /* -> EXTERNAL_0x0f124ff4 */)();
                                              (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(fVar17) /* =FUN_004341fc */;
                                              if (iVar16 != 0) {
                                                /* TODO: GP:-0x7b44 */ (**(code **)(unaff_gp + -0x7b44) /* -> EXTERNAL_0x0f127fdc */)
                                                          (local_17bc[0],local_17bc[1]);
                                              }
                                              pfVar4 = local_17bc;
                                              if (1 < iVar16) {
                                                do {
                                                  pfVar4 = pfVar4 + 2;
                                                  /* TODO: GP:-0x7b3c */ (**(code **)(unaff_gp + -0x7b3c) /* -> EXTERNAL_0x0f125684 */)
                                                            (*pfVar4,pfVar4[1]);
                                                  iVar6 = iVar6 + 1;
                                                } while (iVar6 != iVar16);
                                              }
                                              iVar16 = 0;
                                              /* TODO: GP:-0x7b3c */ (**(code **)(unaff_gp + -0x7b3c) /* -> EXTERNAL_0x0f125684 */)
                                                        (local_17bc[0],local_17bc[1]);
                                              cVar8 = pcVar15[1];
                                              pcVar15 = pcVar15 + 1;
                                            }
                                            if (cVar8 != '\x04') break;
                                            local_fbc = pfVar13[-1];
                                            local_fb8 = pfVar13[-2];
                                            local_fb4 = pfVar13[-3];
                                            fVar9 = pfVar13[-4];
                                            fVar14 = pfVar13[-5];
                                            pfVar13 = pfVar13 + -5;
                                            (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                            /* TODO: GP:-0x7d04 */ (**(code **)(unaff_gp + -0x7d04) /* -> EXTERNAL_0x0f1216b8 */)(fVar14,fVar9);
                                            cVar8 = pcVar15[1];
                                            pcVar15 = pcVar15 + 1;
                                          }
                                          if (cVar8 != '\x05') break;
                                          local_fbc = pfVar13[-1];
                                          local_fb8 = pfVar13[-2];
                                          local_fb4 = pfVar13[-3];
                                          fVar9 = pfVar13[-4];
                                          fVar14 = pfVar13[-5];
                                          pfVar13 = pfVar13 + -5;
                                          (**(code **)(unaff_gp + -0x77bc) /* -> FUN_004341fc */)(local_17cc) /* =FUN_004341fc */;
                                          /* TODO: GP:-0x7d08 */ (**(code **)(unaff_gp + -0x7d08) /* -> EXTERNAL_0x0f1216f8 */)(fVar14,fVar9);
                                          cVar8 = pcVar15[1];
                                          pcVar15 = pcVar15 + 1;
                                        }
                                        if (cVar8 == '\x1a') {
                    // WARNING: Bad instruction - Truncating control flow here
                                              /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * ## Analysis
     * **1. What it does:**
     * Byte-by-byte copy of RGB(A) color data from source buffer (s4) to destination (s8). This is part of a bytecode interpreter for file icons - opcode handlers that copy 3-4 byte color values, then advance the instruction pointer and loop back to the main dispatch.
     * **2. C pseudocode:**
     * ```c
     * // Copy RGB bytes from instruction stream to output buffer
     * dest[1] = src[1];
     * dest[2] = src[2];
     * dest[3] = src[3];
     * // Jump to computed address (indexed jump table)
     * src = stack[6660] + stack[560];  // base + offset
     * goto next_opcode;
     * // --- Another handler (at 436e34) ---
     * src += 5;  // skip 5-byte instruction
     * opcode = *src;
     * goto dispatch;  // branch back to 435ac4
     * // --- Handler at 436e44: conditional RGB copy ---
     * if (*(s2 - 4) == 0) {
     * src++;
     * dest[0] = src[1];
     * dest[1] = src[2];
     * dest[2] = src[3];
     * // continues...
     * }
     * ```
     * **Context:** This is `run__19FileIconInterpreterFPcPvT1` - a C++ mangled name meaning `FileIconInterpreter::run(char*, void*, char*)`. It's a bytecode VM that interprets icon drawing commands. The `halt_baddata` markers appear because Ghidra struggles with the computed jumps (switch/case via jump tables) typical in bytecode interpreters. Registers: s4=instruction pointer, s8=output/color buffer, s2=stack/state pointer.
     */
halt_baddata();
                                        }
                                        if (cVar8 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
                                              /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly snippet, this is part of a bytecode interpreter switch case (the `run__19FileIconInterpreterFPcPvT1` in the branch target confirms this).
     * **What it does:**
     * 1. First block (436ffc-437014): Loads a float from s2[-1], stores it to a computed address (stack[6664] + stack offset), reads next opcode, branches back to dispatch loop
     * 2. Second block (437018-437064): Reads 4 bytes from bytecode stream (s4) into a local buffer at s8 (building a 32-bit value byte-by-byte), loads int from s2[-1], stores to computed address, reads next opcode, branches to dispatch
     * 3. Third block (437068+): Another bytecode case starting
     * **C pseudocode:**
     * ```c
     * // Case: Store float to indexed location
     * case OP_STORE_FLOAT_INDEXED:
     * idx = stack_int[sp_offset_6664];
     * dest = base_ptr + idx;
     * *(float*)dest = eval_stack[-1].f;  // s2[-1] as float
     * opcode = *bytecode++;
     * goto dispatch;
     * // Case: Store int to indexed location (with 4-byte immediate offset)
     * case OP_STORE_INT_INDEXED:
     * // Read 4-byte big-endian offset from bytecode
     * offset = (bytecode[1] << 24) | (bytecode[2] << 16) | (bytecode[3] << 8) | bytecode[4];
     * bytecode += 5;
     * idx = stack_int[sp_offset_560];
     * base = stack_int[sp_offset_6664];
     * dest = base + idx;
     * *(int*)dest = eval_stack[-1].i;  // s2[-1] as int
     * opcode = *bytecode++;
     * goto dispatch;
     * ```
     * This is a stack-based bytecode VM for icon rendering - s2 is the evaluation stack pointer, s4 is the bytecode program counter, s8 is a temp buffer for assembling multi-byte values.
     */
halt_baddata();
                                        }
                                        if (cVar8 != '\x01') break;
                                        fVar17 = pfVar13[-2];
                                        if ((fVar17 == 0.0) || (pfVar13[-1] == 0.0)) {
                                          pfVar13[-2] = 0.0;
                                        }
                                        else {
                                          pfVar13[-2] = 1.4013e-45;
                                        }
                                        pfVar13 = pfVar13 + -1;
                                        cVar8 = pcVar15[1];
                                        pcVar15 = pcVar15 + 1;
                                      }
                                      if (cVar8 == '8') {
                    // WARNING: Bad instruction - Truncating control flow here
                                            /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * **What it does:**
     * Validates a string buffer at offset +32 in the interpreter object. Checks if length field (offset +716) is positive, then iterates through each byte verifying all characters have their high bit clear (ASCII 0x00-0x7F). Sets s6=1 if valid, s6=0 if invalid or empty.
     * **C pseudocode:**
     * ```c
     * // interpreter is s7, s6 is the result flag
     * int len = interpreter->field_2cc;  // offset 716
     * char *str = interpreter->buffer;   // offset 32
     * if (len <= 0) {
     * s6 = 0;
     * } else {
     * s6 = 1;
     * for (int i = 0; i < len; i++) {
     * if (str[i] & 0x80) {  // high bit set = non-ASCII
     * s6 = 0;
     * break;
     * }
     * }
     * }
     * // s6 = 1 means valid ASCII string, 0 means invalid/empty
     * ```
     */
halt_baddata();
                                      }
                                      if (cVar8 != '9') break;
                                      fVar17 = pfVar13[-2];
                                      if ((fVar17 == 0.0) && (pfVar13[-1] == 0.0)) {
                                        pfVar13[-2] = 0.0;
                                      }
                                      else {
                                        pfVar13[-2] = 1.4013e-45;
                                      }
                                      pfVar13 = pfVar13 + -1;
                                      cVar8 = pcVar15[1];
                                      pcVar15 = pcVar15 + 1;
                                    }
                                    if (cVar8 != 'B') break;
                                    cVar8 = pcVar15[1];
                                    pcVar15 = pcVar15 + 1;
                                    pfVar13 = pfVar13 + -1;
                                  }
                                  if (cVar8 != 'C') break;
                                  cVar8 = pcVar15[1];
                                  pcVar15 = pcVar15 + 1;
                                  pfVar13 = pfVar13 + -1;
                                }
                                if (cVar8 == '\b') {
                    // WARNING: Bad instruction - Truncating control flow here
                                      /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * ## Analysis
     * **1. What the assembly does:**
     * Checks if byte at s7+50 has bit 0x80 set; if not, stores -1 and continues. If set, checks if word at s7+600 has any bits in 0x49 mask; if not, stores -1 and continues. Otherwise calls function via GP-30592 with s7+100 as argument, stores return value.
     * **2. C pseudocode:**
     * ```c
     * // s7 = interpreter state, s2 = output pointer, s4 = bytecode pointer
     * unsigned char flags = *(unsigned char *)(state + 50);
     * if (!(flags & 0x80)) {
     * *output++ = -1;
     * opcode = *bytecode;
     * goto dispatch;
     * }
     * unsigned int mode = *(unsigned int *)(state + 600);
     * if (!(mode & 0x49)) {  // 0x49 = bits 0,3,6 (some state flags)
     * *output++ = -1;
     * opcode = *bytecode;
     * goto dispatch;
     * }
     * // GP-30592 likely points to a getter function
     * *output++ = get_some_value(state + 100);  // state+100 = embedded struct
     * opcode = *bytecode;
     * goto dispatch_next;  // at=27 suggests next opcode handler
     * ```
     * This is a bytecode interpreter opcode handler that conditionally returns -1 or calls a function based on interpreter state flags (likely checking if icon/file is visible or selected, mask 0x49 could be visibility|selected|highlighted flags).
     */
halt_baddata();
                                }
                                if (cVar8 != '\t') break;
                                if (pfVar13[-1] == 0.0) {
                                  local_17d0 = *(float *)(pcVar15 + 1);
                                  pcVar15 = param_2 + (int)local_17d0;
                                }
                                else {
                                  pcVar15 = pcVar15 + 5;
                                }
                                cVar8 = *pcVar15;
                              }
                              if (cVar8 == '\v') {
                    // WARNING: Bad instruction - Truncating control flow here
                                    /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calls a function via GP offset -30584 (0x8888) with 4 args: s7[568], s6, &sp[556], 2. If the call returns non-zero, sets s3=-1; otherwise loads s3 from the short at sp[556]. Stores s3 to *s2, then jumps back to the main loop.
     * **C pseudocode:**
     * ```c
     * // GP offset -30584 = sscanf or similar parsing function
     * short temp;
     * int result = parse_func(s7->field_238, s6, &temp, 2);
     * if (result != 0) {
     * s3 = -1;
     * } else {
     * s3 = temp;  // load as signed short
     * }
     * *s2 = s3;  // store parsed value (or -1 on error)
     * s0 = s2;
     * // continue to next bytecode instruction
     * ```
     * The GP offset 0x8888 (-30584) likely resolves to `sscanf` - this is parsing a short integer value from input, storing -1 on parse failure.
     */
halt_baddata();
                              }
                              if (cVar8 != '\f') break;
                              if (pfVar13[-1] == 0.0) {
                                pcVar15 = pcVar15 + 5;
                              }
                              else {
                                local_17d0 = *(float *)(pcVar15 + 1);
                                pcVar15 = param_2 + (int)local_17d0;
                              }
                              cVar8 = *pcVar15;
                            }
                            if (cVar8 != '\r') break;
                            local_17d0 = *(float *)(pcVar15 + 1);
                            cVar8 = param_2[(int)local_17d0];
                            pcVar15 = param_2 + (int)local_17d0;
                          }
                          if (cVar8 != '%') break;
                          cVar8 = pcVar15[1];
                          pcVar15 = pcVar15 + 1;
                        }
                        if (cVar8 != 'S') break;
                        local_17d0 = *(float *)(pcVar15 + 1);
                        *(float *)(param_3 + (int)local_17d0) = pfVar13[-1];
                        cVar8 = pcVar15[5];
                        pcVar15 = pcVar15 + 5;
                      }
                      if (cVar8 != 'T') break;
                      local_17d0 = *(float *)(pcVar15 + 1);
                      fVar17 = pfVar13[-1];
                      *(float *)(param_3 + (int)local_17d0) = fVar17;
                      cVar8 = pcVar15[5];
                      pcVar15 = pcVar15 + 5;
                    }
                    if (cVar8 != '+') break;
                    local_17d0 = *(float *)(pcVar15 + 1);
                    *pfVar13 = *(float *)(param_3 + (int)local_17d0);
                    cVar8 = pcVar15[5];
                    pcVar15 = pcVar15 + 5;
                    pfVar13 = pfVar13 + 1;
                  }
                  if (cVar8 != ',') break;
                  local_17d0 = *(float *)(pcVar15 + 1);
                  fVar17 = *(float *)(param_3 + (int)local_17d0);
                  *pfVar13 = fVar17;
                  cVar8 = pcVar15[5];
                  pcVar15 = pcVar15 + 5;
                  pfVar13 = pfVar13 + 1;
                }
                if (cVar8 != ')') break;
                *(char *)pfVar13 = pcVar15[1];
                *(char *)((int)pfVar13 + 1) = pcVar15[2];
                *(char *)((int)pfVar13 + 2) = pcVar15[3];
                *(char *)((int)pfVar13 + 3) = pcVar15[4];
                cVar8 = pcVar15[5];
                pcVar15 = pcVar15 + 5;
                pfVar13 = pfVar13 + 1;
              }
              if (cVar8 != '*') break;
              local_17d0 = *(float *)(pcVar15 + 1);
              *pfVar13 = local_17d0;
              cVar8 = pcVar15[5];
              fVar17 = local_17d0;
              pcVar15 = pcVar15 + 5;
              pfVar13 = pfVar13 + 1;
            }
            if (cVar8 != '^') break;
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
          }
          if (cVar8 != '\x1d') break;
          cVar8 = pcVar15[1];
          pcVar15 = pcVar15 + 1;
        }
        if (cVar8 != 'H') break;
        cVar8 = pcVar15[1];
        pcVar15 = pcVar15 + 1;
      }
      if (cVar8 != '\x06') break;
      pcVar15 = pcVar15 + 1;
      if (param_1[0x88] == 0.0) {
        if (param_1[0x8d] == 0.0) {
          fVar17 = 0.0;
        }
        else if ((int)param_1[0xb3] < 1) {
          fVar17 = 0.0;
        }
        else {
          local_17e4 = param_1 + 8;
          fVar17 = 1.4013e-45;
          pfVar4 = (float *)((int)local_17e4 + (int)param_1[0xb3]);
          for (; local_17e4 != pfVar4; local_17e4 = (float *)((int)local_17e4 + 1)) {
            if (((uint)*local_17e4 & 0x80000000) != 0) {
              fVar17 = 0.0;
              break;
            }
          }
        }
        param_1[0x88] = 1.4013e-45;
        param_1[0x89] = fVar17;
        *pfVar13 = fVar17;
        cVar8 = *pcVar15;
        pfVar13 = pfVar13 + 1;
      }
      else {
        *pfVar13 = param_1[0x89];
        cVar8 = *pcVar15;
        pfVar13 = pfVar13 + 1;
      }
    }
    if (cVar8 != '2') {
      if (cVar8 == 'K') {
        if (param_1[0x8c] == 0.0) {
          *pfVar13 = -NAN;
        }
        else {
          *pfVar13 = param_1[0x9d];
        }
        cVar8 = pcVar15[1];
        pcVar15 = pcVar15 + 1;
        pfVar13 = pfVar13 + 1;
      }
      else if (cVar8 == '(') {
        if (param_1[0x8c] == 0.0) {
          *pfVar13 = -NAN;
        }
        else {
          *pfVar13 = param_1[0x97];
        }
        cVar8 = pcVar15[1];
        pcVar15 = pcVar15 + 1;
        pfVar13 = pfVar13 + 1;
      }
      else {
        if (cVar8 == 'W') {
          pcVar15 = pcVar15 + 1;
          if (param_1[0x8d] == 0.0) {
            *pfVar13 = -NAN;
            cVar8 = *pcVar15;
            pfVar13 = pfVar13 + 1;
            goto joined_r0x00435ac4;
          }
          fVar14 = param_1[0xb3];
          if (0x47 < (int)fVar14) {
            iVar6 = (**(code **)(unaff_gp + -0x7784) /* -> getshort__FPc */)(param_1 + 8) /* =getshort__FPc */;
            if (iVar6 == 0x160) {
              fVar14 = (float)(**(code **)(unaff_gp + -0x7784) /* -> getshort__FPc */)(param_1 + 0xd) /* =getshort__FPc */;
              if (((fVar14 != fVar17) == 0x108) && (fVar17 != 3.74147e-43)) {
                *pfVar13 = -NAN;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              else if ((*(byte *)((int)param_1 + 0x32) & 0x80) == 0) {
                *pfVar13 = -NAN;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              else if (((uint)param_1[0x96] & 0x49) == 0) {
                *pfVar13 = -NAN;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              else {
                fVar14 = (float)(**(code **)(unaff_gp + -0x7780) /* -> getlong__FPc */)(param_1 + 0x19) /* =getlong__FPc */;
                *pfVar13 = fVar14;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              goto joined_r0x00435ac4;
            }
            fVar14 = param_1[0xb3];
          }
          if ((int)fVar14 < 0xd) {
            *pfVar13 = -NAN;
            cVar8 = *pcVar15;
            pfVar13 = pfVar13 + 1;
          }
          else if ((*(char *)(param_1 + 8) == '#') && (*(char *)((int)param_1 + 0x21) == '!')) {
            iVar6 = 3;
            if (3 < (int)fVar14) {
              iVar5 = (int)param_1 + 3;
              do {
                if (iVar5->_field_20 /* was: *(char *)(iVar5 + 0x20) */ == '\n') break;
                iVar6 = iVar6 + 1;
                iVar5 = iVar5 + 1;
              } while (iVar6 < (int)fVar14);
            }
            if (iVar6 < (int)fVar14) {
              if ((int)fVar14 - iVar6 < 7) {
                *pfVar13 = -NAN;
                cVar8 = *pcVar15;
                pfVar13 = pfVar13 + 1;
              }
              else {
                iVar5 = /* TODO: GP:-0x7f10 */ (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)
                                  ((int)param_1 + iVar6 + 0x21,
                                   *(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x62c8,5);
                if (iVar5 == 0) {
                  fVar17 = (float)/* TODO: GP:-0x7cd8 */ (**(code **)(unaff_gp + -0x7cd8) /* -> EXTERNAL_0x0fac5594 */)
                                            ((int)param_1 + iVar6 + 0x26,&local_17e4,0);
                  if ((local_17e4 == (float *)0x0) || (*(byte *)local_17e4 != 10)) {
                    *pfVar13 = -NAN;
                    cVar8 = *pcVar15;
                    pfVar13 = pfVar13 + 1;
                  }
                  else if (((uint)param_1[0x96] & 0x49) == 0) {
                    *pfVar13 = -NAN;
                    cVar8 = *pcVar15;
                    pfVar13 = pfVar13 + 1;
                  }
                  else {
                    *pfVar13 = fVar17;
                    cVar8 = *pcVar15;
                    pfVar13 = pfVar13 + 1;
                  }
                }
                else {
                  *pfVar13 = -NAN;
                  cVar8 = *pcVar15;
                  pfVar13 = pfVar13 + 1;
                }
              }
            }
            else {
              *pfVar13 = -NAN;
              cVar8 = *pcVar15;
              pfVar13 = pfVar13 + 1;
            }
          }
          else {
            *pfVar13 = -NAN;
            cVar8 = *pcVar15;
            pfVar13 = pfVar13 + 1;
          }
          goto joined_r0x00435ac4;
        }
        if (cVar8 == '\x0e') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17d1,1) /* =FUN_00435668 */;
            fVar14 = (float)(uint)local_17d1;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 1U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17d1,1) /* =FUN_00435668 */;
              fVar14 = (float)(uint)local_17d1;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            fVar14 = (float)(uint)*(byte *)((int)param_1 + (int)fVar17 + 0x20U);
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == 'J') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17d4,2) /* =FUN_00435668 */;
            fVar14 = (float)(int)local_17d4;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 2U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17d4,2) /* =FUN_00435668 */;
              fVar14 = (float)(int)local_17d4;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            fVar14 = (float)(**(code **)(unaff_gp + -0x7784) /* -> getshort__FPc */)((int)param_1 + (int)fVar17 + 0x20U) /* =getshort__FPc */;
            local_17d4 = SUB42(fVar14,0);
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == '-') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17d8,4) /* =FUN_00435668 */;
            fVar14 = local_17d8;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 4U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17d8,4) /* =FUN_00435668 */;
              fVar14 = local_17d8;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            local_17d8 = (float)(**(code **)(unaff_gp + -0x7780) /* -> getlong__FPc */)
                                          ((int)param_1 + (int)fVar17 + 0x20U) /* =getlong__FPc */;
            fVar14 = local_17d8;
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == 'Z') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17d9,1) /* =FUN_00435668 */;
            fVar14 = (float)(uint)local_17d9;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 1U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17d9,1) /* =FUN_00435668 */;
              fVar14 = (float)(uint)local_17d9;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            fVar14 = (float)(uint)*(byte *)((int)param_1 + (int)fVar17 + 0x20U);
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == '\\') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17dc,2) /* =FUN_00435668 */;
            if (iVar6 == 0) {
              fVar14 = (float)(uint)local_17dc;
            }
            else {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 2U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17dc,2) /* =FUN_00435668 */;
              if (iVar6 == 0) {
                fVar14 = (float)(uint)local_17dc;
              }
              else {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            local_17dc = (**(code **)(unaff_gp + -0x7784) /* -> getshort__FPc */)((int)param_1 + (int)fVar17 + 0x20U) /* =getshort__FPc */;
            fVar14 = (float)(uint)local_17dc;
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == '[') {
          fVar17 = pfVar13[-1];
          pcVar15 = pcVar15 + 1;
          if ((int)fVar17 < 0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar14 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17e0,4) /* =FUN_00435668 */;
            fVar14 = local_17e0;
            if (iVar6 != 0) {
              fVar14 = -NAN;
            }
          }
          else if ((uint)param_1[0xb3] < (int)fVar17 + 4U) {
            if (param_1[0xb3] == 7.17465e-43) {
              iVar6 = (**(code **)(unaff_gp + -0x7778) /* -> FUN_00435668 */)(param_1[0x8e],fVar17,&local_17e0,4) /* =FUN_00435668 */;
              fVar14 = local_17e0;
              if (iVar6 != 0) {
                fVar14 = -NAN;
              }
            }
            else {
              fVar14 = -NAN;
            }
          }
          else {
            local_17e0 = (float)(**(code **)(unaff_gp + -0x7780) /* -> getlong__FPc */)
                                          ((int)param_1 + (int)fVar17 + 0x20U) /* =getlong__FPc */;
            fVar14 = local_17e0;
          }
          pfVar13[-1] = fVar14;
          cVar8 = *pcVar15;
        }
        else if (cVar8 == 'G') {
          pfVar4 = (float *)(pcVar15 + 1);
          pcVar15 = pcVar15 + 5;
          local_17d0 = *pfVar4;
          iVar6 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_4 + (int)local_17d0);
          fVar17 = (float)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)();
          /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(param_4 + (int)local_17d0,fVar17,iVar6 + 1);
          *pfVar13 = fVar17;
          cVar8 = *pcVar15;
          pfVar13 = pfVar13 + 1;
        }
        else {
          if (cVar8 == '\x16') {
                /*
     * BADDATA ANALYSIS (from binary @ 0x00435a28):
     * Function: FUN_00435a28
     *
     * Looking at this assembly:
     * 1. **What it does**: Calls a function via GP-indirect (offset -30584) with args from s7+568, s6, stack+551, and constant 1. Based on return value, either sets s3=-1 (error) or loads s3 from stack byte. Stores s3 to memory at s0, then loops back to main dispatch.
     * 2. **C pseudocode**:
     * ```c
     * // GP offset -30584 (0x8888) - likely a string/icon parsing function
     * result = (*gp_func_8888)(s7->field_568, s6, &stack_byte_551, 1);
     * if (result != 0) {
     * s3 = -1;  // error indicator
     * } else {
     * s3 = stack_byte_551;  // parsed value
     * }
     * *s0 = s3;           // store result
     * opcode = *s4;       // fetch next bytecode
     * s2 += 4;            // advance output pointer
     * // branch back to main interpreter loop at 0x435ac0
     * ```
     * This is part of a bytecode interpreter (FileIconInterpreter::run) - the pattern of fetching opcode, dispatching, advancing pointers is classic interpreter loop structure. The function at GP-0x8888 likely parses an icon property value.
     */
halt_baddata();
          }
          if (cVar8 == '\x1e') {
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
          }
          else if (cVar8 == 'U') {
            fVar14 = pfVar13[-1];
            fVar17 = pfVar13[-2];
            iVar6 = /* TODO: GP:-0x7f34 */ (**(code **)(unaff_gp + -0x7f34) /* -> EXTERNAL_0x0fabf768 */)(fVar17,fVar14);
            pfVar13[-2] = (float)(uint)(iVar6 == 0);
            /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(fVar17);
            /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(fVar14);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
          else if (cVar8 == '\x12') {
            fVar17 = pfVar13[-1];
            pfVar4 = pfVar13 + -1;
            iVar6 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_1[0x8a]);
            iVar5 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(fVar17);
            if (iVar5 + iVar6 + 1 < 0xff) {
              /* TODO: GP:-0x7e64 */ (**(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */)(param_1[0x8a],auStack_18f4,iVar6);
              pcVar18 = /* TODO: GP:-0x7e64 */ *(code **)(unaff_gp + -0x7e64) /* -> EXTERNAL_0x0fac09fc */;
              auStack_18f4[iVar6] = 0x2f;
              (*pcVar18)(fVar17,auStack_18f4 + iVar6 + 1,iVar5);
              (auStack_18f4 + iVar6)[iVar5 + 1] = 0;
              iVar6 = /* TODO: GP:-0x7e30 */ (**(code **)(unaff_gp + -0x7e30) /* -> EXTERNAL_0x0fac6694 */)(auStack_18f4,auStack_197c);
              /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(fVar17);
              if (iVar6 == 0) {
                *pfVar4 = 1.4013e-45;
              }
              else {
                *pfVar4 = 0.0;
              }
            }
            else {
              /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(fVar17);
              *pfVar4 = 0.0;
            }
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
          }
          else if (cVar8 == 'V') {
            fVar14 = pfVar13[-1];
            fVar17 = pfVar13[-2];
            pfVar4 = pfVar13 + -2;
            if (((param_1[0x8f] == 0.0) || ((int)fVar17 < 0)) || ((int)fVar14 < 0)) {
              local_17e4 = (float *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(1);
              *(byte *)local_17e4 = 0;
              *pfVar4 = (float)local_17e4;
            }
            else if (param_1[0x8d] == 0.0) {
              /* TODO: GP:-0x7b38 */ (**(code **)(unaff_gp + -0x7b38) /* -> EXTERNAL_0x0facead8 */)(param_1[0x8e],fVar17,0);
              local_17e4 = (float *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)((int)fVar14 + 1);
              /* TODO: GP:-0x7e14 */ (**(code **)(unaff_gp + -0x7e14) /* -> EXTERNAL_0x0fac2404 */)(param_1[0x8e],local_17e4,fVar14);
              *(byte *)((int)local_17e4 + (int)fVar14) = 0;
              *pfVar4 = (float)local_17e4;
            }
            else if ((int)param_1[0xb3] < (int)fVar17 + (int)fVar14) {
              if (param_1[0xb3] == 7.17465e-43) {
                /* TODO: GP:-0x7b38 */ (**(code **)(unaff_gp + -0x7b38) /* -> EXTERNAL_0x0facead8 */)(param_1[0x8e],fVar17,0);
                local_17e4 = (float *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)((int)fVar14 + 1);
                /* TODO: GP:-0x7e14 */ (**(code **)(unaff_gp + -0x7e14) /* -> EXTERNAL_0x0fac2404 */)(param_1[0x8e],local_17e4,fVar14);
                *(byte *)((int)local_17e4 + (int)fVar14) = 0;
                *pfVar4 = (float)local_17e4;
              }
              else {
                local_17e4 = (float *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)(1);
                *(byte *)local_17e4 = 0;
                *pfVar4 = (float)local_17e4;
              }
            }
            else {
              fVar9 = 0.0;
              local_17e4 = (float *)/* TODO: GP:-0x7b5c */ (**(code **)(unaff_gp + -0x7b5c) /* -> EXTERNAL_0x0f8b5990 */)((int)fVar14 + 1);
              if (0 < (int)fVar14) {
                if ((float)((uint)fVar14 & 3) != 0.0) {
                  iVar6 = (int)param_1 + (int)fVar17;
                  do {
                    pbVar1 = (byte *)(iVar6 + 0x20);
                    pbVar7 = (byte *)((int)local_17e4 + (int)fVar9);
                    fVar9 = (float)((int)fVar9 + 1);
                    iVar6 = iVar6 + 1;
                    *pbVar7 = *pbVar1;
                  } while ((float)((uint)fVar14 & 3) != fVar9);
                  if (fVar9 == fVar14) goto LAB_00437ddc;
                }
                iVar6 = (int)param_1 + (int)fVar9 + (int)fVar17;
                fVar10 = fVar9;
                do {
                  *(byte *)((int)local_17e4 + (int)fVar10) = iVar6->_field_20 /* was: *(byte *)(iVar6 + 0x20) */;
                  *(byte *)((int)local_17e4 + (int)fVar10 + 1U) = *(byte *)(iVar6 + 0x21);
                  *(byte *)((int)local_17e4 + (int)fVar10 + 2U) = *(byte *)(iVar6 + 0x22);
                  pbVar1 = (byte *)(iVar6 + 0x23);
                  fVar9 = (float)((int)fVar10 + 4);
                  iVar6 = iVar6 + 4;
                  *(byte *)((int)local_17e4 + (int)fVar10 + 3U) = *pbVar1;
                  fVar10 = fVar9;
                } while (fVar9 != fVar14);
              }
LAB_00437ddc:
              *(byte *)((int)local_17e4 + (int)fVar9) = 0;
              *pfVar4 = (float)local_17e4;
            }
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
          else if (cVar8 == '!') {
            fVar14 = pfVar13[-1];
            fVar17 = (float)(**(code **)(unaff_gp + -0x7750) /* -> FUN_004382f4 */)(param_1[0x8b],fVar14) /* =FUN_004382f4 */;
            pfVar13[-1] = fVar17;
            /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(fVar14);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
          }
          else if (cVar8 == 'Q') {
            *pfVar13 = *param_1;
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'O') {
            *pfVar13 = param_1[1];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'P') {
            *pfVar13 = param_1[2];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'R') {
            *pfVar13 = param_1[3];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'N') {
            *pfVar13 = param_1[4];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'I') {
            *pfVar13 = param_1[5];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == '$') {
            *pfVar13 = param_1[6];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == '<') {
            *pfVar13 = param_1[7];
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + 1;
          }
          else if (cVar8 == 'D') {
            /* TODO: GP:-0x7ce0 */ (**(code **)(unaff_gp + -0x7ce0) /* -> EXTERNAL_0x0fb37970 */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x62d4);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
          else if (cVar8 == 'E') {
            fVar17 = pfVar13[-1];
            /* TODO: GP:-0x7ce0 */ (**(code **)(unaff_gp + -0x7ce0) /* -> EXTERNAL_0x0fb37970 */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x62d0,fVar17);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
          else if (cVar8 == 'F') {
            fVar17 = pfVar13[-1];
            /* TODO: GP:-0x7ce0 */ (**(code **)(unaff_gp + -0x7ce0) /* -> EXTERNAL_0x0fb37970 */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + -0x62cc,fVar17);
            /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(fVar17);
            cVar8 = pcVar15[1];
            pcVar15 = pcVar15 + 1;
            pfVar13 = pfVar13 + -1;
          }
        }
      }
      goto joined_r0x00435ac4;
    }
    if (param_1[0x8c] == 0.0) {
      *pfVar13 = -NAN;
    }
    else {
      *pfVar13 = param_1[0x96];
    }
    cVar8 = pcVar15[1];
    pcVar15 = pcVar15 + 1;
    pfVar13 = pfVar13 + 1;
  } while( true );
}
