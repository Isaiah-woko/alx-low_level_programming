#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: pointer to string to copy
 * Return: NULL if fails or pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *duplicatedstr;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	/*find length*/

	while (str[len] != '\0')
	{
		len++;
	}
	duplicatedstr = (char *)malloc(len + 1);

	if (duplicatedstr != NULL)
	{
		for (i = 0; i < len; i++)
		{
			duplicatedstr[i] = str[i];
		}
		duplicatedstr[len] = '\0';
	}
	return (duplicatedstr);
}
