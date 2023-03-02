#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @n: number of elements
 * @a: array to be compared
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int swap, start, end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		swap = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = swap;
		start++;
		end--;
	}
}
