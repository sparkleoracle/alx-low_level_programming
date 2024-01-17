#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int b;

	k = 0;
	b = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[b] != '\0')
	{
		dest[k] = src[b];
		k++;
		b++;
	}

	dest[k] = '\0';
	return (dest);
}
