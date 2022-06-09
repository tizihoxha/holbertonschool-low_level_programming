#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * prints requirements
 * Return void (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int nr;

	for (nr = 1; nr <= 10; nr++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
