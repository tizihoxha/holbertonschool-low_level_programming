#include "main.h"

/**
* _puts - Entry point pritns a string followed by a newline
*
* @str: string
* Return: always 0
*/
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}


