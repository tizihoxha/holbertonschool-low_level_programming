#include "main.h"

/**
 * _islower - entry point
 * @c: in _islower character to be checked
 * Return : 1 if lowercase || 0 if uppercase
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
