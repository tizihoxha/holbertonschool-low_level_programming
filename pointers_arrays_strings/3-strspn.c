#include "main.h"
/**
 * _strspn - Entry point
 * @accept: int
 * @s: string
 * Return: j
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j =  0;
	int i, b;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				j++;
				break;
			}
			if (accept[b + i] == '\0')
				return (j);
		}
	}
	return (j);
}
