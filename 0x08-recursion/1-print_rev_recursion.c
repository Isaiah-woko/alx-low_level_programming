#include "main.h"

/**
 * _print_rev_recursion - function that reverses a string
 * @s: string to reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
