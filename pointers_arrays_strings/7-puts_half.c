#include "main.h"
/**
 * puts_half - Entry point prints half of a string, followed by a new line
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int n = 0;
	int half;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 0)
		half = n / 2;
	else
		half = (n + 1) / 2;
	while (half < n)

	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
