#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 *
 * Rerurn: void
 */

void more_numbers(void)
{
	int ch, j;
	int i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			ch = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				ch = j % 10;
			}
			_putchar(ch + 48);
		}
		_putchar('\n');
		i++;
	}
}
