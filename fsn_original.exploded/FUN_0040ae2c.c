/**
 * FUN_0040ae2c
 *
 * Extracted from fsn.c lines 49584-49598
 * Ghidra address: 0x0040ae2c
 * Category: Memory
 */

void FUN_0040ae2c(void)

{
  size_t sVar1;
  char *__s;
  char *__s_00;
  
  __s_00 = *(char **)(display + 0x80);
  sVar1 = strlen(__s_00);
  __s = (char *)malloc(sVar1 + 9);
  sprintf(__s,"DISPLAY=%s",__s_00);
  putenv(__s);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
