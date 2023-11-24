#ifndef main_h
#define main_h

/* libraries */
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/* prototypes */
int _printf(const char *format, ...);

/**
 * struct _printf_function - interface for printing
 * @convertion_specifier: char that identifies the type of arg
 * @function: func to run if id matches
 */
typedef struct _printf_function
{
char *convertion_specifier;
int (*function)(va_list a);
} _printf_functions;

int print_char(va_list ls, int *counter);

int print_string(va_list ls, int *counter);

int print_percent(int *counter);

int print_int(va_list ls, int *counter);

int _putchar(char c);
#endif
