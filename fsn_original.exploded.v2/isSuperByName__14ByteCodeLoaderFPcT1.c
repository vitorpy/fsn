/**
 * isSuperByName__14ByteCodeLoaderFPcT1
 *
 * Extracted from fsn.c lines 73094-73109
 * Category: Other
 */

void isSuperByName__14ByteCodeLoaderFPcT1(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00434be4(param_1,param_3);
  if (iVar1 != 0) {
    puVar2 = iVar1->child_right /* was: *(undefined4 **)(iVar1 + 0x30) */;
    while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
      puVar2 = (undefined4 *)puVar2[1];
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434d40):
     * Function: isSuperByName__14ByteCodeLoaderFPcT1
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function (likely strcmp via GP offset -32564). If the first call returns NULL, returns -1. Otherwise traverses a linked list at offset +48 of the result, comparing each node's first field against s1. Returns 1 if match found, 0 if list exhausted.
     * 2. **C pseudocode:**
     * ```c
     * int isSuperByName(ByteCodeLoader *this, char *name, char *superName) {
     * void *result = lookupClass(name, superName);  // jalr at 434d68
     * if (result == NULL)
     * return -1;
     * struct node *p = *(struct node **)((char *)result + 48);  // offset 0x30
     * while (p != NULL) {
     * if (strcmp(this->name, p->className) == 0)  // GP-32564 = strcmp
     * return 1;  // is a superclass
     * p = p->next;  // offset 4 is next pointer
     * }
     * return 0;  // not found in superclass chain
     * }
     * ```
     * The linked list structure appears to be: `{ char *className; struct node *next; }` - a superclass inheritance chain. The function checks if `superName` is in the inheritance hierarchy of `name`.
     */
halt_baddata();
}
