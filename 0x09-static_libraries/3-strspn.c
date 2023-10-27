#include "main.h"

/**
 *  _strspn -  a function that gets the length of a prefix substring.
 *  @s: pointer to string to calculate
 *  @accept: pointer to string for matching
 *  Return: number of bytes of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (len);
		}
		i++;
	}
	return (len);
}
