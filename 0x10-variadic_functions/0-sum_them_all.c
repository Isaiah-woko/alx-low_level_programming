#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of parameters passed to function
 * @...: the variable number of parameters
 * Return: 0 if n == 0, else return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	int value;

	va_list sum;

	va_start(sum, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		value = va_arg(sum, int);
		total += value;
	}
	va_end(sum);
	return (total);
}
