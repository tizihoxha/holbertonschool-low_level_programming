#include "main.h"
/**
 * print_sign - Entry point
 * @n: integer
 *
 * Return: -1 if n less than 0, 0 if n equals 0, other cases returns 1.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
