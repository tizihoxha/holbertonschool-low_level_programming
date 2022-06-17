#include "main.h"
/**
 * leet - Entry point
 * @str: string
 * @n: int
 * Return: str
 */
char *leet(char *str)
{
	int i[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int s1, s2;

	for (s2 = 0; str[s2] != '\0'; s2++)
	{
		for (s1 = 0; i[s1] != '\0'; s1++)
			if (str[s2] == i[s1])
				(str[s2] = n[s1]);

	}
	return (str);
}
