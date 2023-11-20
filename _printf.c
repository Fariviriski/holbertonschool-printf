#include "main.h"


/**
 * run_printf - Reads through the format string for _printf.
 * @format: Character string to print - may contain directives.
 * @output: A buffer_t struct containing a buffer.
 * @args: A va_list of arguments.
 * Return: The number of characters stored to output.
 */

int run_printf(const char *format, va_list args, buffer_t *output)
{
	int i, ret = 0;
	char wid, prec, tmp;
	unsigned char flag, len;
	unsigned int (*f)(va_list, buffer_t *,\
			unsigned char, char, char, unsigned char);

	for (i = 0; *(format + i); i++)
	{
		len = 0;
		if (*(format + i) == '%')
		{

			f = handle_specifiers(format + i + tmp + 1);
			if (f != NULL)
			{
				i += tmp + 1;
				ret += f(args, output, flag, wid, prec, len);
				continue;
			}
			else if (*(format + i + tmp + 1) == '\0')
			{
				ret = -1;
				break;
			}
		}

	return (ret);
}

/**
 * _printf - outputs formatted string
 * @format: characters to print, may contain directives
 * @Return: number of characters print
 */

int _printf (const char, *format, ...)
{
	buffer_t *out;
	va_list args;
	int ret;

	if (format == NULL)
		return (-1);
	out = init_buffer();
	if (out == NULL)
		return (-1);

	va_start(args, format);

	ret = run_printf(format, args, output);

	return (ret);
}
