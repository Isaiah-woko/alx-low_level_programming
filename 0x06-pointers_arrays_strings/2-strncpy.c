#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: characters tocheck
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_pos = 0;
	int dest_pos = 0;

	while (src[src_pos] != '\0' && n > 0)
	{
		dest[dest_pos] = src[src_pos];
		dest_pos++;
		src_pos++;
		n--;
	}

	while (n > 0)
	{
		dest[dest_pos] = '\0';
		dest_pos++;
		n--;
	}

	dest[dest_pos] = '\0';

	return (dest);
}
