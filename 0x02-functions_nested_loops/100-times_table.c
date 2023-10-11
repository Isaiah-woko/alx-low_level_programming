#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: number to be checked
 *
 * Return: void
 */


void print_times_table(int n)
{

	int i, j, res;

	if (n > 15 || n < 0)
	return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (j == 0)
			{
				_putchar(res + '0');
			}
			if (res < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((res / 10) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
