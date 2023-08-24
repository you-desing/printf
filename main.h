#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int _putchar(char c);
int _printf(const char *format, ...);
int Pri_String(va_list s);
int Pri_int(va_list i);
int Pri_Char(va_list c);
#endif
