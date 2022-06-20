#include "main.h"
/**
 * _print_rev_recursion- Entry point prints string in reverse
 * @s: pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
	return;
}
