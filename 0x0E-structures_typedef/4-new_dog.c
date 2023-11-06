#include "dog.h"

int _len(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _len - find the length of string
 * @str: the string
 * Return: length of string
 */

int _len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copy string pointed by src to dest
 * @dest: destination to copy string to
 * @src: the source of the string
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: pointer to name of the dog
 * @age: pointer to age of the dog
 * @owner: pointer to name of owner
 * Description - a function that creates a new dog and
 * store a copy of name and owner
 * Return: NULL if function fails or new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_len(name)));
	dog->owner = malloc(sizeof(char) * (_len(owner)));

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);
}
