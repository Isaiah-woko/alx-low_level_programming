#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string to check
 * @needle: substring to check for occurrence
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		int j = 0;
		int match = 1;

		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				match = 0;
				break;
			}
			j++;
		}

		if (match)
		{
			return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}
