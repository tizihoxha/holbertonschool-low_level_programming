#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: numbers 0-14, 10 times
*/
void more_numbers(void)
{
	int i, d;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
			{
				_putchar((d / 10) + '0');
			}
			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
