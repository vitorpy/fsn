/**
 * events.h - Header for events module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_EVENTS_H
#define FSN_EVENTS_H

#include "fsn_types.h"

void setup_event_handlers(void);
void handleEvents(void);
void process_pending_events(void);

#endif /* FSN_EVENTS_H */
