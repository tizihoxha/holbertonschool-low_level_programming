#include "main.h"
/**
 * _strpbrk - Entry point
 * @accept: int
 * @s: string
 * Return: s + 1, null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, b;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			return (s + i);
		}
	}
	return ('\0');
}
