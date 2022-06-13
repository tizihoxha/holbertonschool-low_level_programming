#include "main.h"
/**
 * print_most_numbers- Entry point
 *
 * Return: numers from 0 to 9, except 2 & 4
*/
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c != '2') && (c != '4'))
		
			_putchar(c);
	}
	_putchar('\n');
}

