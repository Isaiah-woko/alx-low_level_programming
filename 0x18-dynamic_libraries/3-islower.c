#include "main.h"
#include <stdio.h>

/**
 * _islower - Entry point
 * Description: a function that checks for lowercase character.
 * @c: The character to check
 * Return: 1 or 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
