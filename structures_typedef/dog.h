#ifndef _DOG_H
#define _DOG_H
/**
 * dog_p - typedef for struct dog
 */
typedef struct dog dog_p;

/**
 * struct dog - stores several infos for dog
 * @name: name of the dog
 * @age: age off the dog
 * @owner: who owns the dog
 * struct description: this structure holds the name of the dog, age & owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_p *new_dog(char *name, float age, char *owner);
void free_dog(dog_p *d);

#endif
