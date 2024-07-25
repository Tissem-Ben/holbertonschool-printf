#include "main.h"
/**
<<<<<<< HEAD
 *  * print_char - Entry point
 *   * @args: The va_list containing the character to print
 *    * @count: Pointer to an integer to count the number of characters printed
 *     * Description: This function prints a character
 *      * Return: Always 0.
 *       */
=======
 * print_char - Entry point
 * @args: The va_list containing the character to print
 * @count: Pointer to an integer to count the number of characters printed
 * Description: This function prints a character
 * Return: Always 0.
 */
>>>>>>> oussama
void print_char(va_list args, int *count)
{
	char caractere = va_arg(args, int);

	putchar(caractere);
	(*count)++;
}
/**
<<<<<<< HEAD
 *  * print_string - Entry point
 *   * @args: The va_list containing the string to print
 *    * @count: Pointer to an integer to count the number of characters printed
 *     * Description: This function prints a string
 *      * Return: Always 0
 *       */
=======
 * print_string - Entry point
 * @args: The va_list containing the string to print
 * @count: Pointer to an integer to count the number of characters printed
 * Description: This function prints a string
 * Return: Always 0
 */
>>>>>>> oussama
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
<<<<<<< HEAD
 *  * print_pourcentage - Entry point
 *   * @count: Pointer to an integer to count the number of characters printed
 *    * @args: The va_list containing the string to print
 *     * Description: This function prints a percentage character ("%").
 *      * Return: Always 0
 *       */
=======
 * print_pourcentage - Entry point
 * @count: Pointer to an integer to count the number of characters printed
 * @args: The va_list containing the string to print
 * Description: This function prints a percentage character ("%").
 * Return: Always 0
 */
>>>>>>> oussama
void print_pourcentage(va_list args, int *count)
{
	(void)args;
	putchar('%');
	(*count)++;
}
/**
<<<<<<< HEAD
 *  * print_integer - Converts an integer to a string of characters
 *   * @args: Variable argument list containing the integer to convert
 *    * @count: Pointer to an integer to track the number of characters
 *     * Description:
 *      * This function takes a variable argument list containing an integer,
 *       * converts it to a string of characters, and increments the character
 *        * count. It handles negative numbers and prints them in the correct
 *         * order. The converted string is then printed.
 *          * The maximum length of the converted string is assumed to be 20
 *           * characters.
 *            */
=======
 * print_integer - Converts an integer to a string of characters
 * @args: Variable argument list containing the integer to convert
 * @count: Pointer to an integer to track the number of characters
 * Description:
 * This function takes a variable argument list containing an integer,
 * converts it to a string of characters, and increments the character
 * count. It handles negative numbers and prints them in the correct
 * order. The converted string is then printed.
 * The maximum length of the converted string is assumed to be 20
 * characters.
 */
>>>>>>> oussama
void print_integer(va_list args, int *count)
{
	long int number = va_arg(args, int);
	long int divisor, digit, subtractNum;
	long int divisorValue = 1;

	if (number < 0)
	{
		putchar('-');
		(*count)++;
		(number) = -number;
	}
	divisor = number;
	while (divisor / 10 != 0)
	{
		divisor /= 10;
		divisorValue *= 10;
	}
	while (divisorValue >= 10)
	{
		digit = number / divisorValue;
		subtractNum = digit * divisorValue;
		putchar(digit + '0');
		number = number - subtractNum;
		divisorValue /= 10;
		(*count)++;
	}
	putchar (number + '0');
	(*count)++;
}
