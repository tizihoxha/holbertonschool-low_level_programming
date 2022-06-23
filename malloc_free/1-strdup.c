#include "main.h"
/**
 * _strdup - Entry point
 * @str: string
 * Return: NULL, string
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		string[j] = str[j];

	return (string);
}
