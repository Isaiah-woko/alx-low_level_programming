#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: the rows of the matrix
 * @height: the columns of the matrix
 * Return: a pointer to a 2d array or NULL upon failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}

		for (i = 0; i < height; i++)
		{
			array[i] = (int *)malloc(width * sizeof(int));

			if (array[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(array[j]);
				}
			}
		}

		return (array);
}
