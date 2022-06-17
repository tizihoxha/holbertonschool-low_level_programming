#include "main.h"
/**
 * _memcpy - Entry point
 * @c: character
 * @s: string
 * Return: s + i , null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[1] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
