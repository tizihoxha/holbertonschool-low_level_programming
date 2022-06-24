#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: char
 * Return: 0, 1 + _strlen_recursion(s)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
/**
 * check_palindrome - Entry point
 * @s: char
 * @i: int
 * @n: lenth
 * Return: 0, check_palindrome
 */
int check_palindrome(char *s, int i,  int n)
{
	if (s[i] == s[n/2])
		return (1);
	if (s[i] == s[n - i -1])
		return (check_palindrome(s, i + 1, n));
	return (0);
}
/**
 *  is_palindrome - Entry point
 *  @s: char
 *  Return: 0, is_palindrome
 */
int is_palindrome(char *s)
{
	int i = 0;
	int n = _strlen_recursion(s);

	if (*s == '\0')
		return (1);
	return (check_palindrome(s, i, n));
}

