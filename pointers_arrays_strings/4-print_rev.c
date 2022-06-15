#include "main.h"

/**
* print_rev - Entry point pritns a string in reverse followed by a newline
*
* @s: pointer
* Return: always 0
*/
void print_rev(char *s)
{
	int c = 0;
	int rev;

	while (s[c] != '\0')
	{
		c++;
	}
	for(rev = c - 1; rev >= 0; rev --)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}


