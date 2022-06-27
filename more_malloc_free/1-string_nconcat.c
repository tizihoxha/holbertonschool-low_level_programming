#include "main.h"
/**
 * string_nconcat - Entry point
 * @s1: string 1
 * @s2: string 2
 * @n: byte size
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int lens1, lens2, lenstr, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
	{
		;
	}
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
	{
		;
	}
	if (n > lens2)
	n =  lens2;
	lenstr = lens1 + n;
	str = (malloc(lenstr + 1));
			if (str == NULL)
			return (NULL);
			for (i = 0; i < lenstr; i++)
			if (i < lens1)
			str[i] = s1[i];
			else
			str[i] = s2[i - lens1];
			str[i] = '\0';
			return (str);
}
