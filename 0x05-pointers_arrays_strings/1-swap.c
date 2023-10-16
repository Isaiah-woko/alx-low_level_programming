#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: interger to swap
 * @b: second integer to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
