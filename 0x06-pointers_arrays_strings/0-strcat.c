#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: pointer direction
 * @src: pointer source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i =  0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	do {
		dest[i] = src[j];
		i++;
		j++;
	} while (src[j - 1] != '\0');

	return (dest);
}
