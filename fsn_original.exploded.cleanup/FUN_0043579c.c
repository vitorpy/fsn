/**
 * FUN_0043579c
 *
 * Extracted from fsn.c lines 73737-73747
 * Ghidra address: 0x0043579c
 * Category: Other
 */

void FUN_0043579c(int param_1,uint param_2)

{
  int unaff_gp;
  
  if ((param_1 != 0) && ((param_2 & 1) != 0)) {
    (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
