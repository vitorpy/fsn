/**
 * messages.h - Header for messages module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_MESSAGES_H
#define FSN_MESSAGES_H

#include "fsn_types.h"

void deleteMessage(undefined4 *param_1);
void message(undefined4 param_1,int param_2);
undefined4 set_status_message(const char *param_1,int param_2);
void filemessage(char *param_1,char *param_2,undefined4 param_3);
void show_error_message(undefined4 param_1);
void display_status_message(char *param_1);
void readingDatabaseMessage(void);
void buildingDatabaseMessage(void);
void format_log_message(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
void show_controls(void);

#endif /* FSN_MESSAGES_H */
