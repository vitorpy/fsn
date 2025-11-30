/**
 * FUN_0042ccac
 *
 * Extracted from fsn.c lines 67912-67966
 * Ghidra address: 0x0042ccac
 * Category: Other
 */

void FUN_0042ccac(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined4 local_18;
  uint local_14;
  
  ppuVar3 = &PTR_s_shrinkOnZoom_10008950;
  if (PTR_s_shrinkOnZoom_10008950 != (undefined *)0x0) {
    do {
      if (*(char *)(ppuVar3 + 3) != *ppuVar3[1]) {
        *ppuVar3[1] = *(char *)(ppuVar3 + 3);
        local_14 = (uint)(byte)*ppuVar3[1];
        local_18 = 0xe3f48f1;
        XtSetValues(ppuVar3[4],&local_18,1);
      }
      ppuVar1 = ppuVar3 + 5;
      ppuVar3 = ppuVar3 + 5;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  ppuVar3 = &PTR_s_monitorTimeout_100089f0;
  if (PTR_s_monitorTimeout_100089f0 != (undefined *)0x0) {
    do {
      if (ppuVar3[5] != *(undefined **)ppuVar3[1]) {
        *(undefined **)ppuVar3[1] = ppuVar3[5];
        local_14 = *(uint *)ppuVar3[1];
        local_18 = 0xf66187b;
        XtSetValues(ppuVar3[6],&local_18,1);
      }
      ppuVar1 = ppuVar3 + 7;
      ppuVar3 = ppuVar3 + 7;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  if (PTR_s_mouseSpeed_10008b5c == (undefined *)0x0) {
    ppuVar3 = &PTR_s_groundColor_1000935c;
    puVar2 = PTR_s_groundColor_1000935c;
    while (puVar2 != (undefined *)0x0) {
      if (ppuVar3[2] != *(undefined **)ppuVar3[1]) {
        *(undefined **)ppuVar3[1] = ppuVar3[2];
      }
      ppuVar1 = ppuVar3 + 4;
      ppuVar3 = ppuVar3 + 4;
      puVar2 = *ppuVar1;
    }
    FUN_0042d618();
    FUN_0042d6f0();
    FUN_0042c970(0xffffffff);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
