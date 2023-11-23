#include "main.h"

/**
 * get_bit - a function that returns the value
 * of a bit at a given index.
 *
 * @n: number to get bit
 * @index: the index to shift to
 * Return: index on success or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int shiftBit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	shiftBit = (n >> index) & 1;

	return (shiftBit);
}
