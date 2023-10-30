#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string to concat
 * @s2: second string to concat
 * Return: pointer to cewly allocated space in memeory with
 * concatenated string or NULL upon failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *s3;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = (s1 == NULL) ? "" : s1;
		s2 = (s2 == NULL) ? "" : s2;
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	s3 = (char *)malloc(len1 + len2 + 1);

	if (s3 != NULL)
	{
		int i, j;

		for (i = 0; i < len1; i++)
		{
			s3[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			s3[i + j] = s2[j];
		}
		s3[i + j] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (s3);
}
