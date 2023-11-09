#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @separator: pointer to string to be printed betweenn numbers
 * @n: the number of parameters passed
 * @...: tghe variable number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(nums);
}
