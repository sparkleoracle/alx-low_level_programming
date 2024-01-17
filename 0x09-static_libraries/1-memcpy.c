#include "main.h"

/**
 * _memcpy - the main function for memory copies area,
 * @dest: parameter for destination memory area.
 * @src: source memory area parameter.
 * @n: number of bytes to be filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
		*(dest + l) =  *(src + l);

	return (dest);
}
