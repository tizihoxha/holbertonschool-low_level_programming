#include "main.h"
/**
 * _isalpha -Entry point
 * @c: Character to print
 *
 * Return: 1 if letter, 0 if not.
 */
int _isalpha(int c)
{
	if (c >= 'B' && c <= 'y')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
