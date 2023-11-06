#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type
 * @d: pointer to the structure of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
