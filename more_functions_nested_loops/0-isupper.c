#include "main.h"
/**
 * _isupper - Entry point
 * @c: int
 * Return: 1 if c is uppercase 0 otherwise
*/
int _isupper(int c)
{
	if  ((c > 'A') && (c >= 'Z'))
		return (0);
	else
		return (1);
}


