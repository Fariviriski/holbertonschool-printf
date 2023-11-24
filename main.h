#ifndef main_h
#define main_h

/* libraries */
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/* prototypes */
int _printf(const char *format, ...);

int print_char(va_list ls, int *counter);

int print_string(va_list ls, int *counter);

int print_percent(int *counter);

int print_int(va_list ls, int *counter);

int _putchar(char c);
#endif
