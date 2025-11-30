/**
 * draw_box
 *
 * Extracted from fsn.c lines 47264-47436
 * Category: Graphics
 */

void draw_box(undefined4 *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (param_2 == 4) {
    if (param_1 != (undefined4 *)0x0) {
      cpack(*param_1);
    }
    bgnqstrip();
    v3f(vertex_idx_4 * 0xc + 0x10006f40);
    v3f(vertex_idx_5 * 0xc + 0x10006f40);
    v3f(vertex_idx_7 * 0xc + 0x10006f40);
    v3f(vertex_idx_6 * 0xc + 0x10006f40);
    endqstrip();
  }
  else if (param_2 == 3) {
    if (param_1 != (undefined4 *)0x0) {
      cpack(*param_1);
    }
    bgnline();
    v3f(&vertex_8_ptr);
    v3f(&vertex_9_ptr);
    endline();
  }
  else if (param_2 == 2) {
    if (param_1 != (undefined4 *)0x0) {
      cpack(*param_1);
    }
    bgnqstrip();
    v3f(vertex_idx_0 * 0xc + 0x10006f40);
    v3f(vertex_idx_1 * 0xc + 0x10006f40);
    v3f(vertex_idx_3 * 0xc + 0x10006f40);
    v3f(vertex_idx_2 * 0xc + 0x10006f40);
    endqstrip();
  }
  else {
    bVar1 = param_2 != 1 && param_1 != (undefined4 *)0x0;
    if ((param_2 == 1) && (param_1 != (undefined4 *)0x0)) {
      cpack(param_1[1]);
    }
    if ((param_3 & 1) != 0) {
      if (bVar1) {
        cpack(param_1[1]);
      }
      if (param_2 == 1) {
        bgnclosedline();
        piVar2 = &vertex_array_start_idx;
        do {
          v3f(*piVar2 * 0xc + 0x10006f40);
          piVar2 = piVar2 + 1;
        } while (piVar2 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(vertex_array_start_idx * 0xc + 0x10006f40);
        v3f(face_vtx_0 * 0xc + 0x10006f40);
        v3f(face_vtx_2 * 0xc + 0x10006f40);
        v3f(face_vtx_1 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if (bVar1) {
      cpack(param_1[3]);
    }
    if ((param_3 & 2) != 0) {
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[4] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(vertex_array_end_idx * 0xc + 0x10006f40);
        v3f(face_vtx_4 * 0xc + 0x10006f40);
        v3f(face_vtx_6 * 0xc + 0x10006f40);
        v3f(face_vtx_5 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 4) != 0) {
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[8] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(face_vtx_7 * 0xc + 0x10006f40);
        v3f(face_vtx_8 * 0xc + 0x10006f40);
        v3f(face_vtx_10 * 0xc + 0x10006f40);
        v3f(face_vtx_9 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 8) != 0) {
      if (bVar1) {
        cpack(param_1[2]);
      }
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[0xc] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(face_vtx_11 * 0xc + 0x10006f40);
        v3f(face_vtx_12 * 0xc + 0x10006f40);
        v3f(face_vtx_14 * 0xc + 0x10006f40);
        v3f(face_vtx_13 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 0x10) != 0) {
      if (bVar1) {
        cpack(*param_1);
      }
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[0x10] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(face_vtx_15 * 0xc + 0x10006f40);
        v3f(face_vtx_16 * 0xc + 0x10006f40);
        v3f(face_vtx_18 * 0xc + 0x10006f40);
        v3f(face_vtx_17 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 0x20) != 0) {
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[0x14] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(face_vtx_19 * 0xc + 0x10006f40);
        v3f(face_vtx_20 * 0xc + 0x10006f40);
        v3f(face_vtx_22 * 0xc + 0x10006f40);
        v3f(face_vtx_21 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
