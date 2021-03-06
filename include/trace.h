/******************************************************************************
  ScrollZ tracing facility

  Copyright (C) Flier 2013
******************************************************************************/

#ifndef __trace_h_
# define __trace_h_

#define SZ_TRACE_SERVER    1<<0
#define SZ_TRACE_CONNECT   1<<1
#define SZ_TRACE_JOIN      1<<2
#define SZ_TRACE_PART      1<<3
#define SZ_TRACE_CHANNEL   1<<4
#define SZ_TRACE_IO        1<<5
#define SZ_TRACE_WHOWAS    1<<6
#define SZ_TRACE_NICK      1<<7
#define SZ_TRACE_WINDOW    1<<8
#define SZ_TRACE_LASTLOG   1<<9

#define SZ_TRACE_ALL       0xffffffff

typedef struct {
    long value;
    char *area;
} TraceArea;

void TraceServerInfo _((int indent, int fullinfo));
void TraceChannelInfo _((int indent, ChannelList *channels));
void TraceNickListInfo _((int indent, NickList *nicks));
void TraceWindowInfo _((int indent, Window *window));

#endif
