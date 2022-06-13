#include "main.h"
/**
 * print_line- Entry point
 * @n: int
 * Return: n is 0 or less, the function should only print \n
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
