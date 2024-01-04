#include "main.h"

/**
 * _strcpy - function name of string
 *  function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *  @dest: first parameter
 *  @src: second parameter
 *  Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
	dest[i] = '\0';
	return (dest);
}
