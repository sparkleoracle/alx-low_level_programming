#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
		dest[t] = src[t];
	for ( ; t < n; t++)
		dest[t] = '\0';

	return (dest);
}
