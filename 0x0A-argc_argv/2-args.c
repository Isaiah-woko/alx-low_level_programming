#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed
 * @argc: the number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
