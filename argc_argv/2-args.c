#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array that contains prog arg
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
