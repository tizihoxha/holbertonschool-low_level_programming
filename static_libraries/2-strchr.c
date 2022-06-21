#include "main.h"
/**
 * _strchr - Entry point
 * @c: character
 * @s: string
 * Return: s + i , null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
