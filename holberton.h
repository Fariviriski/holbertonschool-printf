#ifndef PRINT_F
#define PRINT_F

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

#endif
