#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: error if argument is wromg
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	int result = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((s == '/' || s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = (get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}
