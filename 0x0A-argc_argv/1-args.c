#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", --argc);

	return (0);
}
