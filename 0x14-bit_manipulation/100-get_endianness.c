#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endians
 */

int get_endianness(void)
{
	EndianCheck check_endian;

	check_endian.i = 1;
	return (check_endian.c[0]);
}
