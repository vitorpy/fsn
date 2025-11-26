/**
 * viewport.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "viewport.h"
#include "fsn_types.h"
#include "fsn_state.h"

void configure_viewport(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  int unaff_gp;
  undefined4 uVar3;
  uint uVar4;
  undefined8 in_f4;
  
  uVar4 = (uint)((ulonglong)in_f4 >> 0x20);
  if (param_1 == 0) {
    param_1 = param_3;
  }
  piVar1 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x7994);
  if ((param_2 != (undefined4 *)*piVar1) ||
     (param_1 != *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x7990))) {
    *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x7990) = param_1;
    *piVar1 = (int)param_2;
    (**(code **)(unaff_gp + -0x7ae0))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    (**(code **)(unaff_gp + -0x7cfc))(*(undefined2 *)(*(int *)(unaff_gp + -0x7604) + 2));
    (**(code **)(unaff_gp + -0x7e0c))((int)*(short *)(*(int *)(unaff_gp + -0x75dc) + 0x26));
    (**(code **)(unaff_gp + -0x7ccc))(0);
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b6c))
              ((float)((double)((ulonglong)uVar4 << 0x20) /
                      (double)*(float *)(**(int **)(unaff_gp + -0x7684) + 0x34)));
    (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe),0x78);
    (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xc),0x7a);
    pfVar2 = (float *)**(int **)(unaff_gp + -0x7684);
    if (pfVar2[0xf] == 0.0) {
      uVar3 = (**(code **)(unaff_gp + -0x7b64))
                        (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x104),
                         (pfVar2[1] - pfVar2[6] * pfVar2[8] * pfVar2[2]) /
                         *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x108));
      (**(code **)(unaff_gp + -0x7b6c))(uVar3);
      pfVar2 = (float *)**(int **)(unaff_gp + -0x7684);
    }
    (**(code **)(unaff_gp + -0x7b60))(-*pfVar2,-pfVar2[1]);
    if (param_2 == (undefined4 *)0x0) {
      if (param_1 != 0) {
        (**(code **)(unaff_gp + -0x790c))(param_1);
      }
    }
    else {
      (**(code **)(unaff_gp + -0x7900))(param_1,param_2);
    }
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7e0c))(1);
    if (param_1 == 0) {
      (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x6b9c))();
    }
    else {
      uVar3 = (**(code **)(unaff_gp + -0x7a84))(0);
      if (param_2 == (undefined4 *)0x0) {
        if (-1 < *(int *)(param_1 + 0x74) << 2) {
          (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x6c18))(uVar3);
        }
      }
      else {
        (**(code **)(unaff_gp + -0x7ce4))(uVar3,*param_2);
        (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x6c18))(uVar3);
      }
    }
    (**(code **)(unaff_gp + -0x7ccc))(1);
    if (param_1 == 0) {
      (**(code **)(unaff_gp + -0x7984))();
    }
    else {
      (**(code **)(unaff_gp + -0x7974))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
