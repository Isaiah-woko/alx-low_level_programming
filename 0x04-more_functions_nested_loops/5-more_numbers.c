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
		for (ch = 0; ch <=9; ch++)
		{
			_putchar(ch + '0');
		}
		for (j = 10; j <= 14; j++)
		{
			_putchar((j / 10 + '0') * 10 + (j % 10 + '0'));
		}
		 i++;
		 _putchar('\n');
	}
}
