# Printf
````c
int _printf (const char *format, ...);
````
This is the first group project that we have at Holberton School, which consist of replicating the **[printf (3)](http://man7.org/linux/man-pages/man3/printf.3.html)** function of language c, calling it this way **_printf.**

This function is part of the standart library **<stdio>** and to use it we must specify the header file **<stdio.h>**.

Writes the C string pointed by format to the standart output (stdout). If format include format specifiers (subsequences beginning with **%**), the addtional argument following are formatted and inserted in the resulting string replacing their respective specifiers.
### Parameters
> **format** -> C string that contains the text to be written to stdout.
Where the specifier character at the end is the most significant component, since it defines the type and the interpretation of its corresponding argument:
 Specifier | Output | Example
------------ | ------------- |-----------
 c | Character | A
 s | String of characters | Holberton
 % | A % followed by another % character will write a single % to the stream| %
  i and d | Signed decimal integer | 98 
  
##### Return Value.
On **success**, the **total number** of characters written is returned.
If a writing error occurs, the error indicator (ferror) is set and a negative number is returned.
 
## The tasks.
-[x] **I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.** 
Write a function that produces output according to a format.

- Prototype:``int _printf(const char *format, ...);``
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
-- ``c``
-- ``s``
--  ``%``
## Functions we use.
  
 ````c 
int _putchar(char c); /*writes the character c to stdout */
int _printf(const char *format, ...);/* function that produces output according to a format.*/
int print_char(va_list, ls, int *counter);/*writes the character c to stdout */
int print_string(va_list ls, int, *counter);/*writes the character c to stdout */
int print_int(va_list ls, int *counter);/*function that prints an integer */
  ````
  
 ## How to use.
### Complilation
All of the ``.c`` files along with a main.c file are to be compiled with ``gcc 4.8.4`` on Ubuntu 14.04 LTS with the flags ``-Wall Werror`` ``-Westra`` and ``-pedantic.``

The files will be compiled this way:
- ``gcc -Wall -Werror -Wextra -pedantic *.c``
#### Use.
In the ``main.c`` file, use the ``_printf`` function like so:
```c
#include "main.h"
/**
 * main - main function of program
 * Return: always 0
 */
int main(void)
{
	int num;
	char *string;
	
	num = 98;
	string = "Hello, Holberton!"
	_printf("%s is %i.\n", string, num);
	return (0);
} 
````
## Contributors
-[Miguel De Jesus]
-[Jose C. Rivera]
