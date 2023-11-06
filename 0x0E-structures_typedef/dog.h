#ifndef DOG_H
#define DOG_H


#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - A code that contains the structure for do
 * @name: the name of the dog
 * @age: yhe age of the dog
 * @owner: the name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
