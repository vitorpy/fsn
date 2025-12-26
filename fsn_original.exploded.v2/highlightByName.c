/**
 * highlightByName
 *
 * Extracted from fsn.c lines 66034-66049
 * Category: Other
 */

void highlightByName(undefined4 param_1)

{
  undefined4 uStack_8;
  int iStack_4;
  
  FUN_0042ab1c(param_1,&iStack_4,&uStack_8);
  if (iStack_4 == 0) {
    FUN_004294cc();
  }
  else {
    FUN_00429640(iStack_4,uStack_8,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00429bbc):
     * Function: highlightByName
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls a lookup function (likely `findNodeByName`) with name parameter, getting back a node pointer and some value. If node found, calls `highlightNode(node, value, 0)`. If not found, calls `clearHighlight()`.
     * **2. C pseudocode:**
     * ```c
     * void highlightByName(char *name) {
     * void *node;
     * int value;
     * node = findNodeByName(name, &node, &value);  // GP-0x878c
     * if (node != NULL) {
     * highlightNode(node, value, 0);           // GP-0x874c
     * } else {
     * clearHighlight();                         // GP-0x8744
     * }
     * }
     * ```
     * Note: The first call at GP-0x878c takes `name` (a0), `&node` (a1=sp+36), `&value` (a2=sp+32) as out-params. The branch checks the returned node pointer. GP offsets -30836, -30900, -30908 map to specific GOT entries for the three function calls.
     */
halt_baddata();
}
