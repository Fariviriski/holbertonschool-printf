#include "main.h"

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
