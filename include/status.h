/**
 * status.h - Header for status module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_STATUS_H
#define FSN_STATUS_H

#include "fsn_types.h"

undefined4 set_status_message(const char *param_1,int param_2);
void display_scan_status(undefined4 param_1,char *param_2,undefined4 param_3);
void display_status_message(char *param_1);
void set_status_text(void);
void update_status_display(undefined4 param_1);
void get_file_status(void);

#endif /* FSN_STATUS_H */
