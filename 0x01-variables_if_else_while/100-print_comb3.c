#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c, i,;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
				if (c < i)
				{
					putchar(c);
					putchar(i);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	putchar('\n');
	return (0);
}
