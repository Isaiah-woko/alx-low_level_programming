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
	size_t high, low, mid, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = 0; i <= high; i++)
		{
			if (i > low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
