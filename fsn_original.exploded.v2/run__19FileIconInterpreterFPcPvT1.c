/**
 * run__19FileIconInterpreterFPcPvT1
 *
 * Extracted from fsn.c lines 73950-75261
 * Category: Filesystem
 */

void run__19FileIconInterpreterFPcPvT1(float *param_1,char *param_2,int param_3,int param_4)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  size_t sVar6;
  size_t __n;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  char *pcVar18;
  int iVar19;
  char *__s1;
  uint in_fcsr;
  stat sStack_197c;
  char acStack_18f4 [272];
  float *pfStack_17e4;
  float fStack_17e0;
  ushort uStack_17dc;
  byte bStack_17d9;
  float fStack_17d8;
  short sStack_17d4;
  byte bStack_17d1;
  char *pcStack_17d0;
  int iStack_17cc;
  float fStack_17c8;
  float fStack_17c4;
  float afStack_17bc [511];
  char *pcStack_fc0;
  float fStack_fbc;
  float fStack_fb8;
  float fStack_fb4;
  float afStack_fa8 [1002];
  
  iStack_17cc = 0;
  cVar11 = *param_2;
  pfVar16 = afStack_fa8;
  iVar19 = 0;
  __s1 = pcStack_fc0;
  pcVar18 = param_2;
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
                                                                        if (cVar11 == '\x1b') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                                              /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly:
     * **What it does:**
     * This is the function prologue for `FileIconInterpreter::run(char*, void*, char*)`. It allocates a large 6656-byte stack frame, saves all callee-saved registers (s0-s7, fp, ra) and floating-point registers (f20-f29), stores the three arguments at stack offsets, initializes a local variable to zero, and loads the float constant 1.0f into a register.
     * **C pseudocode:**
     * ```c
     * void FileIconInterpreter::run(char *bytecode, void *context, char *param3) {
     * char stack_buffer[6400];  // Large local buffer for bytecode execution
     * int result_flag = 0;      // sp+564, initialized to 0
     * float one = 1.0f;         // 0x3f80xxxx = 1.0f IEEE754
     * // Function body follows - likely a bytecode interpreter loop
     * // that uses the saved FP registers for graphics calculations
     * }
     * ```
     * The large stack (6656 bytes) and extensive register saves suggest this is a complex bytecode interpreter that needs many local variables and does floating-point graphics operations. The `halt_baddata` likely occurred because Ghidra couldn't follow the bytecode dispatch logic (probably a switch/jump table).
     */
halt_baddata();
                                                                        }
                                                                        if (cVar11 != '\x1c') break;
                                                                        __s1 = (char *)pfVar16[-1];
                                                                        if (__s1 == (char *)pfVar16[
                                                  -2]) {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '\x10') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * This is a switch statement dispatch table. Register `s0` contains the opcode/command value being tested against various constants.
     * **What it does:**
     * Sequential comparison of s0 against opcodes (23, 7, 4, 5, 26, 0, 1, 56, 57, 66, 67, 8, 9, 11, 12), branching to different handler addresses for each match. This is Ghidra failing to recognize a switch statement pattern.
     * **C pseudocode:**
     * ```c
     * switch (opcode) {  // s0 = opcode
     * case 23: goto handler_23;  // 0x4368f4
     * case 7:  goto handler_7;   // 0x436a00
     * case 4:  goto handler_4;   // 0x436b38
     * case 5:  goto handler_5;   // 0x436bdc
     * case 26: goto handler_26;  // 0x436c80
     * case 0:  goto handler_0;   // 0x436c88
     * case 1:  goto handler_1;   // 0x436cdc
     * case 56: goto handler_56;  // 0x436d20
     * case 57: goto handler_57;  // 0x436d74
     * case 66: goto handler_66;  // 0x436db8
     * case 67: goto handler_67;  // 0x436dc8
     * case 8:  goto handler_8;   // 0x436dd8
     * case 9:  goto handler_9;   // 0x436e44
     * case 11: goto handler_11;  // 0x436ea4
     * case 12: goto handler_12;  // 0x436f10
     * // ... continues
     * }
     * ```
     * This is a bytecode interpreter dispatch loop for the FileIconInterpreter class - each case handles a different drawing/transform opcode for rendering custom file icons.
     */
halt_baddata();
                                                  }
                                                  if (cVar11 != '\x11') break;
                                                  __s1 = (char *)pfVar16[-1];
                                                  if (__s1 == (char *)0x0) {
                                                    pfVar16[-1] = 1.4013e-45;
                                                  }
                                                  else {
                                                    pfVar16[-1] = 0.0;
                                                  }
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '\"') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Two bytecode operations for a stack-based interpreter: (1) Integer equality comparison - pops two values, pushes 1 if equal, 0 if not. (2) Float zero comparison - pops one float, compares to 0.0, pushes true/false constant.
     * **2. C pseudocode:**
     * ```c
     * // Integer equality (opcode at 435e1c)
     * int b = stack[-1];  // s6
     * int a = stack[-2];  // s3
     * stack -= 2;
     * *stack++ = (a == b) ? 1 : 0;
     * nextByte();
     * // Float zero test (opcode at 435e5c)
     * float val = *(float*)(stack - 1);  // f20
     * stack--;
     * if ((double)val == 0.0) {  // f24 holds 0.0
     * *stack++ = TRUE_CONST;   // f26
     * } else {
     * *stack++ = FALSE_CONST;  // f28
     * }
     * ```
     * Registers: s2=stack pointer, s4=bytecode PC, s0=temp for store address. f24=0.0 constant, f26/f28=true/false float constants.
     */
halt_baddata();
                                                  }
                                                  if (cVar11 != '#') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if ((int)pfVar16[-1] < (int)__s1) {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '\x1f') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly:
     * **1. What it does:**
     * This is a bytecode interpreter for FSN's icon scripting system. The snippets show three operations on a stack (s2 = stack pointer, s4 = bytecode PC):
     * - First block (436010): Stack adjustment, load next opcode, branch back to dispatch loop
     * - Second block (436020): Integer less-than comparison - pops two ints, pushes 1 if second < first, else 0
     * - Third block (436064): Float less-than-or-equal comparison - pops two floats, pushes 1.0 if second <= first, else 0.0
     * **2. C pseudocode:**
     * ```c
     * // Integer less-than (opcode at 436020)
     * int b = stack[-1];  // s3
     * int a = stack[-2];  // s6
     * stack -= 2;
     * *stack++ = (a < b) ? 1 : 0;
     * pc++;
     * goto dispatch;
     * // Float less-or-equal (opcode at 436064)
     * float b = fstack[-1];  // f22
     * float a = fstack[-2];  // f20
     * stack -= 2;
     * *(float*)stack++ = (a <= b) ? 1.0f : 0.0f;
     * pc++;
     * goto dispatch;
     * ```
     * Register usage: s2=stack pointer, s4=bytecode program counter, s0=temp/next opcode, f20/f22/f26=float temps. The branch target 435ac4 is the main opcode dispatch switch, and $at=27 suggests there are at least 27 opcodes in this interpreter.
     */
