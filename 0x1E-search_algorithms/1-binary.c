#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * of integers using the binary search algorithm
 *
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: -1 If value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t end, start, mid, i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i > start)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = start + (end - start) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
