#include <stdio.h>

/**
 * main - Entry point
 * Description: print base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char i;
	char j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

		return (0);
}
