#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed
 * @argc: the number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: i if it is an error
 */
int main(int argc, char *argv[])
{
	int num1, num2, total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	total = num1 * num2;

	printf("%d\n", total);
	return (0);
}
