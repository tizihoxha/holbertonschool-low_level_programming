#include "main.h"
/**
 * str_concat - Entry point
 * @s1: pointer
 * @s2: pointer
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int i, j, c, stop;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	string = malloc(sizeof(char) * (i + j + 1));

	if (string == NULL)
	{
		free(string);
		return (NULL);
	}

	for (c = 0; c < i; c++)
		string[c] = s1[c];

	stop = j;
	for (j = 0; j <= stop; c++, j++)
		string[c] = s2[j];

	return (string);
}
