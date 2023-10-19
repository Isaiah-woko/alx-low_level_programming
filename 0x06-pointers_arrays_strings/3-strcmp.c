#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 if strings are equal, -15 if s1 < s2, 15 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{

	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}


	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (*s1 - *s2);

}
