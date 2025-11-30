/**
 * setMatrix__13ByteCodedIconFRA4_A4_Cf
 *
 * Extracted from fsn.c lines 57736-57742
 * Category: Other
 */

void setMatrix__13ByteCodedIconFRA4_A4_Cf(int param_1,void *param_2)

{
  bcopy(param_2,(void *)(param_1 + 0x20),0x40);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
