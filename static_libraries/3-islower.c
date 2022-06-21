#include "main.h"

/**
 * _islower - entry point
 * @c: in _islower character to be checked
 *
 * Return: 0 if lowercase,or 1 in uppercase
 */

int _islower(int c)
{
	if (c > 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
