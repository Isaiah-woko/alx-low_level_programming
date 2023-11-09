#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to print between strings
 * @n: the first parameter passed
 * @...: the number of argument
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string2;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string2 = va_arg(strings, char*);

		if (string2 != NULL)
		{
			printf("%s", string2);

			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("(nil)");

			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(strings);
}
