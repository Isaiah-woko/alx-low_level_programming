#include  "main.h"

/**
 * print_most_numbers -  a function that prints the numbers, from 0 to 9
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
