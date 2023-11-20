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
			flag = handle_flags(format + i + 1);
			tmp = count_one_bits(flag);
			wid = handle_width(args, format + i + tmp + 1, &tmp);
			prec = handle_precision(args, format + i + tmp + 1, &tmp);
			len = handle_length(format + i + tmp + 1);
			tmp += (len != 0) ? 1 : 0;
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
		ret += _memcpy(output, (format + i), 1);
		i += (len != 0) ? 1 : 0;
	}
	cleanup(args, output);
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
