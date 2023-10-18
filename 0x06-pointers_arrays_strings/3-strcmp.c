#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 if strings are equal, -15 if s1 < s2, 15 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-15);
		else if (s1[i] > s2[i])
			return (15);
		i++;
	}


	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-15);
	else
		return (15);

}
