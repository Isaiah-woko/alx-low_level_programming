#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 *
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: -1 If value is not present in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (array[high] == array[low])
		{
			if (array[low] == value)
				return (low);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low]))
		 * (value - array[low]));

		if (pos < low || pos > high)
			break;

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
