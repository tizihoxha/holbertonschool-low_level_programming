#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	int b;

	for (s = '0'; s <= '9'; s++)
	{
		for (b = s + 1; b <= '9'; b++)
		{
			putchar(s);
			putchar(b);
			if (s < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
