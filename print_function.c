#include "main.h"
/**
 * print_char - Entry point
 * @args: The va_list containing the character to print
 * @count: Pointer to an integer to count the number of characters printed
 * Description: This function prints a character
 * Return: Always 0.
 */
void print_char(va_list args, int *count)
{
	char caractere = va_arg(args, int);

	putchar(caractere);
	(*count)++;
}
/**
 * print_string - Entry point
 * @args: The va_list containing the string to print
 * @count: Pointer to an integer to count the number of characters printed
 * Description: This function prints a string
 * Return: Always 0
 */
void print_string(va_list args, int *count)
{
	char *string = va_arg(args, char *);
	int i = 0;

	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[i] != '\0')
	{
		putchar(string[i]);
		(*count)++;
		i++;
	}
}

/**
 * print_pourcentage - Entry point
 * @count: Pointer to an integer to count the number of characters printed
 * @args: The va_list containing the string to print
 * Description: This function prints a percentage character ("%").
 * Return: Always 0
 */
void print_pourcentage(va_list args, int *count)
{
	(void)args;
	putchar('%');
	(*count)++;
}
