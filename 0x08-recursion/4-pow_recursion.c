#include "main.h"

/**
 * _pow_recursion - a function that returns the value of
 * x raised to the power of y.
 * @x: the base
 * @y: the power or exponent
 * Return: 1 or -1 or result of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
