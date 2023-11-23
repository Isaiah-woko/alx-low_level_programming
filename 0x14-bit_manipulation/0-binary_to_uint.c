#include "main.h"

int _strlen(const char *str);


/**
 * _strlen - check length of string
 * @str: string to check
 * Return: length of string
 */

int _strlen(const char *str)
{
	int len  = 0;

	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint -  a function that converts a binary
 * number to an unsigned int.
 * @b: a poiner to the string
 * Return: the converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int len;
	int base = 1, i;

	if (b == NULL)
	{
		return (0);
	}

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimal += base;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		base *= 2;
	}

	return (decimal);
}
