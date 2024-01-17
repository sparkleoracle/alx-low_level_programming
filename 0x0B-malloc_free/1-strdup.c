#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - the main function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string parameter to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int j, ven;

	j = 0;
	ven = 0;

	if (str == NULL)
		return (NULL);

	while (str[ven])
		ven++;

	dup = malloc(sizeof(char) * (ven + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[j] = str[j]) != '\0')
		j++;

	return (dup);
}
