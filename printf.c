#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A character string.
 * Desctioption: This function produces output according to a format.
 * The format string is composed of zero or more directives.
 * Return: The number of characters printed or -1 if an error occurs.
 */

int _printf(const char *format, ...)
{

	va_list args;
	int count = 0;
	int i = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			get_conv_func(format[i], args, &count);
		}
	}
	va_end(args);
	return (count);
}
