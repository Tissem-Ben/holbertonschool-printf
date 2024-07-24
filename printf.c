#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according 
 * @format: a character string containing the format string.
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)

	int count = 0;
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
{
	if (format[i] == '%')
	{
		i++;
		if (format[i])
		{
		get_conv_func(format[i], args,&count);
		}
	}
	else
	{
		count += _putchar(format[i]);
	}
	i++;
}
va_end(args);
return count;
}
