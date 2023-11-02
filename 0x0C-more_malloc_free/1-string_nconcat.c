#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string to concat
 * @s2: second string to concat
 * @n: first n bytes of s2
 * Return: pointer to allocated mem or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
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
	if (n >= len2)
	{
		n = len2;
	}
	s3 = malloc(len1 + n + 1);

	if (s3 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			s3[i] = s1[i];
		}
		for (j = 0; j < n; j++)
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
