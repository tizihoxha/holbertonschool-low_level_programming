#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: successful void, prints * table
 */
void times_table(void)
{
	int n1, n2, exp;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			exp = (n1 * n2);
			if (n2 == 0)
			{
				_putchar(exp + '0');
			}
			else if (exp < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(exp + '0');
			}
			else if (exp >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((exp / 10) + '0');
				_putchar((exp % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
