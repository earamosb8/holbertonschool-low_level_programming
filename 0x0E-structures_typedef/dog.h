#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of dog.
 * @name: dogs name
 * @owner: ownwers dog
 * @age: age of dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

