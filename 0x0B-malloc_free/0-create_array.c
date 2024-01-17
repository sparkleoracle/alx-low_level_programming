#include <stdlib.h>
#include "main.h"

/**
 * *create_array - the main function that creates an array of chars
 * and initializes it with a specific char
 * @size: first parameter of size of the array to create
 * @c: second parameter for char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int j = 0;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(sizeof(char) * size);

	if (s == NULL)
		return (0);

	while (j < size)
	{
		*(s + j) = c;
		j++;
	}

	*(s + j) = '\0';

	return (s);
}
