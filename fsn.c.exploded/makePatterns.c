/**
 * makePatterns
 *
 * Extracted from fsn.c lines 50794-50810
 * Category: Other
 */

void makePatterns(void)

{
  int iVar1;
  undefined *puVar2;
  
  defpattern(1,0x10,&render_buffer_1);
  iVar1 = 0;
  puVar2 = &render_buffer_2;
  do {
    defpattern((iVar1 + 2) * 0x10000 >> 0x10,0x10,puVar2);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x20;
  } while (iVar1 != 3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
