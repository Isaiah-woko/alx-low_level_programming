#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Description: prints the alphabets in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
