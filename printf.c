#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return:
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
int _printf(const char *format, ...)

	int count = 0;
	va_list args;
	va_start(args, format);
while (*format)
{
	if (*format == '%')
	{
		format++;
		if (*format == 'c')
		{
			char c = va_arg(args, int);
			count += _putchar(c);
		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char*);
			while (*str)
			{
				count += _putchar(*str++);
			}
		}
		else if (*format == '%')
		{
			count += _putchar('%');
		}
		else
		{
			count += _putchar('%');
			count += _putchar(*format);
		}
	}
	else
	{
		count += _putchar(*format);
	}
		format++;
	}
	va_end(args);
	return count;
	}

	/**
	 * _putchar - writes a character to stdout.
	 * @c: the character to print.
	 *
	 * Return:
	 */
	int _putchar(char c)
	{
		return write(1, &c, 1);
	}



