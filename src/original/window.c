/**
 * window.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "window.h"
#include "fsn_types.h"
#include "fsn_state.h"

void setMainWindow(void)

{
  GLXwinset(display,*(undefined4 *)curcontextwindows);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_main_gl_window(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)**(undefined4 **)(unaff_gp + -0x767c));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setOverlayWindow(void)

{
  GLXwinset(display,*(undefined4 *)(curcontextwindows + 4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setOverviewWindow(void)

{
  GLXwinset(display,main_gl_window);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setOverviewOverlayWindow(void)

{
  GLXwinset(display,overview_gl_context);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_colormap_windows(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  if (0 < numtop) {
    puVar4 = &colormap_window_list;
    do {
      iVar1 = numcmap;
      uVar2 = *puVar4;
      (&current_colormap)[numcmap] = uVar2;
      XSetWMColormapWindows(display,uVar2,&current_colormap,iVar1 + 1);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < numtop);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void newTopWindow(undefined4 param_1)

{
  (&colormap_window_list)[numtop] = param_1;
  numtop = numtop + 1;
  update_colormap_windows();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void deleteTopWindow(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = 0;
  if (0 < numtop) {
    piVar3 = &colormap_window_list;
    do {
      if (param_1 == *piVar3) {
        iVar2 = numtop + -1;
        if (iVar1 < iVar2) {
          do {
            piVar4 = piVar3 + 1;
            *piVar3 = piVar3[1];
            piVar3 = piVar4;
          } while (piVar4 < &colormap_window_list + iVar2);
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < numtop);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void newCmapWindow(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (0 < numcmap) {
    puVar1 = &current_colormap + numcmap;
    do {
      puVar2 = puVar1 + -1;
      *puVar1 = puVar1[-1];
      puVar1 = puVar2;
    } while ((undefined4 *)((int)&current_colormap + 3) < puVar2);
  }
  numcmap = numcmap + 1;
  current_colormap = param_1;
  update_colormap_windows();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setup_window_state(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_gp;
  
  piVar5 = *(int **)(unaff_gp + -0x76b8);
  iVar4 = *piVar5;
  if (0 < iVar4) {
    iVar3 = *(int *)(unaff_gp + -0x7f94);
    puVar1 = (undefined4 *)(iVar4 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6c38);
    do {
      puVar2 = puVar1 + -1;
      *puVar1 = puVar1[-1];
      puVar1 = puVar2;
    } while ((undefined4 *)(iVar3 + 0x6c3cU) <= puVar2);
  }
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c38) = param_1;
  *piVar5 = iVar4 + 1;
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0x1c14))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void deleteCmapWindow(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < numcmap) {
    piVar1 = &current_colormap;
    do {
      if (param_1 == *piVar1) {
        numcmap = numcmap + -1;
        if (iVar3 < numcmap) {
          do {
            piVar2 = piVar1 + 1;
            *piVar1 = piVar1[1];
            piVar1 = piVar2;
          } while (piVar2 < &current_colormap + numcmap);
        }
        update_colormap_windows();
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < numcmap);
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

void setup_toplevel_window(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  char *local_14 [4];
  int local_4;
  
  uVar1 = XtDisplay();
  local_4 = XInternAtom(uVar1,"_SGI_GAMMA_FLAG",1);
  if (local_4 != 0) {
    uVar1 = XtDisplay(param_1);
    iVar2 = XtDisplay(param_1);
    iVar3 = XtDisplay(param_1);
    iVar2 = XGetTextProperty(uVar1,*(undefined4 *)
                                    (*(int *)(iVar2 + 0x8c) + *(int *)(iVar3 + 0x84) * 0x50 + 8),
                             local_14,local_4);
    if (iVar2 != 0) {
      dVar4 = atof(local_14[0]);
      colormap_factor = (float)dVar4;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_window_properties(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7c84))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + -0x16f0,param_2,param_3);
  piVar7 = *(int **)(unaff_gp + -0x767c);
  uVar2 = *(undefined4 *)(unaff_gp + -0x7630);
  *(undefined4 *)(*piVar7 + 0x10) = uVar1;
  (**(code **)(unaff_gp + -0x785c))(*(undefined4 *)(*piVar7 + 0x10),uVar2);
  iVar8 = *(int *)(unaff_gp + -0x7f60);
  iVar3 = *(int *)(unaff_gp + -0x7f60);
  *param_2 = *(int *)(unaff_gp + -0x7f60) + 0x1399;
  param_2[1] = 1;
  param_2[2] = iVar8 + 0x1d63;
  param_2[3] = 1;
  param_2[4] = iVar3 + 0x2375;
  param_2[5] = 1;
  iVar3 = (**(code **)(unaff_gp + -0x7af8))
                    (*(undefined4 *)(*piVar7 + 0x10),*(int *)(unaff_gp + -0x7fa4) + -0x16e8,param_2,
                     3);
  (**(code **)(unaff_gp + -0x7c78))(iVar3);
  (**(code **)(unaff_gp + -0x7c74))
            (iVar3,4,0,*(int *)(unaff_gp + -0x7fe0) + -0x5bc0,*(undefined4 *)(*piVar7 + 8));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))(iVar3,*(int *)(unaff_gp + -0x7fa4) + -0x16d8,param_2,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe0) + -0x60a0,
             *(undefined4 *)(*piVar7 + 8));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))(iVar3,*(int *)(unaff_gp + -0x7fa4) + -0x16d0,param_2,0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(undefined4 *)(unaff_gp + -0x79b4),
             *(undefined4 *)(*piVar7 + 8));
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7b20))(iVar3,*(int *)(unaff_gp + -0x7fa4) + -0x16c8,param_2,0);
  *(undefined4 *)(*piVar7 + 0x18) = uVar1;
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*piVar7 + 0x18));
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*piVar7 + 0x18),*(int *)(unaff_gp + -0x7f60) + 0x124b,
             *(int *)(unaff_gp + -0x7fe0) + -0x5d28,*(undefined4 *)(*piVar7 + 8));
  iVar9 = *(int *)(unaff_gp + -0x7f60);
  iVar8 = *(int *)(unaff_gp + -0x7f60);
  iVar4 = *(int *)(unaff_gp + -0x7f60);
  iVar5 = *(int *)(unaff_gp + -0x7f60);
  iVar6 = *(int *)(unaff_gp + -0x7f60);
  *param_2 = *(int *)(unaff_gp + -0x7f60) + 0x27b5;
  param_2[1] = 1;
  param_2[2] = iVar9 + 0x1d63;
  param_2[3] = 1;
  param_2[4] = iVar8 + 0x2375;
  param_2[5] = 1;
  param_2[6] = iVar4 + 0x1399;
  param_2[7] = 3;
  param_2[8] = iVar5 + 0x13eb;
  param_2[9] = iVar3;
  param_2[10] = iVar6 + 0x19aa;
  param_2[0xb] = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7ef0))
                    (*(undefined4 *)(*piVar7 + 0x10),*(int *)(unaff_gp + -0x7fa4) + -0x16bc,param_2,
                     6);
  *(undefined4 *)(*piVar7 + 0x14) = uVar1;
  (**(code **)(unaff_gp + -0x7c74))
            (*(undefined4 *)(*piVar7 + 0x14),4,0,*(undefined4 *)(unaff_gp + -0x787c),
             *(undefined4 *)(*piVar7 + 8));
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*piVar7 + 0x14));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_context_windows(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_gp;
  
  puVar2 = (undefined4 *)**(undefined4 **)(unaff_gp + -0x7684);
  puVar1 = (undefined4 *)**(undefined4 **)(unaff_gp + -0x7680);
  puVar3 = puVar2;
  do {
    puVar4 = puVar3 + 3;
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    puVar1[2] = puVar3[2];
    puVar1 = puVar1 + 3;
    puVar3 = puVar4;
  } while (puVar4 != puVar2 + 0x315);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_window_property(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  piVar1 = (int *)(param_2 + param_3 * 8);
  iVar5 = *(int *)(unaff_gp + -0x7f60);
  *piVar1 = *(int *)(unaff_gp + -0x7f60) + 0x19b3;
  piVar1[1] = 0;
  piVar1 = (int *)(param_2 + (param_3 + 1) * 8);
  iVar3 = *(int *)(unaff_gp + -0x7f5c);
  iVar4 = *(int *)(unaff_gp + -0x7f98);
  *piVar1 = iVar5 + 0x19aa;
  piVar1[1] = 0;
  piVar1 = (int *)(param_2 + (param_3 + 2) * 8);
  piVar1[1] = iVar4 + 0x79c4;
  *piVar1 = iVar3 + 0x35b;
  uVar2 = (**(code **)(unaff_gp + -0x7f44))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x1c74,param_2,param_3 + 3);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10) = uVar2;
  (**(code **)(unaff_gp + -0x7c78))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7c98))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10));
  (**(code **)(unaff_gp + -0x7e84))(**(undefined4 **)(unaff_gp + -0x75fc),uVar2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_window_entry(undefined4 param_1)

{
  int iVar1;
  int unaff_gp;
  char local_1d;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  float local_c;
  float local_8;
  undefined1 local_4 [2];
  undefined1 local_2 [2];
  
  iVar1 = (**(code **)(unaff_gp + -0x7844))
                    (param_1,local_2,local_4,&local_8,&local_c,local_10,local_14,&local_18,&local_1c
                     ,&local_1d);
  if (iVar1 != 0) {
    iVar1 = **(int **)(unaff_gp + -0x7684);
    if (local_18 != *(int *)(iVar1 + 0x44)) {
      if (local_18 == 0) {
        (**(code **)(unaff_gp + -0x79c8))(0);
        iVar1 = **(int **)(unaff_gp + -0x7684);
      }
      else {
        (**(code **)(unaff_gp + -0x79c4))();
        iVar1 = **(int **)(unaff_gp + -0x7684);
      }
    }
    if (local_1c != *(int *)(iVar1 + 0x48)) {
      if (local_1c == 0) {
        (**(code **)(unaff_gp + -0x79c0))(0);
      }
      else {
        (**(code **)(unaff_gp + -0x79bc))();
      }
    }
    if (local_1d == '\0') {
      *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc50) = 0;
      (**(code **)(unaff_gp + -0x7aa8))((double)local_8,(double)local_c);
    }
    else {
      (**(code **)(unaff_gp + -0x7aa8))((double)local_8,(double)local_c);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
