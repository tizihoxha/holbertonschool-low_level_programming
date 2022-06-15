#include "main.h"

/**
 * _strlen - entry point
 *
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}


