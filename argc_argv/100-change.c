#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array that contains prog arg
 * Return: 0, 1
*/
int main(int argc, char *argv[])
{
	int cash, change;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	for (change = atoi(argv[1]); change > 0; cash++)
	{
		if (change >= 25)
			change = change - 25;
		else if (change >= 10)
			change = change - 10;
		else if (change >= 5)
			change = change - 5;
		else if (change >= 2)
			change = change - 2;
		else if (change >= 1)
			change = change - 1;
	}
	printf("%d\n", cash);
	return (0);
}
