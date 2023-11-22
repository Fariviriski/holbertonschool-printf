#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: string
 * Return: value
 */

int _printf(const char *format, ...)
{
        va_list ls;
        int counter = 0;

        va_start(ls, format);

        if (ls == NULL || format == NULL)
                return (-1);

        for (; *format != '\0'; format++)
        {
                if (*format == '%')
                {
                        format++;

                        switch (*format)
                        {
                                case 'c':
                                                print_char(ls, &counter);
                                                break;
                                case 's':
                                                print_string(ls, &counter);
                                                break;
                                case '%':
                                                print_percent(&counter);
                                                break;
                                case 'd': case 'i':
                                                        print_int(ls, &counter);
                                                        break;
                                default:
                                                _putchar('%');
                        }
                }
                else
                {
                        _putchar(*format);
                        counter++;
                }
        }
        va_end(ls);
        return (counter);
}
