#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the fizzbuzz chalange
 * Return: 0
 */

int main(void)
{
	int i = 1;

	//for (i = 1; i <= 100; i++)
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}
		i++;
	}
	printf("\n");

	return (0);
}
