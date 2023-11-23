#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: first number to check
 * @m: second number to check
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_Res = n ^ m;
	int count = 0;

	while (xor_Res)
	{
		count += xor_Res & 1;
		xor_Res >>= 1;
	}

	return (count);
}
