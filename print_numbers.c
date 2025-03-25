#include "main.h"

/**
 * print_integer - prints an integer number
 * @args: argument list containing integer
 *
 * Return: number of characters printed
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int divisor = 1, len = 0;
	unsigned int num;

	if (n < 0)
	{
		len += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num / divisor >= 10)
		divisor *= 10;

	while (divisor)
	{
		len += _putchar((num / divisor) % 10 + '0');
		divisor /= 10;
	}

	return (len);
}
