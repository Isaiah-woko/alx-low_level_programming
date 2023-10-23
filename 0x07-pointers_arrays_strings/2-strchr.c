#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s: pointer to the string
 * @c: character to be found
 * Return: pointer to first occurrenece of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

		return ('\0');
}
