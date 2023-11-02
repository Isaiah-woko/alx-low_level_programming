#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements to allocate space
 * @size: size(in bytes) of each element
 * Return:  If nmemb = 0, size = 0, or the function fails - NULL.
 * Otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memory = malloc(nmemb * size);

	if (memory == NULL)
	{
		return (NULL);
	}

	fill = memory;

	for (i = 0; i < (size * nmemb); i++)
	{
		fill[i] = '\0';
	}

	return (memory);
}
