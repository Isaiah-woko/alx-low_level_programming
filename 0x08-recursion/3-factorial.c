#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: given number to check for factorial
 * Return: 0 0r -1 or the factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
