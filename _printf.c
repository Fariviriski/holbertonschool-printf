#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: string
 * Return: value
 */

int _printf(const char *format, ...)
{
	va_list ls;
	int count = 0, j, i;
	_printf_functions types[] = {{"c", _printf_char},
		{"s", _print_string}, {"i", _printf_char},
		{"d", _print_int}, {"%", _print_mod},
		{NULL, NULL}};
	if (format == NULL)
	{
		return (-1);
	}
	va_start(ls, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			while (format[++i] == ' ')
			;
			for (j = 0; types[j].convertion_specifier != NULL; j++)
			{
				if (format[i] == *types[j].convertion_specifier)
				{
					count += types[j].function(ls);
					break;
				}
			}
			if (types[j].convertion_specifier == NULL)
			{
				write(1, &format[i], 1);
				count++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(ls);
	return (count);
}
