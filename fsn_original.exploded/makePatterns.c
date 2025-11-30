/**
 * makePatterns
 *
 * Extracted from fsn.c lines 65539-65555
 * Category: Other
 */

void makePatterns(void)

{
  int iVar1;
  undefined *puVar2;
  
  defpattern(1,0x10,&DAT_10007908);
  iVar1 = 0;
  puVar2 = &DAT_10007928;
  do {
    defpattern((iVar1 + 2) * 0x10000 >> 0x10,0x10,puVar2);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x20;
  } while (iVar1 != 3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