halt_baddata();
                                                  }
                                                  if (cVar11 != ' ') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if ((int)__s1 < (int)pfVar16[-1]) {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '.') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly, these are stack-machine bytecode operations for a simple interpreter.
     * **What it does:**
     * Three bytecode opcodes for a stack-based virtual machine: float multiply (pops 2 floats, pushes result), integer multiply (pops 2 ints, pushes result), and float divide (pops 2 floats, pushes result). Register s2 is the stack pointer, s4 is the instruction pointer.
     * **C pseudocode:**
     * ```c
     * // Opcode: Float Multiply (0x43620c)
     * case OP_FMUL: {
     * float b = *(float*)(sp - 4);
     * float a = *(float*)(sp - 8);
     * sp -= 8;
     * *(float*)sp = a * b;
     * sp += 4;
     * ip++;
     * break;
     * }
     * // Opcode: Integer Multiply (0x436234)
     * case OP_IMUL: {
     * int b = *(int*)(sp - 4);
     * int a = *(int*)(sp - 8);
     * sp -= 8;
     * *(int*)sp = a * b;
     * sp += 4;
     * ip++;
     * break;
     * }
     * // Opcode: Float Divide (0x436264)
     * case OP_FDIV: {
     * float b = *(float*)(sp - 4);
     * float a = *(float*)(sp - 8);
     * sp -= 8;
     * *(float*)sp = a / b;
     * sp += 4;
     * ip++;
     * break;
     * }
     * ```
     * The pattern `sp -= 8; sp += 4` effectively pops 2 values and pushes 1 (net stack change of -4 bytes). All opcodes branch back to 0x435ac4 which is the main dispatch loop.
     */
halt_baddata();
                                                  }
                                                  if (cVar11 != '/') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if ((int)__s1 < (int)pfVar16[-1]) {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '&') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly, I can identify three distinct bytecode operation handlers:
     * **1. Address 0x436408-0x436418: Integer-to-float conversion**
     * ```c
     * // Opcode handler: convert int to float
     * *(float*)s0 = (float)*(int*)&f6;  // cvt.s.w + store
     * opcode = *s4++;  // fetch next opcode
     * goto dispatch;
     * ```
     * **2. Address 0x43641c-0x436440: Bitwise AND operation**
     * ```c
     * // Opcode handler: AND two stack values
     * int b = *(s2 - 4);   // pop second operand
     * int a = *(s2 - 8);   // pop first operand
     * s2 -= 8;             // adjust stack
     * *s2 = a & b;         // push result
     * s2 += 4;
     * opcode = *(s4 + 1);  // fetch next opcode
     * s4++;
     * goto dispatch;
     * ```
     * **3. Address 0x436444-0x43647c: Two successive function calls (likely atan2 or similar)**
     * ```c
     * // Opcode handler: call math function on two stack floats
     * float arg2 = *(float*)(s2 - 4);  // f22
     * float arg1 = *(float*)(s2 - 8);  // f20
     * s2 -= 8;
     * s4++;
     * s2 += 4;
     * s1 = some_math_func(arg2);  // gp-30588: likely sinf/cosf/atanf
     * v0 = some_math_func(arg1);  // same function called twice
     * ```
     * **Summary**: This is a stack-based bytecode interpreter for the FileIconInterpreter class. s2 is the evaluation stack pointer, s4 is the bytecode program counter. The handlers implement: (1) int→float cast, (2) bitwise AND, (3) trigonometric/math operations on two floats. The `gp-30588` call is likely `sinf` or `atan2f` given the paired float arguments.
     */
halt_baddata();
                                                  }
                                                  if (cVar11 != '\'') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if ((int)pfVar16[-1] < (int)__s1) {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == '6') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly:
     * **What it does:**
     * This is part of a bytecode interpreter for icon rendering. The code pops 2D coordinate pairs from a float stack (s2) and stores them into a vertex array at sp+580/584. Register s5 tracks the vertex count (capped at 255), s4 is the bytecode program counter, and s0 holds the next opcode.
     * **C pseudocode:**
     * ```c
     * // Opcode at 436604: Reset and load next opcode
     * s0 = *s4;
     * goto dispatch;  // opcode 27
     * // Opcode at 436610: Clear vertex count, advance PC
     * s4++;
     * s5 = 0;  // vertex_count = 0
     * s0 = *s4;
     * goto dispatch;
     * // Opcode at 436620: Pop first vertex pair
     * s4++;
     * vertices[0].y = *(float*)(s2 - 4);  // sp+584
     * vertices[0].x = *(float*)(s2 - 8);  // sp+580
     * s2 -= 8;  // pop stack
     * s0 = *s4;
     * s5 = 1;  // vertex_count = 1
     * goto dispatch;
     * // Opcode at 436644: Pop additional vertex (up to 255)
     * s4++;
     * if (s5 < 255) {
     * vertices[s5].x = *(float*)(s2 - 8);  // sp+580 + s5*8
     * vertices[s5].y = *(float*)(s2 - 4);  // sp+584 + s5*8
     * s5++;  // vertex_count++
     * s2 -= 8;  // pop stack
     * }
     * ```
     * The vertex array is at sp+580 (580 = 0x244), storing x/y float pairs for polygon/polyline drawing commands.
     */
halt_baddata();
                                                  }
                                                  if (cVar11 != '7') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  if (__s1 == (char *)pfVar16[-1]) {
                                                    pfVar16[-2] = 0.0;
                                                  }
                                                  else {
                                                    pfVar16[-2] = 1.4013e-45;
                                                  }
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '?') break;
                                                  pfVar16[-2] = pfVar16[-2] + pfVar16[-1];
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '@') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)(__s1 + (int)pfVar16[-1]);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '0') break;
                                                  pfVar16[-2] = pfVar16[-2] - pfVar16[-1];
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '1') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)((int)__s1 - (int)pfVar16[-1]
                                                                       );
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != 'X') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  pfVar14 = pfVar16 + -2;
                                                  pfVar16 = pfVar16 + -1;
                                                  *pfVar14 = *pfVar15 * *pfVar5;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != 'Y') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar15 = pfVar16 + -2;
                                                  pfVar16 = pfVar16 + -1;
                                                  *pfVar15 = (float)((int)__s1 * (int)*pfVar5);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != 'L') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  pfVar14 = pfVar16 + -2;
                                                  pfVar16 = pfVar16 + -1;
                                                  *pfVar14 = *pfVar15 / *pfVar5;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 == 'M') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function at GP-30652 with arg from sp+564, increments s4, calls GP-31892, then loops s5 times calling GP-32264 with addresses starting at sp+580 (incrementing by 8 each iteration), finally calls GP-32000 and branches back to main loop.
     * 2. **C pseudocode:**
     * ```c
     * // Opcode 0x1b (27) - likely "popmatrix with cleanup"
     * func_gp_m30652(*(void**)(sp + 564));  // GP-30652
     * s4++;
     * s1 = 0;
     * func_gp_m31892();  // GP-31892 - possibly popmatrix()
     * if (s5 > 0) {
     * float *ptr = (float*)(sp + 580);  // sp+0x244
     * for (s1 = 0; s1 < s5; s1++) {
     * func_gp_m32264(ptr);  // GP-32264 - likely delobj() or similar
     * ptr += 2;  // 8 bytes = 2 floats
     * }
     * }
     * func_gp_m32000();  // GP-32000
     * s5 = 0;
     * goto main_loop;  // branch to 0x435ac4
     * ```
     * The GP offsets need resolution against the GOT to identify the actual functions. The loop at sp+580 with 8-byte stride suggests processing an array of 2D coords or object handles.
     */
