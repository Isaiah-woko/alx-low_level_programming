#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal.
 * @n: number of times
 * Return: 0
 */

void print_line(int n)
{
	char i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
