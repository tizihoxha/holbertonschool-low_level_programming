#include "main.h"

/**
* puts2 - Entry point prints every other character of a string
*
* @str: string
* Return: always 0
*/
void puts2(char *str)
{
	int c = 0;
	int len;

	while (str[c] != '\0')
	{
		c++;
	}
	for (len = 0; len < c ; len = len + 2)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}


