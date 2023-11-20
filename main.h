#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <srdarg.h>

/**
 * struct convert - difens structure for symbls and nums
 *
 * @sim: operator
 * @f: assosiated function
 */

struct convert
{
  char sim;
  int(*f)(char, va_list);
};
typedef struct convert conver_t;

/*main functions*/

int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);

/* Conversion Specifier Functions */
unsigned int convert_c(va_list args, buffer_t *output,
		unsigned char flags, char wid, char prec, unsigned char len);
unsigned int convert_s(va_list args, buffer_t *output,
		unsigned char flags, char wid, char prec, unsigned char len);
unsigned int convert_di(va_list args, buffer_t *output,
		unsigned char flags, char wid, char prec, unsigned char len);

#endif
