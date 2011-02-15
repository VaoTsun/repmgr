/*
 * strutil.h
 *
 * Copyright (C) 2ndQuadrant, 2010-2011
 *
 */

#ifndef _STRUTIL_H_
#define _STRUTIL_H_

#include <stdlib.h>


#define QUERY_STR_LEN	8192
#define MAXLEN			1024
#define MAXLINELENGTH	4096
#define MAXVERSIONSTR	16
#define MAXCONNINFO		1024


extern int xsnprintf(char *str, size_t size, const char *format, ...);
extern int sqlquery_snprintf(char *str, const char *format, ...);
extern int maxlen_snprintf(char *str, const char *format, ...);

#endif	/* _STRUTIL_H_ */