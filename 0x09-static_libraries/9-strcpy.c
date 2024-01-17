#include "main.h"
#include <stdio.h>
/**
 * _strcpy - main function that copies the string pointed to by src
 * @dest: destination to copy
 * @src: source to copy from
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (*(src + c) != '\0')
	{
		c++;
	}
	for (; d < c ; d++)
	{
		dest[d] = src[d];
	}
	dest[c] = '\0';
	return (dest);
}
