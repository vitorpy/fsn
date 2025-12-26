/**
 * isSuperByType__14ByteCodeLoaderFPcT1
 *
 * Extracted from fsn.c lines 73115-73130
 * Category: Other
 */

void isSuperByType__14ByteCodeLoaderFPcT1(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00434cd0(param_1,param_3);
  if (iVar1 != 0) {
    puVar2 = iVar1->child_right /* was: *(undefined4 **)(iVar1 + 0x30) */;
    while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
      puVar2 = (undefined4 *)puVar2[1];
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434de0):
     * Function: isSuperByType__14ByteCodeLoaderFPcT1
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function (likely strcmp at GP-32564), then if result is 0 (match), walks a linked list at offset +48 of the result, comparing each node's first field against s1. Returns 1 if match found, 0 if list exhausted, -1 if initial call returned NULL.
     * 2. **C pseudocode:**
     * ```c
     * int isSuperByType(ByteCodeLoader *this, char *type1, char *type2) {
     * void *result = some_lookup_func(type2);  // jalr at 434e08
     * if (result == NULL)
     * return -1;
     * struct node *p = *(struct node **)((char *)result + 48);  // offset 0x30
     * while (p != NULL) {
     * if (strcmp(type1, p->name) == 0)  // GP-32564 is strcmp
     * return 1;  // found supertype match
     * p = p->next;  // offset 4 is next pointer
     * }
     * return 0;  // not a supertype
     * }
     * ```
     * The function checks if type1 is a supertype of type2 by looking up type2's inheritance chain (linked list at offset +48) and comparing each parent type name against type1.
     */
halt_baddata();
}
