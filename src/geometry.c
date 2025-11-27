/**
 * geometry.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "geometry.h"
#include "fsn_types.h"
#include "fsn_state.h"

void init_display_lists(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int unaff_gp;
  undefined4 uVar9;
  uint uVar10;
  undefined8 in_f4;
  short local_1000 [2048];
  
  uVar10 = (uint)((ulonglong)in_f4 >> 0x20);
  piVar5 = *(int **)(unaff_gp + -0x76d4);
  if (*piVar5 != 0) {
    (**(code **)(unaff_gp + -0x7de0))();
    (**(code **)(unaff_gp + -0x7d70))(local_1000,0x800);
    piVar3 = *(int **)(unaff_gp + -0x7684);
    (**(code **)(unaff_gp + -0x7b6c))
              ((float)((double)((ulonglong)uVar10 << 0x20) / (double)*(float *)(*piVar3 + 0x34)));
    (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar3 + 0xe),0x78);
    (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar3 + 0xc),0x7a);
    iVar1 = *piVar3;
    uVar9 = (**(code **)(unaff_gp + -0x7b64))
                      (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x104),
                       (*(float *)(iVar1 + 4) -
                       *(float *)(iVar1 + 0x18) * *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 8))
                       / *(float *)(*(int *)(unaff_gp + -0x75dc) + 0x108));
    (**(code **)(unaff_gp + -0x7b6c))(uVar9);
    (**(code **)(unaff_gp + -0x7b60))(-*(float *)*piVar3,-((float *)*piVar3)[1]);
    (**(code **)(unaff_gp + -0x7934))(*piVar5);
    iVar1 = (**(code **)(unaff_gp + -0x7d6c))(local_1000);
    if (iVar1 < 0) {
      (**(code **)(unaff_gp + -0x7930))(*piVar5);
    }
    iVar4 = 0;
    iVar7 = 0;
    if (0 < iVar1) {
      puVar8 = *(uint **)(unaff_gp + -0x7670);
      do {
        iVar6 = (int)local_1000[iVar4];
        if (iVar6 == 1) {
          iVar2 = (**(code **)(unaff_gp + -0x7a7c))((int)local_1000[iVar4 + 1]);
          *(byte *)(iVar2 + 0x74) =
               (byte)((*(uint *)(iVar2 + 0x74) >> 0x1e | *puVar8) << 6) |
               *(byte *)(iVar2 + 0x74) & 0x3f;
        }
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 1 + iVar6;
      } while (iVar7 != iVar1);
    }
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
