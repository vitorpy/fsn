/**
 * FUN_0042a4d4
 *
 * Extracted from fsn.c lines 66452-66519
 * Ghidra address: 0x0042a4d4
 * Category: Other
 */

void FUN_0042a4d4(uint param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int unaff_gp;
  
  puVar6 = curcontextid /* was: *(uint **)(unaff_gp + -0x7674) */ /* -> curcontextid */;
  if (param_1 != *puVar6) {
    piVar7 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    iVar5 = *piVar7;
    iVar2 = iVar5->flags /* was: *(int *)(iVar5 + 0x44) */;
    if (iVar2 != 0) {
      iVar2->render_flags /* was: *(byte *)(iVar2 + 0x74) */ = iVar2->render_flags /* was: *(byte *)(iVar2 + 0x74) */ & 0xdf;
      iVar5 = *piVar7;
    }
    iVar2 = iVar5->bound_min_x /* was: *(int *)(iVar5 + 0x48) */;
    if (iVar2 != 0) {
      iVar2->child_center /* was: *(byte *)(iVar2 + 0x28) */ = iVar2->child_center /* was: *(byte *)(iVar2 + 0x28) */ & 0xef;
    }
    iVar2 = context /* was: *(int *)(unaff_gp + -0x75a8) */ /* -> context */;
    iVar5 = contextwindows /* was: *(int *)(unaff_gp + -0x75a4) */ /* -> contextwindows */;
    piVar1 = curcontextwindows /* was: *(int **)(unaff_gp + -0x767c) */ /* -> curcontextwindows */;
    *piVar7 = iVar2 + param_1 * 0xc54;
    *piVar1 = iVar5 + param_1 * 0x38;
    *altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */ = iVar2 + (1 - param_1) * 0xc54;
    piVar8 = altcontextwindows /* was: *(int **)(unaff_gp + -0x7678) */ /* -> altcontextwindows */;
    piVar1 = curcontextflag /* was: *(int **)(unaff_gp + -0x7670) */ /* -> curcontextflag */;
    *puVar6 = param_1;
    *piVar8 = iVar5 + (1 - param_1) * 0x38;
    *piVar1 = 1 << (param_1 & 0x1f);
    iVar5 = *piVar7;
    iVar2 = iVar5->flags /* was: *(int *)(iVar5 + 0x44) */;
    if (iVar2 != 0) {
      iVar2->render_flags /* was: *(byte *)(iVar2 + 0x74) */ = iVar2->render_flags /* was: *(byte *)(iVar2 + 0x74) */ | 0x20;
      iVar5 = *piVar7;
    }
    iVar2 = iVar5->bound_min_x /* was: *(int *)(iVar5 + 0x48) */;
    if (iVar2 != 0) {
      iVar2->child_center /* was: *(byte *)(iVar2 + 0x28) */ = iVar2->child_center /* was: *(byte *)(iVar2 + 0x28) */ | 0x10;
    }
    if (param_2 == '\0') {
      uVar3 = /* TODO: GP:-0x7c04 */ (**(code **)(unaff_gp + -0x7c04) /* -> EXTERNAL_0x0f67dc58 */)(*(undefined4 *)(*piVar8 + 0x28));
      uVar4 = /* TODO: GP:-0x7c98 */ (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x7678) /* -> altcontextwindows */ + 0x28));
      /* TODO: GP:-0x7ebc */ (**(code **)(unaff_gp + -0x7ebc) /* -> EXTERNAL_0x0f54cc6c */)(uVar3,uVar4);
      uVar3 = /* TODO: GP:-0x7c04 */ (**(code **)(unaff_gp + -0x7c04) /* -> EXTERNAL_0x0f67dc58 */)
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x28));
      uVar4 = /* TODO: GP:-0x7c98 */ (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) /* -> curcontextwindows */ + 0x28));
      /* TODO: GP:-0x7e50 */ (**(code **)(unaff_gp + -0x7e50) /* -> EXTERNAL_0x0f552f84 */)(uVar3,uVar4);
      (**(code **)(unaff_gp + -0x79d0) /* -> FUN_0041c9e8 */)() /* =FUN_0041c9e8 */;
      (**(code **)(unaff_gp + -0x798c) /* -> FUN_004207b4 */)() /* =FUN_004207b4 */;
      piVar7 = altcontext /* was: *(int **)(unaff_gp + -0x7680) */ /* -> altcontext */;
      *(undefined1 *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0xc53) = 0;
      *(undefined1 *)(*piVar7 + 0xc53) = 1;
      (**(code **)(unaff_gp + -0x7abc) /* -> FUN_0040d804 */)() /* =FUN_0040d804 */;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a4d4):
     * Function: FUN_0042a4d4
     *
     * Looking at this assembly with GP offset resolution:
     * **1. What it does:**
     * Calls two GL functions (likely `popmatrix` and `swapbuffers` based on GP offsets -31184 and -31116), then clears a flag at offset 0xC53 in one context structure and sets it to 1 in another context, then calls a third function (likely `gflush` at -31420).
     * **2. C pseudocode:**
     * ```c
     * popmatrix();
     * swapbuffers();
     * /* GP -30340 and -30336 are likely curcontext and altcontext pointers */
     * ((char*)(*curcontext_ptr))[0xC53] = 0;   /* clear flag in current context */
     * ((char*)(*altcontext_ptr))[0xC53] = 1;   /* set flag in alternate context */
     * gflush();
     * return;
     * ```
     * The 0xC53 offset (3155 decimal) into the context structure is likely a "needs_redraw" or "buffer_dirty" flag - this pattern suggests double-buffering where after swapping, the back buffer (now front) is marked clean and the new back buffer is marked dirty.
     */
halt_baddata();
}
