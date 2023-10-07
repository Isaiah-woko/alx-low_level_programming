#include <stdio.h>

/**
 * main - Entry point
 * Description: prints base 10 numbers
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
