/**
 * tree.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "tree.h"
#include "fsn_types.h"
#include "fsn_state.h"

void calculate_tree_layout(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ulonglong in_f8;
  uint uVar6;
  undefined8 in_f16;
  undefined4 uVar7;
  undefined8 in_f18;
  double dVar8;
  undefined4 in_f21;
  undefined8 unaff_f22;
  double dVar9;
  
  uVar7 = (undefined4)((ulonglong)in_f18 >> 0x20);
  uVar6 = (uint)((ulonglong)in_f16 >> 0x20);
  dVar9 = (double)CONCAT44((int)((ulonglong)unaff_f22 >> 0x20),param_4) +
          (double)*(float *)(param_1 + 0x3c) / (double)(in_f8 & 0xffffffff00000000);
  uVar3 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x18b0))();
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(float *)(param_1 + 0x38) = (float)dVar9;
  iVar1 = *(int *)(unaff_gp + -0x75dc);
  *(float *)(param_1 + 0x58) = (float)(double)CONCAT44(uVar7,param_6);
  *(undefined4 *)(param_1 + 0x40) = 0;
  dVar9 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar6 << 0x20) + dVar9;
  dVar8 = (double)(float)(dVar9 + (double)*(float *)(iVar1 + 0x7c));
  fVar4 = (float)(**(code **)(unaff_gp + -0x7b64))
                           (*(undefined4 *)(iVar1 + 0x104),
                            (float)(dVar8 / (double)*(float *)(iVar1 + 0x108)));
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      fVar5 = (float)(**(code **)(unaff_gp + -0x7a6c))
                               (*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2),param_2,in_f21,
                                SUB84(dVar8,0),param_3,
                                SUB84((double)(float)((double)((ulonglong)dVar9 & 0xffffffff00000000
                                                              ) / (double)fVar4),0));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
      *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar5;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void layout_tree_recursive(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 unaff_000010a0;
  
  uVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) + 0x18b0))();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(float *)(param_1 + 0x34) = (float)(double)CONCAT44(unaff_000010a0,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dump_directory_tree(FILE *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined1 local_a;
  byte local_9;
  
  process_pending_events();
  if (__iob_func_result == 0) {
    iVar1 = param_1->_flags + -1;
    param_1->_flags = iVar1;
    if (iVar1 < 0) {
      __flsbuf(2,param_1);
      local_14 = param_2[2];
    }
    else {
      *param_1->_IO_read_ptr = '\x02';
      param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
      local_14 = param_2[2];
    }
  }
  else {
    __semputc(2,param_1);
    local_14 = param_2[2];
  }
  local_10 = (undefined2)param_2[1];
  local_e = (undefined2)param_2[5];
  local_a = (undefined1)param_3;
  local_9 = 0;
  local_c = (undefined2)param_2[3];
  iVar1 = param_2[0x1d];
  if (iVar1 << 0xb < 0) {
    local_9 = 2;
    iVar1 = param_2[0x1d];
  }
  if (iVar1 << 0xd < 0) {
    local_9 = local_9 | 1;
  }
  fwrite(&local_14,0xc,1,param_1);
  fwrite((void *)*param_2,1,param_2[1],param_1);
  local_18 = (undefined1)(param_3 + 1);
  iVar1 = 0;
  if (0 < (int)param_2[3]) {
    iVar5 = 0;
    do {
      if (__iob_func_result == 0) {
        iVar3 = param_1->_flags + -1;
        param_1->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(3,param_1);
          iVar3 = param_2[4];
        }
        else {
          *param_1->_IO_read_ptr = '\x03';
          param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
          iVar3 = param_2[4];
        }
      }
      else {
        __semputc(3,param_1);
        iVar3 = param_2[4];
      }
      puVar4 = *(undefined4 **)(iVar3 + iVar5);
      local_28 = puVar4[3];
      local_24 = puVar4[4];
      local_20 = puVar4[2];
      local_1c = (undefined2)puVar4[1];
      if (puVar4[8] == 0) {
        local_1a = 0;
      }
      else {
        local_2c = (char *)get_icon_string();
        sVar2 = strlen(local_2c);
        local_1a = (short)sVar2;
      }
      fwrite(&local_28,0x14,1,param_1);
      fwrite((void *)*puVar4,1,puVar4[1],param_1);
      if (puVar4[8] != 0) {
        fwrite(local_2c,1,(size_t)local_1a,param_1);
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar1 < (int)param_2[3]);
  }
  iVar1 = 0;
  iVar5 = 0;
  if (0 < (int)param_2[5]) {
    do {
      dump_directory_tree(param_1,*(undefined4 *)(param_2[6] + iVar5),param_3 + 1);
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar1 < (int)param_2[5]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void pruneSubTree(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
  flush_rendering();
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfb;
      iVar1 = *(int *)(param_1 + 0xc);
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    free(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      update_child_nodes(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) & 0xef;
      iVar1 = *(int *)(param_1 + 0x14);
    } while (iVar3 < iVar1);
  }
  if (iVar1 != 0) {
    free(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void pruneTree(int param_1)

{
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 4;
  update_child_nodes();
  refresh_view();
  update_display();
  redraw_gl_scene();
  glx_swap_buffers_wrapper();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void unpruneTree(int param_1)

{
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfb;
  refresh_directory_view();
  update_display();
  redraw_gl_scene();
  glx_swap_buffers_wrapper();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_tree_node(ulonglong param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  uint extraout_var;
  double dVar6;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  
  if (*(int *)(param_2 + 0x74) << 3 < 0) {
    local_18 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x44dc);
    if ((((*(uint *)(param_2 + 0x74) >> 0x1e & **(uint **)(unaff_gp + -0x7670)) != 0) ||
        ((int)(*(uint *)(param_2 + 0x74) << 2) < 0)) || ((*(ushort *)(param_2 + 0x74) & 1) != 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    iVar5 = *(int *)(unaff_gp + -0x75dc);
    local_c = local_18;
    if (*(short *)(param_2 + 0x76) < 0) {
      (**(code **)(unaff_gp + -0x7b48))();
      (**(code **)(unaff_gp + -0x78f8))
                (param_1 & 0xffffffff00000000,
                 (double)**(float **)(unaff_gp + -0x75c8) *
                 (double)((ulonglong)extraout_var << 0x20));
      (**(code **)(unaff_gp + -0x7b28))();
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_2 + 0x18) + iVar4);
        if (*(int *)(iVar3 + 0x74) << 3 < 0) {
          (**(code **)(unaff_gp + -0x793c))(iVar3,param_3);
          (**(code **)(unaff_gp + -0x7db0))((int)*(short *)(iVar3 + 0x5e));
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            uVar2 = *(undefined4 *)(iVar5 + 0x178);
          }
          else if (*(int *)(iVar3 + 0x74) << 0xd < 0) {
            uVar2 = *(undefined4 *)(iVar5 + 0x168);
          }
          else {
            uVar2 = *(undefined4 *)(iVar5 + 0x17c);
          }
          (**(code **)(unaff_gp + -0x7b9c))(uVar2);
          dVar6 = (double)*(float *)(param_2 + 0x34) + (double)*(float *)(iVar3 + 0x4c);
          local_14 = (float)dVar6;
          local_10 = *(float *)(param_2 + 0x38) + *(float *)(iVar3 + 0x50);
          local_20 = *(undefined4 *)(iVar3 + 0x34);
          local_1c = (float)((double)*(float *)(iVar3 + 0x38) -
                            (double)*(float *)(iVar3 + 0x3c) /
                            (double)((ulonglong)dVar6 & 0xffffffff00000000));
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            (**(code **)(unaff_gp + -0x7e0c))(3);
          }
          (**(code **)(unaff_gp + -0x7b7c))();
          (**(code **)(unaff_gp + -0x7dc0))(&local_14);
          (**(code **)(unaff_gp + -0x7dc0))(&local_20);
          (**(code **)(unaff_gp + -0x7b94))();
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            (**(code **)(unaff_gp + -0x7e0c))(1);
          }
          if ((param_3 == '\0') &&
             ((*(int *)(param_2 + 0x74) << 2 < 0 || (*(int *)(iVar3 + 0x74) << 2 < 0)))) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          (**(code **)(unaff_gp + -0x7de8))();
          iVar1 = *(int *)(param_2 + 0x14);
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < iVar1 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_tree_bounds(int param_1)

{
  int iVar1;
  int unaff_gp;
  double dVar2;
  float fVar3;
  uint in_register_00001080;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_1 != *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44)) {
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))
              (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
    (**(code **)(unaff_gp + -0x7b6c))(*(undefined4 *)(param_1 + 0x58));
    if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
      (**(code **)(unaff_gp + -0x7b6c))
                (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x3c));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    fVar3 = (float)((double)-*(float *)(param_1 + 0x3c) /
                   (double)((ulonglong)in_register_00001080 << 0x20));
    (**(code **)(unaff_gp + -0x7df0))(fVar3,fVar3);
    (**(code **)(unaff_gp + -0x7b28))();
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 0) {
      local_c = *(float *)(iVar1 + 0x34) + *(float *)(param_1 + 0x4c);
      local_10 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x447c);
      dVar2 = (double)*(float *)(iVar1 + 0x38) + (double)*(float *)(param_1 + 0x50);
      local_8 = (float)dVar2;
      local_18 = *(undefined4 *)(param_1 + 0x34);
      local_14 = (float)((double)*(float *)(param_1 + 0x38) -
                        (double)*(float *)(param_1 + 0x3c) /
                        (double)((ulonglong)dVar2 & 0xffffffff00000000));
      local_4 = local_10;
      (**(code **)(unaff_gp + -0x7b7c))();
      (**(code **)(unaff_gp + -0x7dc0))(&local_c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_18);
      (**(code **)(unaff_gp + -0x7b94))();
      (**(code **)(unaff_gp + -0x7cfc))(0);
      (**(code **)(unaff_gp + -0x7b48))();
      (**(code **)(unaff_gp + -0x7b60))(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38))
      ;
      (**(code **)(unaff_gp + -0x7b6c))(*(float *)(iVar1 + 0x3c) * *(float *)(iVar1 + 0x58));
      (**(code **)(unaff_gp + -0x794c))(0,0,0x1f);
      (**(code **)(unaff_gp + -0x7b28))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void free_child_nodes(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xef;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfb;
      iVar1 = *(int *)(param_1 + 0xc);
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    free(*(void **)(param_1 + 0x10));
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      free_child_nodes(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = *(int *)(param_1 + 0x14);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  if (iVar1 != 0) {
    free(*(void **)(param_1 + 0x18));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_child_nodes(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xef;
  (**(code **)(unaff_gp + -0x78e8))();
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfb;
      iVar1 = *(int *)(param_1 + 0xc);
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    (**(code **)(unaff_gp + -0x7f40))(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(unaff_gp + -0x7a18))(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) & 0xef;
      iVar1 = *(int *)(param_1 + 0x14);
    } while (iVar3 < iVar1);
  }
  if (iVar1 != 0) {
    (**(code **)(unaff_gp + -0x7f40))(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void traverse_directories(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) << 3 < 0) {
    if ((*(int *)(param_1 + 0x74) << 2 < 0) || ((*(ushort *)(param_1 + 0x74) & 1) != 0)) {
      render_tree_level(param_1);
    }
    iVar1 = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        traverse_directories(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < *(int *)(param_1 + 0x14));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
