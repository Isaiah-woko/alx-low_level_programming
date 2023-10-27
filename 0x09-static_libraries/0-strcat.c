#include "main.h"

/**
 * _strcat -  a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_pos = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_pos] != '\0')
	{
		dest[dest_len] = src[src_pos];
		dest_len++;
		src_pos++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
