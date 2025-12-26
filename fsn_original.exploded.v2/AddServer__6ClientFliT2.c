/**
 * AddServer__6ClientFliT2
 *
 * Extracted from fsn.c lines 78211-78249
 * Category: Other
 */

void AddServer__6ClientFliT2(int *param_1,in_addr_t param_2,u_long param_3,u_long param_4)

{
  undefined2 extraout_var;
  int *piVar1;
  int iVar2;
  sockaddr_in sStack_18;
  int iStack_4;
  
  piVar1 = (int *)__nw__FUi(0x17a0);
  sStack_18.sin_family = 2;
  sStack_18.sin_addr.s_addr = param_2;
  sStack_18.sin_port = pmap_getport(&sStack_18,param_3,param_4,6);
  if ((CONCAT22(extraout_var,sStack_18.sin_port) != 0) && (iStack_4 = socket(2,2,0), -1 < iStack_4))
  {
    iVar2 = connect(iStack_4,(sockaddr *)&sStack_18,0x10);
    if (iVar2 < 0) {
      close(iStack_4);
    }
    else {
      iVar2 = *param_1;
      *param_1 = (int)piVar1;
      piVar1[5] = (int)(piVar1 + 7);
      piVar1[6] = (int)(piVar1 + 7);
      *piVar1 = iStack_4;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[0x2f7] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f8] = (int)(piVar1 + 0x2f9);
      piVar1[0x2f6] = 0;
      piVar1[0x2f5] = 1;
      piVar1[2] = 0;
      piVar1[0x5e7] = 0;
      piVar1[1] = iVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043b1bc):
     * Function: AddServer__6ClientFliT2
     *
     * ## Analysis
     * **1. What it does:**
     * Initializes a Client structure at offset v1: sets up linked list pointers (next/prev at offsets 4, 20, 24), stores the server ID (a3) at offset 0, zeros out several fields, sets a flag to 1 at offset 3028, and links into a server list. Returns the server ID (a3) on success, or -3 after calling an error function.
     * **2. C pseudocode:**
     * ```c
     * // Error path (from 43b294):
     * // a0 = v1 + 3044; call gp[-32164](a0=a3); return -3;
     * // Success path (from 43b2b4):
     * struct Client *client = (struct Client *)v1;
     * struct Client **list_head = (struct Client **)a2;  // sp+64
     * int server_id = a3;
     * client->next = *list_head;           // offset 4
     * *list_head = client;                 // update list head
     * client->self_ptr = &client->data;    // offset 20 = v1+28
     * client->self_ptr2 = &client->data;   // offset 24 = v1+28
     * client->server_id = server_id;       // offset 0
     * client->field_0c = 0;                // offset 12
     * client->field_10 = 0;                // offset 16
     * client->buf_end = v1 + 3044;         // offset 3036 (0xbdc)
     * client->buf_ptr = v1 + 3044;         // offset 3040 (0xbe0)
     * client->buf_count = 0;               // offset 3032 (0xbd8)
     * client->active = 1;                  // offset 3028 (0xbd4)
     * client->field_08 = 0;                // offset 8
     * client->field_179c = 0;              // offset 6044 (0x179c)
     * return server_id;
     * ```
     * Structure size appears to be ~6048 bytes, with an embedded 3008-byte buffer (offsets 36-3043) used for I/O.
     */
halt_baddata();
}
