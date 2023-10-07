#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all combinations of single digit
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 0)
		{

		putchar(',');
		putchar(' ');
		}
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
