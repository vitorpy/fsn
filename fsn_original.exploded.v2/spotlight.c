/**
 * spotlight
 *
 * Extracted from fsn.c lines 64499-64569
 * Category: Graphics
 */

void spotlight(double param_1,double param_2)

{
  float fVar1;
  undefined4 uVar2;
  double dVar3;
  undefined4 in_register_00001040;
  undefined4 in_register_00001050;
  undefined8 in_f16;
  undefined4 in_register_00001090;
  undefined4 in_stack_00000014;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000034;
  char in_stack_0000003b;
  undefined4 in_stack_0000003c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fStack_c = (float)param_1;
  dVar3 = (double)CONCAT44((int)((ulonglong)in_f16 >> 0x20),in_stack_0000001c);
  fStack_4 = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
  fStack_8 = (float)param_2;
  fStack_18 = (float)(dVar3 - (double)CONCAT44(in_register_00001090,in_stack_00000034));
  dVar3 = dVar3 + (double)CONCAT44(in_register_00001090,in_stack_00000034);
  fVar1 = (float)(double)CONCAT44(in_register_00001040,in_stack_00000024);
  fStack_1c = (float)(double)CONCAT44(in_register_00001050,in_stack_0000002c);
  fStack_24 = (float)dVar3;
  fStack_20 = fVar1;
  fStack_14 = fVar1;
  fStack_10 = fStack_1c;
  if (in_stack_0000003b == '\0') {
    cpack(in_stack_0000003c);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
    pushmatrix();
    translate(0,0);
    circf((float)(double)CONCAT44(uVar2,in_stack_0000001c),fVar1);
    popmatrix();
    linesmooth(1);
    bgnline();
    v3f(&fStack_18);
    v3f(&fStack_c);
    v3f(&fStack_24);
    endline();
    linesmooth(0);
    setpattern(1);
    bgnpolygon();
    v3f(&fStack_18);
    v3f(&fStack_c);
    v3f(&fStack_24);
    endpolygon();
    setpattern(0);
  }
  else {
    bgnline();
    v3f(&fStack_18);
    v3f(&fStack_c);
    v3f(&fStack_24);
    endline();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427a30):
     * Function: spotlight
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * Two v3f() calls with vertex data from stack offsets 68 and 44, then endtmesh(), then blendfunction(0) to disable blending. This is the end of a spotlight beam triangle mesh.
     * **2. C pseudocode:**
     * ```c
     * // GP offset -32192 (0x8240) = v3f
     * // GP offset -32188 (0x8244) = endtmesh
     * // GP offset -32028 (0x82e4) = blendfunction
     * float vert1[3];  // at sp+68
     * float vert2[3];  // at sp+44
     * // ... vertices set up earlier in function ...
     * v3f(vert1);           // Final vertex of spotlight beam
     * v3f(vert2);           // Another vertex
     * endtmesh();           // End triangle mesh
     * blendfunction(0, 0);  // Disable blending (BF_ZERO = 0)
     * ```
     * This is the cleanup portion at the end of the spotlight() function - finishing the transparent beam geometry and restoring blend state.
     */
halt_baddata();
}
