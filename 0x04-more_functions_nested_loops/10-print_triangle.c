#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int hor, ver;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hor = 1; hor <= size; hor++)
		{
			for (ver = 1; ver <= size; ver++)
			{
				if ((hor + ver) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
