/**
 * network.h - Header for network module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_NETWORK_H
#define FSN_NETWORK_H

#include "fsn_types.h"

void connect_network(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void __ct__6ClientFv(undefined4 *param_1);
void AddServer__6ClientFliT2(int *param_1,in_addr_t param_2,u_long param_3,u_long param_4);
void WriteToServer__6ClientFiPcT1(undefined4 param_1,int param_2,void *param_3,size_t param_4);
void DoClientIn__6ClientFP11ServerEntry(undefined4 param_1,int *param_2);
void ReadFromServer__6ClientFiPcT1(int *param_1,int param_2,undefined1 *param_3,int param_4);
void create_socket(undefined4 *param_1);

#endif /* FSN_NETWORK_H */
