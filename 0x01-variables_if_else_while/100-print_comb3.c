#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (!(i == 0 && j == 0))
			{
				if (!(i == 1 && j == 0))
				{
					putchar(',');
					putchar(' ');
				}

			}
			putchar(i + '0');
			putchar(j + '0');
		}
	}
	putchar('\n');
	return (0);
}