halt_baddata();
                                                  }
                                                  if (cVar11 == '3') {
                                                    fVar17 = pfVar16[-2];
                                                    FUN_004355f8(pfVar16[-1]);
                                                    FUN_004355f8(fVar17);
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly:
     * 1. **What it does**: Pops a float from an operand stack (s2), converts it to integer with truncation (using FPU control word manipulation to set round-toward-zero mode), calls a function via GP offset -30652, then conditionally calls functions at GP[-31924] and GP[-31928] based on s5 value (appears to be a dimension/argument count).
     * 2. **C pseudocode**:
     * ```c
     * // Opcode 27 (0x1b): Float-to-int conversion + conditional drawing
     * s2 -= 4;
     * int old_fcsr = get_fpu_csr();
     * set_fpu_csr((old_fcsr | 0x3) ^ 0x2);  // Set round-toward-zero mode
     * s6 = (int)*(float*)s2;  // Convert float to int with truncation
     * set_fpu_csr(old_fcsr);  // Restore FPU mode
     * s4++;
     * s1 = 1;
     * func_gp_minus30652(param_at_sp564);  // GP[-30652] call
     * if (s5 != 0) {
     * if (s5 >= 2) {
     * func_gp_minus31924(float_sp580, float_sp584);  // GP[-31924] - likely move2/draw2
     * }
     * }
     * if (s5 < 2) {
     * // single-arg path
     * } else {
     * func_gp_minus31928(*(float*)(sp+588));  // GP[-31928] - likely 3D variant
     * }
     * ```
     * The GP offsets likely resolve to IrisGL drawing functions (move2/draw2 or similar) based on the float arguments and the context of a "FileIconInterpreter" - this is probably a bytecode VM for rendering file icons with variable dimensionality (1D/2D/3D coordinates based on s5).
     */
halt_baddata();
                                                  }
                                                  if (cVar11 == '4') {
                    // WARNING: Bad instruction - Truncating control flow here
                                                        /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * Converts two floats from a stack-based interpreter to integers using truncation (round-toward-zero), then calls a function with those integer coordinates plus a float parameter. The `cfc1/ori/xori/ctc1` sequence manipulates the FPU rounding mode to ensure truncation.
     * **2. C pseudocode:**
     * ```c
     * s4 += 1;
     * float saved_f16 = ...;  // store to stack[2636]
     * f22 = s2[-16];          // load float from stack
     * f20 = s2[-20];          // load float from stack
     * s2 -= 20;               // pop interpreter stack by 5 floats
     * (*t9)(...);             // call previous function
     * // Convert f18 (stack[2632]) to int with truncation
     * int y = (int)stack_f18;  // cvt.w.s with truncate mode
     * // Convert f6 (stack[2628]) to int with truncation
     * int arg_on_stack = (int)stack_f6;
     * // Call function at gp[-32008] with: f12=f20, f14=f22, a2=saved_f16, a3=y, stack[16]=arg_on_stack
     * func(f20, f22, saved_f16, y, arg_on_stack);
     * ```
     * This appears to be part of a bytecode interpreter (FileIconInterpreter) that pops float values from an operand stack, converts them to screen coordinates (integers), and calls a drawing function - likely `pnt2i(x, y)` or similar IrisGL routine for 2D point rendering.
     */
halt_baddata();
                                                  }
                                                  if (cVar11 != '\x02') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  fVar17 = *pfVar15;
                                                  pfVar16 = pfVar16 + -1;
                                                  uVar3 = FUN_004355f8(*pfVar5);
                                                  uVar4 = FUN_004355f8(fVar17);
                                                  *pfVar15 = (float)(int)(uVar4 & uVar3);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x03') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)((uint)__s1 &
                                                                       (uint)pfVar16[-1]);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != ':') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  fVar17 = *pfVar15;
                                                  pfVar16 = pfVar16 + -1;
                                                  uVar3 = FUN_004355f8(*pfVar5);
                                                  uVar4 = FUN_004355f8(fVar17);
                                                  *pfVar15 = (float)(int)(uVar4 | uVar3);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != ';') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)((uint)__s1 |
                                                                       (uint)pfVar16[-1]);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '_') break;
                                                  pfVar5 = pfVar16 + -1;
                                                  pfVar15 = pfVar16 + -2;
                                                  fVar17 = *pfVar15;
                                                  pfVar16 = pfVar16 + -1;
                                                  uVar3 = FUN_004355f8(*pfVar5);
                                                  uVar4 = FUN_004355f8(fVar17);
                                                  *pfVar15 = (float)(int)(uVar4 ^ uVar3);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '`') break;
                                                  __s1 = (char *)pfVar16[-2];
                                                  pfVar16[-2] = (float)((uint)__s1 ^
                                                                       (uint)pfVar16[-1]);
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  pfVar16 = pfVar16 + -1;
                                                  }
                                                  if (cVar11 != '5') break;
                                                  fStack_17c8 = pfVar16[-1];
                                                  pcVar18 = pcVar18 + 1;
                                                  fStack_17c4 = pfVar16[-2];
                                                  pfVar16 = pfVar16 + -2;
                                                  cVar11 = *pcVar18;
                                                  iVar19 = 0;
                                                  }
                                                  if (cVar11 != '\x13') break;
                                                  fVar17 = pfVar16[-2];
                                                  fVar12 = pfVar16[-1];
                                                  pfVar16 = pfVar16 + -2;
                                                  iVar19 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  move2(fStack_17c4,fStack_17c8);
                                                  draw2(fVar17,fVar12);
                                                  cVar11 = pcVar18[1];
                                                  fStack_17c4 = fVar17;
                                                  fStack_17c8 = fVar12;
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x0f') break;
                                                  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                    fVar17 = ROUND(pfVar16[-1]);
                                                  }
                                                  else {
                                                    fVar17 = FLOOR(pfVar16[-1]);
                                                  }
                                                  iStack_17cc = (int)fVar17;
                                                  pfVar16 = pfVar16 + -1;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\n') break;
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  iVar19 = 0;
                                                  }
                                                  if (cVar11 != 'A') break;
                                                  afStack_17bc[1] = pfVar16[-1];
                                                  pcVar18 = pcVar18 + 1;
                                                  afStack_17bc[0] = pfVar16[-2];
                                                  pfVar16 = pfVar16 + -2;
                                                  cVar11 = *pcVar18;
                                                  iVar19 = 1;
                                                  }
                                                  if ((cVar11 != '>') && (cVar11 != ']')) break;
                                                  if (iVar19 < 0xff) {
                                                    afStack_17bc[iVar19 * 2] = pfVar16[-2];
                                                    pfVar5 = pfVar16 + -1;
                                                    iVar7 = iVar19 * 2;
                                                    iVar19 = iVar19 + 1;
                                                    pfVar16 = pfVar16 + -2;
                                                    afStack_17bc[iVar7 + 1] = *pfVar5;
                                                  }
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '=') break;
                                                  iVar7 = 1;
                                                  set_gl_color(iStack_17cc);
                                                  if (iVar19 != 0) {
                                                    pmv2(afStack_17bc[0],afStack_17bc[1]);
                                                  }
                                                  pfVar5 = afStack_17bc;
                                                  if (1 < iVar19) {
                                                    do {
                                                      pfVar5 = pfVar5 + 2;
                                                      pdr2(*pfVar5,pfVar5[1]);
                                                      iVar7 = iVar7 + 1;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  pclos();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x14') break;
                                                  iVar7 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  bgnclosedline();
                                                  pfVar5 = afStack_17bc;
                                                  if (0 < iVar19) {
                                                    do {
                                                      v2f(pfVar5);
                                                      iVar7 = iVar7 + 1;
                                                      pfVar5 = pfVar5 + 2;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  endclosedline();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x15') break;
                                                  iVar7 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  bgnline();
                                                  pfVar5 = afStack_17bc;
                                                  if (0 < iVar19) {
                                                    do {
                                                      v2f(pfVar5);
                                                      iVar7 = iVar7 + 1;
                                                      pfVar5 = pfVar5 + 2;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  endline();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x18') break;
                                                  iVar7 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  bgnpoint();
                                                  pfVar5 = afStack_17bc;
                                                  if (0 < iVar19) {
                                                    do {
                                                      v2f(pfVar5);
                                                      iVar7 = iVar7 + 1;
                                                      pfVar5 = pfVar5 + 2;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  endpoint();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                  }
                                                  if (cVar11 != '\x19') break;
                                                  iVar7 = 0;
                                                  set_gl_color(iStack_17cc);
                                                  bgnpolygon();
                                                  pfVar5 = afStack_17bc;
                                                  if (0 < iVar19) {
                                                    do {
                                                      v2f(pfVar5);
                                                      iVar7 = iVar7 + 1;
                                                      pfVar5 = pfVar5 + 2;
                                                    } while (iVar7 != iVar19);
                                                  }
                                                  iVar19 = 0;
                                                  endpolygon();
                                                  cVar11 = pcVar18[1];
                                                  pcVar18 = pcVar18 + 1;
                                                }
                                                if (cVar11 != '\x17') break;
                                                if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                  fVar17 = ROUND(pfVar16[-1]);
                                                }
                                                else {
                                                  fVar17 = FLOOR(pfVar16[-1]);
                                                }
                                                __s1 = (char *)(int)fVar17;
                                                pfVar16 = pfVar16 + -1;
                                                iVar7 = 0;
                                                set_gl_color(iStack_17cc);
                                                bgnpolygon();
                                                pfVar5 = afStack_17bc;
                                                if (0 < iVar19) {
                                                  do {
                                                    v2f(pfVar5);
                                                    iVar7 = iVar7 + 1;
                                                    pfVar5 = pfVar5 + 2;
                                                  } while (iVar7 != iVar19);
                                                }
                                                iVar7 = 0;
                                                endpolygon();
                                                set_gl_color(__s1);
                                                bgnclosedline();
                                                pfVar5 = afStack_17bc;
                                                if (0 < iVar19) {
                                                  do {
                                                    v2f(pfVar5);
                                                    iVar7 = iVar7 + 1;
                                                    pfVar5 = pfVar5 + 2;
                                                  } while (iVar7 != iVar19);
                                                }
                                                iVar19 = 0;
                                                endclosedline();
                                                cVar11 = pcVar18[1];
                                                pcVar18 = pcVar18 + 1;
                                              }
                                              if (cVar11 != '\a') break;
                                              pfVar16 = pfVar16 + -1;
                                              if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
                                                fVar17 = ROUND(*pfVar16);
                                              }
                                              else {
                                                fVar17 = FLOOR(*pfVar16);
                                              }
                                              __s1 = (char *)(int)fVar17;
                                              iVar7 = 1;
                                              set_gl_color(iStack_17cc);
                                              if (iVar19 != 0) {
                                                pmv2(afStack_17bc[0],afStack_17bc[1]);
                                              }
                                              pfVar5 = afStack_17bc;
                                              if (1 < iVar19) {
                                                do {
                                                  pfVar5 = pfVar5 + 2;
                                                  pdr2(*pfVar5,pfVar5[1]);
                                                  iVar7 = iVar7 + 1;
                                                } while (iVar7 != iVar19);
                                              }
                                              iVar7 = 1;
                                              pclos();
                                              set_gl_color(__s1);
                                              if (iVar19 != 0) {
                                                move2(afStack_17bc[0],afStack_17bc[1]);
                                              }
                                              pfVar5 = afStack_17bc;
                                              if (1 < iVar19) {
                                                do {
                                                  pfVar5 = pfVar5 + 2;
                                                  draw2(*pfVar5,pfVar5[1]);
                                                  iVar7 = iVar7 + 1;
                                                } while (iVar7 != iVar19);
                                              }
                                              iVar19 = 0;
                                              draw2(afStack_17bc[0],afStack_17bc[1]);
                                              cVar11 = pcVar18[1];
                                              pcVar18 = pcVar18 + 1;
                                            }
                                            if (cVar11 != '\x04') break;
                                            fStack_fbc = pfVar16[-1];
                                            fStack_fb8 = pfVar16[-2];
                                            fStack_fb4 = pfVar16[-3];
                                            fVar12 = pfVar16[-4];
                                            fVar17 = pfVar16[-5];
                                            pfVar16 = pfVar16 + -5;
                                            set_gl_color(iStack_17cc);
                                            arc(fVar17,fVar12);
                                            cVar11 = pcVar18[1];
                                            pcVar18 = pcVar18 + 1;
                                          }
                                          if (cVar11 != '\x05') break;
                                          fStack_fbc = pfVar16[-1];
                                          fStack_fb8 = pfVar16[-2];
                                          fStack_fb4 = pfVar16[-3];
                                          fVar12 = pfVar16[-4];
                                          fVar17 = pfVar16[-5];
                                          pfVar16 = pfVar16 + -5;
                                          set_gl_color(iStack_17cc);
                                          arcf(fVar17,fVar12);
                                          cVar11 = pcVar18[1];
                                          pcVar18 = pcVar18 + 1;
                                        }
                                        if (cVar11 == '\x1a') {
                    // WARNING: Bad instruction - Truncating control flow here
                                              /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * ## Assembly Analysis
     * **What it does:**
     * Copies 4 bytes from source (s4+1 through s4+4) to destination buffer (s8). Then either computes a new source pointer (s4 = stack[6660] + stack[560]) or advances s4 by 5. Finally loads next opcode byte and branches back to main interpreter loop at 0x435ac4.
     * **C pseudocode:**
     * ```c
     * // Opcode handler: copy 4 bytes to output buffer
     * dest[0] = src[1];
     * dest[1] = src[2];
     * dest[2] = src[3];
     * dest[3] = src[4];
     * // Compute next instruction pointer
     * if (has_offset) {
     * src = base_ptr + offset;  // jump to computed address
     * } else {
     * src += 5;  // skip past this 5-byte instruction
     * }
     * // Fetch next opcode and continue interpreter loop
     * opcode = *src;
     * goto dispatch;  // branch to 0x435ac4
     * ```
     * This is a bytecode interpreter for FSN's icon format - the 4-byte copy likely extracts an RGBA color value or coordinate data from the icon bytecode stream.
     */
halt_baddata();
                                        }
                                        if (cVar11 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
                                              /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly:
     * **Block 1 (436ff0-437014):** Stores byte to s8+3, loads float from s2-4 into f20, computes address from sp+560 and sp+6664, stores float there, loads next opcode, branches back to main loop.
     * **Block 2 (437018-437064):** Reads 4 bytes from bytecode (s4+1 through s4+4), stores them to s8[0-3] (building a 32-bit value byte-by-byte), advances s4 by 5, loads 32-bit int from s2-4, stores to computed address, loads next opcode, branches back.
     * **C pseudocode:**
     * ```c
     * // Block 1: Store float from stack to output array
     * ((char*)fp)[3] = value;           // sb t6,3(s8)
     * float_val = *(float*)(s2 - 4);    // lwc1 f20,-4(s2) - pop float from eval stack
     * dest = output_base + offset;       // sp+6664 + sp+560
     * *(float*)dest = float_val;         // swc1 f20,0(t9)
     * opcode = *bytecode++;              // next iteration
     * goto main_loop;
     * // Block 2: Store int from stack to output array (bytecode has 4-byte offset)
     * uint32_t offset = (bytecode[1] << 24) | (bytecode[2] << 16) | (bytecode[3] << 8) | bytecode[4];
     * // Actually stored byte-by-byte to s8 (frame pointer area) then read as int
     * bytecode += 5;
     * int_val = *(int*)(s2 - 4);        // lw s6,-4(s2) - pop int from eval stack
     * dest = output_base + offset;
     * *(int*)dest = int_val;
     * opcode = *bytecode++;
     * goto main_loop;
     * ```
     * This is a bytecode interpreter storing evaluated values (float or int popped from eval stack at s2) to an output structure at computed offsets. Block 1 handles floats, Block 2 handles ints with inline 4-byte address offsets in the bytecode stream.
     */
halt_baddata();
                                        }
                                        if (cVar11 != '\x01') break;
                                        __s1 = (char *)pfVar16[-2];
                                        if ((__s1 == (char *)0x0) || (pfVar16[-1] == 0.0)) {
                                          pfVar16[-2] = 0.0;
                                        }
                                        else {
                                          pfVar16[-2] = 1.4013e-45;
                                        }
                                        pfVar16 = pfVar16 + -1;
                                        cVar11 = pcVar18[1];
                                        pcVar18 = pcVar18 + 1;
                                      }
                                      if (cVar11 == '8') {
                    // WARNING: Bad instruction - Truncating control flow here
                                            /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * ## Analysis
     * **1. What it does:**
     * Validates a string at offset 32 in the s7 structure. Checks if string exists, has positive length (from offset 716), and contains only ASCII characters (high bit clear). Sets s6=1 if valid, s6=0 if invalid.
     * **2. C pseudocode:**
     * ```c
     * // s7 = interpreter state struct pointer
     * // offset 32 = string buffer (char[])
     * // offset 716 = string length (int)
     * int validate_ascii_string(void *s7) {
     * char *str = (char *)s7 + 32;      // t3 = s7 + 0x20
     * int len = *(int *)((char *)s7 + 716);  // t2/t5 from offset 0x2cc
     * if (str == NULL)
     * return 0;  // s6 = 0
     * if (len <= 0)
     * return 0;  // s6 = 0
     * char *end = str + len;
     * for (char *p = str; p != end; p++) {
     * if (*p & 0x80)  // high bit set = non-ASCII
     * return 0;   // s6 = 0
     * }
     * return 1;  // s6 = 1
     * }
     * ```
     * **Comment-ready version:**
     * ```c
     * /* Validate string at interp+32: check non-null, positive length (from +716),
     * and all bytes are 7-bit ASCII (no high bit set). Returns 1 valid, 0 invalid. */
     * ```
     */
halt_baddata();
                                      }
                                      if (cVar11 != '9') break;
                                      __s1 = (char *)pfVar16[-2];
                                      if ((__s1 == (char *)0x0) && (pfVar16[-1] == 0.0)) {
                                        pfVar16[-2] = 0.0;
                                      }
                                      else {
                                        pfVar16[-2] = 1.4013e-45;
                                      }
                                      pfVar16 = pfVar16 + -1;
                                      cVar11 = pcVar18[1];
                                      pcVar18 = pcVar18 + 1;
                                    }
                                    if (cVar11 != 'B') break;
                                    cVar11 = pcVar18[1];
                                    pcVar18 = pcVar18 + 1;
                                    pfVar16 = pfVar16 + -1;
                                  }
                                  if (cVar11 != 'C') break;
                                  cVar11 = pcVar18[1];
                                  pcVar18 = pcVar18 + 1;
                                  pfVar16 = pfVar16 + -1;
                                }
                                if (cVar11 == '\b') {
                    // WARNING: Bad instruction - Truncating control flow here
                                      /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks two flags to decide what value to store: first checks byte at offset 50 of s7 for bit 0x80, then checks word at offset 600 for bits 0x49. If either check fails, stores -1. If both pass, calls a function (via GP indirect at -30592) with s7+100 as argument and stores the return value.
     * 2. **C pseudocode:**
     * ```c
     * int result;
     * if (!(s7->flags_50 & 0x80)) {
     * result = -1;
     * } else if (!(s7->mode_600 & 0x49)) {  /* 0x49 = S_IXUSR|S_IXGRP|S_IXOTH (executable bits) */
     * result = -1;
     * } else {
     * result = some_func(&s7->field_100);  /* GP[-30592] call */
     * }
     * *output++ = result;
     * /* then branch back to opcode dispatch at 435ac0 */
     * ```
     * The 0x49 mask (binary 01001001) matches Unix executable permission bits, suggesting this is checking if a file is executable before doing something with it. The function at GP offset -30592 likely returns some file-related value (icon index? handler?) for executable files.
     */
halt_baddata();
                                }
                                if (cVar11 != '\t') break;
                                if (pfVar16[-1] == 0.0) {
                                  pcStack_17d0 = *(char **)(pcVar18 + 1);
                                  pcVar18 = param_2 + (int)pcStack_17d0;
                                }
                                else {
                                  pcVar18 = pcVar18 + 5;
                                }
                                cVar11 = *pcVar18;
                              }
                              if (cVar11 == '\v') {
                    // WARNING: Bad instruction - Truncating control flow here
                                    /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * ## Assembly Analysis
     * **What it does:**
     * Calls a function via GP offset -30584 (likely `sscanf` or similar parser) with args: s7[568] (buffer), s6 (format), sp+556 (output), 2 (count). If call returns non-zero (error), sets s3=-1; otherwise loads s3 from the parsed short at sp+556. Two nearly identical code paths handle different entry points.
     * **C pseudocode:**
     * ```c
     * short temp;
     * if (sscanf(s7->buffer_238, s6_format, &temp, 2) != 0) {
     * s3 = -1;  // parse error
     * } else {
     * s3 = temp;  // parsed value
     * }
     * s0 = s2;  // continue with s2
     * ```
     * **GP offset -30584 (0x8888):** This is likely `sscanf` given the pattern of: buffer pointer, format string, output pointer, and count argument. The function parses a short integer from the icon interpreter's buffer, returning -1 on failure.
     */
halt_baddata();
                              }
                              if (cVar11 != '\f') break;
                              if (pfVar16[-1] == 0.0) {
                                pcVar18 = pcVar18 + 5;
                              }
                              else {
                                pcStack_17d0 = *(char **)(pcVar18 + 1);
                                pcVar18 = param_2 + (int)pcStack_17d0;
                              }
                              cVar11 = *pcVar18;
                            }
                            if (cVar11 != '\r') break;
                            pcStack_17d0 = *(char **)(pcVar18 + 1);
                            cVar11 = param_2[(int)pcStack_17d0];
                            pcVar18 = param_2 + (int)pcStack_17d0;
                          }
                          if (cVar11 != '%') break;
                          cVar11 = pcVar18[1];
                          pcVar18 = pcVar18 + 1;
                        }
                        if (cVar11 != 'S') break;
                        pcStack_17d0 = *(char **)(pcVar18 + 1);
                        *(float *)(pcStack_17d0 + param_3) = pfVar16[-1];
                        cVar11 = pcVar18[5];
                        pcVar18 = pcVar18 + 5;
                      }
                      if (cVar11 != 'T') break;
                      pcStack_17d0 = *(char **)(pcVar18 + 1);
                      __s1 = (char *)pfVar16[-1];
                      *(char **)(pcStack_17d0 + param_3) = __s1;
                      cVar11 = pcVar18[5];
                      pcVar18 = pcVar18 + 5;
                    }
                    if (cVar11 != '+') break;
                    pcStack_17d0 = *(char **)(pcVar18 + 1);
                    *pfVar16 = *(float *)(pcStack_17d0 + param_3);
                    cVar11 = pcVar18[5];
                    pcVar18 = pcVar18 + 5;
                    pfVar16 = pfVar16 + 1;
                  }
                  if (cVar11 != ',') break;
                  pcStack_17d0 = *(char **)(pcVar18 + 1);
                  __s1 = *(char **)(pcStack_17d0 + param_3);
                  *pfVar16 = (float)__s1;
                  cVar11 = pcVar18[5];
                  pcVar18 = pcVar18 + 5;
                  pfVar16 = pfVar16 + 1;
                }
                if (cVar11 != ')') break;
                *(char *)pfVar16 = pcVar18[1];
                *(char *)((int)pfVar16 + 1) = pcVar18[2];
                *(char *)((int)pfVar16 + 2) = pcVar18[3];
                *(char *)((int)pfVar16 + 3) = pcVar18[4];
                cVar11 = pcVar18[5];
                pcVar18 = pcVar18 + 5;
                pfVar16 = pfVar16 + 1;
              }
              if (cVar11 != '*') break;
              pcStack_17d0 = *(char **)(pcVar18 + 1);
              *pfVar16 = (float)pcStack_17d0;
              cVar11 = pcVar18[5];
              __s1 = pcStack_17d0;
              pcVar18 = pcVar18 + 5;
              pfVar16 = pfVar16 + 1;
            }
            if (cVar11 != '^') break;
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
          }
          if (cVar11 != '\x1d') break;
          cVar11 = pcVar18[1];
          pcVar18 = pcVar18 + 1;
        }
        if (cVar11 != 'H') break;
        cVar11 = pcVar18[1];
        pcVar18 = pcVar18 + 1;
      }
      if (cVar11 != '\x06') break;
      pcVar18 = pcVar18 + 1;
      if (param_1[0x88] == 0.0) {
        if (param_1[0x8d] == 0.0) {
          __s1 = (char *)0x0;
        }
        else if ((int)param_1[0xb3] < 1) {
          __s1 = (char *)0x0;
        }
        else {
          pfStack_17e4 = param_1 + 8;
          __s1 = (char *)0x1;
          pfVar5 = (float *)((int)pfStack_17e4 + (int)param_1[0xb3]);
          for (; pfStack_17e4 != pfVar5; pfStack_17e4 = (float *)((int)pfStack_17e4 + 1)) {
            if (((uint)*pfStack_17e4 & 0x80000000) != 0) {
              __s1 = (char *)0x0;
              break;
            }
          }
        }
        param_1[0x88] = 1.4013e-45;
        param_1[0x89] = (float)__s1;
        *pfVar16 = (float)__s1;
        cVar11 = *pcVar18;
        pfVar16 = pfVar16 + 1;
      }
      else {
        *pfVar16 = param_1[0x89];
        cVar11 = *pcVar18;
        pfVar16 = pfVar16 + 1;
      }
    }
    if (cVar11 != '2') {
      if (cVar11 == 'K') {
        if (param_1[0x8c] == 0.0) {
          *pfVar16 = -NAN;
        }
        else {
          *pfVar16 = param_1[0x9d];
        }
        cVar11 = pcVar18[1];
        pcVar18 = pcVar18 + 1;
        pfVar16 = pfVar16 + 1;
      }
      else if (cVar11 == '(') {
        if (param_1[0x8c] == 0.0) {
          *pfVar16 = -NAN;
        }
        else {
          *pfVar16 = param_1[0x97];
        }
        cVar11 = pcVar18[1];
        pcVar18 = pcVar18 + 1;
        pfVar16 = pfVar16 + 1;
      }
      else {
        if (cVar11 == 'W') {
          pcVar18 = pcVar18 + 1;
          if (param_1[0x8d] == 0.0) {
            *pfVar16 = -NAN;
            cVar11 = *pcVar18;
            pfVar16 = pfVar16 + 1;
            goto joined_r0x00435ac4;
          }
          fVar17 = param_1[0xb3];
          if (0x47 < (int)fVar17) {
            iVar7 = getshort__FPc(param_1 + 8);
            if (iVar7 == 0x160) {
              pcVar9 = (char *)getshort__FPc(param_1 + 0xd);
              if (((pcVar9 != __s1) == 0x108) && (__s1 != (char *)0x10b)) {
                *pfVar16 = -NAN;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              else if ((*(byte *)((int)param_1 + 0x32) & 0x80) == 0) {
                *pfVar16 = -NAN;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              else if (((uint)param_1[0x96] & 0x49) == 0) {
                *pfVar16 = -NAN;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              else {
                fVar17 = (float)getlong__FPc(param_1 + 0x19);
                *pfVar16 = fVar17;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              goto joined_r0x00435ac4;
            }
            fVar17 = param_1[0xb3];
          }
          if ((int)fVar17 < 0xd) {
            *pfVar16 = -NAN;
            cVar11 = *pcVar18;
            pfVar16 = pfVar16 + 1;
          }
          else if ((*(char *)(param_1 + 8) == '#') && (*(char *)((int)param_1 + 0x21) == '!')) {
            iVar7 = 3;
            if (3 < (int)fVar17) {
              iVar8 = (int)param_1 + 3;
              do {
                if (iVar8->_field_20 /* was: *(char *)(iVar8 + 0x20) */ == '\n') break;
                iVar7 = iVar7 + 1;
                iVar8 = iVar8 + 1;
              } while (iVar7 < (int)fVar17);
            }
            if (iVar7 < (int)fVar17) {
              if ((int)fVar17 - iVar7 < 7) {
                *pfVar16 = -NAN;
                cVar11 = *pcVar18;
                pfVar16 = pfVar16 + 1;
              }
              else {
                iVar8 = strncmp((char *)((int)param_1 + iVar7 + 0x21),s__Tag_10009d38,5);
                if (iVar8 == 0) {
                  __s1 = (char *)strtol((char *)((int)param_1 + iVar7 + 0x26),(char **)&pfStack_17e4
                                        ,0);
                  if ((pfStack_17e4 == (float *)0x0) || (*(byte *)pfStack_17e4 != 10)) {
                    *pfVar16 = -NAN;
                    cVar11 = *pcVar18;
                    pfVar16 = pfVar16 + 1;
                  }
                  else if (((uint)param_1[0x96] & 0x49) == 0) {
                    *pfVar16 = -NAN;
                    cVar11 = *pcVar18;
                    pfVar16 = pfVar16 + 1;
                  }
                  else {
                    *pfVar16 = (float)__s1;
                    cVar11 = *pcVar18;
                    pfVar16 = pfVar16 + 1;
                  }
                }
                else {
                  *pfVar16 = -NAN;
                  cVar11 = *pcVar18;
                  pfVar16 = pfVar16 + 1;
                }
              }
            }
            else {
              *pfVar16 = -NAN;
              cVar11 = *pcVar18;
              pfVar16 = pfVar16 + 1;
            }
          }
          else {
            *pfVar16 = -NAN;
            cVar11 = *pcVar18;
            pfVar16 = pfVar16 + 1;
          }
          goto joined_r0x00435ac4;
        }
        if (cVar11 == '\x0e') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&bStack_17d1,1);
            fVar17 = (float)(uint)bStack_17d1;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 1) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&bStack_17d1,1);
              fVar17 = (float)(uint)bStack_17d1;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fVar17 = (float)(uint)(byte)((char *)((int)param_1 + (int)__s1))[0x20];
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == 'J') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&sStack_17d4,2);
            fVar17 = (float)(int)sStack_17d4;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 2) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&sStack_17d4,2);
              fVar17 = (float)(int)sStack_17d4;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fVar17 = (float)getshort__FPc((char *)((int)param_1 + (int)__s1) + 0x20);
            sStack_17d4 = SUB42(fVar17,0);
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == '-') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&fStack_17d8,4);
            fVar17 = fStack_17d8;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 4) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&fStack_17d8,4);
              fVar17 = fStack_17d8;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fStack_17d8 = (float)getlong__FPc((char *)((int)param_1 + (int)__s1) + 0x20);
            fVar17 = fStack_17d8;
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == 'Z') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&bStack_17d9,1);
            fVar17 = (float)(uint)bStack_17d9;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 1) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&bStack_17d9,1);
              fVar17 = (float)(uint)bStack_17d9;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fVar17 = (float)(uint)(byte)((char *)((int)param_1 + (int)__s1))[0x20];
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == '\\') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&uStack_17dc,2);
            if (iVar7 == 0) {
              fVar17 = (float)(uint)uStack_17dc;
            }
            else {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 2) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&uStack_17dc,2);
              if (iVar7 == 0) {
                fVar17 = (float)(uint)uStack_17dc;
              }
              else {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            uStack_17dc = getshort__FPc((char *)((int)param_1 + (int)__s1) + 0x20);
            fVar17 = (float)(uint)uStack_17dc;
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == '[') {
          __s1 = (char *)pfVar16[-1];
          pcVar18 = pcVar18 + 1;
          if ((int)__s1 < 0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8f] == 0.0) {
            fVar17 = -NAN;
          }
          else if (param_1[0x8d] == 0.0) {
            iVar7 = parse_typed_value(param_1[0x8e],__s1,&fStack_17e0,4);
            fVar17 = fStack_17e0;
            if (iVar7 != 0) {
              fVar17 = -NAN;
            }
          }
          else if ((char *)param_1[0xb3] < __s1 + 4) {
            if ((char *)param_1[0xb3] == (char *)0x200) {
              iVar7 = parse_typed_value(param_1[0x8e],__s1,&fStack_17e0,4);
              fVar17 = fStack_17e0;
              if (iVar7 != 0) {
                fVar17 = -NAN;
              }
            }
            else {
              fVar17 = -NAN;
            }
          }
          else {
            fStack_17e0 = (float)getlong__FPc((char *)((int)param_1 + (int)__s1) + 0x20);
            fVar17 = fStack_17e0;
          }
          pfVar16[-1] = fVar17;
          cVar11 = *pcVar18;
        }
        else if (cVar11 == 'G') {
          piVar1 = (int *)(pcVar18 + 1);
          pcVar18 = pcVar18 + 5;
          pcStack_17d0 = (char *)*piVar1;
          sVar6 = strlen(pcStack_17d0 + param_4);
          __s1 = (char *)__nw__FUi();
          bcopy(pcStack_17d0 + param_4,__s1,sVar6 + 1);
          *pfVar16 = (float)__s1;
          cVar11 = *pcVar18;
          pfVar16 = pfVar16 + 1;
        }
        else {
          if (cVar11 == '\x16') {
                /*
     * BADDATA ANALYSIS (from binary @ 0x00435a1c):
     * Function: run__19FileIconInterpreterFPcPvT1
     *
     * ## Analysis
     * **What it does:**
     * Calls a function via GP offset -30584 (0x8888) with args (s7[568], s6, &sp[551], 1). If return is non-zero, sets s3=-1; otherwise loads s3 from byte at sp[551]. Stores s3 to *s0, advances s2 by 4, loads next opcode from *s4, and jumps back to main interpreter loop at 0x435ac0.
     * **C pseudocode:**
     * ```c
     * // GP offset 0x8888 = likely sscanf or similar parsing function
     * int result = parse_func(s7->field_568, s6, &temp_byte, 1);
     * if (result != 0) {
     * s3 = -1;  // parse failed
     * } else {
     * s3 = temp_byte;  // parse succeeded, use result
     * }
     * *output_ptr = s3;      // store to output (s0)
     * output_ptr++;          // s2 += 4 (next int slot)
     * opcode = *bytecode++;  // fetch next opcode from s4
     * // jump to interpreter dispatch loop
     * ```
     * **Context:** This is part of a bytecode interpreter (FileIconInterpreter::run). The pattern suggests parsing a single byte/char value from input (s6), storing it to an output array, then continuing to the next bytecode instruction. The -1 sentinel indicates parse failure.
     */
halt_baddata();
          }
          if (cVar11 == '\x1e') {
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
          }
          else if (cVar11 == 'U') {
            pcVar9 = (char *)pfVar16[-1];
            __s1 = (char *)pfVar16[-2];
            iVar7 = strcmp(__s1,pcVar9);
            pfVar16[-2] = (float)(uint)(iVar7 == 0);
            __dl__FPv(__s1);
            __dl__FPv(pcVar9);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
          else if (cVar11 == '\x12') {
            __s1 = (char *)pfVar16[-1];
            pfVar5 = pfVar16 + -1;
            sVar6 = strlen((char *)param_1[0x8a]);
            __n = strlen(__s1);
            if ((int)(__n + sVar6 + 1) < 0xff) {
              bcopy((void *)param_1[0x8a],acStack_18f4,sVar6);
              acStack_18f4[sVar6] = '/';
              bcopy(__s1,acStack_18f4 + sVar6 + 1,__n);
              (acStack_18f4 + sVar6)[__n + 1] = '\0';
              iVar7 = stat(acStack_18f4,&sStack_197c);
              __dl__FPv(__s1);
              if (iVar7 == 0) {
                *pfVar5 = 1.4013e-45;
              }
              else {
                *pfVar5 = 0.0;
              }
            }
            else {
              __dl__FPv(__s1);
              *pfVar5 = 0.0;
            }
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
          }
          else if (cVar11 == 'V') {
            fVar17 = pfVar16[-1];
            __s1 = (char *)pfVar16[-2];
            pfVar5 = pfVar16 + -2;
            if (((param_1[0x8f] == 0.0) || ((int)__s1 < 0)) || ((int)fVar17 < 0)) {
              pfStack_17e4 = (float *)__nw__FUi(1);
              *(byte *)pfStack_17e4 = 0;
              *pfVar5 = (float)pfStack_17e4;
            }
            else if (param_1[0x8d] == 0.0) {
              lseek((int)param_1[0x8e],(__off_t)__s1,0);
              pfStack_17e4 = (float *)__nw__FUi((int)fVar17 + 1);
              read((int)param_1[0x8e],pfStack_17e4,(size_t)fVar17);
              *(byte *)((int)pfStack_17e4 + (int)fVar17) = 0;
              *pfVar5 = (float)pfStack_17e4;
            }
            else if ((int)param_1[0xb3] < (int)(__s1 + (int)fVar17)) {
              if (param_1[0xb3] == 7.17465e-43) {
                lseek((int)param_1[0x8e],(__off_t)__s1,0);
                pfStack_17e4 = (float *)__nw__FUi((int)fVar17 + 1);
                read((int)param_1[0x8e],pfStack_17e4,(size_t)fVar17);
                *(byte *)((int)pfStack_17e4 + (int)fVar17) = 0;
                *pfVar5 = (float)pfStack_17e4;
              }
              else {
                pfStack_17e4 = (float *)__nw__FUi(1);
                *(byte *)pfStack_17e4 = 0;
                *pfVar5 = (float)pfStack_17e4;
              }
            }
            else {
              fVar12 = 0.0;
              pfStack_17e4 = (float *)__nw__FUi((int)fVar17 + 1);
              if (0 < (int)fVar17) {
                if ((float)((uint)fVar17 & 3) != 0.0) {
                  pcVar9 = (char *)((int)param_1 + (int)__s1);
                  do {
                    pbVar2 = (byte *)(pcVar9 + 0x20);
                    pbVar10 = (byte *)((int)pfStack_17e4 + (int)fVar12);
                    fVar12 = (float)((int)fVar12 + 1);
                    pcVar9 = pcVar9 + 1;
                    *pbVar10 = *pbVar2;
                  } while ((float)((uint)fVar17 & 3) != fVar12);
                  if (fVar12 == fVar17) goto LAB_00437ddc;
                }
                pcVar9 = (char *)((int)param_1 + (int)__s1) + (int)fVar12;
                fVar13 = fVar12;
                do {
                  *(char *)((int)pfStack_17e4 + (int)fVar13) = pcVar9[0x20];
                  *(char *)((int)pfStack_17e4 + (int)fVar13 + 1U) = pcVar9[0x21];
                  *(char *)((int)pfStack_17e4 + (int)fVar13 + 2U) = pcVar9[0x22];
                  pbVar2 = (byte *)(pcVar9 + 0x23);
                  fVar12 = (float)((int)fVar13 + 4);
                  pcVar9 = pcVar9 + 4;
                  *(byte *)((int)pfStack_17e4 + (int)fVar13 + 3U) = *pbVar2;
                  fVar13 = fVar12;
                } while (fVar12 != fVar17);
              }
LAB_00437ddc:
              *(byte *)((int)pfStack_17e4 + (int)fVar12) = 0;
              *pfVar5 = (float)pfStack_17e4;
            }
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
          else if (cVar11 == '!') {
            fVar17 = pfVar16[-1];
            __s1 = (char *)FUN_004382f4(param_1[0x8b],fVar17);
            pfVar16[-1] = (float)__s1;
            __dl__FPv(fVar17);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
          }
          else if (cVar11 == 'Q') {
            *pfVar16 = *param_1;
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'O') {
            *pfVar16 = param_1[1];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'P') {
            *pfVar16 = param_1[2];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'R') {
            *pfVar16 = param_1[3];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'N') {
            *pfVar16 = param_1[4];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'I') {
            *pfVar16 = param_1[5];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == '$') {
            *pfVar16 = param_1[6];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == '<') {
            *pfVar16 = param_1[7];
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + 1;
          }
          else if (cVar11 == 'D') {
            printf(&DAT_10009d2c);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
          else if (cVar11 == 'E') {
            __s1 = (char *)pfVar16[-1];
            printf(&DAT_10009d30,__s1);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
          else if (cVar11 == 'F') {
            __s1 = (char *)pfVar16[-1];
            printf(&DAT_10009d34,__s1);
            __dl__FPv(__s1);
            cVar11 = pcVar18[1];
            pcVar18 = pcVar18 + 1;
            pfVar16 = pfVar16 + -1;
          }
        }
      }
      goto joined_r0x00435ac4;
    }
    if (param_1[0x8c] == 0.0) {
      *pfVar16 = -NAN;
    }
    else {
      *pfVar16 = param_1[0x96];
    }
    cVar11 = pcVar18[1];
    pcVar18 = pcVar18 + 1;
    pfVar16 = pfVar16 + 1;
  } while( true );
}
