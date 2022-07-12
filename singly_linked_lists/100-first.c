#include <stdio.h>

void before_main(void)__attribute((constructor));
/**
 * first_before_main - function to print text before main funcion is executed
 * Return: no return
 */
void first_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
