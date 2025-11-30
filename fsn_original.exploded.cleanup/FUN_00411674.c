/**
 * FUN_00411674
 *
 * Extracted from fsn.c lines 52339-52362
 * Ghidra address: 0x00411674
 * Category: Memory
 */

void FUN_00411674(void)

{
  char *pcVar1;
  size_t sVar2;
  char acStack_104 [260];
  
  pcVar1 = getenv("WINEDITOR");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = getenv("EDITOR");
    if (pcVar1 == (char *)0x0) {
      putenv("WINEDITOR=jot");
    }
    else {
      sprintf(acStack_104,"WINEDITOR=winterm -c %s",pcVar1);
      sVar2 = strlen(acStack_104);
      pcVar1 = (char *)XtMalloc(sVar2 + 1);
      pcVar1 = strcpy(pcVar1,acStack_104);
      putenv(pcVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
