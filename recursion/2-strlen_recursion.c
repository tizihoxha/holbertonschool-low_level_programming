#include "main.h"
/**
 * _strlen_recursion - Entry point appends the src string to the dest string
 * @s: pointer
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
