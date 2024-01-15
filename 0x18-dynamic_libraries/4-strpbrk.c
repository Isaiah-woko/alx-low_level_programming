#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer to string to check
 * @accept: pointer to string for matching
 * Return: pointer to s or Null if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
