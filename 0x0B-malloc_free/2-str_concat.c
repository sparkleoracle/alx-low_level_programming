#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - the main function that concatenates two strings
 * @s1: parameter for string to concatenate
 * @s2: parameter for other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int j = 0, k = 0, gom1 = 0, gom2 = 0;

	while (s1 && s1[gom1])
		gom1++;
	while (s2 && s2[gom2])
		gom2++;

	s3 = malloc(sizeof(char) * (gom1 + gom2 + 1));
	if (s3 == NULL)
		return (NULL);

	j = 0;
	k = 0;

	if (s1)
	{
		while (j < gom1)
		{
			s3[j] = s1[j];
			j++;
		}
	}

	if (s2)
	{
		while (j < (gom1 + gom2))
		{
			s3[j] = s2[k];
			j++;
			k++;
		}
	}
	s3[j] = '\0';

	return (s3);
}
