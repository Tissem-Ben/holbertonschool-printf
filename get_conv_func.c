#include "main.h"
/**
 * get_conv_func - Entry point
 * @directive: The format specifier character
 * @args: The va_list containing the arguments to be processed
 * @count: Pointer to an integer to count the number of characters printed
 * Description: Matches specifier character with corresponding function.
 * Return: Nothing.
 */
void get_conv_func(char directive, va_list args, int *count)
{
	specifier_option options[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_pourcentage},
		{"i", print_integer},
		{"d", print_integer},
		{NULL, NULL}
	};
	int i = 0;

	while (options[i].specifier != NULL)
	{
		if (*options[i].specifier == directive)
		{
			options[i].f(args, count);
			return;
		}
		i++;
	}
	putchar('%');
	putchar(directive);
	*count += 2;
}
