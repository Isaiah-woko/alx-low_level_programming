#include "main.h"

/**
 *  print_diagonal -  a function that draws a straight line in the terminal.
 * @n: number of times
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j > 1)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
