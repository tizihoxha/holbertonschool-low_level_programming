#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog_struct;
	int i = 0;
	int lenname = 0;
	int lenowner = 0;

	for (; name[i] != '\0'; i++)
		lenname++;
	for (i = 0; owner[i] != '\0'; i++)
		lenowner++;
	my_dog_struct = malloc(sizeof(dog_t));
	if (my_dog_struct == NULL)
		return (NULL);
	my_dog_struct->name = malloc(sizeof(char) * (lenname + 1));
	if (my_dog_struct->name == NULL)
	{
		free(my_dog_struct);
		return (NULL);
	}
	my_dog_struct->owner = malloc(sizeof(char) * (lenowner + 1));
	if (my_dog_struct->owner == NULL)
	{
		free(my_dog_struct->name);
		free(my_dog_struct);
		return (NULL);
	}
	my_dog_struct->age = age;
	for (i = 0; name[i] != '\0'; i++)
		my_dog_struct->name[i] = name[i];
	my_dog_struct->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		my_dog_struct->owner[i] = owner[i];
	my_dog_struct->owner[i] = '\0';
	return (my_dog_struct);
}
