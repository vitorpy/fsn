/**
 * gl_utils.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "gl_utils.h"
#include "fsn_types.h"
#include "fsn_state.h"

void set_main_gl_window(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)**(undefined4 **)(unaff_gp + -0x767c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void glx_reset_context_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void gl_picking_setup_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ca8))
            ((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0x10),0x3f800000,0x3d4ccccd,0x43fa0000
            );
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void calc_h_angle(void)

{
  float fVar1;
  uint in_register_00001040;
  float __x;
  undefined4 in_register_00001080;
  
  __x = (float)(((double)(int)*(short *)(curcontext + 0xc) /
                (double)((ulonglong)in_register_00001040 << 0x20)) *
               (double)CONCAT44(in_register_00001080,0x54442d18));
  fVar1 = sinf(__x);
  *(float *)(curcontext + 0x14) = fVar1;
  fVar1 = cosf(__x);
  *(float *)(curcontext + 0x18) = fVar1;
  fVar1 = tanf(__x);
  *(float *)(curcontext + 0x1c) = fVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void calc_v_angle(void)

{
  float fVar1;
  uint in_register_00001040;
  float __x;
  undefined4 in_register_00001080;
  
  __x = (float)(((double)(int)*(short *)(curcontext + 0xe) /
                (double)((ulonglong)in_register_00001040 << 0x20)) *
               (double)CONCAT44(in_register_00001080,0x54442d18));
  fVar1 = sinf(__x);
  *(float *)(curcontext + 0x20) = fVar1;
  fVar1 = cosf(__x);
  *(float *)(curcontext + 0x24) = fVar1;
  fVar1 = tanf(__x);
  *(float *)(curcontext + 0x28) = fVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void redraw_gl_scene(void)

{
  code *pcVar1;
  int unaff_gp;
  undefined1 auStack_8 [8];
  
  pcVar1 = *(code **)(unaff_gp + -0x7b2c);
  *(undefined1 *)(*(int *)(unaff_gp + -0x7f94) + 0x6688) = 0;
  (*pcVar1)(auStack_8,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_gl_state(int param_1,undefined4 param_2)

{
  if (work_proc_id != 0) {
    XtRemoveWorkProc(work_proc_id);
    work_proc_id = 0;
  }
  if (param_1 != 0) {
    work_proc_id = XtAppAddWorkProc(app_context,param_1,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void check_gl_ready(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_gl_context(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684);
  if (*(int *)(iVar1 + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x78fc))(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
  }
  else {
    (**(code **)(unaff_gp + -0x79e4))(*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x48));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void glx_switch_context_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c00));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void destroy_gl_resources(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_gp;
  double dVar3;
  uint uVar4;
  undefined8 in_f10;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  uVar4 = (uint)((ulonglong)in_f10 >> 0x20);
  if (**(char **)(unaff_gp + -0x76c4) != '\0') {
    (**(code **)(unaff_gp + -0x799c))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    (**(code **)(unaff_gp + -0x7cfc))(*(undefined2 *)(*(int *)(unaff_gp + -0x7604) + 2));
    dVar3 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar4 << 0x20);
    (**(code **)(unaff_gp + -0x7e20))
              ((float)((double)*(float *)(param_1 + 0x34) -
                      dVar3 * (double)*(float *)(param_1 + 0x58)),
               (float)((double)*(float *)(param_1 + 0x38) - dVar3));
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      local_c = *(float *)(iVar2 + 0x34) + *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x58);
      local_8 = (float)((double)*(float *)(iVar2 + 0x38) + (double)*(float *)(param_1 + 0x50));
      local_14 = *(undefined4 *)(param_1 + 0x34);
      local_10 = (float)((double)*(float *)(param_1 + 0x38) +
                        (double)-*(float *)(param_1 + 0x3c) /
                        (double)((ulonglong)(double)*(float *)(iVar2 + 0x38) & 0xffffffff00000000));
      (**(code **)(unaff_gp + -0x7b7c))();
      (**(code **)(unaff_gp + -0x7e08))(&local_c);
      (**(code **)(unaff_gp + -0x7e08))(&local_14);
      (**(code **)(unaff_gp + -0x7b94))();
    }
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b78))();
    (**(code **)(unaff_gp + -0x7e10))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x45a0),
               *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x459c));
    uVar1 = (**(code **)(unaff_gp + -0x7a84))(0,param_1);
    (**(code **)(unaff_gp + -0x7da8))(uVar1);
    (**(code **)(unaff_gp + -0x7b28))();
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0xacc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void create_gl_window(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_gp;
  
  piVar5 = *(int **)(unaff_gp + -0x76b8);
  iVar4 = *piVar5;
  iVar3 = 0;
  if (0 < iVar4) {
    piVar1 = (int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c38);
    do {
      if (param_1 == *piVar1) {
        iVar4 = iVar4 + -1;
        if (iVar3 < iVar4) {
          iVar3 = *(int *)(unaff_gp + -0x7f94);
          do {
            piVar2 = piVar1 + 1;
            *piVar1 = piVar1[1];
            piVar1 = piVar2;
          } while (piVar2 < (int *)(iVar4 * 4 + iVar3 + 0x6c38));
        }
        iVar3 = *(int *)(unaff_gp + -0x7fe4);
        *piVar5 = iVar4;
        (*(code *)(iVar3 + 0x1c14))();
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < iVar4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void gl_get_dimensions_wrapper(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7924))();
  }
  else {
    (**(code **)(unaff_gp + -0x79f8))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_gl_lists(void)

{
  int iVar1;
  
  if ((fsn_resources == '\0') && (iVar1 = fam_open_wrapper(&database_root_node), iVar1 < 0)) {
    fprintf((FILE *)0xfb52904,
            "Could not run FAM.  This program requires FAM to be installed.\nYou may need to install eoe2.sw.envm to obtain FAM\n"
           );
                    // WARNING: Subroutine does not return
    exit(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void gl_swap_buffers(undefined1 param_1)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7898))(1 - **(int **)(unaff_gp + -0x7674),param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void gl_push_state(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void gl_pop_state(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7898))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e00),1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_gl_context(int param_1,undefined1 param_2)

{
  int unaff_gp;
  
  if ((param_1 == *(int *)(**(int **)(unaff_gp + -0x7678) + 8)) ||
     (param_1 == *(int *)(**(int **)(unaff_gp + -0x7678) + 0xc))) {
    (**(code **)(unaff_gp + -0x7894))(param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void glx_swap_buffers_wrapper(void)

{
  int unaff_gp;
  
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    (**(code **)(unaff_gp + -0x7acc))();
    (**(code **)(unaff_gp + -0x7894))(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_gl_color(uint param_1)

{
  int unaff_gp;
  
  if ((int)param_1 < 0) {
    if (param_1 >> 0x18 == 0) {
      (**(code **)(unaff_gp + -0x7b9c))
                (*(undefined4 *)
                  ((-param_1 & 0xf) * 0x40 + ((int)(-param_1 & 0xf0) >> 4) * 4 +
                  *(int *)(unaff_gp + -0x7f94) + 0x7010));
    }
    else {
      (**(code **)(unaff_gp + -0x7b9c))(param_1 & 0xffffff);
    }
  }
  else {
    (**(code **)(unaff_gp + -0x7b9c))
              (*(undefined4 *)(param_1 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6fd0));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
