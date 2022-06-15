#include "main.h"

/**
* rev_string - Entry point reverses followed by a newline
*
* @s: pointer
* Return: always 0
*/
void rev_string(char *s)
{
	int c = 0;
	int rev;
	char tmp;

	while (s[c] != '\0')
	{
		c++;
	}
	for (rev = c - 1; rev >= c / 2 ; rev--)
	{
		tmp = s[rev];
		s[rev] = s[c - rev - 1];
		s[c - rev - 1] = tmp;

	}
}


