/**
 * copycontext
 *
 * Extracted from fsn.c lines 51761-51782
 * Category: Other
 */

void copycontext(void)

{
  pointer_____offset_0x10017720___ puVar1;
  pointer_____offset_0x10018374___ puVar2;
  pointer_____offset_0x10017720___ puVar3;
  pointer_____offset_0x10017720___ puVar4;
  
  puVar1 = curcontext + 0xc54;
  puVar2 = altcontext;
  puVar3 = curcontext;
  do {
    puVar4 = puVar3 + 0xc;
    *(undefined4 *)puVar2 = *(undefined4 *)puVar3;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(puVar3 + 8);
    puVar2 = puVar2 + 0xc;
    puVar3 = puVar4;
  } while (puVar4 != puVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
