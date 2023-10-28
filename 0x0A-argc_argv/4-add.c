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
	int num, digit, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (num = 1; num < argc; num++)
		{
			for (digit = 0; argv[num][digit]; digit++)
			{
				if (argv[num][digit] < '0' || argv[num][digit] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[num]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
