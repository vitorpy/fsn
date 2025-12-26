/**
 * LoadIntlResources
 *
 * Extracted from fsn.c lines 71739-71803
 * Category: Memory
 */

void LoadIntlResources(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  undefined4 *__ptr;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  __ptr = (undefined4 *)malloc(0xcb0);
  iVar3 = 0;
  ppuVar7 = &PTR_s__SGI_MMX_mwm_nogrmem_10009670;
  iVar5 = 4;
  iVar6 = 8;
  iVar4 = 0xc;
  puVar2 = __ptr;
  do {
    puVar2[1] = 0;
    puVar2[2] = 0xf661c25;
    puVar2[3] = 4;
    puVar2[5] = 0xf661c25;
    puVar2[4] = iVar3;
    iVar3 = iVar3 + 0x10;
    *puVar2 = *ppuVar7;
    puVar8 = ppuVar7[1];
    puVar2[0xb] = iVar5;
    puVar2[0xc] = 0xf661c25;
    puVar2[10] = 4;
    puVar2[9] = 0xf661c25;
    puVar2[8] = 0;
    puVar2[6] = puVar8;
    iVar5 = iVar5 + 0x10;
    puVar2[7] = ppuVar7[2];
    puVar8 = ppuVar7[3];
    puVar2[0x12] = iVar6;
    puVar2[0x13] = 0xf661c25;
    puVar2[0x11] = 4;
    puVar2[0x10] = 0xf661c25;
    puVar2[0xf] = 0;
    puVar2[0xd] = puVar8;
    iVar6 = iVar6 + 0x10;
    puVar2[0xe] = ppuVar7[4];
    puVar8 = ppuVar7[5];
    puVar2[0x19] = iVar4;
    puVar2[0x1a] = 0xf661c25;
    puVar2[0x18] = 4;
    puVar2[0x17] = 0xf661c25;
    puVar2[0x16] = 0;
    puVar2[0x14] = puVar8;
    iVar4 = iVar4 + 0x10;
    puVar2[0x15] = ppuVar7[6];
    ppuVar1 = ppuVar7 + 7;
    ppuVar7 = ppuVar7 + 8;
    puVar2[0x1b] = *ppuVar1;
    puVar2 = puVar2 + 0x1c;
  } while (iVar4 != 0x1dc);
  XtGetSubresources(param_1,_imsgs,param_2,param_3,__ptr,0x74,0,0);
  free(__ptr);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004338f8):
     * Function: LoadIntlResources
     *
     * Looking at this assembly:
     * 1. **What it does:** Completes a structure copy loop (copying 32 bytes per iteration into 112-byte destination slots), then calls an X Toolkit function (likely XtVaGetSubresources or similar) with 8 arguments including a size constant 116 (0x74), followed by calling free() on the temporary buffer.
     * 2. **C pseudocode:**
     * ```c
     * /* Loop epilogue - copying last two words of each 32-byte source chunk */
     * dst[21] = src[6];  /* offset 84 = 21 words */
     * dst[27] = src[7];  /* offset 108 = -4 from next 112-byte slot */
     * /* Loop: a3 += 16, v0 += 32, v1 += 112, until a3 == t3 */
     * /* After loop completes: */
     * XtVaGetSubresources(widget, subresource_ptr, arg1, arg2,
     * temp_buffer,  /* sp+16 */
     * 116,          /* size = 0x74 = 116 bytes */
     * NULL, NULL);  /* sp+24, sp+28 = terminators */
     * free(temp_buffer);
     * return;
     * ```
     * The 116 (0x74) is likely `sizeof(SomeResourceStruct)`. The loop copies internationalization resource data from a compact format into a larger padded structure, then XtVaGetSubresources resolves the actual values, and finally the temp buffer is freed.
     */
halt_baddata();
}
