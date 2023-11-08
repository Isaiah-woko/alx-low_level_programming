#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer.
 * @array: the array to search from
 * @size: the size of the array
 * @cmp: pointer to the function
 * Return: -1 if not found, else index to first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result = -1;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (result);
		}

		for (i = 0; i < size; i++)
		{
			cmp(array[i]);

			if (cmp(array[i]) > 0)
			{
				result = i;
				break;
			}
			if (cmp(array[i]) == (-1))
			{
				return (result);
			}
		}
	}
	return (result);
}
