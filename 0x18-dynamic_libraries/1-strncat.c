#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_pos = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_pos] != '\0' && n > 0)
	{
		dest[dest_len] = src[src_pos];
		dest_len++;
		src_pos++;
		n--;
	}

	dest[dest_len] = '\0';

	return (dest);
}
