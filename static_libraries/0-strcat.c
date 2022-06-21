#include "main.h"
/**
 * _strcat - Entry point appends the src string to the dest string
 * @src: string
 * @dest: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int w1 = 0;
	int w2 = 0;

	while (dest[w1] != '\0')
	{
		w1++;
	}
	while (src[w2] != '\0')
	{ dest[w1] = src[w2];
		w1++;
		w2++;
	}
	dest[w1] = '\0';
	return (dest);
}
