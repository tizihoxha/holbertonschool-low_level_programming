#include "main.h"
/**
 *_strncpy - Entry point
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for ( ; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
