#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "msgHandling.h"

int fprintf2(FILE *stream, const char *format, ...) {
    va_list argptr;
    va_start(argptr, format);
    int result = vfprintf(stream, format, argptr);
    va_end(argptr);
    return(result);
}

int printf2(const char *format, ...) {
    va_list argptr;
    va_start(argptr, format);
    int result = vprintf(format, argptr);
    va_end(argptr);
    return(result);
}