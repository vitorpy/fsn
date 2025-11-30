/**
 * FUN_0040cf50
 *
 * Extracted from fsn.c lines 50493-50503
 * Ghidra address: 0x0040cf50
 * Category: Other
 */

void FUN_0040cf50(void)

{
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6688) != '\0') {
    (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
