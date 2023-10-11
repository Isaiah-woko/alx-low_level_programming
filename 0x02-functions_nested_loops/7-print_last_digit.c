#include "main.h"

/**
 * print_last_digit - Returns and prints the last digit of a number.
 * @i: digit to be checked
 * Return: The last digit of the integer 'num'
 */

int print_last_digit(int i)
{
	int num;

	num = i % 10;
	if (i < 0)
	{
		num = -num;
	}
	_putchar(num + '0');

	return (num);

}
