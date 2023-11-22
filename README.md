# Printf
````c
int _printf (const char *format, ...);
```
This is the first group project that we have at Holberton School, which consist of replicating the **[printf (3)](http://man7.org/linux/man-pages/man3/printf.3.html)** function of language c, calling it this way **_printf.**

This function is part of the standart library **<stdio>** and to use it we must specify the header file **<stdio.h>**.

Writes the C string pointed by format to the standart output (stdout). If format include format specifiers (subsequences beginning with *%*), the addtional argument following are formatted and inserted in the resulting string replacing their respective specifiers.
### Parameters
> **format** -> C string that contains the text to be written to stdout.
