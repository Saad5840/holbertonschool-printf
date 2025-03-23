#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: character to print
 *
 * Return: 1 on success, -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a single character
 * @args: arguments list containing character
 *
 * Return: number of characters printed (1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - prints a string
 * @args: arguments list containing string
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str;
	int len = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}

	return (len);
}

/**
 * print_percent - prints the percent character
 *
 * Return: number of characters printed (1)
 */
int print_percent(void)
{
	return (_putchar('%'));
}
