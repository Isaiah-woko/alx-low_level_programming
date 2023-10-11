#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Entry point
 * Description:  a function that prints 10 times the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
