#include "main.h"

/**
* _strncat - Entry point
* @src: string
* @dest: string
* @n: int
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0;
	int s2 = 0;

	while (dest[s1] != '\0')
		s1++;
	while (src[s2] != '\0' && s2 < n)
	{
		dest[s1 + s2] = src[s2];
		s2++;
	}
	dest[s1 + s2] = '\0';
	return (dest);
}

