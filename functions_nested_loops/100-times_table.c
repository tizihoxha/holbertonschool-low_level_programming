#include "main.h"

/**
 * print_times_table - Entry point
 * @n: int code checks
 * Return: successful 0
 */

void print_times_table(int n)
{
	int n1, n2, exp;

	if (n >= 0 && n < 16)
	{
		for (n1 = 0; n1 < n; n1++)
		{
			for (n2 = 0; n2 < n; n2++)
			{
				exp = (n1 * n2);
				if (n2 == 0)
					_putchar('0');
				else if (exp < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(exp + '0');
				}
				else if (exp >= 10 && exp < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((exp / 10) + '0');
					_putchar((exp % 10) + '0');
				}
				else if (exp >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((exp / 100) + '0');
					_putchar(((exp % 100) / 10) + '0');
					_putchar((exp % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
